#pragma region Local_Variables
	int iLocal_0 = 0;
	struct<389> /*3112*/ sLocal_1 = { 0, 0, 0, 0, 0, 6, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0 } ;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 11;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	struct<2155> /*17240*/ sLocal_417 = { 0, -1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, -1, 92, -1, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 7, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 1082130432, 0, 0 } ;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#pragma endregion

void __SCRIPT()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_1(sLocal_417.f_2);
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 32)
		{
			func_2(0);
		}
		else
		{
			func_3(&sLocal_417, 0, 0);
			func_2(1);
		}
	}
	func_4(&sLocal_417, &uScriptParam_0);
	while (sLocal_417.f_2154 == 0)
	{
		if (func_5(&sLocal_417))
		{
			func_2(0);
		}
		BUILTIN::WAIT(0);
	}
	func_2(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_15 = 0;
}

void func_2(bool bParam0)
{
	func_8(&sLocal_417, bParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (bParam2)
		{
			func_9(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 0);
		}
		else
		{
			func_10(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 0, 1, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1938)
	{
		func_11(&(uParam0->f_1938[iVar0 /*29*/]));
		iVar0++;
	}
	if (bParam1)
	{
		func_12(uParam0);
	}
	else
	{
		func_13(uParam0, 0);
	}
}

void func_4(var uParam0, var uParam1)
{
	int iVar0;
	char cVar1[64];

	*uParam0 = { *uParam1 /*10*/ };
	if (func_6() == -1)
	{
		func_1(uParam0->f_2);
	}
	strcpy_s(&cVar1, 64, func_14(uParam1->f_1));
	strcat_s(&cVar1, 64, "_BlkVol");
	uParam0->f_20 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0.0f, 0.0f, 0.0f, 1.5f, 1.5f, 1.5f, &cVar1);
	strcat_s(&cVar1, 64, "_AmbBlockVol");
	uParam0->f_19 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam1->f_3, 0.0f, 0.0f, 0.0f, 2.5f, 2.5f, 2.5f, &cVar1);
	func_15(uParam1->f_3, 1.5f, 0);
	func_16(uParam1->f_3, 2.0f, 0);
	uParam0->f_22 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_20, false, 15);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_20, 10208, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_19, 266208, 0, 0, -1, -1, 12);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_21 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLSPHERE"), uParam1->f_3, 0.0f, 0.0f, 0.0f, 4.0f, 4.0f, 4.0f);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_21, true);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_21, false);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_95[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_18(&(uParam0->f_1938[iVar0 /*29*/]), iVar0);
		iVar0++;
	}
	func_19(uParam0);
	uParam0->f_104 = func_20(uParam0);
	PED::_RESERVE_AMBIENT_PEDS(uParam0->f_104);
	func_21(uParam0, 0);
}

bool func_5(var uParam0)
{
	int iVar0;
	bool bVar1;

	uParam0->f_15++;
	uParam0->f_2155 = func_22(uParam0->f_8);
	if (uParam0->f_1 == 2)
	{
		bVar1 = (uParam0->f_2155 || func_23(uParam0->f_1));
	}
	else
	{
		bVar1 = uParam0->f_2155;
	}
	uParam0->f_90 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, false);
	uParam0->f_91 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_3, true);
	uParam0->f_2156 = 0;
	uParam0->f_2145 = 0;
	uParam0->f_2146 = (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) == uParam0->f_18);
	uParam0->f_2147 = (func_24(uParam0) || uParam0->f_2146);
	uParam0->f_2144 = CAM::IS_SPHERE_VISIBLE(uParam0->f_3, 2.0f);
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_91 < 8.0f;
	}
	else if (uParam0->f_2146)
	{
		uParam0->f_2145 = uParam0->f_91 < 5.0f;
	}
	if (func_17(uParam0->f_2))
	{
		uParam0->f_2145 = uParam0->f_90 < 8.0f;
	}
	else if (uParam0->f_2147)
	{
		uParam0->f_2145 = uParam0->f_90 < 5.0f;
	}
	uParam0->f_103 = 0;
	if (uParam0->f_10 == 13 && func_25(&(uParam0->f_12)) > 2.0f)
	{
		func_26(uParam0);
		return func_27(uParam0);
	}
	func_28(uParam0);
	if (uParam0->f_10 >= 3)
	{
		func_29(uParam0);
	}
	uParam0->f_103 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_106[iVar0 /*29*/].f_1 != 0)
		{
			func_30(uParam0, &(uParam0->f_106[iVar0 /*29*/]));
		}
		iVar0++;
	}
	func_26(uParam0);
	if (uParam0->f_10 == 7 || uParam0->f_10 == 8)
	{
		if (func_31(uParam0, 0))
		{
			func_32(uParam0->f_1, uParam0->f_3, (1 << 30), 0);
			func_1(uParam0->f_2);
			func_21(uParam0, 9);
		}
	}
	if (func_6() == -1)
	{
		if (!func_33(uParam0) || func_34(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			func_1(uParam0->f_2);
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (func_36(uParam0) == 1)
			{
				func_21(uParam0, 1);
			}
			break;
		case 1:
			if (!func_37(uParam0->f_3, 2.0f))
			{
				func_21(uParam0, 2);
			}
			break;
		case 2:
			if (func_38(uParam0) == 1)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					func_39(uParam0, iVar0);
					iVar0++;
				}
				func_21(uParam0, 3);
			}
			break;
		case 3:
			if (func_40(uParam0) == 1)
			{
				uParam0->f_17 = GRAPHICS::CREATE_TRACKED_POINT();
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_17, uParam0->f_3, 1.5f);
				}
				uParam0->f_2153 = 0.0f;
				func_21(uParam0, 4);
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				PED::_0x9851DE7AEC10B4E1(uParam0->f_3, 2.0f, 1, 0);
				func_21(uParam0, 5);
			}
			else if (uParam0->f_103 > 0)
			{
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
				}
				uParam0->f_17 = 0;
				func_21(uParam0, 6);
			}
			else if (uParam0->f_2 == 9 && uParam0->f_90 > 70.0f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_2 == 30 && uParam0->f_90 > 18.0f)
			{
				func_21(uParam0, 5);
			}
			else if (uParam0->f_90 > uParam0->f_2152)
			{
				if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
				{
					if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(uParam0->f_17))
					{
						uParam0->f_2153 = 0.0f;
					}
				}
				else if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(Global_35), uParam0->f_3, true))
				{
					uParam0->f_2153 = 0.0f;
				}
				uParam0->f_2153 += MISC::GET_FRAME_TIME();
				if (uParam0->f_2153 > 1.0f)
				{
					func_21(uParam0, 5);
				}
				else if (uParam0->f_16 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != uParam0->f_18)
				{
					func_21(uParam0, 5);
				}
			}
			break;
		case 5:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_41(uParam0, iVar0, 0, iVar0);
				iVar0++;
			}
			if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
			{
				GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
			}
			uParam0->f_17 = 0;
			func_42(uParam0->f_2);
			func_43(uParam0->f_1, 16);
			func_44(uParam0->f_1, (1 << 22));
			func_21(uParam0, 6);
			break;
		case 6:
			func_45(uParam0->f_2);
			if (uParam0->f_90 < 7.0f)
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			else if (uParam0->f_90 < 12.0f && PED::IS_PED_ON_FOOT(Global_35))
			{
				func_46(uParam0);
				func_21(uParam0, 7);
			}
			break;
		case 7:
			if (func_47(uParam0))
			{
				func_48(uParam0->f_2);
				func_21(uParam0, 8);
			}
			break;
		case 8:
			func_49(uParam0);
			if (bVar1 == 0)
			{
				if (uParam0->f_93 == 0)
				{
					func_21(uParam0, 11);
				}
			}
			break;
		case 10:
			PED::SET_PED_RESET_FLAG(Global_35, 184 /*PRF_DisableAutoGreets*/, true);
			if (!bVar1 || func_50() == 7)
			{
				if (uParam0->f_1 == 2)
				{
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
				else
				{
					func_53(uParam0);
					if (func_51(uParam0))
					{
						func_52();
						func_21(uParam0, 8);
					}
				}
			}
			break;
		case 11:
			func_21(uParam0, 12);
			break;
		case 12:
			func_13(uParam0, 1);
			func_21(uParam0, 13);
			break;
	}
	func_54(uParam0);
	return func_27(uParam0);
}

int func_6()
{
	return Global_1572887.f_12;
}

bool func_7(int iParam0, int iParam1)
{
	*iParam1 = -1;
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return false;
	}
	*iParam1 = Global_1899528.f_11[iParam0];
	return *iParam1 != -1;
}

void func_8(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;

	func_55(uParam0);
	func_1(uParam0->f_2);
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(uParam0->f_17))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_17);
	}
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3)))
	{
		INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3));
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_22, false);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_20);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_19))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_19);
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_56(uParam0, uParam0->f_106[iVar0 /*29*/].f_11, 0);
			func_9(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 1);
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			func_57(uParam0, &(uParam0->f_106[iVar0 /*29*/]));
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_11(&(uParam0->f_1938[iVar0 /*29*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_23[iVar0 /*11*/] == 1)
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_23[iVar0 /*11*/].f_10))
			{
				TASK::_DELETE_SCENARIO_POINT(uParam0->f_23[iVar0 /*11*/].f_10);
			}
		}
		uParam0->f_23[iVar0 /*11*/] = 0;
		uParam0->f_23[iVar0 /*11*/].f_10 = 0;
		iVar0++;
	}
	if (!func_22(uParam0->f_8))
	{
		if (uParam0->f_2150)
		{
			sVar1 = func_58(uParam0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				AUDIO::_RELEASE_SOUNDSET(sVar1);
				uParam0->f_2150 = 0;
			}
		}
	}
	func_12(uParam0);
	PED::_UNRESERVE_AMBIENT_PEDS(uParam0->f_104);
	func_59(uParam0->f_20);
	func_59(uParam0->f_19);
	func_59(uParam0->f_21);
}

void func_9(var uParam0, var uParam1, bool bParam2)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		func_60(uParam0, uParam1, 1);
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26 /*PCF_DisableMelee*/, false);
		PED::_CLEAR_PED_ACTION_DISABLE_FLAG(uParam1->f_11, 0);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (bParam2)
		{
			func_63(&(uParam1->f_11), 1, 0, 1);
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_95[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92--;
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_10(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (*uParam1 == 0)
	{
		return;
	}
	if (iParam4 == 0)
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
	{
		if (func_61(uParam0->f_2) == uParam1->f_11)
		{
			func_62(uParam0->f_2, 0);
		}
		PED::SET_PED_CONFIG_FLAG(uParam1->f_11, 26 /*PCF_DisableMelee*/, false);
		PED::_CLEAR_PED_ACTION_DISABLE_FLAG(uParam1->f_11, 0);
		ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(uParam1->f_11);
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
		PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam1->f_11, 319488);
		if (PED::IS_PED_A_PLAYER(uParam1->f_11))
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 2);
		}
		else
		{
			PED::SET_PED_LEG_IK_MODE(uParam1->f_11, 1);
		}
		if (iParam2 == 0)
		{
			if (bParam5)
			{
				func_63(&(uParam1->f_11), bParam3, 0, 1);
			}
		}
		else
		{
			uParam0->f_105--;
			func_64(&(uParam1->f_11));
		}
	}
	if (uParam1->f_12 != -1)
	{
		uParam0->f_95[uParam1->f_12] = -1;
		MISC::CLEAR_BIT(&(uParam0->f_93), uParam1->f_12);
	}
	uParam0->f_92--;
	uParam1->f_1 = 0;
	uParam1->f_20 = 0;
	uParam1->f_14 = 0;
	uParam1->f_13 = -1;
	uParam1->f_11 = 0;
	*uParam1 = 0;
}

void func_11(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1);
	}
	func_18(uParam0, uParam0->f_28);
}

void func_12(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] != 0)
		{
			func_65(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] != 0)
		{
			func_66(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

char* func_14(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK" /* GXTEntry: "Blackjack" */;
		case 1:
			return "MG_DOMIN" /* GXTEntry: "Dominoes" */;
		case 2:
			return "MG_POKER" /* GXTEntry: "Poker" */;
		case 3:
			return "MG_FILLET" /* GXTEntry: "Five Finger Fillet" */;
		case 4:
			return "MG_MILKING_COW" /* GXTEntry: "Cow Milking" */;
		case 5:
			return "MG_CLEAN_STALLS" /* GXTEntry: "Cleaning Stalls" */;
		case 6:
			return "MG_FENCE_BUILDING" /* GXTEntry: "Fence Building" */;
	}
	return "Unknown Minigame";
}

void func_15(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 1;
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_16(Vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = (1 << 9);
	if ((iParam4 & 1) != 0)
	{
		iVar0 |= (1 << 19);
	}
	if ((iParam4 & 2) != 0)
	{
		iVar0 |= 1536;
	}
	if ((iParam4 & 4) != 0)
	{
		iVar0 |= 2560;
	}
	if ((iParam4 & 8) != 0)
	{
		iVar0 |= 4608;
	}
	if ((iParam4 & 16) != 0)
	{
		iVar0 |= 8704;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_17(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 9:
		case 11:
		case 17:
		case 20:
			return true;
		default:
			break;
	}
	return false;
}

void func_18(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_2 = 0.0f;
	uParam0->f_1 = -1;
	uParam0->f_3 = 0;
	strcpy_s(&(uParam0->f_20), 64, "");
	strcpy_s(&(uParam0->f_12), 64, "");
	strcpy_s(&(uParam0->f_4), 64, "");
	uParam0->f_28 = iParam1;
}

void func_19(var uParam0)
{
	func_67(uParam0, joaat("MINIGAME_POKER_PLAYER"), 0);
	switch (func_68())
	{
		case 38:
			iLocal_0 = 0;
			break;
		case 8:
			iLocal_0 = 2;
			break;
		case 105:
			iLocal_0 = 3;
			break;
		case 75:
			iLocal_0 = 4;
			break;
		case 5:
			iLocal_0 = 5;
			break;
		case 76:
			iLocal_0 = 7;
			break;
		case 92:
			iLocal_0 = 8;
			break;
		case 115:
			iLocal_0 = 6;
			break;
		default:
			iLocal_0 = 1;
			break;
	}
	if (func_68() == 75)
	{
		func_69(joaat("WS_SWA_CHAIRS_REGULAR"));
	}
	func_70(uParam0);
	if (func_68() == 75)
	{
		func_71(uParam0, 0, 0);
	}
	func_72(&sLocal_1);
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_94, iVar0) && !MISC::IS_BIT_SET(uParam0->f_93, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_21(var uParam0, int iParam1)
{
	if (uParam0->f_10 != iParam1)
	{
	}
	uParam0->f_10 = iParam1;
	uParam0->f_11 = 0;
	func_73(&(uParam0->f_12));
}

bool func_22(int iParam0)
{
	int iVar0;

	iVar0 = func_74(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_23(int iParam0)
{
	int iVar0;

	iVar0 = func_75(iParam0, 0);
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iVar0) > 0;
}

bool func_24(var uParam0)
{
	if (uParam0->f_2146)
	{
		return true;
	}
	switch (uParam0->f_2)
	{
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2955.036f, 523.2607f, 41.28577f, 2926.294f, 522.7525f, 56.23881f, 18.5f, false, true, 0);
		case 0:
		case 23:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -803.2272f, -1319.447f, 42.55078f, -834.1096f, -1319.633f, 50.82779f, 19.75f, false, true, 0);
		case 32:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, -306.259f, 792.0828f, 116.4818f, -312.7949f, 826.4695f, 126.7013f, 19.75f, false, true, 0);
		case 27:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(Global_35, 2644.131f, -1227.63f, 52.23838f, 2622.243f, -1227.719f, 85.54826f, 18.0f, false, true, 0);
		default:
			break;
	}
	return false;
}

float func_25(var uParam0)
{
	if (!func_76(uParam0))
	{
		return 0.0f;
	}
	if (func_77(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_78() - uParam0->f_1);
}

void func_26(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_1938[iVar0 /*29*/] == 2)
		{
			func_79(&(uParam0->f_1938[iVar0 /*29*/]), 0);
			Jump @124; // curOff = 42
		}
		else if (uParam0->f_1938[iVar0 /*29*/] == 5)
		{
			uParam0->f_1938[iVar0 /*29*/].f_2 = ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_1938[iVar0 /*29*/].f_1);
			Jump @124; // curOff = 87
		}
		else if (uParam0->f_1938[iVar0 /*29*/] == 3)
		{
			func_80(uParam0, uParam0->f_1938[iVar0 /*29*/].f_28, 1);
		}
		iVar0++;
	}
}

int func_27(var uParam0)
{
	int iVar0;
	float fVar1;

	fVar1 = func_81(uParam0->f_1);
	if (uParam0->f_9 != 0.0f)
	{
		fVar1 = uParam0->f_9;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || Global_1935630.f_22)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_1(uParam0->f_2);
			return 1;
		}
		return 0;
	}
	if (Global_1394141.f_1328)
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (func_82(uParam0->f_1, (1 << 18)))
	{
		func_12(uParam0);
		func_3(uParam0, 1, 0);
		return 1;
	}
	if (!func_83(uParam0->f_1))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if (uParam0->f_7 != -1)
	{
		if (func_84(uParam0->f_7, (1 << 22)))
		{
			func_1(uParam0->f_2);
			return 1;
		}
		if (func_68() != uParam0->f_7)
		{
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!func_85(uParam0->f_8) && !func_22(uParam0->f_8))
	{
		func_1(uParam0->f_2);
		return 1;
	}
	if ((uParam0->f_1 == 2 && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("POKER_SP")) == 0) || uParam0->f_1 != 2)
	{
		if (uParam0->f_90 > fVar1)
		{
			func_12(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_9(uParam0, &(uParam0->f_106[iVar0 /*29*/]), 1);
				iVar0++;
			}
			func_1(uParam0->f_2);
			return 1;
		}
	}
	if (!uParam0->f_2155)
	{
		if (func_86())
		{
			if (!func_87(uParam0->f_2))
			{
				if (func_88())
				{
					if (uParam0->f_2 == 0 && SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("POKER_LAUNCH_SP"))
					{
						return 0;
					}
					if (uParam0->f_90 < 10.0f)
					{
						func_3(uParam0, 1, 1);
					}
					return 1;
				}
				else if (func_89(269, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_28(var uParam0)
{
	char* sVar0;

	if ((MISC::GET_FRAME_COUNT() % 25) != 0)
	{
		return;
	}
	if (uParam0->f_90 < 15.0f)
	{
		if (uParam0->f_2150 == 0)
		{
			sVar0 = func_58(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::PREPARE_SOUNDSET(sVar0, true);
			uParam0->f_2150 = 1;
		}
		return;
	}
	if (uParam0->f_90 > 25.0f)
	{
		if (uParam0->f_2150)
		{
			sVar0 = func_58(uParam0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return;
			}
			AUDIO::_RELEASE_SOUNDSET(sVar0);
			uParam0->f_2150 = 0;
		}
	}
}

void func_29(var uParam0)
{
	int iVar0;
	float fVar1;

	if (uParam0->f_10 == 13)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] == 5 && uParam0->f_281[iVar0 /*24*/].f_22 == 0.0f)
		{
			Jump @1049; // curOff = 59
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 1)
		{
			if (MISC::GET_FRAME_COUNT() > uParam0->f_281[iVar0 /*24*/].f_2)
			{
				uParam0->f_281[iVar0 /*24*/] = 2;
			}
			Jump @1049; // curOff = 106
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 2)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_281[iVar0 /*24*/].f_1, false);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_281[iVar0 /*24*/].f_1))
			{
				if (func_90(uParam0->f_281[iVar0 /*24*/].f_16))
				{
					uParam0->f_281[iVar0 /*24*/].f_16 = { uParam0->f_3 - Vector(0.1f, 0.0f, 0.0f) /*3*/ };
				}
				uParam0->f_281[iVar0 /*24*/].f_23 = 255.0f;
				uParam0->f_281[iVar0 /*24*/].f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_281[iVar0 /*24*/].f_1, uParam0->f_281[iVar0 /*24*/].f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, uParam0->f_281[iVar0 /*24*/].f_19, 2, true);
				uParam0->f_281[iVar0 /*24*/] = 5;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_281[iVar0 /*24*/].f_1);
				if (uParam0->f_281[iVar0 /*24*/].f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar0 /*24*/].f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject", true);
				}
			}
			Jump @1049; // curOff = 392
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 4)
		{
			STREAMING::REQUEST_MODEL(uParam0->f_281[iVar0 /*24*/].f_1, false);
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_281[iVar0 /*24*/].f_1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iVar0 /*24*/].f_4))
				{
					uParam0->f_281[iVar0 /*24*/].f_16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar0 /*24*/].f_4, true, false) /*3*/ };
					uParam0->f_281[iVar0 /*24*/].f_19 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, 2) /*3*/ };
					func_91(&(uParam0->f_281[iVar0 /*24*/].f_4));
				}
				if (func_90(uParam0->f_281[iVar0 /*24*/].f_16))
				{
					uParam0->f_281[iVar0 /*24*/].f_16 = { uParam0->f_3 - Vector(0.1f, 0.0f, 0.0f) /*3*/ };
				}
				uParam0->f_281[iVar0 /*24*/].f_4 = OBJECT::CREATE_OBJECT_NO_OFFSET(uParam0->f_281[iVar0 /*24*/].f_1, uParam0->f_281[iVar0 /*24*/].f_16, false, true, false, false);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, uParam0->f_281[iVar0 /*24*/].f_19, 2, true);
				uParam0->f_281[iVar0 /*24*/] = 5;
				uParam0->f_281[iVar0 /*24*/].f_23 = 255.0f;
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_281[iVar0 /*24*/].f_1);
				if (uParam0->f_281[iVar0 /*24*/].f_13)
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar0 /*24*/].f_4, false);
				}
				if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject"))
				{
					DECORATOR::DECOR_SET_BOOL(uParam0->f_281[iVar0 /*24*/].f_4, "MinigameObject", true);
				}
			}
			Jump @1049; // curOff = 770
		}
		else if (uParam0->f_281[iVar0 /*24*/] == 5 && uParam0->f_281[iVar0 /*24*/].f_22 != 0.0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iVar0 /*24*/].f_4))
			{
				fVar1 = (MISC::GET_FRAME_TIME() / uParam0->f_281[iVar0 /*24*/].f_22);
				uParam0->f_281[iVar0 /*24*/].f_23 += (fVar1 * 255.0f);
				if (uParam0->f_281[iVar0 /*24*/].f_23 <= 0.0f)
				{
					func_65(uParam0, iVar0);
				}
				else if (uParam0->f_281[iVar0 /*24*/].f_23 >= 255.0f)
				{
					uParam0->f_281[iVar0 /*24*/].f_23 = 255.0f;
					ENTITY::RESET_ENTITY_ALPHA(uParam0->f_281[iVar0 /*24*/].f_4);
					uParam0->f_281[iVar0 /*24*/].f_22 = 0.0f;
				}
				else if (uParam0->f_281[iVar0 /*24*/].f_22 < 0.0f)
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_281[iVar0 /*24*/].f_4, BUILTIN::FLOOR(uParam0->f_281[iVar0 /*24*/].f_23), true);
				}
				else
				{
					ENTITY::SET_ENTITY_ALPHA(uParam0->f_281[iVar0 /*24*/].f_4, BUILTIN::CEIL(uParam0->f_281[iVar0 /*24*/].f_23), true);
				}
			}
		}
		iVar0++;
	}
}

void func_30(var uParam0, var uParam1)
{
	var uVar0;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;

	uVar0 = 6;
	iVar11 = 0;
	if (uParam1->f_1 == 0)
	{
		return;
	}
	if (uParam1->f_1 > 1)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam1->f_11))
		{
			func_10(uParam0, uParam1, 0, 1, 0, 1);
			return;
		}
		uParam1->f_16 = ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam1->f_11, -1);
		PED::SET_PED_RESET_FLAG(uParam1->f_11, 49 /*PRF_DisableAgitationTriggers*/, true);
	}
	switch (uParam1->f_1)
	{
		case 1:
			STREAMING::REQUEST_MODEL(uParam1->f_2, false);
			if ((STREAMING::HAS_MODEL_LOADED(uParam1->f_2) && MISC::GET_FRAME_COUNT() > uParam1->f_17) && !uParam0->f_2156)
			{
				uParam1->f_11 = func_92(uParam1->f_2, uParam1->f_7, uParam1->f_10, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_HEADING(uParam1->f_11, uParam1->f_10);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam1->f_2);
				uParam1->f_12 = -1;
				func_93(uParam1->f_11, 0);
				iVar8 = -1;
				if ((uParam0->f_1 == 2 || (uParam0->f_1 == 0 && uParam1->f_13 != 4)) || uParam0->f_1 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11))
					{
						iVar8 = func_95(uParam0->f_1, func_94(uParam0));
						iVar11 = func_96(uParam1->f_11, uParam0->f_1, uParam0->f_7, iVar8);
					}
				}
				func_97(uParam0, &uVar0, &iVar7);
				if ((uParam0->f_1 == 1 || uParam0->f_1 == 0) || uParam0->f_1 == 2)
				{
					if (func_98(uParam1->f_11, uParam0->f_1, iVar11, &uVar0, iVar7, &iVar9))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_99(iVar9));
					}
					else if (func_100(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
					{
						AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_99(iVar9));
					}
					else
					{
						iVar9 = 92;
					}
				}
				else if (func_100(uParam1->f_11, uParam0->f_1, &uVar0, iVar7, &iVar9))
				{
					AUDIO::SET_AMBIENT_VOICE_NAME(uParam1->f_11, func_99(iVar9));
				}
				else
				{
					iVar9 = 92;
				}
				func_101(uParam0, uParam1, uParam1->f_11, uParam1->f_13, uParam1->f_15, 1, iVar8, iVar9);
				if (uParam1->f_15 && uParam1->f_12 != -1)
				{
					if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_23[uParam1->f_12 /*11*/].f_10))
					{
						TASK::TASK_USE_SCENARIO_POINT(uParam1->f_11, uParam0->f_23[uParam1->f_12 /*11*/].f_10, &(uParam0->f_23[uParam1->f_12 /*11*/].f_2), 0, false, true, 0, false, -1.0f, false);
					}
				}
				uParam0->f_2156 = 1;
			}
			break;
		case 3:
			func_102(uParam0, uParam1);
			break;
		case 4:
			if (func_103(uParam0, uParam1) == 1)
			{
				uParam1->f_14 = 0;
				func_104(uParam1, 5);
			}
			break;
		case 5:
			uParam0->f_103++;
			if (!PED::IS_PED_INJURED(uParam1->f_11))
			{
				PED::SET_PED_CAN_LEG_IK(uParam1->f_11, false);
			}
			bVar10 = func_105(uParam1);
			if (uParam1->f_14 && !bVar10)
			{
				func_106(uParam0, uParam1, 0);
			}
			else
			{
				func_107(uParam0, uParam1);
			}
			uParam1->f_14 = bVar10;
			break;
		case 6:
			func_108(uParam0, uParam1);
			break;
		case 7:
			if (!PED::IS_PED_USING_ANY_SCENARIO(uParam1->f_11) || TASK::IS_PED_EXITING_SCENARIO(uParam1->f_11, false))
			{
				ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(uParam1->f_11);
				func_10(uParam0, uParam1, 0, 1, 0, 1);
			}
			break;
	}
}

