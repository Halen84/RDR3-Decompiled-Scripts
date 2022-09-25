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
	struct<174> /*1392*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = -1;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 1;
	var uLocal_199 = -1;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	var uLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	var uLocal_219 = 0;
	bool bLocal_220 = false;
	bool bLocal_221 = false;
	bool bLocal_222 = false;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	Vector3 vLocal_225 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_228 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_231 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_234 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_237 = { 0.0f, 0.0f, 0.0f };
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 0;
	Vector3 vLocal_248 = { 0.0f, 0.0f, 0.0f };
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = -1;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 1097859072;
	var uLocal_285 = 1000;
	var uLocal_286 = 1067450368;
	var uLocal_287 = 5000;
	var uLocal_288 = 42;
	var uLocal_289 = 1103626240;
	var uLocal_290 = 1077936128;
	var uLocal_291 = 1106247680;
	var uLocal_292 = 1103101952;
	var uLocal_293 = 1097859072;
	var uLocal_294 = 1103626240;
	Vector3 vLocal_295 = { 0.0f, 0.0f, 0.0f };
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = -1;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 2;
	var uLocal_311 = 1;
	var uLocal_312 = 1;
	var uLocal_313 = 1;
	var uLocal_314 = 0;
	var uLocal_315 = 1;
	var uLocal_316 = 2;
	var uLocal_317 = 2;
	var uLocal_318 = 3;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 3;
	var uLocal_322 = 1;
	var uLocal_323 = 3;
	var uLocal_324 = 3;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	struct<2> /*16*/ sLocal_327 = { -1, -1 } ;
	var uLocal_329 = -1;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 100;
	var uLocal_337 = -1082130432;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 5;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	struct<2> /*16*/ sLocal_348 = { -1, -1 } ;
	var uLocal_350 = -1;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 100;
	var uLocal_358 = -1082130432;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 5;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	struct<2> /*16*/ sLocal_369 = { -1, -1 } ;
	var uLocal_371 = -1;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 100;
	var uLocal_379 = -1082130432;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 5;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 1176256512;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	struct<2> /*16*/ sLocal_399 = { 0, 0 } ;
	bool bLocal_401 = false;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	int iLocal_416[4] = { 0, 0, 0, 0 };
	int iLocal_421[4] = { 0, 0, 0, 0 };
	int iLocal_426[4] = { 0, 0, 0, 0 };
	int iLocal_431[2] = { 0, 0 };
	var uLocal_434[4] = { 0, 0, 0, 0 };
	var uLocal_439[2] = { 0, 0 };
	struct<32> /*256*/ sLocal_442[4];
	struct<32> /*256*/ sLocal_571[2];
	struct<36> /*288*/ sLocal_636[2];
	struct<75> /*600*/ sLocal_709[2];
	int iLocal_860[2] = { 0, 0 };
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	bool bLocal_869 = false;
	bool bLocal_870 = false;
	bool bLocal_871 = false;
	bool bLocal_872 = false;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	var uLocal_875 = 0;
	int iLocal_876 = 0;
	var uLocal_877 = 4;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	struct<75> /*600*/ sLocal_882[4];
	bool bLocal_1183 = false;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	int iLocal_1193 = 0;
	bool bLocal_1194 = false;
	bool bLocal_1195 = false;
	int iLocal_1196 = 0;
	int iLocal_1197[2] = { 0, 0 };
	int iLocal_1200[4] = { 0, 0, 0, 0 };
	int iLocal_1205[2] = { 0, 0 };
	var uLocal_1208[4] = { 0, 0, 0, 0 };
	var uLocal_1213[2] = { 0, 0 };
	Vector3 vLocal_1216 = { 0.0f, 0.0f, 0.0f };
	var uLocal_1219[2] = { 0, 0 };
	var uLocal_1222[2] = { 0, 0 };
	bool bLocal_1225 = false;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	int iLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	bool bLocal_1236 = false;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	bool bLocal_1240 = false;
	bool bLocal_1241 = false;
	bool bLocal_1242 = false;
	bool bLocal_1243 = false;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	bool bLocal_1250 = false;
	bool bLocal_1251 = false;
	bool bLocal_1252 = false;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	bool bLocal_1258 = false;
	bool bLocal_1259 = false;
	bool bLocal_1260 = false;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#pragma endregion

void __EntryFunction__()
{
	struct<4> /*32*/ sVar0;
	bool bVar4;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_407 = 1;
	iLocal_408 = -1;
	iLocal_410 = -1;
	iLocal_411 = -1;
	vLocal_1216 = { 0.0f, 0.0f, 0.0f /*3*/ };
	bVar4 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar4 = true;
	}
	else
	{
		func_1(&sLocal_14, 1);
		func_2(&sLocal_14, &uScriptParam_0);
		func_3(&uLocal_267);
	}
	while (true)
	{
		if (bVar4)
		{
			func_5(bVar4, 1074, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_407)
			{
				case 1:
					if (func_6(&sLocal_14, &uScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_8(func_7(&sLocal_14), 10.0f, 2);
						func_9(&sLocal_14, &sLocal_399, &(sLocal_399.f_1));
						if (sLocal_399.f_0 == 10)
						{
							func_10(&sLocal_14, 1);
						}
						func_11(&sLocal_14, &sLocal_399, &(sLocal_399.f_1));
						func_12(&iLocal_390, sLocal_399.f_0);
						func_13(&sLocal_399, &vLocal_295);
						if (iLocal_390 == 1)
						{
							if (!func_14(&sLocal_399, &sVar0))
							{
								func_4();
							}
						}
						if (!func_15(&sLocal_399, &iLocal_391, &iLocal_395))
						{
							func_4();
						}
						iLocal_402 = VOLUME::CREATE_VOLUME_CYLINDER(func_7(&sLocal_14), 0.0f, 0.0f, 0.0f, 2.0f, 2.0f, 10.0f);
						iLocal_403 = VOLUME::CREATE_VOLUME_CYLINDER(func_7(&sLocal_14), 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 10.0f);
						if (sLocal_399.f_0 == 8)
						{
							vLocal_248 = { func_16(iLocal_395, 0) /*4*/ };
							if (func_17(0))
							{
								func_18(0);
								func_19(&(sLocal_14.f_5), 0);
							}
						}
						else
						{
							vLocal_248 = { 2621.375f, 641.7349f, 69.56432f /*3*/ };
						}
						func_20();
						func_21();
						func_22(&sLocal_399, iLocal_390, &sLocal_571, &sLocal_442, iLocal_391);
						if (sLocal_399.f_0 != 8 && !VOLUME::DOES_VOLUME_EXIST(sLocal_14.f_173))
						{
							sLocal_14.f_173 = VOLUME::CREATE_VOLUME_CYLINDER(func_7(&sLocal_14), 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 25.0f);
						}
						func_23();
						func_24(vLocal_295.z);
						func_24(vLocal_295.x);
						func_25(&vLocal_295, 1);
						func_26();
						func_27(0);
					}
					else if (sLocal_14.f_160)
					{
						func_4();
					}
					break;
				case 0:
					if (func_28())
					{
						if (func_29(&vLocal_295))
						{
							if (func_32(&iLocal_406, &uLocal_415, func_30(&sLocal_399), 7.0f, func_31(&sLocal_399)))
							{
								if (func_33(&sLocal_399))
								{
									iLocal_405 = func_35(3, func_34(&sLocal_399));
									func_38(iLocal_405, func_36(), func_37(0), 1148846080, -1065353216, 0, 0);
									func_39(iLocal_405, joaat("PROVISION_GAME_MEAT"), 1, 0);
									ENTITY::_SET_ENTITY_CARRYING_FLAG(iLocal_405, 2, false);
									ENTITY::_SET_ENTITY_CARRYING_FLAG(iLocal_405, 7, false);
								}
								if (!func_40(0))
								{
									func_27(3);
								}
								else
								{
									func_27(4);
								}
							}
						}
					}
					break;
				case 3:
					if (func_41())
					{
						func_42(&sLocal_327, 4214.345f, -3737.596f, 167.5375f, 0.0f, 0.0f, -188.6f, 2);
						func_42(&sLocal_348, 4214.345f, -3737.596f, 167.5375f, 0.0f, 0.0f, -188.6f, 2);
						func_43(&sLocal_327, "player", Global_35, 0);
						func_43(&sLocal_348, "player", Global_35, 0);
						if (iLocal_390 != 1)
						{
						}
						else
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_431[0], sVar0, sVar0.f_3, true, false, true);
						}
						func_44();
						func_45(&sLocal_399, &iLocal_421);
						func_27(4);
					}
					break;
				case 4:
					if (!func_46(&sLocal_14, &iLocal_426, iLocal_390, sLocal_399.f_0 == 8, 1, 0, 1, 0))
					{
						func_4();
					}
					if (func_47())
					{
						if (func_48(vLocal_225) || !func_49(Global_35, vLocal_225, 35.0f, 1, 1))
						{
							func_4();
						}
					}
					func_50();
					if (func_51())
					{
						func_4();
					}
					func_52(&sLocal_369, 1);
					func_52(&sLocal_327, 1);
					func_52(&sLocal_348, 1);
					break;
			}
			BUILTIN::WAIT(sLocal_14.f_158);
		}
	}
}

void func_1(var uParam0, bool bParam1)
{
	func_53(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_54("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	MAP::ALLOW_SONAR_BLIPS(bParam1);
}

void func_2(var uParam0, var uParam1)
{
	uParam0->f_3 = func_55(uParam1);
	uParam0->f_161 = func_56(uParam1->f_2, 2);
}

void func_3(var uParam0)
{
	func_57(uParam0, 1);
	func_58(uParam0, 1);
	func_59(uParam0, 1);
}

void func_4()
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	if (iLocal_398 == 8)
	{
		sLocal_14.f_44 = 1;
		sLocal_14.f_48 = 1;
	}
	if (sLocal_399.f_0 != 8)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (((sLocal_14.f_44 || sLocal_14.f_46) || bLocal_1243) || func_40(2))
			{
				COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(func_60(1));
			}
		}
	}
	func_61();
	func_62(&iLocal_408, 1);
	func_63(iLocal_241);
	if (sLocal_14.f_48)
	{
		func_64(sLocal_399.f_0, iLocal_390);
	}
	func_65(&sLocal_327);
	func_65(&sLocal_348);
	TASK::_0x4F57397388E1DFF8();
	func_63(iLocal_244);
	func_63(iLocal_245);
	func_66();
	func_67(&iLocal_421);
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iLocal_406))
	{
		OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iLocal_406, 9);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (func_40(46))
	{
		func_25(&vLocal_295, 2);
	}
	func_68(&iLocal_431, 1, 0, 1);
	func_69(60);
	func_70(&sLocal_14, &iLocal_426, &uLocal_434, iLocal_390, sLocal_399.f_0, sLocal_399.f_1, 0, 1, 0, 1);
	func_71();
}

void func_5(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_72(bParam2) || CAM::IS_SCREEN_FADED_OUT())
		{
			Stack.Invoke(iParam1);
		}
	}
}