int func_31(var uParam0, int iParam1)
{
	float fVar0;

	fVar0 = 1.5f;
	if (uParam0->f_1 == 2 || uParam0->f_1 == 0)
	{
		fVar0 = 2.5f;
	}
	return func_109(uParam0->f_3, fVar0, iParam1);
}

void func_32(int iParam0, Vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = 0;
	func_110(&iVar0, vParam1, 0.0f, 0.0f, 0.0f, iParam4, iParam4, iParam4);
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return;
	}
	iVar5 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar5))
	{
		iVar2 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar0, iVar5, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar5));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_111(iParam0, ENTITY::GET_ENTITY_MODEL(iVar1)))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar1))
					{
						if ((func_6() != -1 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) || func_6() == -1)
						{
							iVar4++;
							if (iParam5 == 1 && ENTITY::IS_ENTITY_UPRIGHT(iVar1, 90.0f))
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, false);
							}
							else
							{
								ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
								ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, true);
							}
						}
					}
				}
			}
			iVar3++;
		}
		ITEMSET::_CLEAR_ITEMSET(iVar5);
		ITEMSET::DESTROY_ITEMSET(iVar5);
	}
	if (iVar4 > 0)
	{
	}
	func_59(iVar0);
}

bool func_33(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 == 0)
	{
		return func_112(uParam0, 4);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_112(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_113(bParam1, bParam2, bParam3);
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

void func_35(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_15 = 1;
	}
}

int func_36(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_17(uParam0->f_2))
			{
				return 1;
			}
			if (func_114())
			{
				return 0;
			}
			if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3)))
			{
				return 1;
			}
			uParam0->f_18 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_3);
			INTERIOR::PIN_INTERIOR_IN_MEMORY(uParam0->f_18);
			uParam0->f_16 = 1;
			func_115(uParam0);
			break;
		case 1:
			if (INTERIOR::IS_INTERIOR_READY(uParam0->f_18))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_37(Vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	vParam0.f_2 = (vParam0.z + 0.9f);
	func_116(&iVar2, vParam0, 0.0f, 0.0f, 0.0f, fParam3, fParam3, 1.8f);
	iVar3 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar2, iVar1, 1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar0 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar1));
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (PED::_GET_CARRIER_AS_HUMAN(iVar0) != Global_35)
			{
				func_59(iVar2);
				ITEMSET::_CLEAR_ITEMSET(iVar1);
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return true;
			}
		}
		iVar4++;
	}
	func_59(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

int func_38(var uParam0)
{
	func_53(uParam0);
	func_32(uParam0->f_1, uParam0->f_3, 3.0f, 1);
	return 1;
}

void func_39(var uParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;

	iVar9 = func_117(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 1051931443 /* Float: 0.35f */);
	func_118(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, &vVar0, &fVar6);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		MISC::SET_BIT(&(uParam0->f_94), iParam1);
		return;
	}
	iVar8 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar0, uParam0->f_23[iParam1 /*11*/].f_1, 0.5f, 0, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar8))
	{
		uParam0->f_23[iParam1 /*11*/].f_10 = iVar8;
		uParam0->f_23[iParam1 /*11*/] = 0;
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) /*3*/ };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		TASK::_SET_SCENARIO_POINT_COORDS(iVar8, vVar3, false);
		TASK::_SET_SCENARIO_POINT_HEADING(iVar8, fVar7, false);
		return;
	}
	if (uParam0->f_1 == 2)
	{
		iVar8 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar0, joaat("MINIGAME_POKER_CAMP_PLAYER"), 0.5f, 0, false);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar8))
		{
			uParam0->f_23[iParam1 /*11*/].f_10 = iVar8;
			uParam0->f_23[iParam1 /*11*/] = 0;
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) /*3*/ };
			fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
			TASK::_SET_SCENARIO_POINT_COORDS(iVar8, vVar3, false);
			TASK::_SET_SCENARIO_POINT_HEADING(iVar8, fVar7, false);
			return;
		}
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_23[iParam1 /*11*/].f_10))
	{
		vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar0) /*3*/ };
		fVar7 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar6);
		uParam0->f_23[iParam1 /*11*/].f_10 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iVar9, uParam0->f_23[iParam1 /*11*/].f_1, vVar3, fVar7, 0, 0, false);
		uParam0->f_23[iParam1 /*11*/] = 1;
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_23[iParam1 /*11*/].f_10))
		{
		}
	}
}

int func_40(var uParam0)
{
	switch (uParam0->f_11)
	{
		case 0:
			func_119(uParam0);
			func_115(uParam0);
			break;
		case 1:
			func_119(uParam0);
			if (!func_120(uParam0))
			{
				return 2;
			}
			func_115(uParam0);
			break;
		case 2:
			if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() < uParam0->f_104)
			{
				return 2;
			}
			func_115(uParam0);
			break;
		case 3:
			return 1;
	}
	return 0;
}

int func_41(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_10(uParam0, &(uParam0->f_106[iParam1 /*29*/]), 1, 1, 0, 1);
	if (MISC::IS_BIT_SET(uParam0->f_94, iParam1))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		iParam2 = func_121(uParam0->f_1, uParam0->f_7, -1);
	}
	if (uParam0->f_1 == 0 && iParam1 == 4)
	{
		iParam2 = func_122(uParam0->f_7);
	}
	uParam0->f_106[iParam1 /*29*/].f_2 = iParam2;
	func_123(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, 0.0f, -MISC::GET_RANDOM_FLOAT_IN_RANGE(0.25f, 1.25f), 0.0f, &(uParam0->f_106[iParam1 /*29*/].f_7), 0);
	uParam0->f_106[iParam1 /*29*/].f_7.f_2 = (uParam0->f_3.f_2 - 0.5f);
	func_124(uParam0->f_1, uParam0->f_6, iParam1, &(uParam0->f_106[iParam1 /*29*/].f_10));
	uParam0->f_106[iParam1 /*29*/].f_13 = iParam1;
	uParam0->f_106[iParam1 /*29*/].f_15 = 1;
	uParam0->f_106[iParam1 /*29*/].f_12 = iParam1;
	uParam0->f_95[iParam1] = iParam1;
	uParam0->f_105++;
	MISC::SET_BIT(&(uParam0->f_93), iParam1);
	func_104(&(uParam0->f_106[iParam1 /*29*/]), 1);
	if (iParam3 > 0)
	{
		uParam0->f_106[iParam1 /*29*/].f_17 = (MISC::GET_FRAME_COUNT() + iParam3);
	}
	return 1;
}

int func_42(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return 1;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return 0;
	}
	if (Global_1392915[iVar0 /*12*/].f_1 == 3 && Global_1900325.f_24 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_15 = 1;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_15;
}

void func_43(int iParam0, int iParam1)
{
	if (func_82(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] -= (Global_1899528.f_3[iParam0] & iParam1);
}

void func_44(int iParam0, int iParam1)
{
	if (!func_82(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] |= iParam1;
}

void func_45(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_16 == 0)
	{
		Global_1392915.f_121[iVar0 /*20*/].f_16 = 1;
	}
}

void func_46(var uParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;

	if (sLocal_1.f_378 != -1)
	{
		func_125(uParam0, sLocal_1.f_378);
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_112(uParam0, iVar1))
		{
			iVar0 = func_126(iVar1);
			func_127(uParam0, iVar1, 0, &vVar5, &vVar2, 0, 1);
			func_129(uParam0, iVar0, func_128(), vVar5, vVar2, iVar1, 1);
			func_130(uParam0, iVar1, sLocal_1.f_5[iVar1 /*62*/].f_59, 1);
		}
		iVar1++;
	}
	func_131(uParam0, 30, 0, 1, 1);
	func_131(uParam0, 31, 0, 2, 1);
}

bool func_47(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/] != 0 && uParam0->f_281[iVar0 /*24*/] != 5)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_48(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	if (!func_7(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_16 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_16 = 0;
}

void func_49(var uParam0)
{
	int iVar0;

	if (!func_132(uParam0, sLocal_1.f_378))
	{
		sLocal_1.f_378 += 1 % 6;
	}
	if (sLocal_1.f_0 < 14)
	{
		if (uParam0->f_2155)
		{
			func_133(&sLocal_1, 14);
		}
	}
	if (uParam0->f_2151 == 1)
	{
		func_133(&sLocal_1, 13);
		uParam0->f_2151 = 0;
	}
	if (sLocal_1.f_0 == 14)
	{
		func_134(&sLocal_1, uParam0);
	}
	if (func_135(uParam0, 5) < 2)
	{
		return;
	}
	if (uParam0->f_2145)
	{
		func_136(uParam0, &sLocal_1);
	}
	switch (sLocal_1.f_0)
	{
		case 0:
			func_133(&sLocal_1, 1);
			break;
		case 1:
			if (!func_132(uParam0, sLocal_1.f_378))
			{
				sLocal_1.f_378 += 1 % 6;
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				sLocal_1.f_5[iVar0 /*62*/].f_58 = 0;
				if (func_132(uParam0, iVar0))
				{
					func_130(uParam0, iVar0, sLocal_1.f_5[iVar0 /*62*/].f_59, 1);
				}
				iVar0++;
			}
			sLocal_1.f_385 = func_137(uParam0, sLocal_1.f_378);
			if (sLocal_1.f_385 != -1)
			{
				func_138(&(sLocal_1.f_5[sLocal_1.f_385 /*62*/]), 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f), 0);
			}
			func_125(uParam0, sLocal_1.f_378);
			func_133(&sLocal_1, 3);
			break;
		case 3:
			if (!func_132(uParam0, sLocal_1.f_385))
			{
				sLocal_1.f_385 = func_137(uParam0, sLocal_1.f_378);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0) && iVar0 != sLocal_1.f_385)
				{
					func_138(&(sLocal_1.f_5[iVar0 /*62*/]), 1, 0, 0);
				}
				iVar0++;
			}
			func_138(&(sLocal_1.f_5[sLocal_1.f_385 /*62*/]), 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f), 0);
			func_133(&sLocal_1, 4);
			break;
		case 4:
			sLocal_1.f_384 = func_137(uParam0, sLocal_1.f_385);
			if (!func_132(uParam0, sLocal_1.f_384))
			{
				sLocal_1.f_384 = func_137(uParam0, sLocal_1.f_385);
				return;
			}
			func_138(&(sLocal_1.f_5[sLocal_1.f_384 /*62*/]), 5, MISC::GET_RANDOM_FLOAT_IN_RANGE(2.0f, 3.0f), 0);
			func_133(&sLocal_1, 5);
			break;
		case 5:
			if (!func_139(uParam0, &(sLocal_1.f_5[sLocal_1.f_385 /*62*/])))
			{
				return;
			}
			if (!func_139(uParam0, &(sLocal_1.f_5[sLocal_1.f_384 /*62*/])))
			{
				return;
			}
			func_138(&(sLocal_1.f_5[sLocal_1.f_378 /*62*/]), 2, 0, 0);
			func_133(&sLocal_1, 6);
			break;
		case 6:
			if (func_139(uParam0, &(sLocal_1.f_5[sLocal_1.f_378 /*62*/])))
			{
				sLocal_1.f_387 = func_137(uParam0, sLocal_1.f_384);
				if (sLocal_1.f_387 != -1)
				{
					func_133(&sLocal_1, 7);
				}
			}
			break;
		case 7:
			if (func_140(&sLocal_1, uParam0))
			{
				func_133(&sLocal_1, 8);
			}
			break;
		case 8:
			if (func_141(&sLocal_1, uParam0))
			{
				func_133(&sLocal_1, 9);
			}
			break;
		case 9:
			if (func_142(&sLocal_1, uParam0))
			{
				func_133(&sLocal_1, 10);
			}
			break;
		case 10:
			if (func_143(&sLocal_1, uParam0))
			{
				func_133(&sLocal_1, 11);
			}
			break;
		case 11:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &sLocal_1, iVar0))
				{
					if (!func_139(uParam0, &(sLocal_1.f_5[iVar0 /*62*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &sLocal_1, iVar0))
				{
					func_138(&(sLocal_1.f_5[iVar0 /*62*/]), 12, 0, 0);
				}
				iVar0++;
			}
			func_133(&sLocal_1, 12);
			break;
		case 12:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_144(uParam0, &sLocal_1, iVar0))
				{
					if (!func_139(uParam0, &(sLocal_1.f_5[iVar0 /*62*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(&(sLocal_1.f_5[sLocal_1.f_388 /*62*/]), 17, 0, 0);
			func_133(&sLocal_1, 13);
			break;
		case 13:
			if (func_145(&sLocal_1, uParam0))
			{
				func_133(&sLocal_1, 1);
			}
			break;
	}
}

int func_50()
{
	return Global_1899528.f_61;
}

bool func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	if (func_68() == 75)
	{
		func_146(-1983417035, 1);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar3 = func_147(uParam0->f_1, iVar0, &uVar5, &uVar6, &iVar7, &iVar8);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3))
		{
			sLocal_1.f_5[iVar0 /*62*/].f_59 = uVar5;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				iVar2 = ((0 + iVar0 * 4) + iVar1);
				iVar4 = func_148(uParam0->f_1, iVar2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					func_149(uParam0, iVar2, iVar4);
				}
				iVar1++;
			}
			func_71(uParam0, iVar0, 0);
			sLocal_1.f_5[iVar0 /*62*/].f_1 = uVar6;
			func_101(uParam0, &(uParam0->f_106[iVar0 /*29*/]), iVar3, iVar0, 1, 1, iVar7, iVar8);
		}
		iVar0++;
	}
	sLocal_1.f_378 = func_150();
	iVar4 = func_148(uParam0->f_1, 24);
	if (ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		func_149(uParam0, 24, iVar4);
	}
	func_125(uParam0, sLocal_1.f_378);
	func_151();
	return true;
}

void func_52()
{
	func_151();
	func_152();
	func_153(-1);
	func_154(-1);
}

bool func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;

	bVar2 = false;
	if (func_155() == uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (!func_156(&(uParam0->f_106[iVar0 /*29*/])))
			{
				iVar1 = func_147(uParam0->f_1, iVar0, &uVar3, &uVar4, &iVar5, &iVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, &(uParam0->f_106[iVar0 /*29*/]), iVar1, iVar0, 1, 0, iVar5, iVar6))
					{
						func_71(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_156(&(uParam0->f_106[iVar0 /*29*/])))
		{
			if (func_157(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &iVar1, 1, 0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(iVar1, "DontGrabThisPedForMinigame"))
				{
					if (func_101(uParam0, &(uParam0->f_106[iVar0 /*29*/]), iVar1, iVar0, 1, 0, -1, 92))
					{
						func_71(uParam0, iVar0, 0);
						bVar2 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		if (uParam0->f_1 == 0)
		{
			if (func_132(uParam0, 4))
			{
				func_35(uParam0->f_2);
			}
			else
			{
				func_1(uParam0->f_2);
			}
		}
		else
		{
			func_35(uParam0->f_2);
		}
	}
	return bVar2;
}

void func_54(var uParam0)
{
}

void func_55(var uParam0)
{
}

void func_56(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_158(uParam0, iVar0))
		{
			if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam1, uParam0->f_1938[iVar0 /*29*/].f_1))
			{
				func_80(uParam0, iVar0, bParam2);
			}
		}
		iVar0++;
	}
}

void func_57(var uParam0, var uParam1)
{
	if (*uParam1 == 1)
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
}

char* func_58(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 0:
		case 2:
			return "MGBLK_Sounds";
		case 1:
			return "MGDOM_Sounds";
		default:
			break;
	}
	return "";
}

void func_59(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_60(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_20 == -1)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_21)))
	{
		return;
	}
	if (iParam2 == 1 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1938[uParam1->f_20 /*29*/].f_1))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_1938[uParam1->f_20 /*29*/].f_1, &(uParam1->f_21), uParam1->f_11);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	MISC::CLEAR_BIT(&(uParam0->f_1938[uParam1->f_20 /*29*/].f_3), uParam1->f_13);
	if (uParam0->f_1938[uParam1->f_20 /*29*/].f_3 == 0)
	{
		func_159(&(uParam0->f_1938[uParam1->f_20 /*29*/]), 3);
	}
	strcpy_s(&(uParam1->f_21), 64, "");
	uParam1->f_20 = -1;
}

int func_61(int iParam0)
{
	int iVar0;

	if (func_6() != -1)
	{
		return 0;
	}
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_6;
}

void func_62(int iParam0, int iParam1)
{
	int iVar0;

	if (func_6() != -1)
	{
		return;
	}
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar0 /*20*/].f_6 = iParam1;
}

void func_63(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_OWNED_BY_PERSISTENCE_SYSTEM(*iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*iParam0, false))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, false);
		if (!bParam3)
		{
			TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
		}
		PED::SET_PED_KEEP_TASK(*iParam0, bParam1);
		if (bParam2)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
		}
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
}

void func_64(int* iParam0)
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

void func_65(var uParam0, int iParam1)
{
	uParam0->f_281[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_281[iParam1 /*24*/].f_5)) && uParam0->f_281[iParam1 /*24*/].f_3 != -1)
	{
		func_161(uParam0, iParam1, 0);
	}
	uParam0->f_281[iParam1 /*24*/].f_23 = 0.0f;
	uParam0->f_281[iParam1 /*24*/].f_22 = 0.0f;
	strcpy_s(&(uParam0->f_281[iParam1 /*24*/].f_5), 64, "");
	uParam0->f_281[iParam1 /*24*/].f_3 = -1;
	uParam0->f_281[iParam1 /*24*/].f_14 = 0;
	func_91(&(uParam0->f_281[iParam1 /*24*/].f_4));
	uParam0->f_281[iParam1 /*24*/].f_4 = 0;
}

void func_66(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_281[iParam1 /*24*/] = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_281[iParam1 /*24*/].f_5)) && uParam0->f_281[iParam1 /*24*/].f_3 != -1)
	{
		func_161(uParam0, iParam1, bParam2);
	}
	if (bParam2)
	{
		func_162(uParam0, iParam1);
	}
	strcpy_s(&(uParam0->f_281[iParam1 /*24*/].f_5), 64, "");
	uParam0->f_281[iParam1 /*24*/].f_3 = -1;
	uParam0->f_281[iParam1 /*24*/].f_23 = 0.0f;
	if (uParam0->f_281[iParam1 /*24*/].f_15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
		{
			ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iParam1 /*24*/].f_4, false);
		}
	}
	uParam0->f_281[iParam1 /*24*/].f_15 = 0;
	uParam0->f_281[iParam1 /*24*/].f_14 = 0;
	func_163(&(uParam0->f_281[iParam1 /*24*/].f_4), 1, 1);
	uParam0->f_281[iParam1 /*24*/].f_4 = 0;
}

void func_67(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_164(uParam0, iVar0, iParam1, sParam2);
		iVar0++;
	}
}

int func_68()
{
	return Global_1894899.f_2;
}

void func_69(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_165(iParam0, 1);
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

void func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar1 = 0;
	iVar4 = 6;
	if (uParam0->f_1 == 0)
	{
		iVar4--;
	}
	if (uParam0->f_1 == 2)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(3, iVar4);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar4);
	}
	if ((uParam0->f_1 == 2 && uParam0->f_7 == 75) || (uParam0->f_1 == 1 && uParam0->f_7 == 38))
	{
		MISC::SET_BIT(&iVar0, 0);
		iVar1--;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
		while (MISC::IS_BIT_SET(iVar0, iVar3))
		{
			iVar3 += 1 % iVar4;
		}
		MISC::SET_BIT(&iVar0, iVar3);
		iVar2++;
	}
	uParam0->f_94 = 0;
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (!MISC::IS_BIT_SET(iVar0, iVar2))
		{
			MISC::SET_BIT(&(uParam0->f_94), iVar2);
		}
		iVar2++;
	}
}

void func_71(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_94), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_94), iParam1);
	}
}

void func_72(int iParam0)
{
	int iVar0;

	func_166(&(iParam0->f_392));
	func_133(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iParam0->f_5[iVar0 /*62*/].f_5 = iVar0;
		func_138(&(iParam0->f_5[iVar0 /*62*/]), 1, 0, 0);
		func_166(&(iParam0->f_5[iVar0 /*62*/].f_6));
		iParam0->f_5[iVar0 /*62*/].f_30.f_24 = -1;
		func_166(&(iParam0->f_5[iVar0 /*62*/].f_30));
		iVar0++;
	}
	iParam0->f_380 = 0;
	iParam0->f_381 = 0;
	iParam0->f_382 = 0;
}

void func_73(var uParam0)
{
	func_167(uParam0, 0.0f);
}

int func_74(int iParam0)
{
	if (!func_168(iParam0))
	{
		return -1;
	}
	return func_169(iParam0);
}

int func_75(int iParam0, int iParam1)
{
	if (iParam1 == 1 && iParam0 == 2)
	{
		return joaat("POKER_SP");
	}
	switch (iParam0)
	{
		case 2:
			return joaat("POKER_SP");
		case 0:
			return joaat("BJACK_SP");
		case 1:
			return joaat("DOMINOES_SP");
		case 3:
			return joaat("FILLET_SP");
		case 4:
			return joaat("MILKING_COW");
		case 5:
			return joaat("ES_CLEAN_STALLS");
		case 6:
			return joaat("ES_ACTIVITY_BUILDING");
		default:
			break;
	}
	return 0;
}

bool func_76(var uParam0)
{
	return func_170(*uParam0, 1);
}

bool func_77(var uParam0)
{
	return func_170(*uParam0, 2);
}

float func_78()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

int func_79(var uParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_4)))
	{
		return 0;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
	{
		return 0;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1, false))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
	{
		return 1;
	}
	if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_1, &(uParam0->f_12)))
	{
		return 0;
	}
	if (bParam1)
	{
	}
	uParam0->f_2 = 0.0f;
	func_159(uParam0, 4);
	return 1;
}

void func_80(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 7)
	{
		return;
	}
	if (uParam0->f_1938[iParam1 /*29*/] > 4)
	{
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0 /*24*/].f_3 == uParam0->f_1938[iParam1 /*29*/].f_1)
			{
				func_161(uParam0, iVar0, bParam2);
			}
			iVar0++;
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1938[iParam1 /*29*/].f_1);
	}
	func_11(&(uParam0->f_1938[iParam1 /*29*/]));
}

float func_81(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 70.0f;
		case 2:
			return 45.0f;
		case 0:
			return 40.0f;
		case 3:
			return 90.0f;
		case 5:
			return 90.0f;
		case 4:
			return 50.0f;
		case 6:
			return 90.0f;
		default:
			break;
	}
	return 70.0f;
}

bool func_82(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] & iParam1) != 0;
}

bool func_83(int iParam0)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	return (!func_172() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_84(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

bool func_85(int iParam0)
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
		iVar0 = func_169(iParam0);
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

bool func_86()
{
	return Global_1898164.f_163;
}

bool func_87(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_173(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_19;
}

bool func_88()
{
	int iVar0;

	if (func_6() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_22(Global_1392915[iVar0 /*12*/].f_4))
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

bool func_89(int iParam0, bool bParam1)
{
	if (func_174(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_175(5000))
		{
			return true;
		}
	}
	switch (func_176(0))
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

bool func_90(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_91(int* iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0))
	{
		ENTITY::DETACH_ENTITY(*iParam0, true, true);
	}
	OBJECT::DELETE_OBJECT(iParam0);
}

int func_92(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_177(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_93(int iParam0, int iParam1)
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

int func_94(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar2 /*29*/])
		{
			iVar1 = uParam0->f_106[iVar2 /*29*/].f_18;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_178(iParam0);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (!MISC::IS_BIT_SET(iParam1, iVar1))
		{
			return iVar1;
		}
		iVar1 += 1 % iVar0;
		iVar2++;
	}
	return iVar1;
}

int func_96(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_179(iParam1, iParam2, iParam3);
	PED::_EQUIP_META_PED_OUTFIT(iParam0, iVar0);
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	return iVar0;
}

void func_97(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar0 /*29*/])
		{
			(*uParam1)[*uParam2] = uParam0->f_106[iVar0 /*29*/].f_19;
			*uParam2++;
		}
		iVar0++;
	}
}

bool func_98(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, var uParam5)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	if (func_180(iParam0))
	{
		return false;
	}
	func_181(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = (*uParam3)[iVar7];
		if (!func_182(&uVar0, iVar6))
		{
			iVar5--;
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if ((*uParam3)[iVar8] == iVar6)
				{
					iVar5--;
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam4)
		{
			iVar6 = (*uParam3)[iVar7];
			if (func_182(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam4)
				{
					if ((*uParam3)[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return false;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_182(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam4)
			{
				if ((*uParam3)[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*uParam5 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

char* func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "0880_A_M_M_Civ_Poor_Asian_AVOID_04";
		case 1:
			return "0944_A_M_M_Foreman_White_AVOID_04";
		case 2:
			return "0945_A_M_M_Foreman_White_AVOID_05";
		case 3:
			return "0952_A_M_M_Guard_White_AGGRESSIVE_07";
		case 4:
			return "0953_A_M_M_Guard_White_AGGRESSIVE_08";
		case 5:
			return "0954_A_M_M_Guard_White_AGGRESSIVE_09";
		case 6:
			return "0955_A_M_M_Guard_White_AGGRESSIVE_10";
		case 7:
			return "0956_A_M_M_Rancher_White_01";
		case 8:
			return "0957_A_M_M_Rancher_White_02";
		case 9:
			return "0958_A_M_M_Rancher_White_03";
		case 10:
			return "0959_A_M_M_Rancher_White_04";
		case 11:
			return "0960_A_M_M_Rancher_White_05";
		case 12:
			return "0961_A_M_M_Rancher_White_06";
		case 13:
			return "0962_A_M_M_Rancher_White_07";
		case 14:
			return "0966_A_M_M_RoughTravellers_Black_04";
		case 15:
			return "0985_S_M_M_AmbientLawRural_White_08";
		case 16:
			return "0994_S_M_M_DispatchLawRural_White_09";
		case 17:
			return "0882_A_M_M_Civ_Poor_Black_AGGRESSIVE_02";
		case 18:
			return "0989_S_M_M_DispatchLawRural_White_04";
		case 19:
			return "0847_A_F_M_Civ_Black_AVOID_02";
		case 20:
			return "0850_A_F_M_Civ_Hispanic_AVOID_03";
		case 21:
			return "0854_A_F_M_Civ_Poor_Black_AVOID_04";
		case 22:
			return "0858_A_F_M_Civ_Poor_Black_TIMID_04";
		case 23:
			return "0861_A_F_M_Civ_Poor_White_AGGRESSIVE_03";
		case 24:
			return "0868_A_F_M_Civ_Poor_White_AVOID_06";
		case 25:
			return "0876_A_F_M_Civ_White_TIMID_05";
		case 26:
			return "0702_A_M_M_RhdUpperClass_01_WHITE_02";
		case 27:
			return "0785_A_F_M_MiddleSDTownfolk_01_WHITE_01";
		case 28:
			return "0805_A_M_M_SDDockForeman_01_WHITE_01";
		case 29:
			return "0813_G_M_M_UniBraithwaites_01_WHITE_02";
		case 30:
			return "1004_S_M_M_AmbientBlWPolice_White_03";
		case 31:
			return "1011_S_M_M_DispatchPolice_White_07";
		case 32:
			return "0561_A_F_M_Prostitute_Black_05";
		case 33:
			return "0566_A_F_M_Prostitute_White_05";
		case 34:
			return "0792_A_M_M_MiddleSDTownfolk_02_BLACK_01";
		case 35:
			return "0808_S_M_M_Army_01_WHITE_03";
		case 36:
			return "0811_S_M_Y_Army_01_WHITE_03";
		case 37:
			return "0835_S_M_M_GenConductor_01_WHITE_01";
		case 38:
			return "0836_S_M_M_GenConductor_01_WHITE_02";
		case 39:
			return "0844_S_M_M_UniButchers_01_WHITE_03";
		case 40:
			return "0782_A_F_M_LowerSDTownfolk_01_WHITE_01";
		case 41:
			return "0803_A_M_O_SDUpperClass_01_WHITE_02";
		case 42:
			return "1015_A_F_M_MiddleSDTownfolk_04_WHITE_01";
		case 43:
			return "0842_S_M_M_UniButchers_01_WHITE_01";
		case 44:
			return "0843_S_M_M_UniButchers_01_WHITE_02";
		case 45:
			return "0817_A_M_M_VhtThug_01_WHITE_01";
		case 46:
			return "0818_A_M_M_VhtThug_01_WHITE_02";
		case 47:
			return "0819_A_M_M_VhtThug_01_WHITE_03";
		case 48:
			return "0429_A_M_M_StrTownfolk_01_WHITE_01";
		case 49:
			return "0594_A_M_M_Civ_Poor_White_AVOID_14";
		case 50:
			return "0595_A_M_M_Civ_White_AVOID_11";
		case 51:
			return "0644_A_M_M_Civ_Poor_White_AGGRESSIVE_19";
		case 52:
			return "0650_A_M_M_Civ_Poor_White_AGGRESSIVE_20";
		case 53:
			return "0657_A_M_M_Civ_Poor_White_AGGRESSIVE_18";
		case 54:
			return "0913_A_M_M_Civ_Poor_White_AGGRESSIVE_13";
		case 55:
			return "0130_G_M_M_UniCriminals_01_WHITE_01";
		case 56:
			return "0131_G_M_M_UniCriminals_01_WHITE_02";
		case 57:
			return "0132_G_M_M_UniCriminals_01_BLACK_01";
		case 58:
			return "0133_G_M_M_UniCriminals_01_BLACK_02";
		case 59:
			return "0134_G_M_M_UniCriminals_01_HISPANIC_01";
		case 60:
			return "0278_A_F_M_NbxWhore_01_BLACK_01";
		case 61:
			return "0894_A_M_M_Civ_Poor_Black_AVOID_09";
		case 62:
			return "0915_A_M_M_Civ_Poor_White_AGGRESSIVE_15";
		case 63:
			return "1052_G_M_M_UniGrays_01_WHITE_03";
		case 64:
			return "1053_G_M_M_UniGrays_01_WHITE_04";
		case 65:
			return "1056_G_M_M_UniCriminals_01_WHITE_03";
		case 66:
			return "1058_G_M_M_UniCriminals_01_WHITE_05";
		case 67:
			return "1059_G_M_M_UniCriminals_01_WHITE_06";
		case 68:
			return "1060_G_M_M_UniCriminals_01_WHITE_07";
		case 69:
			return "1061_G_M_M_UniCriminals_01_WHITE_08";
		case 70:
			return "1062_G_M_M_UniCriminals_01_WHITE_09";
		case 71:
			return "1063_G_M_M_UniCriminals_01_WHITE_10";
		case 72:
			return "1064_G_M_M_UniCriminals_01_BLACK_03";
		case 73:
			return "1065_G_M_M_UniCriminals_01_BLACK_04";
		case 74:
			return "1086_U_M_M_TumButcher_01";
		case 75:
			return "1093_A_M_M_TumTownfolk_01_WHITE_01";
		case 76:
			return "1094_A_M_M_TumTownfolk_02_BLACK_01";
		case 77:
			return "1097_A_F_M_TumTownfolk_01_WHITE_01";
		case 78:
			return "1098_A_F_M_TumTownfolk_02_BLACK_01";
		case 79:
			return "0135_G_M_M_UniCriminals_01_HISPANIC_02";
		case 80:
			return "0400_U_M_M_RhdGenStoreOwner_01";
		case 81:
			return "0401_U_M_M_RhdGunsmith_01";
		case 82:
			return "0477_U_M_M_ValDoctor_01";
		case 83:
			return "0478_U_M_M_ValGenStoreOwner_01";
		case 84:
			return "0479_U_M_M_ValGunsmith_01";
		case 85:
			return "1085_U_M_M_TumGunsmith_01";
		case 86:
			return "0083_U_M_O_BlWGeneralStoreOwner_01";
		case 87:
			return "0832_S_M_M_TrainStationWorker_01_WHITE_01";
		case 88:
			return "CS_ValAuctionBoss_01";
		case 89:
			return "AS_TOWNDEALER";
		case 90:
			return "JS_TOWNDEALER";
		case 91:
			return "FH_TOWNDEALER";
		case 92:
			return "MAX";
		default:
			break;
	}
	return "unknown";
}

bool func_100(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	uVar0 = 3;
	iVar4 = 0;
	func_183(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = (*uParam2)[iVar7];
		if (!func_182(&uVar0, iVar6))
		{
			iVar5--;
		}
		else
		{
			iVar8 = 0;
			while (iVar8 < iVar7)
			{
				if ((*uParam2)[iVar8] == iVar6)
				{
					iVar5--;
				}
				else
				{
					iVar8++;
				}
			}
		}
		iVar7++;
	}
	if (iVar4 > iVar5)
	{
		iVar10 = 0;
		iVar9 = (iVar4 - iVar5);
	}
	else
	{
		iVar10 = -1;
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < iParam3)
		{
			iVar6 = (*uParam2)[iVar7];
			if (func_182(&uVar0, iVar6))
			{
				iVar11 = 0;
				iVar8 = 0;
				while (iVar8 < iParam3)
				{
					if ((*uParam2)[iVar8] == iVar6)
					{
						iVar11++;
					}
					iVar8++;
				}
				if (iVar10 == -1 || iVar10 > iVar11)
				{
					iVar10 = iVar11;
					iVar9 = 1;
				}
				else if (iVar10 == iVar11)
				{
					iVar9++;
				}
			}
			iVar7++;
		}
	}
	if (iVar9 == 0)
	{
		return false;
	}
	iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar9);
	iVar13 = 0;
	iVar6 = 0;
	while (iVar6 < 92)
	{
		if (func_182(&uVar0, iVar6))
		{
			iVar11 = 0;
			iVar7 = 0;
			while (iVar7 < iParam3)
			{
				if ((*uParam2)[iVar7] == iVar6)
				{
					iVar11++;
				}
				iVar7++;
			}
			if (iVar11 == iVar10)
			{
				if (iVar13 == iVar12)
				{
					*iParam4 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

bool func_101(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam2))
	{
		return false;
	}
	if (iParam5 == 0)
	{
		if (*uParam1 == 1)
		{
			return true;
		}
	}
	*uParam1 = 1;
	uParam1->f_11 = iParam2;
	uParam1->f_13 = iParam3;
	uParam1->f_14 = 0;
	uParam1->f_18 = iParam6;
	uParam1->f_19 = iParam7;
	uParam1->f_20 = 0;
	if (bParam4)
	{
		uParam1->f_12 = iParam3;
		uParam0->f_95[iParam3] = iParam3;
		MISC::SET_BIT(&(uParam0->f_93), iParam3);
	}
	else
	{
		uParam1->f_12 = -1;
	}
	if (!PED::IS_PED_A_PLAYER(iParam2))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, true, true);
		}
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam2, joaat("REL_MINIGAME_PLAYER"));
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 453 /*PCF_0x43429291*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 130 /*PCF_DisableTalkTo*/, false);
	PED::SET_PED_CONFIG_FLAG(iParam2, 168 /*PCF_EnableShockingEvents*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 458 /*PCF_0xFD170B10*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 26 /*PCF_DisableMelee*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam2, 146 /*PCF_0x861831C4*/, false);
	PED::_SET_PED_ACTION_DISABLE_FLAG(iParam2, 0);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam2, 319488);
	if (uParam0->f_1 == 2)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam2, "Poker_NPC_Group", 0.0f);
	}
	if (bParam4)
	{
		func_184(iParam2);
		func_104(uParam1, 4);
	}
	else
	{
		func_104(uParam1, 3);
	}
	uParam0->f_92++;
	return true;
}

int func_102(var uParam0, var uParam1)
{
	int iVar0;

	switch (uParam1->f_3)
	{
		case 0:
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uParam1->f_11, uParam0->f_3, 1.0f, 20000, 2.0f, 0, 40000.0f);
			func_185(uParam1);
			break;
		case 1:
			if (func_186(uParam1->f_11, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				func_185(uParam1);
			}
			break;
		case 2:
			if (!func_186(uParam1->f_11, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (uParam0->f_2155)
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			if (func_187(uParam1->f_11, uParam0->f_3, 1) > 3.0f)
			{
				return 0;
			}
			if (uParam0->f_1 == 0 && func_180(uParam1->f_11))
			{
				iVar0 = 4;
				if (!MISC::IS_BIT_SET(uParam0->f_93, iVar0))
				{
					MISC::SET_BIT(&(uParam0->f_93), iVar0);
					uParam0->f_95[iVar0] = uParam1->f_13;
					uParam1->f_12 = iVar0;
					if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_23[uParam1->f_12 /*11*/].f_10))
					{
						func_57(uParam0, uParam1);
						return 2;
					}
					TASK::TASK_USE_SCENARIO_POINT(uParam1->f_11, uParam0->f_23[uParam1->f_12 /*11*/].f_10, 0, 0, true, false, 0, false, -1.0f, false);
					func_185(uParam1);
				}
				else
				{
					func_57(uParam0, uParam1);
					return 2;
				}
			}
			if (func_188(uParam0, ENTITY::GET_ENTITY_COORDS(uParam1->f_11, true, false), &iVar0))
			{
				MISC::SET_BIT(&(uParam0->f_93), iVar0);
				uParam0->f_95[iVar0] = uParam1->f_13;
				uParam1->f_12 = iVar0;
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_23[uParam1->f_12 /*11*/].f_10))
				{
					func_57(uParam0, uParam1);
					return 2;
				}
				TASK::TASK_USE_SCENARIO_POINT(uParam1->f_11, uParam0->f_23[uParam1->f_12 /*11*/].f_10, 0, 0, true, false, 0, false, -1.0f, false);
				func_185(uParam1);
			}
			else
			{
				func_57(uParam0, uParam1);
				return 2;
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->f_11, 0))
			{
				func_185(uParam1);
			}
			break;
		case 4:
			if (func_6() == -1 && uParam0->f_1 == 0)
			{
				if (func_112(uParam0, 4))
				{
					func_35(uParam0->f_2);
				}
				else
				{
					func_1(uParam0->f_2);
				}
			}
			func_184(uParam1->f_11);
			func_189(uParam1);
			func_104(uParam1, 4);
			return 1;
	}
	return 0;
}

int func_103(var uParam0, var uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	char* sVar7;
	int iVar8;
	int iVar9;

	iVar6 = (0 + uParam1->f_12);
	switch (uParam1->f_3)
	{
		case 0:
			if (sLocal_1.f_378 == -1)
			{
				sLocal_1.f_378 = uParam1->f_12;
			}
			if (!PED::IS_PED_MALE(uParam1->f_11))
			{
				sLocal_1.f_5[uParam1->f_12 /*62*/].f_1 = 3;
			}
			else if (sLocal_1.f_5[uParam1->f_12 /*62*/].f_1 == -1)
			{
				if (func_190())
				{
					sLocal_1.f_5[uParam1->f_12 /*62*/].f_1 = 0;
				}
				else
				{
					sLocal_1.f_5[uParam1->f_12 /*62*/].f_1 = 2;
				}
			}
			sVar7 = func_191(sLocal_1.f_5[uParam1->f_12 /*62*/].f_1);
			if (func_192(uParam0, iVar6, sVar7, "PBL_NoCardsLoop", 2))
			{
				if (sLocal_1.f_5[uParam1->f_12 /*62*/].f_59 == 0)
				{
					iVar8 = func_160(uParam0->f_2);
					if (iVar8 != -1)
					{
						iVar9 = func_193(2, Global_1392915[iVar8 /*12*/].f_10);
					}
					else
					{
						iVar9 = 100;
					}
					iVar9 += MISC::GET_RANDOM_INT_IN_RANGE((-iVar9 / 5), (iVar9 / 5));
					sLocal_1.f_5[uParam1->f_12 /*62*/].f_59 = iVar9;
				}
				ANIMSCENE::_SET_BREAKOUT_ARCHETYPE(uParam1->f_11, "PokerSeatedNoCards");
				func_185(uParam1);
			}
			break;
		case 1:
			if (func_194(uParam0, iVar6))
			{
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				func_197(uParam0, iVar6, uParam1, "Seat_01");
				if (func_198(uParam0, iVar6, vVar3, vVar0))
				{
					func_185(uParam1);
				}
			}
			break;
		case 2:
			if (func_47(uParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_104(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
	uParam0->f_3 = 0;
	func_73(&(uParam0->f_4));
}

int func_105(var uParam0)
{
	if (!func_156(uParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(uParam0->f_11))
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_11))
	{
		return 0;
	}
	if (uParam0->f_16)
	{
		return 1;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_11))
	{
		return 1;
	}
	return 0;
}

int func_106(var uParam0, var uParam1, bool bParam2)
{
	if (!func_199(uParam0, uParam1->f_11))
	{
		return 0;
	}
	if (uParam1->f_1 == 7)
	{
		return 0;
	}
	if (bParam2)
	{
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam1->f_11))
		{
		}
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam1->f_11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam1->f_11, false);
	}
	if (!uParam0->f_2155)
	{
		DECORATOR::DECOR_SET_BOOL(uParam1->f_11, "DontGrabThisPedForMinigame", true);
	}
	ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(uParam1->f_11);
	func_200(uParam0, uParam1->f_12, 1);
	func_201(uParam0, uParam1->f_20, 1);
	if (PED::IS_PED_RAGDOLL(uParam1->f_11))
	{
		func_10(uParam0, uParam1, 0, 1, 0, 1);
	}
	else
	{
		func_104(uParam1, 7);
	}
	return 1;
}

int func_107(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1->f_12;
	if (uParam0->f_2 == 27)
	{
		if (uParam0->f_2146 == 0 && sLocal_1.f_5[iVar0 /*62*/].f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2 == 30)
	{
		if (uParam0->f_90 > 10.0f && sLocal_1.f_5[iVar0 /*62*/].f_3 == 0)
		{
			return 1;
		}
	}
	else if (uParam0->f_2147 == 0 && uParam0->f_2146 == 0)
	{
		if ((uParam0->f_90 > 10.0f || uParam0->f_2144 == 0) && sLocal_1.f_5[iVar0 /*62*/].f_3 == 0)
		{
			return 1;
		}
	}
	sLocal_1.f_5[iVar0 /*62*/].f_2 += MISC::GET_FRAME_TIME();
	if (!func_112(uParam0, iVar0))
	{
		sLocal_1.f_5[iVar0 /*62*/] = 0;
	}
	switch (sLocal_1.f_5[iVar0 /*62*/])
	{
		case 1:
			func_202(uParam0, uParam1, &sLocal_1);
			break;
		case 2:
			func_203(uParam0, uParam1, &sLocal_1);
			break;
		case 5:
			func_204(uParam0, uParam1, &sLocal_1);
			break;
		case 6:
			func_205(uParam0, uParam1, &sLocal_1);
			break;
		case 3:
			func_206(uParam0, uParam1, &sLocal_1);
			break;
		case 4:
			func_207(uParam0, uParam1, &sLocal_1);
			break;
		case 7:
			if (iVar0 != sLocal_1.f_378)
			{
				func_208(uParam0, uParam1, &sLocal_1);
			}
			else
			{
				func_209(uParam0, uParam1, &sLocal_1);
			}
			break;
		case 8:
			func_210(uParam0, uParam1, &sLocal_1);
			break;
		case 9:
			func_211(uParam0, uParam1, &sLocal_1);
			break;
		case 10:
			func_212(uParam0, uParam1, &sLocal_1);
			break;
		case 12:
			func_213(uParam0, uParam1, &sLocal_1);
			break;
		case 18:
			func_214(uParam0, uParam1, &sLocal_1);
			break;
		case 19:
			func_215(uParam0, uParam1, &sLocal_1);
			break;
		case 11:
			func_216(uParam0, uParam1, &sLocal_1);
			break;
		case 14:
			func_217(uParam0, uParam1, &sLocal_1);
			break;
		case 13:
			func_218(uParam0, uParam1, &sLocal_1);
			break;
		case 16:
			func_219(uParam0, uParam1, &sLocal_1);
			break;
		case 15:
			func_220(uParam0, uParam1, &sLocal_1);
			break;
		case 17:
			func_221(uParam0, uParam1, &sLocal_1);
			break;
		case 20:
			func_222(uParam0, uParam1, &sLocal_1);
			break;
	}
	return 1;
}

int func_108(var uParam0, var uParam1)
{
	switch (uParam1->f_3)
	{
		case 0:
			TASK::CLEAR_PED_TASKS(uParam1->f_11, true, false);
			func_200(uParam0, uParam1->f_12, 0);
			func_223(uParam1->f_11);
			func_185(uParam1);
			break;
		case 1:
			func_57(uParam0, uParam1);
			func_185(uParam1);
			break;
		case 2:
			return 1;
	}
	return 0;
}

int func_109(Vector3 vParam0, float fParam3, bool bParam4)
{
	if (bParam4)
	{
		if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vParam0, joaat("WEAPON_THROWN_DYNAMITE") /* GXTEntry: "Dynamite" */, fParam3, false) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(vParam0, joaat("WEAPON_THROWN_MOLOTOV") /* GXTEntry: "Fire Bottle" */, fParam3, false))
		{
			return 1;
		}
	}
	if ((((((FIRE::IS_EXPLOSION_IN_SPHERE(25, vParam0, fParam3) || FIRE::IS_EXPLOSION_IN_SPHERE(0, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(2, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(30, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(31, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(29, vParam0, fParam3)) || FIRE::IS_EXPLOSION_IN_SPHERE(26, vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_110(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_224());
	}
}

bool func_111(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case joaat("P_WINDSORCHAIR03X"):
					return true;
				case joaat("P_WINDSORCHAIR01X"):
				case joaat("P_CHAIR38X"):
					return true;
				case joaat("P_CHAIR24X"):
				case joaat("P_CHAIR22X"):
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (iParam1 == joaat("P_CHAIR13X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR05X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR06X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_WINDSORCHAIR03X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR12X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR14X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR11X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR26X"))
			{
				return true;
			}
			break;
		case 1:
			if (iParam1 == joaat("P_CHAIR02X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOL02X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOL03X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOLWINTER01X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOLFOLDING01X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR_BARREL04B"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIRFOLDING02X"))
			{
				return true;
			}
			break;
		case 3:
			if (iParam1 == joaat("P_CHAIR06X"))
			{
				return true;
			}
			if (iParam1 == joaat("S_CRATESEAT03X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIR_CRATE02X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_STOOLFOLDING01X"))
			{
				return true;
			}
			if (iParam1 == joaat("P_CHAIRFOLDING02X"))
			{
				return true;
			}
			break;
		default:
			return true;
	}
	return false;
}

bool func_112(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return (uParam0->f_106[uParam0->f_95[iParam1] /*29*/] && uParam0->f_106[uParam0->f_95[iParam1] /*29*/].f_1 == 5);
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
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

bool func_114()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			if (Global_1934765.f_39[iVar0] != Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (Global_1934765.f_39[iVar0] != Global_1058888.f_40497[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_115(var uParam0)
{
	func_225(uParam0, uParam0->f_11 + 1);
}

void func_116(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_224());
	}
}

int func_117(int iParam0, Vector3 vParam1, int iParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Vector3 vVar5;

	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		return 0;
	}
	func_226(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_116(&iVar2, vVar5, 0.0f, 0.0f, 0.0f, (fParam6 * 2.0f), (fParam6 * 2.0f), 1.2f);
	iVar1 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (func_111(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					func_59(iVar2);
					ITEMSET::_CLEAR_ITEMSET(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_59(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

int func_118(int iParam0, Vector3 vParam1, var uParam4, var uParam5, float fParam6, int iParam7)
{
	if (!func_227(iParam0))
	{
		return 0;
	}
	if (!func_228(iParam0, vParam1, uParam4, uParam5, fParam6, iParam7, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		*fParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*fParam6, *iParam7, 0.0f, 0.0f, -0.5f) /*3*/ };
	}
	else if (iParam0 == 3)
	{
		*fParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*fParam6, *iParam7, 0.0f, 0.05f, -0.5f) /*3*/ };
	}
	return 1;
}

void func_119(var uParam0)
{
}

bool func_120(var uParam0)
{
	return true;
}

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0[4];
	int iVar5;

	iVar5 = 0;
	if (iParam0 == 3)
	{
		return joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01");
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return joaat("A_M_M_CARDGAMEPLAYERS_01");
	}
	else if (iParam0 == 1)
	{
		return joaat("A_M_M_DOMINOESPLAYERS_01");
	}
	switch (iParam1)
	{
		case 76:
			iVar0[0] = joaat("A_M_M_VALTOWNFOLK_01");
			iVar0[1] = joaat("A_M_M_VALTOWNFOLK_02");
			iVar5 = 2;
			break;
		case 105:
			iVar0[0] = joaat("A_M_M_RHDUPPERCLASS_01");
			iVar5 = 1;
			break;
		case 38:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("A_M_M_BLWLABORER_01");
				iVar0[1] = joaat("A_M_M_BLWLABORER_02");
				iVar5 = 2;
			}
			else
			{
				iVar0[0] = joaat("A_M_M_BLWUPPERCLASS_01");
				iVar5 = 1;
			}
			break;
		case 115:
			iVar0[0] = joaat("A_M_M_TUMTOWNFOLK_01");
			iVar0[1] = joaat("A_M_M_TUMTOWNFOLK_02");
			iVar5 = 2;
			break;
		case 26:
			iVar0[0] = joaat("S_M_M_STRLUMBERJACK_01");
			iVar5 = 1;
			break;
		case 5:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("A_M_M_MIDDLESDTOWNFOLK_01");
				iVar0[1] = joaat("A_M_M_MIDDLESDTOWNFOLK_02");
				iVar0[2] = joaat("A_M_M_MIDDLESDTOWNFOLK_03");
				iVar5 = 3;
			}
			else
			{
				iVar0[0] = joaat("A_M_O_SDUPPERCLASS_01");
				iVar0[1] = joaat("A_M_O_SDUPPERCLASS_01");
				iVar5 = 2;
			}
			break;
		case 92:
			iVar0[0] = joaat("A_M_M_VHTTOWNFOLK_01");
			iVar5 = 1;
			break;
		case 69:
			if (iParam0 == 1)
			{
				iVar0[0] = joaat("A_M_M_EMRFARMHAND_01");
				iVar5 = 1;
			}
			else
			{
				iVar0[0] = joaat("A_M_M_EMRFARMHAND_01");
				iVar5 = 1;
			}
			break;
		case 75:
			iVar0[0] = joaat("A_M_M_VALTOWNFOLK_01");
			iVar0[1] = joaat("A_M_M_VALTOWNFOLK_02");
			iVar0[2] = joaat("S_M_M_VALCOWPOKE_01");
			iVar5 = 3;
			break;
	}
	if (iVar5 == 0)
	{
		return 0;
	}
	else
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
		}
		if (iParam2 < iVar5)
		{
			return iVar0[iParam2];
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return joaat("S_M_M_RHDDEALER_01");
		case 5:
			return joaat("S_M_M_SDDEALER_01");
		case 26:
			return joaat("S_M_M_STRDEALER_01");
		case 76:
			return joaat("S_M_M_VALDEALER_01");
		case 92:
			return joaat("S_M_M_VHTDEALER_01");
		case 78:
			return joaat("S_M_M_ASBDEALER_01");
		case 38:
			return joaat("S_M_M_BLWDEALER_01");
		case 75:
			return joaat("S_M_M_VALDEALER_01");
		default:
			break;
	}
	return 0;
}

int func_123(int iParam0, Vector3 vParam1, float fParam4, int iParam5, Vector3 vParam6, var uParam9, int iParam10)
{
	Vector3 vVar0;
	float fVar3;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_228(iParam0, vParam1, fParam4, iParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, fVar3, vParam6) /*3*/ };
	return 1;
}

int func_124(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	*uParam3 = (fParam1 + fVar0);
	if (*uParam3 > 360.0f)
	{
		*uParam3 -= 360.0f;
	}
	if (*uParam3 < -360.0f)
	{
		*uParam3 += 360.0f;
	}
	return 1;
}

void func_125(var uParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;

	func_230(uParam0, iParam1, 0, &vVar0, &vVar3, 1);
	func_129(uParam0, 24, func_231(24, 0), vVar0, vVar3, 0, 0);
}

int func_126(int iParam0)
{
	return (62 + iParam0);
}

int func_127(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.038f, -0.0584f, 0.8029f /*3*/ };
			vVar4 = { 0.0f, -0.0001f, 11.1898f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1179f, 0.0527f, 0.8036f /*3*/ };
			vVar4 = { -0.492f, 0.7865f, 1.4459f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.0351f, 0.1703f, 0.8032f /*3*/ };
			vVar4 = { -0.0001f, -0.0002f, 19.0115f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0718f, -0.0886f, 0.8037f /*3*/ };
			vVar4 = { 0.0004f, 0.002f, 9.99f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0696f, 0.0037f, 0.8029f /*3*/ };
			vVar4 = { 0.0f, -0.0001f, -48.8102f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.0133f, 0.1285f, 0.8036f /*3*/ };
			vVar4 = { -0.492f, 0.7865f, -58.5541f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1651f, 0.0547f, 0.8032f /*3*/ };
			vVar4 = { -0.0001f, -0.0002f, -40.9885f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0408f, -0.1065f, 0.8037f /*3*/ };
			vVar4 = { 0.0004f, 0.002f, -50.0101f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.0316f, 0.0621f, 0.8029f /*3*/ };
			vVar4 = { 0.0f, -0.0001f, -108.8102f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1046f, 0.0758f, 0.8036f /*3*/ };
			vVar4 = { -0.492f, 0.7865f, -118.5541f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.1299f, -0.1156f, 0.8032f /*3*/ };
			vVar4 = { -0.0001f, -0.0002f, -100.9885f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.1126f, -0.0179f, 0.8037f /*3*/ };
			vVar4 = { 0.0004f, 0.002f, -110.0101f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.038f, 0.0584f, 0.8029f /*3*/ };
			vVar4 = { 0.0f, -0.0001f, -168.8103f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.1179f, -0.0527f, 0.8036f /*3*/ };
			vVar4 = { -0.492f, 0.7865f, -178.5541f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.0351f, -0.1703f, 0.8032f /*3*/ };
			vVar4 = { -0.0001f, -0.0002f, -160.9886f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.0718f, 0.0886f, 0.8037f /*3*/ };
			vVar4 = { 0.0004f, 0.002f, -170.0101f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0696f, -0.0037f, 0.8029f /*3*/ };
			vVar4 = { 0.0f, -0.0001f, 131.1898f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.0133f, -0.1285f, 0.8036f /*3*/ };
			vVar4 = { -0.492f, 0.7865f, 121.446f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1651f, -0.0547f, 0.8032f /*3*/ };
			vVar4 = { -0.0001f, -0.0002f, 139.0115f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.0408f, 0.1065f, 0.8037f /*3*/ };
			vVar4 = { 0.0004f, 0.002f, 129.9899f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.0316f, -0.0621f, 0.8029f /*3*/ };
			vVar4 = { 0.0f, -0.0001f, 71.1897f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1046f, -0.0758f, 0.8036f /*3*/ };
			vVar4 = { -0.492f, 0.7865f, 61.4459f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.1299f, 0.1156f, 0.8032f /*3*/ };
			vVar4 = { -0.0001f, -0.0002f, 79.0115f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.1126f, 0.0179f, 0.8037f /*3*/ };
			vVar4 = { 0.0004f, 0.002f, 69.9899f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 /*3*/ };
		*uParam4 = { vVar4 /*3*/ };
	}
	uParam3->f_2 += (BUILTIN::TO_FLOAT(iParam5) * 0.006f);
	return 1;
}

int func_128()
{
	int iVar0;

	iVar0 = joaat("P_CHIPS05X10_RHO");
	if (func_233(&iVar0, iLocal_0))
	{
		return iVar0;
	}
	return iVar0;
}

void func_129(var uParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam6, int iParam9, int iParam10)
{
	uParam0->f_281[iParam1 /*24*/] = 2;
	uParam0->f_281[iParam1 /*24*/].f_16 = { vParam3 /*3*/ };
	uParam0->f_281[iParam1 /*24*/].f_19 = { vParam6 /*3*/ };
	uParam0->f_281[iParam1 /*24*/].f_1 = iParam2;
	uParam0->f_281[iParam1 /*24*/].f_13 = iParam10;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		if (ENTITY::GET_ENTITY_MODEL(uParam0->f_281[iParam1 /*24*/].f_4) == iParam2)
		{
			if (!func_234(uParam0->f_281[iParam1 /*24*/].f_16, ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, true, false)))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_16, true, false, false, true);
			}
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_19, 2, true);
			uParam0->f_281[iParam1 /*24*/] = 5;
		}
		else
		{
			uParam0->f_281[iParam1 /*24*/] = 4;
		}
		if (uParam0->f_281[iParam1 /*24*/].f_13)
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iParam1 /*24*/].f_4, false);
		}
		return;
	}
	if (iParam9 > 0)
	{
		uParam0->f_281[iParam1 /*24*/] = 1;
		uParam0->f_281[iParam1 /*24*/].f_2 = (MISC::GET_FRAME_COUNT() + iParam9);
	}
}