bool func_6(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (bParam6 || func_73(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_74(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7.0f;
				if (func_75(uParam0->f_3, 1))
				{
					fVar0 = 20.0f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, (1 << 21));
			}
			if (iParam5 == 1)
			{
				func_76(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(uParam0->f_51, 5.0f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_77(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

Vector3 func_7(var uParam0)
{
	return uParam0->f_51;
}

void func_8(Vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = (1 << 9);
	if (iParam4 & 1 != 0)
	{
		iVar0 |= (1 << 19);
	}
	if (iParam4 & 2 != 0)
	{
		iVar0 |= 1536;
	}
	if (iParam4 & 4 != 0)
	{
		iVar0 |= 2560;
	}
	if (iParam4 & 8 != 0)
	{
		iVar0 |= 4608;
	}
	if (iParam4 & 16 != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_9(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 8;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 2:
			*iParam1 = 10;
			*uParam2 = 1;
			break;
	}
}

void func_10(var uParam0, int iParam1)
{
	uParam0->f_177 = iParam1;
}

void func_11(var uParam0, int iParam1, var uParam2)
{
	switch (*iParam1)
	{
		case 10:
			switch (*uParam2)
			{
				case 0:
					uParam0->f_173 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2581.539f, 617.0823f, 74.4368f, 0.0f, 0.0f, 8.3334f, 10.8f, 23.95f, 8.95f);
					VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(uParam0->f_173, 2581.116f, 624.2293f, 74.5734f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 4.0f);
					break;
			}
			break;
	}
}

void func_12(int iParam0, int iParam1)
{
	if (iParam1 == 8)
	{
		*iParam0 = 0;
	}
	else
	{
		*iParam0 = func_78(iParam1);
	}
}

void func_13(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 8:
			iParam1->f_1 = 765343099;
			*iParam1 = joaat("C_13_NOTRAP_01");
			iParam1->f_2 = -909306169;
			iParam1->f_3 = joaat("WS_BOOBY_TRAP_GUAMA_01");
			iParam1->f_4 = joaat("WS_BOOBY_TRAP_GUAMA_01_END");
			iParam1->f_5 = "DES_trap_gua01x";
			iParam1->f_6 = 1;
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam1 = -890900091;
					iParam1->f_1 = -1758697759;
					iParam1->f_2 = 591001924;
					iParam1->f_3 = joaat("WS_BOOBY_TRAP_ROANOKE_01");
					iParam1->f_4 = joaat("WS_BOOBY_TRAP_ROANOKE_01_END");
					iParam1->f_5 = "DES_trap_roa0B01x";
					iParam1->f_6 = 1;
					break;
				case 1:
					iParam1->f_1 = -2092712551;
					iParam1->f_2 = -1307469679;
					iParam1->f_3 = joaat("WS_BOOBY_TRAP_ROANOKE_02");
					iParam1->f_4 = joaat("WS_BOOBY_TRAP_ROANOKE_02_END");
					iParam1->f_5 = "DES_trap_roa02x";
					break;
			}
			break;
	}
}

bool func_14(int iParam0, var uParam1)
{
	*uParam1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*uParam1 = { 2624.685f, 643.4315f, 73.5474f /*3*/ };
					uParam1->f_3 = 138.5076f;
					break;
				case 1:
					*uParam1 = { 2389.007f, 1052.843f, 85.6323f /*3*/ };
					uParam1->f_3 = 306.6378f;
					break;
			}
			break;
	}
	return !func_48(*uParam1);
}

bool func_15(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = -1;
	*iParam2 = -1;
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam1 = 0;
					*iParam2 = 0;
					break;
				case 1:
					*iParam1 = 1;
					*iParam2 = 2;
					break;
			}
			break;
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					*iParam1 = 2;
					*iParam2 = 3;
					break;
			}
			break;
	}
	if (*iParam1 != -1)
	{
		if (*iParam2 != -1)
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_16(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	sVar0.f_3 = 0.0f;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2586.735f, 617.4406f, 74.6399f /*3*/ };
					sVar0.f_3 = -82.08f;
					break;
				case 1:
					sVar0 = { 2596.203f, 619.8823f, 75.3299f /*3*/ };
					sVar0.f_3 = 105.12f;
					break;
				case 2:
					sVar0 = { 2600.608f, 621.6025f, 75.8978f /*3*/ };
					sVar0.f_3 = 84.24f;
					break;
				case 3:
					sVar0 = { 2605.699f, 624.7128f, 76.1324f /*3*/ };
					sVar0.f_3 = 221.04f;
					break;
				case 4:
					sVar0 = { 2611.041f, 628.8464f, 74.7972f /*3*/ };
					sVar0.f_3 = 38.88f;
					break;
				case 5:
					sVar0 = { 2619.828f, 634.8766f, 72.7787f /*3*/ };
					sVar0.f_3 = 150.275f;
					break;
				case 6:
					sVar0 = { 2626.142f, 638.5869f, 72.9086f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 7:
					sVar0 = { 2630.055f, 643.2579f, 72.7811f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 8:
					sVar0 = { 2636.169f, 647.9924f, 72.8323f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 9:
					sVar0 = { 2637.779f, 650.5483f, 72.8791f /*3*/ };
					sVar0.f_3 = -225.36f;
					break;
				case 10:
					sVar0 = { 2642.899f, 658.6467f, 74.1972f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 11:
					sVar0 = { 2649.134f, 666.0908f, 76.3328f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 12:
					sVar0 = { 2655.031f, 672.7023f, 77.9523f /*3*/ };
					sVar0.f_3 = -7.92f;
					break;
				case 13:
					sVar0 = { 2654.474f, 674.5356f, 78.1413f /*3*/ };
					sVar0.f_3 = 138.96f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2615.015f, 626.7673f, 73.8191f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { 2630.915f, 663.6337f, 72.5417f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 2:
					sVar0 = { 2632.508f, 623.1313f, 78.8116f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 3:
					sVar0 = { 2606.249f, 629.1194f, 75.9507f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { 2599.878f, 638.2327f, 78.714f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 5:
					sVar0 = { 2599.766f, 649.328f, 79.499f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 6:
					sVar0 = { 2602.538f, 655.5307f, 78.7464f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 7:
					sVar0 = { 2609.606f, 673.1621f, 81.8273f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 8:
					sVar0 = { 2625.286f, 664.242f, 72.9997f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 9:
					sVar0 = { 2638.265f, 660.8614f, 73.4116f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 10:
					sVar0 = { 2647.416f, 653.0973f, 74.7707f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 11:
					sVar0 = { 2644.952f, 638.9842f, 76.8377f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 12:
					sVar0 = { 2642.224f, 627.7772f, 80.6329f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 13:
					sVar0 = { 2625.751f, 617.8865f, 77.8699f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2407.042f, 1071.098f, 86.1408f /*3*/ };
					sVar0.f_3 = -49.68f;
					break;
				case 1:
					sVar0 = { 2403.727f, 1068.9f, 85.5532f /*3*/ };
					sVar0.f_3 = -73.44f;
					break;
				case 2:
					sVar0 = { 2399.619f, 1061.415f, 84.0292f /*3*/ };
					sVar0.f_3 = -54.72f;
					break;
				case 3:
					sVar0 = { 2399.104f, 1055.586f, 84.7857f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { 2397.554f, 1052.159f, 85.6961f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 5:
					sVar0 = { 2388.54f, 1043.737f, 85.3725f /*3*/ };
					sVar0.f_3 = 164.814f;
					break;
				case 6:
					sVar0 = { 2382.66f, 1037.209f, 87.7684f /*3*/ };
					sVar0.f_3 = -34.56f;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 4202.292f, -3736.699f, 167.9393f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2616.352f, 637.9186f, 72.5476f /*3*/ };
					sVar0.f_3 = -49.68f;
					break;
				case 1:
					sVar0 = { 2617.767f, 636.4833f, 72.5448f /*3*/ };
					sVar0.f_3 = -37.44f;
					break;
				case 2:
					sVar0 = { 2619.088f, 635.8431f, 72.5485f /*3*/ };
					sVar0.f_3 = -14.4f;
					break;
				case 3:
					sVar0 = { 2620.614f, 635.9105f, 72.5357f /*3*/ };
					sVar0.f_3 = 30.24f;
					break;
				case 4:
					sVar0 = { 2621.242f, 636.9713f, 72.4873f /*3*/ };
					sVar0.f_3 = 59.04f;
					break;
				case 5:
					sVar0 = { 2621.612f, 638.0692f, 72.5215f /*3*/ };
					sVar0.f_3 = 100.08f;
					break;
				case 6:
					sVar0 = { 2621.081f, 638.8146f, 72.584f /*3*/ };
					sVar0.f_3 = 123.84f;
					break;
				case 7:
					sVar0 = { 2620.061f, 640.0323f, 72.5569f /*3*/ };
					sVar0.f_3 = 142.56f;
					break;
				case 8:
					sVar0 = { 2618.991f, 640.9267f, 72.5341f /*3*/ };
					sVar0.f_3 = 144.72f;
					break;
				case 9:
					sVar0 = { 2618.229f, 641.802f, 72.5458f /*3*/ };
					sVar0.f_3 = 179.28f;
					break;
				case 10:
					sVar0 = { 2616.835f, 641.5596f, 72.5398f /*3*/ };
					sVar0.f_3 = -152.64f;
					break;
				case 11:
					sVar0 = { 2615.712f, 641.0846f, 72.4178f /*3*/ };
					sVar0.f_3 = -131.04f;
					break;
				case 12:
					sVar0 = { 2615.542f, 639.8909f, 72.4594f /*3*/ };
					sVar0.f_3 = 257.04f;
					break;
				case 13:
					sVar0 = { 2615.951f, 638.7368f, 72.5477f /*3*/ };
					sVar0.f_3 = -90.0f;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 1573.548f, -7255.91f, 68.7791f /*3*/ };
					sVar0.f_3 = 234.72f;
					break;
				case 1:
					sVar0 = { 1573.346f, -7257.251f, 69.0928f /*3*/ };
					sVar0.f_3 = -64.8f;
					break;
				case 2:
					sVar0 = { 1575.19f, -7258.813f, 69.1305f /*3*/ };
					sVar0.f_3 = 321.35f;
					break;
				case 3:
					sVar0 = { 1576.444f, -7258.701f, 69.1321f /*3*/ };
					sVar0.f_3 = 34.185f;
					break;
				case 4:
					sVar0 = { 1577.666f, -7257.242f, 68.9485f /*3*/ };
					sVar0.f_3 = 55.44f;
					break;
				case 5:
					sVar0 = { 1577.688f, -7255.947f, 68.8239f /*3*/ };
					sVar0.f_3 = 123.12f;
					break;
				case 6:
					sVar0 = { 1576.106f, -7254.452f, 68.7868f /*3*/ };
					sVar0.f_3 = 153.36f;
					break;
				case 7:
					sVar0 = { 1574.765f, -7254.889f, 68.9838f /*3*/ };
					sVar0.f_3 = 223.92f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2410.208f, 1079.648f, 88.0996f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { 2402.145f, 1086.945f, 89.3157f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 2:
					sVar0 = { 2393.499f, 1089.558f, 89.1377f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 3:
					sVar0 = { 2386.055f, 1094.219f, 88.4182f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { 2359.725f, 1055.496f, 84.5451f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 5:
					sVar0 = { 2359.536f, 1044.884f, 85.0826f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 6:
					sVar0 = { 2365.225f, 1036.194f, 86.9162f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 7:
					sVar0 = { 2374.279f, 1028.123f, 89.0517f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 8:
					sVar0 = { 2385.336f, 1026.882f, 89.5849f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 9:
					sVar0 = { 2395.26f, 1027.885f, 89.1314f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 10:
					sVar0 = { 2407.001f, 1031.577f, 88.6485f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 11:
					sVar0 = { 2413.03f, 1043.407f, 89.5882f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 12:
					sVar0 = { 2417.793f, 1052.005f, 89.9445f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 13:
					sVar0 = { 2419.441f, 1063.209f, 86.3127f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2396.024f, 1058.028f, 83.7061f /*3*/ };
					sVar0.f_3 = 108.72f;
					break;
				case 1:
					sVar0 = { 2395.082f, 1058.82f, 83.7971f /*3*/ };
					sVar0.f_3 = 160.56f;
					break;
				case 2:
					sVar0 = { 2393.129f, 1059.159f, 83.4364f /*3*/ };
					sVar0.f_3 = 190.08f;
					break;
				case 3:
					sVar0 = { 2392.219f, 1057.935f, 83.7749f /*3*/ };
					sVar0.f_3 = 246.96f;
					break;
				case 4:
					sVar0 = { 2392.198f, 1056.166f, 83.7657f /*3*/ };
					sVar0.f_3 = 280.08f;
					break;
				case 5:
					sVar0 = { 2392.8f, 1055.188f, 83.8446f /*3*/ };
					sVar0.f_3 = -25.2f;
					break;
				case 6:
					sVar0 = { 2394.925f, 1055.099f, 83.7857f /*3*/ };
					sVar0.f_3 = 14.4f;
					break;
				case 7:
					sVar0 = { 2395.877f, 1055.777f, 83.744f /*3*/ };
					sVar0.f_3 = 59.76f;
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2595.285f, 622.6592f, 75.347f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { 2602.124f, 624.0291f, 76.0802f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 2:
					sVar0 = { 2608.335f, 628.3577f, 75.7731f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 3:
					sVar0 = { 2611.636f, 631.9971f, 74.4702f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { 2614.449f, 638.5141f, 72.5726f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 5:
					sVar0 = { 2615.452f, 644.025f, 72.8983f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 6:
					sVar0 = { 2617.17f, 647.5792f, 72.9845f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 7:
					sVar0 = { 2618.82f, 651.3568f, 73.0774f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 8:
					sVar0 = { 2619.98f, 654.4078f, 73.1717f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 9:
					sVar0 = { 2621.902f, 657.0274f, 72.8711f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 10:
					sVar0 = { 2624.009f, 659.6808f, 72.5155f /*3*/ };
					sVar0.f_3 = 169.2f;
					break;
				case 11:
					sVar0 = { 2627.581f, 664.3073f, 72.6414f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 12:
					sVar0 = { 2632.431f, 666.4427f, 73.1376f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 13:
					sVar0 = { 2637.009f, 669.3921f, 74.4187f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 14:
					sVar0 = { 2641.892f, 675.6752f, 76.4711f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 15:
					sVar0 = { 2647.382f, 677.6343f, 77.6194f /*3*/ };
					sVar0.f_3 = 158.4f;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2618.817f, 638.3134f, 69.7718f /*3*/ };
					sVar0.f_3 = 140.854f;
					break;
				case 1:
					sVar0 = { 2618.928f, 641.5409f, 72.5471f /*3*/ };
					sVar0.f_3 = 154.8f;
					break;
				case 2:
					sVar0 = { 2620.851f, 639.9678f, 72.5471f /*3*/ };
					sVar0.f_3 = -225.36f;
					break;
				case 3:
					sVar0 = { 2394.678f, 1057.208f, 81.077f /*3*/ };
					sVar0.f_3 = 137.864f;
					break;
				case 4:
					sVar0 = { 2392.567f, 1059.698f, 83.7832f /*3*/ };
					sVar0.f_3 = 192.24f;
					break;
				case 5:
					sVar0 = { 2395.801f, 1059.344f, 83.8175f /*3*/ };
					sVar0.f_3 = -193.68f;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2617.576f, 643.037f, 72.5478f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { 2622.594f, 638.7287f, 72.5478f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 2:
					sVar0 = { 2398.032f, 1057.473f, 83.9033f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 3:
					sVar0 = { 2393.453f, 1061.196f, 84.0263f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2402.396f, 1073.558f, 86.5286f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { 2396.352f, 1065.296f, 84.6819f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 2:
					sVar0 = { 2394.385f, 1063.196f, 84.3828f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 3:
					sVar0 = { 2389.755f, 1058.965f, 84.1392f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { 2385.277f, 1054.132f, 84.8011f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 5:
					sVar0 = { 2382.449f, 1050.575f, 85.3463f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 6:
					sVar0 = { 2379.803f, 1047.877f, 85.8123f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 7:
					sVar0 = { 2376.352f, 1045.46f, 86.1738f /*3*/ };
					sVar0.f_3 = 299.52f;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2391.07f, 1060.221f, 84.0628f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { 2390.006f, 1058.561f, 84.0477f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 2:
					sVar0 = { 2390.068f, 1057.23f, 84.0006f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 3:
					sVar0 = { 2391.975f, 1055.304f, 84.0145f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { 2394.604f, 1053.607f, 84.0723f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 5:
					sVar0 = { 2396.073f, 1053.357f, 84.5304f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 6:
					sVar0 = { 2398.15f, 1057.73f, 83.938f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = { 2616.908f, 642.1093f, 72.5479f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 1:
					sVar0 = { 2615.17f, 640.7055f, 72.577f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 2:
					sVar0 = { 2615.417f, 639.0948f, 72.5488f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 3:
					sVar0 = { 2616.748f, 636.798f, 72.5487f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 4:
					sVar0 = { 2619.313f, 635.5421f, 72.5488f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 5:
					sVar0 = { 2621.1f, 636.1342f, 72.5463f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
				case 6:
					sVar0 = { 2621.718f, 637.6596f, 73.1958f /*3*/ };
					sVar0.f_3 = 0.0f;
					break;
			}
			break;
	}
	return sVar0;
}

bool func_17(int iParam0)
{
	return iLocal_390 == iParam0;
}

void func_18(int iParam0)
{
	if (iParam0 < 32)
	{
		MISC::SET_BIT(&iLocal_208, iParam0);
	}
	else
	{
		MISC::SET_BIT(&iLocal_209, (iParam0 - 32));
	}
}

void func_19(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(iParam0, 16);
	}
	else
	{
		func_80(iParam0, (1 << 26));
		func_80(iParam0, 16);
	}
}

void func_20()
{
}

void func_21()
{
	switch (sLocal_399.f_0)
	{
		case 8:
			iLocal_410 = 5;
			iLocal_218 = 8;
			break;
		case 10:
			switch (sLocal_399.f_1)
			{
				case 0:
					iLocal_410 = 4;
					iLocal_218 = 14;
					break;
				case 1:
					iLocal_410 = 7;
					iLocal_218 = 8;
					break;
			}
			break;
	}
}

void func_22(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*iParam0)
	{
		case 3:
		case 10:
			switch (iParam1)
			{
				case 0:
					(uParam2[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*uParam2)[0 /*32*/] = 22;
					(uParam2[0 /*32*/])->f_6 = { func_81(iParam4, 0) /*3*/ };
					strcpy_s(&((uParam2[0 /*32*/])->f_23), 64, "0201_G_M_M_UniInbred_02_WHITE_01");
					func_82(&((uParam2[0 /*32*/])->f_22));
					(uParam2[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*uParam2)[1 /*32*/] = 22;
					(uParam2[1 /*32*/])->f_6 = { func_81(iParam4, 1) /*3*/ };
					strcpy_s(&((uParam2[1 /*32*/])->f_23), 64, "0202_G_M_M_UniInbred_02_WHITE_02");
					func_82(&((uParam2[1 /*32*/])->f_22));
					(iParam3[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(iParam3[0 /*32*/])->f_3 = -2140306968;
					(*iParam3)[0 /*32*/] = 22;
					strcpy_s(&((iParam3[0 /*32*/])->f_23), 64, "0200_G_M_M_UniInbred_01_WHITE_02");
					(iParam3[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(iParam3[1 /*32*/])->f_3 = -367995603;
					(*iParam3)[1 /*32*/] = 22;
					strcpy_s(&((iParam3[1 /*32*/])->f_23), 64, "0199_G_M_M_UniInbred_01_WHITE_01");
					break;
				case 1:
					(uParam2[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(uParam2[0 /*32*/])->f_3 = -71632767;
					(*uParam2)[0 /*32*/] = 22;
					strcpy_s(&((uParam2[0 /*32*/])->f_23), 64, "0204_G_M_M_UniInbred_03_WHITE_02");
					(uParam2[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(uParam2[1 /*32*/])->f_3 = -1246892952;
					(*uParam2)[1 /*32*/] = 22;
					strcpy_s(&((uParam2[1 /*32*/])->f_23), 64, "0202_G_M_M_UniInbred_02_WHITE_02");
					(iParam3[0 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[0 /*32*/] = 22;
					strcpy_s(&((iParam3[0 /*32*/])->f_23), 64, "0203_G_M_M_UniInbred_03_WHITE_01");
					(iParam3[1 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[1 /*32*/] = 22;
					strcpy_s(&((iParam3[1 /*32*/])->f_23), 64, "0201_G_M_M_UniInbred_02_WHITE_01");
					(iParam3[2 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[2 /*32*/] = 22;
					strcpy_s(&((iParam3[2 /*32*/])->f_23), 64, "0199_G_M_M_UniInbred_01_WHITE_01");
					(iParam3[3 /*32*/])->f_1 = joaat("G_M_M_UNIINBRED_01");
					(*iParam3)[3 /*32*/] = 22;
					strcpy_s(&((iParam3[3 /*32*/])->f_23), 64, "0200_G_M_M_UniInbred_01_WHITE_02");
					break;
			}
			break;
		case 8:
			(iParam3[0 /*32*/])->f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
			(iParam3[0 /*32*/])->f_3 = 985642159;
			(*iParam3)[0 /*32*/] = 6;
			strcpy_s(&((iParam3[0 /*32*/])->f_23), 64, "0761_S_M_M_FussarHenchman_01_HISPANIC_02");
			(iParam3[0 /*32*/])->f_6 = { func_81(iParam4, 0) /*3*/ };
			func_82(&((iParam3[0 /*32*/])->f_22));
			(iParam3[1 /*32*/])->f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
			(iParam3[1 /*32*/])->f_3 = 754555171;
			(*iParam3)[1 /*32*/] = 6;
			strcpy_s(&((iParam3[1 /*32*/])->f_23), 64, "0760_S_M_M_FussarHenchman_01_HISPANIC_01");
			(iParam3[1 /*32*/])->f_6 = { func_81(iParam4, 1) /*3*/ };
			func_82(&((iParam3[1 /*32*/])->f_22));
			break;
	}
}

void func_23()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar6;
	float fVar9;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		vVar2 = { func_16(iLocal_410, iVar0) /*4*/ };
		if (!func_48(vVar2))
		{
			iVar1++;
			vVar6 = { vVar6 + vVar2 /*3*/ };
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	fVar9 = (1.0f / BUILTIN::TO_FLOAT(iVar1));
	vLocal_225 = { vVar6 * Vector(fVar9, fVar9, fVar9) /*3*/ };
}

void func_24(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_25(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_83(iParam0->f_3);
			func_84(iParam0->f_4);
			func_83(iParam0->f_4);
			break;
		case 1:
			func_85(iParam0->f_3);
			func_84(iParam0->f_4);
			func_83(iParam0->f_4);
			if (iParam0->f_6)
			{
				func_24(*iParam0);
			}
			break;
		case 2:
			func_83(iParam0->f_3);
			func_85(iParam0->f_4);
			func_86(iParam0->f_4, 0, 0, 3, 0);
			func_24(iParam0->f_1);
			if (iParam0->f_6)
			{
				func_24(*iParam0);
			}
			func_87(iParam0->f_2);
			break;
	}
}

void func_26()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	func_63(iLocal_242);
	switch (sLocal_399.f_0)
	{
		case 8:
			iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1575.651f, -7256.715f, 67.1781f, 0.0f, 0.0f, 52.60049f, 3.488908f, 3.590751f, 6.974801f, "Hole Final");
			break;
		case 10:
			switch (sLocal_399.f_1)
			{
				case 0:
					iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2618.099f, 638.6492f, 70.39433f, 0.0f, 0.0f, -36.92979f, 6.481314f, 9.388302f, 4.046504f, "Hole Final");
					iLocal_404 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("REBOT Failsafe");
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_404, 2618.801f, 638.7524f, 71.26722f, 0.0f, 0.0f, -44.30514f, 5.378187f, 2.417387f, 8.548813f);
					VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_404, 2618.01f, 638.7421f, 72.62446f, 0.0f, 0.0f, -44.33657f, 2.761381f, 1.420066f, 1.0f);
					break;
				case 1:
					iLocal_242 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2393.854f, 1057.106f, 81.62882f, 0.0f, 0.0f, 57.04266f, 5.895999f, 9.398265f, 4.078178f, "Hole Final");
					break;
			}
			break;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iLocal_242) /*3*/ };
	vVar3 = { VOLUME::GET_VOLUME_ROTATION(iLocal_242) /*3*/ };
	vVar6 = { VOLUME::GET_VOLUME_SCALE(iLocal_242) /*3*/ };
	iLocal_243 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6 + Vector(10.0f, 5.0f, 5.0f), "Horse Volume");
	vLocal_1216 = { VOLUME::GET_VOLUME_SCALE(iLocal_243) /*3*/ };
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_404))
	{
		iLocal_404 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar0, vVar3, vVar6 + Vector(3.0f, -0.75f, -0.75f), "REBOT Failsafe");
	}
}

void func_27(int iParam0)
{
	iLocal_407 = iParam0;
}

bool func_28()
{
	if (bLocal_1194)
	{
		return true;
	}
	switch (iLocal_396)
	{
		case 0:
			if (func_88(&sLocal_14))
			{
				func_89(iLocal_391);
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@BOOBY_TRAP@CHASE");
				STREAMING::REQUEST_ANIM_DICT("AI_GESTURES@GEN_MALE@STANDING@SPEAKER");
				func_90();
				if (func_33(&sLocal_399))
				{
					STREAMING::REQUEST_MODEL(func_91(3, func_34(&sLocal_399)), false);
				}
				if (!func_92())
				{
					func_4();
				}
				func_93(&sLocal_571);
				func_93(&sLocal_442);
				func_94(1);
			}
			break;
		case 1:
			if (!func_95(iLocal_391))
			{
				return false;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@BOOBY_TRAP@CHASE") || !STREAMING::HAS_ANIM_DICT_LOADED("AI_GESTURES@GEN_MALE@STANDING@SPEAKER"))
			{
				return false;
			}
			if ((!func_96(&sLocal_327) || !func_96(&sLocal_348)) || !func_96(&sLocal_369))
			{
				return false;
			}
			if (!func_97(&sLocal_348, 3) || !func_97(&sLocal_348, 7))
			{
				return false;
			}
			if (!func_98(&sLocal_571))
			{
				return false;
			}
			if (!func_98(&sLocal_442))
			{
				return false;
			}
			if (func_33(&sLocal_399))
			{
				if (!STREAMING::HAS_MODEL_LOADED(func_91(3, func_34(&sLocal_399))))
				{
					return false;
				}
				if (!func_99())
				{
					return false;
				}
			}
			if (!AUDIO::PREPARE_MUSIC_EVENT("REBOT_START"))
			{
				return false;
			}
			if (!AUDIO::PREPARE_SOUNDSET("REBOT_Sounds", false))
			{
				return false;
			}
			bLocal_1194 = true;
			return true;
	}
	return false;
}

bool func_29(int iParam0)
{
	func_24(iParam0->f_2);
	if (iParam0->f_6)
	{
		func_24(*iParam0);
	}
	if (func_100(iParam0->f_3))
	{
	}
	if (func_100(iParam0->f_4))
	{
		func_83(iParam0->f_4);
		if (func_101(iParam0->f_4))
		{
			func_84(iParam0->f_4);
		}
	}
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0->f_1))
	{
		return false;
	}
	return true;
}

Vector3 func_30(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return { 1575.37f, -7256.625f, 69.0f };
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return { 2619.116f, 639.025f, 72.88657f };
				case 1:
					return { 2394.258f, 1057.631f, 83.874f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

char* func_31(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return "DES_trap_gua01x";
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return "DES_trap_roa0B01x";
				case 1:
					return "DES_trap_roa02x";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_32(int iParam0, var uParam1, Vector3 vParam2, float fParam5, char* sParam6)
{
	int iVar0;

	if (!OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		*iParam0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vParam2, fParam5, sParam6);
	}
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0);
		switch (iVar0)
		{
			case 15:
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 3);
				break;
			case 5:
				*uParam1 = 3;
				return true;
			case 4:
			case 14:
				break;
			default:
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 4);
				break;
		}
	}
	return false;
	switch (*uParam1)
	{
		case 0:
			*iParam0 = OBJECT::GET_RAYFIRE_MAP_OBJECT(vParam2, fParam5, sParam6);
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0) != 5)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 4);
				}
				*uParam1 = 1;
			}
			break;
		case 1:
			iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0);
			switch (iVar0)
			{
				case 4:
				case 5:
				case 14:
					*uParam1 = 2;
					break;
				case 11:
					break;
				default:
					break;
			}
			break;
		case 2:
			if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0) == 5)
			{
				*uParam1 = 3;
				return true;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	if (func_34(iParam0) != -1)
	{
		return true;
	}
	return false;
}

int func_34(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_35(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	int iVar8;

	iVar0 = 0;
	if (func_91(iParam0, iParam1) != 0)
	{
		iVar1 = func_102(iParam0, iParam1);
		vVar2 = { func_81(iParam0, iParam1) /*3*/ };
		vVar5 = { func_103(iParam0, iParam1) /*3*/ };
		iVar8 = func_91(iParam0, iParam1);
		iVar0 = func_104(iVar8, vVar2, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		ENTITY::SET_ENTITY_ROTATION(iVar0, vVar5, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, MISC::IS_BIT_SET(iVar1, 0));
		ENTITY::SET_ENTITY_COLLISION(iVar0, !MISC::IS_BIT_SET(iVar1, 1), false);
		PED::SET_PED_CAN_BE_TARGETTED(iVar0, !MISC::IS_BIT_SET(iVar1, 2));
	}
	return iVar0;
}

char* func_36()
{
	return "SCRIPT_RE@SAVAGE_AFTERMATH@DEAD";
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DEAD_POSE_01";
		case 1:
			return "DEAD_POSE_02";
		case 2:
			return "DEAD_POSE_03";
		case 3:
			return "DEAD_POSE_04";
		case 4:
			return "DEAD_POSE_05";
		case 5:
			return "DEAD_POSE_06";
		default:
			break;
	}
	return func_105("[BEAT]", "BEAT_GET_DEATH_ANIM_NAME_BY_INDEX: Invalid Index.");
}

void func_38(int iParam0, char* sParam1, char* sParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	func_106(iParam0, 1.0f, 0);
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, fParam3, fParam4, -1, 679940 | iParam5, 0.0f, false, iParam6, false, 0, false);
}

void func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_107(iParam0);
		func_108(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

bool func_40(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(iLocal_208, iParam0);
	}
	else
	{
		return MISC::IS_BIT_SET(iLocal_209, (iParam0 - 32));
	}
	return false;
}

bool func_41()
{
	switch (iLocal_397)
	{
		case 0:
			switch (iLocal_390)
			{
				case 0:
					if (func_110(func_7(&sLocal_14), func_109(&sLocal_14), &sLocal_571, &iLocal_431, 0, 0, -1, 1))
					{
						func_111();
						func_112(&iLocal_431);
						func_113(1);
					}
					break;
				case 1:
					if (func_114(&(sLocal_571[0 /*32*/]), &(iLocal_431[0]), func_7(&sLocal_14), func_109(&sLocal_14), 0, 1))
					{
						func_115(iLocal_431[0]);
						func_113(1);
					}
					break;
			}
			break;
		case 1:
			if (func_97(&sLocal_348, 7))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_42(var uParam0, Vector3 vParam1, Vector3 vParam4, int iParam7)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, vParam1, vParam4, iParam7);
	}
}

void func_43(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

void func_44()
{
	Vector3 vVar0;

	switch (sLocal_399.f_0)
	{
		case 10:
			switch (sLocal_399.f_1)
			{
				case 0:
					sLocal_636[0 /*36*/].f_6 = 0;
					sLocal_636[1 /*36*/].f_6 = 8;
					break;
				case 1:
					sLocal_636[0 /*36*/].f_6 = 2;
					sLocal_636[1 /*36*/].f_6 = 11;
					break;
			}
			break;
	}
	sLocal_636[0 /*36*/].f_9 = 0;
	sLocal_636[1 /*36*/].f_9 = 1;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
	{
		iLocal_244 = VOLUME::CREATE_VOLUME_BOX(vVar0, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
		PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_244, iLocal_431[0], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		TASK::_0x2A10538D0A005E81(iLocal_244, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
	{
		iLocal_245 = VOLUME::CREATE_VOLUME_BOX(vVar0, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
		PED::_ATTACH_VOLUME_TO_ENTITY(iLocal_245, iLocal_431[1], 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
		TASK::_0x2A10538D0A005E81(iLocal_245, 1);
	}
}

void func_45(int iParam0, int iParam1)
{
	int iVar0;

	switch (*iParam0)
	{
		case 8:
			(*iParam1)[0] = VOLUME::CREATE_VOLUME_BOX(1575.64f, -7256.629f, 68.85276f, 0.0f, 0.0f, 48.98185f, 3.830818f, 4.016119f, 1.959466f);
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					(*iParam1)[0] = VOLUME::CREATE_VOLUME_BOX(2619.242f, 638.7248f, 72.29485f, 0.0f, 0.0f, -45.56617f, 5.667787f, 2.617765f, 1.773518f);
					(*iParam1)[1] = VOLUME::CREATE_VOLUME_BOX(2618.507f, 638.6099f, 72.68327f, 0.0f, 0.0f, -45.39423f, 6.666659f, 2.130628f, 1.0f);
					(*iParam1)[2] = VOLUME::CREATE_VOLUME_BOX(2617.644f, 637.6544f, 72.62564f, 0.0f, 0.0f, 45.02389f, 0.599446f, 5.483649f, 1.0f);
					(*iParam1)[3] = VOLUME::CREATE_VOLUME_BOX(2617.263f, 637.6937f, 72.62564f, 0.0f, 0.0f, 45.02389f, 1.252389f, 3.982504f, 1.0f);
					break;
				case 1:
					(*iParam1)[0] = VOLUME::CREATE_VOLUME_BOX(2395.139f, 1057.096f, 83.99776f, 0.0f, 0.0f, -38.41385f, 5.346074f, 3.003638f, 1.0f);
					(*iParam1)[1] = VOLUME::CREATE_VOLUME_BOX(2393.754f, 1056.402f, 83.81212f, 0.0f, 0.0f, -35.48756f, 7.099788f, 2.49697f, 1.0f);
					(*iParam1)[2] = VOLUME::CREATE_VOLUME_BOX(2392.959f, 1059.686f, 83.439f, 0.0f, 0.0f, -35.49883f, 2.01019f, 2.183676f, 1.0f);
					break;
			}
			break;
	}
	iVar0 = 0;
	while (iVar0 < *iParam1)
	{
		if (VOLUME::DOES_VOLUME_EXIST((*iParam1)[iVar0]))
		{
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME((*iParam1)[iVar0], 7);
		}
		iVar0++;
	}
}

bool func_46(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_117(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_118(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & (1 << 14) != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_119(&(uParam0->f_5));
			}
			func_79(&(uParam0->f_5), (1 << 14));
		}
	}
	if (!uParam0->f_48 && !func_120(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_123(uParam0, uParam0->f_193, 2.0f);
				}
			}
			break;
		case 2:
			if (!func_124(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_75(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				func_125(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

int func_47()
{
	if (func_126(&uLocal_1247))
	{
		if (!func_127(&uLocal_1247, 30.0f))
		{
			return 0;
		}
	}
	if (sLocal_399.f_0 == 8)
	{
		return func_129(&sLocal_14, &iLocal_426, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
	}
	if (func_130(&iLocal_426, 0))
	{
		return func_129(&sLocal_14, &iLocal_431, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
	}
	return func_129(&sLocal_14, &iLocal_426, func_128(), func_128(), 1, 0, 1, 1, 0, 0, 0, 0, 0);
}

bool func_48(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_49(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_131(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_50()
{
	int iVar0;

	if (sLocal_399.f_0 == 8)
	{
		return;
	}
	if (bLocal_401)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iLocal_860[iVar0] = func_133(&(iLocal_431[iVar0]), &(sLocal_709[iVar0 /*75*/]), func_132(3, 0, 0) | (1 << 11), 1, 0, 0, 0);
			iVar0++;
		}
	}
}

int func_51()
{
	func_134();
	func_135();
	func_136();
	func_137();
	func_138();
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_242))
	{
		if (func_139(Global_35, iLocal_242, 1, 0))
		{
			CAM::_0xC252C0CC969AF79A(1);
			CAM::_0xE2BB2D6A9FE2ECDE(1);
		}
	}
	if (func_40(47))
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, sLocal_327.f_1))
		{
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, sLocal_348.f_1))
			{
				func_140(47);
			}
		}
	}
	else if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, sLocal_327.f_1) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, sLocal_348.f_1))
	{
		func_18(47);
	}
	if (func_40(47))
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	}
	switch (iLocal_390)
	{
		case 0:
			return func_141();
		case 1:
			return func_142();
		default:
			break;
	}
	return 1;
}

void func_52(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_143(uParam0, iVar0, 1))
			{
				if (!func_144(uParam0, iVar0))
				{
					func_145(uParam0, uParam0->f_15[iVar0]);
					if (!func_146(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (func_143(uParam0, 1, 1))
	{
		if (func_147(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || func_144(uParam0, 1))
			{
				func_148(uParam0, 1);
			}
		}
	}
	if (func_143(uParam0, 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || func_144(uParam0, 0))
			{
				func_148(uParam0, 0);
			}
		}
	}
	if (func_143(uParam0, 2, 1))
	{
		if (func_149(uParam0->f_1, uParam0->f_10, 1.0f))
		{
			if (!bParam1 || func_144(uParam0, 2))
			{
				func_148(uParam0, 2);
			}
		}
	}
	if (func_143(uParam0, 3, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || func_144(uParam0, 3))
			{
				func_148(uParam0, 3);
			}
		}
	}
	if (func_143(uParam0, 4, 1))
	{
		if (func_144(uParam0, 4))
		{
			func_148(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
		{
			func_65(uParam0);
		}
	}
}

void func_53(int iParam0)
{
	func_150(iParam0, 0);
	func_151(iParam0, 0);
	func_152(iParam0, 1);
	func_19(iParam0, 1);
	func_153(iParam0, 0);
	func_154(iParam0, 1);
	func_155(iParam0, 1, 1, 1);
}

int func_54(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_156(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_157(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_156(sVar0, iParam1, 0, 0, 1, 1);
}

var func_55(var uParam0)
{
	return *uParam0;
}

bool func_56(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_57(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(iParam0, (1 << 9));
	}
	else
	{
		func_80(iParam0, (1 << 9));
	}
}

void func_58(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(iParam0, 2);
	}
	else
	{
		func_80(iParam0, 2);
	}
}

void func_59(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(iParam0, 8);
	}
	else
	{
		func_80(iParam0, 8);
	}
}

int func_60(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return joaat("GANG_BANDITOS");
		case 2:
			return joaat("GANG_EXCONFED");
		case 1:
			return joaat("GANG_INBRED");
		case 0:
			return joaat("GANG_ODRISCOLL");
		case 4:
			return joaat("GANG_RANCHERS");
		case 3:
			return joaat("GANG_SAVAGES");
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_61()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_240))
	{
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(iLocal_240);
	}
	func_63(iLocal_240);
}

void func_62(int iParam0, int iParam1)
{
	if (func_158(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_63(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_64(int iParam0, int iParam1)
{
	if (iParam0 != 8)
	{
		if (iParam1 == 0)
		{
			func_159(6, 0, 1);
		}
		else
		{
			func_159(6, 0, 0);
		}
	}
}

void func_65(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
		uParam0->f_1 = -1;
	}
}

void func_66()
{
	int iVar0;

	if (bLocal_401)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			func_160(&(sLocal_709[iVar0 /*75*/]));
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iVar0]))
			{
				func_161(&(iLocal_431[iVar0]), &(sLocal_709[iVar0 /*75*/]), &(sLocal_709[iVar0 /*75*/].f_21), 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_431[iVar0], 301, true);
			}
			iVar0++;
		}
		bLocal_401 = false;
	}
}

void func_67(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (VOLUME::DOES_VOLUME_EXIST((*iParam0)[iVar0]))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME((*iParam0)[iVar0]);
			VOLUME::DELETE_VOLUME((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_68(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = PED::GET_MOUNT(Global_35);
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (func_162((*iParam0)[iVar0], 0, 1))
		{
			if (!bParam1 || !DECORATOR::DECOR_EXIST_ON((*iParam0)[iVar0], "pedRoam_bInPedRoam"))
			{
				if (!bParam2)
				{
					func_163((*iParam0)[iVar0], (1 << 30), -1082130432, iVar1, 0);
				}
				else
				{
					TASK::TASK_WANDER_STANDARD((*iParam0)[iVar0], 40000.0f, 0);
				}
				if (bParam3)
				{
					if (PED::GET_PED_STEALTH_MOVEMENT((*iParam0)[iVar0]))
					{
						PED::SET_PED_STEALTH_MOVEMENT((*iParam0)[iVar0], false, 0, 0);
					}
					else if (PED::GET_PED_CROUCH_MOVEMENT((*iParam0)[iVar0]))
					{
						PED::_SET_PED_CROUCH_MOVEMENT((*iParam0)[iVar0], false, 0, false);
					}
				}
				func_164((*iParam0)[iVar0], 0);
			}
		}
		iVar0++;
	}
}

void func_69(int iParam0)
{
	Global_1415398.f_3 = (MISC::GET_GAME_TIMER() + iParam0 * 1000);
}

void func_70(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;

	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_166(uParam0->f_3, (1 << 19));
		}
	}
	if (func_162(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (func_162((*iParam1)[iVar0], 0, 0))
			{
				func_164((*iParam1)[iVar0], bVar3);
				if (func_167(uParam0, iParam1[iVar0]))
				{
					func_168(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_162((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], false, 0, 0);
						}
						else if (PED::GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_163((*iParam1)[iVar0], (1 << 30), func_169(iVar0 < iVar2, uParam0->f_98[iVar0], -1.0f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000.0f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_170(uParam0);
	}
	func_171(uParam0);
	if (!uParam0->f_186)
	{
		func_117(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_172(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_173(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_71()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_72(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
	if (bParam0)
	{
		return true;
	}
	if (func_174(iVar0))
	{
		return false;
	}
	if (func_175(iVar0, 1) || func_175(iVar0, 2))
	{
		return true;
	}
	return false;
}

int func_73(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> /*56*/ sParam4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;

	if (sParam4.f_6 > -1)
	{
		*uParam1 = { func_176(iParam0, sParam4.f_6) /*3*/ };
		uParam1->f_4 = sParam4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_177(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_120(iParam0, 128))
			{
				if (!func_178(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				func_179(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_180(&bVar4, iParam0, uVar2, uVar1) /*3*/ };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (func_48(*uParam1))
				{
					return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_182(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_56(sParam4.f_2, 8))
				{
					func_177(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				func_183(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_184(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_185(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_120(iParam0, 128))
			{
				if (!func_186(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				func_179(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!func_183(uParam1))
					{
						return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_187(iParam0, sParam4.f_1, uParam1, sParam4, iParam14))
			{
				func_177(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_181(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_54("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_54("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_74(var uParam0, int iParam1)
{
	if (func_75(iParam1, 256))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_172) || func_189(iParam1, func_188(uParam0), &(uParam0->f_172)))
		{
			if (func_162(Global_35, 0, 1))
			{
				return ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_75(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

void func_76(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_191(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, (float)iParam1, (float)iParam1, 5.0f, "Custom Sized Ambient Avoidance");
	}
	else if (func_75(uParam0->f_3, 1) && !func_75(uParam0->f_3, 32))
	{
		func_191(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 6.0f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_75(uParam0->f_3, 2) && !func_75(uParam0->f_3, 32))
	{
		func_191(&(uParam0->f_171), uParam0->f_51, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 5.0f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171, 2228255, (1 << 18), 0, -1, -1, uParam0->f_175);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_192(uParam0->f_171, 1);
	}
	if (func_75(uParam0->f_3, 1))
	{
		func_191(&(uParam0->f_174), uParam0->f_51, 0.0f, 0.0f, 0.0f, VOLUME::GET_VOLUME_SCALE(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_193(uParam0->f_174, 0, (1 << 18), 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_171, iParam2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
	}
}

float func_77(Vector3 vParam0)
{
	Vector3 vVar0;

	vVar0 = { Global_36 - vParam0 /*3*/ };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

int func_78(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 != 8)
	{
		iVar0 = func_194(6, 0);
	}
	if (iVar0 < 0 || iVar0 > (2 - 1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_79(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

void func_80(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

Vector3 func_81(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 2588.853f, 617.8844f, 74.7204f };
				case 1:
					return { 2588.99f, 623.9705f, 74.5359f };
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return { 2406.779f, 1070.112f, 85.9727f };
				case 1:
					return { 2401.868f, 1077.862f, 87.4815f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 1555.165f, -7274.888f, 71.6718f };
				case 1:
					return { 1552.618f, -7279.881f, 72.1041f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return { 4214.511f, -3737.849f, 167.0622f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_82(int iParam0)
{
	func_195(iParam0, 32);
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_196(iParam0, 1);
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

void func_84(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_197(iVar0);
		if (iVar1 == -1)
		{
			Jump @75; // curOff = 38
		}
		else if (iVar1 == iParam0)
		{
			if (func_198(iVar1))
			{
				func_83(iVar1);
				func_199(iVar0);
			}
		}
		else
		{
			iVar0++;
		}
	}
}

void func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_196(iParam0, 1);
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

void func_86(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = func_200();
	func_201(&iVar0, 0, iParam1, iParam2, iParam3, iParam4, 0, 0);
	iVar1 = -1;
	if (func_202(iParam0, &iVar1))
	{
		if (func_197(iVar1) == iParam0)
		{
			func_203(iVar1, iParam0);
			func_204(iVar1, iVar0);
			return;
		}
	}
	else if (iVar1 > -1)
	{
		func_203(iVar1, iParam0);
		func_204(iVar1, iVar0);
		return;
	}
}

void func_87(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

bool func_88(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_205(uParam0->f_3);
	iVar1 = func_206(1);
	if (iVar1 > 0)
	{
		iVar0 += iVar1;
	}
	PED::_RESERVE_AMBIENT_PEDS(iVar0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_89(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_207(iParam0))
	{
		STREAMING::REQUEST_MODEL(func_91(iParam0, iVar0), false);
		iVar0++;
	}
}

int func_90()
{
	if (func_210(&sLocal_327, "scenario@randomEvent@BOOBY_TRAP@run", 40166, 40299, 0, 0, 0, 0, 0))
	{
		if (func_210(&sLocal_348, "scenario@randomEvent@BOOBY_TRAP@walk", 40166, 40299, 3, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_91(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return joaat("G_M_M_UNIINBRED_01");
				case 1:
					return joaat("G_M_M_UNIINBRED_01");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return joaat("G_M_M_UNIINBRED_01");
				case 1:
					return joaat("G_M_M_UNIINBRED_01");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return joaat("S_M_M_FUSSARHENCHMAN_01");
				case 1:
					return joaat("S_M_M_FUSSARHENCHMAN_01");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return joaat("A_M_M_GUATOWNFOLK_01");
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_92()
{
	switch (sLocal_399.f_0)
	{
		case 8:
			return func_210(&sLocal_369, "script@beat@wilderness@boobyTrap@fussar", 40166, 40299, 4, 0, 0, 0, 0);
		default:
			break;
	}
	return func_210(&sLocal_369, "script@beat@wilderness@boobyTrap@murfree", 40166, 40299, 4, 0, 0, 0, 0);
	return false;
}

void func_93(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_211(&((iParam0[iVar0 /*32*/])->f_1));
		func_211(&((iParam0[iVar0 /*32*/])->f_12));
		iVar0++;
	}
}

void func_94(int iParam0)
{
	iLocal_396 = iParam0;
}

bool func_95(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_207(iParam0))
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_91(iParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_96(var uParam0)
{
	if (ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false) && ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_1, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
	}
	return false;
}

bool func_97(var uParam0, int iParam1)
{
	char* sVar0;

	if (func_116(uParam0, 0, 0, 0))
	{
		Stack.Invoke(uParam0->f_6, iParam1);
		sVar0 = StackVal;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_1, sVar0))
			{
				return true;
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_1, sVar0))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1, sVar0);
			}
		}
	}
	return false;
}

bool func_98(int iParam0)
{
	int iVar0;
	bool bVar1;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_212(iParam0[iVar0 /*32*/]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_99()
{
	STREAMING::REQUEST_ANIM_DICT(func_36());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_36()))
	{
		return false;
	}
	return true;
}

bool func_100(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_196(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_101(int iParam0)
{
	var uVar0;

	return func_202(iParam0, &uVar0);
}

int func_102(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 0;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return 0;
}

Vector3 func_103(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 66.24f };
				case 1:
					return { 0.0f, 0.0f, 61.2f };
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -54.0f };
				case 1:
					return { 0.0f, 0.0f, -55.44f };
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, -62.64f };
				case 1:
					return { 0.0f, 0.0f, -41.76f };
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return { 0.0f, 0.0f, 84.24f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_104(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_213(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

char* func_105(char* sParam0, char* sParam1)
{
	return "ERR_STRING";
}

void func_106(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_214(fParam1, 0.0f, 1.0f);
		iVar0 = BUILTIN::FLOOR((fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2)));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

int func_107(int iParam0)
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

bool func_108(int iParam0, int iParam1, int iParam2, int iParam3)
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

float func_109(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_110(Vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	int iVar0;

	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_215() || !func_114(iParam4[iVar0 /*32*/], iParam5[iVar0], vParam0, fParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_111()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iVar0]))
		{
			func_216(iLocal_426[iVar0], 0);
		}
		iVar0++;
	}
}

void func_112(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_115((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_113(int iParam0)
{
	iLocal_397 = iParam0;
}

bool func_114(var uParam0, var uParam1, Vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> /*32*/ sVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				sVar2 = { func_217(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
				sVar2.f_3 = func_218(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_219(uParam0->f_12, uParam0, sVar2, sVar2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_220(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						func_216(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					sVar2 = { func_217(vParam2, fParam5, uParam0->f_15, uParam0->f_19) /*3*/ };
					sVar2.f_3 = func_218(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_221(&(uParam0->f_22)));
					sVar2 = { func_217(vParam2, fParam5, uParam0->f_6, bVar1) /*3*/ };
					sVar2.f_3 = func_218(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_219(uParam0->f_1, uParam0, sVar2, sVar2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						func_222(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						func_223(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

void func_115(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (sLocal_399.f_0)
		{
			case 3:
			case 10:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_MURFREE_BROOD"));
				break;
			case 8:
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GUAMA_LAW"));
				break;
		}
	}
}

bool func_116(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		if (bParam1 && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam2 && !ANIMSCENE::IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
		{
			return false;
		}
		if (bParam3 && !ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
		{
			return false;
		}
		return true;
	}
	return false;
}

void func_117(var uParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	vVar0 = { func_7(uParam0) /*3*/ };
	iVar3 = func_172(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::STATSTRACKER_IS_INITIALIZED(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_118(var uParam0, int iParam1)
{
	if (uParam0->f_2 >= *iParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS((*iParam1)[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0.0f;
	}
}

void func_119(var uParam0)
{
	func_152(uParam0, 1);
	func_224(uParam0, 20);
}

bool func_120(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_1 & iParam1 != 0;
}

void func_121(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_190(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_225())
	{
		func_226(1);
	}
	func_227(iParam2, uParam0->f_43);
	func_228(iParam2, 0, 0, 0, 0);
	if (func_229(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(func_165(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_230(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_122(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0.0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0.0f;
		iVar0++;
	}
}

void func_123(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (uParam0->f_178 & func_231())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_120(uParam0->f_3, (1 << 18)))
	{
		if (uParam0->f_5 & (1 << 11) != 0)
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
			return;
		}
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!func_139(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_232(uParam0, bVar0);
		func_233(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432, 0, 90.0f, 0, uParam0->f_98[iParam1]);
		if (func_234(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
		}
	}
}

bool func_124(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = 30.0f;
	fVar1 = 150.0f;
	if (func_75(uParam2->f_3, 1))
	{
		fVar1 = 150.0f;
	}
	else
	{
		fVar1 = 70.0f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_235())
			{
				fVar0 = 15.0f;
			}
		}
		if (func_236(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_237(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!func_236(uParam2, fVar1))
		{
			if (!func_238(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!func_239(uParam2->f_3, 2) && func_240(2))
		{
			return false;
		}
		if (func_75(iParam0, (1 << 22)) || func_75(iParam0, (1 << 25)))
		{
			if (func_241(1))
			{
				return false;
			}
		}
	}
	if (func_242(Global_35))
	{
		return false;
	}
	if (func_243(0, 1, 1) && !func_244(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_75(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (func_245(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_237(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_246())
		{
			return false;
		}
		iVar2 = func_248(func_247());
		if (func_249(iVar2))
		{
			if (func_250(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_251(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_252(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_125(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (func_253(uParam0->f_51))
	{
		func_254(uParam0->f_51, 0);
		fVar0 = func_255(uParam0->f_3);
		iVar2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_51, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, func_256());
		bVar1 = func_169(!func_75(uParam0->f_3, 1), 20.0f, -1.0f);
		uParam0->f_51.f_11 = func_258(iVar2, func_257(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

bool func_126(var uParam0)
{
	return func_259(*uParam0, 1);
}

bool func_127(var uParam0, float fParam1)
{
	if (!func_126(uParam0))
	{
		return false;
	}
	if (func_260(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_128()
{
	return func_40(6);
}

int func_129(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	Vector3 vVar1;

	fVar0 = 0.0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_261())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300.0f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 -= 65.0f;
				}
			}
			else if (func_262(uParam0->f_3))
			{
				fVar0 = 250.0f;
			}
			else if (func_75(uParam0->f_3, (1 << 17)))
			{
				fVar0 = 70.0f;
				fVar0 += 10.0f;
			}
			else if (func_75(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215.0f;
				fVar0 += 20.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 80.0f;
				}
			}
			else if (func_75(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125.0f;
				fVar0 += 10.0f;
				if (uParam0->f_48)
				{
					fVar0 -= 50.0f;
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 *= fVar0;
		if (bParam2)
		{
			if (uParam0->f_188 < *iParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*iParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0.0f)
			{
				if (func_131(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 /*3*/ };
				if (func_131(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *iParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

bool func_130(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return true;
}

float func_131(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_132(int iParam0, int iParam1, int iParam2)
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

int func_133(var uParam0, int* iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	return func_263(uParam0, iParam1, iParam1->f_74, &(iParam1->f_21), 0.0f, iParam3, iParam4, iParam1->f_73, iParam2, iParam5, iParam6, 2, -1082130432);
}

void func_134()
{
	if (!func_40(36))
	{
		if (func_40(35))
		{
			if ((ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERRUPTIBLE")) || (iLocal_411 == 0 && func_264(&sLocal_327, Global_35, "player", 1))) || (iLocal_411 == 1 && func_264(&sLocal_348, Global_35, "player", 1)))
			{
				func_18(36);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_140(43);
				bLocal_1260 = true;
			}
		}
	}
	else if (bLocal_1260)
	{
		if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
		{
			if (func_265(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED"))
			{
				func_266();
			}
			bLocal_1260 = false;
		}
	}
}

void func_135()
{
	int iVar0;
	int iVar1;

	if (bLocal_1195)
	{
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		{
			if (!func_267())
			{
				if (func_268())
				{
					if (!func_126(&uLocal_1190))
					{
						func_269(&uLocal_1190);
					}
					else if (func_127(&uLocal_1190, 3.0f))
					{
						func_270();
					}
				}
			}
		}
	}
	func_271();
	if (!bLocal_1183)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			iVar0 = PED::GET_MOUNT(Global_35);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (func_139(iVar0, iLocal_243, 1, 0))
				{
					bLocal_1183 = true;
				}
			}
			else
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (func_272(iVar1))
					{
						func_273();
						func_274();
						PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
						func_66();
					}
				}
			}
		}
		else if (!func_40(2))
		{
			if (func_275() && (!func_40(15) || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1)))
			{
				func_273();
				func_274();
				func_66();
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
				PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 2000, 3000, 2, func_276(Global_35, vLocal_225, 1065353216), (vLocal_225.z - 1.0f), vLocal_225, vLocal_225);
			}
			else if (func_277())
			{
				if (sLocal_399.f_0 == 8)
				{
					func_274();
				}
				func_18(2);
				func_18(35);
			}
		}
	}
	else
	{
		if (func_126(&uLocal_252))
		{
			func_269(&uLocal_252);
		}
		if (bLocal_1183)
		{
			if (func_278())
			{
				func_18(21);
				bLocal_1183 = false;
			}
		}
	}
}

void func_136()
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!func_40(34))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1121862613))
		{
			if (func_280(&vVar0, &vVar3, func_279(sLocal_399.f_0 == 8, 1, 0)))
			{
				switch (iLocal_411)
				{
					case 0:
						func_42(&sLocal_327, vVar0, vVar3, 2);
						break;
					case 1:
						func_42(&sLocal_348, vVar0, vVar3, 2);
						break;
				}
			}
			func_281();
			func_18(34);
			func_18(46);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1758060041))
	{
		if (!func_282(&iLocal_406, &uLocal_415, 0))
		{
		}
	}
}

void func_137()
{
	if (bLocal_1241 && !bLocal_1242)
	{
		if (((((!func_283(iLocal_426[0], 0) && !func_283(iLocal_426[1], 0)) && !func_283(iLocal_426[2], 0)) && !func_283(iLocal_426[3], 0)) && !func_283(iLocal_431[0], 0)) && !func_283(iLocal_431[1], 0))
		{
			func_284(Global_35, Global_35, "RE_BOT_FLEE_RESP", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			bLocal_1242 = true;
			func_269(&uLocal_1244);
		}
	}
}

void func_138()
{
	bool bVar0;

	if (!bLocal_1243 && sLocal_399.f_0 != 8)
	{
		if (sLocal_14.f_46)
		{
			bVar0 = (func_126(&uLocal_1247) || (func_130(&iLocal_426, 0) && func_130(&iLocal_431, 0)));
			if (bVar0)
			{
				if (!func_283(Global_35, 0))
				{
					if (!func_126(&uLocal_1247))
					{
						func_269(&uLocal_1247);
					}
					else if (func_285(&uLocal_1247, 2.0f))
					{
						if (iLocal_390 == 0)
						{
							if (func_286(1, 1))
							{
								func_284(Global_35, Global_35, "RE_BOT_FTH_V1_PLYFINAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
							else
							{
								func_284(Global_35, Global_35, "RE_BOT_FTH_V1_PLYFINAL_FEUD", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							}
						}
						else
						{
							func_284(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_FIGHT", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
						bLocal_1243 = true;
					}
				}
			}
		}
	}
}

bool func_139(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_140(int iParam0)
{
	if (iParam0 < 32)
	{
		MISC::CLEAR_BIT(&iLocal_208, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_209, (iParam0 - 32));
	}
}

int func_141()
{
	func_287();
	if (iLocal_398 > 1)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_431[0], 2118640473))
		{
			if (!func_283(iLocal_431[1], 0))
			{
				func_288(0, 0);
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_431[1], 2118640473))
		{
			if (!func_283(iLocal_431[0], 0))
			{
				func_288(1, 0);
			}
		}
	}
	switch (iLocal_398)
	{
		case 0:
			if (sLocal_399.f_0 != 8)
			{
				func_289(0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), "Murfree_01", 0, 1, 1);
				func_289(1, joaat("WEAPON_REVOLVER_CATTLEMAN"), "Murfree_02", 0, 1, 1);
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[0], true, 0, false);
				PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[1], true, 0, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[0], Global_35, -1, -1.0f, -1.0f, -1.0f);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[1], Global_35, -1, -1.0f, -1.0f, -1.0f);
			}
			func_290(1);
			break;
		case 1:
			if (func_291())
			{
				func_292(11, (1 << 11));
				if (sLocal_399.f_0 == 8)
				{
					func_290(2);
				}
				else
				{
					func_121(&sLocal_14, &(sLocal_14.f_48), 6, &(sLocal_14.f_51.f_6));
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[0], false, 0, false);
						PED::SET_PED_USING_ACTION_MODE(iLocal_431[0], true, -1, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(iLocal_431[1], false, 0, false);
						PED::SET_PED_USING_ACTION_MODE(iLocal_431[1], true, -1, 0);
					}
					func_293();
					if (!func_294(Global_35))
					{
						func_290(5);
					}
					else
					{
						iLocal_246 = func_295(Global_35);
						func_290(4);
					}
				}
			}
			break;
		case 2:
			func_296();
			break;
		case 4:
			func_297();
			if (func_298())
			{
				func_290(5);
				func_293();
			}
			break;
		case 5:
			return func_299();
		case 8:
			if (sLocal_399.f_0 == 8)
			{
				if (!bLocal_1250)
				{
					if (ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
					{
						if (ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
						{
							func_284(Global_35, Global_35, "RE_BOT_GUA_V1_PLYFINAL", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							bLocal_1250 = true;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_142()
{
	func_300();
	switch (iLocal_398)
	{
		case 0:
			func_301(iLocal_431[0], &sLocal_14, 0);
			PED::_SET_PED_DESIRED_LOCO_FOR_MODEL(iLocal_431[0], "Default");
			PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_431[0], "injured_LEFT_LEG");
			iLocal_398 = 1;
			break;
		case 1:
			if (func_291())
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[0], Global_35, -1, -1.0f, -1.0f, -1.0f);
				func_284(iLocal_431[0], Global_35, func_302("OVERHERE", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				func_292(11, (1 << 11));
				func_121(&sLocal_14, &(sLocal_14.f_48), 6, &(sLocal_14.f_51.f_6));
				func_303(iLocal_431[0], &(uLocal_439[0]), joaat("BLIP_STYLE_FRIENDLY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_439[0], "RE_INTER_STRANGER");
				iLocal_398 = 3;
			}
			else
			{
				func_304();
				if (!bLocal_1258)
				{
					func_305();
				}
			}
			break;
		case 3:
			if (func_306())
			{
				iLocal_398 = 8;
			}
			break;
		case 8:
			break;
	}
	return 0;
}

bool func_143(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return false;
	}
	return ((!bParam2 || func_116(uParam0, 0, 0, 0)) && MISC::IS_BIT_SET(uParam0->f_8, iParam1));
}

bool func_144(var uParam0, int iParam1)
{
	return func_307(uParam0, uParam0->f_15[iParam1]);
}

bool func_145(var uParam0, int iParam1)
{
	char* sVar0;

	Stack.Invoke(uParam0->f_6, iParam1);
	sVar0 = StackVal;
	return ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1, sVar0);
}

bool func_146(var uParam0, int iParam1)
{
	return func_308(uParam0, uParam0->f_15[iParam1]);
}

bool func_147(int iParam0, int iParam1)
{
	return (func_309(iParam0) || (ANIMSCENE::_GET_ANIM_SCENE_DURATION(iParam0) - ANIMSCENE::_GET_ANIM_SCENE_TIME(iParam0)) <= (BUILTIN::TO_FLOAT(iParam1) * 0.001f));
}

void func_148(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = uParam0->f_15[iParam1];
	Stack.Invoke(uParam0->f_6, uParam0->f_1, uVar0);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(StackVal, StackVal, true);
	func_310(uParam0, iParam1, 0);
	uParam0->f_2 = uVar0;
	Stack.Invoke(uParam0->f_5, uVar0);
}

bool func_149(int iParam0, float fParam1, float fParam2)
{
	return (ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0) >= fParam1 && ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0) <= fParam2);
}

void func_150(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), (1 << 14));
	}
	else
	{
		func_79(&(uParam0->f_1), (1 << 14));
	}
}

void func_151(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), (1 << 11));
	}
	else
	{
		func_79(&(uParam0->f_1), (1 << 11));
	}
}

void func_152(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(uParam0->f_1), 256);
	}
	else
	{
		func_79(&(uParam0->f_1), 256);
	}
}

void func_153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_80(&(iParam0->f_1), 128);
	}
	else
	{
		func_79(&(iParam0->f_1), 128);
	}
}

void func_154(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(iParam0, 256);
	}
	else
	{
		func_80(iParam0, 256);
	}
}

void func_155(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_79(iParam0, (1 << 28));
	}
	else
	{
		func_80(iParam0, (1 << 28));
	}
	if (!bParam2)
	{
		func_79(iParam0, (1 << 30));
	}
	else
	{
		func_80(iParam0, (1 << 30));
	}
	if (!bParam3)
	{
		func_79(iParam0, (1 << 29));
	}
	else
	{
		func_80(iParam0, (1 << 29));
	}
}

int func_156(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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
	iVar15 = UIFEED::_UI_FEED_POST_OBJECTIVE(&sVar0, &sVar13, bParam5);
	return iVar15;
}

char* func_157(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, sParam1, sParam4);
		case 2:
			return MISC::VAR_STRING(2, sParam1, sParam4, sParam5);
		case 3:
			return MISC::VAR_STRING(10, sParam1, sParam2);
		case 4:
			return MISC::VAR_STRING(42, sParam1, sParam2, sParam3);
	}
	return MISC::VAR_STRING(2, func_311(sParam1));
}

bool func_158(int iParam0)
{
	if (*iParam0 == 0)
	{
		return false;
	}
	return *iParam0 != -1;
}

void func_159(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_312(iParam0, iParam1);
	Global_17504.f_1003[iVar0 /*6*/].f_1 = iParam2;
}

void func_160(int* iParam0)
{
	func_313(iParam0, &(iParam0->f_21));
}

void func_161(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		func_314(uParam0);
		func_313(iParam1, uParam2);
	}
	func_315(*uParam0, 1, bParam4);
}

bool func_162(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_316(iParam0, iParam1);
}

void func_163(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (!Global_1935630.f_12 && (!bParam4 || func_162(iParam0, 0, 1)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam3))
		{
			iParam3 = PED::GET_MOUNT(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, false);
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iParam0);
			fVar2 = func_169(fParam2 >= 0.0f, fParam2, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36));
			if (fVar2 > 25.0f && ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				func_317(&iParam0);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 1000.0f, -1, 0, fParam1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iVar0, 0.1f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				iVar1 = PED::GET_MOUNT(iParam0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::_SET_REMOVE_PED_NETWORKED(iVar1, -1);
				}
				PED::_SET_REMOVE_PED_NETWORKED(iParam0, -1);
			}
		}
	}
}

void func_164(int iParam0, bool bParam1)
{
	if (func_162(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		func_318(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

char* func_165(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_166(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 |= iParam1;
}

bool func_167(var uParam0, var uParam1)
{
	if (func_75(uParam0->f_3, (1 << 24)))
	{
		if (func_319(*uParam1) != -1 || ENTITY::GET_ENTITY_MODEL(*uParam1) == joaat("G_M_M_UNIBRONTEGOONS_01"))
		{
			return true;
		}
	}
	return false;
}

void func_168(var uParam0)
{
	PED::SET_PED_CONFIG_FLAG(*uParam0, 6, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 4, false);
	PED::SET_PED_CONFIG_FLAG(*uParam0, 494, true);
}

float func_169(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_170(var uParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_171))
	{
		func_320(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_171);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_321(uParam0);
	func_322(uParam0);
	func_323(uParam0);
	if (!func_324(uParam0))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(uParam0->f_51.f_11))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(uParam0->f_51.f_11);
		}
		func_254(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_325();
	}
	if (!func_326(uParam0->f_3) && !func_75(uParam0->f_3, 256))
	{
		func_327(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_63(uParam0->f_173);
	func_63(uParam0->f_172);
}

void func_171(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_181))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_181));
	}
}

int func_172(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_173(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_328() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_174(int iParam0)
{
	if (((func_175(iParam0, 1) && func_175(iParam0, 2)) && func_175(iParam0, 8)) && func_175(iParam0, (1 << 9)))
	{
		return true;
	}
	return false;
}

bool func_175(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

Vector3 func_176(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!func_190(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (func_329(iParam0) == 0)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	iVar0 = (func_330(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1310750.f_13358[iVar0 /*3*/];
}

void func_177(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	if (func_75(iParam0, 32))
	{
		if (func_331(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_332(Global_35, &(uParam1->f_12)) /*3*/ };
				if (!func_48(vVar1))
				{
					*uParam1 = { vVar1 /*3*/ };
				}
			}
		}
	}
	if (bParam2)
	{
		func_333(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_255(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0.0f, 0.0f, 0.0f, fVar4, fVar4, fVar4, func_256());
		if (func_334(Global_1310750[iParam0 /*111*/], (1 << 25)))
		{
			func_258(iVar0, func_257(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_258(iVar0, func_257(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_75(iParam0, 1))
		{
			func_335(*uParam1 + Vector(1.0f, 0.0f, 0.0f), 25.0f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_336(iParam0);
}

bool func_178(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;

	*uParam1 = TASK::_0x74F0209674864CBD();
	if (!TASK::_0x1AC5A8AB50CFAA33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/].f_1 != -1)
		{
			func_337(uParam1, Global_1310750[iParam0 /*111*/].f_4.f_4[iVar0 /*3*/]);
		}
		iVar0++;
	}
	if (func_120(iParam0, 16))
	{
		TASK::_0xB8E3486D107F4194(*uParam1, 55.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 180.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_338(iParam0));
		fVar1 = 60.0f;
	}
	else
	{
		TASK::_0x65D281985F2BDFC2(*uParam1, 35.0f);
		TASK::_0x827A58CED9D4D5B4(*uParam1, 65.0f);
		fVar2 = BUILTIN::TO_FLOAT(func_338(iParam0));
		fVar1 = 60.0f;
	}
	TASK::_0x9B6A58FDB0024F12(*uParam1, 35.0f);
	TASK::_0x954451EA2D2120FB(*uParam1, fVar2);
	TASK::_0x0F4F6C4CE471259D(*uParam1, (fVar2 + fVar1));
	TASK::_0x4A7D73989F52EB37(*uParam1, (fVar2 + 10.0f));
	TASK::_0x8F8C84363810691A(*uParam1, 7.0f);
	TASK::_0x2B8AF29A78024BD3(*uParam1);
	return true;
}

void func_179(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_339(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225.0f;
				*fParam2 = 6400.0f;
			}
			else
			{
				*fParam1 = 225.0f;
				*fParam2 = 4900.0f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_75(iParam0, 1))
			{
				if (func_120(iParam0, 2))
				{
				}
			}
			func_340(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 2:
			func_341(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 *= *fParam1;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		case 3:
			func_341(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7.0f;
			*fParam2 *= *fParam2;
			*iParam3 *= *iParam3;
			break;
		default:
			break;
	}
	if (func_262(iParam0))
	{
		*fParam2 = 40000.0f;
	}
}

Vector3 func_180(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	float fVar7;
	float fVar8;

	fVar7 = 999999.9f;
	fVar8 = 0.0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_329(iParam1))
	{
		if (!func_342(iParam1, iVar0))
		{
			vVar4 = { func_176(iParam1, iVar0) /*3*/ };
			if (!func_48(vVar4))
			{
				fVar8 = BUILTIN::VDIST(Global_36, vVar4);
				if (func_185(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_343(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = BUILTIN::VDIST(Global_36, vVar4);
						vVar1 = { vVar4 /*3*/ };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_48(vVar4))
	{
	}
	return vVar1;
}

int func_181(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_54("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_182(int iParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_329(iParam0))
	{
		vVar1 = { func_176(iParam0, iVar0) /*3*/ };
		if (func_344(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_183(var uParam0)
{
	int iVar0;

	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
		if (uParam0->f_7 == 0)
		{
		}
		GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4.0f);
	}
	else
	{
		iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_184(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;

	vVar2 = { *uParam0 /*3*/ };
	func_345(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_346(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_48(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] /*3*/ };
				vVar8 = { MISC::GET_CLOSEST_POINT_ON_LINE(Global_36, vVar2, vVar5, true) /*3*/ };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35.0f * 35.0f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80.0f * 80.0f))
				{
					if (bParam4)
					{
						iVar1 = func_347(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] /*3*/ };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_181(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_185(float fParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;

	fVar3 = (fParam0 * fParam0);
	func_179(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_75(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_186(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (TASK::_0x0365000D8BF86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { TASK::_0x865732725536EE39(&(uParam0->f_10)) /*3*/ };
		return true;
	}
	return false;
}

bool func_187(int iParam0, var uParam1, var uParam2, struct<7> /*56*/ sParam3, bool bParam10)
{
	if (func_348(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_349(iParam0, uParam2))
	{
		return false;
	}
	if (!func_350(sParam3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_351(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

int func_188(var uParam0)
{
	return uParam0->f_51.f_4;
}

bool func_189(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -771.7f, -1343.6f, 43.9f, 0.0f, 0.0f, 0.0f, 95.0f, 140.0f, 50.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -852.4f, -1349.5f, 45.0f, 5.0f, 0.0f, 0.0f, 70.0f, 130.0f, 50.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -907.6f, -1362.1f, 49.0f, 0.0f, 0.0f, 0.0f, 50.0f, 100.0f, 50.0f);
					return true;
				case 2:
					*uParam2 = VOLUME::CREATE_VOLUME_AGGREGATE();
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -270.606f, 827.282f, 118.4249f, 0.0f, 0.0f, 11.275f, 80.0f, 100.4f, 86.6f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -235.442f, 653.1498f, 112.3099f, 0.0f, 0.0f, 49.575f, 44.4f, 76.775f, 50.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0.0f, 0.0f, 17.55f, 53.975f, 105.5f, 20.0f);
					VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(*uParam2, -339.8f, 829.675f, 100.0f, 0.0f, 0.0f, 14.975f, 25.0f, 75.0f, 50.0f);
					return true;
			}
			break;
	}
	return false;
}

bool func_190(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_191(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_192(int iParam0, int iParam1)
{
	if (func_352(iParam0))
	{
		return;
	}
	if (func_353(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602 /*2*/].f_1 = iParam1;
	Global_36581[Global_36602 /*2*/] = iParam0;
	Global_36602++;
}

void func_193(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, 0);
	if (bParam3)
	{
		func_80(&iParam1, (1 << 13));
	}
	if (bParam4)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 2 | 4 | 1, iParam2 | (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_194(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_354(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0 /*6*/].f_1;
	}
	return 0;
}

void func_195(int iParam0, int iParam1)
{
	func_355(iParam0, iParam1);
}

int func_196(int iParam0, int iParam1)
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

int func_197(int iParam0)
{
	return Global_40.f_297[iParam0];
}

bool func_198(int iParam0)
{
	int iVar0;

	if (func_202(iParam0, &iVar0))
	{
		if (func_200() > func_356(iVar0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_199(int iParam0)
{
	func_203(iParam0, -1);
	func_204(iParam0, -15);
}

int func_200()
{
	return Global_1899515;
}

void func_201(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_357(*iParam0);
	iVar1 = func_358(*iParam0);
	iVar2 = func_359(*iParam0);
	iVar3 = func_360(*iParam0);
	iVar4 = func_361(*iParam0);
	iVar5 = func_362(*iParam0);
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
	iVar6 = func_363(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_363(iVar1, iVar0);
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
	func_364(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_202(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_197(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
		else if (func_197(iVar0) == -1)
		{
			*iParam1 = iVar0;
			return false;
		}
	else
	{
		}
		iVar0++;
	}
	*iParam1 = -1;
	return false;
}

void func_203(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0] = iParam1;
}

void func_204(int iParam0, int iParam1)
{
	Global_40.f_297[iParam0 + 30] = iParam1;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_206(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_365(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_366(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_366(), iVar3);
		if (func_367(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

char* func_208(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_RUN_SHORT";
		case 3:
			return "PBL_WALK_SHORT";
		case 2:
			return "PBL_RUN_INBRED_RD";
		case 4:
			return "PBL_ACTION";
		case 5:
			return "PBL_BREAKOUT_MID";
		case 6:
			return "PBL_BREAKOUT_POST";
		case 7:
			return func_368(sLocal_399.f_0 == 8, "PBL_CROUCH_WALK_SHORT", "PBL_CROUCH_WALK");
		default:
			break;
	}
	return func_105("[REBOT]", "REBOT_PBL_INDEX_NAME: Invalid PBL Index.");
}

void func_209(var uParam0)
{
}

bool func_210(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8)
{
	uParam0->f_2 = iParam4;
	uParam0->f_3 = iParam6;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, sParam7, false, true);
	}
	else if (iParam4 != -1)
	{
		Stack.Invoke(iParam2, sParam1, iParam5, iParam4);
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(StackVal, StackVal, StackVal, false, true);
	}
	else
	{
		uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam5, 0, false, true);
	}
	uParam0->f_4 = sParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_5 = iParam3;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		if (!bParam8)
		{
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
		}
		return true;
	}
	return false;
}

void func_211(var uParam0)
{
	if (*uParam0 != 0)
	{
		STREAMING::REQUEST_MODEL(*uParam0, false);
	}
}

bool func_212(var uParam0)
{
	if (!func_369(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_369(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			uParam0->f_5 = PED::_REQUEST_METAPED_OUTFIT(uParam0->f_1, uParam0->f_3);
			if (!PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
			{
				uParam0->f_3 = joaat("META_OUTFIT_DEFAULT");
			}
			return false;
		}
		else if (!PED::_HAS_METAPED_OUTFIT_LOADED(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

void func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_370(iParam1))
		{
			func_371(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_372(iParam0, 0, 1);
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
			func_373(iParam0, 0);
			bVar0 = true;
		}
		func_374(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_214(float fParam0, float fParam1, float fParam2)
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

bool func_215()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1899517)
	{
		if (Global_1899517[iVar0] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_216(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "honor_block");
		}
		iVar0 |= func_375(iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "honor_block", iVar0);
	}
}

Vector3 func_217(Vector3 vParam0, bool bParam3, Vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, bParam3, vParam4);
}

float func_218(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_376((fParam0 + fParam1));
}

int func_219(int iParam0, var uParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		func_377(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_378(uParam1))
	{
		iVar0 = PED::_CREATE_METAPED_OUTFIT_PED(uParam1->f_5, vParam2, bParam5, true, true, bParam9, bParam10);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = func_104(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam1->f_5))
		{
			PED::_RELEASE_METAPED_OUTFIT_REQUEST(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_104(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	else
	{
		EVENT::_0x9520175B35E2268D(iVar0, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		if (uParam1->f_10)
		{
			if (PED::IS_PED_HUMAN(iVar0))
			{
				PED::_0x0FB1BA7FF73B41E1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_23)) && !func_379(iVar0))
		{
			func_223(iVar0, &(uParam1->f_23), 0);
		}
		if (func_379(iVar0))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 48, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
		}
		if (func_380(&(uParam1->f_22)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_TO_RAGDOLL(iVar0, 1000, 1000, 1, false, false, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, !func_381(&(uParam1->f_22)));
			func_383(iVar0, func_382(&(uParam1->f_22)), 0);
		}
		else
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		}
		if (func_384(&(uParam1->f_22)))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		if (func_385(&(uParam1->f_22)))
		{
			func_386(iVar0, 1);
		}
		ENTITY::_SET_ENTITY_FADE_IN(iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 6, func_387(&(uParam1->f_22)));
		PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
		if (!func_388(uParam1->f_22, (1 << 13)))
		{
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
		}
		if (!func_379(iVar0))
		{
			func_390(iVar0, !func_389(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 4, func_391(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, !func_392(&(uParam1->f_22)));
			PED::SET_PED_CONFIG_FLAG(iVar0, 317, !func_392(&(uParam1->f_22)));
			if (uParam1->f_31 != joaat("REL_NO_RELATIONSHIP"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, uParam1->f_31);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_HUMAN(iVar0))
		{
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatPed", true);
			DECORATOR::DECOR_SET_BOOL(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_220(int iParam0, int iParam1)
{
	if (func_393(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("G_M_M_UNISWAMP_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			return true;
		case joaat("G_M_M_UNICRIMINALS_02"):
		case joaat("G_M_M_UNICRIMINALS_01"):
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_221(var uParam0)
{
	return func_388(*uParam0, 32);
}

int func_222(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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

void func_223(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_162(iParam0, 0, 0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
	}
}

void func_224(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_225()
{
	return Global_1935436 == 2;
}

void func_226(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_227(int iParam0, int iParam1)
{
	float fVar0;

	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (func_75(iParam0, 2))
	{
		func_395(iParam0, func_394(iParam1));
	}
	else
	{
		func_397(iParam0, func_396());
	}
	fVar0 = (1.0f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2.0f)
	{
		fVar0 = 2.0f;
	}
	else if (fVar0 < 1.0f)
	{
		fVar0 = 1.0f;
	}
	func_398(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	func_399(iParam0, 0);
	func_400(iParam0);
	func_401(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::CLEAR_CONVERSATION_HISTORY();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_75(iParam0, 16))
	{
		func_228(iParam0, 0, 0, 0, 0);
	}
}

void func_228(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_402() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_190(iVar1) && !func_75(iVar1, iParam2)) && (!bParam3 || !func_244(iVar1))) && (!bParam4 || !func_403(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_404(iVar0);
			}
		}
		iVar0++;
	}
}

int func_229(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_230(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_334(Global_1310750[uParam0->f_3 /*111*/], (1 << 24)))
	{
		if (bParam2)
		{
			if (func_75(uParam0->f_3, (1 << 30)))
			{
				func_405(2, -1, 0, 0, 0);
			}
			else
			{
				func_405(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_405(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_406(1, uParam0->f_177))
				{
					func_407(16, uParam0->f_177);
					func_408(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(func_60(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_405(8, -1, 0, 0, 0);
	}
}

int func_231()
{
	if (func_409(Global_1935630.f_44))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
		else if (func_410())
		{
			return 1;
		}
	}
	return 0;
}

float func_232(var uParam0, bool bParam1)
{
	float fVar0;

	if (uParam0->f_119 == -1.0f)
	{
		if (func_75(uParam0->f_3, (1 << 10)))
		{
			fVar0 = 95.0f;
		}
		else if (func_75(uParam0->f_3, (1 << 11)))
		{
			fVar0 = 80.0f;
		}
		else if (func_75(uParam0->f_3, (1 << 12)))
		{
			fVar0 = 65.0f;
		}
		else if (func_75(uParam0->f_3, (1 << 13)))
		{
			fVar0 = 55.0f;
		}
		else if (func_75(uParam0->f_3, (1 << 14)))
		{
			fVar0 = 30.0f;
		}
		else
		{
			fVar0 = 85.0f;
		}
		if (func_75(uParam0->f_3, 1))
		{
		}
		else if (func_75(uParam0->f_3, 2))
		{
			fVar0 -= 15.0f;
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 += 150.0f;
	}
	return fVar0;
}

int func_233(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	float fVar0;
	bool bVar1;

	iParam2 = iParam2;
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_IS_PED_VISIBILITY_TRACKED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_411(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0.0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0.0f)
				{
					bVar1 = PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_IS_TRACKED_ENTITY_VISIBLE(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_412(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0.0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0.0f)
	{
		uParam0->f_7 = (func_413() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0.0f;
	}
	return 1;
}

bool func_234(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0.0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0.0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 += (uParam0[iVar0 /*9*/])->f_7;
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1--;
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_122(uParam0);
	return true;
}

bool func_235()
{
	return (Global_1894899 & 1 != 0 && func_247() != -1);
}

bool func_236(var uParam0, float fParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (uParam0->f_98[iVar0] != 0.0f)
		{
			if (uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_237(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_414(bParam1, bParam2, bParam3);
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

bool func_238(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_360(func_200());
	if (func_56(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_56(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_56(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_56(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_56(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_56(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_56(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_56(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_56(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_56(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_239(int iParam0, int iParam1)
{
	return func_229(iParam0) & iParam1 != 0;
}

bool func_240(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_415(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_416(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_417(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_418(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_419(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_420(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_421(iVar3))
	{
		return true;
	}
	return false;
}

bool func_241(bool bParam0)
{
	var uVar0;
	var uVar1;

	if (func_422(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_242(int iParam0)
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

bool func_243(int iParam0, bool bParam1, bool bParam2)
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
		if (func_423())
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
		iVar0 = func_424(Global_1898164.f_1[0 /*5*/]);
		if (func_425(iVar0) && func_426(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_427(Global_1898164.f_1[0 /*5*/]))
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

bool func_244(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	if (func_428(64) && func_429(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_245(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_430(iVar0) | func_431(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_246()
{
	return Global_1894899 & 4 != 0;
}

int func_247()
{
	return Global_1894899.f_2;
}

int func_248(int iParam0)
{
	if (!func_432(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_249(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_250(Vector3 vParam0, int iParam3)
{
	if (!func_249(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

bool func_251(Vector3 vParam0)
{
	float fVar0;

	if (func_48(vParam0))
	{
		return false;
	}
	fVar0 = func_169(func_235(), 6.0f, 22.0f);
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fVar0, 1, 0, (1 << 14));
}

bool func_252(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (!bParam4)
	{
		if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
		{
			if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
				{
					if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
					{
						func_269(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (PLAYER::_0x6C54E69516CC56BD(iVar0) > 0)
	{
		func_269(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_126(uParam0))
		{
			return false;
		}
		else if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return true;
		}
		if (!func_127(uParam0, fParam2))
		{
			return true;
		}
		if (func_126(uParam0))
		{
			func_433(uParam0);
		}
	}
	return false;
}

bool func_253(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

void func_254(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_48(vParam0))
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
			if (func_344(vVar2, vParam0, 2.0f, 1))
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

float func_255(int iParam0)
{
	if (!func_190(iParam0))
	{
		return 0.0f;
	}
	if (!func_434(iParam0))
	{
		return 0.0f;
	}
	return Global_1310750[iParam0 /*111*/].f_44;
}

char* func_256()
{
	return "unnamed";
}

char* func_257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_258(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_335(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

bool func_259(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_260(var uParam0)
{
	if (!func_126(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_435(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_413() - uParam0->f_1);
}

bool func_261()
{
	if (!func_436(Global_1395482.f_1))
	{
		return false;
	}
	return func_437(Global_1395482.f_1, 32);
}

bool func_262(int iParam0)
{
	if (func_75(iParam0, 1))
	{
		return false;
	}
	return (1 == func_438(iParam0) || 2 == func_438(iParam0));
}

int func_263(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		func_439(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & (1 << 19) != false;
		bVar5 = iParam8 & (1 << 24) != false;
		bVar6 = iParam8 & (1 << 24) != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = func_169(fParam12 >= 0.0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
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
			func_269(&(iParam1->f_13));
		}
		if (func_440(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_441(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_263(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5.0f))
				{
					func_314(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & (1 << 25) != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							func_442(*uParam0, 1, 1);
						}
					}
					else if (func_443(iParam1, 22))
					{
						func_442(*uParam0, 0, 1);
					}
				}
				if (func_444(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_445(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_446(iParam8);
					if (func_447(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									func_448(uParam3);
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
					func_449(iParam1, uParam3, fVar8);
					if (func_450(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						func_451(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_452(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_444(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					func_453(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_447(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_445(uParam0, func_444(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_446(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_451(uParam3, 0, 0, 1, 1);
					}
					func_454(iParam1, 1);
				}
				func_449(iParam1, uParam3, fVar8);
				if (func_452(uParam0, iParam1, fParam4, bVar6))
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
			func_313(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

bool func_264(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (func_116(uParam0, 0, 0, 0) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_1, sParam2))
		{
			return true;
		}
	}
	if (bParam3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam1, -1))
			{
				return true;
			}
		}
	}
	return false;
}

int func_265(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_266()
{
	int iVar0;
	int iVar1;

	iVar0 = func_455(160, 0);
	iVar1 = func_265(Global_35, 0, 1, 0);
	if (!func_456(iVar0))
	{
		if (iVar1 == joaat("WEAPON_UNARMED"))
		{
			iVar0 = WEAPON::GET_BEST_PED_WEAPON(Global_35, false, false);
		}
	}
	if (!func_456(iVar0))
	{
		return;
	}
	if (iVar1 != iVar0)
	{
		if (!func_457(Global_35, joaat("SCRIPT_TASK_SWAP_WEAPON")))
		{
			PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, false);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 0, false, false);
			WEAPON::_REQUEST_WEAPON_ASSET(iVar0, -1, false);
		}
	}
}

bool func_267()
{
	switch (iLocal_411)
	{
		case 0:
			return ANIMSCENE::GET_ANIM_SCENE_BOOL(sLocal_327.f_1, "Loop_Bool");
		case 1:
			return ANIMSCENE::GET_ANIM_SCENE_BOOL(sLocal_348.f_1, "Loop_Bool");
		default:
			break;
	}
	return false;
}

bool func_268()
{
	switch (iLocal_411)
	{
		case 0:
			if (func_458(&sLocal_327, "Loop", 1) || func_458(&sLocal_327, "Loop_Break", 1))
			{
				return true;
			}
			break;
		case 1:
			if (func_458(&sLocal_348, "Loop", 1) || func_458(&sLocal_348, "Loop_Break", 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_269(var uParam0)
{
	func_459(uParam0, 0.0f);
}

void func_270()
{
	switch (iLocal_411)
	{
		case 0:
			func_460(&sLocal_327, "Loop_Bool", 1);
			break;
		case 1:
			func_460(&sLocal_348, "Loop_Bool", 1);
			break;
	}
}

void func_271()
{
	float fVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = 0.0f;
		iVar1 = PED::GET_MOUNT(Global_35);
		if (TASK::IS_PED_RUNNING(iVar1))
		{
			fVar0 = 4.0f;
		}
		else if (TASK::IS_PED_SPRINTING(iVar1))
		{
			fVar0 = 6.0f;
		}
		VOLUME::SET_VOLUME_SCALE(iLocal_243, vLocal_1216 + Vector(fVar0, fVar0, fVar0));
	}
	else
	{
		VOLUME::SET_VOLUME_SCALE(iLocal_243, vLocal_1216);
	}
}

bool func_272(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (VEHICLE::IS_DRAFT_VEHICLE(iParam0) && VEHICLE::GET_DRAFT_ANIMAL_COUNT(iParam0, &iVar0, &uVar1))
	{
		iVar2 = 0;
		while (iVar2 < iVar0)
		{
			iVar3 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iParam0, iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iVar3, iLocal_243, true, 0))
				{
					return true;
				}
			}
			iVar2++;
		}
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_243, true, 0);
}

void func_273()
{
	func_282(&iLocal_406, &uLocal_415, 0);
	func_18(2);
	func_18(48);
}

void func_274()
{
	if (!bLocal_1236)
	{
		if (sLocal_399.f_0 != 8)
		{
			if (iLocal_390 == 0)
			{
				func_284(Global_35, Global_35, "RE_BOT_UNI_V0_WTH", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
			else
			{
				func_284(Global_35, Global_35, "RE_BOT_UNI_V0_SHIT", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			}
		}
		else
		{
			func_284(Global_35, Global_35, "RE_BOT_GUA_V1_SHIT", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
		bLocal_1236 = true;
	}
}

bool func_275()
{
	if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 0))
	{
		return false;
	}
	if ((((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_404, true, 0) || VOLUME::IS_POINT_IN_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 21030, 0.0f, 0.0f, 0.0f))) || VOLUME::IS_POINT_IN_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 0, 0.0f, 0.0f, 0.0f))) || VOLUME::IS_POINT_IN_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 45454, 0.0f, 0.0f, 0.0f))) || VOLUME::IS_POINT_IN_VOLUME(iLocal_404, PED::GET_PED_BONE_COORDS(Global_35, 33646, 0.0f, 0.0f, 0.0f)))
	{
		return true;
	}
	return false;
}

Vector3 func_276(int iParam0, Vector3 vParam1, int iParam4)
{
	return func_461(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), vParam1, iParam4);
}

bool func_277()
{
	var uVar0;
	var uVar4;
	var uVar8;
	Vector3 vVar12;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_40(15))
	{
		if (func_462(&uVar0, &uVar4, &uVar8, Global_36))
		{
			func_463(&uVar0, &uVar4, &uVar8);
			iVar17 = func_464();
			iVar16 = func_465(iVar17);
			if (VOLUME::DOES_VOLUME_EXIST(iVar16) && func_466(iVar17, &iVar16))
			{
				switch (iVar17)
				{
					case 1:
						if (func_467(&sLocal_327, iLocal_402, 0, 0))
						{
							func_18(15);
							return true;
						}
						break;
					case 2:
						if (func_467(&sLocal_348, iLocal_403, 1, 0))
						{
							func_18(15);
							return true;
						}
						break;
					case 3:
						if (func_467(&sLocal_348, iLocal_403, 1, 1))
						{
							func_18(15);
							return true;
						}
						break;
					case 4:
						vVar12 = { func_468(&sLocal_399) /*3*/ };
						iVar15 = PED::GET_MOUNT(Global_35);
						if (ENTITY::IS_ENTITY_IN_VOLUME(iVar15, iLocal_242, true, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iVar15))
							{
								func_383(iVar15, 0, 0);
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(iVar15, 3000, 5000, 4, 0.0f, 0.0f, -1.0f, vVar12.z, vVar12, vVar12);
							}
							PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, 3000, 10000, 0, 0.0f, 0.0f, -1.0f, vVar12.z, vVar12, vVar12);
							func_97(&sLocal_327, 2);
							if (!func_282(&iLocal_406, &uLocal_415, 1))
							{
							}
							func_18(32);
							func_18(15);
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

bool func_278()
{
	return func_469(Global_35, &uLocal_1237, 1, 0, 256, 1);
}

int func_279(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_280(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	Vector3 vVar11;
	Vector3 vVar14;

	iVar1 = -1;
	if (iParam2 < 0)
	{
		iVar2 = func_470(&sLocal_399, iLocal_411);
		if (iVar2 > 0)
		{
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (func_471(&sLocal_399, iLocal_411, iVar0, &vVar8, &vVar14, &uVar4))
				{
					if (iVar1 < 0 || BUILTIN::VDIST(Global_36, vVar14) < BUILTIN::VDIST(Global_36, vVar11))
					{
						iVar1 = iVar0;
						vVar5 = { vVar8 /*3*/ };
						vVar11 = { vVar14 /*3*/ };
						uVar3 = uVar4;
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		func_471(&sLocal_399, iLocal_411, iParam2, &vVar8, &vVar14, &uVar4);
		iVar1 = iParam2;
		vVar5 = { vVar8 /*3*/ };
		vVar11 = { vVar14 /*3*/ };
		uVar3 = uVar4;
	}
	if (iVar1 > -1)
	{
		*uParam0 = { vVar5 /*3*/ };
		*uParam1 = { 0.0f, 0.0f, uVar3 /*3*/ };
		return true;
	}
	return false;
}

void func_281()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar1);
	iVar0 = 0;
	while (iVar0 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			PED::DETACH_CARRIABLE_ENTITY(iVar3, false, true);
		}
		iVar0++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
}

bool func_282(int iParam0, var uParam1, bool bParam2)
{
	if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(*iParam0))
	{
		if (bParam2 || *uParam1 == 3)
		{
			OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(*iParam0, 6);
			*uParam1 = 4;
		}
	}
	return false;
}

bool func_283(int iParam0, bool bParam1)
{
	if (func_162(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

bool func_284(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_472(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_285(var uParam0, float fParam1)
{
	if (func_127(uParam0, fParam1))
	{
		func_433(uParam0);
		return true;
	}
	return false;
}

bool func_286(int iParam0, bool bParam1)
{
	if (!func_473(iParam0, 0))
	{
		return false;
	}
	return (Global_40.f_9571[iParam0 /*10*/].f_1 == 3 || (bParam1 && Global_40.f_9571[iParam0 /*10*/].f_1 == 4));
}

void func_287()
{
	int iVar0;

	if (!sLocal_14.f_46 && func_40(6))
	{
		if (func_474(&iLocal_426, &(sLocal_14.f_5), &iVar0, &uLocal_210, 0, (4 - 1), 1))
		{
			if (sLocal_399.f_0 != 8)
			{
				if (iLocal_398 >= 5)
				{
					if (!func_126(&uLocal_252))
					{
						if (iVar0 == 2 || iVar0 == 1)
						{
							func_269(&uLocal_252);
						}
					}
					sLocal_14.f_46 = 1;
				}
			}
			else
			{
				func_475();
				func_476();
				func_477();
				func_290(8);
				sLocal_14.f_46 = 1;
			}
		}
	}
}

void func_288(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			switch (uLocal_1222[iParam0])
			{
				case 0:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 1:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 2:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 3:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 4:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 5:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
			}
			break;
		case 1:
			switch (uLocal_1222[iParam0])
			{
				case 0:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 1:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 2:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "GANG_TAUNT_GEN", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 3:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 4:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 5:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "TAUNT_GEN_MALE", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
			}
			break;
	}
	if (bVar0)
	{
		uLocal_1222[iParam0]++;
	}
}

void func_289(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_431[iParam0], true, true);
		switch (iParam0)
		{
			case 0:
				func_478(iLocal_431[iParam0], iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				break;
			case 1:
				func_478(iLocal_431[iParam0], iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_479(&sLocal_369, sParam2, iLocal_431[iParam0], 0);
		}
		if (bParam3)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_431[iParam0], joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		if (bParam4)
		{
			PED::SET_PED_STEALTH_MOVEMENT(iLocal_431[iParam0], true, 0, 1);
		}
		if (bParam5)
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[iParam0], Global_35, -1, -1.0f, -1.0f, -1.0f);
		}
	}
}

void func_290(int iParam0)
{
	iLocal_398 = iParam0;
}

int func_291()
{
	switch (sLocal_399.f_0)
	{
		case 8:
			return func_480(func_7(&sLocal_14), &(sLocal_14.f_33), &uLocal_223, &uLocal_219, 0.0f, 35.0f, 0, 0, 1090519040);
		case 3:
		case 10:
			switch (iLocal_390)
			{
				case 0:
					if (func_40(2))
					{
						return 1;
					}
					if (!func_481())
					{
						return 0;
					}
					if (func_482(&sLocal_14, &uLocal_255, 0, 1, 1, 0.5f) || func_40(2))
					{
						return 1;
					}
					if (func_483())
					{
						return 1;
					}
					break;
				case 1:
					return func_484(iLocal_431[0], &(sLocal_14.f_33), &uLocal_224, &uLocal_219, (1 << 30), 1110704128, 0, 0, 1092616192, 1);
			}
			break;
	}
	return func_485(&sLocal_14, &uLocal_392, 0.0f, 40.0f, 20.0f, 1500, 2.0f, 1065353216, 1, 0, 1, -1082130432, 1, 0, 0);
}

void func_292(int iParam0, int iParam1)
{
	func_486(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 1);
}

void func_293()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_487(&(sLocal_709[iVar0 /*75*/]), "", "", "");
		func_488(&(sLocal_709[iVar0 /*75*/]), 1, 1, 0);
		func_490(&(sLocal_709[iVar0 /*75*/]), 1, func_489(11));
		sLocal_709[iVar0 /*75*/].f_74 = 35.0f;
		iVar0++;
	}
	func_491(&(sLocal_709[0 /*75*/]), 1, "RE_BOT_FTH_V1_THREATEN_A", 0);
	func_491(&(sLocal_709[1 /*75*/]), 1, "RE_BOT_FTH_V1_THREATEN_B", 0);
	bLocal_401 = true;
}

bool func_294(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_295(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_296()
{
	bool bVar0;
	bool bVar1;

	bVar1 = false;
	func_492();
	switch (iLocal_412)
	{
		case 0:
			if (func_40(2))
			{
				func_121(&sLocal_14, &(sLocal_14.f_48), 6, &(sLocal_14.f_51.f_6));
				if (func_40(48))
				{
					vLocal_231 = { 1571.015f, -7260.388f, 69.31996f /*3*/ };
				}
				else
				{
					func_460(&sLocal_327, "Loop_Bool", 0);
					func_460(&sLocal_348, "Loop_Bool", 0);
				}
				iLocal_412 = 1;
			}
			break;
		case 1:
			if (func_110(func_7(&sLocal_14), func_109(&sLocal_14), &sLocal_442, &iLocal_426, 1, 0, -1, 1))
			{
				if (func_40(48) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 608457313))
				{
					func_112(&iLocal_426);
					func_493(iLocal_426[0], vLocal_234, joaat("WEAPON_REPEATER_CARBINE"), "Fussar_01", joaat("MOTIONSTATE_RUN"), (1 << 30), 0);
					func_493(iLocal_426[1], vLocal_234, joaat("WEAPON_REPEATER_CARBINE"), "Fussar_02", joaat("MOTIONSTATE_RUN"), (1 << 30), 1);
					func_494(iLocal_426[0]);
					func_494(iLocal_426[1]);
					func_18(6);
					iLocal_412 = 3;
				}
			}
			break;
		case 3:
			if (func_40(48) || ((func_116(&sLocal_327, 1, 0, 0) && func_458(&sLocal_327, "getup", 1)) || (func_116(&sLocal_348, 1, 0, 0) && func_458(&sLocal_348, "getup", 1))))
			{
				if (!func_40(48))
				{
					func_495(&sLocal_369);
				}
				func_303(iLocal_426[0], &(uLocal_434[0]), joaat("BLIP_STYLE_COP"), joaat("BLIP_MODIFIER_ENEMY"), 0, 0);
				func_303(iLocal_426[1], &(uLocal_434[1]), joaat("BLIP_STYLE_COP"), joaat("BLIP_MODIFIER_ENEMY"), 0, 0);
				func_476();
				iLocal_412 = 4;
			}
			break;
		case 4:
			bVar0 = func_496();
			if (!func_40(18))
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
				{
					bVar1 = (PED::IS_PED_CLIMBING(Global_35) || !func_497());
					if (bVar0 || bVar1)
					{
						if (!bVar1)
						{
							func_498(1000, 3000);
						}
						else
						{
							func_499();
						}
						func_500();
						sLocal_14.f_50 = 1;
						func_18(18);
					}
				}
			}
			break;
	}
}

void func_297()
{
	if (bLocal_401)
	{
		func_501();
	}
	func_502(iLocal_431[0], &(sLocal_636[0 /*36*/]));
	func_502(iLocal_431[1], &(sLocal_636[1 /*36*/]));
}

bool func_298()
{
	if (!func_40(1))
	{
		if (((func_40(2) || func_40(48)) || PED::IS_PED_DEAD_OR_DYING(iLocal_431[0], true)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[0], Global_35, true, true))
		{
			return true;
		}
	}
	if (!func_40(1))
	{
		if (PED::IS_PED_SHOOTING(iLocal_431[0]))
		{
			func_284(iLocal_431[0], Global_35, func_302("LOAD", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_503(&(uLocal_439[0]), iLocal_431[0], 0);
			func_504(1066055203, iLocal_431[0], 1);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
			{
				func_503(&(uLocal_439[1]), iLocal_431[1], 0);
			}
			func_18(1);
		}
	}
	else if (!func_40(11))
	{
		if (func_278())
		{
			iLocal_246 = PED::_GET_LAST_MOUNT(Global_35);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_246))
			{
				TASK::_0x2E1D6D87346BB7D2(iLocal_246, iLocal_431[0], 0, 0);
			}
			func_18(11);
		}
	}
	else
	{
		if (!func_40(25))
		{
			if (PED::IS_PED_RAGDOLL(Global_35))
			{
				func_269(&uLocal_258);
				func_18(25);
				PED::SET_PED_RAGDOLL_FORCE_FALL(Global_35);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_246))
				{
					iLocal_246 = PED::_GET_LAST_MOUNT(Global_35);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_246))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_246, iLocal_431[0], 55.0f, -1, 0, 2.5f, 0);
				}
			}
		}
		else if (!func_40(3))
		{
			if (func_127(&uLocal_258, 0.0f))
			{
				if (!PED::IS_PED_RAGDOLL(Global_35))
				{
					func_18(25);
				}
			}
			else
			{
				PED::RESET_PED_RAGDOLL_TIMER(Global_35);
			}
		}
		func_505();
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
		{
			PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[0], 0.5f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
		{
			PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[1], 0.5f);
		}
		return true;
	}
	return false;
}

int func_299()
{
	if (!func_40(2) && !func_49(Global_35, VOLUME::GET_VOLUME_COORDS(iLocal_242), 15.0f, 1, 1))
	{
		if (func_126(&uLocal_252))
		{
			if (func_285(&uLocal_252, 120.0f))
			{
				func_507(func_506());
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
				{
					PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[0], 1.0f);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
				{
					PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[1], 1.0f);
				}
				sLocal_14.f_50 = 1;
				iLocal_413 = 6;
			}
		}
	}
	switch (iLocal_413)
	{
		case 0:
			if (func_40(2) && !func_40(48))
			{
				if (!func_40(9))
				{
					func_508(1);
				}
				if (func_126(&uLocal_252))
				{
					func_433(&uLocal_252);
				}
				func_66();
				if (func_110(func_7(&sLocal_14), func_109(&sLocal_14), &sLocal_442, &iLocal_426, 0, 0, -1, 1))
				{
					func_509();
					func_18(6);
					func_112(&iLocal_426);
					func_510();
					iLocal_413 = 1;
				}
			}
			else
			{
				func_297();
				if (!MAP::DOES_BLIP_EXIST(uLocal_439[0]))
				{
					func_503(&(uLocal_439[0]), iLocal_431[0], 0);
				}
				if (!MAP::DOES_BLIP_EXIST(uLocal_439[1]))
				{
					func_503(&(uLocal_439[1]), iLocal_431[1], 0);
				}
				if (func_511())
				{
					if (!func_126(&uLocal_252))
					{
						func_269(&uLocal_252);
					}
				}
				if ((func_40(32) || func_40(48)) || func_512())
				{
					if (func_512())
					{
						func_18(21);
					}
					func_66();
					sLocal_14.f_46 = 1;
					iLocal_217 = 0;
					iLocal_413 = 4;
				}
			}
			break;
		case 1:
			if (func_513())
			{
				iLocal_413 = 2;
			}
			break;
		case 2:
			if (func_514())
			{
				func_274();
				func_515();
				sLocal_14.f_46 = 1;
				iLocal_217 = 0;
				iLocal_413 = 5;
			}
			break;
		case 6:
			if (func_516(&iLocal_426, 0) || !func_517(Global_35, &iLocal_426, 60.0f, 1))
			{
				if (func_516(&iLocal_431, 0) || !func_517(Global_35, &iLocal_431, 60.0f, 1))
				{
					if (!func_126(&uLocal_1247))
					{
						return 1;
					}
				}
			}
			break;
		case 4:
			func_518();
			if (func_110(func_7(&sLocal_14), func_109(&sLocal_14), &sLocal_442, &iLocal_426, 0, 0, -1, 1))
			{
				func_509();
				func_18(6);
				func_112(&iLocal_426);
				func_510();
				iLocal_413 = 5;
			}
			break;
		case 5:
			func_518();
			if (func_519())
			{
				if (!func_126(&uLocal_252))
				{
					func_269(&uLocal_252);
				}
			}
			if (!func_40(18) && func_40(6))
			{
				if ((!func_497() || func_516(&iLocal_426, 0)) || PED::IS_PED_CLIMBING(Global_35))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
					{
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[0], 2);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
					{
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[1], 2);
					}
					func_18(18);
				}
			}
			if (func_130(&iLocal_426, 0) && func_130(&iLocal_431, 0))
			{
				return 1;
			}
			if (func_506())
			{
				func_507(1);
				sLocal_14.f_50 = 1;
				iLocal_413 = 6;
			}
			break;
	}
	return 0;
}

void func_300()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;
	Vector3 vVar12;

	if (func_40(29) && !func_40(30))
	{
		func_520(&sLocal_399, &vVar0, &vVar3, &vVar6, &vVar9, &vVar12);
		if ((((func_521(&(iLocal_431[1]), &(sLocal_571[1 /*32*/]), vVar0, 0) && func_521(&(iLocal_426[0]), &(sLocal_442[0 /*32*/]), vVar3, 0)) && func_521(&(iLocal_426[1]), &(sLocal_442[1 /*32*/]), vVar6, 0)) && func_521(&(iLocal_426[2]), &(sLocal_442[2 /*32*/]), vVar9, 0)) && func_521(&(iLocal_426[3]), &(sLocal_442[3 /*32*/]), vVar12, 0))
		{
			func_522(iLocal_426[0], &(uLocal_434[0]), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
			func_522(iLocal_426[1], &(uLocal_434[1]), joaat("WEAPON_REVOLVER_CATTLEMAN"));
			func_522(iLocal_426[2], &(uLocal_434[2]), joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
			func_522(iLocal_426[3], &(uLocal_434[3]), joaat("WEAPON_REVOLVER_CATTLEMAN"));
			if (!func_40(31))
			{
				func_522(iLocal_431[1], &(uLocal_439[1]), joaat("WEAPON_REVOLVER_CATTLEMAN"));
			}
			func_18(6);
			func_18(30);
		}
	}
}

int func_301(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (func_523(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

char* func_302(char* sParam0, bool bParam1)
{
	char* sVar0;

	if (!bParam1)
	{
		switch (func_524(sLocal_399.f_0))
		{
			case 4:
				sVar0 = "GUA";
				break;
			case 2:
				sVar0 = "FTH";
				break;
		}
	}
	else
	{
		sVar0 = "UNI";
	}
	return func_525("BOT", sVar0, sParam0, func_279(bParam1, 0, iLocal_390 + 1));
}

void func_303(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MAP::DOES_BLIP_EXIST(*iParam1))
		{
			MAP::REMOVE_BLIP(iParam1);
		}
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::REMOVE_BLIP(&iVar0);
		}
		*iParam1 = MAP::BLIP_ADD_FOR_ENTITY(iParam2, iParam0);
		if (iParam3 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			MAP::SET_BLIP_SPRITE(*iParam1, iParam4, true);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam1, sParam5);
		}
	}
}

void func_304()
{
	float fVar0;

	fVar0 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_431[0], true, false));
	if (!bLocal_1258)
	{
		func_345(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_431[0], true, false), &uLocal_392, 1061158912, 1, fVar0);
		if (func_346(&uLocal_392, 1000))
		{
			if (fVar0 < 75.0f)
			{
				bLocal_1258 = true;
			}
		}
	}
	else if (!bLocal_1259)
	{
		if (!func_283(iLocal_431[0], 1))
		{
			bLocal_1259 = func_284(Global_35, Global_35, "RE_BOT_FTH_V2_CALLOUT", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
		}
	}
	else if (!func_283(Global_35, 0))
	{
		bLocal_1258 = false;
	}
}

void func_305()
{
	char* sVar0;

	if (!func_283(iLocal_431[0], 1))
	{
		if (func_526(Global_35, iLocal_431[0], 75.0f, 1))
		{
			if (!func_126(&uLocal_264) || func_127(&uLocal_264, 8.0f))
			{
				sVar0 = func_527(iLocal_215);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
				{
					func_528(sVar0);
				}
			}
		}
	}
}

bool func_306()
{
	bool bVar0;
	var uVar1;
	var uVar2;

	if (iLocal_409 > 1)
	{
		if (func_506())
		{
			func_507(1);
			return true;
		}
	}
	switch (iLocal_409)
	{
		case 0:
			func_345(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_431[0], true, false), &uLocal_392, 1061158912, 0, 0);
			func_529();
			if (func_40(15) && !func_40(48))
			{
				if (func_40(2))
				{
					if (func_114(&(sLocal_571[1 /*32*/]), &(iLocal_431[1]), func_7(&sLocal_14), func_109(&sLocal_14), 0, 1))
					{
						func_530(iLocal_431[1], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), -1, 0, 0, 1056964608, 1065353216, 0);
						func_284(iLocal_431[0], Global_35, func_302("UHOH", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						func_509();
						func_18(29);
						func_18(31);
						func_115(iLocal_431[1]);
						iLocal_409 = 3;
					}
				}
			}
			else if (iLocal_873 | func_531())
			{
				if (!func_40(32))
				{
					func_284(iLocal_431[0], Global_35, func_302("FALLFORIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
				}
				func_503(&(uLocal_439[0]), iLocal_431[0], 0);
				PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_431[0]);
				TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
				iLocal_1205[0] = 3;
				func_18(29);
				iLocal_409 = 1;
			}
			else
			{
				bVar0 = func_532(iLocal_431[0], 0, &(sLocal_14.f_5), &uVar1, 0, 0);
				if ((bLocal_872 || func_40(48)) || bVar0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
					{
						if ((bVar0 || bLocal_872) || !func_40(48))
						{
							func_284(iLocal_431[0], Global_35, func_302("CRAZY", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
						else
						{
							func_284(iLocal_431[0], Global_35, func_302("UHOH", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						}
						func_503(&(uLocal_439[0]), iLocal_431[0], 0);
						PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_431[0]);
						TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
						iLocal_1205[0] = 3;
					}
					else
					{
						func_533(8);
					}
					func_18(29);
					iLocal_409 = 1;
				}
				else if (!func_534())
				{
					if (func_535(iLocal_431[0], &uLocal_267, &uVar2, 0))
					{
						if (!func_536(7))
						{
							if (func_537(&uLocal_392, 1000))
							{
								func_284(iLocal_431[0], Global_35, func_302("WHEREYOUGOING", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								func_533(7);
							}
						}
						else if (func_537(&uLocal_392, 3000))
						{
							func_284(iLocal_431[0], Global_35, func_302("FALLFORIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_503(&(uLocal_439[0]), iLocal_431[0], 0);
							PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_431[0]);
							TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
							iLocal_1205[0] = 3;
							func_18(29);
							iLocal_409 = 1;
						}
						if (!func_536(6))
						{
							if (func_538(1.0f, 1, 0, 0))
							{
								func_433(&uLocal_255);
								func_284(iLocal_431[0], Global_35, func_302("REALBADWAY", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								func_533(6);
							}
						}
						else if (!func_126(&uLocal_255))
						{
							func_269(&uLocal_255);
						}
						else if (func_285(&uLocal_255, 10.0f))
						{
							func_284(iLocal_431[0], Global_35, func_302("FALLFORIT", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
							func_503(&(uLocal_439[0]), iLocal_431[0], 0);
							PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iLocal_431[0]);
							TASK::TASK_COMBAT_PED(iLocal_431[0], Global_35, 0, 0);
							iLocal_1205[0] = 3;
							func_18(29);
							iLocal_409 = 1;
						}
					}
				}
			}
			break;
		case 1:
			func_518();
			if (func_40(30))
			{
				iLocal_409 = 2;
			}
			break;
		case 2:
			func_539();
			func_518();
			func_540();
			break;
		case 3:
			if (func_513())
			{
				iLocal_409 = 4;
			}
			break;
		case 4:
			if (func_514())
			{
				iLocal_409 = 5;
			}
			break;
		case 5:
			func_539();
			func_518();
			func_540();
			break;
	}
	return false;
}

bool func_307(var uParam0, int iParam1)
{
	char* sVar0;

	Stack.Invoke(uParam0->f_6, iParam1);
	sVar0 = StackVal;
	return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_1, sVar0);
}

bool func_308(var uParam0, var uParam1)
{
	char* sVar0;

	Stack.Invoke(uParam0->f_6, uParam1);
	sVar0 = StackVal;
	return ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_1, sVar0);
}

bool func_309(int iParam0)
{
	return (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(iParam0, false));
}

void func_310(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (uParam0->f_15[iParam1] > -1)
		{
			Stack.Invoke(uParam0->f_6, uParam0->f_1, uParam0->f_15[iParam1]);
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(StackVal, StackVal);
		}
	}
	if (iParam1 >= 5 || iParam1 == -1)
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_8), iParam1);
	uParam0->f_15[iParam1] = -1;
	switch (iParam1)
	{
		case 1:
			uParam0->f_9 = 100;
			break;
		case 0:
			uParam0->f_13 = 0;
			uParam0->f_7 = 0;
			break;
		case 2:
			uParam0->f_10 = -1.0f;
			break;
		case 3:
			uParam0->f_14 = 0;
			uParam0->f_12 = 0;
			uParam0->f_11 = 0;
			break;
	}
}

char* func_311(char* sParam0)
{
	return sParam0;
}

int func_312(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_541(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1 || Global_17504.f_1003[iVar0 /*6*/] == -1)
		{
			Global_17504.f_1003[iVar0 /*6*/] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_313(int* iParam0, var uParam1)
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
	func_542(iParam0, uParam1, 1);
	func_451(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &sVar1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &sVar22, 17);
		iVar0++;
	}
}

void func_314(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(*uParam0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
	}
}

void func_315(int iParam0, bool bParam1, bool bParam2)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam2);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
}

bool func_316(int iParam0, int iParam1)
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
	if (func_388(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_388(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_388(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_317(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, false);
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
	}
	PED::DELETE_PED(iParam0);
}

int func_318(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iParam0, 178, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 297, true) != bParam2)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 297, bParam2);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 315, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 331, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 331, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 130, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 301, true))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iParam0, "INTERACT_LOCKON", fParam1, 0.0f, 0, 0.0f, 0.0f, 0, false, -1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0)
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

void func_320(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			Global_36581[iVar0 /*2*/].f_1 = 3;
		}
		iVar0++;
	}
}

void func_321(var uParam0)
{
	if (func_543(uParam0->f_162))
	{
		func_544(&(uParam0->f_162), 1, 1);
	}
	if (func_543(uParam0->f_163))
	{
		func_544(&(uParam0->f_163), 1, 1);
	}
	if (func_543(uParam0->f_164))
	{
		func_544(&(uParam0->f_164), 1, 1);
	}
	if (func_543(uParam0->f_165))
	{
		func_544(&(uParam0->f_165), 1, 1);
	}
}

void func_322(var uParam0)
{
	if (uParam0->f_170)
	{
		func_545();
	}
}

void func_323(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_546(32);
		func_327(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

bool func_324(var uParam0)
{
	if (func_547(uParam0) | uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_548(uParam0->f_3);
		func_230(uParam0, 0, 1);
		func_549(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_550(0, 0);
		return true;
	}
	return false;
}

void func_325()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_326(int iParam0)
{
	if (!func_190(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

void func_327(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;

	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_438(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0 /*8*/].f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_328() != -1)
	{
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
	}
	Global_17504.f_42[iParam0 /*8*/].f_4 += iVar0;
}

int func_328()
{
	return Global_1572887.f_12;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_331(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f /*3*/ };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f /*3*/ };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f /*3*/ };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f /*3*/ };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f /*3*/ };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f /*3*/ };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f /*3*/ };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f /*3*/ };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f /*3*/ };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f /*3*/ };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f /*3*/ };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f /*3*/ };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f /*3*/ };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f /*3*/ };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f /*3*/ };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f /*3*/ };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f /*3*/ };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f /*3*/ };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f /*3*/ };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f /*3*/ };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f /*3*/ };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f /*3*/ };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f /*3*/ };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f /*3*/ };
					*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f /*3*/ };
					*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f /*3*/ };
					*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f /*3*/ };
					*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f /*3*/ };
					*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f /*3*/ };
					*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f /*3*/ };
					*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f /*3*/ };
					*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 24:
					*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 25:
					*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f /*3*/ };
					*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f /*3*/ };
					*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f /*3*/ };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 31:
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f /*3*/ };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 32:
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f /*3*/ };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 33:
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f /*3*/ };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f /*3*/ };
					*(uParam2[2 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[3 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[4 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[5 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[6 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					*(uParam2[7 /*3*/]) = { 0.0f, 0.0f, 0.0f /*3*/ };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_332(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_48(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_333(var uParam0, bool bParam1)
{
	if (!MAP::DOES_BLIP_EXIST(uParam0->f_6))
	{
		uParam0->f_6 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_DEBUG_PINK"), *uParam0);
		MAP::BLIP_ADD_MODIFIER(uParam0->f_6, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
			func_54("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		PED::_0x9851DE7AEC10B4E1(*uParam0, 100.0f, 1, 0);
	}
}

bool func_334(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_335(Vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_48(vParam0))
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
		if (func_253(vParam0))
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
	func_551(iVar0, bParam8);
	return iVar0;
}

void func_336(int iParam0)
{
	if (!func_190(iParam0))
	{
		return;
	}
	func_552(iParam0);
}

void func_337(var uParam0, Vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		TASK::_0x5D9B0BAAF04CF65B(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		TASK::_0x19BC99C678FBA139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_338(int iParam0)
{
	if (func_120(iParam0, 2))
	{
		return 200;
	}
	if (func_120(iParam0, 4))
	{
		return 70;
	}
	if (func_120(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_339(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (func_75(iParam0, (1 << 17)))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_396() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_75(iParam0, 2);
		bVar1 = func_75(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_235())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_340(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45.0f;
		*fParam1 = 135.0f;
	}
	else
	{
		*fParam0 = 45.0f;
		*fParam1 = 125.0f;
	}
	if (func_120(iParam3, (1 << 21)))
	{
		*fParam0 += 15.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 50.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_341(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240.0f;
	}
	else
	{
		*fParam1 = 215.0f;
	}
	*fParam0 = 110.0f;
	if (func_120(iParam3, 2))
	{
		*fParam0 += 60.0f;
		*fParam1 += 60.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 110.0f));
	}
	else if (func_120(iParam3, (1 << 21)))
	{
		*fParam0 += 30.0f;
		*iParam2 = BUILTIN::CEIL((*fParam0 + 30.0f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_342(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_330(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17504.f_12[iVar1], iVar2);
}

bool func_343(int iParam0, Vector3 vParam1, float fParam4, float fParam5)
{
	float fVar0;

	if (func_48(vParam1))
	{
		return false;
	}
	if (func_348(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = BUILTIN::VDIST2(vParam1, Global_36);
	if (func_262(iParam0))
	{
		fParam4 = 40000.0f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_344(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_345(int iParam0, Vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	float fVar0;

	fVar0 = func_169(bParam6, iParam7, BUILTIN::VDIST(vParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_351(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
		{
			*iParam4 = func_553();
			iParam4->f_2 = func_554(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_351(vParam1, iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) > fParam5))
	{
		*iParam4 = func_553();
		iParam4->f_2 = func_554(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_346(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_553() - *uParam0) >= iParam1;
	}
	return false;
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_48(uParam0->f_12[iVar0 /*3*/]))
		{
			if (iVar1 < 0 || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar1 /*3*/]) < BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_348(int iParam0, Vector3 vParam1)
{
	int iVar0;

	if (!func_75(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_555(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_75(iParam0, (1 << 25)))
	{
		if (func_556(vParam1, 200.0f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_349(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;

	iVar0 = 1;
	if (func_120(iParam0, 128))
	{
		if (!MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam1, uParam1->f_1, (uParam1->f_2 + 40.0f), &uVar1, false))
		{
			return false;
		}
		if (MISC::_0xBBE5B63EFFB08E68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40.0f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_75(iParam0, 1) && !func_75(iParam0, 2))
	{
		if (func_75(iParam0, (1 << 12)) || func_75(iParam0, (1 << 11)))
		{
			if (func_557(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_350(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	var uVar0;

	uVar0 = func_55(&uParam0);
	if (!func_558())
	{
		return false;
	}
	return true;
}

bool func_351(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) /*3*/ };
	return func_559(vVar0, vParam0) > func_559(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_352(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_353(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_36581[iVar0 /*2*/] == iParam0)
		{
			return Global_36581[Global_36602 /*2*/].f_1;
		}
		iVar0++;
	}
	return 3;
}

int func_354(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_541(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (Global_17504.f_1003[iVar0 /*6*/] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_355(int iParam0, int iParam1)
{
	*iParam0 |= iParam1;
}

int func_356(int iParam0)
{
	return Global_40.f_297[iParam0 + 30];
}

int func_357(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_279(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_358(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_359(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_360(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_361(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_362(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_363(int iParam0, int iParam1)
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

void func_364(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_560(iParam0, iParam6);
	func_561(iParam0, iParam5);
	func_562(iParam0, iParam4);
	func_563(iParam0, iParam3);
	func_564(iParam0, iParam2);
	func_565(iParam0, iParam1);
}

int func_365(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_566(&iVar1, (1 << 31));
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 &= (iVar1 - 1);
		iVar0++;
	}
	return iVar0;
}

int func_366()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_367(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_328() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_368(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_369(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_370(int iParam0)
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

void func_371(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_567(iParam0, iParam1))
		{
			if (func_568(iParam0, iParam1))
			{
				if (func_569(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_570(iParam0);
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

void func_372(int iParam0, int iParam1, bool bParam2)
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

void func_373(int iParam0, bool bParam1)
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

void func_374(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1.0f);
	}
}

int func_375(int iParam0)
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

float func_376(float fParam0)
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

int func_377(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0 = { *uParam0 /*3*/ };
	if (func_571(&uParam1))
	{
		return 1;
	}
	if (!func_572(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 /*3*/ };
	return 1;
}

bool func_378(var uParam0)
{
	if (uParam0->f_3 != joaat("META_OUTFIT_DEFAULT"))
	{
		if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(uParam0->f_5))
		{
			if (PED::_HAS_METAPED_OUTFIT_LOADED(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_379(int iParam0)
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

bool func_380(var uParam0)
{
	return func_388(*uParam0, 4);
}

bool func_381(var uParam0)
{
	return func_388(*uParam0, 64);
}

bool func_382(var uParam0)
{
	return func_388(*uParam0, 8);
}

void func_383(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

bool func_384(var uParam0)
{
	return func_388(*uParam0, 128);
}

bool func_385(var uParam0)
{
	return func_388(*uParam0, (1 << 11));
}

void func_386(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 130, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 178, bParam1);
}

bool func_387(var uParam0)
{
	return func_388(*uParam0, (1 << 10));
}

bool func_388(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_389(var uParam0)
{
	return func_388(*uParam0, 256);
}

void func_390(int iParam0, bool bParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam0, 146, !bParam1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 148, !bParam1);
}

bool func_391(var uParam0)
{
	return func_388(*uParam0, (1 << 9));
}

bool func_392(var uParam0)
{
	return func_388(*uParam0, (1 << 12));
}

int func_393(int iParam0)
{
	switch (iParam0)
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
			return 0;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			return 2;
		case joaat("G_M_M_UNIINBRED_01"):
			return 1;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			return 3;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			return 4;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			return 5;
	}
	return -1;
}

int func_394(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		iVar0 = func_573(1);
	}
	else
	{
		iVar0 = func_574(iParam0);
	}
	return iVar0;
}

void func_395(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_575(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_576(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/]++;
	}
}

int func_396()
{
	return Global_1897952.f_41;
}

void func_397(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_120(iParam0, (1 << 13)))
	{
		iVar0 = func_576(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/]++;
	}
}

void func_398(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0.0f;
	fVar1 = 0.0f;
	fVar2 = 0.0f;
	fVar3 = 0.0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30.0f;
			break;
		case 1:
			fVar2 = 1.0f;
			break;
		case 2:
			fVar2 = 2.0f;
			break;
		case 3:
			fVar2 = 3.0f;
			break;
		case 4:
			fVar2 = 4.0f;
			break;
		case 5:
			fVar2 = 6.0f;
			break;
		case 6:
			fVar2 = 8.0f;
			break;
		case 7:
			fVar2 = 12.0f;
			break;
		case 8:
			fVar3 = 1.0f;
			break;
		case 9:
			fVar3 = 2.0f;
			break;
		case 10:
			fVar3 = 3.0f;
			break;
		case 11:
			fVar3 = 4.0f;
			break;
		case 12:
			fVar3 = 5.0f;
			break;
		case 13:
			fVar3 = 6.0f;
			break;
		case 14:
			fVar3 = 7.0f;
			break;
		case 15:
			fVar3 = 8.0f;
			break;
		case 16:
			fVar3 = 10.0f;
			break;
		case 17:
			fVar3 = 12.0f;
			break;
		case 18:
			fVar3 = 15.0f;
			break;
		case 19:
			fVar3 = 18.0f;
			break;
		case 20:
			fVar3 = 20.0f;
			break;
		case 21:
			fVar3 = 25.0f;
			break;
		case 22:
			fVar2 = -1.0f;
			break;
		case 23:
			fVar3 = -5.0f;
			break;
		case 24:
			fVar3 = -7.0f;
			break;
		case 25:
			fVar3 = -8.0f;
			break;
	}
	func_327(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_399(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_75(iParam0, (1 << 18)))
	{
		if (Global_1392135.f_3 == -1)
		{
			func_577((1 << 18), iVar0, 0, 1);
		}
	}
	if (func_75(iParam0, 128))
	{
		func_577(128, iVar0, 0, 1);
	}
	else if (func_75(iParam0, (1 << 19)))
	{
		func_577((1 << 19), iVar0, 0, 1);
	}
	else if (func_75(iParam0, (1 << 29)))
	{
		func_577((1 << 29), iVar0, 0, 1);
	}
	else if (func_75(iParam0, (1 << 22)))
	{
		func_577((1 << 22), iVar0, 0, 1);
	}
	else if (func_75(iParam0, (1 << 23)))
	{
		func_577((1 << 23), iVar0, 0, 1);
	}
}

void func_400(int iParam0)
{
	Global_1310750.f_16077 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1310750.f_16071 = iParam0;
}

int func_401(bool bParam0)
{
	if (!bParam0 && func_100(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

int func_402()
{
	return Global_1310750.f_16037;
}

bool func_403(int iParam0)
{
	if (!func_190(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_404(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_190(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_578(iParam0);
	Global_1310750.f_16037--;
}

void func_405(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	func_579(&Global_1393447, 1);
	func_580();
	func_581();
	func_582((BUILTIN::TO_FLOAT(200) / 3.0f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (func_553() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 -= Global_1392135.f_1 & 4;
		}
		func_583();
		if (iParam1 == -1)
		{
			if (func_56(iParam0, 1))
			{
				func_577((1 << 24), 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240.0f);
			}
			else if (func_56(iParam0, 2))
			{
				func_577((1 << 24), 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60.0f);
			}
			else if (func_56(iParam0, 4))
			{
				func_577((1 << 24), 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900.0f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			func_584(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_585(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		func_585((BUILTIN::TO_FLOAT(200) / 3.0f), 1, 0);
	}
}

bool func_406(int iParam0, int iParam1)
{
	return Global_40.f_9571[iParam1 /*10*/] & iParam0 != 0;
}

void func_407(int iParam0, int iParam1)
{
	Global_1392050[iParam1 /*14*/].f_1 -= Global_1392050[iParam1 /*14*/].f_1 & iParam0;
}

void func_408(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1 /*10*/] |= iParam0;
}

bool func_409(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_410()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_411(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_412(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_411(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0.0f)
		{
			uParam0->f_8 = (func_413() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0.0f;
	return false;
}

float func_413()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_414(bool bParam0, bool bParam1, bool bParam2)
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

bool func_415(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OVERCAST"):
		case joaat("HIGHPRESSURE"):
		case joaat("OVERCASTDARK"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_416(int iParam0)
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

bool func_417(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOW"):
		case joaat("SNOWLIGHT"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_418(int iParam0)
{
	switch (iParam0)
	{
		case joaat("FOG"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_419(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("MISTY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_420(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SNOWLIGHT"):
		case joaat("SNOWCLEARING"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_421(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SANDSTORM"):
			return true;
		default:
			break;
	}
	return false;
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

bool func_423()
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

int func_424(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_587(func_586(iParam0));
}

bool func_425(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_426(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_427(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_428(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_429(int iParam0)
{
	return func_75(iParam0, Global_1310750.f_16072 | 64);
}

int func_430(int iParam0)
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

int func_431(int iParam0)
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

bool func_432(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_433(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

bool func_434(int iParam0)
{
	return ((Global_1310750[iParam0 /*111*/] != 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1310750[iParam0 /*111*/].f_40))) && HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1310750[iParam0 /*111*/].f_40)) != 0);
}

bool func_435(var uParam0)
{
	return func_259(*uParam0, 2);
}

bool func_436(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_437(int iParam0, int iParam1)
{
	if (!func_436(iParam0))
	{
		return false;
	}
	return Global_1395482.f_2[iParam0] & iParam1 != 0;
}

int func_438(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

void func_439(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | (1 << 24);
	}
}

bool func_440(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_588(iParam0, iParam1))
		{
			if (!func_56(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				func_451(uParam2, 0, 0, 1, 0);
				func_79(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_56(iParam1->f_10, 1))
		{
			func_589(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			func_80(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_441(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		bVar4 = func_56(iParam4, 32);
		func_542(iParam1, uParam2, 0);
		iVar5 = func_590(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		func_451(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_56(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_56(iParam4, (1 << 11)))
		{
			iVar6 |= 4;
		}
		if (func_56(iParam4, (1 << 15)))
		{
			iVar6 |= 128;
		}
		if (func_56(iParam4, (1 << 12)))
		{
			iVar6 |= 16;
		}
		if (func_56(iParam4, (1 << 23)) || func_56(iParam4, (1 << 13)))
		{
			iVar6 |= 256;
		}
		if (func_56(iParam4, (1 << 22)))
		{
			iVar6 |= 64;
		}
		if (func_56(iParam4, (1 << 28)))
		{
			iVar6 |= (1 << 13);
		}
		if (func_443(iParam1, 4))
		{
			iVar6 |= (1 << 10);
			EVENT::_SET_EVENT_TRACKER_FOR_PED(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_443(iParam1, 26))
		{
			iVar6 |= (1 << 15);
		}
		if (func_56(iParam4, (1 << 26)))
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
				iParam6 = func_591(uParam0);
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
			if (func_56(iParam4, (1 << 28)))
			{
				iVar8 = func_592(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					func_593(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (func_443(iParam1, 23))
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
			if (func_56(iParam4, 2) || func_56(iParam4, 16))
			{
				func_442(*uParam0, 1, 1);
			}
			else
			{
				func_442(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_442(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 317, bParam1);
	}
}

bool func_443(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

bool func_444(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_594(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_445(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_595(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_56(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_446(int iParam0)
{
	if (func_56(iParam0, 4))
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
	if (func_56(iParam0, (1 << 14)))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_RELOAD"), false);
	}
	if (func_56(iParam0, 8))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
	}
}

bool func_447(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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

	iVar1 = func_596(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & (1 << 9) != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_597(Global_35)) || func_598(Global_35)) || func_599(Global_35));
	fVar12 = -1.0f;
	if (func_126(&(iParam1->f_13)))
	{
		fVar12 = func_260(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = func_543((uParam4[iVar0 /*17*/])->f_6);
		func_600(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (func_601(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_602(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						func_451(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_603(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						func_542(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
					if (func_604(iParam1, fParam6, iParam1->f_9))
					{
						func_269(&(iParam1->f_18));
						if (bVar6)
						{
							func_603(uParam4, 0, 0);
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
		func_605(iParam1, fParam2);
	}
	return bVar5;
}

void func_448(var uParam0)
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

void func_449(int* iParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_606(uParam1[iVar0 /*17*/]))
		{
			if (MISC::IS_BIT_SET((*uParam1)[iVar0 /*17*/], 20))
			{
				func_605(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_450(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (func_607(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_608(iParam1, 0);
				func_542(iParam1, uParam2, func_443(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_451(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_543((uParam0[iVar0 /*17*/])->f_6))
			{
				if (!bParam4 && MISC::IS_BIT_SET((*uParam0)[iVar0 /*17*/], 11))
				{
				}
				else
				{
					func_544(&((uParam0[iVar0 /*17*/])->f_6), 1, 1);
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

bool func_452(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_269(&(iParam1->f_18));
			return false;
		}
		else if (func_126(&(iParam1->f_18)))
		{
			func_433(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_126(&(iParam1->f_18)))
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
	return func_285(&(iParam1->f_18), fParam2);
	return true;
}

void func_453(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;

	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_600(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_454(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

int func_455(int iParam0, int iParam1)
{
	var uVar0;

	return func_609(&uVar0, iParam0, iParam1);
}

bool func_456(int iParam0)
{
	if (iParam0 == joaat("WEAPON_UNARMED") || iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_457(int iParam0, int iParam1)
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

bool func_458(var uParam0, char* sParam1, bool bParam2)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		return ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_1, sParam1, bParam2);
	}
	return false;
}

void func_459(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_413() - fParam1);
	func_610(uParam0, 1);
	func_611(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

void func_460(var uParam0, char* sParam1, bool bParam2)
{
	if (func_116(uParam0, 0, 0, 0))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_1, sParam1, bParam2, false);
	}
}

Vector3 func_461(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return func_612(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

bool func_462(var uParam0, var uParam1, var uParam2, Vector3 vParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar7;
	int iVar11;

	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if (iLocal_410 != -1)
	{
		iVar11 = 0;
		while (iVar11 < iLocal_218)
		{
			vVar3 = { func_16(iLocal_410, iVar11) /*4*/ };
			if (!func_48(vVar3))
			{
				if (iVar0 == -1)
				{
					iVar0 = iVar11;
				}
				else
				{
					vVar7 = { func_16(iLocal_410, iVar0) /*4*/ };
					if (func_613(vParam3, vVar3) < func_613(vParam3, vVar7))
					{
						iVar0 = iVar11;
					}
				}
			}
			iVar11++;
		}
	}
	if (iVar0 > -1)
	{
		*uParam1 = { func_16(iLocal_410, iVar0) /*4*/ };
		iVar1 = (iVar0 - 1);
		iVar2 = iVar0 + 1;
		if (iVar1 == iLocal_218)
		{
			iVar1 = 0;
		}
		else if (iVar1 < 0)
		{
			iVar1 = (iLocal_218 - 1);
		}
		if (iVar2 == iLocal_218)
		{
			iVar2 = 0;
		}
		else if (iVar2 < 0)
		{
			iVar2 = (iLocal_218 - 1);
		}
		*uParam0 = { func_16(iLocal_410, iVar1) /*4*/ };
		*uParam2 = { func_16(iLocal_410, iVar2) /*4*/ };
		return true;
	}
	return false;
}

void func_463(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	float fVar4;
	Vector3 vVar5;
	Vector3 vVar8;

	func_614(uParam0, uParam1, uParam2, &vVar0);
	fVar4 = vVar0.;
	vVar5 = { vVar0 /*3*/ };
	vVar8 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar5, fVar4, 0.1352f, 1.8006f, -2.6634f) /*3*/ };
	func_42(&sLocal_327, vVar8, 0.0f, 0.0f, func_376((fVar4 + 180.0f)), 2);
	func_43(&sLocal_327, "player", Global_35, 0);
	func_42(&sLocal_348, vVar8, 0.0f, 0.0f, func_376((fVar4 + 180.0f)), 2);
	func_43(&sLocal_348, "player", Global_35, 0);
	func_615(&vVar8, &sLocal_327);
}

int func_464()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 4;
	}
	else if (!TASK::IS_PED_STILL(Global_35))
	{
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::GET_PED_STEALTH_MOVEMENT(Global_35))
		{
			return 3;
		}
		else if (TASK::IS_PED_WALKING(Global_35))
		{
			return 2;
		}
		else if (TASK::IS_PED_RUNNING(Global_35) || TASK::IS_PED_SPRINTING(Global_35))
		{
			return 1;
		}
	}
	return 0;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return iLocal_402;
		case 2:
			return iLocal_403;
		case 3:
			return iLocal_403;
		default:
			break;
	}
	return 0;
}

bool func_466(int iParam0, int iParam1)
{
	Vector3 vVar0;
	float fVar12;
	int iVar13;
	int iVar14;
	Vector3 vVar15;

	switch (iParam0)
	{
		case 1:
			if (!ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_327.f_1, "player", &vVar0, false, 0, 2))
			{
				return false;
			}
			fVar12 = 2.0f;
			iVar14 = joaat("MOTIONSTATE_RUN");
			iVar13 = 16;
			break;
		case 2:
			func_616(3);
			if (!ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_348.f_1, "player", &vVar0, false, 0, 2))
			{
				return false;
			}
			fVar12 = 1.0f;
			iVar14 = joaat("MOTIONSTATE_WALK");
			iVar13 = 0;
			break;
		case 3:
			func_616(7);
			if (!ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_348.f_1, "player", &vVar0, false, 0, 2))
			{
				return false;
			}
			fVar12 = 1.0f;
			iVar14 = joaat("MOTIONSTATE_CROUCH_WALK");
			iVar13 = 17;
			break;
		default:
			return false;
	}
	vVar15 = { vVar0 /*3*/ };
	VOLUME::SET_VOLUME_COORDS(*iParam1, vVar15);
	if (func_617(vVar15, func_468(&sLocal_399)))
	{
		if (func_618(Global_35, *iParam1, 0, 1))
		{
			vLocal_228 = { vVar0 /*3*/ };
			vLocal_231 = { vLocal_228 + func_612(vVar0 - Global_36) * Vector(100.0f, 100.0f, 100.0f) /*3*/ };
			func_619(vLocal_231);
			if (iParam0 == 3)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
			if (iVar13 != 0)
			{
				func_18(iVar13);
			}
			return true;
		}
	}
	if (iVar13 != 0)
	{
		func_140(iVar13);
	}
	return false;
}

bool func_467(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
	{
		switch (iParam2)
		{
			case 0:
				vVar0 = { func_620(Global_35, uParam0->f_1, "player", func_208(uParam0->f_2), 1) /*3*/ };
				break;
			case 1:
				if (!bParam3)
				{
					vVar0 = { func_620(Global_35, uParam0->f_1, "player", func_208(uParam0->f_2), 1) /*3*/ };
				}
				else
				{
					vVar0 = { func_620(Global_35, uParam0->f_1, "player", func_208(7), 1) /*3*/ };
				}
				break;
			default:
				return false;
		}
		if (func_48(vVar0))
		{
			return false;
		}
		if (func_351(vVar0, Global_35))
		{
			if (func_613(Global_36, vVar0) < 0.75f)
			{
				switch (iParam2)
				{
					case 0:
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						func_460(&sLocal_327, "Loop_Bool", 0);
						if (sLocal_399.f_0 == 8)
						{
							func_274();
						}
						AUDIO::TRIGGER_MUSIC_EVENT("REBOT_START");
						iLocal_411 = 0;
						break;
					case 1:
						if (bParam3)
						{
							func_616(7);
							if (func_280(&vVar3, &vVar6, func_279(sLocal_399.f_0 == 8, 1, -1)))
							{
								func_42(&sLocal_348, vVar3, vVar6, 2);
							}
						}
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
						func_460(&sLocal_348, "Loop_Bool", 0);
						AUDIO::TRIGGER_MUSIC_EVENT("REBOT_START");
						func_18(47);
						iLocal_411 = 1;
						break;
				}
				vLocal_237 = { Global_36 /*3*/ };
				if (func_40(21))
				{
					bLocal_1195 = true;
				}
				func_66();
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, 20000, 0);
				iLocal_1233 = 1;
				func_495(uParam0);
				return true;
			}
		}
	}
	return false;
}

Vector3 func_468(int iParam0)
{
	switch (*iParam0)
	{
		case 8:
			return { 1575.272f, -7256.498f, 68.8f };
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return { 2621.505f, 641.9572f, 69.6888f };
				case 1:
					return { 2394.004f, 1057.031f, 83.20756f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_469(int iParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = PED::GET_MOUNT(iParam0);
		bVar1 = !ENTITY::IS_ENTITY_DEAD(iVar0);
		bVar2 = PED::IS_PED_ON_MOUNT(iParam0);
		bVar3 = false;
		if (!bVar2 || !bVar1)
		{
			if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 149))
			{
				if (!bVar2 || !PED::GET_PED_RESET_FLAG(Global_35, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						if (*uParam1 > 0)
						{
							*uParam1 = 0;
						}
						return 1;
					}
				}
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (bVar1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iParam4, false);
					*uParam1 = 1;
				}
				break;
			case 1:
				bVar3 = (bParam3 && (TASK::IS_PED_RUNNING(iVar0) || TASK::IS_PED_SPRINTING(iVar0)));
				if (bVar3 || (!bParam2 || func_621(iVar0)))
				{
					if (bVar3)
					{
						TASK::TASK_HORSE_ACTION(iVar0, 9, 0, 0);
					}
					else
					{
						TASK::TASK_HORSE_ACTION(iVar0, 2, 0, 0);
					}
					*uParam1 = 2;
				}
				break;
			case 2:
				if (PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					*uParam1 = 3;
				}
				else if (!func_457(iVar0, joaat("SCRIPT_TASK_HORSE_ACTION")))
				{
					*uParam1 = 1;
				}
				break;
			case 3:
				if (bVar2 || !PED::GET_PED_RESET_FLAG(iParam0, 148))
				{
					if (!PED::IS_PED_RAGDOLL(iParam0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						return 1;
					}
				}
				break;
		}
	}
	if (bParam5)
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_SCRIPTED_PLAYER_CONTROL_DISABLED"));
	}
	return 0;
}

int func_470(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return 4;
						case 1:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
				case 1:
					switch (iParam1)
					{
						case 0:
							return 4;
						case 1:
							return 4;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

bool func_471(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	*uParam4 = { 0.0f, 0.0f, 0.0f /*3*/ };
	*uParam5 = 0.0f;
	iParam1 = 0;
	switch (*iParam0)
	{
		case 8:
			switch (iParam0->f_1)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 1575.76f, -7256.163f, 66.338f, 1577.968f, -7254.326f, 69.9739f, 320.25f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 1575.608f, -7257.264f, 66.338f, 1572.88f, -7259.102f, 69.9742f, 140.25f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 1576.11f, -7256.514f, 66.3383f, 1577.978f, -7259.194f, 69.9742f, 230.25f);
									break;
								case 3:
									func_622(uParam3, uParam4, uParam5, 1575.02f, -7256.743f, 66.3583f, 1572.92f, -7254.064f, 69.9742f, 50.25f);
									break;
							}
							break;
						case 1:
							switch (iParam2)
							{
								case 0:
									func_622(uParam3, uParam4, uParam5, 1576.342f, -7256.072f, 66.31089f, 1578.064f, -7254.624f, 69.929f, -41.1f);
									break;
								case 1:
									func_622(uParam3, uParam4, uParam5, 1574.98f, -7257.467f, 66.20089f, 1573.258f, -7258.915f, 69.819f, 138.9f);
									break;
								case 2:
									func_622(uParam3, uParam4, uParam5, 1574.959f, -7256.067f, 66.42089f, 1573.511f, -7254.345f, 70.039f, 48.9f);
									Jump @537; // curOff = 486
									func_622(uParam3, uParam4, uParam5, 1576.093f, -7257.566f, 66.25089f, 1577.541f, -7259.288f, 69.869f, 228.9f);
									Jump @1521; // curOff = 543
									switch (iParam0->f_1)
									{
										case 0:
											switch (iParam1)
											{
												case 0:
													switch (iParam2)
													{
														case 0:
															func_622(uParam3, uParam4, uParam5, 2618.444f, 638.0135f, 69.72782f, 2616.288f, 636.1308f, 72.67426f, 136.425f);
															break;
														case 1:
															func_622(uParam3, uParam4, uParam5, 2619.188f, 639.1685f, 69.72782f, 2621.324f, 641.0663f, 72.61241f, 316.425f);
															break;
														case 2:
															func_622(uParam3, uParam4, uParam5, 2617.417f, 639.231f, 69.72782f, 2615.013f, 641.9806f, 72.66282f, 46.425f);
															break;
														case 3:
															func_622(uParam3, uParam4, uParam5, 2619.704f, 638.2335f, 69.72782f, 2621.722f, 636.0577f, 72.55793f, 226.425f);
															break;
													}
													break;
												case 1:
													switch (iParam2)
													{
														case 0:
															func_622(uParam3, uParam4, uParam5, 2618.444f, 638.0135f, 69.72782f, 2616.288f, 636.1308f, 72.67426f, 136.425f);
															break;
														case 1:
															func_622(uParam3, uParam4, uParam5, 2619.188f, 639.1685f, 69.72782f, 2621.324f, 641.0663f, 72.61241f, 316.425f);
															break;
														case 2:
															func_622(uParam3, uParam4, uParam5, 2617.417f, 639.231f, 69.72782f, 2615.013f, 641.9806f, 72.66282f, 46.425f);
															break;
														case 3:
															func_622(uParam3, uParam4, uParam5, 2619.704f, 638.2335f, 69.72782f, 2621.722f, 636.0577f, 72.55793f, 226.425f);
															break;
													}
													break;
											}
											break;
										case 1:
											switch (iParam1)
											{
												case 0:
													switch (iParam2)
													{
														case 0:
															func_622(uParam3, uParam4, uParam5, 2394.765f, 1056.679f, 81.19875f, 2394.006f, 1060.42f, 84.8347f, 141.25f);
															break;
														case 1:
															func_622(uParam3, uParam4, uParam5, 2394.905f, 1057.452f, 81.22875f, 2397.502f, 1057.202f, 84.8467f, 270.0f);
															break;
														case 2:
															func_622(uParam3, uParam4, uParam5, 2394.345f, 1056.48f, 81.19875f, 2394.095f, 1053.883f, 84.8347f, 180.0f);
															break;
														case 3:
															func_622(uParam3, uParam4, uParam5, 2393.452f, 1056.709f, 81.19875f, 2390.854f, 1056.959f, 84.8347f, 90.0f);
															break;
													}
													break;
												case 1:
													switch (iParam2)
													{
														case 0:
															func_622(uParam3, uParam4, uParam5, 2393.603f, 1057.937f, 81.19875f, 2393.949f, 1060.159f, 84.8168f, 0.0f);
															break;
														case 1:
															func_622(uParam3, uParam4, uParam5, 2394.352f, 1056.048f, 81.19875f, 2394.006f, 1053.825f, 84.8168f, 180.0f);
															break;
														case 2:
															func_622(uParam3, uParam4, uParam5, 2393.211f, 1056.609f, 81.19875f, 2390.988f, 1056.954f, 84.8168f, 90.0f);
															break;
														case 3:
															func_622(uParam3, uParam4, uParam5, 2394.726f, 1057.311f, 81.19875f, 2396.949f, 1056.965f, 84.8168f, 270.0f);
															break;
													}
													break;
											}
											break;
									}
									return !func_48(*uParam3);
								}

int func_472(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
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
		if (func_235())
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
				if (func_623(iParam0, 1, 1) > fParam4)
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
			fVar1 = func_624(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_269(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_625(iParam0, iParam1, fVar1, bParam13))
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
				iVar2 = func_279(func_626(iParam0, sParam2, iParam11, iParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_473(int iParam0, bool bParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if ((iParam0 >= 6 && !bParam1) || (iParam0 > 10 && bParam1))
	{
		return false;
	}
	return true;
}

bool func_474(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_627(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_532((*iParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_475()
{
	int iVar0;

	if (sLocal_399.f_0 == 8)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (func_162(iLocal_426[iVar0], 0, 1) && PED::IS_PED_HUMAN(iLocal_426[iVar0]))
		{
			func_303(iLocal_426[iVar0], &(uLocal_434[iVar0]), joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
		}
		iVar0++;
	}
}

void func_476()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_161(&(iLocal_426[iVar0]), &(sLocal_882[iVar0 /*75*/]), &(sLocal_882[iVar0 /*75*/].f_21), 1, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_426[iVar0], 301, true);
		iVar0++;
	}
	iLocal_876 = 1;
}

void func_477()
{
	int iVar0;
	int iVar1;
	float fVar2;

	fVar2 = 0.0f;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (func_162(iLocal_426[iVar0], 0, 1) && PED::IS_PED_HUMAN(iLocal_426[iVar0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[iVar0], 2);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_628(iLocal_426[iVar0], &iVar1, fVar2, fVar2, 1, 1);
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[0], 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(iLocal_431[0], &iVar1, 0, 0, 1, 1);
		PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[0], 1.0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[1], 2);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(iLocal_431[1], &iVar1, 1.0f, 1.0f, 1, 1);
		PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[1], 1.0f);
	}
}

void func_478(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam1 != 0)
	{
		func_629(iParam0, iParam1, iParam3, 1);
	}
	else
	{
		func_629(iParam0, iParam2, iParam3, 0);
	}
}

void func_479(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, sParam1, iParam2, iParam3);
	}
}

int func_480(Vector3 vParam0, var uParam3, int iParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	float fVar0;

	if (fParam8 > 0.0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam8)
		{
			return 0;
		}
	}
	fVar0 = func_554(PLAYER::PLAYER_PED_ID(), vParam0, 1);
	if (fVar0 < fParam7)
	{
		if (func_630(vParam0, 0, uParam3, iParam4, fParam5, fParam6, fParam7, fParam9, 0))
		{
			return 1;
		}
		if (fVar0 < fParam10)
		{
			*iParam4 = 0.0f;
			return 1;
		}
	}
	return 0;
}

bool func_481()
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	switch (sLocal_399.f_1)
	{
		case 1:
			vVar0 = { 2418.828f, 1065.537f, 86.22379f /*3*/ };
			vVar3 = { 2416.279f, 1062.208f, 88.05131f /*3*/ };
			vVar6 = { 2422.612f, 1066.312f, 86.27942f /*3*/ };
			vVar9 = { 2419.005f, 1064.716f, 86.26469f /*3*/ };
			if (func_631(vVar0, vVar3, Global_36) || func_631(vVar6, vVar9, Global_36))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_482(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4, float fParam5)
{
	if (func_190(uParam0->f_3))
	{
		if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (fParam2 > 0.0f)
			{
				if (!func_126(uParam1))
				{
					if (func_632(uParam0, bParam4, fParam5))
					{
						func_269(uParam1);
					}
				}
				else if (func_285(uParam1, fParam2))
				{
					if (bParam3)
					{
						func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
					return true;
				}
				else
				{
					func_433(uParam1);
				}
			}
			else if (func_632(uParam0, bParam4, fParam5))
			{
				if (bParam3)
				{
					func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
				}
				return true;
			}
		}
	}
	return false;
}

int func_483()
{
	Vector3 vVar0;
	Vector3 vVar3;

	switch (sLocal_399.f_1)
	{
		case 0:
			vVar0 = { 2584.215f, 623.2336f, 73.78429f /*3*/ };
			vVar3 = { 2584.87f, 610.8616f, 75.88813f /*3*/ };
			break;
		case 1:
			vVar0 = { 2412.626f, 1075.403f, 87.59463f /*3*/ };
			vVar3 = { 2412.071f, 1081.062f, 88.69707f /*3*/ };
			break;
	}
	if (!bLocal_1225)
	{
		func_301(iLocal_431[0], &sLocal_14, 0);
		func_301(iLocal_431[1], &sLocal_14, 0);
		bLocal_1225 = true;
	}
	if (func_631(vVar0, vVar3, Global_36))
	{
		return func_485(&sLocal_14, &uLocal_392, 3.0f, 40.0f, 20.0f, 1500, 0.5f, 0.5f, 1, 0, 1, -1082130432, 1, 0, 0) | func_633(&iLocal_431, &(sLocal_14.f_33), &uLocal_1226, 2.0f, 35.0f, 0, 20.0f, 1092616192);
	}
	return 0;
}

bool func_484(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, float fParam6, bool bParam7, float fParam8, float fParam9)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (func_634(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam8 * fParam8))
	{
		*iParam2 = 0.0f;
		return true;
	}
	if (fParam6 > 0.0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > fParam6)
		{
			return false;
		}
	}
	if (func_635(iParam0, bParam5))
	{
		if (func_630(vVar0, iParam0, uParam1, iParam2, bParam3, iParam4, bParam5, bParam7, fParam9))
		{
			return true;
		}
	}
	else if (!bParam7)
	{
		*iParam2 = 0.0f;
	}
	return false;
}

int func_485(var uParam0, var uParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;

	func_345(Global_35, uParam0->f_51, uParam1, 0.0f, 0, 0);
	fVar0 = 0.0f;
	if (func_346(uParam1, iParam5))
	{
		if (PED::IS_PED_FULLY_ON_MOUNT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (func_636(uParam0, fParam2, 1114636288, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264, bParam14, 1))
	{
		return 1;
	}
	return 0;
}

void func_486(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_79(iParam0, iParam1);
	}
	else
	{
		func_80(iParam0, iParam1);
	}
}

void func_487(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	func_637(&(uParam0->f_21), sParam1, sParam2, sParam3, 0);
}

void func_488(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_638(&(uParam0->f_21[iParam1 /*17*/]), bParam2, bParam3);
}

char* func_489(int iParam0)
{
	if (func_639(iParam0))
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

void func_490(var uParam0, int iParam1, char* sParam2)
{
	func_640(&(uParam0->f_21[iParam1 /*17*/]), sParam2);
}

void func_491(var uParam0, int iParam1, char* sParam2, int iParam3)
{
	if (iParam1 > -1 && iParam1 < 3)
	{
		uParam0->f_21[iParam1 /*17*/].f_13 = sParam2;
		uParam0->f_21[iParam1 /*17*/].f_15 = iParam3;
	}
}

void func_492()
{
	int iVar0;
	struct<4> /*32*/ sVar1[4];

	if (bLocal_221 && !bLocal_222)
	{
		if (func_212(&(sLocal_442[2 /*32*/])))
		{
			if (func_212(&(sLocal_442[3 /*32*/])))
			{
				if (func_110(func_7(&sLocal_14), func_109(&sLocal_14), &sLocal_442, &iLocal_426, 1, 2, 3, 1))
				{
					func_641(&(sVar1[2 /*4*/]), &(sVar1[3 /*4*/]));
					iVar0 = 2;
					while (iVar0 <= 3)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iVar0]))
						{
							PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[iVar0], 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 5, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 17, false);
							func_303(iLocal_426[iVar0], &(uLocal_434[iVar0]), joaat("BLIP_STYLE_COP"), joaat("BLIP_MODIFIER_ENEMY"), 0, 0);
							TASK::TASK_COMBAT_PED(iLocal_426[iVar0], Global_35, 0, 0);
							func_494(iLocal_426[iVar0]);
							func_642(iLocal_426[iVar0]);
						}
						iVar0++;
					}
					bLocal_221 = false;
					bLocal_222 = true;
				}
			}
		}
	}
}

void func_493(int iParam0, Vector3 vParam1, int iParam4, char* sParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	Vector3 vVar13;
	Vector3 vVar16;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iParam0, true, true);
		func_643(iParam0, iParam4, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		if (bParam8)
		{
			PED::_SET_PED_COMBAT_STYLE(iParam0, joaat("SCRIPT_CALMAIMPOSTCOMBAT_LOW"), 1, -1.0f);
		}
		WEAPON::_SET_FORCE_CURRENT_WEAPON_INTO_COCKED_STATE(iParam0, 0);
		if (!func_40(48))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
			func_479(&sLocal_369, sParam5, iParam0, 0);
			if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(sLocal_369.f_1, sParam5, &sVar1, false, 0, 2))
			{
				vVar13 = { sVar1 /*3*/ };
				vVar16 = { func_276(iParam0, vVar13, 1065353216) /*3*/ };
				func_644(iParam0, vVar13);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar13 + vVar16, fParam7, -1, 0.25f, 0, sVar1.f_3.f_2);
				func_628(iParam0, &iVar0, 0, 0, 1, 1);
			}
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_231, fParam7, -1, 0.25f, 0, 40000.0f);
			func_628(iParam0, &iVar0, 0, 0, 1, 1);
		}
		PED::FORCE_PED_MOTION_STATE(iParam0, iParam6, false, 0, false);
	}
}

void func_494(int iParam0)
{
	MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iParam0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 317, false);
}

void func_495(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
	}
}

bool func_496()
{
	var uVar0;
	var uVar1;

	uVar0 = func_645(0);
	uVar1 = func_645(1);
	return (uVar0 && uVar1);
}

bool func_497()
{
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_242))
	{
		return func_618(Global_35, iLocal_242, 0, 1);
	}
	return true;
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[0], 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam0, 1, 1);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(iLocal_426[0], &iVar0, 0, 0, 1, 1);
		func_642(iLocal_426[0]);
		func_494(iLocal_426[0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[1], 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_AIM_AT_ENTITY(0, Global_35, iParam1, 1, 1);
		TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, 5000, joaat("FIRING_PATTERN_FULL_AUTO"), true);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(iLocal_426[1], &iVar0, 0, 0, 1, 1);
		func_642(iLocal_426[1]);
		func_494(iLocal_426[1]);
	}
}

void func_499()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iVar0]))
		{
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_426[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_426[iVar0], 17, false);
			TASK::TASK_COMBAT_PED(iLocal_426[iVar0], Global_35, 0, 16);
			func_494(iLocal_426[iVar0]);
			func_642(iLocal_426[iVar0]);
		}
		iVar0++;
	}
}

void func_500()
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!bLocal_221)
	{
		func_646(&vVar0, &vVar3);
		sLocal_442[2 /*32*/].f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
		sLocal_442[2 /*32*/] = 6;
		sLocal_442[2 /*32*/].f_3 = 522321252;
		strcpy_s(&(sLocal_442[2 /*32*/].f_23), 64, "0761_S_M_M_FussarHenchman_01_HISPANIC_02");
		sLocal_442[2 /*32*/].f_6 = { vVar0 /*3*/ };
		func_82(&(sLocal_442[2 /*32*/].f_22));
		sLocal_442[3 /*32*/].f_1 = joaat("S_M_M_FUSSARHENCHMAN_01");
		sLocal_442[3 /*32*/] = 6;
		sLocal_442[3 /*32*/].f_3 = -636783812;
		strcpy_s(&(sLocal_442[3 /*32*/].f_23), 64, "0760_S_M_M_FussarHenchman_01_HISPANIC_01");
		sLocal_442[3 /*32*/].f_6 = { vVar3 /*3*/ };
		func_82(&(sLocal_442[2 /*32*/].f_22));
		func_647(&(sLocal_442[2 /*32*/]));
		func_647(&(sLocal_442[3 /*32*/]));
		bLocal_221 = true;
	}
}

void func_501()
{
	int iVar0;

	switch (iLocal_1196)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				switch (iLocal_860[iVar0])
				{
					case 1:
						switch (iVar0)
						{
							case 0:
								func_284(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V1_THREATEN_B", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								break;
							case 1:
								func_284(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V1_THREATEN_A", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
								break;
						}
						func_603(&(sLocal_709[0 /*75*/].f_21), 0, 0);
						func_603(&(sLocal_709[1 /*75*/].f_21), 0, 0);
						iLocal_1196 = 1;
						break;
				}
				iVar0++;
			}
			break;
	}
}

void func_502(int iParam0, var uParam1)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (uParam1->f_6 != -1)
		{
			if (!*uParam1)
			{
				if (func_648(uParam1))
				{
					*uParam1 = 1;
				}
			}
			vVar0 = { func_649(func_48(uParam1->f_28), ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_28) /*3*/ };
			func_345(Global_35, vVar0, &(uParam1->f_11), 1061158912, 0, 0);
			if (!func_526(Global_35, iParam0, 35.0f, 1) || func_650(iParam0, uParam1))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 2.0f);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, 1616546922))
			{
				PED::FORCE_PED_MOTION_STATE(iParam0, joaat("MOTIONSTATE_RUN"), false, 0, false);
			}
			switch (uParam1->f_5)
			{
				case 0:
					if (func_651(iParam0, uParam1, 0, 0))
					{
						if (*uParam1)
						{
							uParam1->f_5 = 5;
						}
						else
						{
							uParam1->f_5 = 1;
						}
					}
					break;
				case 1:
					if (func_652(iParam0, uParam1))
					{
						if (!func_653(iParam0, uParam1))
						{
							if (!*uParam1)
							{
								uParam1->f_5 = 0;
							}
							else
							{
								uParam1->f_5 = 5;
							}
						}
					}
					else if (!func_457(iParam0, joaat("SCRIPT_TASK_ANY")))
					{
						if (!func_126(&(uParam1->f_23)) || func_127(&(uParam1->f_23), 0.5f))
						{
							func_651(iParam0, uParam1, 1, 0);
						}
					}
					break;
				case 2:
					if (func_654(iParam0, uParam1))
					{
						func_655(uParam1);
						if (*uParam1)
						{
							uParam1->f_5 = 5;
						}
						else
						{
							func_651(iParam0, uParam1, 1, 0);
							uParam1->f_5 = 1;
						}
					}
					break;
				case 3:
					if (!*uParam1)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, true, true) || func_526(iParam0, Global_35, 35.0f, 1))
						{
							func_651(iParam0, uParam1, 0, 0);
							uParam1->f_5 = 1;
						}
					}
					break;
				case 4:
					if (func_656(&iParam0) || !func_457(iParam0, joaat("SCRIPT_TASK_ANY")))
					{
						func_651(iParam0, uParam1, 0, 0);
						uParam1->f_5 = 1;
					}
					break;
				case 5:
					break;
			}
		}
	}
}

void func_503(int* iParam0, int iParam1, bool bParam2)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
	func_303(iParam1, iParam0, joaat("BLIP_STYLE_ENEMY"), joaat("BLIP_MODIFIER_URGENT_ALERT"), 0, 0);
	if (bParam2)
	{
		func_657(iParam1, joaat("BLIP_MODIFIER_ENEMY_GUNSHOTS_ONLY"), 1);
	}
	else
	{
		func_657(iParam1, joaat("BLIP_MODIFIER_ENEMY"), 1);
	}
}

void func_504(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

void func_505()
{
	CAM::_0x88544C0E3291DCAE(1);
	func_325();
}

bool func_506()
{
	int iVar0;

	iVar0 = func_279(iLocal_390 == 0, 4, 6);
	if (func_658(iLocal_426[0]))
	{
		iVar0--;
	}
	if (func_658(iLocal_426[1]))
	{
		iVar0--;
	}
	if (func_658(iLocal_431[0]))
	{
		iVar0--;
	}
	if (func_658(iLocal_431[1]))
	{
		iVar0--;
	}
	if (iLocal_390 == 1)
	{
		if (func_658(iLocal_426[2]))
		{
			iVar0--;
		}
		if (func_658(iLocal_426[3]))
		{
			iVar0--;
		}
	}
	return iVar0 < 2;
}

void func_507(bool bParam0)
{
	if (!bLocal_1241)
	{
		func_659(iLocal_431[0], "FORGETTHIS", "HIMLATER", "KILLEDMYBROS", "LETSGIT", bParam0);
		func_659(iLocal_431[1], "WONTLET", "KILLSUS", "DAMNLUNATIC", "SCATTER", bParam0);
		func_659(iLocal_426[0], "OHNO", "LETSGIT", "ONEDAY", "WORTHIT", bParam0);
		func_659(iLocal_426[1], "MEALONE", "AINTDEAD", "PAYFORMYBROS", "GOTTARUN", bParam0);
		func_659(iLocal_426[2], "", "", "TIMEFORTHIS", "GOFELLERS", bParam0);
		func_659(iLocal_426[3], "", "", "LEAVEME", "BROTHERS", bParam0);
		bLocal_1241 = true;
	}
}

void func_508(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FLEE_PED(0, Global_35, 2, 0, 15.0f, -1, 0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			func_628(iLocal_431[0], &iVar0, 0, 0, 1, 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_FLEE_PED(0, Global_35, 2, 0, 15.0f, -1, 0);
			TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
			func_628(iLocal_431[1], &iVar0, 0, 0, 1, 1);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
		{
			func_140(func_660(0));
			TASK::TASK_AIM_AT_ENTITY(iLocal_426[0], Global_35, -1, 0, 0);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
		{
			func_140(func_660(1));
			TASK::TASK_AIM_AT_ENTITY(iLocal_426[1], Global_35, -1, 0, 0);
		}
	}
	func_18(9);
}

void func_509()
{
	switch (iLocal_390)
	{
		case 0:
			func_661(0, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), "Murfree_01", 0);
			func_661(1, joaat("WEAPON_REVOLVER_CATTLEMAN"), "Murfree_02", 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
			{
				PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[0], 1.0f);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
			{
				PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iLocal_431[1], 1.0f);
			}
			break;
		case 1:
			func_289(1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), "Murfree_01", 0, 0, 0);
			func_289(0, joaat("WEAPON_REVOLVER_CATTLEMAN"), "Murfree_02", 0, 0, 0);
			break;
	}
	func_460(&sLocal_327, "Loop_Bool", 0);
	func_460(&sLocal_348, "Loop_Bool", 0);
	func_662(&uLocal_302, Global_35, 0, 0, 2, 1, 2, 1, 0, 0, 0, 0);
	func_663(&iLocal_426);
	func_663(&iLocal_431);
	PED::SET_PED_CONFIG_FLAG(iLocal_426[0], 301, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_426[1], 301, true);
}

void func_510()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		func_661(iVar0, 0, 0, 0);
		iVar0++;
	}
}

bool func_511()
{
	func_664(23, 44, 0, 1, "RE_BOT_FTH_V1_GOTME", "GENERIC_SHOCKED_HIGH", 2);
	func_664(24, 45, 1, 0, "RE_BOT_FTH_V1_IMHIT", "GENERIC_FRIGHTENED_HIGH", 1);
	if (!bLocal_220)
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_426[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
		{
			bLocal_220 = true;
		}
	}
	if (!bLocal_220)
	{
		switch (iLocal_216)
		{
			case 0:
				if (func_40(1))
				{
					func_665(iLocal_431[1], -2.0f, "RE_BOT_FTH_V1_HEHERUN", &iLocal_216, 75.0f, 1);
				}
				break;
			case 1:
				func_665(iLocal_431[0], -2.0f, "RE_BOT_FTH_V1_HESCOMING", &iLocal_216, 75.0f, 1);
				break;
			case 2:
				if (func_457(iLocal_431[1], joaat("SCRIPT_TASK_PERFORM_SEQUENCE")))
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_431[1]) == iLocal_213)
					{
						func_665(iLocal_431[1], -2.0f, "RE_BOT_FTH_V1_WHEREIS", &iLocal_216, 75.0f, 1);
					}
				}
				break;
			case 3:
				func_665(iLocal_431[0], -4.0f, "RE_BOT_FTH_V1_EYESOPEN", &iLocal_216, 75.0f, 1);
				break;
			case 4:
				func_665(iLocal_431[1], 3.0f, "RE_BOT_FTH_V1_IMSCARED", &iLocal_216, 75.0f, 1);
				break;
			case 5:
				func_665(iLocal_431[0], -5.0f, "RE_BOT_FTH_V1_SHUTUP", &iLocal_216, 75.0f, 1);
				break;
			case 6:
				if (func_665(iLocal_431[1], 3.0f, "RE_BOT_FTH_V1_SCARED", &iLocal_216, 75.0f, 1))
				{
					bLocal_220 = true;
				}
				break;
			case 7:
				return true;
		}
	}
	return bLocal_220;
}

int func_512()
{
	return func_666(Global_35);
}

bool func_513()
{
	PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 608457313) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1121862613))
	{
		func_495(&sLocal_369);
		func_667(0);
		func_667(1);
		func_668(0);
		func_668(1);
		return true;
	}
	return false;
}

bool func_514()
{
	var uVar0[4];

	PED::SET_PED_RESET_FLAG(Global_35, 54, true);
	switch (iLocal_390)
	{
		case 0:
			uVar0[0] = iLocal_426[0];
			uVar0[1] = iLocal_426[1];
			break;
		case 1:
			uVar0[0] = iLocal_431[1];
			uVar0[1] = iLocal_431[0];
			break;
	}
	if (!func_40(26))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -881316974) || ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[1], -881316974)) || func_458(&sLocal_369, "breakout_end", 1))
		{
			func_18(26);
		}
	}
	if (!func_40(27))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -983684657))
		{
			func_18(27);
		}
	}
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uVar0[0], &uLocal_302);
	IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(uVar0[1], &uLocal_302);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -999023058))
	{
	}
	if (!func_40(28))
	{
		func_460(&sLocal_327, "Loop_Bool", 1);
		func_460(&sLocal_348, "Loop_Bool", 1);
		ANIMSCENE::SET_ANIM_SCENE_RATE(sLocal_327.f_1, 1.25f);
		ANIMSCENE::SET_ANIM_SCENE_RATE(sLocal_348.f_1, 1.25f);
		func_18(43);
		func_18(28);
	}
	if (!func_40(37) && func_40(26))
	{
		if (func_458(&sLocal_369, "breakout_end", 1) || (func_40(28) && func_40(27)))
		{
			if (!func_458(&sLocal_369, "breakout_end", 1))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -881316974) || ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[1], -881316974))
				{
					func_18(40);
				}
				else
				{
					func_18(41);
				}
			}
			else
			{
				func_460(&sLocal_327, "Loop_Bool", 1);
				func_460(&sLocal_348, "Loop_Bool", 1);
			}
			switch (iLocal_390)
			{
				case 0:
					func_503(&(uLocal_434[0]), iLocal_426[0], 0);
					func_503(&(uLocal_434[1]), iLocal_426[1], 0);
					break;
				case 1:
					func_503(&(uLocal_439[1]), iLocal_431[1], 0);
					func_503(&(uLocal_439[0]), iLocal_431[0], 0);
					break;
			}
			func_18(37);
		}
	}
	if (func_40(40))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uVar0[0], -881316974))
		{
			func_669(&sLocal_369, 5, 1, 1);
			func_140(40);
		}
	}
	else if (func_40(41))
	{
		func_669(&sLocal_369, 6, 1, 1);
		func_140(41);
	}
	if (!func_40(38))
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uVar0[0], -1) || ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(sLocal_369.f_1, "Murfree_01"))
		{
			switch (iLocal_390)
			{
				case 0:
					func_670(0, &(uVar0[0]), uVar0[0], 2.0f, &(uLocal_434[0]));
					iLocal_1200[0] = 4;
					break;
				case 1:
					func_670(0, &(uVar0[0]), uVar0[0], 2.0f, &(uLocal_439[1]));
					iLocal_1205[1] = 4;
					break;
			}
			func_18(38);
		}
	}
	if (!func_40(39))
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uVar0[1], -1) || ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(sLocal_369.f_1, "Murfree_02"))
		{
			switch (iLocal_390)
			{
				case 0:
					func_670(1, &(uVar0[1]), uVar0[0], 2.0f, &(uLocal_434[1]));
					iLocal_1200[1] = 4;
					break;
				case 1:
					func_670(1, &(uVar0[1]), uVar0[0], 2.0f, &(uLocal_439[0]));
					iLocal_1205[0] = 4;
					break;
			}
			func_18(39);
		}
	}
	if (func_40(38) && func_40(39))
	{
		return true;
	}
	return false;
}

void func_515()
{
	int iVar0;

	return;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[0], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[0], 5, true);
		PED::SET_PED_STEALTH_MOVEMENT(iLocal_431[0], false, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 20.0f, 1.5f, -1.0f);
		func_671(iLocal_431[0], Global_35, 1);
		func_628(iLocal_431[0], &iVar0, 0, 0, 1, 1);
		func_672(iLocal_431[0]);
		func_63(sLocal_636[0 /*36*/].f_8);
		PED::SET_PED_CONFIG_FLAG(iLocal_431[0], 301, true);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
	{
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_431[1], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_431[1], 5, true);
		PED::SET_PED_STEALTH_MOVEMENT(iLocal_431[1], false, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 20.0f, 1.5f, -1.0f);
		func_671(iLocal_431[1], Global_35, 1);
		func_628(iLocal_431[1], &iVar0, 0, 0, 1, 1);
		func_672(iLocal_431[1]);
		func_63(sLocal_636[1 /*36*/].f_8);
		PED::SET_PED_CONFIG_FLAG(iLocal_431[1], 301, true);
	}
}

bool func_516(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0]))
		{
			return false;
		}
		iVar0++;
	}
	if (bParam1)
	{
	}
	return true;
}

bool func_517(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (*iParam1 - 1))
	{
		if (ENTITY::IS_ENTITY_DEAD((*iParam1)[iVar0]))
		{
		}
		else if (func_526(iParam0, (*iParam1)[iVar0], fParam2, bParam3))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_518()
{
	int iVar0;

	func_673();
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		func_674(&(iLocal_426[iVar0]), uLocal_434[iVar0], &(iLocal_1200[iVar0]), 1, &(uLocal_1208[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_431)
	{
		func_674(&(iLocal_431[iVar0]), uLocal_439[iVar0], &(iLocal_1205[iVar0]), 0, &(uLocal_1213[iVar0]));
		iVar0++;
	}
}

bool func_519()
{
	if (func_283(Global_35, 1))
	{
		return false;
	}
	if ((func_40(21) && !func_40(32)) && !func_40(22))
	{
		switch (iLocal_217)
		{
			case 0:
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]))
				{
					func_665(iLocal_431[0], -2.0f, "RE_BOT_FTH_V1_DIDNTWORK", &iLocal_217, 75.0f, 1);
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]))
				{
					func_665(iLocal_431[1], -2.0f, "RE_BOT_FTH_V1_DIDNTWORK", &iLocal_217, 75.0f, 1);
				}
				else
				{
					iLocal_217++;
				}
				break;
			case 1:
				if (func_40(6))
				{
					if (func_665(iLocal_426[0], -3.0f, "RE_BOT_FTH_V1_FORYOU", &iLocal_217, 75.0f, 1))
					{
						iLocal_217 = 0;
						func_18(22);
					}
				}
				break;
		}
	}
	else
	{
		switch (iLocal_217)
		{
			case 0:
				func_665(iLocal_426[1], -2.0f, "RE_BOT_FTH_V1_SQUEAL", &iLocal_217, 75.0f, 1);
				break;
			case 1:
				func_665(iLocal_426[0], -2.0f, "RE_BOT_FTH_V1_GUTYOU", &iLocal_217, 75.0f, 1);
				break;
			case 2:
				if (func_40(18))
				{
					func_665(iLocal_431[0], -2.0f, "RE_BOT_FTH_V1_DEADYET", &iLocal_217, 75.0f, 1);
				}
				break;
			case 3:
				func_665(iLocal_431[1], -2.0f, "RE_BOT_FTH_V1_COMEOUT", &iLocal_217, 75.0f, 1);
				break;
			case 4:
				return true;
		}
	}
	return false;
}

void func_520(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar5;
	int iVar8;

	iVar8 = func_675(iParam0);
	iVar0 = 0;
	while (iVar0 < 16)
	{
		vVar1 = { func_16(iVar8, iVar0) /*4*/ };
		if (!func_48(vVar1))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vVar1, 2.0f))
			{
				if (func_48(vVar5))
				{
					vVar5 = { vVar1 /*3*/ };
				}
				if (func_48(*uParam1))
				{
					*uParam1 = { vVar1 /*3*/ };
				}
				else if (func_48(*uParam2))
				{
					*uParam2 = { vVar1 /*3*/ };
				}
				else if (func_48(*uParam3))
				{
					*uParam3 = { vVar1 /*3*/ };
				}
				else if (func_48(*uParam4))
				{
					*uParam4 = { vVar1 /*3*/ };
				}
				else if (func_48(*uParam5))
				{
					*uParam5 = { vVar1 /*3*/ };
				}
				else
				{
					iVar0++;
				}
				if (func_48(*uParam1))
				{
					*uParam1 = { vVar5 /*3*/ };
				}
				if (func_48(*uParam2))
				{
					*uParam2 = { vVar5 /*3*/ };
				}
				if (func_48(*uParam3))
				{
					*uParam3 = { vVar5 /*3*/ };
				}
				if (func_48(*uParam4))
				{
					*uParam4 = { vVar5 /*3*/ };
				}
				if (func_48(*uParam5))
				{
					*uParam5 = { vVar5 /*3*/ };
				}
			}
		}
	}
}

bool func_521(var uParam0, var uParam1, Vector3 vParam2, int iParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!func_48(vParam2))
		{
			uParam1->f_6 = { vParam2 /*3*/ };
			func_82(&(uParam1->f_22));
		}
		if (func_114(uParam1, uParam0, func_7(&sLocal_14), func_109(&sLocal_14), 0, 1))
		{
			func_115(*uParam0);
			return true;
		}
	}
	return ENTITY::DOES_ENTITY_EXIST(*uParam0);
}

void func_522(int iParam0, var uParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_40(31))
		{
		}
	}
}

bool func_523(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 11:
			return 3;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			return 0;
		case 3:
		case 10:
			return 2;
		case 4:
		case 9:
			return 1;
		case 8:
			return 4;
		case 13:
		case 14:
		case 15:
		case 16:
			return 5;
		default:
			break;
	}
	return -1;
}

char* func_525(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[32];

	strcpy_s(&cVar0, 64, "RE_");
	strcpy_s(&cVar8, 32, sParam1);
	strcat_s(&cVar0, 64, sParam0);
	strcat_s(&cVar0, 64, "_");
	strcat_s(&cVar0, 64, &cVar8);
	if (iParam3 >= 0)
	{
		strcat_s(&cVar0, 64, "_V");
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		strcat_s(&cVar0, 64, "_ALL");
	}
	strcat_s(&cVar0, 64, "_");
	strcat_s(&cVar0, 64, sParam2);
	return func_676(cVar0);
}

bool func_526(int iParam0, int iParam1, float fParam2, bool bParam3)
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

char* func_527(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANYBODY";
		case 1:
			return "NEEDHELP";
		case 2:
			return "OUTTHERE";
		default:
			break;
	}
	return "";
}

void func_528(char* sParam0)
{
	if (func_284(iLocal_431[0], Global_35, func_302(sParam0, 0), 0, 75.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0))
	{
		func_269(&uLocal_264);
		func_504(1891783641, iLocal_431[0], 1);
		iLocal_215++;
	}
}

void func_529()
{
	int iVar0;

	iVar0 = 0;
	switch (iLocal_874)
	{
		case 0:
			func_487(&(sLocal_709[iVar0 /*75*/]), "", "", "");
			sLocal_709[iVar0 /*75*/].f_74 = 20.0f;
			func_488(&(sLocal_709[iVar0 /*75*/]), 2, 1, 0);
			func_488(&(sLocal_709[iVar0 /*75*/]), 0, 1, 0);
			func_488(&(sLocal_709[iVar0 /*75*/]), 1, 1, 0);
			func_490(&(sLocal_709[iVar0 /*75*/]), 0, func_489(24));
			bLocal_401 = true;
			iLocal_860[iVar0] = -1;
			iLocal_874 = 1;
			break;
		case 1:
			switch (iLocal_860[iVar0])
			{
				case 2:
					func_269(&uLocal_863);
					func_284(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_ROB", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					bLocal_869 = true;
					iLocal_874 = 6;
					break;
				case 0:
					func_269(&uLocal_863);
					if (!bLocal_870)
					{
						func_284(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_QUESTION", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					else
					{
						func_284(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_GREET", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					bLocal_869 = true;
					iLocal_874 = 2;
					break;
				case 1:
					func_269(&uLocal_863);
					if (!bLocal_871)
					{
						func_284(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_ANTAGONIZE", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					else
					{
						func_284(Global_35, iLocal_431[iVar0], "RE_BOT_FTH_V2_ANTAGONIZE_END", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					}
					bLocal_869 = true;
					iLocal_874 = 4;
					break;
			}
			break;
		case 2:
			if (func_127(&uLocal_863, 2.0f))
			{
				if (!bLocal_870 && !bLocal_871)
				{
					func_284(iLocal_431[iVar0], Global_35, "CALL_FOR_SUPPORT", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					bLocal_870 = true;
					iLocal_874 = 3;
				}
				else
				{
					iLocal_873 = 1;
				}
			}
			break;
		case 3:
			if (!func_283(iLocal_431[iVar0], 1))
			{
				func_488(&(sLocal_709[iVar0 /*75*/]), 2, 1, 0);
				func_488(&(sLocal_709[iVar0 /*75*/]), 0, 1, 0);
				func_488(&(sLocal_709[iVar0 /*75*/]), 1, 1, 0);
				func_490(&(sLocal_709[iVar0 /*75*/]), 0, func_489(7));
				func_269(&uLocal_866);
				bLocal_869 = false;
				iLocal_874 = 1;
			}
			break;
		case 4:
			if (func_127(&uLocal_863, 2.0f))
			{
				if (!bLocal_870 && !bLocal_871)
				{
					func_284(iLocal_431[iVar0], Global_35, "CALL_FOR_SUPPORT", 0, -1082130432, 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					bLocal_871 = true;
					iLocal_874 = 5;
				}
				else
				{
					iLocal_873 = 1;
				}
			}
			break;
		case 5:
			if (!func_283(iLocal_431[iVar0], 1))
			{
				func_488(&(sLocal_709[iVar0 /*75*/]), 2, 1, 0);
				func_488(&(sLocal_709[iVar0 /*75*/]), 0, 1, 0);
				func_488(&(sLocal_709[iVar0 /*75*/]), 1, 1, 0);
				func_490(&(sLocal_709[iVar0 /*75*/]), 0, func_489(7));
				func_269(&uLocal_866);
				bLocal_869 = false;
				iLocal_874 = 1;
			}
			break;
		case 6:
			if (func_127(&uLocal_863, 2.0f))
			{
				bLocal_872 = true;
			}
			break;
		case 7:
			break;
	}
}

int func_530(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	bVar0 = func_677(iParam3, 1);
	bVar1 = func_677(iParam3, 2);
	bVar2 = !func_677(iParam3, 4);
	bVar3 = func_677(iParam3, 8);
	bVar4 = !func_677(iParam3, 16);
	bVar5 = func_677(iParam3, 32);
	bVar6 = func_677(iParam3, 64);
	return func_643(iParam0, iParam1, bVar0, bVar1, bParam4, bVar2, bVar3, fParam5, fParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

int func_531()
{
	if (func_40(32) || func_40(21))
	{
		return 1;
	}
	if (func_512())
	{
		return 1;
	}
	return 0;
}

bool func_532(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		func_678(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0.0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_679(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_680(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_681(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_682(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_683(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 & func_237(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & (1 << 19) == 0))
		{
			if (!iParam2->f_1 & (1 << 14) != 0)
			{
				*iParam3 = (1 << 14);
				func_680(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_684(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_685(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_680(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_686(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_680(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (func_687(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_687(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_680(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_688(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & (1 << 18) != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20.0f)
			{
				if (func_689(&iParam0, iParam2))
				{
					*iParam3 = (1 << 12);
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_690(iParam2, 4000))
				{
					if (func_691(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) & func_692(iParam2, iParam0) && func_693(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_680(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4.0f)
			{
				if (func_691(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) & func_692(iParam2, iParam0) && func_693(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & (1 << 17) == 0)
						{
							if (func_694(iParam0, Global_1935630.f_41))
							{
								func_695();
								*iParam3 = 2;
								func_680(iParam0, iParam2, *iParam3);
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
					if (*iParam2 & (1 << 17) == 0)
					{
						if (func_694(iParam0, Global_1935630.f_41))
						{
							func_695();
							*iParam3 = 2;
							func_680(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10.0f)
			{
				if (func_696(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_553() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_695();
						*iParam3 = 2;
						func_680(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & (1 << 17) == 0)
				{
					if (func_697())
					{
						if (func_694(iParam0, Global_1935630.f_42))
						{
							func_695();
							*iParam3 = 2;
							func_680(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & (1 << 10) != 0)
		{
			if (func_698(iParam2, iParam0))
			{
				*iParam3 = (1 << 10);
				func_680(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & (1 << 11) != 0)
			{
				if (func_699(iParam0, iParam1, iParam2))
				{
					*iParam3 = (1 << 11);
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_700(iParam0, iParam2))
					{
						*iParam3 = (1 << 13);
						func_680(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_701(iParam0, iParam2))
				{
					*iParam3 = (1 << 15);
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12.0f)
		{
			if (*iParam2 & (1 << 20) != 0)
			{
				if (func_702(iParam2, 4000))
				{
					if (func_703(&iParam0, iParam2))
					{
						*iParam3 = (1 << 9);
						func_680(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & (1 << 10) != 0)
			{
				if (func_704(iParam0, iParam2))
				{
					*iParam3 = (1 << 16);
					iParam2->f_4 = 0;
					func_680(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_705(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_680(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

void func_533(int iParam0)
{
	MISC::SET_BIT(&iLocal_214, iParam0);
}

bool func_534()
{
	if (bLocal_869)
	{
		return true;
	}
	if (func_126(&uLocal_866))
	{
		if (!func_127(&uLocal_866, 2.0f))
		{
			return true;
		}
	}
	return false;
}

bool func_535(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		func_678(iParam1, 0, iVar0);
	}
	if (fParam3 > 0.0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (func_690(iParam1, 4000))
				{
					if (func_691(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) & func_692(iParam1, iParam0) && func_693(iParam1, iParam0))
					{
						func_695();
						*uParam2 = 2;
						func_680(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4.0f)
			{
				if (func_690(iParam1, 4000))
				{
					if (func_691(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) & func_692(iParam1, iParam0) && func_693(iParam1, iParam0))
					{
						func_695();
						*uParam2 = 2;
						func_680(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & (1 << 17) == 0)
						{
							if (func_694(iParam0, Global_1935630.f_41))
							{
								func_695();
								*uParam2 = 2;
								func_680(iParam0, iParam1, *uParam2);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*iParam1 & (1 << 17) == 0)
					{
						if (func_694(iParam0, Global_1935630.f_41))
						{
							func_695();
							*uParam2 = 2;
							func_680(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & (1 << 17) == 0)
				{
					if (func_697())
					{
						if (func_694(iParam0, Global_1935630.f_42))
						{
							func_695();
							*uParam2 = 2;
							func_680(iParam0, iParam1, *uParam2);
							return true;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (func_684(iParam1, 1065353216))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (func_685(Global_35, iParam0, iParam1))
					{
						func_695();
						*uParam2 = 4;
						func_680(iParam0, iParam1, *uParam2);
						return true;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (func_686(Global_35, iParam0, iParam1))
					{
						func_695();
						*uParam2 = 256;
						func_680(iParam0, iParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!iParam1->f_1 & (1 << 17) != 0)
		{
			if (func_706(iParam0, iParam1))
			{
				func_695();
				*uParam2 = (1 << 17);
				func_680(iParam0, iParam1, *uParam2);
				return true;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (func_707(iParam0, iParam1))
			{
				func_695();
				*uParam2 = (1 << 18);
				func_680(iParam0, iParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_536(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_214, iParam0);
}

bool func_537(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 0)
	{
		return (func_553() - *uParam0) >= iParam1;
	}
	return false;
}

bool func_538(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_283(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_708(fParam0))
	{
		return false;
	}
	return true;
}

void func_539()
{
	float fVar0;

	if (!bLocal_1251)
	{
		fVar0 = BUILTIN::VDIST(Global_36, vLocal_248);
		func_345(Global_35, vLocal_248, &uLocal_392, 1061158912, 1, fVar0);
		if (fVar0 > 35.0f)
		{
			if (func_709())
			{
				if (func_537(&uLocal_392, 3000))
				{
					if (!func_283(Global_35, 0))
					{
						bLocal_1251 = func_284(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_RUN", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
						if (bLocal_1251)
						{
							func_269(&uLocal_1253);
						}
					}
				}
			}
		}
	}
	if (!bLocal_1252)
	{
		if (func_709())
		{
			if (!func_283(Global_35, 0))
			{
				if (func_710())
				{
					bLocal_1252 = func_284(Global_35, Global_35, "RE_BOT_FTH_V2_PLYFINAL_FIGHT", 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
					if (bLocal_1252)
					{
						func_269(&uLocal_1253);
					}
				}
			}
		}
	}
}

void func_540()
{
	if (func_538(1.0f, 1, 0, 0) && !func_283(Global_35, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[0]) && !func_536(0))
		{
			func_284(iLocal_431[0], Global_35, func_302("YOUREDEAD", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_533(0);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[1]) && !func_536(1))
		{
			func_284(iLocal_431[1], Global_35, func_302("BUTCHERED", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_533(1);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]) && !func_536(2))
		{
			func_284(iLocal_426[0], Global_35, func_302("FUCKDIE", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_533(2);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]) && !func_536(3))
		{
			func_284(iLocal_426[1], Global_35, func_302("KILLEM", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_533(3);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[2]) && !func_536(4))
		{
			func_284(iLocal_426[2], Global_35, func_302("FEEDPIGS", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_533(4);
			return;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[3]) && !func_536(5))
		{
			func_284(iLocal_426[3], Global_35, func_302("HEREALIVE", 0), 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_CLEAR"), 1, 0, 0);
			func_533(5);
			return;
		}
	}
}

int func_541(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

void func_542(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_544(&((uParam1[iParam0->f_3 /*17*/])->f_6), 1, 1);
		if (bParam2)
		{
			func_711(iParam0, 0);
		}
	}
}

bool func_543(int iParam0)
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

void func_544(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_543(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_712(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_713(iVar0);
	*uParam0 = 0;
}

void func_545()
{
	func_714(23);
}

void func_546(int iParam0)
{
	Global_1310750.f_16035 |= iParam0;
}

int func_547(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != (1 << 14))
		{
			return 1;
		}
	}
	return 0;
}

void func_548(int iParam0)
{
	int iVar0;

	iVar0 = func_715(iParam0);
	if (iVar0 != 0)
	{
		func_716(-1, 24, 0, iVar0);
	}
}

void func_549(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750.f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (Global_17504.f_42[iParam0 /*8*/] == 0)
	{
		func_718(func_717(joaat("UNIQUE_BEATS_COMPLETED")), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0 /*8*/]++;
	Global_1310750[iParam0 /*111*/].f_110 |= 8;
	if (func_75(iParam0, 2))
	{
		func_719(iParam0, func_394(iParam3));
	}
	if (func_75(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_396();
		}
		func_720(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_120(iParam0, (1 << 16)))
	{
		func_721(iParam0, iParam1);
		func_722(iParam0, func_176(iParam0, iParam1));
		func_546(128);
	}
	func_398(iParam0, Global_1310750[iParam0 /*111*/].f_37, 1065353216, 0, 0);
	func_399(iParam0, 1);
	if (!bParam2)
	{
		func_546(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_723((1 << 19));
	}
	if (func_724(iParam0) != 0)
	{
		if (Global_17504.f_42[iParam0 /*8*/] >= func_724(iParam0))
		{
			Global_17504.f_42[iParam0 /*8*/].f_6 = 1;
		}
	}
}

void func_550(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_725(&Global_0, 8);
	}
	if (!func_726() || func_328() != -1)
	{
		return;
	}
	func_725(&Global_0, 1);
}

int func_551(int iParam0, bool bParam1)
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

void func_552(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0 /*8*/].f_3++;
	Global_1310750[iParam0 /*111*/].f_110 |= 2;
}

int func_553()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

float func_554(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_555(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_48(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = (1 << 14);
	iVar5[1] = iParam5;
	if (VOLUME::_0x870E9981ED27C815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_556(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_48(vParam0))
	{
		return false;
	}
	return VOLUME::_0x769BB7626B8CDB06(vParam0, fParam3, iParam5, iParam4, (1 << 14));
}

bool func_557(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16043)
	{
		if (!func_48(Global_1310750.f_16043[iVar0 /*3*/]))
		{
			if (func_131(vParam0, Global_1310750.f_16043[iVar0 /*3*/]) < 2500.0f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_558()
{
	int iVar0;
	int iVar1;

	iVar0 = func_727(func_247());
	if (iVar0 == 8)
	{
		iVar1 = func_248(func_247());
		if (func_250(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_728(func_573(0)))
	{
		return false;
	}
	if (func_729())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

float func_559(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_560(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= *iParam0 & 2080374784;
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= *iParam0 & (1 << 31);
	}
}

void func_561(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= *iParam0 & 62914560;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_562(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_358(*iParam0);
	iVar1 = func_357(*iParam0);
	if (iParam1 < 1 || iParam1 > func_363(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= *iParam0 & 4063232;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_563(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= *iParam0 & 126976;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_564(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 4032;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_565(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= *iParam0 & 63;
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

void func_566(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

bool func_567(int iParam0, int iParam1)
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

bool func_568(int iParam0, int iParam1)
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

bool func_569(int iParam0, int iParam1)
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
	if (!func_567(iParam0, iVar0))
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

void func_570(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_571(var uParam0)
{
	return func_388(*uParam0, 1);
}

bool func_572(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_730(*uParam0, 0.0f, 0.0f, 0.0f))
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

int func_573(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_731(1, 0, 0);
	}
	else
	{
		iVar0 = func_247();
	}
	return func_574(iVar0);
}

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return (1 << 9);
		case 3:
			return (1 << 10);
		case 61:
			return (1 << 11);
		case 110:
			return (1 << 12);
		case 5:
			return (1 << 13);
		case 35:
			return (1 << 14);
		case 22:
			return (1 << 15);
		case 105:
			return (1 << 16);
		case 8:
			return (1 << 17);
		case 32:
			return (1 << 18);
		case 26:
			return (1 << 19);
		case 115:
			return (1 << 20);
		case 76:
			return (1 << 21);
		case 92:
			return (1 << 22);
		case 56:
			return (1 << 23);
		case 120:
			return (1 << 24);
		default:
			break;
	}
	return 0;
}

int func_575(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_576(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1326862.f_512[iParam1];
	iVar1 = Global_1326862.f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == Global_1326862.f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_577(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_334(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_326(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_732(iVar0) < func_733(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_398(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

void func_578(int iParam0)
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

void func_579(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_580()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_734(iVar0, 128))
		{
			func_735(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_581()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_734(iVar0, 128) && func_734(iVar0, 1))
		{
			func_735(iVar0, (1 << 12));
		}
		iVar0++;
	}
}

void func_582(float fParam0)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR((fParam0 * 1000.0f));
	if (Global_1393237.f_3 < (MISC::GET_GAME_TIMER() + iVar0))
	{
		Global_1393237.f_3 = (MISC::GET_GAME_TIMER() + iVar0);
	}
}

void func_583()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_75(iVar0, (1 << 24)))
		{
			if (!func_736(iVar0))
			{
				func_737(iVar0, (1 << 12));
			}
		}
		iVar0++;
	}
}

void func_584(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_327(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_327(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_327(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_327(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_327(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_327(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_327(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_585(float fParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar0 = func_413();
	fVar1 = (Global_1393447.f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0.0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447.f_60 = (fVar0 + fParam0);
	}
}

int func_586(int iParam0)
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

int func_587(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_588(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;

	if (iParam1->f_11 & 1 != 0)
	{
		if (PED::IS_PED_LASSOED(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, func_738((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_589(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_606(uParam0[iVar0 /*17*/]))
		{
			func_739(uParam0[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_590(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;

	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_740(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (func_543((uParam2[iVar0 /*17*/])->f_6))
		{
			func_739(uParam2[iVar0 /*17*/], 11);
			return Global_1945188[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

int func_591(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_319(*uParam0);
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

int func_592(var uParam0, int iParam1)
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

void func_593(int* iParam0, int* iParam1)
{
	if (!func_443(iParam0, 23))
	{
		if (iParam1->f_7 == joaat("INPUT_INTERACT_LOCKON_NEG"))
		{
			func_739(iParam1, 19);
			func_608(iParam0, 23);
			func_741(iParam1, 2);
		}
	}
}

bool func_594(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (func_742(16))
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
					func_743(16);
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

void func_595(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_740(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

int func_596(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_597(int iParam0)
{
	return func_744(iParam0, 4) | func_744(iParam0, 5);
}

int func_598(int iParam0)
{
	return func_744(iParam0, 7);
}

int func_599(int iParam0)
{
	return func_744(iParam0, 6);
}

void func_600(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (func_606(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_740(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_601(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_745(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_746(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_747(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_747(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_748(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_602(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_749(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_750(iParam1, 1))
	{
		func_751(iParam1, 1);
		return true;
	}
	return false;
}

void func_603(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_638(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

bool func_604(int* iParam0, float fParam1, bool bParam2)
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

void func_605(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT2"), true);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT3"), true);
		PED::SET_PED_RESET_FLAG(Global_35, 203, true);
	}
}

bool func_606(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_607(int iParam0)
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

void func_608(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_609(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;
	bool bVar18;
	var uVar19;
	struct<22> /*176*/ sVar23;

	iVar0 = 0;
	sVar4.f_9 = joaat("SLOTID_NONE");
	bVar18 = func_752(iParam1, 128);
	sVar23.f_9 = joaat("SLOTID_NONE");
	if (func_753("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_754(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_409(sVar4.f_4))
			{
			}
			else if (!WEAPON::IS_WEAPON_A_GUN(sVar4.f_4))
			{
			}
			else if (iParam2 != 0 && sVar4.f_4 == iParam2)
			{
			}
			else if ((!func_752(iParam1, (1 << 9)) && func_755(sVar4.f_4, &uVar19, &sVar23, joaat("SLOTID_WEAPON_0"))) && !sVar23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::IS_PED_CARRYING_WEAPON(Global_35, sVar4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(sVar4.f_4) && (!WEAPON::IS_WEAPON_SHOTGUN(sVar4.f_4) || func_752(iParam1, 32))) && (!WEAPON::IS_WEAPON_PISTOL(sVar4.f_4) || !func_752(iParam1, (1 << 24)))) && (!WEAPON::IS_WEAPON_REVOLVER(sVar4.f_4) || !func_752(iParam1, (1 << 25))))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &sVar4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = sVar4.f_4;
						*uParam0 = { sVar4 /*4*/ };
					}
				}
			}
			iVar3++;
		}
		func_756(iVar1);
	}
	if (func_409(iVar0))
	{
	}
	else if (!func_752(iParam1, (1 << 9)))
	{
		iParam1 |= (1 << 9);
		return func_609(uParam0, iParam1, iParam2);
	}
	else if (func_752(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_610(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_611(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

Vector3 func_612(Vector3 vParam0)
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

float func_613(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_614(var uParam0, var uParam1, var uParam2, var uParam3)
{
	func_757(uParam0, uParam1, uParam2, uParam3);
}

void func_615(var uParam0, var uParam1)
{
	struct<7> /*56*/ sVar0;
	Vector3 vVar12;

	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam1->f_1, "player", &sVar0, false, 0, 2))
	{
		vVar12 = { sVar0.f_6 /*3*/ };
		if (func_572(&vVar12, 1, 10, 0))
		{
			uParam0->f_2 = (vVar12.z + 0.2f);
		}
	}
}

void func_616(int iParam0)
{
	if (!func_758(&sLocal_348, iParam0))
	{
		if (!func_759(&sLocal_348, iParam0, 5))
		{
			if (!func_759(&sLocal_348, iParam0, 4))
			{
				func_669(&sLocal_348, iParam0, 1, 1);
			}
		}
	}
}

bool func_617(Vector3 vParam0, Vector3 vParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;
	bool bVar6;
	bool bVar7;

	vVar0 = { vParam0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) /*3*/ };
	vVar3 = { vParam0 - ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) /*3*/ };
	bVar6 = func_760(Global_35, vVar3, vParam3, 90.0f);
	bVar7 = func_760(Global_35, vVar0, vParam0, 90.0f);
	return (bVar6 && bVar7);
}

bool func_618(int iParam0, int iParam1, int iParam2, bool bParam3)
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

void func_619(Vector3 vParam0)
{
	struct<7> /*56*/ sVar0;
	Vector3 vVar9;
	Vector3 vVar12;
	Vector3 vVar15;
	struct<4> /*32*/ sVar18;

	if (sLocal_399.f_0 == 8)
	{
		if (func_761(sLocal_399.f_1, vParam0, &sVar0, 1))
		{
			vVar9 = { sVar0 /*3*/ };
			vVar12 = { sVar0.f_3 /*3*/ };
			vVar15 = { sVar0.f_6 /*3*/ };
		}
		if (!func_48(vVar9))
		{
			func_42(&sLocal_369, vVar9, vVar12, 2);
			vLocal_234 = { vVar15 - func_612(vVar9 - vVar15) * Vector(10.0f, 10.0f, 10.0f) /*3*/ };
			func_572(&vLocal_234, 50, 10, 0);
		}
	}
	else if (sLocal_399.f_0 == 10)
	{
		sVar18 = { func_16(9, func_762()) /*4*/ };
		if (!func_48(sVar18))
		{
			func_42(&sLocal_369, sVar18, 0.0f, 0.0f, sVar18.f_3, 2);
		}
	}
}

Vector3 func_620(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	Vector3 vVar0;

	if (!bParam4 && PED::IS_PED_INJURED(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam1))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_621(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35) && !PED::IS_PED_INJURED(Global_35))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_35)
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MOVE_UD"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0.0f);
	if (func_457(iParam0, joaat("SCRIPT_TASK_HORSE_ACTION")))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

void func_622(var uParam0, var uParam1, var uParam2, Vector3 vParam3, Vector3 vParam6, float fParam9)
{
	*uParam0 = { vParam3 /*3*/ };
	*uParam1 = { vParam6 /*3*/ };
	*uParam2 = fParam9;
}

float func_623(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1.0f;
	}
	return func_624(Global_35, iParam0, bParam1, bParam2);
}

float func_624(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_625(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_626(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_763(iParam0, &sVar0);
}

int func_627(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_628(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

void func_629(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 || func_764(iParam1))
	{
		func_530(iParam0, iParam1, -1, iParam2, 0, 1056964608, 1065353216, 0);
		if (func_56(iParam2, 1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iParam1, true, 0, false, false);
		}
	}
	else
	{
		func_530(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, iParam2, 0, 1056964608, 1065353216, 0);
		if (func_56(iParam2, 1))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), true, 0, false, false);
		}
	}
}

bool func_630(Vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = func_765(iParam10);
				if (fVar2 < 0.0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = func_766(bParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = func_767(bParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*bParam6 = 1;
		if (*iParam5 != 0.0f)
		{
		}
		if (*iParam5 <= 0.0f)
		{
			*iParam5 = func_413();
		}
		else if ((func_413() - *iParam5) > bParam7)
		{
			*iParam5 = 0.0f;
			return true;
		}
	}
	else if (*bParam4 == 2 && bParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0.0f;
		}
	}
	else
	{
		*bParam6 = 1;
	}
	return false;
}

bool func_631(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, Vector3 vParam5, struct<2> /*16*/ sParam6, Vector3 vParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

bool func_632(var uParam0, bool bParam1, float fParam2)
{
	Vector3 vVar0;

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173))
	{
		if (func_139(Global_35, uParam0->f_173, 1, 0))
		{
			return true;
		}
		if (bParam1)
		{
			vVar0 = { func_768(Global_35, fParam2) /*3*/ };
			if (VOLUME::IS_POINT_IN_VOLUME(uParam0->f_173, vVar0))
			{
				return true;
			}
		}
	}
	return false;
}

int func_633(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (func_769(iVar2, bParam5))
		{
			if (func_484((*iParam0)[iVar2], uParam1, iParam2, &bVar1, fParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return 1;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0.0f;
	}
	return 0;
}

float func_634(int iParam0, int iParam1, bool bParam2)
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
	return func_131(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

bool func_635(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
		{
			if (func_634(PLAYER::PLAYER_PED_ID(), iParam0, 1) < (fParam1 * fParam1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_636(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	bVar1 = false;
	fVar2 = func_232(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0.0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0.0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 & func_231())
	{
		bVar1 = true;
		fVar3 = func_169(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_233(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_233(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432, 1, 90.0f, 0, 0);
		}
		if (func_234(&(uParam0->f_121), iParam4, fParam1))
		{
			func_122(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_172(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::IS_PED_FULLY_ON_MOUNT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_122(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::STATSTRACKER_DEED_STARTED(func_172(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_637(var uParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	func_770(uParam0[0 /*17*/], func_489(7), sParam1, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	func_770(uParam0[1 /*17*/], func_489(10), sParam2, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	if (!bParam4)
	{
		func_770(uParam0[2 /*17*/], func_489(12), sParam3, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			func_638(uParam0[2 /*17*/], 0, 0);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_638(uParam0[0 /*17*/], 0, 0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		func_638(uParam0[1 /*17*/], 0, 0);
	}
}

void func_638(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_771(iParam0, 13))
	{
		func_739(iParam0, 0);
	}
	else
	{
		func_772(iParam0, 0);
	}
	if (func_543(iParam0->f_6))
	{
		if (bParam2)
		{
			func_544(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_639(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 38)
	{
		return true;
	}
	return false;
}

void func_640(int* iParam0, char* sParam1)
{
	if (func_543(iParam0->f_6) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		func_773(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_772(iParam0, 1);
}

void func_641(var uParam0, var uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;

	vVar0 = { func_774() /*3*/ };
	vVar3 = { 1574.123f, -7258.26f, 69.08138f /*3*/ };
	vVar6 = { 1577.012f, -7254.958f, 68.76313f /*3*/ };
	iVar9 = func_775(vVar0, vVar3, vVar6);
	switch (iVar9)
	{
		case 1:
			*uParam0 = { 1574.875f, -7259.426f, 69.259f /*3*/ };
			*uParam1 = { 1573.219f, -7258.094f, 69.12478f /*3*/ };
			break;
		default:
			*uParam0 = { 1578.345f, -7255.663f, 68.91415f /*3*/ };
			*uParam1 = { 1577.078f, -7254.425f, 68.73707f /*3*/ };
			break;
	}
}

void func_642(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_421)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_421[iVar0]))
		{
			func_776(iParam0, iLocal_421[iVar0]);
		}
		iVar0++;
	}
}

int func_643(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(iVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
			{
				strcpy_s(&cVar5, 128, WEAPON::_GET_WEAPON_NAME(iVar0));
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_43891 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					strcpy_s(&cVar5, 128, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))));
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_409(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_409(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_328() == -1 && !func_764(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == joaat("REL_GANG_DUTCHS"))
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(iVar0))
			{
				iVar0 = joaat("WEAPON_UNARMED");
			}
		}
	}
	if (iVar0 == joaat("WEAPON_UNARMED") && iParam1 == joaat("WEAPON_UNARMED"))
	{
		return iVar0;
	}
	else if (iVar0 == joaat("WEAPON_UNARMED"))
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_764(joaat("WEAPON_REPEATER_CARBINE")))
				{
					iVar0 = joaat("WEAPON_REPEATER_CARBINE");
				}
				else
				{
					iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				}
				break;
			default:
				iVar0 = joaat("WEAPON_REVOLVER_CATTLEMAN");
				break;
		}
	}
	else if (iVar0 == joaat("WEAPON_MELEE_LANTERN") && iParam0 == Global_35)
	{
		iVar0 = joaat("WEAPON_MELEE_DAVY_LANTERN");
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_409(iVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0) && iVar0 != joaat("WEAPON_UNARMED")) && !WEAPON::_IS_WEAPON_LANTERN(iVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, iVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 3;
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
		func_777(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_778(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_779(iVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), iVar0, bParam4);
	}
	return iVar0;
}

void func_644(int iParam0, struct<2> /*16*/ sParam1, var uParam3)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
		ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D((sParam1.f_0 - vVar0.x), (sParam1.f_1 - vVar0.y)));
	}
}

var func_645(int iParam0)
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "Fussar_01";
			break;
		case 1:
			sVar0 = "Fussar_02";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!iLocal_416[iParam0])
		{
			bVar1 = false;
			if ((bVar1 || !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iLocal_426[iParam0], -1)) || ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(sLocal_369.f_1, sVar0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (!bVar1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 0);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, true, 0);
					TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, joaat("FIRING_PATTERN_SLOW_SHOT"), true);
				}
				func_628(iLocal_426[iParam0], &iVar2, 0, 0, 1, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_426[iParam0], true, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_426[iParam0], joaat("MOTIONSTATE_AIMING"), false, 1, true);
				iLocal_416[iParam0] = 1;
			}
		}
	}
	return iLocal_416[iParam0];
}

void func_646(var uParam0, var uParam1)
{
	switch (func_781(func_780(), 1574.123f, -7258.26f, 69.08138f, 1577.012f, -7254.958f, 68.76313f))
	{
		case 1:
			*uParam0 = { 1534.829f, -7301.735f, 73.20496f /*3*/ };
			*uParam1 = { 1520.272f, -7279.861f, 72.0063f /*3*/ };
			break;
		case 2:
			*uParam0 = { 1580.688f, -7180.271f, 63.34436f /*3*/ };
			*uParam1 = { 1576.945f, -7179.079f, 62.8494f /*3*/ };
			break;
	}
}

void func_647(var uParam0)
{
	func_211(&(uParam0->f_1));
	func_211(&(uParam0->f_12));
}

bool func_648(var uParam0)
{
	if (uParam0->f_26 > -1)
	{
		return uParam0->f_26 == uParam0->f_27;
	}
	return false;
}

Vector3 func_649(bool bParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

bool func_650(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_01_PED01", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_01_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_02_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_02_PED01", 1))
			{
				return true;
			}
			break;
		case 1:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_01_PED02", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_01_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_L_LOOK_02_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "RUN_R_LOOK_02_PED02", 1))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_651(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (*uParam1)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1197[uParam1->f_9]))
		{
			iLocal_1197[uParam1->f_9] = VOLUME::CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
			PED::SET_PED_DEFENSIVE_AREA_VOLUME(iParam0, iLocal_1197[uParam1->f_9], false, true, false);
			TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
		}
		return true;
	}
	if (func_782(iParam0, uParam1))
	{
		if (!func_48(uParam1->f_28))
		{
			iVar1 = 0;
			if (!func_648(uParam1))
			{
				iVar1 = 1;
			}
			if (!bParam3)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
			}
			if (func_783(uParam1->f_6, uParam1->f_26, 1332820953))
			{
				PED::SET_PED_STEALTH_MOVEMENT(iParam0, false, 0, 1);
			}
			else if (func_783(uParam1->f_6, uParam1->f_26, -1023305933))
			{
				PED::SET_PED_STEALTH_MOVEMENT(iParam0, true, 0, 0);
			}
			if (func_783(uParam1->f_6, uParam1->f_26, 1100690837))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, uParam1->f_28, Global_35, uParam1->f_4, 0, 0.5f, 4.0f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			}
			else
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam1->f_28, uParam1->f_4, -1, 40000.0f, 0.5f, iVar1);
			}
			if (!bParam3)
			{
				func_628(iParam0, &iVar0, 0, 0, 1, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_652(int iParam0, var uParam1)
{
	if (!func_48(uParam1->f_28))
	{
		if (func_49(iParam0, uParam1->f_28, 0.5f, 1, 0))
		{
			return true;
		}
		if (func_784(uParam1) == 4)
		{
			if (func_49(Global_35, func_7(&sLocal_14), 7.0f, 1, 1) || func_517(Global_35, &iLocal_431, 10.0f, 1))
			{
				return true;
			}
		}
		else if (!func_648(uParam1))
		{
			if (!func_48(uParam1->f_32))
			{
				if (!func_783(uParam1->f_6, uParam1->f_26, joaat("IGNOREVALIDATION")))
				{
					if (!func_785(iParam0, &(uParam1->f_28), &(uParam1->f_32)))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_653(int iParam0, var uParam1)
{
	int iVar0;

	switch (func_784(uParam1))
	{
		case 2:
			if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, true, true))
			{
				func_786(uParam1);
				func_63(uParam1->f_8);
				uParam1->f_8 = VOLUME::CREATE_VOLUME_SPHERE(uParam1->f_28, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f);
				func_787(iParam0, uParam1->f_8, 0, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam1->f_28, 1.5f, -1, 0.25f, 0, 40000.0f);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_628(iParam0, &iVar0, 0, 0, 1, 1);
				if (func_648(uParam1))
				{
					*uParam1 = 1;
				}
				uParam1->f_5 = 3;
				return true;
			}
			break;
		case 1:
			break;
		case 4:
			PED::_SHOOT_TRIGGER_AT_COORDS(iParam0, Global_36, 1, -1.0f, 0, -1.0f);
			uParam1->f_5 = 4;
			return true;
		case 5:
			if (!VOLUME::DOES_VOLUME_EXIST(iLocal_1197[uParam1->f_9]))
			{
				iLocal_1197[uParam1->f_9] = VOLUME::CREATE_VOLUME_CYLINDER(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
				PED::SET_PED_DEFENSIVE_AREA_VOLUME(iParam0, iLocal_1197[uParam1->f_9], false, true, false);
				TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
				uParam1->f_5 = 5;
				return true;
			}
			break;
		default:
			uParam1->f_10 = func_788(iParam0, uParam1);
			switch (uParam1->f_10)
			{
				case 0:
					break;
				case 1:
					uParam1->f_22 = 0;
					func_789(uParam1);
					uParam1->f_5 = 2;
					return true;
				case 2:
					func_790(iParam0, uParam1);
					func_269(&(uParam1->f_14));
					break;
			}
			break;
	}
	return false;
}

bool func_654(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == iLocal_431[0])
	{
		iVar1 = 0;
	}
	else
	{
		iVar1 = 1;
	}
	if (func_791(iParam0, uParam1) || func_792(iVar1))
	{
		func_269(&(uParam1->f_17));
		return true;
	}
	else
	{
		switch (uParam1->f_22)
		{
			case 0:
				switch (uParam1->f_10)
				{
					case 1:
						if (func_793(iParam0, uParam1))
						{
							func_433(&(uParam1->f_17));
							uParam1->f_22 = 1;
						}
						else
						{
							return true;
						}
						break;
				}
				break;
			case 1:
				if (func_794(iParam0, uParam1))
				{
					if (func_795(iParam0, uParam1) && func_796(iParam0, Global_35, 0))
					{
						if (uParam1->f_21 < 4)
						{
							iVar2 = func_797(uParam1);
							if (iVar2 >= 2 || !func_798(iLocal_431[iVar2], &(sLocal_636[iVar2 /*36*/])))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								switch (uParam1->f_21)
								{
									case 0:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
									case 1:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
									case 2:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
									case 3:
										if (uParam1->f_9 == 0)
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED01", 1082130432, -1065353216, 0, -1, 0);
										}
										else
										{
											func_799(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED02", 1082130432, -1065353216, 0, -1, 0);
										}
										break;
								}
								if (uParam1->f_9 == 0)
								{
									func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 1082130432, -1065353216, 0, 1);
								}
								else
								{
									func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 1082130432, -1065353216, 0, 1);
								}
								func_628(iParam0, &iVar0, 0, 0, 1, 1);
								uParam1->f_21++;
								func_801(uParam1);
								uParam1->f_22 = 3;
							}
						}
					}
				}
				break;
			case 3:
				if (TASK::GET_SEQUENCE_PROGRESS(iParam0) == 1)
				{
					if (!func_283(iParam0, 0))
					{
						func_802(uParam1->f_9);
						func_803(uParam1);
						func_269(&(uParam1->f_17));
						return true;
					}
				}
				break;
		}
	}
	return false;
}

void func_655(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_804(1);
			break;
		case 1:
			func_804(2);
			break;
	}
}

bool func_656(int iParam0)
{
	if (!func_316(*iParam0, 0))
	{
		return false;
	}
	return PED::IS_PED_SHOOTING(*iParam0);
}

bool func_657(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return false;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return false;
	}
	return MAP::BLIP_ADD_MODIFIER(iVar0, iParam1);
}

bool func_658(int iParam0)
{
	if (((!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0)) || PED::IS_PED_INCAPACITATED(iParam0)) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return true;
	}
	return false;
}

void func_659(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, bool bParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		TASK::TASK_FLEE_PED(iParam0, Global_35, 3, 0, -1.0f, -1, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 0, true);
		PED::REGISTER_TARGET(iParam0, Global_35, true);
		if (!bLocal_1240)
		{
			if (iLocal_390 == 0)
			{
				if (bParam5)
				{
					if (!func_40(42))
					{
						bLocal_1240 = func_284(iParam0, Global_35, func_302(sParam1, 0), 0, 75.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1, 0, 0);
						func_18(42);
					}
				}
				else
				{
					bLocal_1240 = func_284(iParam0, Global_35, func_302(sParam2, 0), 0, 75.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1, 0, 0);
				}
			}
			else if (bParam5)
			{
				if (!func_40(42))
				{
					bLocal_1240 = func_284(iParam0, Global_35, func_302(sParam3, 0), 0, 75.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1, 0, 0);
					func_18(42);
				}
			}
			else
			{
				bLocal_1240 = func_284(iParam0, Global_35, func_302(sParam4, 0), 0, 75.0f, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1, 0, 0);
			}
		}
	}
}

int func_660(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		default:
			break;
	}
	return 4;
}

void func_661(int iParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iParam0]))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_426[iParam0], true, true);
		switch (iParam0)
		{
			case 0:
				func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				break;
			case 1:
				func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
				break;
			case 2:
				if (iParam1 != 0)
				{
					func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
				}
				else
				{
					func_530(iLocal_426[iParam0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608, 1065353216, 0);
					if (func_764(joaat("WEAPON_MELEE_HATCHET_MELEEONLY")))
					{
						func_530(iLocal_426[iParam0], joaat("WEAPON_MELEE_HATCHET_MELEEONLY"), -1, 1, 0, 1056964608, 1065353216, 0);
					}
					else
					{
						func_530(iLocal_426[iParam0], joaat("WEAPON_MELEE_KNIFE"), -1, 1, 0, 1056964608, 1065353216, 0);
					}
				}
				break;
			case 3:
				func_478(iLocal_426[iParam0], iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_479(&sLocal_369, sParam2, iLocal_426[iParam0], 0);
		}
		if (bParam3)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_426[iParam0], joaat("WEAPON_UNARMED"), false, 0, false, false);
		}
		func_494(iLocal_426[iParam0]);
	}
}

void func_662(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

void func_663(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_805((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_664(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam2]))
	{
		if (!func_40(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_431[iParam2], Global_35, true, true))
			{
				if (func_284(iLocal_431[iParam2], Global_35, sParam4, 0, -1082130432, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1, 0, 0))
				{
					func_806(iLocal_431[iParam2]);
				}
				func_18(iParam0);
			}
		}
	}
	else if (!func_40(iParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam3]))
			{
				if (func_284(iLocal_431[iParam3], Global_35, sParam5, 0, -1082130432, iParam6, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1, 0, 0))
				{
					func_806(iLocal_431[iParam3]);
				}
				func_18(iParam1);
			}
		}
	}
}

bool func_665(int iParam0, float fParam1, char* sParam2, int iParam3, float fParam4, bool bParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		*iParam3++;
		return true;
	}
	if (!func_126(&uLocal_261) || func_127(&uLocal_261, (fParam1 + 7.0f)))
	{
		if (func_284(iParam0, Global_35, sParam2, 0, fParam4, 0, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CRITICAL"), 1, 0, 0))
		{
			if (bParam5)
			{
				func_806(iParam0);
			}
			*iParam3++;
			func_269(&uLocal_261);
			return true;
		}
	}
	return false;
}

int func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar6;

	if (sLocal_399.f_0 == 8)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iLocal_242, true, 0))
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam0, -1))
		{
			return 1;
		}
	}
	if (func_49(iParam0, vLocal_225, 35.0f, 1, 1))
	{
		if (func_807(&iVar0, &iVar1))
		{
			vVar2 = { func_16(10, iVar0) /*4*/ };
			vVar6 = { func_16(10, iVar1) /*4*/ };
			if (!func_631(vVar2, vVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false)))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_667(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]))
	{
		func_503(&(uLocal_439[iParam0]), iLocal_431[iParam0], 1);
	}
}

void func_668(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[iParam0]) && sLocal_399.f_0 != 8)
	{
		func_503(&(uLocal_434[iParam0]), iLocal_426[iParam0], 1);
	}
}

bool func_669(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;

	Stack.Invoke(uParam0->f_6, iParam1);
	sVar0 = StackVal;
	if (bParam3 && !func_307(uParam0, iParam1))
	{
		return func_808(uParam0, iParam1, bParam2);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_1, sVar0, true);
		uParam0->f_2 = iParam1;
		if (bParam2)
		{
			func_809(uParam0, 5, 1);
		}
		Stack.Invoke(uParam0->f_5, iParam1);
	}
	return true;
}

void func_670(int iParam0, var uParam1, int iParam2, float fParam3, int* iParam4)
{
	Vector3 vVar0;
	int iVar4;

	if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		func_503(iParam4, *uParam1, 0);
		switch (iParam0)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, 2000, 0, 0);
				if (func_810(iParam0, &vVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, fParam3, 1, 0.5f, 4.0f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
				}
				else
				{
					func_811(iParam2, fParam3);
				}
				PED::SET_PED_COMBAT_MOVEMENT(*uParam1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_628(*uParam1, &iVar4, 0, 0, 1, 1);
				break;
			case 1:
				TASK::OPEN_SEQUENCE_TASK(&iVar4);
				if (func_810(iParam0, &vVar0))
				{
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar0, Global_35, fParam3, 1, 0.5f, 4.0f, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), -1, 0);
				}
				else
				{
					func_811(*uParam1, fParam3);
				}
				PED::SET_PED_COMBAT_MOVEMENT(*uParam1, 0);
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				func_628(*uParam1, &iVar4, 0, 0, 1, 1);
				break;
		}
		func_314(uParam1);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 301, true);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 317, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 297, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 360, false);
		PED::SET_PED_CONFIG_FLAG(*uParam1, 315, true);
	}
}

void func_671(int iParam0, int iParam1, bool bParam2)
{
	if (func_162(iParam0, 0, 1) && func_162(iParam1, 0, 1))
	{
		func_812(iParam0);
		TASK::TASK_COMBAT_PED(func_738(bParam2, 0, iParam0), iParam1, 0, 0);
	}
}

void func_672(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, true);
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, false);
	}
}

void func_673()
{
	int iVar0;

	iLocal_1193 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_426)
	{
		if (iLocal_1200[iVar0] == 4)
		{
			iLocal_1193++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_431)
	{
		if (iLocal_1205[iVar0] == 4)
		{
			iLocal_1193++;
		}
		iVar0++;
	}
}

void func_674(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(*uParam0) || PED::IS_PED_INCAPACITATED(*uParam0))
	{
		if (*uParam2 == 4)
		{
			*uParam2 = 0;
			iLocal_1193--;
		}
		return;
	}
	if (*uParam2 > 0)
	{
		if (!func_457(*uParam0, joaat("SCRIPT_TASK_ANY")))
		{
			if (*uParam2 == 4)
			{
				func_813(*uParam0);
			}
			else
			{
				*uParam2 = 0;
			}
		}
	}
	if (!*uParam4)
	{
		if (*uParam2 > 0)
		{
			if (func_814(*uParam0))
			{
				func_815(&iParam1);
				func_503(&iParam1, *uParam0, 0);
				func_657(*uParam0, joaat("BLIP_MODIFIER_ENEMY"), 1);
				func_816(*uParam0, joaat("BLIP_MODIFIER_ENEMY_GUNSHOTS_ONLY"), 1);
				*uParam4 = 1;
			}
		}
	}
	switch (*uParam2)
	{
		case 0:
			if (func_265(*uParam0, 0, 1, 0) == joaat("WEAPON_UNARMED"))
			{
				func_530(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 1, 0, 1056964608, 1065353216, 0);
				WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
				TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
			}
			if (iParam3 == 0)
			{
				func_672(*uParam0);
			}
			func_314(uParam0);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 317, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 360, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
			if (func_817(Global_35))
			{
				if (func_818())
				{
					func_813(*uParam0);
					*uParam2 = 4;
				}
				else
				{
					if (func_526(Global_35, *uParam0, 25.0f, 1))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(*uParam0, Global_35, -1, false, 1);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam0, Global_35, Global_35, 2.0f, 0, 25.0f, 4.0f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					}
					*uParam2 = 1;
				}
			}
			else
			{
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
		case 1:
			if (func_818())
			{
				func_813(*uParam0);
				*uParam2 = 4;
			}
			else if (!func_817(Global_35) || func_817(*uParam0))
			{
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
		case 3:
			if (func_817(Global_35))
			{
				if (func_818())
				{
					func_813(*uParam0);
					*uParam2 = 4;
				}
				else
				{
					if (func_526(Global_35, *uParam0, 25.0f, 1))
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(*uParam0, Global_35, -1, false, 1);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(*uParam0, Global_35, Global_35, 2.0f, 0, 25.0f, 4.0f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					}
					*uParam2 = 1;
				}
			}
			break;
		case 4:
			if (!func_817(Global_35))
			{
				iLocal_1193--;
				TASK::TASK_COMBAT_PED(*uParam0, Global_35, 0, 0);
				*uParam2 = 3;
			}
			break;
	}
}

int func_675(int iParam0)
{
	switch (*iParam0)
	{
		case 10:
			switch (iParam0->f_1)
			{
				case 0:
					return 1;
				case 1:
					return 6;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_676(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_677(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_678(int iParam0, bool bParam1, int iParam2)
{
	func_819(iParam2);
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
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887.f_12 == -1)
	{
		iParam0->f_13 = Global_1935630.f_44;
	}
	else
	{
		iParam0->f_13 = func_820(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & (1 << 25) != 0)
				{
					if (iParam0->f_13 == joaat("WEAPON_THROWN_DYNAMITE"))
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
						{
							func_79(iParam0, (1 << 25));
						}
					}
					else if (!*iParam0 & (1 << 13) != 0)
					{
						if (func_241(1))
						{
							func_79(iParam0, (1 << 25));
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && (!func_241(1) || *iParam0 & (1 << 13) != 0))
				{
					func_80(iParam0, (1 << 25));
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
	if (!iParam0->f_1 & (1 << 10) != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
		{
			if (func_821(iParam0))
			{
				iParam0->f_15 = func_553();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_553() - iParam0->f_15) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_822(iParam0);
}

bool func_679(int iParam0, int iParam1)
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
			if (!func_823(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_824(iParam0, iVar2) <= func_825(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_680(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != (1 << 14))
	{
		iParam1->f_10 = iParam0;
	}
	if (func_826(iParam2, 1, 1, 1, 0))
	{
		func_79(iParam1, (1 << 11));
	}
	iParam1->f_16 = iParam2;
	func_827(iParam1, 1);
	func_325();
}

bool func_681(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	fVar0 = 85.0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_828(iParam0, !*iParam1 & (1 << 28) != 0, !*iParam1 & (1 << 29) != 0, !*iParam1 & (1 << 30) != 0, 0, 0))
		{
			if (iParam1->f_12 < 5.0f)
			{
				fVar0 = 95.0f;
			}
			else if (iParam1->f_12 < 15.0f)
			{
				fVar0 = 90.0f;
			}
			fVar1 = func_829(iParam1);
			if (func_830(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = func_831(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_827(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_827(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_682(int iParam0, int iParam1, int iParam2)
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
	if (func_832(iParam1, !*iParam2 & (1 << 28) != 0, !*iParam2 & (1 << 29) != 0, !*iParam2 & (1 << 30) != 0, 0))
	{
		if (iParam2->f_12 < 5.0f)
		{
			fVar0 = 95.0f;
		}
		else if (iParam2->f_12 < 15.0f)
		{
			fVar0 = 90.0f;
		}
		fVar1 = func_829(iParam2);
		if (func_830(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = MISC::GET_GAME_TIMER();
			}
			if (iParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - iParam2->f_2) > func_831(iParam2)
				{
					func_827(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_683(int iParam0, int iParam1)
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
	if (func_823(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - iParam1->f_3) > func_831(iParam1)
		{
			fVar3 = func_829(iParam1);
			if (iParam1->f_12 < fVar3)
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

bool func_684(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_553();
	iVar1 = (iVar0 - iParam0->f_8);
	if (float)iVar1 > (fParam1 * 1000.0f)
	{
		return true;
	}
	return false;
}

bool func_685(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_833(iParam2);
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
			if (func_693(iParam2, iParam1))
			{
				func_827(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_686(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2->f_12 < (float)func_834(iParam2))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &uVar0))
		{
			if (func_693(iParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1.0f)
				{
					func_827(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_687(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Vector3 vVar0;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) /*3*/ };
	iVar3 = func_835(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_827(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), vVar0, iParam2->f_27))
				{
					func_827(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar4, false, false);
					if (func_836(iParam1, vVar0, vVar4))
					{
						func_827(iParam2, 1);
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
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), vVar0, iParam2->f_22))
				{
					func_827(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), vVar0, iParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, joaat("WEAPON_THROWN_DYNAMITE"), iParam2->f_26, &vVar7, false, false);
					if (func_836(iParam1, vVar0, vVar7))
					{
						func_827(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_688(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	Vector3 vVar2[2];
	Vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	bVar12 = *iParam1 & (1 << 12) != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630.f_39)
	{
		if (!func_823(iParam0, iParam1, Global_1935630.f_34[iVar0]) || iParam0 == Global_1935630.f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_837(Global_1935630.f_34[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false), vVar9);
			if (func_838(Global_1935630.f_34[iVar0]))
			{
				if (fVar1 < 35.0f)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
						vVar2[1 /*3*/] = { vVar9 /*3*/ };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_839(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_840(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_841(iParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[iVar0], false, false) /*3*/ };
				vVar2[1 /*3*/] = { vVar9 /*3*/ };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_689(int iParam0, int iParam1)
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

bool func_690(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_553();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_691(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_842(iVar0, &iVar2))
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
	if (func_843(iVar0, iParam0))
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

int func_692(int iParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_693(int iParam0, int iParam1)
{
	if (func_844(iParam0))
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

bool func_694(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_624(iParam0, iParam1, 1, 1) < 4.0f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_695()
{
}

bool func_696(int iParam0, int iParam1)
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
		if (func_845(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_553();
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
						if (func_554(iVar7, vVar1, 1) < 3.0f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								iParam0->f_9 = func_553();
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

bool func_697()
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
	if ((func_553() - Global_1935630.f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_698(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_14))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_825(iParam0);
	if (iParam0->f_12 > func_846(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_847(iParam1);
	iVar1 = func_848(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, Global_35, true, false) == 1)) || ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, iParam0->f_14, -1.0f, -1.0f, -1.0f, -1.0f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0->f_14, 17)) && PED::CAN_PED_SEE_ENTITY(iParam1, iParam0->f_14, true, false) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_699(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (iParam2->f_12 > 4.0f)
	{
		return 0;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & (1 << 19) != false;
	bVar2 = *iParam2 & 128 != false;
	return func_849(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_700(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (*iParam1 & (1 << 26) != 0)
	{
		return true;
	}
	if (Global_1935630.f_24)
	{
		return true;
	}
	if (*iParam1 & (1 << 25) != 0)
	{
		if (func_850(iParam0, iParam1, 1))
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
					if (!func_851(iParam1, iParam0))
					{
						if (func_554(iVar4, Global_36, 1) < 7.0f)
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

bool func_701(int iParam0, int iParam1)
{
	if (!func_852(0))
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

bool func_702(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_553();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_703(int iParam0, int iParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_704(int iParam0, int iParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_553();
	}
	else if (func_553() - iParam1->f_4) > func_853(iParam1)
	{
		return func_854(iParam0, iParam1, 0, -1082130432);
	}
	return 0;
}

bool func_705(int iParam0, int iParam1)
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

bool func_706(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = func_855(iParam1);
	if (iParam1->f_12 > (fVar0 + 5.0f))
	{
		return false;
	}
	if (!PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (iParam1->f_12 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1.0f;
		fVar2 = func_856(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5.0f));
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_35, -1.0f, fVar2, -1.0f, fVar1) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_35, true, false) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44) || WEAPON::_IS_WEAPON_TORCH(Global_1935630.f_44))
			{
				if (iParam1->f_12 <= 5.0f)
				{
					if (func_857())
					{
						if (PED::IS_PED_FACING_PED(Global_35, iParam0, 110.0f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_707(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	if (func_242(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_35) || PED::IS_PED_IN_COVER(Global_35, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_35)) || *iParam1 & (1 << 21) != 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_35, iParam0, bVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4.0f)
	{
		if (*iParam1 & (1 << 9) != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_35, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_35))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1.0f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 8.0f) && *iParam1 & (1 << 21) != 0))
			{
				return false;
			}
		}
		if (PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_35, "stealth") == 1.0f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8.0f)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_708(float fParam0)
{
	if (func_858(1))
	{
		return true;
	}
	if (func_126(&uLocal_0) && !func_285(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

bool func_709()
{
	if (!func_126(&uLocal_1253))
	{
		return true;
	}
	return func_127(&uLocal_1253, 3.0f);
}

bool func_710()
{
	int iVar0;

	if (func_474(&iLocal_426, &(sLocal_14.f_5), &iVar0, &uLocal_1256, 0, (iLocal_426 - 1), 1))
	{
		if (func_826(iVar0, 1, 1, 1, 0))
		{
			return true;
		}
	}
	if (func_474(&iLocal_431, &(sLocal_14.f_5), &iVar0, &uLocal_1257, 0, (iLocal_431 - 1), 1))
	{
		if (func_826(iVar0, 1, 1, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_711(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_433(&(iParam0->f_18));
}

int func_712(int iParam0)
{
	return iParam0;
}

void func_713(int iParam0)
{
	if (!func_859(iParam0))
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

void func_714(int iParam0)
{
	int iVar0;

	if (func_328() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_316(func_860(iVar0), 0))
		{
			if (PED::IS_PED_GROUP_MEMBER(func_860(iVar0), func_366(), true))
			{
				func_861(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_715(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_716(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 == 0)
	{
		iParam3 = Global_1415419.f_19[iParam0 /*12*/].f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_862() > Global_32074.f_2697.f_6[iVar0 /*6*/].f_5)
					{
						Global_32074.f_2697.f_6[iVar0 /*6*/].f_5 = func_862();
					}
					func_201(&(Global_32074.f_2697.f_6[iVar0 /*6*/].f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_80(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

struct<2> /*16*/ func_717(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_718(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_719(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 != 0)
	{
		iVar0 = func_575(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_576(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2 /*2*/].f_1++;
	}
}

void func_720(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1 && !func_120(iParam0, (1 << 13)))
	{
		iVar0 = func_576(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0 /*2*/].f_1++;
	}
}

void func_721(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = (func_330(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_17504.f_12[iVar1]), iVar2);
}

void func_722(int iParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_75(iParam0, (1 << 9)))
	{
		vParam1 = { Global_36 /*3*/ };
	}
	if (func_48(vParam1))
	{
		return;
	}
	if (!func_190(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { Global_17504.f_2084[iVar0 /*5*/] /*3*/ };
		if (func_48(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0 /*5*/].f_3 == iParam0)
		{
			if (func_344(vVar2, vParam1, 1.0f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_17504.f_2084[iVar1 /*5*/] = { vParam1 /*3*/ };
		Global_17504.f_2084[iVar1 /*5*/].f_3 = iParam0;
		Global_17504.f_2084[iVar1 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				Global_17504.f_2084[iVar0 /*5*/] = { vParam1 /*3*/ };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = iParam0;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = Global_1310750[iParam0 /*111*/].f_62;
			}
			else
			{
				Global_17504.f_2084[iVar0 /*5*/] = { Global_17504.f_2084[iVar0 + 1 /*5*/] /*5*/ };
			}
			iVar0++;
		}
	}
}

void func_723(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_737(iVar0, iParam0);
		iVar0++;
	}
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_725(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_726()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_727(int iParam0)
{
	if (!func_432(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

bool func_728(int iParam0)
{
	return Global_1310750.f_16074 & iParam0 != 0;
}

bool func_729()
{
	return Global_1894899 & 2 != 0;
}

bool func_730(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_731(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	float fVar6;

	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if (Global_1888801[iVar2 /*35*/].f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899.f_2))
			{
				if (!bParam1 || func_863(iVar2))
				{
					vVar3 = { VOLUME::GET_VOLUME_COORDS(Global_1888801[iVar2 /*35*/].f_3) /*3*/ };
					fVar6 = BUILTIN::VDIST(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_732(int iParam0)
{
	if (func_190(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_733(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;

	fVar0 = 0.0f;
	fVar1 = 0.0f;
	fVar2 = 0.0f;
	fVar3 = 0.0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30.0f;
			break;
		case 1:
			fVar2 = 1.0f;
			break;
		case 2:
			fVar2 = 2.0f;
			break;
		case 3:
			fVar2 = 3.0f;
			break;
		case 4:
			fVar2 = 4.0f;
			break;
		case 5:
			fVar2 = 6.0f;
			break;
		case 6:
			fVar2 = 8.0f;
			break;
		case 7:
			fVar2 = 12.0f;
			break;
		case 8:
			fVar3 = 1.0f;
			break;
		case 9:
			fVar3 = 2.0f;
			break;
		case 10:
			fVar3 = 3.0f;
			break;
		case 11:
			fVar3 = 4.0f;
			break;
		case 12:
			fVar3 = 5.0f;
			break;
		case 13:
			fVar3 = 6.0f;
			break;
		case 14:
			fVar3 = 7.0f;
			break;
		case 15:
			fVar3 = 8.0f;
			break;
		case 16:
			fVar3 = 10.0f;
			break;
		case 17:
			fVar3 = 12.0f;
			break;
		case 18:
			fVar3 = 15.0f;
			break;
		case 19:
			fVar3 = 18.0f;
			break;
		case 20:
			fVar3 = 20.0f;
			break;
		case 21:
			fVar3 = 25.0f;
			break;
		case 22:
			fVar2 = -1.0f;
			break;
		case 23:
			fVar3 = -5.0f;
			break;
		case 24:
			fVar3 = -7.0f;
			break;
		case 25:
			fVar3 = -8.0f;
			break;
	}
	iVar4 = BUILTIN::ROUND((((fVar0 + (60.0f * fVar1)) + (3600.0f * fVar2)) + (86400.0f * fVar3)));
	return iVar4;
}

bool func_734(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return Global_1393237.f_11[iParam0 /*30*/].f_10 & iParam1 != 0;
}

void func_735(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

bool func_736(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_737(int iParam0, int iParam1)
{
	if (!func_190(iParam0))
	{
		return;
	}
	Global_1310750[iParam0 /*111*/].f_1 -= Global_1310750[iParam0 /*111*/].f_1 & iParam1;
}

int func_738(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_739(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_740(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;

	if (func_543(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		func_544(&(iParam1->f_6), 0, 1);
	}
	if (!func_543(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_606(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_864(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (func_543(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_748(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_865(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						func_866(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_867(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					func_865(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					func_747(iParam1->f_6, 0, 1);
				}
				else
				{
					func_747(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_741(int* iParam0, int iParam1)
{
	if (!func_771(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_739(iParam0, 14);
		}
	}
}

bool func_742(int iParam0)
{
	return Global_22 & iParam0 != 0;
}

void func_743(int iParam0)
{
	Global_22 |= iParam0;
}

int func_744(int iParam0, int iParam1)
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

bool func_745(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_746(int iParam0, bool bParam1)
{
	if (bParam1 && !func_543(iParam0))
	{
		return false;
	}
	return !func_868(iParam0, 4);
}

void func_747(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (bParam1)
	{
		func_869(iParam0, 4);
		func_870(iVar0, 1);
		func_871(iVar0, 1);
	}
	else
	{
		func_872(iParam0, 4);
		func_871(iVar0, 0);
	}
}

void func_748(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (bParam3 && !func_543(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	func_865(iParam0, 18, 0, 1);
	func_865(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam4, iParam2);
}

bool func_749(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_543(iParam0))
	{
		return false;
	}
	iVar0 = func_712(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_750(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_543(iParam0))
	{
		return false;
	}
	iVar0 = func_712(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_751(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_752(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_753(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_873(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_754(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_755(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_873(0);
	*uParam1 = { func_875(iParam0, func_874(0), iParam3, 0) /*4*/ };
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

int func_756(int iParam0)
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

void func_757(var uParam0, var uParam1, var uParam2, var uParam3)
{
	Vector3 vVar0;
	float fVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	Vector3 vVar17;

	vVar0 = { MISC::GET_CLOSEST_POINT_ON_LINE(*uParam1, *uParam0, *uParam2, true) /*3*/ };
	fVar3 = BUILTIN::VDIST(Global_36, *uParam1);
	vVar4 = { Global_36 + ENTITY::GET_ENTITY_FORWARD_VECTOR(Global_35) * Vector(fVar3, fVar3, fVar3) /*3*/ };
	vVar7 = { func_461(vVar4, vVar0, 1065353216) /*3*/ };
	vVar10 = { MISC::GET_CLOSEST_POINT_ON_LINE(vVar0 - vVar7, *uParam0, *uParam2, true) /*3*/ };
	fVar13 = MISC::ABSF(BUILTIN::VDIST(*uParam0, vVar10));
	fVar14 = MISC::ABSF(BUILTIN::VDIST(*uParam0, vVar0));
	vVar17 = { func_461(Global_36, vVar10, 1065353216) /*3*/ };
	if (fVar13 > fVar14)
	{
		fVar15 = MISC::ABSF(BUILTIN::VDIST(*uParam1, *uParam2));
		fVar16 = MISC::ABSF(BUILTIN::VDIST(*uParam1, MISC::GET_CLOSEST_POINT_ON_LINE(vVar10 - vVar17, *uParam1, *uParam2, true)));
		func_876(uParam1, uParam2, uParam3, (fVar16 / fVar15));
	}
	else
	{
		fVar15 = MISC::ABSF(BUILTIN::VDIST(*uParam0, *uParam1));
		fVar16 = MISC::ABSF(BUILTIN::VDIST(*uParam0, MISC::GET_CLOSEST_POINT_ON_LINE(vVar10 - vVar17, *uParam0, *uParam1, true)));
		func_876(uParam0, uParam1, uParam3, (fVar16 / fVar15));
	}
}

bool func_758(var uParam0, int iParam1)
{
	return uParam0->f_2 == iParam1;
}

bool func_759(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 5 || iParam2 == -1)
	{
		return false;
	}
	return (func_143(uParam0, iParam2, 1) && iParam1 == uParam0->f_15[iParam2]);
}

bool func_760(int iParam0, Vector3 vParam1, Vector3 vParam4, float fParam7)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	bool bVar9;
	bool bVar10;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 + func_877(vVar0, (fParam7 * 0.5f)) /*3*/ };
	vVar6 = { vParam1 + func_877(vVar0, (fParam7 * -0.5f)) /*3*/ };
	bVar9 = func_631(vVar3, vParam1, vParam4);
	bVar10 = func_631(vParam1, vVar6, vParam4);
	return (bVar9 && bVar10);
}

int func_761(int iParam0, Vector3 vParam1, var uParam4, int iParam5)
{
	struct<9> /*72*/ sVar0[4];
	int iVar37;

	switch (iParam0)
	{
		case 0:
			func_878(&(sVar0[0 /*9*/]), 1574.965f, -7256.959f, 66.44505f, 0.0f, 0.0f, -42.821f, 1569.381f, -7263.209f, 69.6908f);
			func_878(&(sVar0[1 /*9*/]), 1575.715f, -7256.348f, 65.94505f, 2.65f, 0.0f, 137.179f, 1581.422f, -7250.153f, 68.54831f);
			break;
		default:
			return func_879(iParam0, uParam4, &(uParam4->f_3), &(uParam4->f_6));
	}
	iVar37 = func_279(iParam5 > -1, iParam5, func_880(&sVar0, vParam1));
	if (iVar37 > -1)
	{
		*uParam4 = { sVar0[iVar37 /*9*/] /*3*/ };
		uParam4->f_3 = { sVar0[iVar37 /*9*/].f_3 /*3*/ };
		uParam4->f_6 = { sVar0[iVar37 /*9*/].f_6 /*3*/ };
		return 1;
	}
	return func_879(iParam0, uParam4, &(uParam4->f_3), &(uParam4->f_6));
}

int func_762()
{
	switch (sLocal_399.f_0)
	{
		case 10:
			switch (sLocal_399.f_1)
			{
				case 0:
					return 0;
				case 1:
					return 3;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_763(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_764(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
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

float func_765(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.0f;
		case 1:
			return 30.0f;
		case 2:
			return 80.0f;
		default:
			break;
	}
	return -1.0f;
}

int func_766(bool bParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	vVar0 = { func_881(iParam1) /*3*/ };
	vVar3 = { func_881(iParam2) /*3*/ };
	return func_882(bParam0, vVar0, vVar3, iParam2);
}

int func_767(bool bParam0, int iParam1, Vector3 vParam2)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	vVar0 = { func_881(iParam1) /*3*/ };
	return func_882(bParam0, vVar0, vParam2, 0);
}

Vector3 func_768(int iParam0, float fParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return vVar0;
	}
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	func_612(vVar6);
	vVar6 = { FloatToVector((ENTITY::GET_ENTITY_SPEED(iParam0) * fParam1)) * vVar6 /*3*/ };
	vVar3 = { vVar0 + vVar6 /*3*/ };
	return vVar3;
}

bool func_769(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return true;
	}
	if ((iParam0 % 2) == 0)
	{
		return true;
	}
	return false;
}

void func_770(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_543(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				func_867(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_773(iParam0->f_6, iParam0->f_5, 0);
			}
			func_747(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		func_640(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

bool func_771(int* iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*iParam0, iParam1);
}

void func_772(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_773(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

Vector3 func_774()
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[2]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[2], true, false) /*3*/ };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[3]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[3], true, false) /*3*/ };
	}
	if (iVar0 > 0)
	{
		return vVar1 * FloatToVector((1.0f / BUILTIN::TO_FLOAT(iVar0)));
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_775(Vector3 vParam0, Vector3 vParam3, Vector3 vParam6)
{
	float fVar0;
	float fVar1;

	fVar0 = func_613(vParam0, vParam3);
	fVar1 = func_613(vParam0, vParam6);
	if (fVar0 > fVar1)
	{
		return 1;
	}
	return 2;
}

int func_776(int iParam0, int iParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PATHFIND::_DOES_NAVMESH_BLOCKING_VOLUME_EXIST(iParam1))
	{
		PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(iParam1, 15);
	}
	if (PED::_ADD_PED_STAY_OUT_VOLUME(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_777(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		sVar0 = { func_883(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_884((398 + iVar28), 1);
			if (func_885(iParam0, &sVar0, iVar5, 0))
			{
				if (func_886(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_875(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_887(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_888(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_889(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_890(iParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return 1;
			}
		}
	}
}

void func_778(int iParam0, int iParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (((((((*iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_MEXICAN") || *iParam1 == joaat("WEAPON_REVOLVER_CATTLEMAN_PIG")) || *iParam1 == joaat("WEAPON_REVOLVER_DOUBLEACTION_EXOTIC")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_CALLOWAY")) || *iParam1 == joaat("WEAPON_REVOLVER_SCHOFIELD_GOLDEN")) || *iParam1 == joaat("WEAPON_PISTOL_MAUSER_DRUNK")) || *iParam1 == joaat("WEAPON_SHOTGUN_DOUBLEBARREL_EXOTIC")) || *iParam1 == joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_EXOTIC"))
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
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_779(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

Vector3 func_780()
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[0]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[0], true, false) /*3*/ };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_426[1]))
	{
		iVar0++;
		vVar1 = { vVar1 + ENTITY::GET_ENTITY_COORDS(iLocal_426[1], true, false) /*3*/ };
	}
	if (iVar0 > 0)
	{
		return vVar1 * FloatToVector((1.0f / BUILTIN::TO_FLOAT(iVar0)));
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_781(Vector3 vParam0, Vector3 vParam3, Vector3 vParam6)
{
	float fVar0;
	float fVar1;

	fVar0 = func_613(vParam0, vParam3);
	fVar1 = func_613(vParam0, vParam6);
	if (fVar0 > fVar1)
	{
		return 2;
	}
	return 1;
}

bool func_782(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;
	struct<4> /*32*/ sVar7;

	iVar1 = 15;
	iVar2 = uParam1->f_26 + 1;
	if (!func_891(uParam1, uParam1->f_26))
	{
		if (iVar2 > -1 && iVar2 <= iVar1)
		{
			iVar0 = iVar2;
			while (iVar0 <= iVar1)
			{
				if (func_891(uParam1, iVar0))
				{
					uParam1->f_26 = iVar0;
					uParam1->f_27 = iVar0;
					uParam1->f_28 = { func_16(uParam1->f_6, iVar0) /*4*/ };
					uParam1->f_32 = { uParam1->f_28 /*4*/ };
					return true;
				}
				else
				{
					sVar3 = { func_16(uParam1->f_6, iVar0) /*4*/ };
					sVar7 = { func_16(uParam1->f_6, iVar0 + 1) /*4*/ };
					if ((func_783(uParam1->f_6, iVar0, joaat("IGNOREVALIDATION")) || func_783(uParam1->f_6, iVar0, 1100690837)) || func_785(iParam0, &sVar3, &sVar7))
					{
						uParam1->f_26 = iVar0;
						uParam1->f_27 = iVar0 + 1;
						uParam1->f_28 = { sVar3 /*4*/ };
						uParam1->f_32 = { sVar7 /*4*/ };
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

bool func_783(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_892(iParam0, iParam1, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_784(var uParam0)
{
	if (*uParam0)
	{
		return 5;
	}
	if (uParam0->f_26 > -1 && uParam0->f_26 < 16)
	{
		switch (func_892(uParam0->f_6, uParam0->f_26, 3))
		{
			case -73865943:
				return 1;
			case 1100690837:
				return 4;
			default:
				break;
		}
	}
	return 0;
}

bool func_785(int iParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar0 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), *uParam1);
	fVar1 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), *uParam2);
	fVar2 = BUILTIN::VDIST2(*uParam1, *uParam2);
	if (fVar1 < fVar0 || fVar1 < fVar2)
	{
		return false;
	}
	return true;
}

void func_786(var uParam0)
{
	if (uParam0->f_7 != 0)
	{
		TASK::REMOVE_COVER_POINT(uParam0->f_7);
		uParam0->f_7 = 0;
	}
	uParam0->f_7 = TASK::ADD_COVER_POINT(uParam0->f_28, uParam0->f_28.f_3, 3, 1, 1, false);
}

void func_787(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::REMOVE_PED_DEFENSIVE_AREA(iParam0, bParam3);
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(iParam0, iParam1, bParam2, bParam3, false);
	}
}

int func_788(int iParam0, var uParam1)
{
	int iVar0;

	if ((!*uParam1 && uParam1->f_5 != 2) && !uParam1->f_1)
	{
		iVar0 = 0;
		if (func_893(iVar0))
		{
			return 0;
		}
		if (iParam0 == iLocal_431[1])
		{
			iVar0 = 1;
		}
		if (func_792(iVar0))
		{
			return 0;
		}
		if (!func_650(iParam0, uParam1))
		{
			if (func_894(iParam0, uParam1))
			{
				return 1;
			}
			else if (func_895(iParam0, uParam1))
			{
				return 2;
			}
		}
	}
	return 0;
}

void func_789(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_896(1);
			break;
		case 1:
			func_896(2);
			break;
	}
}

void func_790(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (func_897(iParam0, Global_35))
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_L_LOOK_01_PED01", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_L_LOOK_02_PED01", uParam1);
						break;
				}
			}
			else
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_R_LOOK_01_PED01", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_R_LOOK_02_PED01", uParam1);
						break;
				}
			}
			break;
		case 1:
			if (func_897(iParam0, Global_35))
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_L_LOOK_01_PED02", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_L_LOOK_02_PED02", uParam1);
						break;
				}
			}
			else
			{
				switch (uParam1->f_20)
				{
					case 0:
						func_898(iParam0, "RUN_R_LOOK_01_PED02", uParam1);
						break;
					case 1:
						func_898(iParam0, "RUN_R_LOOK_02_PED02", uParam1);
						break;
				}
			}
			break;
	}
	uParam1->f_20++;
}

bool func_791(int iParam0, var uParam1)
{
	var uVar0;

	if (func_535(iParam0, &uLocal_267, &uVar0, 0) || func_526(iParam0, Global_35, 15.0f, 1))
	{
		return true;
	}
	return false;
}

bool func_792(int iParam0)
{
	return uLocal_1222[iParam0] > 5;
}

bool func_793(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_899(iParam0, Global_35, BUILTIN::COS(120.0f));
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if ((iVar1 != 0 && ENTITY::GET_ENTITY_SPEED(iParam0) > 1.0f) && !func_48(uParam1->f_28))
	{
		switch (iVar1)
		{
			case 1:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_B_PED01", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_B_PED02", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
						break;
				}
				break;
			case 3:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_L_PED01", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_L_PED02", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
						break;
				}
				break;
			case 2:
				switch (uParam1->f_9)
				{
					case 0:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_R_PED01", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
						break;
					case 1:
						TASK::TASK_PLAY_ANIM(0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "STOP_R_PED02", 4.0f, -4.0f, -1, 0, 0.0f, false, 0, false, 0, false);
						break;
				}
				break;
		}
	}
	switch (uParam1->f_9)
	{
		case 0:
			func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 4.0f, -4.0f, 0, 1);
			break;
		case 1:
			func_800(0, Global_35, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 4.0f, -4.0f, 0, 1);
			break;
	}
	func_628(iParam0, &iVar0, 0, 0, 1, 1);
	return true;
}

bool func_794(int iParam0, var uParam1)
{
	if (!func_126(&(uParam1->f_17)))
	{
		return true;
	}
	return func_127(&(uParam1->f_17), 15.0f);
}

bool func_795(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED01", 1);
		case 1:
			return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "IDLE_PED02", 1);
		default:
			break;
	}
	return false;
}

bool func_796(int iParam0, int iParam1, float fParam2)
{
	return func_900(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, false, false), fParam2);
}

int func_797(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return 1;
		case 1:
			return 0;
		default:
			break;
	}
	return 2;
}

bool func_798(int iParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED01", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED01", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED01", 1))
			{
				return true;
			}
			break;
		case 1:
			if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_01_PED02", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_02_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_03_PED02", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", "TAUNT_04_PED02", 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_799(int iParam0, char* sParam1, char* sParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		iParam5 |= (1 << 26);
	}
	TASK::TASK_PLAY_ANIM(iParam0, sParam1, sParam2, fParam3, fParam4, iParam6, iParam5, 0.0f, false, 0, false, 0, false);
}

void func_800(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, bool bParam7)
{
	if (bParam7)
	{
		iParam6 |= 1;
	}
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, sParam2, sParam3, iParam1, func_279(bParam7, -1, func_901(sParam2, sParam3)), fParam4, fParam5, iParam6 | (1 << 26), 0.0f, false, false, -1.0f, 0, 0, -1.0f);
}

void func_801(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_896(4);
			break;
		case 1:
			func_896(8);
			break;
	}
}

void func_802(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			switch (uLocal_1219[iParam0])
			{
				case 0:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "FALL_BACK", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
				case 1:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "FALL_BACK", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
			}
			break;
		case 1:
			switch (uLocal_1219[iParam0])
			{
				case 0:
					bVar0 = func_284(iLocal_431[iParam0], iLocal_431[iParam0], "FALL_BACK", 0, -1082130432, 0, 0, 0, 1, 1, 0, joaat("SPEECH_PARAMS_BEAT_SHOUTED_CLEAR"), 1, 0, 0);
					break;
			}
			break;
	}
	if (bVar0)
	{
		uLocal_1219[iParam0]++;
	}
}

void func_803(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			func_804(4);
			break;
		case 1:
			func_804(8);
			break;
	}
}

void func_804(int iParam0)
{
	func_902(&iLocal_211, iParam0);
}

void func_805(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 30, false);
	}
}

void func_806(int iParam0)
{
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(919052783, iParam0);
}

bool func_807(int iParam0, int iParam1)
{
	*iParam0 = -1;
	*iParam1 = -1;
	switch (sLocal_399.f_0)
	{
		case 10:
			switch (sLocal_399.f_1)
			{
				case 0:
					*iParam0 = 0;
					*iParam1 = 1;
					break;
				case 1:
					*iParam0 = 2;
					*iParam1 = 3;
					break;
			}
			break;
	}
	return ((*iParam0 > -1 && *iParam1 > -1) && *iParam0 != *iParam1);
}

bool func_808(var uParam0, int iParam1, bool bParam2)
{
	MISC::SET_BIT(&(uParam0->f_8), 4);
	uParam0->f_15[4] = iParam1;
	if (func_903(uParam0, iParam1))
	{
		return func_145(uParam0, iParam1);
	}
	else
	{
		func_310(uParam0, 4, 0);
		return false;
	}
	if (bParam2)
	{
		func_809(uParam0, 4, 1);
	}
	return true;
}

void func_809(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_116(uParam0, 0, 0, 0))
	{
		return;
	}
	if (iParam1 != -1)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (iVar0 != iParam1)
			{
				func_310(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			func_310(uParam0, iVar0, 0);
			iVar0++;
		}
	}
}

bool func_810(int iParam0, var uParam1)
{
	switch (sLocal_399.f_0)
	{
		case 10:
			switch (sLocal_399.f_1)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							*uParam1 = { func_16(9, 1) /*4*/ };
							return true;
						case 1:
							*uParam1 = { func_16(9, 2) /*4*/ };
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							*uParam1 = { func_16(9, 4) /*4*/ };
							return true;
						case 1:
							*uParam1 = { func_16(9, 5) /*4*/ };
							return true;
						default:
							break;
					}
					break;
			}
			break;
	}
	return false;
}

void func_811(int iParam0, float fParam1)
{
	if (!func_526(iParam0, Global_35, 12.0f, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Global_36, 2.0f, -1, 12.0f, 0, 40000.0f);
	}
	TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, fParam1, 0, 3.5f, 4.0f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
}

void func_812(int iParam0)
{
	PED::SET_PED_ACCURACY(iParam0, 100);
	PED::SET_PED_COMBAT_RANGE(iParam0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, false);
	PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
	PED::SET_COMBAT_FLOAT(iParam0, 12, 0.2f);
}

void func_813(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar8;
	Vector3 vVar11;

	iLocal_1193++;
	iVar2 = 0;
	iVar3 = -1;
	switch (sLocal_399.f_1)
	{
		case 0:
			iVar2 = 7;
			iVar3 = 13;
			break;
		case 1:
			iVar2 = 7;
			iVar3 = 12;
			break;
	}
	if (iVar2 > 0)
	{
		vVar8 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
		vVar11 = { 0.0f, 0.0f, 0.0f /*3*/ };
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			vVar4 = { func_16(iVar3, iVar1) /*4*/ };
			if (!func_48(vVar4))
			{
				if (func_48(vVar11) || BUILTIN::VDIST(vVar8, vVar11) > BUILTIN::VDIST(vVar8, vVar4))
				{
					vVar11 = { vVar4 /*3*/ };
				}
			}
			iVar1++;
		}
		if (func_48(vVar11))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			func_628(iParam0, &iVar0, 0, 0, 1, 1);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!func_49(iParam0, vVar11, 7.0f, 1, 1))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar11, 2.0f, -1, 7.0f, 0, 40000.0f);
			}
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar11, Global_35, 1.5f, 0, 0.5f, 4.0f, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
			TASK::TASK_SHOOT_AT_ENTITY(0, Global_35, -1, 0, false);
			func_628(iParam0, &iVar0, 0, 0, 1, 1);
		}
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
		func_628(iParam0, &iVar0, 0, 0, 1, 1);
	}
}

bool func_814(int iParam0)
{
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return true;
	}
	if (func_283(iParam0, 1))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, Global_35))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_35, iParam0, 17))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_815(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_816(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || (iParam2 == 1 && ENTITY::IS_ENTITY_DEAD(iParam0)))
	{
		return false;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return false;
	}
	return MAP::BLIP_REMOVE_MODIFIER(iVar0, iParam1);
}

bool func_817(int iParam0)
{
	return func_139(iParam0, iLocal_242, 1, 0);
}

bool func_818()
{
	if (iLocal_1193 < 3)
	{
		return true;
	}
	return false;
}

void func_819(int iParam0)
{
	int iVar0;
	var uVar1;

	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630.f_38);
	Global_1935630.f_27 = func_904();
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
			func_905(&(Global_1935630.f_34), &(Global_1935630.f_39));
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

var func_820(int iParam0)
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

bool func_821(int iParam0)
{
	int iVar0;

	iVar0 = Global_1935630.f_40;
	if (func_328() == -1)
	{
		if (Global_1935630.f_40 == 0)
		{
			iVar0 = func_906(iParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
	{
		iVar0 = func_906(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_848(iVar0) == -1)
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iVar0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(iVar0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_822(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_907(iParam0);
	}
}

bool func_823(int iParam0, int iParam1, int iParam2)
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
		iVar1 = func_848(iParam2);
	}
	else
	{
		iVar1 = func_847(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_848(iParam0);
	}
	else
	{
		iVar0 = func_847(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_56(*iParam1, (1 << 23)))
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

float func_824(int iParam0, int iParam1)
{
	return func_624(iParam0, iParam1, 1, 1);
}

float func_825(int iParam0)
{
	return iParam0->f_26;
}

bool func_826(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_827(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_79(iParam0, (1 << 27));
	}
	else
	{
		func_80(iParam0, (1 << 27));
	}
}

bool func_828(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_624(iVar0, iParam0, 1, 1) <= 4.0f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_908(iVar0, 0)))
		{
			if (func_909(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_829(int iParam0)
{
	return iParam0->f_17;
}

bool func_830(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;

	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1.0f;
	if (!func_56(*iParam0, (1 << 22)))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_35, -1.0f, fParam3, -1.0f, fVar0))
	{
		return true;
	}
	if (*iParam0 & (1 << 15) != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_831(int iParam0)
{
	return iParam0->f_18;
}

bool func_832(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_908(iVar0, 0)))
		{
			if (func_910(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_833(int iParam0)
{
	return iParam0->f_23;
}

int func_834(int iParam0)
{
	return iParam0->f_21;
}

int func_835(int iParam0)
{
	int iVar0;

	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
			switch (iParam0->f_6)
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
	if (*iParam0 & (1 << 24) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_836(int iParam0, Vector3 vParam1, Vector3 vParam4)
{
	if (func_900(iParam0, vParam4, 0.5f))
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

int func_837(int iParam0)
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
	if (func_911(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_838(int iParam0)
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

bool func_839(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_242(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5.0f;
	if (*iParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_840(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_242(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10.0f;
	if (*iParam0 & (1 << 16) != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_841(int iParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = 40.0f;
	if (func_242(iParam1))
	{
		return false;
	}
	if (*iParam0 & (1 << 16) != 0)
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

bool func_842(int iParam0, int iParam1)
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

bool func_843(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (func_912(iParam0, 1, 0, 0) != joaat("WEAPON_LASSO"))
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

bool func_844(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_845(int iParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;

	fVar0 = func_554(iParam0, vParam2, 1);
	if (fVar0 < 4.0f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_846(int iParam0)
{
	return iParam0->f_24;
}

int func_847(int iParam0)
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

int func_848(int iParam0)
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

int func_849(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_842(Global_35, &iVar1))
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
		fVar2 = func_624(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_624(iParam0, Global_1935630.f_40, 0, 1) < 2.5f)
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

bool func_850(int iParam0, int iParam1, bool bParam2)
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
					if (!bParam2 || !func_851(iParam1, iVar0))
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
				if (!bParam2 || !func_851(iParam1, iVar1))
				{
					if (func_554(iVar1, Global_36, 1) < 5.0f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_851(int iParam0, int iParam1)
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

int func_852(int iParam0)
{
	if (func_913())
	{
		return 0;
	}
	return func_914(Global_1347702[58 /*49*/].f_15, 1);
}

int func_853(int iParam0)
{
	return iParam0->f_20;
}

int func_854(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0.0f)
	{
		fParam3 = iParam1->f_12;
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

float func_855(int iParam0)
{
	if (!*iParam0 & 1 != 0)
	{
		return func_846(iParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 0.833f)
	{
		return func_915(iParam0);
	}
	return func_846(iParam0);
}

float func_856(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_857()
{
	int iVar0;
	int iVar1;

	iVar0 = func_360(func_200());
	iVar1 = func_361(func_200());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_858(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_859(int iParam0)
{
	return func_868(iParam0, 2);
}

int func_860(int iParam0)
{
	if (!func_916(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_861(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_917(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0 /*1157*/];
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			DECORATOR::DECOR_SET_INT(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_862()
{
	return Global_1899515;
}

bool func_863(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & 32 != 0;
}

int func_864(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_868(iVar0, 2))
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
				func_918(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_865(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_866(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2, sParam3));
}

void func_867(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_543(iParam0))
	{
		return;
	}
	iVar0 = func_712(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

bool func_868(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return Global_1945188[iParam0 /*18*/].f_1 & iParam1 != 0;
}

void func_869(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= Global_1945188[iParam0 /*18*/].f_1 & iParam1;
}

void func_870(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_868(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_871(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_872(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

int func_873(bool bParam0)
{
	if (func_328() == -1)
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

struct<4> /*32*/ func_874(bool bParam0)
{
	int iVar0;

	iVar0 = func_873(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_875(joaat("CARRIED_WEAPONS"), func_919(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_875(joaat("CARRIED_WEAPONS"), func_919(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_875(joaat("CARRIED_WEAPONS"), func_919(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

struct<4> /*32*/ func_875(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_920(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_873(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

void func_876(var uParam0, var uParam1, var uParam2, float fParam3)
{
	*uParam2 = { func_921(*uParam0, *uParam1, fParam3) /*3*/ };
	uParam2->f_3 = func_922(uParam0->f_3, uParam1->f_3, fParam3, 0);
}

Vector3 func_877(Vector3 vParam0, float fParam3)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

void func_878(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	*uParam0 = { vParam1 /*3*/ };
	uParam0->f_3 = { vParam4 /*3*/ };
	uParam0->f_6 = { vParam7 /*3*/ };
}

int func_879(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1575.51f, -7256.65f, 66.43461f /*3*/ };
			*uParam2 = { -1.707547E-06f, 0.0f, -40.00001f /*3*/ };
			*uParam3 = { 1568.849f, -7270.316f, 70.75385f /*3*/ };
			break;
		default:
			return 0;
	}
	return 1;
}

int func_880(var uParam0, Vector3 vParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!func_48(*(uParam0[iVar0 /*9*/])))
		{
			if (!func_48((uParam0[iVar0 /*9*/])->f_3))
			{
				if (!func_48((uParam0[iVar0 /*9*/])->f_6))
				{
					if (iVar1 < 0 || func_923(uParam0, iVar1, iVar0, vParam1))
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

Vector3 func_881(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;
	int iVar10;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			vVar0 = { PED::GET_PED_BONE_COORDS(iVar9, 21030, 0.0f, 0.0f, 0.0f) /*3*/ };
			vVar0.f_2 = (vVar0.z + 0.25f);
		}
		else
		{
			iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
			MISC::GET_MODEL_DIMENSIONS(iVar10, &vVar3, &vVar6);
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) /*3*/ };
			vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar6) /*3*/ };
			vVar0.x = ((vVar3.x + vVar6.x) / 2.0f);
			vVar0.f_1 = ((vVar3.y + vVar6.y) / 2.0f);
			vVar0.f_2 = func_924(vVar3.z, vVar6.z, 0.75f);
		}
	}
	if (func_48(vVar0))
	{
	}
	return vVar0;
}

int func_882(bool bParam0, Vector3 vParam1, Vector3 vParam4, int iParam7)
{
	var uVar0;
	var uVar3;
	var uVar6;

	bParam0->f_4 = 0;
	switch (*bParam0)
	{
		case 0:
			func_925(bParam0);
			bParam0->f_1 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 83, iParam7, 7);
			SHAPETEST::_0x04AA59CA40571C2E(bParam0->f_1, 15);
			*bParam0 = 1;
			break;
		case 1:
			if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 2)
			{
				if (bParam0->f_2 == 0)
				{
					*bParam0 = 3;
					return 1;
				}
				else
				{
					bParam0->f_4 = 1;
					*bParam0 = 0;
					return 0;
				}
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT(bParam0->f_1, &(bParam0->f_2), &uVar0, &uVar3, &uVar6) == 0)
			{
				*bParam0 = 3;
			}
			break;
		case 3:
			*bParam0 = 0;
			break;
	}
	return 0;
}

struct<5> /*40*/ func_883(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_919(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_926(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_875(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_874(bParam1) /*4*/ };
			if (bParam2 && func_927(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_885(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_885(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_886(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
		case joaat("HORSE"):
			sVar0.f_4 = joaat("SLOTID_ACTIVE_HORSE");
			break;
		case joaat("EMOTE"):
			sVar0.f_4 = -813824107;
			sVar0 = { func_928(bParam1) /*4*/ };
			switch (func_929(iParam0))
			{
				case 664784405:
					sVar0.f_4 = -1150938404;
					break;
				case 2020212423:
					sVar0.f_4 = -1756997214;
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
			if (func_930(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_875(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_930(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_875(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_931(sVar0, &sVar27, bParam1, 0))
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
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

int func_884(int iParam0, int iParam1)
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
			return 1635590003;
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
			return 1158805436;
		case 41:
			return -559473670;
		case 42:
			return -797147251;
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
			return joaat("CLOTHING_STYLE_M_R1_OFFHAND_000_CATALOGUEDESC");
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
			return 892816668;
		case 350:
			return -1994943603;
		case 351:
			return 603133554;
		case 352:
			return -30160144;
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
			return -1410671073;
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
			return joaat("SLOTID_WEAPON_0");
		case 399:
			return joaat("SLOTID_WEAPON_1");
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
			return 61132362;
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return 1136146715;
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
			return 1471419228;
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return 1911050315;
		case 462:
			return -1343525599;
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return 526744654;
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return 853355463;
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return -585289073;
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
			return -2145069367;
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return -2117214398;
		case 493:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
		case 494:
			return -62390436;
		case 495:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
		case 496:
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
		case 497:
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
		case 498:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
		case 499:
			return 302954672;
		case 500:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
		case 501:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
		case 502:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
		case 503:
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
		case 504:
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
		case 505:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
		case 506:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
		case 507:
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
		case 508:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
		case 509:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
		case 510:
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
		case 511:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
		case 512:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
		case 513:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
		case 514:
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
		case 515:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
		case 516:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
		case 517:
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
		case 518:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
		case 519:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
		case 520:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
		case 521:
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
		case 522:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
		case 523:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
		case 524:
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
		case 525:
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
		case 526:
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
		case 527:
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
		case 528:
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
		case 529:
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
		case 530:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
		case 531:
			return 293062146;
		case 532:
			return 95360094;
		case 533:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
		case 534:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
		case 535:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
		case 536:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
		case 537:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
		case 538:
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
		case 539:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
		case 540:
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
		case 541:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
		case 542:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
		case 543:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
		case 544:
			return 1670843243;
		case 545:
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
		case 546:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
		case 547:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
		case 548:
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
		case 549:
			return -1150323212;
		case 550:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
		case 551:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
		case 552:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
		case 553:
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
		case 554:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
		case 555:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
		case 556:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
		case 557:
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
		case 558:
			return 1254273765;
		case 559:
			return -792172668;
		case 560:
			return 1905987493;
		case 561:
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
		case 562:
			return -1693422950;
		case 563:
			return -205873076;
		case 564:
			return -2143114654;
		case 565:
			return -1420574021;
		case 566:
			return -1959250381;
		case 567:
			return -1088328663;
		case 568:
			return 513602003;
		case 569:
			return joaat("SLOTID_WEB_INBOX");
		case 570:
			return joaat("SLOTID_WEB_INBOX_AMMO");
		case 571:
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
		case 572:
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
		case 573:
			return joaat("SLOTID_WEB_INBOX_GIFTS");
		case 574:
			return 1084576580;
		case 575:
			return joaat("SLOTID_WEB_INBOX_HORSES");
		case 576:
			return joaat("SLOTID_WEB_INBOX_KIT");
		case 577:
			return joaat("SLOTID_WEB_INBOX_OFFERS");
		case 578:
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
		case 579:
			return -386012962;
		case 580:
			return joaat("SLOTID_CARAVAN_UPGRADE");
		case 581:
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
		case 582:
			return -352578118;
		case 583:
			return 1426626782;
		case 584:
			return -714081520;
		case 585:
			return 74547781;
		case 586:
			return 1271463052;
		case 587:
			return 1983140194;
		case 588:
			return 677262775;
		case 589:
			return -832337898;
		case 590:
			return -319249747;
		case 591:
			return -16955722;
		case 592:
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
		case 593:
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
		case 594:
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
		case 595:
			return 1380479304;
		case 596:
			return joaat("SLOTID_WARDROBE_LOADOUT");
		case 597:
			return joaat("SLOTID_WARDROBE_MISC");
		case 598:
			return 1843035435;
		case 599:
			return -304127320;
		case 600:
			return 122470371;
		case 601:
			return 0;
		case 602:
			return joaat("SLOTID_NONE");
		case 603:
			return joaat("SLOTID_ANY");
		case 604:
			return -1150938404;
		case 605:
			return -1756997214;
		case 606:
			return -813824107;
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

bool func_885(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_932(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_886(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_755(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

bool func_887(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_933(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_931(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_888(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_873(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_888(bool bParam0)
{
	if (func_328() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_873(bParam0));
}

int func_889(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_934(iParam0))
	{
		return 0;
	}
	if (!func_888(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_890(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_627(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_891(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 15;
	if (iParam1 == iVar0)
	{
		return true;
	}
	if (iParam1 > -1 && iParam1 < iVar0)
	{
		return func_783(uParam0->f_6, iParam1, 229088988);
	}
	return false;
}

int func_892(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1332820953;
						case 1:
							return joaat("IGNOREVALIDATION");
						case 3:
							return 1100690837;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 13:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 1332820953;
						case 1:
							return joaat("IGNOREVALIDATION");
						case 3:
							return 1100690837;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 1:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 10:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 15:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 4:
					switch (iParam2)
					{
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam2)
					{
						case 0:
							return -282788437;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam2)
					{
						case 0:
							return 229088988;
						case 3:
							return -886113305;
						default:
							break;
					}
					break;
				default:
					return 2;
			}
			break;
		default:
			return 2;
	}
	return 2;
}

bool func_893(int iParam0)
{
	if (uLocal_1222[iParam0] > 5)
	{
		return true;
	}
	return false;
}

bool func_894(int iParam0, var uParam1)
{
	if (func_935(uParam1))
	{
		if (func_936(iParam0, uParam1))
		{
			if (!func_526(iParam0, Global_35, (35.0f + 5.0f), 1))
			{
				if (uParam1->f_21 < 4)
				{
					if (!func_126(&(uParam1->f_17)) || func_127(&(uParam1->f_17), 5.0f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_895(int iParam0, var uParam1)
{
	if (func_935(uParam1))
	{
		if (uParam1->f_20 < 2)
		{
			if (!func_48(uParam1->f_28))
			{
				if (func_937(iParam0, uParam1))
				{
					if (!func_526(iParam0, Global_35, 15.0f, 1))
					{
						if (TASK::IS_PED_RUNNING(iParam0) || TASK::IS_PED_SPRINTING(iParam0))
						{
							if (!func_126(&(uParam1->f_14)) || func_127(&(uParam1->f_14), 5.0f))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

void func_896(int iParam0)
{
	func_195(&iLocal_211, iParam0);
}

bool func_897(int iParam0, int iParam1)
{
	return func_938(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
}

void func_898(int iParam0, char* sParam1, var uParam2)
{
	int iVar0;

	iVar0 = 2064;
	TASK::TASK_PLAY_ANIM(iParam0, "SCRIPT_RE@BOOBY_TRAP@CHASE", sParam1, 4.0f, -4.0f, -1, iVar0, 0.0f, false, 0, false, 0, false);
}

int func_899(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) /*3*/ };
	return func_939(iParam0, vVar0, iParam2);
}

bool func_900(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0.0f, 0.0f, 0.0f)) > fParam4;
}

int func_901(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1000.0f * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

void func_902(int iParam0, int iParam1)
{
	func_566(iParam0, iParam1);
}

bool func_903(var uParam0, int iParam1)
{
	return func_940(uParam0, iParam1);
}

bool func_904()
{
	if (func_941())
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

void func_905(var uParam0, var uParam1)
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

int func_906(int iParam0)
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
	if (iParam0->f_6 == 3)
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

void func_907(int iParam0)
{
	int iVar0;

	if (Global_1935630.f_38 == 0)
	{
		func_80(iParam0, (1 << 26));
		iVar0 = 0;
		while (iVar0 < Global_1935630.f_39)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[iVar0]))
				{
					func_79(iParam0, (1 << 26));
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_908(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_909(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_910(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_910(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_911(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_912(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_913()
{
	if (func_328() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

int func_914(int iParam0, bool bParam1)
{
	switch (func_942(iParam0))
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

var func_915(int iParam0)
{
	return iParam0->f_25;
}

bool func_916(int iParam0)
{
	return iParam0 > -1;
}

bool func_917(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

void func_918(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_870(iParam0, 1);
	func_871(iParam0, 1);
	func_872(iParam0, 128);
}

struct<4> /*32*/ func_919(bool bParam0)
{
	return func_875(joaat("CHARACTER"), func_943(), joaat("SLOTID_NONE"), bParam0);
}

bool func_920(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

Vector3 func_921(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return FloatToVector((1.0f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_922(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;

	fVar0 = func_944(fParam0, 0.0f, 360.0f);
	fVar1 = func_944(fParam1, 0.0f, 360.0f);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 == 0.0f)
	{
		return fVar0;
	}
	if (iParam3 == 2)
	{
		bVar4 = true;
	}
	else if (iParam3 != 3)
	{
		if (fVar0 <= 180.0f)
		{
			if (fVar2 >= 0.0f && fVar2 <= 180.0f)
			{
				bVar4 = true;
			}
		}
		else if (fVar2 < -180.0f || fVar2 > 0.0f)
		{
			bVar4 = true;
		}
		if (iParam3 == 1)
		{
			bVar4 = !bVar4;
		}
	}
	if (bVar4)
	{
		if (fVar2 > 0.0f)
		{
			fVar3 = fVar2;
		}
		else
		{
			fVar3 = (fVar2 + 360.0f);
		}
	}
	else if (fVar2 < 0.0f)
	{
		fVar3 = fVar2;
	}
	else
	{
		fVar3 = (fVar2 - 360.0f);
	}
	return (fParam0 + (fParam2 * fVar3));
}

bool func_923(var uParam0, int iParam1, int iParam2, Vector3 vParam3)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VDIST(*(uParam0[iParam1 /*9*/]), vParam3);
	fVar1 = BUILTIN::VDIST(*(uParam0[iParam2 /*9*/]), vParam3);
	if (fVar1 < fVar0)
	{
		return true;
	}
	return false;
}

float func_924(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_925(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_2 = -1;
	bParam0->f_3 = 0;
	bParam0->f_4 = 0;
}

int func_926(int iParam0)
{
	Vector3 vVar0;

	if (!func_920(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_927(int iParam0, bool bParam1)
{
	if (func_929(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_945(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_928(bool bParam0)
{
	int iVar0;

	iVar0 = func_873(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_875(joaat("EMOTE_ITEM"), func_919(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_875(joaat("EMOTE_ITEM"), func_919(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_929(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_920(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_930(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_929(iParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_931(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_873(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_932(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_920(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_875(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_873(bParam6), &sVar0, false);
	return iVar4;
}

bool func_933(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_934(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_935(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return !func_283(iLocal_431[1], 0);
		case 1:
			return !func_283(iLocal_431[0], 0);
		default:
			break;
	}
	return false;
}

bool func_936(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_797(uParam1);
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, true, true))
	{
		return false;
	}
	if (iVar0 < 2)
	{
		if (func_946(&(sLocal_636[iVar0 /*36*/])))
		{
			if (func_526(iParam0, iLocal_431[iVar0], 10.0f, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_937(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	iVar0 = func_939(iParam0, uParam1->f_28, 1060437492);
	iVar1 = 0;
	bVar2 = (func_648(uParam1) || func_48(uParam1->f_32));
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_28);
	fVar4 = func_169(bVar2, 0.0f, BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1->f_32));
	iVar1 = func_939(iParam0, uParam1->f_32, 1060437492);
	if (iVar0 == 0 && (fVar3 > 1.0f || (iVar1 == 0 && fVar4 > 1.0f)))
	{
		return true;
	}
	return false;
}

bool func_938(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	return func_631(vVar0, vVar3, vParam1);
}

int func_939(int iParam0, Vector3 vParam1, float fParam4)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) /*3*/ };
	}
	vVar6 = { vParam1 - vVar0 /*3*/ };
	fVar9 = func_947(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0.0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_631(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_940(var uParam0, int iParam1)
{
	Stack.Invoke(uParam0->f_6, iParam1);
	return !MISC::IS_STRING_NULL_OR_EMPTY(StackVal);
}

bool func_941()
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

int func_942(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_948(iParam0);
}

struct<4> /*32*/ func_943()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

float func_944(float fParam0, float fParam1, float fParam2)
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

bool func_945(int iParam0)
{
	if (!func_949(iParam0))
	{
		return false;
	}
	return func_950(iParam0);
}

bool func_946(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			return func_951(1);
		case 1:
			return func_951(2);
	}
	return false;
}

float func_947(Vector3 vParam0, Vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0.0f)
	{
		vParam0.x /= fVar0;
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0.0f)
	{
		vParam3.x /= fVar0;
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

int func_948(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_952(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_949(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_950(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_951(int iParam0)
{
	return func_388(iLocal_211, iParam0);
}

int func_952(int iParam0)
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