void func_130(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	var uVar1[4];
	int iVar6[4];
	var uVar11[4];

	func_235(iParam2, &uVar1, &uVar11);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar6[iVar0] = func_236(uVar1[iVar0], uVar11[iVar0], 10);
		func_237(uParam0, iParam1, iVar0, uVar1[iVar0], iVar6[iVar0], 0, bParam3);
		iVar0++;
	}
}

void func_131(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam2 == 0)
	{
		iParam2 = func_231(iParam1, 0);
	}
	func_129(uParam0, iParam1, iParam2, uParam0->f_3 - Vector(0.1f, 0.0f, 0.0f), 0.0f, 0.0f, 0.0f, iParam3, iParam4);
}

bool func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_106)
	{
		return false;
	}
	if (uParam0->f_95[iParam1] == -1)
	{
		return false;
	}
	return uParam0->f_106[uParam0->f_95[iParam1] /*29*/].f_1 != 0;
}

void func_133(int iParam0, int iParam1)
{
	if (*iParam0 != iParam1)
	{
	}
	*iParam0 = iParam1;
	iParam0->f_4 = 0;
	func_73(&(iParam0->f_1));
}

void func_134(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[4];
	var uVar8[4];

	switch (iParam0->f_4)
	{
		case 0:
			func_238(&Global_1899750, uParam1->f_3 - Vector(2.0f, 0.0f, 0.0f));
			func_153(2);
			func_239(iParam0->f_378);
			func_240(1);
			func_241(iParam0);
			if (func_68() == 75)
			{
				func_242(-1801221395, 0, 0.0f, 0, 0, 0.0f, 0, 0);
				func_242(-1983417035, 1, 0.0f, 0, 0, 0.0f, 0, 0);
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (uParam1->f_106[iVar0 /*29*/].f_12 != -1)
				{
					func_243(&Global_1899750, uParam1->f_106[iVar0 /*29*/].f_11, iVar0, 0);
				}
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, &(iParam0->f_5[iVar0 /*62*/])))
					{
						return;
					}
					func_130(uParam1, iVar0, iParam0->f_5[iVar0 /*62*/].f_59, 1);
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, iParam0, iVar0))
				{
					func_138(&(iParam0->f_5[iVar0 /*62*/]), 11, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f), 0);
				}
				iVar2 = func_245(iVar0, 0);
				func_246(uParam1, iVar2, -0.25f);
				iVar2 = (62 + iVar0);
				func_246(uParam1, iVar2, -0.25f);
				iVar0++;
			}
			func_241(iParam0);
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_112(uParam1, iVar0))
				{
					if (!func_139(uParam1, &(iParam0->f_5[iVar0 /*62*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			func_138(&(iParam0->f_5[iParam0->f_378 /*62*/]), 20, 0, 0);
			func_241(iParam0);
			break;
		case 3:
			if (!func_139(uParam1, &(iParam0->f_5[iParam0->f_378 /*62*/])))
			{
				return;
			}
			if (func_50() == 2)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (uParam1->f_106[iVar0 /*29*/].f_12 != -1)
					{
						func_247(uParam1->f_1, uParam1->f_106[iVar0 /*29*/].f_11, iVar0, sLocal_1.f_5[iVar0 /*62*/].f_59, sLocal_1.f_5[iVar0 /*62*/].f_1, uParam1->f_106[iVar0 /*29*/].f_18, uParam1->f_106[iVar0 /*29*/].f_19);
					}
					else
					{
						func_247(uParam1->f_1, 0, iVar0, 0, 0, 0, 92);
					}
					func_235(sLocal_1.f_5[iVar0 /*62*/].f_59, &uVar8, &uVar3);
					iVar1 = 0;
					while (iVar1 < 4)
					{
						iVar2 = ((0 + iVar0 * 4) + iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_281[iVar2 /*24*/].f_4))
						{
							func_248(uParam1->f_1, uParam1->f_281[iVar2 /*24*/].f_4, iVar2, uVar8[iVar1], uVar3[iVar1]);
							uParam1->f_281[iVar2 /*24*/].f_4 = 0;
							func_66(uParam1, iVar2, 0);
						}
						iVar1++;
					}
					iVar0++;
				}
				iVar2 = 24;
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_281[iVar2 /*24*/].f_4))
				{
					func_248(uParam1->f_1, uParam1->f_281[iVar2 /*24*/].f_4, iVar2, 0, 0);
					uParam1->f_281[iVar2 /*24*/].f_4 = 0;
					func_66(uParam1, iVar2, 0);
				}
				func_240(3);
				func_241(iParam0);
			}
			break;
		case 4:
			func_240(4);
			func_241(iParam0);
			break;
		case 5:
			if (func_50() == 5)
			{
				func_3(uParam1, 1, 0);
				func_21(uParam1, 10);
				func_72(iParam0);
			}
			break;
	}
}

int func_135(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar1 /*29*/] && uParam0->f_106[iVar1 /*29*/].f_1 == iParam1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_136(var uParam0, var uParam1)
{
	int iVar0;

	uParam1->f_391 -= MISC::GET_FRAME_TIME();
	if (uParam1->f_391 > 0.0f)
	{
		return;
	}
	if (*uParam1 < 6)
	{
		return;
	}
	if (*uParam1 >= 14)
	{
		return;
	}
	iVar0 = func_249(uParam0, -1);
	if (iVar0 != -1)
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_106[iVar0 /*29*/].f_11))
		{
			return;
		}
		if (func_250(uParam0, uParam0->f_106[iVar0 /*29*/].f_11, "POKER_BANTER"))
		{
			uParam1->f_391 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5.0f, 20.0f);
		}
	}
}

int func_137(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		iParam1 += 1 % 6;
		if (uParam0->f_106[iParam1 /*29*/] && uParam0->f_106[iParam1 /*29*/].f_1 == 5)
		{
			return iParam1;
		}
		iVar0++;
	}
	return -1;
}

void func_138(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
	}
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	uParam0->f_4 = iParam2;
	uParam0->f_2 = 0.0f;
}

bool func_139(var uParam0, var uParam1)
{
	if (!func_112(uParam0, uParam1->f_5))
	{
		return true;
	}
	return ((uParam1->f_3 == 100 || *uParam1 == 1) || *uParam1 == 0);
}

bool func_140(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 += MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f);
				}
				iVar2 += 1 % 6;
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 8, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_141(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 += MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f);
				}
				iVar2 += 1 % 6;
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 9, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_142(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_387;
	switch (uParam0->f_4)
	{
		case 0:
			uParam0->f_389++;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					func_251(uParam0, uParam1, iVar2, fVar1);
					fVar1 += MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f);
				}
				iVar2 += 1 % 6;
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0))
				{
					if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
					{
						return false;
					}
				}
				iVar0++;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 10, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_143(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar2 = uParam0->f_388;
	switch (uParam0->f_4)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar2))
				{
					if (iVar2 == uParam0->f_388)
					{
						func_138(&(uParam0->f_5[iVar2 /*62*/]), 15, fVar1, 0);
					}
					else
					{
						func_138(&(uParam0->f_5[iVar2 /*62*/]), 16, fVar1, 0);
					}
					fVar1 += MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f);
				}
				iVar2 += 1 % 6;
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!func_139(uParam1, &(uParam0->f_5[iVar0 /*62*/])))
				{
					return false;
				}
				iVar0++;
			}
			func_241(uParam0);
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_144(var uParam0, var uParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(uParam1->f_386, iParam2))
	{
		return false;
	}
	return func_112(uParam0, iParam2);
}

bool func_145(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 0:
			if (func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				func_241(uParam0);
			}
			break;
		case 1:
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 20, 0, 0);
			func_241(uParam0);
			break;
		case 2:
			if (!func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return false;
			}
			uParam0->f_379 = uParam0->f_378;
			uParam0->f_378 = func_137(uParam1, uParam0->f_379);
			func_138(&(uParam0->f_5[uParam0->f_379 /*62*/]), 18, 0, 0);
			func_241(uParam0);
			break;
		case 3:
			if (!func_139(uParam1, &(uParam0->f_5[uParam0->f_379 /*62*/])))
			{
				return false;
			}
			func_138(&(uParam0->f_5[uParam0->f_378 /*62*/]), 19, 0, 0);
			func_241(uParam0);
			break;
		case 4:
			if (!func_139(uParam1, &(uParam0->f_5[uParam0->f_378 /*62*/])))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_146(int iParam0, int iParam1)
{
	func_242(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_147(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (Global_1899528.f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	*uParam2 = Global_1899528.f_61.f_7[iParam1];
	*uParam3 = Global_1899528.f_61.f_14[iParam1];
	*uParam4 = Global_1899528.f_61.f_21[iParam1];
	*uParam5 = Global_1899528.f_61.f_28[iParam1];
	return Global_1899528.f_61.f_134[iParam1];
}

int func_148(int iParam0, int iParam1)
{
	if (Global_1899528.f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	return Global_1899528.f_61.f_101[iParam1];
}

void func_149(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		uParam0->f_281[iParam1 /*24*/].f_4 = iParam2;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		uParam0->f_281[iParam1 /*24*/] = 5;
		uParam0->f_281[iParam1 /*24*/].f_13 = 0;
		uParam0->f_281[iParam1 /*24*/].f_1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_281[iParam1 /*24*/].f_4);
		uParam0->f_281[iParam1 /*24*/].f_16 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, true, false) /*3*/ };
		uParam0->f_281[iParam1 /*24*/].f_19 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, 2) /*3*/ };
		uParam0->f_281[iParam1 /*24*/].f_23 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_ALPHA(uParam0->f_281[iParam1 /*24*/].f_4));
		if (!DECORATOR::DECOR_EXIST_ON(uParam0->f_281[iParam1 /*24*/].f_4, "MinigameObject"))
		{
			DECORATOR::DECOR_SET_BOOL(uParam0->f_281[iParam1 /*24*/].f_4, "MinigameObject", true);
		}
	}
}

var func_150()
{
	return Global_1899528.f_61.f_5;
}

void func_151()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528.f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_152()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528.f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_153(int iParam0)
{
	Global_1899528.f_61.f_1 = iParam0;
}

void func_154(int iParam0)
{
	Global_1899528.f_61.f_2 = iParam0;
}

int func_155()
{
	return Global_1899528.f_61.f_1;
}

bool func_156(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_11))
	{
		return false;
	}
	return true;
}

bool func_157(int iParam0, Vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;

	fVar8 = (0.25f * 2.0f);
	if (!func_226(iParam0, vParam1, iParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_116(&iVar5, vVar0, 0.0f, 0.0f, 0.0f, fVar8, fVar8, 1.8f);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (func_252(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !PED::IS_PED_A_PLAYER(iVar3)))
			{
				func_59(iVar5);
				ITEMSET::_CLEAR_ITEMSET(iVar4);
				ITEMSET::DESTROY_ITEMSET(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	func_59(iVar5);
	ITEMSET::_CLEAR_ITEMSET(iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	return false;
}

bool func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return uParam0->f_1938[iParam1 /*29*/] >= 4;
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 != *uParam0)
	{
	}
	if (iParam1 == 1 || iParam1 == 4)
	{
		uParam0->f_2 = 0.0f;
	}
	*uParam0 = iParam1;
}

int func_160(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

void func_161(var uParam0, int iParam1, bool bParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_281[iParam1 /*24*/].f_5)))
	{
		return;
	}
	if (uParam0->f_281[iParam1 /*24*/].f_3 == -1)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, true, false) /*3*/ };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, 2) /*3*/ };
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_281[iParam1 /*24*/].f_3))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_281[iParam1 /*24*/].f_3, &(uParam0->f_281[iParam1 /*24*/].f_5), uParam0->f_281[iParam1 /*24*/].f_4);
		}
		if (uParam0->f_281[iParam1 /*24*/].f_15)
		{
			ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iParam1 /*24*/].f_4, false);
			uParam0->f_281[iParam1 /*24*/].f_15 = 0;
		}
		if (bParam2)
		{
			func_162(uParam0, iParam1);
		}
		else if (!ENTITY::IS_ENTITY_ATTACHED(uParam0->f_281[iParam1 /*24*/].f_4))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam1 /*24*/].f_4, true);
			ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, vVar0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, vVar3, 2, true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam1 /*24*/].f_4, false, false);
		}
	}
	uParam0->f_281[iParam1 /*24*/].f_3 = -1;
	strcpy_s(&(uParam0->f_281[iParam1 /*24*/].f_5), 64, "");
}

void func_162(var uParam0, int iParam1)
{
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam1 /*24*/].f_4, true, false);
	if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_281[iParam1 /*24*/].f_4))
	{
		func_253(uParam0->f_281[iParam1 /*24*/].f_4, 1, 1);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam1 /*24*/].f_4, false);
	ENTITY::SET_ENTITY_DYNAMIC(uParam0->f_281[iParam1 /*24*/].f_4, true);
	PHYSICS::ACTIVATE_PHYSICS(uParam0->f_281[iParam1 /*24*/].f_4);
	ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_281[iParam1 /*24*/].f_4, true);
}

void func_163(int* iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
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
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, true, true);
		}
	}
	if (bParam2)
	{
		OBJECT::ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(*iParam0);
	}
	else
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
	}
}

void func_164(var uParam0, int iParam1, int iParam2, char* sParam3)
{
	uParam0->f_23[iParam1 /*11*/].f_1 = iParam2;
	uParam0->f_23[iParam1 /*11*/].f_2 = { func_254(sParam3) /*8*/ };
}

int func_165(int iParam0, int iParam1)
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

void func_166(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0 /*2*/] = -1;
		(uParam0[iVar0 /*2*/])->f_1 = -1;
		iVar0++;
	}
	uParam0->f_23 = 0;
}

void func_167(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_78() - fParam1);
	func_255(uParam0, 1);
	func_256(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_168(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_169(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_257(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_170(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_171(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_172()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

var func_173(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

bool func_174(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

bool func_175(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_176(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_177(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_258(iParam1))
		{
			func_259(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_260(iParam0, 0, 1);
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
			func_261(iParam0, 0);
			bVar0 = true;
		}
		func_262(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_178(int iParam0)
{
	if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		return 12;
	}
	return 0;
}

int func_179(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		}
		switch (iParam1)
		{
			case 69:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_01");
					case 1:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_02");
					case 2:
						return joaat("META_OUTFIT_EMERALDRANCH_VAR_03");
					case 3:
						return 1633413521;
					case 4:
						return -216756988;
					case 5:
						return 368759504;
					default:
						break;
				}
				return joaat("META_OUTFIT_EMERALDRANCH_VAR_01");
			case 5:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
					case 1:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_02");
					case 2:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_03");
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					default:
						break;
				}
				return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
			case 38:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_BLACKWATER_VAR_01");
					case 1:
						return joaat("META_OUTFIT_BLACKWATER_VAR_02");
					case 2:
						return joaat("META_OUTFIT_BLACKWATER_VAR_03");
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					default:
						break;
				}
				return joaat("META_OUTFIT_BLACKWATER_VAR_01");
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		}
		switch (iParam1)
		{
			case 76:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VALENTINE_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VALENTINE_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VALENTINE_VAR_03");
					case 3:
						return -478015708;
					default:
						break;
				}
				return joaat("META_OUTFIT_VALENTINE_VAR_01");
			case 26:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_01");
					case 1:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_02");
					case 2:
						return joaat("META_OUTFIT_STRAWBERRY_VAR_03");
					case 3:
						return 496214832;
					default:
						break;
				}
				return joaat("META_OUTFIT_STRAWBERRY_VAR_01");
			case 92:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VANHORN_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VANHORN_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VANHORN_VAR_03");
					case 3:
						return -1887776194;
					default:
						break;
				}
				return joaat("META_OUTFIT_VANHORN_VAR_01");
		}
	}
	else if (iParam0 == 2 || iParam0 == 0)
	{
		if (iParam2 == -1)
		{
			iParam2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
		}
		switch (iParam1)
		{
			case 5:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
					case 1:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_02");
					case 2:
						return joaat("META_OUTFIT_SAINTDENIS_VAR_03");
					case 3:
						return 1371088384;
					case 4:
						return 1263868216;
					case 5:
						return 2106064285;
					case 6:
						return 1754977219;
					case 7:
						return -1726696266;
					case 8:
						return -1978394955;
					case 9:
						return -820633060;
					case 10:
						return -44073298;
					case 11:
						return -342303967;
					default:
						break;
				}
				return joaat("META_OUTFIT_SAINTDENIS_VAR_01");
			case 38:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_BLACKWATER_VAR_01");
					case 1:
						return joaat("META_OUTFIT_BLACKWATER_VAR_02");
					case 2:
						return joaat("META_OUTFIT_BLACKWATER_VAR_03");
					case 3:
						return -1139797490;
					case 4:
						return -875384429;
					case 5:
						return 436555239;
					case 6:
						return 666823002;
					case 7:
						return 4921971;
					case 8:
						return 251738079;
					case 9:
						return 478204342;
					case 10:
						return 777155929;
					case 11:
						return 1841389;
					default:
						break;
				}
				return joaat("META_OUTFIT_BLACKWATER_VAR_01");
			case 115:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_01");
					case 1:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_02");
					case 2:
						return joaat("META_OUTFIT_TUMBLEWEED_VAR_03");
					case 3:
						return -1892751910;
					case 4:
						return 1174655877;
					case 5:
						return 979024947;
					case 6:
						return -240866616;
					case 7:
						return 1469806260;
					case 8:
						return 317713758;
					case 9:
						return 1934601404;
					case 10:
						return 487194674;
					case 11:
						return -1833636986;
					default:
						break;
				}
				return joaat("META_OUTFIT_TUMBLEWEED_VAR_01");
			case 76:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VALENTINE_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VALENTINE_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VALENTINE_VAR_03");
					case 3:
						return -478015708;
					case 4:
						return -194891548;
					case 5:
						return 112776593;
					case 6:
						return 411040031;
					case 7:
						return -1387257155;
					case 8:
						return -1087322498;
					case 9:
						return 2089668521;
					case 10:
						return 1791437852;
					case 11:
						return 1426194578;
					default:
						break;
				}
				return joaat("META_OUTFIT_VALENTINE_VAR_01");
			case 92:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_VANHORN_VAR_01");
					case 1:
						return joaat("META_OUTFIT_VANHORN_VAR_02");
					case 2:
						return joaat("META_OUTFIT_VANHORN_VAR_03");
					case 3:
						return -1887776194;
					case 4:
						return -967360518;
					case 5:
						return -1276208343;
					case 6:
						return -506398995;
					case 7:
						return -815574510;
					case 8:
						return 104710086;
					case 9:
						return -1562249180;
					case 10:
						return -1812506033;
					case 11:
						return -1431009331;
					default:
						break;
				}
				return joaat("META_OUTFIT_VANHORN_VAR_01");
			case 105:
				switch (iParam2)
				{
					case 0:
						return joaat("META_OUTFIT_RHODES_VAR_01");
					case 1:
						return joaat("META_OUTFIT_RHODES_VAR_02");
					case 2:
						return joaat("META_OUTFIT_RHODES_VAR_03");
					case 3:
						return 1088279801;
					case 4:
						return 1949514659;
					case 5:
						return 772091720;
					case 6:
						return 1338340040;
					case 7:
						return -321409750;
					case 8:
						return -1233239944;
					case 9:
						return 1051251111;
					case 10:
						return -262949646;
					case 11:
						return -726499920;
					default:
						break;
				}
				return joaat("META_OUTFIT_RHODES_VAR_01");
			case 75:
				switch (iParam2)
				{
					case 0:
						return -1600439903;
					case 1:
						return 1508387900;
					case 2:
						return 1147797824;
					case 3:
						return 1947066503;
					case 4:
						return 1716995354;
					case 5:
						return 401713232;
					case 6:
						return 163056605;
					case 7:
						return 1032745865;
					case 8:
						return 793499396;
					case 9:
						return 883482182;
					case 10:
						return 1123711721;
					case 11:
						return -903083698;
					default:
						break;
				}
				return -1600439903;
		}
	}
	return 0;
}

bool func_180(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("S_M_M_BLWDEALER_01"):
		case joaat("S_M_M_VALDEALER_01"):
		case joaat("S_M_M_ASBDEALER_01"):
		case joaat("S_M_M_RHDDEALER_01"):
		case joaat("S_M_M_VHTDEALER_01"):
		case joaat("S_M_M_STRDEALER_01"):
		case joaat("S_M_M_SDDEALER_01"):
			return true;
		default:
			break;
	}
	return false;
}

int func_181(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	if (*uParam3 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam4 = 0;
	if (iParam1 == 1 && iParam0 == joaat("A_M_M_DOMINOESPLAYERS_01"))
	{
		switch (iParam2)
		{
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_BLACKWATER_VAR_01"))
				{
					func_263(uParam3, 63);
					*iParam4++;
					func_263(uParam3, 64);
					*iParam4++;
				}
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_01"):
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_02"):
			case -216756988:
			case 368759504:
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_03"):
			case 1633413521:
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_EMERALDRANCH_VAR_02"))
				{
					func_263(uParam3, 63);
					*iParam4++;
					func_263(uParam3, 64);
					*iParam4++;
				}
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
			case 1371088384:
			case 2106064285:
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 41);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
			case 1263868216:
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 61);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				return 0;
		}
	}
	else if (iParam1 == 0 && iParam0 == joaat("A_M_M_CARDGAMEPLAYERS_01"))
	{
		switch (iParam2)
		{
			case joaat("META_OUTFIT_RHODES_VAR_03"):
			case joaat("META_OUTFIT_RHODES_VAR_01"):
			case -1233239944:
			case -726499920:
			case -321409750:
			case -262949646:
			case 772091720:
			case 1051251111:
			case 1088279801:
			case 1338340040:
			case joaat("META_OUTFIT_RHODES_VAR_02"):
			case 1949514659:
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case 1841389:
			case 4921971:
			case 251738079:
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1887776194:
			case joaat("META_OUTFIT_VANHORN_VAR_03"):
			case -1562249180:
			case -1431009331:
			case -1276208343:
			case -815574510:
			case -506398995:
			case 104710086:
			case joaat("META_OUTFIT_VANHORN_VAR_01"):
			case joaat("META_OUTFIT_VANHORN_VAR_02"):
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 14);
				*iParam4++;
				func_263(uParam3, 17);
				*iParam4++;
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	else if (iParam1 == 2 && iParam0 == joaat("A_M_M_CARDGAMEPLAYERS_01"))
	{
		switch (iParam2)
		{
			case -1387257155:
			case -1087322498:
			case -478015708:
			case joaat("META_OUTFIT_VALENTINE_VAR_01"):
			case -194891548:
			case joaat("META_OUTFIT_VALENTINE_VAR_02"):
			case 112776593:
			case joaat("META_OUTFIT_VALENTINE_VAR_03"):
			case 411040031:
			case 1426194578:
			case 1791437852:
			case 2089668521:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 29);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1139797490:
			case -875384429:
			case joaat("META_OUTFIT_BLACKWATER_VAR_02"):
			case joaat("META_OUTFIT_BLACKWATER_VAR_03"):
			case 1841389:
			case 4921971:
			case 251738079:
			case joaat("META_OUTFIT_BLACKWATER_VAR_01"):
			case 436555239:
			case 478204342:
			case 666823002:
			case 777155929:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1978394955:
			case -1726696266:
			case -820633060:
			case -342303967:
			case -44073298:
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
			case 1263868216:
			case 1371088384:
			case 1754977219:
			case 2106064285:
				func_263(uParam3, 26);
				*iParam4++;
				func_263(uParam3, 28);
				*iParam4++;
				func_263(uParam3, 37);
				*iParam4++;
				func_263(uParam3, 38);
				*iParam4++;
				func_263(uParam3, 41);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				break;
			case -1600439903:
			case -903083698:
			case 163056605:
			case 401713232:
			case 793499396:
			case 883482182:
			case 1032745865:
			case 1123711721:
			case 1147797824:
			case 1508387900:
			case 1716995354:
			case 1947066503:
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 15);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -1892751910:
			case -1833636986:
			case 317713758:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_03"):
			case 979024947:
			case 1174655877:
			case 1469806260:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_01"):
				func_263(uParam3, 1);
				*iParam4++;
				func_263(uParam3, 2);
				*iParam4++;
				func_263(uParam3, 3);
				*iParam4++;
				func_263(uParam3, 4);
				*iParam4++;
				func_263(uParam3, 5);
				*iParam4++;
				func_263(uParam3, 6);
				*iParam4++;
				func_263(uParam3, 7);
				*iParam4++;
				func_263(uParam3, 8);
				*iParam4++;
				func_263(uParam3, 9);
				*iParam4++;
				func_263(uParam3, 10);
				*iParam4++;
				func_263(uParam3, 11);
				*iParam4++;
				func_263(uParam3, 12);
				*iParam4++;
				func_263(uParam3, 16);
				*iParam4++;
				func_263(uParam3, 18);
				*iParam4++;
				func_263(uParam3, 29);
				*iParam4++;
				func_263(uParam3, 35);
				*iParam4++;
				func_263(uParam3, 36);
				*iParam4++;
				func_263(uParam3, 39);
				*iParam4++;
				func_263(uParam3, 45);
				*iParam4++;
				func_263(uParam3, 46);
				*iParam4++;
				func_263(uParam3, 47);
				*iParam4++;
				func_263(uParam3, 48);
				*iParam4++;
				func_263(uParam3, 50);
				*iParam4++;
				func_263(uParam3, 51);
				*iParam4++;
				func_263(uParam3, 52);
				*iParam4++;
				func_263(uParam3, 53);
				*iParam4++;
				func_263(uParam3, 56);
				*iParam4++;
				func_263(uParam3, 63);
				*iParam4++;
				func_263(uParam3, 64);
				*iParam4++;
				func_263(uParam3, 66);
				*iParam4++;
				func_263(uParam3, 67);
				*iParam4++;
				func_263(uParam3, 68);
				*iParam4++;
				func_263(uParam3, 71);
				*iParam4++;
				func_263(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_02"):
			case 1934601404:
				func_263(uParam3, 14);
				*iParam4++;
				func_263(uParam3, 17);
				*iParam4++;
				func_263(uParam3, 34);
				*iParam4++;
				func_263(uParam3, 58);
				*iParam4++;
				func_263(uParam3, 73);
				*iParam4++;
				func_263(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

bool func_182(var uParam0, int iParam1)
{
	return MISC::_IS_BIT_FLAG_SET(uParam0, iParam1);
}

int func_183(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < ((92 + 31) / 32))
	{
		return 0;
	}
	*iParam3 = 0;
	if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01"):
				func_263(uParam2, 43);
				*iParam3++;
				func_263(uParam2, 44);
				*iParam3++;
				func_263(uParam2, 54);
				*iParam3++;
				func_263(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_263(uParam2, 43);
				*iParam3++;
				func_263(uParam2, 44);
				*iParam3++;
				func_263(uParam2, 54);
				*iParam3++;
				func_263(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("A_M_M_CARDGAMEPLAYERS_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				func_263(uParam2, 82);
				*iParam3++;
				func_263(uParam2, 84);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				break;
			case joaat("A_M_M_VALTOWNFOLK_01"):
			case joaat("A_M_M_VALTOWNFOLK_02"):
			case joaat("S_M_M_VALCOWPOKE_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				func_263(uParam2, 82);
				*iParam3++;
				func_263(uParam2, 84);
				*iParam3++;
				break;
			case joaat("U_M_M_VALGUNSMITH_01"):
				func_263(uParam2, 84);
				*iParam3++;
				break;
			case joaat("U_M_M_VALDOCTOR_01"):
				func_263(uParam2, 82);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWUPPERCLASS_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_O_BLWUPPERCLASS_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
				func_263(uParam2, 86);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWFOREMAN_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_O_SDUPPERCLASS_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				break;
			case joaat("A_M_M_RHDUPPERCLASS_01"):
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				break;
			case joaat("A_M_M_RHDFOREMAN_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				break;
			case joaat("U_M_M_RHDGENSTOREOWNER_01"):
				func_263(uParam2, 80);
				*iParam3++;
				break;
			case joaat("A_M_M_VHTTHUG_01"):
			case joaat("A_M_M_VHTTOWNFOLK_01"):
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 62);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 79);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWLABORER_01"):
			case joaat("A_M_M_BLWLABORER_02"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_M_MIDDLESDTOWNFOLK_03"):
			case joaat("A_M_M_MIDDLESDTOWNFOLK_02"):
			case joaat("A_M_M_MIDDLESDTOWNFOLK_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 26);
				*iParam3++;
				func_263(uParam2, 28);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 34);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 39);
				*iParam3++;
				func_263(uParam2, 41);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				break;
			case joaat("A_M_M_EMRFARMHAND_01"):
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				func_263(uParam2, 7);
				*iParam3++;
				func_263(uParam2, 8);
				*iParam3++;
				func_263(uParam2, 9);
				*iParam3++;
				func_263(uParam2, 10);
				*iParam3++;
				func_263(uParam2, 11);
				*iParam3++;
				func_263(uParam2, 12);
				*iParam3++;
				func_263(uParam2, 13);
				*iParam3++;
				func_263(uParam2, 14);
				*iParam3++;
				func_263(uParam2, 15);
				*iParam3++;
				func_263(uParam2, 16);
				*iParam3++;
				func_263(uParam2, 17);
				*iParam3++;
				func_263(uParam2, 18);
				*iParam3++;
				func_263(uParam2, 29);
				*iParam3++;
				func_263(uParam2, 30);
				*iParam3++;
				func_263(uParam2, 31);
				*iParam3++;
				func_263(uParam2, 35);
				*iParam3++;
				func_263(uParam2, 36);
				*iParam3++;
				func_263(uParam2, 37);
				*iParam3++;
				func_263(uParam2, 38);
				*iParam3++;
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_M_TUMTOWNFOLK_01"):
			case joaat("A_M_M_TUMTOWNFOLK_02"):
				func_263(uParam2, 45);
				*iParam3++;
				func_263(uParam2, 46);
				*iParam3++;
				func_263(uParam2, 47);
				*iParam3++;
				func_263(uParam2, 48);
				*iParam3++;
				func_263(uParam2, 49);
				*iParam3++;
				func_263(uParam2, 50);
				*iParam3++;
				func_263(uParam2, 51);
				*iParam3++;
				func_263(uParam2, 52);
				*iParam3++;
				func_263(uParam2, 53);
				*iParam3++;
				func_263(uParam2, 55);
				*iParam3++;
				func_263(uParam2, 56);
				*iParam3++;
				func_263(uParam2, 58);
				*iParam3++;
				func_263(uParam2, 61);
				*iParam3++;
				func_263(uParam2, 63);
				*iParam3++;
				func_263(uParam2, 64);
				*iParam3++;
				func_263(uParam2, 65);
				*iParam3++;
				func_263(uParam2, 66);
				*iParam3++;
				func_263(uParam2, 67);
				*iParam3++;
				func_263(uParam2, 68);
				*iParam3++;
				func_263(uParam2, 71);
				*iParam3++;
				func_263(uParam2, 73);
				*iParam3++;
				func_263(uParam2, 74);
				*iParam3++;
				func_263(uParam2, 75);
				*iParam3++;
				func_263(uParam2, 76);
				*iParam3++;
				break;
			case joaat("S_M_M_BLWDEALER_01"):
			case joaat("S_M_M_RHDDEALER_01"):
				func_263(uParam2, 87);
				*iParam3++;
				func_263(uParam2, 89);
				*iParam3++;
				func_263(uParam2, 90);
				*iParam3++;
				func_263(uParam2, 91);
				*iParam3++;
				break;
			case joaat("S_M_M_VHTDEALER_01"):
				func_263(uParam2, 62);
				*iParam3++;
				func_263(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_263(uParam2, 1);
				*iParam3++;
				func_263(uParam2, 2);
				*iParam3++;
				func_263(uParam2, 3);
				*iParam3++;
				func_263(uParam2, 4);
				*iParam3++;
				func_263(uParam2, 5);
				*iParam3++;
				func_263(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

void func_184(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "PedSeatedForMinigame", true);
}

void func_185(var uParam0)
{
	func_264(uParam0, uParam0->f_3 + 1);
}

bool func_186(int iParam0, int iParam1)
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

float func_187(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_188(var uParam0, Vector3 vParam1, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	Vector3 vVar3;

	fVar2 = -1.0f;
	*uParam4 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_94, iVar0) && !MISC::IS_BIT_SET(uParam0->f_93, iVar0))
		{
			func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iVar0, &vVar3, 0);
			fVar1 = func_265(vParam1, vVar3);
			if (fVar1 < fVar2 || fVar2 == -1.0f)
			{
				fVar2 = fVar1;
				*uParam4 = iVar0;
			}
		}
		iVar0++;
	}
	return *uParam4 != -1;
}

void func_189(var uParam0)
{
	uParam0->f_3 = 100;
}

bool func_190()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

char* func_191(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
		case 3:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_FEMALE";
		case 2:
			return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_RELAXED";
		default:
			break;
	}
	return "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_BASE";
}

bool func_192(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	func_159(&(uParam0->f_1938[iParam1 /*29*/]), 1);
	if (uParam0->f_1938[iParam1 /*29*/].f_1 == -1 || !ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1938[iParam1 /*29*/].f_1))
	{
		uParam0->f_1938[iParam1 /*29*/].f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, false, true);
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1938[iParam1 /*29*/].f_1))
		{
			return false;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1938[iParam1 /*29*/].f_1);
	}
	strcpy_s(&(uParam0->f_1938[iParam1 /*29*/].f_12), 64, sParam3);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1938[iParam1 /*29*/].f_1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
		}
		strcpy_s(&(uParam0->f_1938[iParam1 /*29*/].f_4), 64, sParam2);
		func_159(&(uParam0->f_1938[iParam1 /*29*/]), 2);
		return true;
	}
	return false;
}

int func_193(int iParam0, int iParam1)
{
	return (iParam1 / func_266(iParam0, iParam1));
}

bool func_194(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	return uParam0->f_1938[iParam1 /*29*/] == 4;
}

int func_195(var uParam0, int iParam1, float fParam2)
{
	return func_226(uParam0->f_1, uParam0->f_3, uParam0->f_6, iParam1, fParam2, 0);
}

int func_196(var uParam0, int iParam1, var uParam2)
{
	return func_267(uParam0->f_1, uParam0->f_6, iParam1, uParam2);
}

int func_197(var uParam0, int iParam1, var uParam2, char* sParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam2->f_11))
	{
		return 0;
	}
	if (!func_268(uParam0, iParam1, uParam2->f_11) && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam2->f_11, -1))
	{
		func_60(uParam0, uParam2, 0);
	}
	if (uParam2->f_1 < 4 || uParam2->f_1 > 5)
	{
		return 0;
	}
	uParam2->f_20 = iParam1;
	strcpy_s(&(uParam2->f_21), 64, sParam3);
	MISC::SET_BIT(&(uParam0->f_1938[uParam2->f_20 /*29*/].f_3), uParam2->f_13);
	if (ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, false) != uParam2->f_11)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, uParam2->f_11, 0);
	}
	return 1;
}

bool func_198(var uParam0, int iParam1, Vector3 vParam2, Vector3 vParam5)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1938[iParam1 /*29*/].f_1, false))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1938[iParam1 /*29*/].f_1, vParam2, vParam5, 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1938[iParam1 /*29*/].f_1);
		uParam0->f_1938[iParam1 /*29*/].f_20 = { uParam0->f_1938[iParam1 /*29*/].f_12 /*8*/ };
		strcpy_s(&(uParam0->f_1938[iParam1 /*29*/].f_12), 64, "");
		uParam0->f_1938[iParam1 /*29*/].f_2 = 0.0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0 /*24*/].f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iVar0 /*24*/].f_4, true);
				uParam0->f_281[iVar0 /*24*/].f_14 = 0;
				uParam0->f_281[iVar0 /*24*/].f_15 = 1;
			}
			iVar0++;
		}
		func_159(&(uParam0->f_1938[iParam1 /*29*/]), 5);
		return true;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1938[iParam1 /*29*/].f_12)))
	{
		if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_12)))
		{
			return false;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_12)))
		{
			return false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_1938[iParam1 /*29*/].f_20)))
		{
			ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_20));
		}
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_1938[iParam1 /*29*/].f_1, &(uParam0->f_1938[iParam1 /*29*/].f_12), true);
		uParam0->f_1938[iParam1 /*29*/].f_20 = { uParam0->f_1938[iParam1 /*29*/].f_12 /*8*/ };
		strcpy_s(&(uParam0->f_1938[iParam1 /*29*/].f_12), 64, "");
		uParam0->f_1938[iParam1 /*29*/].f_2 = 0.0f;
		iVar0 = 0;
		while (iVar0 < 69)
		{
			if (uParam0->f_281[iVar0 /*24*/].f_14 == 1)
			{
				ANIMSCENE::_0xC1193521E3B9FADD(uParam0->f_281[iVar0 /*24*/].f_4, true);
				uParam0->f_281[iVar0 /*24*/].f_14 = 0;
			}
			iVar0++;
		}
		func_159(&(uParam0->f_1938[iParam1 /*29*/]), 5);
		return true;
	}
	return false;
}

bool func_199(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_106[iVar0 /*29*/] && uParam0->f_106[iVar0 /*29*/].f_11 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_200(var uParam0, var uParam1, bool bParam2)
{
	if (func_269(uParam0, &sLocal_1) && bParam2)
	{
		uParam0->f_2151 = 1;
	}
	if (func_68() == 75)
	{
		func_146(-1983417035, 1);
	}
}

void func_201(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		if (uParam0->f_281[iVar0 /*24*/].f_3 == uParam0->f_1938[iParam1 /*29*/].f_1)
		{
			func_161(uParam0, iVar0, bParam2);
		}
		iVar0++;
	}
}

void func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	Vector3 vVar5;
	char* sVar8;

	iVar0 = uParam1->f_12;
	iVar1 = (0 + iVar0);
	sVar8 = func_191(uParam2->f_5[iVar0 /*62*/].f_1);
	switch (uParam1->f_3)
	{
		case 0:
			func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
			break;
		case 1:
			if (func_192(uParam0, iVar1, sVar8, "PBL_NoCardsLoop", 2))
			{
				func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
			}
			break;
		case 2:
			if (func_194(uParam0, iVar1))
			{
				func_195(uParam0, iVar0, &uVar2);
				func_196(uParam0, iVar0, &vVar5);
				func_197(uParam0, iVar1, uParam1, "Seat_01");
				if (func_198(uParam0, iVar1, uParam0->f_3, vVar5))
				{
					func_271(&(uParam2->f_5[iVar0 /*62*/]), 1);
				}
			}
			break;
	}
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar4;
	int iVar111;
	Vector3 vVar112;
	Vector3 vVar115;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	char* sVar122;

	uVar4 = 52;
	iVar118 = uParam1->f_12;
	iVar119 = (0 + iVar118);
	iVar120 = 6;
	if (iVar118 < 0 || iVar118 >= 6)
	{
		return;
	}
	sVar122 = func_191(uParam2->f_5[iVar118 /*62*/].f_1);
	switch (uParam2->f_5[iVar118 /*62*/].f_3)
	{
		case 0:
			uParam0->f_2149 = 1;
			func_272(&uVar4);
			func_273(&uVar4);
			func_166(&(uParam2->f_392));
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_166(&(uParam2->f_5[iVar0 /*62*/].f_6));
				uParam2->f_5[iVar0 /*62*/].f_30.f_24 = -1;
				func_166(&(uParam2->f_5[iVar0 /*62*/].f_30));
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_274(&uVar4, &uVar2))
				{
					func_275(&(uParam2->f_392), &uVar2);
				}
				iVar0++;
			}
			uParam2->f_388 = -1;
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (func_274(&uVar4, &uVar2))
					{
						func_275(&(uParam2->f_5[iVar0 /*62*/].f_6), &uVar2);
					}
					if (func_274(&uVar4, &uVar2))
					{
						func_275(&(uParam2->f_5[iVar0 /*62*/].f_6), &uVar2);
					}
					if (MINIGAME::_0x32A7C216344D623B(&(uParam2->f_5[iVar0 /*62*/].f_6), &(uParam2->f_392), &(uParam2->f_5[iVar0 /*62*/].f_30)))
					{
					}
					if (uParam2->f_388 != -1)
					{
						iVar1 = func_276(&(uParam2->f_5[uParam2->f_388 /*62*/].f_30), &(uParam2->f_5[iVar0 /*62*/].f_30));
						if (iVar1 == -1)
						{
							uParam2->f_388 = iVar0;
						}
					}
					else
					{
						uParam2->f_388 = iVar0;
					}
					func_130(uParam0, iVar0, uParam2->f_5[iVar0 /*62*/].f_59, 1);
				}
				iVar0++;
			}
			if (uParam2->f_388 != -1)
			{
			}
			func_277(uParam0, 0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				iVar121 = (25 + iVar0);
				func_65(uParam0, iVar121);
				iVar0++;
			}
			func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			break;
		case 1:
			func_278(uParam0, uParam2->f_378);
			if (func_192(uParam0, iVar119, sVar122, "PBL_ShuffleA", 2))
			{
				func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			}
			break;
		case 2:
			func_125(uParam0, uParam2->f_378);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_132(uParam0, iVar0))
				{
					if (func_279(&iVar111, uParam2->f_5[iVar0 /*62*/].f_6[0 /*2*/], iLocal_0, 0))
					{
						iVar121 = (32 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
					if (func_279(&iVar111, uParam2->f_5[iVar0 /*62*/].f_6[1 /*2*/], iLocal_0, 0))
					{
						iVar121 = (38 + iVar0);
						func_131(uParam0, iVar121, iVar111, 0, 1);
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (func_279(&iVar111, uParam2->f_392[iVar0 /*2*/], iLocal_0, 0))
				{
					iVar121 = (25 + iVar0);
					func_131(uParam0, iVar121, iVar111, 0, 1);
				}
				iVar0++;
			}
			func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			break;
		case 3:
			if (func_194(uParam0, iVar119) && func_47(uParam0))
			{
				func_280(uParam0, iVar119, 24, "Deck", 0);
				func_195(uParam0, uParam1->f_12, &vVar115);
				func_196(uParam0, uParam1->f_12, &vVar112);
				func_197(uParam0, iVar119, uParam1, "Seat_01");
				if (func_198(uParam0, iVar119, vVar115, vVar112))
				{
					func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
				}
			}
			break;
		case 4:
			if (func_281(uParam0, iVar119) >= 1.0f)
			{
				func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			}
			break;
		case 5:
			if (func_282(uParam0, uParam2))
			{
				func_270(&(uParam2->f_5[iVar118 /*62*/]), 1);
			}
			break;
		case 6:
			if (func_281(uParam0, iVar120) >= 1.0f || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (func_112(uParam0, iVar0))
					{
						if (iVar0 == iVar118)
						{
							func_138(&(uParam2->f_5[iVar0 /*62*/]), 7, 0, 0);
						}
						else if (!func_22(uParam0->f_8))
						{
							func_138(&(uParam2->f_5[iVar0 /*62*/]), 7, MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f), 0);
						}
						else
						{
							func_271(&(uParam2->f_5[iVar0 /*62*/]), 1);
						}
						uParam2->f_5[iVar0 /*62*/].f_57 = 1;
					}
					else
					{
						uParam2->f_5[iVar0 /*62*/].f_57 = 0;
					}
					iVar0++;
				}
			}
			break;
	}
}

void func_204(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;
	char* sVar11;

	iVar3 = uParam1->f_12;
	iVar4 = (0 + iVar3);
	if (iVar3 < 0 || iVar3 >= 6)
	{
		return;
	}
	sVar11 = func_191(uParam2->f_5[iVar3 /*62*/].f_1);
	iVar1 = func_245(iVar3, 0);
	switch (uParam2->f_5[iVar3 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar3 /*62*/].f_2 > uParam2->f_5[iVar3 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar4, sVar11, "PBL_BlindA", 2))
				{
					func_130(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[func_126(iVar3) /*24*/].f_4))
					{
						func_283(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_58, 1);
					}
					func_284(uParam0, iVar3, 0, &vVar5, &vVar8, 0, 1);
					func_65(uParam0, iVar1);
					func_129(uParam0, iVar1, func_128(), vVar5, vVar8, 0, 1);
					func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar4))
			{
				return;
			}
			func_130(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_59, 1);
			if (uParam2->f_385 == iVar3)
			{
				iVar0 = 1;
				uParam2->f_389 = iVar0;
			}
			else
			{
				iVar0 = 2;
				uParam2->f_389 = iVar0;
				uParam2->f_390 = iVar0;
			}
			uParam2->f_5[iVar3 /*62*/].f_58 += iVar0;
			uParam2->f_5[iVar3 /*62*/].f_59 -= iVar0;
			if (uParam2->f_5[iVar3 /*62*/].f_59 < 0)
			{
				uParam2->f_5[iVar3 /*62*/].f_59 = 0;
			}
			iVar2 = func_236(0, iVar0, 10);
			iVar2 = func_285(iVar2, 1, 4);
			func_286(uParam0->f_281[iVar1 /*24*/].f_4, iVar2, 4);
			func_287(uParam0, iVar1, 1);
			func_280(uParam0, iVar4, iVar1, func_288(44), 0);
			func_197(uParam0, iVar4, &(uParam0->f_106[iVar3 /*29*/]), "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar5);
			func_196(uParam0, uParam2->f_378, &vVar8);
			if (func_198(uParam0, iVar4, uParam0->f_3, vVar8))
			{
				func_289(uParam0, uParam1->f_11);
				func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
			}
			break;
		case 2:
			if (func_290(&(uParam0->f_106[iVar3 /*29*/]), "ChipsDown"))
			{
				func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar4, "BlindA"))
			{
				func_270(&(uParam2->f_5[iVar3 /*62*/]), 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar3 /*62*/].f_2 > 0.01f)
			{
				vVar5 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar1 /*24*/].f_4, true, false) /*3*/ };
				vVar8 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar1 /*24*/].f_4, 2) /*3*/ };
				func_292(uParam0, iVar3, uParam2->f_5[iVar3 /*62*/].f_58, vVar5, vVar8, 1);
				func_65(uParam0, iVar1);
				uParam2->f_5[iVar3 /*62*/].f_56 = 1;
				func_271(&(uParam2->f_5[iVar3 /*62*/]), 1);
			}
			break;
	}
}

void func_205(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	var uVar1;
	Vector3 vVar4;
	int iVar7;
	char* sVar8;

	iVar0 = uParam1->f_12;
	iVar7 = (0 + iVar0);
	if (iVar0 < 0 || iVar0 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar0 /*62*/].f_1);
	switch (uParam2->f_5[iVar0 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar0 /*62*/].f_2 > uParam2->f_5[iVar0 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_CheckA", 2))
				{
					func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar0), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar0), func_288(38), 0);
				func_195(uParam0, uParam2->f_378, &uVar1);
				func_196(uParam0, uParam2->f_378, &vVar4);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar4))
				{
					func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
					func_293(uParam0, uParam1->f_11);
				}
			}
			break;
		case 2:
			if (func_290(uParam1, "ActionDone") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar0 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_281(uParam0, iVar7) > 0.25f)
			{
				func_138(&(uParam2->f_5[iVar0 /*62*/]), 1, 0, 0);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar0 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_271(&(uParam2->f_5[iVar0 /*62*/]), 1);
			}
			break;
	}
}

void func_206(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Vector3 vVar6;
	Vector3 vVar9;
	char* sVar12;

	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191(uParam2->f_5[iVar4 /*62*/].f_1);
	iVar2 = func_245(iVar4, uParam2->f_5[iVar4 /*62*/].f_61);
	switch (uParam2->f_5[iVar4 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > uParam2->f_5[iVar4 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[func_126(iVar4) /*24*/].f_4))
					{
						func_283(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, func_128(), vVar6, vVar9, 0, 1);
					func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
			if (uParam2->f_5[iVar4 /*62*/].f_59 < iVar1)
			{
				iVar1 = uParam2->f_5[iVar4 /*62*/].f_59;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1);
			if (uParam2->f_5[iVar4 /*62*/].f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - uParam2->f_5[iVar4 /*62*/].f_58);
			}
			uParam2->f_5[iVar4 /*62*/].f_58 += iVar0;
			uParam2->f_5[iVar4 /*62*/].f_59 -= iVar0;
			iVar3 = func_236(0, iVar0, 10);
			iVar3 = func_285(iVar3, 1, 4);
			func_286(uParam0->f_281[iVar2 /*24*/].f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + uParam2->f_5[iVar4 /*62*/].f_61)), 0);
			func_197(uParam0, iVar5, &(uParam0->f_106[iVar4 /*29*/]), "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				func_289(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (func_290(&(uParam0->f_106[iVar4 /*29*/]), "ChipsDown"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > 0.01f)
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar2 /*24*/].f_4, true, false) /*3*/ };
				vVar9 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar2 /*24*/].f_4, 2) /*3*/ };
				func_292(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				uParam2->f_5[iVar4 /*62*/].f_56 = 1;
				func_271(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
	}
}

void func_207(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	Vector3 vVar6;
	Vector3 vVar9;
	char* sVar12;

	iVar1 = 5;
	iVar4 = uParam1->f_12;
	iVar5 = (0 + iVar4);
	if (iVar4 < 0 || iVar4 >= 6)
	{
		return;
	}
	sVar12 = func_191(uParam2->f_5[iVar4 /*62*/].f_1);
	iVar2 = func_245(iVar4, uParam2->f_5[iVar4 /*62*/].f_61);
	switch (uParam2->f_5[iVar4 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > uParam2->f_5[iVar4 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar5, sVar12, "PBL_BetA", 2))
				{
					func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[func_126(iVar4) /*24*/].f_4))
					{
						func_283(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, 1);
					}
					func_284(uParam0, iVar4, 0, &vVar6, &vVar9, 0, 1);
					func_65(uParam0, iVar2);
					func_129(uParam0, iVar2, func_128(), vVar6, vVar9, 0, 1);
					func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (!func_47(uParam0))
			{
				return;
			}
			if (!func_194(uParam0, iVar5))
			{
				return;
			}
			func_130(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_59, 1);
			if (uParam2->f_5[iVar4 /*62*/].f_59 < iVar1)
			{
				iVar1 = uParam2->f_5[iVar4 /*62*/].f_59;
			}
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar1);
			if (uParam2->f_5[iVar4 /*62*/].f_58 < uParam2->f_389)
			{
				iVar0 = (uParam2->f_389 - uParam2->f_5[iVar4 /*62*/].f_58);
			}
			uParam2->f_5[iVar4 /*62*/].f_58 += iVar0;
			uParam2->f_5[iVar4 /*62*/].f_59 -= iVar0;
			iVar3 = func_236(0, iVar0, 10);
			iVar3 = func_285(iVar3, 1, 4);
			func_286(uParam0->f_281[iVar2 /*24*/].f_4, iVar3, 4);
			func_287(uParam0, iVar2, 1);
			func_280(uParam0, iVar5, iVar2, func_288((44 + uParam2->f_5[iVar4 /*62*/].f_61)), 0);
			func_197(uParam0, iVar5, &(uParam0->f_106[iVar4 /*29*/]), "Seat_01");
			func_195(uParam0, uParam2->f_378, &vVar6);
			func_196(uParam0, uParam2->f_378, &vVar9);
			if (func_198(uParam0, iVar5, uParam0->f_3, vVar9))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				func_294(uParam0, uParam1->f_11);
			}
			break;
		case 2:
			if (func_290(&(uParam0->f_106[iVar4 /*29*/]), "ChipsDown"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar5, "BetA"))
			{
				func_270(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
		case 3:
			if (uParam2->f_5[iVar4 /*62*/].f_2 > 0.01f)
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar2 /*24*/].f_4, true, false) /*3*/ };
				vVar9 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar2 /*24*/].f_4, 2) /*3*/ };
				func_292(uParam0, iVar4, uParam2->f_5[iVar4 /*62*/].f_58, vVar6, vVar9, 1);
				func_65(uParam0, iVar2);
				uParam2->f_5[iVar4 /*62*/].f_56 = 1;
				func_271(&(uParam2->f_5[iVar4 /*62*/]), 1);
			}
			break;
	}
}

void func_208(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCards", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCards"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (!func_291(uParam0, iVar7, "PickupCards") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_209(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_PickupCardsDealer", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "PickupCardsDealer"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar7, "HoldCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_210(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	char* sVar11;

	iVar9 = uParam1->f_12;
	iVar10 = (0 + iVar9);
	if (iVar9 < 0 || iVar9 >= 6)
	{
		return;
	}
	sVar11 = func_191(uParam2->f_5[iVar9 /*62*/].f_1);
	switch (uParam2->f_5[iVar9 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar9 /*62*/].f_2 > uParam2->f_5[iVar9 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar10, sVar11, "PBL_Flop", 2))
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						if (func_279(&iVar8, uParam2->f_392[iVar6 /*2*/], iLocal_0, 0))
						{
							func_131(uParam0, iVar7, iVar8, 0, 1);
						}
						iVar6++;
					}
					func_270(&(uParam2->f_5[iVar9 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar10) && func_47(uParam0))
			{
				iVar6 = 0;
				while (iVar6 < 3)
				{
					iVar7 = (25 + iVar6);
					func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
					iVar6++;
				}
				iVar7 = 24;
				func_280(uParam0, iVar10, iVar7, func_288(iVar7), 0);
				func_197(uParam0, iVar10, &(uParam0->f_106[iVar9 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar10, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar9 /*62*/]), 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_380 = 1;
				func_138(&(uParam2->f_5[iVar9 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_380 = 1;
				func_271(&(uParam2->f_5[iVar9 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar9 /*62*/]), 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_380 = 1;
				func_138(&(uParam2->f_5[iVar9 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar10, "HoldCardsLoopA"))
			{
				uParam2->f_380 = 1;
				func_271(&(uParam2->f_5[iVar9 /*62*/]), 1);
			}
			break;
	}
}

void func_211(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_Turn", 2))
				{
					iVar8 = 28;
					if (func_279(&iVar9, uParam2->f_392[3 /*2*/], iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 28;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_381 = 1;
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_381 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_381 = 1;
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_381 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_212(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar10, "PBL_River", 2))
				{
					iVar8 = 29;
					if (func_279(&iVar9, uParam2->f_392[4 /*2*/], iLocal_0, 0))
					{
						func_131(uParam0, iVar8, iVar9, 0, 1);
					}
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7) && func_47(uParam0))
			{
				iVar8 = 29;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				iVar8 = 24;
				func_280(uParam0, iVar7, iVar8, func_288(iVar8), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
					if (func_190())
					{
						func_295(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (func_290(uParam1, "ActionDone"))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (!func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
				return;
			}
			if (func_291(uParam0, iVar7, "HoldCardsLoopA"))
			{
				uParam2->f_382 = 1;
				func_271(&(uParam2->f_5[iVar6 /*62*/]), 1);
			}
			break;
	}
}

void func_213(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;
	int iVar8;

	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar7 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar7 /*62*/].f_2 > uParam2->f_5[iVar7 /*62*/].f_4)
			{
				uParam2->f_5[iVar7 /*62*/].f_57 = 0;
				if (func_296(uParam0, uParam2->f_378, iVar7))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, &(uParam0->f_106[iVar7 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar1);
				func_196(uParam0, uParam1->f_12, &vVar4);
				if (func_198(uParam0, iVar8, uParam0->f_3, vVar4))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar0 = (32 + iVar7);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar0 /*24*/].f_4, true, false) /*3*/ };
				vVar4 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, 2) /*3*/ };
				func_129(uParam0, 30, func_231(30, 0), vVar1, vVar4, 0, 0);
				iVar0 = (38 + iVar7);
				vVar1 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar0 /*24*/].f_4, true, false) /*3*/ };
				vVar4 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar0 /*24*/].f_4, 2) /*3*/ };
				func_129(uParam0, 31, func_231(31, 0), vVar1, vVar4, 0, 0);
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam2->f_5[iVar7 /*62*/].f_57 = 0;
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(&(uParam2->f_5[iVar7 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_214(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_297(uParam0, iVar6, uParam2->f_378))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA"))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_215(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RecieveDeck", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, 24, func_288(24), 0);
				func_197(uParam0, iVar7, &(uParam0->f_106[iVar6 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar7, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if ((func_291(uParam0, iVar7, "NoCardsLoopA") || func_291(uParam0, iVar7, "RecieveDeckExit")) || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				if (func_190())
				{
					func_298(uParam0, uParam1->f_11);
				}
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_216(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar7 = uParam1->f_12;
	iVar8 = (0 + iVar7);
	if (iVar7 < 0 || iVar7 >= 6)
	{
		return;
	}
	switch (uParam2->f_5[iVar7 /*62*/].f_3)
	{
		case 0:
			uParam2->f_5[iVar7 /*62*/].f_57 = 0;
			if (uParam2->f_5[iVar7 /*62*/].f_2 > uParam2->f_5[iVar7 /*62*/].f_4)
			{
				if (func_299(uParam0, uParam2->f_378, iVar7))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar8))
			{
				func_280(uParam0, iVar8, (32 + iVar7), func_288(32), 0);
				func_280(uParam0, iVar8, (38 + iVar7), func_288(38), 0);
				func_197(uParam0, iVar8, &(uParam0->f_106[iVar7 /*29*/]), "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar8, vVar0, vVar3))
				{
					func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 2)
					{
						func_300(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar8, "NoCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar8, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar6 = (32 + iVar7);
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar6 /*24*/].f_4, true, false) /*3*/ };
				vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar6 /*24*/].f_4, 2) /*3*/ };
				func_129(uParam0, 30, func_231(30, 0), vVar0, vVar3, 0, 0);
				iVar6 = (38 + iVar7);
				vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_281[iVar6 /*24*/].f_4, true, false) /*3*/ };
				vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_281[iVar6 /*24*/].f_4, 2) /*3*/ };
				func_129(uParam0, 31, func_231(31, 0), vVar0, vVar3, 0, 0);
				func_270(&(uParam2->f_5[iVar7 /*62*/]), 1);
			}
			break;
		case 4:
			if (func_47(uParam0))
			{
				uParam2->f_5[iVar7 /*62*/].f_57 = 0;
				MISC::CLEAR_BIT(&(uParam2->f_386), iVar7);
				func_65(uParam0, (32 + iVar7));
				func_65(uParam0, (38 + iVar7));
				func_138(&(uParam2->f_5[iVar7 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_217(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_LossA", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_218(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_Express_WinA", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_219(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealLoss", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
					if (func_190())
					{
						func_301(uParam0, uParam1->f_11);
					}
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_220(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	char* sVar8;

	iVar6 = uParam1->f_12;
	iVar7 = (0 + iVar6);
	if (iVar6 < 0 || iVar6 >= 6)
	{
		return;
	}
	sVar8 = func_191(uParam2->f_5[iVar6 /*62*/].f_1);
	switch (uParam2->f_5[iVar6 /*62*/].f_3)
	{
		case 0:
			if (uParam2->f_5[iVar6 /*62*/].f_2 > uParam2->f_5[iVar6 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar7, sVar8, "PBL_RevealWin", 2))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar7))
			{
				func_280(uParam0, iVar7, (32 + iVar6), func_288(32), 0);
				func_280(uParam0, iVar7, (38 + iVar6), func_288(38), 0);
				func_197(uParam0, iVar7, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &vVar3);
				func_196(uParam0, uParam1->f_12, &vVar0);
				if (func_198(uParam0, iVar7, vVar3, vVar0))
				{
					func_270(&(uParam2->f_5[iVar6 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (func_291(uParam0, iVar7, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				func_138(&(uParam2->f_5[iVar6 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_221(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;

	iVar2 = uParam1->f_12;
	iVar9 = (0 + iVar2);
	switch (uParam2->f_5[iVar2 /*62*/].f_3)
	{
		case 0:
			uParam2->f_388 = iVar2;
			if (uParam2->f_5[iVar2 /*62*/].f_2 < uParam2->f_5[iVar2 /*62*/].f_4)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar1 = (62 + iVar0);
				func_65(uParam0, iVar1);
				if (func_132(uParam0, iVar0))
				{
					func_127(uParam0, iVar0, 0, &vVar3, &vVar6, 0, 1);
					func_302(uParam0, iVar1, func_128(), vVar3, vVar6);
					func_283(uParam0, iVar0, uParam2->f_5[iVar2 /*62*/].f_58, 1);
				}
				iVar0++;
			}
			if (func_303(uParam0, iVar2))
			{
				func_270(&(uParam2->f_5[iVar2 /*62*/]), 1);
			}
			break;
		case 1:
			if (func_304(uParam0, uParam2))
			{
				func_270(&(uParam2->f_5[iVar2 /*62*/]), 1);
			}
			break;
		case 2:
			if (func_291(uParam0, iVar9, "TakePotA"))
			{
				func_305(uParam0, uParam1->f_11);
				func_270(&(uParam2->f_5[iVar2 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || func_281(uParam0, iVar9) > 0.5f)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					iVar1 = func_245(iVar0, 0);
					func_246(uParam0, iVar1, -0.5f);
					iVar1 = (62 + iVar0);
					func_246(uParam0, iVar1, -0.5f);
					uParam2->f_5[iVar0 /*62*/].f_58 = 0;
					iVar0++;
				}
				func_138(&(uParam2->f_5[iVar2 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	Vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;

	iVar8 = uParam1->f_12;
	iVar9 = (0 + iVar8);
	if (iVar8 < 0 || iVar8 >= 6)
	{
		return;
	}
	sVar10 = func_191(uParam2->f_5[iVar8 /*62*/].f_1);
	switch (uParam2->f_5[iVar8 /*62*/].f_3)
	{
		case 0:
			if (uParam0->f_2149 == 0)
			{
				func_138(&(uParam2->f_5[iVar8 /*62*/]), 1, 0, 0);
				return;
			}
			if (uParam2->f_5[iVar8 /*62*/].f_2 > uParam2->f_5[iVar8 /*62*/].f_4)
			{
				if (func_192(uParam0, iVar9, sVar10, "PBL_Cleanup", 2))
				{
					func_270(&(uParam2->f_5[iVar8 /*62*/]), 1);
				}
			}
			break;
		case 1:
			if (func_194(uParam0, iVar9))
			{
				if (sLocal_1.f_380)
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
						iVar6++;
					}
				}
				else
				{
					iVar6 = 0;
					while (iVar6 < 3)
					{
						iVar7 = (25 + iVar6);
						func_287(uParam0, iVar7, 0);
						iVar6++;
					}
				}
				if (sLocal_1.f_381)
				{
					iVar7 = 28;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 28;
					func_287(uParam0, iVar7, 0);
				}
				if (sLocal_1.f_382)
				{
					iVar7 = 29;
					func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				}
				else
				{
					iVar7 = 29;
					func_287(uParam0, iVar7, 0);
				}
				iVar7 = 30;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				iVar7 = 31;
				func_280(uParam0, iVar9, iVar7, func_288(iVar7), 0);
				if (uParam2->f_5[iVar8 /*62*/].f_57 == 1)
				{
					func_280(uParam0, iVar9, (32 + iVar8), func_288(32), 0);
					func_280(uParam0, iVar9, (38 + iVar8), func_288(38), 0);
				}
				func_197(uParam0, iVar9, uParam1, "Seat_01");
				func_195(uParam0, uParam1->f_12, &uVar0);
				func_196(uParam0, uParam1->f_12, &vVar3);
				if (func_198(uParam0, iVar9, uParam0->f_3, vVar3))
				{
					func_270(&(uParam2->f_5[iVar8 /*62*/]), 1);
				}
			}
			break;
		case 2:
			if (!func_291(uParam0, iVar9, "NoCardsLoopA"))
			{
				func_270(&(uParam2->f_5[iVar8 /*62*/]), 1);
			}
			break;
		case 3:
			if (func_291(uParam0, iVar9, "NoCardsLoopA") || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_11, joaat("INTERRUPTIBLE")))
			{
				iVar6 = 0;
				while (iVar6 < 7)
				{
					iVar7 = (25 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 6)
				{
					iVar7 = (32 + iVar6);
					func_65(uParam0, iVar7);
					iVar7 = (38 + iVar6);
					func_65(uParam0, iVar7);
					iVar6++;
				}
				func_125(uParam0, iVar8);
				uParam2->f_380 = 0;
				uParam2->f_381 = 0;
				uParam2->f_382 = 0;
				uParam0->f_2149 = 0;
				func_138(&(uParam2->f_5[iVar8 /*62*/]), 1, 0, 0);
			}
			break;
	}
}

void func_223(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, "PedSeatedForMinigame");
}

char* func_224()
{
	return "unnamed";
}

void func_225(var uParam0, var uParam1)
{
	uParam0->f_11 = uParam1;
	func_73(&(uParam0->f_12));
}

bool func_226(int iParam0, Vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	Vector3 vVar0;
	var uVar3;

	if (!func_171(iParam0))
	{
		return false;
	}
	if (!func_306(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, vVar0) /*3*/ };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0.0f, 0.0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return true;
}

bool func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_228(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8)
{
	Vector3 vVar0;
	float fVar3;
	var uVar4;

	if (!func_171(iParam0))
	{
		return false;
	}
	if (!func_306(iParam0, iParam5, &vVar0))
	{
		return false;
	}
	*iParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, vVar0) /*3*/ };
	if (iParam8 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*iParam6 + Vector(0.1f, 0.0f, 0.0f), &uVar4, false))
		{
			iParam6->f_2 = uVar4;
		}
	}
	if (!func_229(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*fParam7 = (fParam4 + fVar3);
	if (*fParam7 > 360.0f)
	{
		*fParam7 -= 360.0f;
	}
	if (*fParam7 < -360.0f)
	{
		*fParam7 += 360.0f;
	}
	return true;
}

bool func_229(int iParam0, int iParam1, float fParam2)
{
	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180.0f;
					return true;
				case 1:
					*fParam2 = 120.0f;
					return true;
				case 2:
					*fParam2 = 60.0f;
					return true;
				case 3:
					*fParam2 = 0.0f;
					return true;
				case 4:
					*fParam2 = -60.0f;
					return true;
				case 5:
					*fParam2 = -120.0f;
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*fParam2 = (-112.4086f + 180.0f);
					return true;
				case 1:
					*fParam2 = (-157.4087f + 180.0f);
					return true;
				case 2:
					*fParam2 = (157.5913f + 180.0f);
					return true;
				case 3:
					*fParam2 = (112.5913f + 180.0f);
					return true;
				case 4:
					*fParam2 = 180.0f;
					return true;
				default:
					break;
			}
			return false;
		case 1:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 180.0f;
					return true;
				case 1:
					*fParam2 = 0.0f;
					return true;
				case 2:
					*fParam2 = 90.0f;
					return true;
				case 3:
					*fParam2 = 270.0f;
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*fParam2 = 90.0f;
					return true;
				case 1:
					*fParam2 = 270.0f;
					return true;
				default:
					break;
			}
			return false;
		default:
			break;
	}
	return true;
}

int func_230(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (iParam2 == 0)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.2855f, 0.6374f, 0.8006f /*3*/ };
			vVar4 = { 0.0247f, -0.0879f, 164.3123f /*3*/ };
		}
		else if (iParam1 == 1)
		{
			vVar1 = { 0.6947f, 0.0714f, 0.8006f /*3*/ };
			vVar4 = { 0.0247f, -0.0879f, 104.3123f /*3*/ };
		}
		else if (iParam1 == 2)
		{
			vVar1 = { 0.4092f, -0.5659f, 0.8006f /*3*/ };
			vVar4 = { 0.0247f, -0.0879f, 44.3123f /*3*/ };
		}
		else if (iParam1 == 3)
		{
			vVar1 = { -0.2855f, -0.6374f, 0.8006f /*3*/ };
			vVar4 = { 0.0247f, -0.0879f, -15.6877f /*3*/ };
		}
		else if (iParam1 == 4)
		{
			vVar1 = { -0.6947f, -0.0714f, 0.8006f /*3*/ };
			vVar4 = { 0.0247f, -0.0879f, -75.6877f /*3*/ };
		}
		else if (iParam1 == 5)
		{
			vVar1 = { -0.4092f, 0.5659f, 0.8006f /*3*/ };
			vVar4 = { 0.0247f, -0.0879f, -135.6877f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { -0.0088f, 0.3252f, 0.8015f /*3*/ };
		vVar4 = { 0.0f, 0.0f, 100.3871f /*3*/ };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.2772f, 0.1702f, 0.8015f /*3*/ };
		vVar4 = { 0.0f, 0.0f, 40.3871f /*3*/ };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { 0.286f, -0.155f, 0.8015f /*3*/ };
		vVar4 = { 0.0f, 0.0f, -19.6129f /*3*/ };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { 0.0088f, -0.3252f, 0.8015f /*3*/ };
		vVar4 = { 0.0f, 0.0f, -79.6129f /*3*/ };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.2772f, -0.1702f, 0.8015f /*3*/ };
		vVar4 = { 0.0f, 0.0f, -139.6129f /*3*/ };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.286f, 0.155f, 0.8015f /*3*/ };
		vVar4 = { 0.0f, 0.0f, 160.3871f /*3*/ };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	else if (bParam5)
	{
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 /*3*/ };
		*uParam4 = { vVar4 /*3*/ };
	}
	return 1;
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	struct<2> /*16*/ sVar3;

	iVar0 = iParam0;
	sVar3.f_0 = 14;
	sVar3.f_1 = 2;
	func_279(&uVar2, sVar3, iLocal_0, 0);
	switch (iVar0)
	{
		case 24:
			if (func_307(&uVar1, iLocal_0))
			{
				return uVar1;
			}
			return joaat("P_CARDSSPLIT01X");
		case 68:
			return func_128();
		case 25:
			sVar3.f_0 = 11;
			sVar3.f_1 = 0;
			if (func_279(&uVar1, sVar3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 26:
			sVar3.f_0 = 8;
			sVar3.f_1 = 2;
			if (func_279(&uVar1, sVar3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 27:
			sVar3.f_0 = 3;
			sVar3.f_1 = 1;
			if (func_279(&uVar1, sVar3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 28:
			sVar3.f_0 = 4;
			sVar3.f_1 = 0;
			if (func_279(&uVar1, sVar3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 29:
			sVar3.f_0 = 9;
			sVar3.f_1 = 3;
			if (func_279(&uVar1, sVar3, iLocal_0, 0))
			{
				return uVar1;
			}
			return uVar2;
		case 30:
			return uVar2;
		case 31:
			return uVar2;
		case 32:
			return uVar2;
		case 38:
			return uVar2;
		case 33:
			return uVar2;
		case 39:
			return uVar2;
		case 34:
			return uVar2;
		case 40:
			return uVar2;
		case 35:
			return uVar2;
		case 41:
			return uVar2;
		case 36:
			return uVar2;
		case 42:
			return uVar2;
		case 37:
			return uVar2;
		case 43:
			return uVar2;
		default:
			break;
	}
	return func_128();
}

void func_232(Vector3 vParam0, float fParam3, Vector3 vParam4, Vector3 vParam7, var uParam10, var uParam11)
{
	Vector3 vVar0;

	vVar0.x = ((vParam4.x * BUILTIN::COS(fParam3)) - (vParam4.y * BUILTIN::SIN(fParam3)));
	vVar0.f_1 = ((vParam4.x * BUILTIN::SIN(fParam3)) + (vParam4.y * BUILTIN::COS(fParam3)));
	vVar0.f_2 = vParam4.z;
	*uParam10 = { vVar0 + vParam0 /*3*/ };
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z + fParam3);
}

bool func_233(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*iParam0 = joaat("P_CHIPS_BLA01X");
			return true;
		case 1:
			*iParam0 = joaat("P_CHIPS_CAMP01X");
			return true;
		case 2:
			*iParam0 = joaat("P_CHIPS_GAR_KOR01X");
			return true;
		case 3:
			*iParam0 = joaat("P_CHIPS05X10_RHO");
			return true;
		case 4:
			*iParam0 = joaat("P_CHIPS_FLA01X");
			return true;
		case 5:
			*iParam0 = joaat("P_CHIPS_LA_BAS01X");
			return true;
		case 6:
			*iParam0 = joaat("P_CHIPS_OPI01X");
			return true;
		case 7:
			*iParam0 = joaat("P_CHIPS_VAL01X");
			return true;
		case 8:
			*iParam0 = joaat("P_CHIPS_VAL01X");
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_234(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_235(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0 = 0;
		iVar1 = 0;
		iVar3 = iVar2 + 1;
		if (iVar2 == 0)
		{
		}
		else
		{
			if (iVar3 == 6)
			{
				iVar0 = 4;
				iVar1 = 0;
			}
			if (iVar0 == 0)
			{
				if (iParam0 <= func_308(iVar2) * 4)
				{
					iVar0 = 4;
					iVar1 = 0;
				}
				else if (iParam0 <= (func_308(iVar2) * 3 + func_308(iVar3) * 1))
				{
					iVar0 = 3;
					iVar1 = 1;
				}
				else if (iParam0 <= (func_308(iVar2) * 2 + func_308(iVar3) * 2))
				{
					iVar0 = 2;
					iVar1 = 2;
				}
				else if (iParam0 <= (func_308(iVar2) * 1 + func_308(iVar3) * 3))
				{
					iVar0 = 1;
					iVar1 = 3;
				}
			}
			if (iVar0 > 0)
			{
			}
			else
			{
				iVar2++;
			}
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam1)[iVar4] = iVar2;
				}
				else
				{
					(*uParam1)[iVar4] = iVar3;
				}
				iVar4++;
			}
			iVar5 = func_309(iParam0, (iVar0 * func_308(iVar2)));
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 < iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar0);
					if (iVar4 < (iVar5 % iVar0))
					{
						(*uParam2)[iVar4]++;
					}
				}
				iVar4++;
			}
			iVar5 = (iParam0 - iVar5);
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (iVar4 >= iVar0)
				{
					(*uParam2)[iVar4] = (iVar5 / iVar1);
					if (iVar4 - iVar0) < (iVar5 % iVar1)
					{
						(*uParam2)[iVar4]++;
					}
				}
				iVar4++;
			}
		}
	}
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	fVar0 = (BUILTIN::TO_FLOAT(func_308(iParam0)) / BUILTIN::TO_FLOAT(10));
	iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / fVar0));
	if (iParam2 != -1 && iVar1 > iParam2)
	{
		iVar1 = iParam2;
	}
	return iVar1;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	iVar6 = func_310(iParam1, iParam2);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_284(uParam0, iParam1, iParam2, &vVar0, &vVar3, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iVar6 /*24*/].f_4))
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iVar6 /*24*/].f_4, vVar0, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iVar6 /*24*/].f_4, vVar3, 2, true);
		func_311(uParam0->f_281[iVar6 /*24*/].f_4, iParam4, iParam5);
		func_312(uParam0->f_281[iVar6 /*24*/].f_4, iParam3);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar6 /*24*/].f_4, bParam6);
	}
	else
	{
		func_302(uParam0, iVar6, func_128(), vVar0, vVar3);
		func_311(uParam0->f_281[iVar6 /*24*/].f_4, iParam4, iParam5);
		func_312(uParam0->f_281[iVar6 /*24*/].f_4, iParam3);
	}
}

void func_238(var uParam0, Vector3 vParam1)
{
	uParam0->f_11 = { vParam1 /*3*/ };
}

void func_239(var uParam0)
{
	Global_1899528.f_61.f_5 = uParam0;
}

void func_240(int iParam0)
{
	Global_1899528.f_61 = iParam0;
}

void func_241(int iParam0)
{
	func_313(iParam0, iParam0->f_4 + 1);
}

void func_242(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_314(iParam0, 0, 0);
	if (func_315(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_316(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_317(iParam0, 1);
			}
			else
			{
				func_318(iParam0, 1);
			}
		}
		else
		{
			func_319(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_320())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

int func_243(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (MISC::IS_BIT_SET(uParam0->f_22, iParam2))
		{
			return 1;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	MISC::SET_BIT(&(uParam0->f_22), iParam2);
	MISC::CLEAR_BIT(&(uParam0->f_23), iParam2);
	return 1;
}

bool func_244(var uParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_BIT_SET(iParam1->f_386, iParam2))
	{
		return false;
	}
	if (!iParam1->f_5[iParam2 /*62*/].f_57)
	{
		return false;
	}
	return func_112(uParam0, iParam2);
}

int func_245(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (44 + iParam0);
		case 1:
			return (50 + iParam0);
		case 2:
			return (56 + iParam0);
		default:
			break;
	}
	return (44 + iParam0);
}

void func_246(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 69)
	{
		return;
	}
	if (uParam0->f_281[iParam1 /*24*/] != 5)
	{
		uParam0->f_281[iParam1 /*24*/].f_22 = 0.0f;
	}
	else
	{
		uParam0->f_281[iParam1 /*24*/].f_22 = fParam2;
	}
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1899528.f_61.f_1 = uParam0;
	if (iParam2 < 6)
	{
		Global_1899528.f_61.f_134[iParam2] = iParam1;
		Global_1899528.f_61.f_7[iParam2] = iParam3;
		Global_1899528.f_61.f_14[iParam2] = iParam4;
		Global_1899528.f_61.f_21[iParam2] = iParam5;
		Global_1899528.f_61.f_28[iParam2] = iParam6;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

void func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1899528.f_61.f_1 = uParam0;
	if (iParam2 < 32)
	{
		Global_1899528.f_61.f_101[iParam2] = iParam1;
		Global_1899528.f_61.f_35[iParam2] = iParam3;
		Global_1899528.f_61.f_68[iParam2] = iParam4;
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
	}
}

int func_249(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		if (iVar1 != iParam1)
		{
			if (uParam0->f_106[iVar1 /*29*/] && uParam0->f_106[iVar1 /*29*/].f_1 == 5)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_250(var uParam0, int iParam1, char* sParam2)
{
	if (uParam0->f_2145 == 0)
	{
		return false;
	}
	return func_321(iParam1, sParam2, joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
}

var func_251(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	if (iParam2 == uParam0->f_388)
	{
		func_138(&(uParam0->f_5[iParam2 /*62*/]), 3, iParam3, 0);
		uParam0->f_5[iParam2 /*62*/].f_55 = 3;
		return uParam0->f_5[iParam2 /*62*/].f_55;
	}
	switch (iVar2)
	{
		case 0:
			func_138(&(uParam0->f_5[iParam2 /*62*/]), 3, iParam3, 0);
			uParam0->f_5[iParam2 /*62*/].f_55 = 3;
			return uParam0->f_5[iParam2 /*62*/].f_55;
		case 1:
			func_138(&(uParam0->f_5[iParam2 /*62*/]), 6, iParam3, 0);
			uParam0->f_5[iParam2 /*62*/].f_55 = 0;
			return uParam0->f_5[iParam2 /*62*/].f_55;
		case 2:
			func_138(&(uParam0->f_5[iParam2 /*62*/]), 4, iParam3, 0);
			uParam0->f_5[iParam2 /*62*/].f_55 = 2;
			return uParam0->f_5[iParam2 /*62*/].f_55;
		case 3:
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (func_244(uParam1, uParam0, iVar0) && iVar0 != iParam2)
				{
					if (uParam0->f_5[iVar0 /*62*/] != 12 && uParam0->f_5[iVar0 /*62*/] != 11)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
			if (iVar1 >= 2 && iParam2 != uParam0->f_378)
			{
				func_138(&(uParam0->f_5[iParam2 /*62*/]), 11, iParam3, 0);
				uParam0->f_5[iParam2 /*62*/].f_55 = 4;
				return uParam0->f_5[iParam2 /*62*/].f_55;
			}
			break;
	}
	func_138(&(uParam0->f_5[iParam2 /*62*/]), 6, iParam3, 0);
	uParam0->f_5[iParam2 /*62*/].f_55 = 0;
	return uParam0->f_5[iParam2 /*62*/].f_55;
}

bool func_252(int iParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];

	if (func_322(iParam1))
	{
		return false;
	}
	if (func_323(iParam1))
	{
		return true;
	}
	if (iParam0 == 2)
	{
		if (!PED::IS_PED_MALE(iParam1))
		{
			return false;
		}
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_POKER_PLAYER")))
			{
				return true;
			}
			if (PED::IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_POKER_CAMP_PLAYER")))
			{
				return true;
			}
			if (PED::IS_PED_USING_SCENARIO_HASH(iParam1, joaat("PROP_HUMAN_SEAT_CHAIR")))
			{
				return true;
			}
		}
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam1, -1))
		{
			return true;
		}
		if (func_324(iParam1))
		{
			return true;
		}
		if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_a", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_b", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, "mini_games@poker_mg@base", "no_cards_idle_c", 1)) && !(TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1) && TASK::_GET_TASK_MOVE_NETWORK_ID(iParam1) == joaat("TASKMOVEPOKER")))
		{
			return false;
		}
	}
	else if (iParam0 == 1)
	{
		if (PED::_0xBD0E4F52F6D95242(iParam1))
		{
			return false;
		}
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_DOMINOES_PLAYER")))
			{
				return true;
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			strcpy_s(&cVar1, 64, "mini_games@dominoes@enter_exit@player_0");
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return true;
			}
			strcpy_s(&cVar1, 64, "mini_games@dominoes@game@player_0");
			StringIntConCat(&cVar1, iVar0, 64);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam1, &cVar1, "player_00_idle", 1))
			{
				return true;
			}
			iVar0++;
		}
		if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam1))
		{
			return TASK::_GET_TASK_MOVE_NETWORK_ID(iParam1) == joaat("SCRIPT_MINI_GAME_DOMINOES");
		}
		return func_324(iParam1);
	}
	else if (iParam0 == 0)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iParam1, 0))
		{
			if (PED::IS_PED_USING_SCENARIO_HASH(iParam1, joaat("MINIGAME_BLACKJACK_PLAYER")))
			{
				return true;
			}
		}
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam1, -1))
		{
			return true;
		}
		return func_324(iParam1);
	}
	return true;
}

void func_253(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

struct<8> /*64*/ func_254(char* sParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, sParam0);
	return cVar0;
}

void func_255(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_256(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_257(int iParam0)
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

bool func_258(int iParam0)
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

void func_259(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_325(iParam0, iParam1))
		{
			if (func_326(iParam0, iParam1))
			{
				if (func_327(iParam0, iParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_328(iParam0);
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

void func_260(int iParam0, int iParam1, bool bParam2)
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

void func_261(int iParam0, bool bParam1)
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

void func_262(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1.0f);
	}
}

void func_263(var uParam0, int iParam1)
{
	MISC::_SET_BIT_FLAG(uParam0, iParam1);
}

void func_264(var uParam0, var uParam1)
{
	uParam0->f_3 = uParam1;
	func_73(&(uParam0->f_4));
}

float func_265(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_266(int iParam0, int iParam1)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;

	switch (iParam0)
	{
		case 0:
			iVar0[0] = 1;
			iVar0[1] = 5;
			iVar0[2] = 10;
			iVar0[3] = 50;
			iVar0[4] = 100;
			iVar0[5] = 500;
			iVar11 = 6;
			iVar12 = 100;
			break;
		case 2:
		default:
			iVar0[0] = 1;
			iVar0[1] = 2;
			iVar0[2] = 5;
			iVar0[3] = 10;
			iVar0[4] = 20;
			iVar0[5] = 50;
			iVar0[6] = 100;
			iVar0[7] = 200;
			iVar0[8] = 500;
			iVar11 = 9;
			iVar12 = 100;
			break;
	}
	iVar13 = (iVar11 - 1);
	while (iVar13 >= 0)
	{
		if ((iParam1 / iVar0[iVar13]) >= iVar12 && (iParam1 % iVar0[iVar13]) == 0)
		{
		}
		else
		{
			iVar13--;
		}
	}
	if (iVar13 < 0)
	{
		iVar13 = 0;
	}
	uVar14 = iVar0[iVar13];
	return uVar14;
}

int func_267(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;
	float fVar1;

	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_229(iParam0, iParam2, &fVar0))
	{
		return 0;
	}
	fVar1 = (fParam1 + fVar0);
	if (fVar1 > 360.0f)
	{
		fVar1 -= 360.0f;
	}
	if (fVar1 < -360.0f)
	{
		fVar1 += 360.0f;
	}
	*uParam3 = { 0.0f, 0.0f, fVar1 /*3*/ };
	return 1;
}

bool func_268(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_1938[iParam1 /*29*/] > 4)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			return false;
		}
		return ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iParam2, uParam0->f_1938[iParam1 /*29*/].f_1);
	}
	return false;
}

bool func_269(var uParam0, var uParam1)
{
	if (!uParam0->f_2149)
	{
		return false;
	}
	return (*uParam1 >= 3 && *uParam1 <= 13);
}

void func_270(var uParam0, int iParam1)
{
	uParam0->f_3++;
	uParam0->f_2 = 0.0f;
	if (iParam1 == 0)
	{
	}
}

void func_271(var uParam0, int iParam1)
{
	uParam0->f_3 = 100;
	uParam0->f_2 = 0.0f;
	if (iParam1 == 0)
	{
	}
}

void func_272(var uParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar3 = 0;
		while (iVar3 < 15)
		{
			if (iVar3 >= 2)
			{
				sVar0.f_1 = iVar2;
				sVar0.f_0 = iVar3;
				*(uParam0[iVar4 /*2*/]) = { sVar0 /*2*/ };
				iVar4++;
			}
			iVar3++;
		}
		iVar2++;
	}
	uParam0->f_105 = 0;
	uParam0->f_106 = iVar4;
}

void func_273(var uParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_106);
			sVar0 = { *(uParam0[iVar2 /*2*/]) /*2*/ };
			*(uParam0[iVar2 /*2*/]) = { *(uParam0[iVar3 /*2*/]) /*2*/ };
			*(uParam0[iVar3 /*2*/]) = { sVar0 /*2*/ };
			iVar2++;
		}
		iVar4++;
	}
}

bool func_274(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return false;
	}
	*uParam1 = { *(uParam0[uParam0->f_105 /*2*/]) /*2*/ };
	uParam0->f_105++;
	return true;
}

int func_275(var uParam0, var uParam1)
{
	if (func_329(uParam0, *uParam1))
	{
		return 0;
	}
	if (uParam0->f_23 == 11)
	{
		return 0;
	}
	*(uParam0[uParam0->f_23 /*2*/]) = { *uParam1 /*2*/ };
	uParam0->f_23++;
	return 1;
}

int func_276(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_24 == uParam1->f_24)
	{
		iVar0 = 0;
		while (iVar0 < func_309(5, func_309(uParam0->f_23, uParam1->f_23)))
		{
			if ((*uParam0)[iVar0 /*2*/] > (*uParam1)[iVar0 /*2*/])
			{
				return 1;
			}
			else if ((*uParam0)[iVar0 /*2*/] < (*uParam1)[iVar0 /*2*/])
			{
				return -1;
			}
			iVar0++;
		}
		return 0;
	}
	if (uParam0->f_24 > uParam1->f_24)
	{
		return 1;
	}
	if (uParam0->f_24 < uParam1->f_24)
	{
		return -1;
	}
	return 0;
}

void func_277(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 69)
	{
		func_161(uParam0, iVar0, bParam1);
		iVar0++;
	}
}

bool func_278(var uParam0, int iParam1)
{
	char cVar0[32];

	cVar0 = { func_330(uParam0, iParam1) /*4*/ };
	return func_192(uParam0, 6, "SCRIPT@MINI_GAME@POKER@PREPOSTGAME_DEAL", &cVar0, 2);
}

bool func_279(int iParam0, struct<2> /*16*/ sParam1, int iParam3, bool bParam4)
{
	switch (iParam3)
	{
		case 0:
			switch (sParam1.f_1)
			{
				case 3:
					switch (sParam1.f_0)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 1:
					switch (sParam1.f_0)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_D01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_D01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_D01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_D01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_D01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_D01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_D01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_D01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_D01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_D01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_D01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_D01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_D01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 0:
					switch (sParam1.f_0)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_H01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_H01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_H01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_H01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_H01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_H01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_H01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_H01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_H01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_H01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_H01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_H01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_H01X_BLA");
							return true;
						default:
							break;
					}
					break;
				case 2:
					switch (sParam1.f_0)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_S01X_BLA");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_S01X_BLA");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_S01X_BLA");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_S01X_BLA");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_S01X_BLA");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_S01X_BLA");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_S01X_BLA");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_S01X_BLA");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_S01X_BLA");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_S01X_BLA");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_S01X_BLA");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_S01X_BLA");
							return true;
						case 14:
							*iParam0 = joaat("P_CRD_A_S01X_BLA");
							return true;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (sParam1.f_1)
			{
				case 3:
					switch (sParam1.f_0)
					{
						case 2:
							*iParam0 = joaat("P_CRD_2_C01X_CAMP");
							return true;
						case 3:
							*iParam0 = joaat("P_CRD_3_C01X_CAMP");
							return true;
						case 4:
							*iParam0 = joaat("P_CRD_4_C01X_CAMP");
							return true;
						case 5:
							*iParam0 = joaat("P_CRD_5_C01X_CAMP");
							return true;
						case 6:
							*iParam0 = joaat("P_CRD_6_C01X_CAMP");
							return true;
						case 7:
							*iParam0 = joaat("P_CRD_7_C01X_CAMP");
							return true;
						case 8:
							*iParam0 = joaat("P_CRD_8_C01X_CAMP");
							return true;
						case 9:
							*iParam0 = joaat("P_CRD_9_C01X_CAMP");
							return true;
						case 10:
							*iParam0 = joaat("P_CRD_10_C01X_CAMP");
							return true;
						case 11:
							*iParam0 = joaat("P_CRD_J_C01X_CAMP");
							return true;
						case 12:
							*iParam0 = joaat("P_CRD_Q_C01X_CAMP");
							return true;
						case 13:
							*iParam0 = joaat("P_CRD_K_C01X_CAMP");
							return true;
							*iParam0 = joaat("P_CRD_A_C01X_CAMP");
							return true;
							Jump @2103; // curOff = 1365
							switch (sParam1.f_0)
							{
								case 2:
									*iParam0 = joaat("P_CRD_2_D01X_CAMP");
									return true;
								case 3:
									*iParam0 = joaat("P_CRD_3_D01X_CAMP");
									return true;
								case 4:
									*iParam0 = joaat("P_CRD_4_D01X_CAMP");
									return true;
								case 5:
									*iParam0 = joaat("P_CRD_5_D01X_CAMP");
									return true;
								case 6:
									*iParam0 = joaat("P_CRD_6_D01X_CAMP");
									return true;
								case 7:
									*iParam0 = joaat("P_CRD_7_D01X_CAMP");
									return true;
								case 8:
									*iParam0 = joaat("P_CRD_8_D01X_CAMP");
									return true;
								case 9:
									*iParam0 = joaat("P_CRD_9_D01X_CAMP");
									return true;
								case 10:
									*iParam0 = joaat("P_CRD_10_D01X_CAMP");
									return true;
								case 11:
									*iParam0 = joaat("P_CRD_J_D01X_CAMP");
									return true;
								case 12:
									*iParam0 = joaat("P_CRD_Q_D01X_CAMP");
									return true;
								case 13:
									*iParam0 = joaat("P_CRD_K_D01X_CAMP");
									return true;
								case 14:
									*iParam0 = joaat("P_CRD_A_D01X_CAMP");
									return true;
								default:
									break;
							}
							Jump @2103; // curOff = 1610
							switch (sParam1.f_0)
							{
								case 2:
									*iParam0 = joaat("P_CRD_2_H01X_CAMP");
									return true;
								case 3:
									*iParam0 = joaat("P_CRD_3_H01X_CAMP");
									return true;
								case 4:
									*iParam0 = joaat("P_CRD_4_H01X_CAMP");
									return true;
								case 5:
									*iParam0 = joaat("P_CRD_5_H01X_CAMP");
									return true;
								case 6:
									*iParam0 = joaat("P_CRD_6_H01X_CAMP");
									return true;
								case 7:
									*iParam0 = joaat("P_CRD_7_H01X_CAMP");
									return true;
								case 8:
									*iParam0 = joaat("P_CRD_8_H01X_CAMP");
									return true;
								case 9:
									*iParam0 = joaat("P_CRD_9_H01X_CAMP");
									return true;
								case 10:
									*iParam0 = joaat("P_CRD_10_H01X_CAMP");
									return true;
								case 11:
									*iParam0 = joaat("P_CRD_J_H01X_CAMP");
									return true;
								case 12:
									*iParam0 = joaat("P_CRD_Q_H01X_CAMP");
									return true;
								case 13:
									*iParam0 = joaat("P_CRD_K_H01X_CAMP");
									return true;
								case 14:
									*iParam0 = joaat("P_CRD_A_H01X_CAMP");
									return true;
								default:
									break;
							}
							Jump @2103; // curOff = 1855
							switch (sParam1.f_0)
							{
								case 2:
									*iParam0 = joaat("P_CRD_2_S01X_CAMP");
									return true;
								case 3:
									*iParam0 = joaat("P_CRD_3_S01X_CAMP");
									return true;
								case 4:
									*iParam0 = joaat("P_CRD_4_S01X_CAMP");
									return true;
								case 5:
									*iParam0 = joaat("P_CRD_5_S01X_CAMP");
									return true;
								case 6:
									*iParam0 = joaat("P_CRD_6_S01X_CAMP");
									return true;
								case 7:
									*iParam0 = joaat("P_CRD_7_S01X_CAMP");
									return true;
								case 8:
									*iParam0 = joaat("P_CRD_8_S01X_CAMP");
									return true;
								case 9:
									*iParam0 = joaat("P_CRD_9_S01X_CAMP");
									return true;
								case 10:
									*iParam0 = joaat("P_CRD_10_S01X_CAMP");
									return true;
								case 11:
									*iParam0 = joaat("P_CRD_J_S01X_CAMP");
									return true;
								case 12:
									*iParam0 = joaat("P_CRD_Q_S01X_CAMP");
									return true;
								case 13:
									*iParam0 = joaat("P_CRD_K_S01X_CAMP");
									return true;
								case 14:
									*iParam0 = joaat("P_CRD_A_S01X_CAMP");
									return true;
								default:
									break;
							}
							Jump @9231; // curOff = 2103
							switch (sParam1.f_1)
							{
								case 3:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_GK");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_GK");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_GK");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_GK");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_GK");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_GK");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_GK");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_GK");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_GK");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_GK");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_GK");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_GK");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_GK");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_GK");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_GK");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_GK");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; // curOff = 3120
							switch (sParam1.f_1)
							{
								case 3:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_RHO");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_RHO");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_RHO");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_RHO");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_RHO");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_RHO");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_RHO");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_RHO");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_RHO");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_RHO");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_RHO");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_RHO");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_RHO");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_RHO");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_RHO");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_RHO");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; // curOff = 4137
							switch (sParam1.f_1)
							{
								case 3:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_RRS");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_RRS");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_RRS");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_RRS");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_RRS");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_RRS");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_RRS");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_RRS");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_RRS");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_RRS");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_RRS");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_RRS");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_RRS");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_RRS");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_RRS");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_RRS");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; // curOff = 5154
							switch (sParam1.f_1)
							{
								case 3:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_STD_LABASTILLE");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_STD_LABASTILLE");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_STD_LABASTILLE");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_STD_LABASTILLE");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_STD_LABASTILLE");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_STD_LABASTILLE");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_STD_LABASTILLE");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_STD_LABASTILLE");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_STD_LABASTILLE");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_STD_LABASTILLE");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_STD_LABASTILLE");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_STD_LABASTILLE");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_STD_LABASTILLE");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; // curOff = 6171
							switch (sParam1.f_1)
							{
								case 3:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_STD_OPIUM");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_STD_OPIUM");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_STD_OPIUM");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_STD_OPIUM");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_STD_OPIUM");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_STD_OPIUM");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_STD_OPIUM");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_STD_OPIUM");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_STD_OPIUM");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_STD_OPIUM");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_STD_OPIUM");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_STD_OPIUM");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_STD_OPIUM");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; // curOff = 7187
							switch (sParam1.f_1)
							{
								case 3:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_VAL");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_VAL");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_VAL");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_VAL");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_VAL");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_VAL");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_VAL");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_VAL");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_VAL");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_VAL");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_VAL");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_VAL");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_VAL");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_VAL");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_VAL");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_VAL");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; // curOff = 8204
							switch (sParam1.f_1)
							{
								case 3:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_C01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_C01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_C01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_C01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_C01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_C01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_C01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_C01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_C01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_C01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_C01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_C01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_C01X_VAN");
											return true;
										default:
											break;
									}
									break;
								case 1:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_D01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_D01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_D01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_D01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_D01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_D01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_D01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_D01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_D01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_D01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_D01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_D01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_D01X_VAN");
											return true;
										default:
											break;
									}
									break;
								case 0:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_H01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_H01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_H01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_H01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_H01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_H01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_H01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_H01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_H01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_H01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_H01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_H01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_H01X_VAN");
											return true;
										default:
											break;
									}
									break;
								case 2:
									switch (sParam1.f_0)
									{
										case 2:
											*iParam0 = joaat("P_CRD_2_S01X_VAN");
											return true;
										case 3:
											*iParam0 = joaat("P_CRD_3_S01X_VAN");
											return true;
										case 4:
											*iParam0 = joaat("P_CRD_4_S01X_VAN");
											return true;
										case 5:
											*iParam0 = joaat("P_CRD_5_S01X_VAN");
											return true;
										case 6:
											*iParam0 = joaat("P_CRD_6_S01X_VAN");
											return true;
										case 7:
											*iParam0 = joaat("P_CRD_7_S01X_VAN");
											return true;
										case 8:
											*iParam0 = joaat("P_CRD_8_S01X_VAN");
											return true;
										case 9:
											*iParam0 = joaat("P_CRD_9_S01X_VAN");
											return true;
										case 10:
											*iParam0 = joaat("P_CRD_10_S01X_VAN");
											return true;
										case 11:
											*iParam0 = joaat("P_CRD_J_S01X_VAN");
											return true;
										case 12:
											*iParam0 = joaat("P_CRD_Q_S01X_VAN");
											return true;
										case 13:
											*iParam0 = joaat("P_CRD_K_S01X_VAN");
											return true;
										case 14:
											*iParam0 = joaat("P_CRD_A_S01X_VAN");
											return true;
										default:
											break;
									}
									break;
							}
							Jump @9231; // curOff = 9221
							return false;
							switch (iParam3)
							{
								case 0:
									*iParam0 = joaat("P_CRD_01X_BLA");
									return false;
								case 1:
									*iParam0 = joaat("P_CRD_01X_CAMP");
									return false;
								case 2:
									*iParam0 = joaat("P_CRD_01X_GK");
									return false;
								case 3:
									*iParam0 = joaat("P_CRD_01X_RHO");
									return false;
								case 4:
									*iParam0 = joaat("P_CRD_01X_RRS");
									return false;
								case 5:
									*iParam0 = joaat("P_CRD_01X_STD_LABASTILLE");
									return false;
								case 6:
									*iParam0 = joaat("P_CRD_01X_STD_OPIUM");
									return false;
								case 7:
									*iParam0 = joaat("P_CRD_01X_VAL");
									return false;
								case 8:
									*iParam0 = joaat("P_CRD_01X_VAN");
									return false;
								default:
									break;
							}
							return false;
							if (bParam4)
							{
							}
							return false;
						}

void func_280(var uParam0, int iParam1, int iParam2, char* sParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (iParam2 < 0 || iParam2 >= 69)
	{
		return;
	}
	if (uParam0->f_1938[iParam1 /*29*/] < 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam2 /*24*/].f_4))
	{
		return;
	}
	if (uParam0->f_281[iParam2 /*24*/].f_3 != -1 && uParam0->f_281[iParam2 /*24*/].f_3 != uParam0->f_1938[iParam1 /*29*/].f_1)
	{
		func_161(uParam0, iParam2, 0);
	}
	uParam0->f_281[iParam2 /*24*/].f_3 = uParam0->f_1938[iParam1 /*29*/].f_1;
	strcpy_s(&(uParam0->f_281[iParam2 /*24*/].f_5), 64, sParam3);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam2 /*24*/].f_4, false, false);
	if (!ENTITY::IS_ENTITY_ATTACHED(uParam0->f_281[iParam2 /*24*/].f_4))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam2 /*24*/].f_4, true);
	}
	if (bParam4)
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, &sVar0, false, 0, 2))
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam2 /*24*/].f_4, sVar0, true, false, false, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam2 /*24*/].f_4, sVar0.f_3, 2, true);
		}
	}
	uParam0->f_281[iParam2 /*24*/].f_14 = 1;
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1938[iParam1 /*29*/].f_1, sParam3, uParam0->f_281[iParam2 /*24*/].f_4, 0);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iParam2 /*24*/].f_4, true);
}

float func_281(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return 0.0f;
	}
	if (uParam0->f_1938[iParam1 /*29*/] == 5)
	{
		return uParam0->f_1938[iParam1 /*29*/].f_2;
	}
	if (uParam0->f_1938[iParam1 /*29*/] == 6)
	{
		return 1.0f;
	}
	return 0.0f;
}

bool func_282(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;

	iVar0 = 6;
	if (!func_194(uParam0, iVar0))
	{
		return false;
	}
	if (!func_132(uParam0, uParam1->f_378))
	{
		uParam1->f_378 += 1 % 6;
		return false;
	}
	iVar9 = (uParam1->f_378 + 1 % 6);
	if (!func_47(uParam0))
	{
		return false;
	}
	uParam1->f_386 = 0;
	uParam1->f_391 = MISC::GET_RANDOM_FLOAT_IN_RANGE(3.0f, 10.0f);
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar9))
		{
			sVar2 = func_288((32 + iVar1));
			func_280(uParam0, iVar0, (32 + iVar9), sVar2, 0);
			sVar2 = func_288((38 + iVar1));
			func_280(uParam0, iVar0, (38 + iVar9), sVar2, 0);
			func_130(uParam0, iVar9, uParam1->f_5[iVar9 /*62*/].f_59, 1);
			MISC::SET_BIT(&(uParam1->f_386), iVar9);
			uParam1->f_5[iVar9 /*62*/].f_57 = 0;
		}
		else
		{
			uParam1->f_5[iVar9 /*62*/].f_57 = 0;
		}
		iVar9 += 1 % 6;
		iVar1++;
	}
	sVar2 = func_288(24);
	func_280(uParam0, iVar0, 24, sVar2, 0);
	func_197(uParam0, iVar0, &(uParam0->f_106[uParam1->f_378 /*29*/]), "Plr");
	func_195(uParam0, uParam1->f_378, &vVar3);
	func_196(uParam0, uParam1->f_378, &vVar6);
	return func_198(uParam0, iVar0, vVar3, vVar6);
}

void func_283(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_331(iParam2);
	func_332(uParam0, iParam1, iVar0, func_309(iParam2, 4), 0, bParam3);
}

int func_284(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.2469f, 0.657f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2508f, 0.605f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.2875f, 0.6661f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3201f, 0.623f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4455f, 0.5423f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -60.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3985f, 0.5197f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -60.0f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.4331f, 0.582f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -60.0f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3795f, 0.5888f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -60.0f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.6924f, -0.1147f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -120.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.6493f, -0.0852f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -120.0f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7206f, -0.084f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -120.0f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.6996f, -0.0343f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -120.0f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.2469f, -0.657f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -180.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2508f, -0.605f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -180.0f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2875f, -0.6661f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -180.0f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3201f, -0.623f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -180.0f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 4)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.4455f, -0.5423f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 120.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.3985f, -0.5197f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 120.0f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.4331f, -0.582f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 120.0f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.3795f, -0.5888f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 120.0f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 5)
	{
		if (iParam2 == 0)
		{
			vVar1 = { -0.6924f, 0.1147f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 60.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.6493f, 0.0852f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 60.0f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7206f, 0.084f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 60.0f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.6996f, 0.0343f, 0.804f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 60.0f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return 0;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return 0;
	}
	if (bParam6)
	{
		func_232(uParam0->f_3, uParam0->f_6, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 /*3*/ };
		*uParam4 = { vVar4 /*3*/ };
	}
	uParam3->f_2 += (BUILTIN::TO_FLOAT(iParam5) * 0.006f);
	return 1;
}

int func_285(int iParam0, int iParam1, int iParam2)
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

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_331(iParam1);
	func_311(iParam0, func_309(iParam1, iParam2), 0);
	func_312(iParam0, iVar0);
}

void func_287(var uParam0, int iParam1, bool bParam2)
{
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iParam1 /*24*/].f_4, bParam2);
}

char* func_288(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 24:
			return "Deck";
		case 25:
			return "Board_Card_01";
		case 26:
			return "Board_Card_02";
		case 27:
			return "Board_Card_03";
		case 28:
			return "Board_Card_04";
		case 29:
			return "Board_Card_05";
		case 30:
			return "Board_Card_06";
		case 31:
			return "Board_Card_07";
		case 68:
			return "Chips_Prop";
		case 32:
			return "Seat_01_Card_01";
		case 38:
			return "Seat_01_Card_02";
		case 33:
			return "Seat_02_Card_01";
		case 39:
			return "Seat_02_Card_02";
		case 34:
			return "Seat_03_Card_01";
		case 40:
			return "Seat_03_Card_02";
		case 35:
			return "Seat_04_Card_01";
		case 41:
			return "Seat_04_Card_02";
		case 36:
			return "Seat_05_Card_01";
		case 42:
			return "Seat_05_Card_02";
		case 37:
			return "Seat_06_Card_01";
		case 43:
			return "Seat_06_Card_02";
		case 44:
			return "Seat_01_Chips_A";
		case 50:
			return "Seat_01_Chips_B";
		case 56:
			return "Seat_01_Chips_C";
		case 45:
			return "Seat_02_Chips_A";
		case 51:
			return "Seat_02_Chips_B";
		case 57:
			return "Seat_02_Chips_C";
		case 46:
			return "Seat_03_Chips_A";
		case 52:
			return "Seat_03_Chips_B";
		case 58:
			return "Seat_03_Chips_C";
		case 47:
			return "Seat_04_Chips_A";
		case 53:
			return "Seat_04_Chips_B";
		case 59:
			return "Seat_04_Chips_C";
		case 48:
			return "Seat_05_Chips_A";
		case 54:
			return "Seat_05_Chips_B";
		case 60:
			return "Seat_05_Chips_C";
		case 49:
			return "Seat_06_Chips_A";
		case 55:
			return "Seat_06_Chips_B";
		case 61:
			return "Seat_06_Chips_C";
		case 0:
			return "Seat_01_Stack_01";
		case 1:
			return "Seat_01_Stack_02";
		case 2:
			return "Seat_01_Stack_03";
		case 3:
			return "Seat_01_Stack_04";
		case 4:
			return "Seat_02_Stack_01";
		case 5:
			return "Seat_02_Stack_02";
		case 6:
			return "Seat_02_Stack_03";
		case 7:
			return "Seat_02_Stack_04";
		case 8:
			return "Seat_03_Stack_01";
		case 9:
			return "Seat_03_Stack_02";
		case 10:
			return "Seat_03_Stack_03";
		case 11:
			return "Seat_03_Stack_04";
		case 12:
			return "Seat_04_Stack_01";
		case 13:
			return "Seat_04_Stack_02";
		case 14:
			return "Seat_04_Stack_03";
		case 15:
			return "Seat_04_Stack_04";
		case 16:
			return "Seat_05_Stack_01";
		case 17:
			return "Seat_05_Stack_02";
		case 18:
			return "Seat_05_Stack_03";
		case 19:
			return "Seat_05_Stack_04";
		case 20:
			return "Seat_06_Stack_01";
		case 21:
			return "Seat_06_Stack_02";
		case 22:
			return "Seat_06_Stack_03";
		case 23:
			return "Seat_06_Stack_04";
		case 62:
			return "Seat_01_BetStack_A";
		case 63:
			return "Seat_02_BetStack_A";
		case 64:
			return "Seat_03_BetStack_A";
		case 65:
			return "Seat_04_BetStack_A";
		case 66:
			return "Seat_05_BetStack_A";
		case 67:
			return "Seat_06_BetStack_A";
		default:
			break;
	}
	return "";
}

bool func_289(var uParam0, int iParam1)
{
	if (func_190())
	{
		return func_250(uParam0, iParam1, "MINIGAME_YES");
	}
	return func_250(uParam0, iParam1, "MINIGAME_PLACE_BID");
}

bool func_290(var uParam0, char* sParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_11))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_11, MISC::GET_HASH_KEY(sParam1));
}

bool func_291(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 7)
	{
		return false;
	}
	if (uParam0->f_1938[iParam1 /*29*/] == 5)
	{
		return ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_1938[iParam1 /*29*/].f_1, sParam2, true);
	}
	return false;
}

void func_292(var uParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam6, int iParam9)
{
	int iVar0;

	iVar0 = func_331(iParam2);
	func_333(uParam0, iParam1, iVar0, vParam3, vParam6, func_309(iParam2, 4), 0, iParam9);
}

bool func_293(var uParam0, int iParam1)
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			return func_250(uParam0, iParam1, "POKER_CALL");
		case 1:
			return func_250(uParam0, iParam1, "MINIGAME_YES");
		case 2:
			return func_250(uParam0, iParam1, "VOCAL_FX_RESPOND");
		default:
			break;
	}
	return false;
}

bool func_294(var uParam0, int iParam1)
{
	if (func_190())
	{
		return func_250(uParam0, iParam1, "MINIGAME_RAISE");
	}
	return func_250(uParam0, iParam1, "MINIGAME_PLACE_BID");
}

bool func_295(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_DELIBERATING");
}

bool func_296(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 -= 6;
	}
	sVar0 = func_191(sLocal_1.f_5[iParam2 /*62*/].f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_ReturnTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_297(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	iVar1 = (0 + iParam1);
	iVar2 = (iParam2 - iParam1);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 -= 6;
	}
	sVar0 = func_191(sLocal_1.f_5[iParam1 /*62*/].f_1);
	switch (iVar2 + 1)
	{
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_PassDeckTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_298(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "GENERIC_THANKS");
}

bool func_299(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;

	iVar1 = (0 + iParam2);
	iVar2 = (iParam1 - iParam2);
	if (iVar2 < 0)
	{
		iVar2 += 6;
	}
	if (iVar2 >= 6)
	{
		iVar2 -= 6;
	}
	sVar0 = func_191(sLocal_1.f_5[iParam2 /*62*/].f_1);
	switch (iVar2 + 1)
	{
		case 1:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo01", 2);
		case 2:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo02", 2);
		case 3:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo03", 2);
		case 4:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo04", 2);
		case 5:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo05", 2);
		case 6:
			return func_192(uParam0, iVar1, sVar0, "PBL_FoldTo06", 2);
		default:
			break;
	}
	return false;
}

bool func_300(var uParam0, int iParam1)
{
	if (func_190())
	{
		return func_250(uParam0, iParam1, "POKER_FOLD");
	}
	return func_250(uParam0, iParam1, "MINIGAME_NO");
}

bool func_301(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_LOSS_SMALL");
}

void func_302(var uParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam6)
{
	uParam0->f_281[iParam1 /*24*/] = 5;
	uParam0->f_281[iParam1 /*24*/].f_16 = { vParam3 /*3*/ };
	uParam0->f_281[iParam1 /*24*/].f_19 = { vParam6 /*3*/ };
	uParam0->f_281[iParam1 /*24*/].f_1 = iParam2;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_281[iParam1 /*24*/].f_4) && ENTITY::GET_ENTITY_MODEL(uParam0->f_281[iParam1 /*24*/].f_4) == iParam2)
	{
		ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_16, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_19, 2, true);
		uParam0->f_281[iParam1 /*24*/] = 5;
		return;
	}
	STREAMING::REQUEST_MODEL(iParam2, false);
	while (!STREAMING::HAS_MODEL_LOADED(uParam0->f_281[iParam1 /*24*/].f_1))
	{
		BUILTIN::WAIT(0);
	}
	uParam0->f_281[iParam1 /*24*/].f_4 = OBJECT::CREATE_OBJECT(uParam0->f_281[iParam1 /*24*/].f_1, uParam0->f_281[iParam1 /*24*/].f_16, false, true, false, false, true);
	ENTITY::SET_ENTITY_COORDS(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_16, true, false, false, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_281[iParam1 /*24*/].f_4, uParam0->f_281[iParam1 /*24*/].f_19, 2, true);
	uParam0->f_281[iParam1 /*24*/] = 5;
	uParam0->f_281[iParam1 /*24*/].f_23 = 255.0f;
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_281[iParam1 /*24*/].f_1);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_281[iParam1 /*24*/].f_4, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_281[iParam1 /*24*/].f_4, true);
}

bool func_303(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = (0 + iParam1);
	sVar1 = func_191(sLocal_1.f_5[iParam1 /*62*/].f_1);
	return func_192(uParam0, iVar0, sVar1, "PBL_TakePotA", 2);
}

bool func_304(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	Vector3 vVar4;
	Vector3 vVar7;
	int iVar10;

	iVar2 = uParam1->f_388;
	iVar10 = (0 + uParam1->f_388);
	if (!func_47(uParam0))
	{
		return false;
	}
	if (!func_194(uParam0, iVar10))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_132(uParam0, iVar2))
		{
			iVar0 = func_126(iVar2);
			sVar3 = func_288((44 + iVar1));
			func_280(uParam0, iVar10, iVar0, sVar3, 0);
		}
		iVar2 += 1 % 6;
		iVar1++;
	}
	sVar3 = func_334(0);
	func_197(uParam0, iVar10, &(uParam0->f_106[uParam1->f_388 /*29*/]), sVar3);
	func_195(uParam0, uParam1->f_388, &vVar4);
	func_196(uParam0, uParam1->f_388, &vVar7);
	return func_198(uParam0, iVar10, vVar4, vVar7);
}

bool func_305(var uParam0, int iParam1)
{
	return func_250(uParam0, iParam1, "MINIGAME_VOCALFX_WIN_SMALL");
}

bool func_306(int iParam0, int iParam1, var uParam2)
{
	float fVar0;

	switch (iParam0)
	{
		case 2:
			if (iParam1 < 0 || iParam1 >= 6)
			{
				return false;
			}
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.008654f, 1.171513f, 0.4999996f /*3*/ };
					return true;
				case 1:
					*uParam2 = { 1.018887f, 0.5782621f, 0.4999996f /*3*/ };
					return true;
				case 2:
					*uParam2 = { 1.010233f, -0.5932513f, 0.4999996f /*3*/ };
					return true;
				case 3:
					*uParam2 = { -0.008654f, -1.171513f, 0.4999996f /*3*/ };
					return true;
				case 4:
					*uParam2 = { -1.018887f, -0.5782621f, 0.4999996f /*3*/ };
					return true;
				case 5:
					*uParam2 = { -1.010233f, 0.5932513f, 0.4999996f /*3*/ };
					return true;
				default:
					break;
			}
			return true;
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { Vector(50.0f, -7.9116f, 112.5219f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
					return true;
				case 1:
					*uParam2 = { Vector(50.0f, -73.55062f, 45.94575f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
					return true;
				case 2:
					*uParam2 = { Vector(50.0f, -72.85871f, -47.61618f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
					return true;
				case 3:
					*uParam2 = { Vector(50.0f, -6.31211f, -113.1842f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
					return true;
				case 4:
					*uParam2 = { Vector(50.0f, 82.1513f, 0.8654f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
					return true;
				default:
					break;
			}
			return false;
		case 1:
			fVar0 = 0.98f;
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 0.0f, 0.66f, fVar0 /*3*/ };
					return true;
				case 1:
					*uParam2 = { 0.0f, -0.66f, fVar0 /*3*/ };
					return true;
				case 2:
					*uParam2 = { 0.66f, 0.0f, fVar0 /*3*/ };
					return true;
				case 3:
					*uParam2 = { -0.66f, 0.0f, fVar0 /*3*/ };
					return true;
				default:
					break;
			}
			return false;
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1.0f, 0.0f, 0.0f /*3*/ };
					return true;
				case 1:
					*uParam2 = { 1.0f, 0.0f, 0.0f /*3*/ };
					return true;
				default:
					break;
			}
			return true;
		default:
			break;
	}
	return true;
}

bool func_307(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("P_CARDSSPLIT01X_BLA");
			return true;
		case 1:
			*uParam0 = joaat("P_CARDSSPLIT01X_CAMP");
			return true;
		case 2:
			*uParam0 = joaat("P_CARDSSPLIT01X_GK");
			return true;
		case 3:
			*uParam0 = joaat("P_CARDSSPLIT01X_RHO");
			return true;
		case 4:
			*uParam0 = joaat("P_CARDSSPLIT01X_RRS");
			return true;
		case 5:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_LABASTILLE");
			return true;
		case 6:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_OPIUM");
			return true;
		case 7:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAL");
			return true;
		case 8:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAN");
			return true;
		default:
			break;
	}
	return false;
	return false;
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 30;
		case 2:
			return 75;
		case 3:
			return 175;
		case 4:
			return 625;
		case 5:
			return 1000;
		default:
			break;
	}
	return 30;
}

int func_309(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_310(int iParam0, int iParam1)
{
	return ((0 + (4 * iParam0)) + iParam1);
}

void func_311(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (iVar1 >= iParam2 && iVar1 < (iParam2 + iParam1))
		{
			fVar0 = 0.0f;
		}
		else
		{
			fVar0 = 1.0f;
		}
		switch (iVar1)
		{
			case 0:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip01_Ctrl", fVar0);
				break;
			case 1:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip02_Ctrl", fVar0);
				break;
			case 2:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip03_Ctrl", fVar0);
				break;
			case 3:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip04_Ctrl", fVar0);
				break;
			case 4:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip05_Ctrl", fVar0);
				break;
			case 5:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip06_Ctrl", fVar0);
				break;
			case 6:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip07_Ctrl", fVar0);
				break;
			case 7:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip08_Ctrl", fVar0);
				break;
			case 8:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip09_Ctrl", fVar0);
				break;
			case 9:
				ENTITY::_0x669655FFB29EF1A9(iParam0, 2, "Chip10_Ctrl", fVar0);
				break;
		}
		iVar1++;
	}
}

void func_312(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 3);
			break;
		case 1:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 18);
			break;
		case 2:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 21);
			break;
		case 3:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 24);
			break;
		case 4:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 27);
			break;
		case 5:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 15);
			break;
		default:
			break;
	}
}

void func_313(int iParam0, var uParam1)
{
	iParam0->f_4 = uParam1;
	func_73(&(iParam0->f_1));
}

int func_314(int iParam0, bool bParam1, bool bParam2)
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

bool func_315(int iParam0)
{
	if (func_335(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_316(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_317(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_318(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_319(int iParam0, bool bParam1)
{
	if (func_315(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_320()
{
	return true;
}

bool func_321(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	return func_336(iParam0, &sVar0);
}

bool func_322(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return true;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return true;
	}
	if (PED::_IS_PED_COWERING(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (PED::IS_PED_LASSOED(iParam0) || PED::IS_PED_HOGTIED(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_FLEEING(iParam0))
	{
		return true;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90.0f) || ENTITY::IS_ENTITY_UPSIDEDOWN(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_FALLING_OVER(iParam0) || PED::IS_PED_FALLING(iParam0))
	{
		return true;
	}
	if (TASK::IS_PED_GETTING_UP(iParam0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return true;
	}
	if (PED::GET_PED_IS_GRAPPLING(iParam0) || PED::GET_PED_IS_BEING_GRAPPLED(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_IN_COVER(iParam0, false, false))
	{
		return true;
	}
	if (PED::IS_PED_DIVING(iParam0))
	{
		return true;
	}
	if (PED::GET_PED_IS_DOING_COMBAT_ROLL(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return true;
	}
	return false;
}

bool func_323(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "PedSeatedForMinigame"))
	{
		return DECORATOR::DECOR_GET_BOOL(iParam0, "PedSeatedForMinigame");
	}
	return false;
}

bool func_324(int iParam0)
{
	Vector3 vVar0[3];
	Vector3 vVar10;
	float fVar13;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return true;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90.0f))
	{
		return false;
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(iParam0))
	{
		return false;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return false;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0.0f, 0.0f, 0.0f) /*3*/ };
	if ((vVar10.z - vVar0[2 /*3*/].f_2) > 0.7f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0.0f, 0.0f, 0.0f) /*3*/ };
	fVar13 = func_337(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0.0f, 0.0f, 0.0f) /*3*/ };
	fVar13 = func_337(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

bool func_325(int iParam0, int iParam1)
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

bool func_326(int iParam0, int iParam1)
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

bool func_327(int iParam0, int iParam1)
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
	if (!func_325(iParam0, iVar0))
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

void func_328(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_329(var uParam0, struct<2> /*16*/ sParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_23)
	{
		if ((*uParam0)[iVar0 /*2*/] == sParam1.f_0 && (uParam0[iVar0 /*2*/])->f_1 == sParam1.f_1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> /*32*/ func_330(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[32];
	int iVar5;

	strcpy_s(&cVar1, 32, "PBL_");
	iVar5 = (iParam1 + 1 % 6);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_132(uParam0, iVar5))
		{
			StringIntConCat(&cVar1, iVar0 + 1, 32);
		}
		iVar5 += 1 % 6;
		iVar0++;
	}
	return cVar1;
}

int func_331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 <= func_308(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return (6 - 1);
}

void func_332(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	iVar6 = func_126(iParam1);
	if (iVar6 >= uParam0->f_281)
	{
		return;
	}
	func_127(uParam0, iParam1, 0, &vVar0, &vVar3, 0, 1);
	func_302(uParam0, iVar6, func_128(), vVar0, vVar3);
	func_311(uParam0->f_281[iVar6 /*24*/].f_4, iParam3, iParam4);
	func_312(uParam0->f_281[iVar6 /*24*/].f_4, iParam2);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar6 /*24*/].f_4, bParam5);
}

void func_333(var uParam0, int iParam1, int iParam2, Vector3 vParam3, Vector3 vParam6, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;

	iVar0 = func_126(iParam1);
	if (iVar0 >= uParam0->f_281)
	{
		return;
	}
	func_302(uParam0, iVar0, func_128(), vParam3, vParam6);
	func_311(uParam0->f_281[iVar0 /*24*/].f_4, iParam9, iParam10);
	func_312(uParam0->f_281[iVar0 /*24*/].f_4, iParam2);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_281[iVar0 /*24*/].f_4, bParam11);
}

char* func_334(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 0:
			return "Seat_01";
		case 1:
			return "Seat_02";
		case 2:
			return "Seat_03";
		case 3:
			return "Seat_04";
		case 4:
			return "Seat_05";
		case 5:
			return "Seat_06";
		case 6:
			return "Plr";
		default:
			break;
	}
	return "";
}

bool func_335(int iParam0)
{
	return iParam0 != 0;
}

bool func_336(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

float func_337(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

