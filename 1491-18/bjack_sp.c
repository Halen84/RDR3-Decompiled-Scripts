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
	struct<3498> /*27984*/ sLocal_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1088421888, 1094713344, 1128792064, 1066024305, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1088421888, 1094713344, 1128792064, 1066024305, 1061158912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = -1;
	var uLocal_3515 = -1;
	var uLocal_3516 = -1;
	var uLocal_3517 = 0;
	var uLocal_3518 = -1;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = -1;
	var uLocal_3526 = -1;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 6;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = -1;
	var uLocal_3545 = 255;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 4;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uScriptParam_0 = -1;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = -1;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = -1;
	var uScriptParam_12 = -1;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 6;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = -1;
	var uScriptParam_31 = 255;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
#pragma endregion

void __SCRIPT()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	func_3(&(sLocal_14.f_3497), &uScriptParam_0, 34, 315);
}

void func_1()
{
	func_5(&(sLocal_14.f_3497), 1370);
	func_7(&(sLocal_14.f_3497), 1574);
	func_9(&(sLocal_14.f_3497), 1704);
	func_11(&(sLocal_14.f_3497), 1859);
	func_13(&(sLocal_14.f_3497), 2016);
	func_15(&(sLocal_14.f_3497), (1 << 11));
	func_17(&(sLocal_14.f_3497), 2080);
	func_19(&(sLocal_14.f_3497), 2112);
	func_21(&(sLocal_14.f_3497), 2144);
	func_23(&(sLocal_14.f_3497), 2176);
	func_25(&(sLocal_14.f_3497), 2208);
	func_27(&(sLocal_14.f_3497), 2236);
	func_29(&(sLocal_14.f_3497), 2266);
	func_31(&(sLocal_14.f_3497), 2294);
	func_33(&(sLocal_14.f_3497), 2324);
	func_35(&(sLocal_14.f_3497), 2352);
	func_37(&(sLocal_14.f_3497), 2380);
	func_39(&(sLocal_14.f_3497), 2411);
	func_41(&(sLocal_14.f_3497), 2438);
	func_43(&(sLocal_14.f_3497), 2476);
	func_45(&(sLocal_14.f_3497), 2550);
}

void func_2()
{
	func_46(&(sLocal_14.f_3497), 1);
	func_48(&(sLocal_14.f_3497), 2880);
	func_50(&(sLocal_14.f_3497), 3129);
	func_52(&(sLocal_14.f_3497), 3419);
}

void func_3(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	func_53(uParam0, uParam1, iParam2, iParam3, 0, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
	{
		func_54(uParam0);
	}
	func_55(uParam0);
	func_56(uParam0);
	while (true)
	{
		if (func_57(uParam0))
		{
			func_58(uParam0, 20);
		}
		switch (uParam0->f_42)
		{
			case 0:
				func_59(uParam0);
				func_58(uParam0, 1);
				break;
			case 1:
				Stack.Invoke(uParam0->f_81);
				if (StackVal)
				{
					if (uParam0->f_1 == 1)
					{
						if (func_60() != 1)
						{
							Jump @911; // curOff = 184
						}
						else if (func_61() == -1)
						{
						}
						else
						{
							if (func_62(uParam0))
							{
								func_63(uParam0);
								uParam0->f_49 = 1;
							}
							func_58(uParam0, 2);
							Jump @911; // curOff = 228
							Stack.Invoke(uParam0->f_85, !uParam0->f_49);
							if (StackVal || StackVal)
							{
								if (uParam0->f_1 == 1)
								{
									if (func_60() != 1)
									{
										Jump @911; // curOff = 266
									}
									else if (func_61() == -1)
									{
									}
									else
									{
										switch (uParam0->f_1)
										{
											case 2:
												func_58(uParam0, 3);
												break;
											case 1:
												func_64(uParam0);
												func_65(2);
												func_58(uParam0, 4);
												break;
										}
										Jump @911; // curOff = 336
										if (func_66(uParam0->f_38))
										{
											if (!uParam0->f_50)
											{
												func_67(uParam0);
											}
										}
										if (func_68(uParam0->f_38))
										{
											func_64(uParam0);
											func_69(uParam0, 1);
											func_70(uParam0->f_38, (1 << 23));
											func_58(uParam0, 6);
										}
										Jump @911; // curOff = 407
										Stack.Invoke(uParam0->f_88);
										if (func_60() == 4)
										{
											Stack.Invoke(uParam0->f_82);
											if (StackVal)
											{
												func_58(uParam0, 5);
											}
											else
											{
												func_71(uParam0);
												func_65(5);
												func_72();
												func_69(uParam0, 1);
												func_70(uParam0->f_38, (1 << 23));
												func_58(uParam0, 6);
											}
										}
										Jump @911; // curOff = 483
										Stack.Invoke(uParam0->f_88);
										if (func_60() != 4)
										{
										}
										else
										{
											Stack.Invoke(uParam0->f_83);
											if (StackVal)
											{
												func_71(uParam0);
												func_65(5);
												func_72();
												func_69(uParam0, 1);
												func_70(uParam0->f_38, (1 << 23));
												func_58(uParam0, 6);
											}
										}
										Jump @911; // curOff = 552
										if (uParam0->f_54 == 3)
										{
											if (!uParam0->f_52)
											{
												func_73(uParam0);
											}
										}
										Stack.Invoke(uParam0->f_88);
										iVar0 = StackVal;
										if (iVar0 != 0)
										{
											func_69(uParam0, 0);
											switch (iVar0)
											{
												case 3:
													func_74(uParam0->f_38);
													func_75(uParam0->f_37);
													func_65(6);
													func_58(uParam0, 8);
													break;
												case 4:
													func_58(uParam0, 11);
													break;
												case 1:
													func_58(uParam0, 20);
													break;
												default:
													break;
											}
										}
										Jump @911; // curOff = 680
										Stack.Invoke(uParam0->f_88);
										Stack.Invoke(uParam0->f_99);
										if (StackVal)
										{
											func_65(7);
											func_76(uParam0);
											func_58(uParam0, 10);
										}
										else if (!uParam0->f_48)
										{
											Stack.Invoke(uParam0->f_97);
											if (StackVal)
											{
												func_77(uParam0);
												func_58(uParam0, 9);
											}
										}
										Jump @911; // curOff = 749
										if (!func_78(uParam0->f_37) || func_79(uParam0))
										{
											func_58(uParam0, 20);
										}
										else
										{
											Stack.Invoke(uParam0->f_88);
											Stack.Invoke(uParam0->f_99);
											if (StackVal)
											{
												func_65(7);
												func_76(uParam0);
												func_58(uParam0, 10);
											}
										}
										Jump @911; // curOff = 820
										if (!func_78(uParam0->f_37) || func_79(uParam0))
										{
											func_58(uParam0, 20);
										}
										else
										{
											Stack.Invoke(uParam0->f_88);
											if (func_80() != uParam0->f_38)
											{
												func_58(uParam0, 20);
											}
										}
										Jump @911; // curOff = 883
										Stack.Invoke(uParam0->f_88);
										Stack.Invoke(uParam0->f_99);
										if (StackVal)
										{
											func_58(uParam0, 20);
										}
									}
									if (uParam0->f_42 == 19 || uParam0->f_42 == 20)
									{
										if (uParam0->f_51)
										{
											func_81(uParam0);
										}
									}
									Stack.Invoke(uParam0->f_101);
									if (uParam0->f_42 == 19 || uParam0->f_42 == 20)
									{
										func_54(uParam0);
									}
									BUILTIN::WAIT(0);
									func_54(uParam0);
								}
							}
						}
					}
				}
				default:
					break;
		}
	}
}

void func_4()
{
	func_82(&(sLocal_14.f_1724), sLocal_14.f_3497.f_3.f_6, sLocal_14.f_3497.f_3.f_9, 1);
	func_83(&(sLocal_14.f_3093), sLocal_14.f_3497.f_3.f_6, sLocal_14.f_3497.f_3.f_9);
	func_84(&(sLocal_14.f_3218), sLocal_14.f_3497.f_3.f_6);
	func_85(&sLocal_14);
	switch (sLocal_14.f_3497.f_41)
	{
		case 38:
			func_86(&(sLocal_14.f_1724), 0);
			break;
		case 105:
			func_86(&(sLocal_14.f_1724), 3);
			break;
		case 92:
			func_86(&(sLocal_14.f_1724), 8);
			break;
		default:
			func_86(&(sLocal_14.f_1724), 1);
			break;
	}
	func_87(&sLocal_14, sLocal_14.f_3497.f_41);
}

void func_5(var uParam0, int iParam1)
{
	uParam0->f_78 = iParam1;
}

void func_6()
{
	int iVar0;
	int iVar1;

	if (func_88())
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 2;
	}
	HUD::TEXT_BLOCK_REQUEST("MGBLK");
	PED::_RESERVE_AMBIENT_PEDS(4);
	AUDIO::PREPARE_SOUNDSET("MGBLK_Sounds", true);
	func_89(&(sLocal_14.f_1724), iVar0, 0);
	func_90(&(sLocal_14.f_3093));
	func_91(&(sLocal_14.f_3218), sLocal_14.f_1724.f_938);
	iVar1 = func_92(sLocal_14.f_3497.f_38, sLocal_14.f_3497.f_41, -1);
	if (iVar1 != 0)
	{
		STREAMING::REQUEST_MODEL(iVar1, false);
	}
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_80 = iParam1;
}

int func_8()
{
	int iVar0;

	if (((((!HUD::TEXT_BLOCK_IS_LOADED("MGBLK") || !PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY()) || !AUDIO::PREPARE_SOUNDSET("MGBLK_Sounds", true)) || !func_93(&(sLocal_14.f_1724))) || !func_94(&(sLocal_14.f_3093))) || !func_95(&(sLocal_14.f_3218)))
	{
		return 0;
	}
	iVar0 = func_92(sLocal_14.f_3497.f_38, sLocal_14.f_3497.f_41, -1);
	if (iVar0 == 0 || !STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

void func_9(var uParam0, int iParam1)
{
	uParam0->f_81 = iParam1;
}

int func_10()
{
	if (sLocal_14.f_3497.f_47)
	{
		PAD::_SET_CONTROL_CONTEXT(4, joaat("MINIGAMEBLACKJACK"));
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO") /* GXTEntry: "Red Dead Online information" */, false);
	}
	if (func_96(sLocal_14.f_3218.f_277))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0) && sLocal_14.f_3497.f_47)
		{
			if (!func_97(sLocal_14.f_3218.f_277, 1))
			{
				INTERACTION::SET_MOUSE_CURSOR_THIS_FRAME();
				INTERACTION::SET_MOUSE_CURSOR_STYLE(0);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
			}
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PC_FREE_LOOK"), false);
		}
	}
	func_98(&sLocal_14);
	return 0;
}

void func_11(var uParam0, int iParam1)
{
	uParam0->f_100 = iParam1;
}

int func_12()
{
	return func_99(&sLocal_14, &(sLocal_14.f_17));
}

void func_13(var uParam0, int iParam1)
{
	uParam0->f_82 = iParam1;
}

int func_14()
{
	return func_100(&sLocal_14, &(sLocal_14.f_17));
}

void func_15(var uParam0, int iParam1)
{
	uParam0->f_83 = iParam1;
}

void func_16()
{
	func_101(&sLocal_14, &(sLocal_14.f_17));
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_84 = iParam1;
}

int func_18()
{
	return func_102(&sLocal_14, &(sLocal_14.f_17));
}

void func_19(var uParam0, int iParam1)
{
	uParam0->f_85 = iParam1;
}

void func_20()
{
	func_103(&sLocal_14, &(sLocal_14.f_17));
}

void func_21(var uParam0, int iParam1)
{
	uParam0->f_86 = iParam1;
}

int func_22()
{
	return func_104(&sLocal_14, &(sLocal_14.f_17));
}

void func_23(var uParam0, int iParam1)
{
	uParam0->f_87 = iParam1;
}

void func_24()
{
	func_105(&sLocal_14);
}

void func_25(var uParam0, int iParam1)
{
	uParam0->f_89 = iParam1;
}

var func_26()
{
	return func_106(&sLocal_14, &sLocal_14);
}

void func_27(var uParam0, int iParam1)
{
	uParam0->f_88 = iParam1;
}

void func_28()
{
	func_107(&sLocal_14);
}

void func_29(var uParam0, int iParam1)
{
	uParam0->f_90 = iParam1;
}

int func_30(int iParam0)
{
	return func_108(&sLocal_14, iParam0);
}

void func_31(var uParam0, int iParam1)
{
	uParam0->f_91 = iParam1;
}

int func_32()
{
	return func_109(&sLocal_14);
}

void func_33(var uParam0, int iParam1)
{
	uParam0->f_92 = iParam1;
}

var func_34()
{
	return func_110(&sLocal_14);
}

void func_35(var uParam0, int iParam1)
{
	uParam0->f_93 = iParam1;
}

void func_36()
{
	func_111(&sLocal_14, 0, 1);
}

void func_37(var uParam0, int iParam1)
{
	uParam0->f_94 = iParam1;
}

var func_38()
{
	return sLocal_14.f_1532;
}

void func_39(var uParam0, int iParam1)
{
	uParam0->f_99 = iParam1;
}

void func_40()
{
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
	func_112(&sLocal_14, 1);
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_102 = iParam1;
}

void func_42()
{
	func_112(&sLocal_14, 0);
	if (sLocal_14.f_9 != -1)
	{
		func_115(func_114(&sLocal_14, func_113(&(sLocal_14.f_17), sLocal_14.f_9)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
	}
}

void func_43(var uParam0, int iParam1)
{
	uParam0->f_103 = iParam1;
}

void func_44()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_116(&(sLocal_14.f_17), iVar2) && func_117(&(sLocal_14.f_1724), iVar2))
		{
			iVar0 = func_118(&(sLocal_14.f_1724), iVar2);
			if ((!PED::IS_PED_INJURED(iVar0) && !PED::IS_PED_A_PLAYER(iVar0)) && !func_119(iVar0))
			{
				iVar1 = func_114(&sLocal_14, func_113(&(sLocal_14.f_17), iVar2));
				if (iVar1 > 0)
				{
					func_120(iVar0, iVar1);
					PED::SET_LOOTING_FLAG(iVar0, 0, true);
					PED::SET_LOOTING_FLAG(iVar0, 1, true);
				}
			}
		}
		iVar2++;
	}
	func_121(&(sLocal_14.f_1724), 1);
	func_122(&(sLocal_14.f_1724), 1);
	func_123(&(sLocal_14.f_1724), 1);
	func_124(&sLocal_14);
	func_125(&(sLocal_14.f_1724), 1);
	func_126(&(sLocal_14.f_3093));
	func_127(&(sLocal_14.f_3218));
	func_128(1, 0, 0);
	HUD::_TEXT_BLOCK_DELETE("MGBLK");
	PED::_UNRESERVE_AMBIENT_PEDS(4);
	AUDIO::_RELEASE_SOUNDSET("MGBLK_Sounds");
	func_129(&(sLocal_14.f_1724));
	func_130(&(sLocal_14.f_3093));
	func_131(&(sLocal_14.f_3218));
	iVar3 = func_92(sLocal_14.f_3497.f_38, sLocal_14.f_3497.f_41, -1);
	if (iVar3 != 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar3);
	}
}

void func_45(var uParam0, int iParam1)
{
	uParam0->f_104 = iParam1;
}

void func_46(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_47()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;

	iVar0 = func_61();
	func_132(&(sLocal_14.f_1724));
	func_133(&sLocal_14);
	uVar4 = func_134(0, sLocal_14.f_3497.f_3.f_10);
	iVar5 = func_135(0, sLocal_14.f_3497.f_3.f_10);
	func_136(&sLocal_14, uVar4);
	func_137(func_114(&sLocal_14, iVar5), 0, 0, 0, 1);
	func_138(&sLocal_14, &sLocal_14);
	if (func_139(0, sLocal_14.f_3497.f_3.f_6, sLocal_14.f_3497.f_3.f_9, iVar0, &iVar2, 0, 0))
	{
		bVar3 = iVar2 == Global_35;
	}
	func_141(&sLocal_14, iVar0, func_140(), iVar5);
	if (PED::IS_PED_MALE(Global_35))
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1 + 1);
	}
	else
	{
		iVar1 = 2;
	}
	func_142(&(sLocal_14.f_1724), iVar0, Global_35, bVar3, iVar1, 0, -1, 92, PLAYER::PLAYER_ID(), 0, 0, 1);
	func_143(&sLocal_14, iVar0);
	func_144(&sLocal_14, 1);
	func_145(&(sLocal_14.f_1724));
	func_146(0);
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_106 = iParam1;
}

void func_49()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	iVar0 = func_135(0, sLocal_14.f_3497.f_3.f_10);
	iVar5 = 0;
	while (iVar5 < 4)
	{
		iVar6 = func_147(0, iVar5, &uVar1, &uVar2, &iVar3, &iVar4);
		if (!PED::IS_PED_INJURED(iVar6) && iVar6 != Global_35)
		{
			iVar8 = func_148(&sLocal_14, iVar3);
			iVar7 = uVar2;
			if ((iVar7 != 0 && iVar7 != 1) && iVar7 != 2)
			{
				if (PED::IS_PED_MALE(iVar6))
				{
					iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1 + 1);
				}
				else
				{
					iVar7 = 2;
				}
			}
			func_149(&sLocal_14, iVar5, iVar8, MISC::GET_RANDOM_INT_IN_RANGE((iVar0 - (iVar0 / 3)), (iVar0 + (iVar0 / 3))), 1);
			func_142(&(sLocal_14.f_1724), iVar5, iVar6, 1, iVar7, 1, iVar3, iVar4, 255, 0, 0.5f, 0);
			func_143(&sLocal_14, iVar5);
		}
		iVar5++;
	}
	iVar9 = func_150(0, 4);
	if (!PED::IS_PED_INJURED(iVar9))
	{
		func_151(&(sLocal_14.f_1724), iVar9, 1, 0, 0.5f);
	}
	func_152(&sLocal_14, &(sLocal_14.f_17));
	func_153(&(sLocal_14.f_3218));
	func_154(&sLocal_14, 1);
}

void func_50(var uParam0, int iParam1)
{
	uParam0->f_109 = iParam1;
}

void func_51()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_155(&(sLocal_14.f_1724), iVar1) && func_156(&(sLocal_14.f_1724), iVar1) == 1)
		{
			iVar0 = func_118(&(sLocal_14.f_1724), iVar1);
			if (!PED::IS_PED_INJURED(iVar0) && !PED::IS_PED_A_PLAYER(iVar0))
			{
				func_160(0, iVar0, iVar1, func_113(&(sLocal_14.f_17), iVar1), func_157(&(sLocal_14.f_1724), iVar1), func_158(&(sLocal_14.f_1724), iVar1), func_159(&(sLocal_14.f_1724), iVar1));
				func_161(&(sLocal_14.f_1724), iVar1, 0);
			}
		}
		iVar1++;
	}
	if (func_162(&(sLocal_14.f_1724)))
	{
		iVar0 = func_163(&(sLocal_14.f_1724));
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_160(0, iVar0, 4, 0, 0, 0, 92);
			func_164(&(sLocal_14.f_1724), 0);
		}
	}
}

void func_52(var uParam0, int iParam1)
{
	uParam0->f_110 = iParam1;
}

void func_53(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam4;
	uParam0->f_1 = 0;
	uParam0->f_2 = iParam5;
	uParam0->f_3 = { *uParam1 /*34*/ };
	uParam0->f_37 = *uParam1;
	uParam0->f_38 = uParam1->f_12;
	uParam0->f_40 = uParam1->f_13;
	uParam0->f_41 = uParam1->f_2;
	switch (uParam1->f_12)
	{
		case 0:
			uParam0->f_39 = -1150372370;
			break;
		case 2:
			uParam0->f_39 = -471827042;
			break;
		case 1:
			uParam0->f_39 = 355424894;
			break;
		case 3:
			uParam0->f_39 = -2033178055;
			break;
		default:
			uParam0->f_39 = 0;
			break;
	}
	func_58(uParam0, 0);
	uParam0->f_46 = 0;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	uParam0->f_55 = 0;
	uParam0->f_56 = 0;
	uParam0->f_57 = 0;
	uParam0->f_58.f_3 = MISC::GET_HASH_KEY("MG_YES" /* GXTEntry: "Yes" */);
	uParam0->f_58.f_3.f_3 = 0;
	uParam0->f_78 = 14650;
	uParam0->f_79 = 14650;
	uParam0->f_80 = 14650;
	uParam0->f_81 = 14658;
	uParam0->f_82 = 14658;
	uParam0->f_83 = 14658;
	uParam0->f_84 = 14650;
	uParam0->f_85 = 14658;
	uParam0->f_86 = 14650;
	uParam0->f_87 = 14658;
	uParam0->f_88 = 14667;
	uParam0->f_89 = 14650;
	uParam0->f_90 = 14650;
	uParam0->f_91 = 14676;
	uParam0->f_92 = 14658;
	uParam0->f_93 = 14685;
	uParam0->f_94 = 14650;
	uParam0->f_95 = 14650;
	uParam0->f_96 = 14658;
	uParam0->f_97 = 14658;
	uParam0->f_98 = 14658;
	uParam0->f_99 = 14658;
	uParam0->f_100 = 14658;
	uParam0->f_101 = 14650;
	uParam0->f_102 = 14650;
	uParam0->f_103 = 14650;
	uParam0->f_104 = 14650;
	uParam0->f_105 = 14650;
	uParam0->f_106 = 14650;
	uParam0->f_107 = 14650;
	uParam0->f_108 = 14658;
	uParam0->f_109 = 14650;
	uParam0->f_110 = 14650;
	uParam0->f_111 = 14658;
	uParam0->f_112 = 14658;
	Stack.Invoke(iParam2);
	Stack.Invoke(uParam0->f_78);
	Stack.Invoke(iParam3);
}

void func_54(var uParam0)
{
	int iVar0;

	if (uParam0->f_51)
	{
		func_81(uParam0);
	}
	if (!uParam0->f_48)
	{
		func_77(uParam0);
	}
	Stack.Invoke(uParam0->f_104);
	if (func_80() == uParam0->f_38 && func_170() == uParam0->f_37)
	{
		iVar0 = func_60();
		if (iVar0 == 6 || iVar0 == 7)
		{
			func_72();
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_55(var uParam0)
{
	int iVar0;
	int iVar1;

	uParam0->f_46 = 1;
	iVar0 = func_171(0);
	if (func_172(iVar0))
	{
		iVar1 = func_173(iVar0);
		if (iVar1 == 4)
		{
			MISC::_0x1096603B519C905F(func_174(uParam0->f_38, *uParam0));
		}
	}
	if (*uParam0)
	{
	}
	Stack.Invoke(uParam0->f_79);
}

void func_56(var uParam0)
{
	if (!uParam0->f_47)
	{
		uParam0->f_47 = 1;
		func_175(1);
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
		UIFEED::UI_FEED_CLEAR_CHANNEL(2, true, false);
		func_176(1);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		}
		if (!Global_1935630.f_12)
		{
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
			}
		}
		func_177(0);
		func_178(0);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(Global_35, 9, false);
		func_181(func_180(func_179()), 1);
		AUDIO::START_AUDIO_SCENE(func_182(uParam0->f_38));
		Stack.Invoke(uParam0->f_102);
	}
}

bool func_57(var uParam0)
{
	Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	if (Global_1935630.f_12)
	{
		return true;
	}
	if (func_183(uParam0->f_38, 8))
	{
		return true;
	}
	Stack.Invoke(uParam0->f_100);
	if (StackVal)
	{
		return true;
	}
	if (!*uParam0)
	{
		PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 41, true);
	}
	if (uParam0->f_47)
	{
		func_184(0);
		func_185();
		PED::SET_PED_RESET_FLAG(Global_35, 175 /*PRF_0xF0584C9A*/, true);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		GRAPHICS::_0x1C6306E5BC25C29C();
	}
	func_186(uParam0);
	return false;
}

void func_58(var uParam0, int iParam1)
{
	uParam0->f_42 = iParam1;
	func_187(&(uParam0->f_43));
}

void func_59(var uParam0)
{
	Stack.Invoke(uParam0->f_80);
}

int func_60()
{
	return Global_1899528.f_61;
}

int func_61()
{
	return Global_1899528.f_61.f_3;
}

bool func_62(var uParam0)
{
	Stack.Invoke(uParam0->f_108);
	return StackVal;
}

void func_63(var uParam0)
{
	Stack.Invoke(uParam0->f_84);
}

void func_64(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	else
	{
		Stack.Invoke(uParam0->f_106);
		uParam0->f_51 = 1;
	}
}

void func_65(int iParam0)
{
	Global_1899528.f_61 = iParam0;
}

bool func_66(var uParam0)
{
	if (Global_1899528.f_61.f_4 == -1)
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1899528.f_61.f_4))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1899528.f_61.f_4, false))
	{
		return false;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(Global_1899528.f_61.f_4, false))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(Global_1899528.f_61.f_4))
	{
		return true;
	}
	return false;
}

void func_67(var uParam0)
{
	if (uParam0->f_50)
	{
	}
	else
	{
		Stack.Invoke(uParam0->f_105);
		uParam0->f_50 = 1;
	}
}

bool func_68(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1899528.f_61.f_4))
	{
		return true;
	}
	return ANIMSCENE::HAS_ANIM_SCENE_EXITED(Global_1899528.f_61.f_4, false);
}

void func_69(var uParam0, int iParam1)
{
	uParam0->f_56 = iParam1;
	if (uParam0->f_56 && !func_183(uParam0->f_38, 2))
	{
		if (uParam0->f_54 == 0)
		{
			func_188(uParam0, 1);
		}
	}
	else if (uParam0->f_54 != 0)
	{
		func_188(uParam0, 0);
	}
}

void func_70(int iParam0, int iParam1)
{
	if (!func_183(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] |= iParam1;
}

void func_71(var uParam0)
{
	Stack.Invoke(uParam0->f_109);
}

void func_72()
{
	func_189();
	func_190();
	func_74(-1);
	func_75(-1);
}

void func_73(var uParam0)
{
	Stack.Invoke(uParam0->f_89);
	uParam0->f_52 = 1;
}

void func_74(int iParam0)
{
	Global_1899528.f_61.f_1 = iParam0;
}

void func_75(int iParam0)
{
	Global_1899528.f_61.f_2 = iParam0;
}

void func_76(var uParam0)
{
	Stack.Invoke(uParam0->f_110);
}

void func_77(var uParam0)
{
	int iVar0;
	bool bVar1;

	if (!uParam0->f_48)
	{
		uParam0->f_48 = 1;
		if (uParam0->f_47)
		{
			func_191(uParam0);
		}
		iVar0 = func_171(0);
		if (func_172(iVar0))
		{
			if (func_173(iVar0) == 4)
			{
				MISC::_0x1096603B519C905F("");
			}
		}
		func_192(0);
		func_193(uParam0->f_38);
		func_194(uParam0);
		bVar1 = false;
		if (!bVar1)
		{
			if (func_195())
			{
				func_196(uParam0->f_3.f_4, 0, 0);
			}
			else
			{
				func_196(uParam0->f_3.f_4, 0, 2);
			}
			func_197(uParam0->f_3.f_4, 1);
		}
		if (func_198() == -1)
		{
			if (uParam0->f_3 == 0)
			{
				func_199(23, 0);
			}
		}
	}
}

bool func_78(int iParam0)
{
	int iVar0;

	iVar0 = func_200(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(Global_1392915.f_121[iVar0 /*20*/].f_4, false);
}

bool func_79(var uParam0)
{
	float fVar0;

	fVar0 = func_201(uParam0->f_38);
	if (Global_1394141.f_1328)
	{
		return true;
	}
	if (func_183(uParam0->f_38, (1 << 18)))
	{
		return true;
	}
	if (!func_202(uParam0->f_38))
	{
		return true;
	}
	if (!func_203(uParam0->f_38))
	{
		return true;
	}
	if (BUILTIN::VDIST2(Global_36, uParam0->f_3.f_14) > (fVar0 * fVar0))
	{
		return true;
	}
	if (func_198() == -1)
	{
		if (Global_1899528.f_215 && !func_204(uParam0->f_37))
		{
			return true;
		}
	}
	if (uParam0->f_41 != -1)
	{
		if (func_205(uParam0->f_41, (1 << 22)))
		{
			return true;
		}
		if (func_206() != uParam0->f_41)
		{
			return true;
		}
	}
	return false;
}

int func_80()
{
	return Global_1899528.f_61.f_1;
}

void func_81(var uParam0)
{
	if (!uParam0->f_51)
	{
	}
	else
	{
		Stack.Invoke(uParam0->f_107);
		uParam0->f_51 = 0;
	}
}

void func_82(var uParam0, Vector3 vParam1, var uParam4, int iParam5)
{
	*uParam0 = { vParam1 /*3*/ };
	uParam0->f_3 = uParam4;
	uParam0->f_45 = iParam5;
	uParam0->f_107 = 0;
	uParam0->f_111 = 0;
	strcpy_s(&(uParam0->f_4[0 /*8*/]), 64, "face_human@mini_games@generic");
	strcpy_s(&(uParam0->f_4[1 /*8*/]), 64, "face_human@mini_games@blackjack");
	strcpy_s(&(uParam0->f_21[0 /*8*/]), 64, "p_m_zero");
	strcpy_s(&(uParam0->f_21[1 /*8*/]), 64, "gen_male");
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	func_207(uParam0);
	func_208(uParam0);
	func_209(uParam0);
	func_210(uParam0);
	func_211(uParam0);
}

void func_83(var uParam0, Vector3 vParam1, var uParam4)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 1;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	func_212(&(uParam0->f_32), vParam1, uParam4);
	func_213(&(uParam0->f_32), 0, 0.002f, -0.4803f, 1.6486f, -63.0626f, 0.0f, 0.2124f, 45.0039f, 0, 0, 0, 0.0f, 0.19f);
}

void func_84(var uParam0, Vector3 vParam1)
{
	uParam0->f_1 = 0;
	uParam0->f_197 = 0;
	uParam0->f_198 = 0;
	uParam0->f_199 = 1;
	uParam0->f_200 = 0;
	uParam0->f_201 = 0;
	uParam0->f_202 = 0;
	func_214(&(uParam0->f_203));
	uParam0->f_206 = 0;
	uParam0->f_207 = 0;
	func_214(&(uParam0->f_208));
	func_215(uParam0);
	func_216(uParam0);
	func_217(uParam0, vParam1);
	uParam0->f_275 = 0;
	uParam0->f_276 = 0;
	uParam0->f_277 = 0;
}

void func_85(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	strcpy_s(&(uParam0->f_1), 64, "");
	uParam0->f_9 = -1;
	func_218(&(uParam0->f_17));
	uParam0->f_285 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_597[iVar0 /*19*/] = 0;
		uParam0->f_674[iVar0 /*19*/] = 0;
		uParam0->f_751[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_10.f_4 = 2;
	uParam0->f_10.f_5 = 100;
	uParam0->f_10.f_6 = 100;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1514[iVar0] = 0;
		func_214(&(uParam0->f_1519[iVar0 /*3*/]));
		iVar0++;
	}
	func_214(&(uParam0->f_1534));
	uParam0->f_1475 = 0;
	uParam0->f_1475.f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1485[iVar0 /*6*/] = 0;
		uParam0->f_1485[iVar0 /*6*/].f_1 = 0;
		iVar0++;
	}
	uParam0->f_1532 = 0;
	uParam0->f_1533 = 0;
	uParam0->f_1543 = 0;
	uParam0->f_1549 = 0;
	uParam0->f_1553 = 0;
	uParam0->f_1565 = 0;
	uParam0->f_1566 = 0;
	uParam0->f_1564 = 1;
	func_219(uParam0);
	func_220(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1631[iVar0] = -1;
		func_214(&(uParam0->f_1641[iVar0 /*3*/]));
		iVar0++;
	}
	func_221(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_214(&(uParam0->f_1711[iVar0 /*3*/]));
		iVar0++;
	}
	uParam0->f_1545 = 1;
	uParam0->f_1546 = 1;
	uParam0->f_1547 = 1;
	uParam0->f_1548 = 1;
	func_222(&(uParam0->f_756));
	func_224(uParam0, 1, 20093);
	func_224(uParam0, 2, 20309);
	func_224(uParam0, 3, 21607);
	func_224(uParam0, 4, 22579);
	func_224(uParam0, 5, 23826);
	func_224(uParam0, 6, 24838);
	func_224(uParam0, 7, 25731);
	func_224(uParam0, 8, 29796);
	func_224(uParam0, 9, 30896);
	func_224(uParam0, 10, 31078);
	func_235(uParam0, 1, 31576);
	func_235(uParam0, 2, 32269);
	func_238(uParam0, 2, 32681);
	func_238(uParam0, 3, 32825);
}

void func_86(var uParam0, int iParam1)
{
	uParam0->f_938 = iParam1;
	func_240(&(uParam0->f_939), uParam0->f_938);
	func_241(&(uParam0->f_942), uParam0->f_938);
	func_243(&(uParam0->f_940), func_242(), uParam0->f_938, 0);
}

void func_87(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 105:
			func_244(&(uParam0->f_1724), 1343.535f, -1370.553f, 83.2942f);
			func_244(&(uParam0->f_1724), 1339.869f, -1379.527f, 83.2813f);
			func_244(&(uParam0->f_1724), 1334.245f, -1371.07f, 83.2964f);
			func_244(&(uParam0->f_1724), 1346.431f, -1371.145f, 83.2896f);
			func_244(&(uParam0->f_1724), 1349.224f, -1371.644f, 83.2893f);
			func_244(&(uParam0->f_1724), 1331.771f, -1378.278f, 83.2912f);
			func_244(&(uParam0->f_1724), 1341.622f, -1376.62f, 83.2813f);
			func_245(&(uParam0->f_1724), 1334.079f, -1370.988f, 83.2963f);
			break;
		case 92:
			func_244(&(uParam0->f_1724), 1334.079f, -1370.988f, 83.2963f);
			func_244(&(uParam0->f_1724), 2943.101f, 520.5313f, 44.3806f);
			func_244(&(uParam0->f_1724), 2940.889f, 526.18f, 44.3362f);
			func_244(&(uParam0->f_1724), 2940.067f, 523.6575f, 44.3362f);
			func_244(&(uParam0->f_1724), 2937.401f, 527.2973f, 44.3362f);
			func_244(&(uParam0->f_1724), 2935.909f, 529.8917f, 44.3129f);
			func_244(&(uParam0->f_1724), 2946.799f, 523.3535f, 44.3654f);
			func_244(&(uParam0->f_1724), 2943.674f, 517.3594f, 44.381f);
			func_245(&(uParam0->f_1724), 2937.254f, 530.2089f, 44.3357f);
			break;
		case 38:
			func_244(&(uParam0->f_1724), -810.2421f, -1317.005f, 46.8788f);
			func_244(&(uParam0->f_1724), -810.1186f, -1322.016f, 46.8792f);
			func_244(&(uParam0->f_1724), -815.9619f, -1322.73f, 46.881f);
			func_244(&(uParam0->f_1724), -817.7482f, -1324.337f, 46.8781f);
			func_244(&(uParam0->f_1724), -818.0351f, -1322.294f, 46.881f);
			func_244(&(uParam0->f_1724), -817.6568f, -1319.365f, 46.8899f);
			func_244(&(uParam0->f_1724), -823.8738f, -1318.758f, 46.881f);
			func_244(&(uParam0->f_1724), -816.8477f, -1326.325f, 46.8795f);
			func_244(&(uParam0->f_1724), -809.2223f, -1320.885f, 46.8788f);
			func_245(&(uParam0->f_1724), -818.4525f, -1318.51f, 46.881f);
			break;
	}
}

bool func_88()
{
	if (func_198() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

void func_89(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	uParam0->f_38 = 1;
	STREAMING::REQUEST_MODEL(uParam0->f_939, false);
	STREAMING::REQUEST_MODEL(uParam0->f_940, false);
	STREAMING::REQUEST_MODEL(uParam0->f_941, false);
	STREAMING::REQUEST_MODEL(uParam0->f_942, false);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			STREAMING::REQUEST_ANIM_DICT(func_246(uParam0, iVar0, iVar1));
			iVar1++;
		}
		iVar0++;
	}
	func_247(uParam0);
	func_248();
	func_249(uParam0, !bParam2);
	if (uParam0->f_45)
	{
		func_250(uParam0, iParam1);
	}
}

void func_90(var uParam0)
{
	if (!*uParam0)
	{
		*uParam0 = 1;
		CAM::_LOAD_CAMERA_DATA_DICT("table_games_cam");
		STREAMING::REQUEST_MODEL(joaat("P_COIN01X"), false);
	}
}

void func_91(var uParam0, int iParam1)
{
	int iVar0;

	func_251(iParam1, &iVar0);
	func_252(uParam0, 0, 0, iVar0);
	uParam0->f_278 = 0;
}

int func_92(int iParam0, int iParam1, int iParam2)
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

bool func_93(var uParam0)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_45)
	{
		if (!func_253(uParam0))
		{
			return false;
		}
		else if (uParam0->f_44 == -1)
		{
			func_254(uParam0);
		}
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_939))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_940))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_941))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_942))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_246(uParam0, iVar0, iVar1)))
			{
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	if (!func_255(uParam0))
	{
		return false;
	}
	if (!func_256())
	{
		return false;
	}
	if (!func_257(uParam0))
	{
		return false;
	}
	return true;
}

bool func_94(var uParam0)
{
	if (!*uParam0)
	{
	}
	else if (!CAM::_IS_CAM_DATA_DICT_LOADED("table_games_cam") || !STREAMING::HAS_MODEL_LOADED(joaat("P_COIN01X")))
	{
		return false;
	}
	return true;
}

bool func_95(var uParam0)
{
	if (uParam0->f_1 == 4)
	{
		if (uParam0->f_278 == 4)
		{
			return true;
		}
		func_258(uParam0, uParam0->f_278, "", "", 0, 0);
		uParam0->f_278++;
	}
	return false;
}

bool func_96(int iParam0)
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

bool func_97(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_96(iParam0))
	{
		return false;
	}
	iVar0 = func_259(iParam0);
	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1945188[iVar0 /*18*/].f_4);
	}
	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[iVar0 /*18*/].f_3);
}

void func_98(var uParam0)
{
	func_260(&(uParam0->f_1724), 1);
	func_261(&(uParam0->f_3218));
}

int func_99(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = func_150(uParam0->f_3497.f_38, iVar1);
		if (!PED::IS_PED_INJURED(iVar0) && uParam0->f_9 != iVar1)
		{
			func_262(&(uParam0->f_3218), iVar1, iVar0);
		}
		iVar1++;
	}
	func_262(&(uParam0->f_3218), uParam0->f_9, Global_35);
	return 1;
}

int func_100(var uParam0, var uParam1)
{
	if (!func_263(&(uParam0->f_3218)))
	{
		return 0;
	}
	return 1;
}

void func_101(var uParam0, var uParam1)
{
	func_264(uParam0, &(uParam0->f_1724), uParam1);
}

int func_102(var uParam0, var uParam1)
{
	return func_265(uParam0, &(uParam0->f_1724));
}

void func_103(var uParam0, var uParam1)
{
	int iVar0;

	uParam0->f_1710 = 0;
	func_264(uParam0, &(uParam0->f_1724), uParam1);
	func_266(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam1, iVar0))
		{
			func_268(&(uParam0->f_3218), iVar0, func_267(uParam0, iVar0));
		}
		iVar0++;
	}
}

int func_104(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar0 = uParam0->f_1710;
	if (iVar0 < 4)
	{
		if (!func_116(uParam1, iVar0))
		{
			uParam0->f_1710++;
		}
		else if (func_269(uParam0, iVar0) == 0)
		{
			return 0;
		}
		else if (func_269(uParam0, iVar0) != 1)
		{
			return 0;
		}
		else
		{
			iVar3 = func_267(uParam0, iVar0);
			if (!func_270(uParam0, iVar0, iVar3, &iVar1, &uVar2))
			{
				return 0;
			}
			else
			{
				func_271(uParam0, iVar0, iVar1, uParam0->f_9 != iVar0);
				uParam0->f_1710++;
			}
		}
	}
	if (uParam0->f_1710 >= 4)
	{
		if (func_265(uParam0, &(uParam0->f_1724)) && func_263(&(uParam0->f_3218)))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(var uParam0)
{
	if (!uParam0->f_1533)
	{
		uParam0->f_1533 = 1;
	}
}

var func_106(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	int iVar4;
	bool bVar5;

	func_272(&(uParam1->f_756));
	func_107(uParam1);
	while ((func_108(uParam0, joaat("MINIGAMEEVENTPLAYERADDED")) || func_108(uParam0, joaat("MINIGAMEEVENTPLAYERREMOVED"))) || (func_108(uParam0, joaat("BLACKJACKEVENTGAMEDATAUPDATED")) && func_273(&(uParam1->f_554), 0)))
	{
		func_111(uParam0, 1, 1);
	}
	if (func_274(uParam1, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_275(uParam1, iVar0, 0, 1))
			{
				if (uParam0->f_1485[iVar0 /*6*/] == 0)
				{
					if (func_116(&(uParam0->f_286), iVar0))
					{
						func_276(uParam0, uParam0, iVar0, 1, 1);
					}
					else
					{
						func_276(uParam0, uParam0, iVar0, 2, 1);
					}
				}
			}
			iVar0++;
		}
	}
	if (func_108(uParam0, joaat("MINIGAMEEVENTTABLELEFT")) || uParam0->f_1533)
	{
		if (uParam0->f_1475 == 0)
		{
			func_277(uParam0, uParam0);
		}
	}
	if (uParam0->f_1475 != 0)
	{
		func_278(uParam0, uParam0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (uParam0->f_1485[iVar1 /*6*/] != 0)
		{
			func_279(uParam0, uParam0, iVar1);
		}
		iVar1++;
	}
	if (!uParam1->f_1543)
	{
		if (((func_113(&(uParam1->f_17), uParam1->f_9) < uParam1->f_10.f_4 && !func_280(&(uParam1->f_17), uParam1->f_9)) && !func_281(&(uParam1->f_17), uParam1->f_9)) && func_282(1) >= func_114(uParam0, uParam1->f_10.f_4))
		{
			if (!func_283(&(uParam0->f_3218)))
			{
				func_284(&(uParam0->f_3218), &(uParam1->f_10));
			}
			else
			{
				func_285(&(uParam0->f_3218), &(uParam1->f_10), &sVar2);
			}
			if (sVar2.f_0 != 0)
			{
				if (func_286(uParam1, uParam1->f_9, &sVar2))
				{
					func_287(&(uParam0->f_3218));
					uParam1->f_1543 = 1;
					uParam1->f_1544 = sVar2.f_1;
				}
			}
		}
		else
		{
			func_287(&(uParam0->f_3218));
		}
	}
	else if (func_113(&(uParam1->f_17), uParam1->f_9) >= uParam1->f_10.f_4)
	{
		uParam1->f_1543 = 0;
		func_137(func_114(uParam0, func_113(&(uParam1->f_17), uParam1->f_9)), 0, 0, 1, 1);
	}
	iVar4 = 0;
	bVar5 = true;
	while (bVar5)
	{
		bVar5 = false;
		if (uParam1->f_1458 != 0)
		{
			Stack.Invoke(uParam1->f_1463[uParam1->f_1458], uParam0, uParam1, &(uParam1->f_17), &(uParam0->f_1724), &(uParam0->f_3218));
			if (StackVal)
			{
				iVar4++;
				bVar5 = true;
			}
		}
		if (iVar4 > 50)
		{
		}
	else
	{
		}
	}
	func_288(uParam0);
	return uParam0->f_1475;
}

void func_107(var uParam0)
{
	struct<2> /*16*/ sVar0;

	if (uParam0->f_285 == 0)
	{
		uParam0->f_285 = MINIGAME::_0xE53A308AC35877A8();
		if (uParam0->f_285 != 0)
		{
			if (uParam0->f_285 == joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
			{
				sVar0.f_1.f_2 = 11;
				sVar0.f_1.f_27 = 4;
				sVar0.f_1.f_27.f_1.f_4 = 2;
				sVar0.f_1.f_27.f_1.f_8 = 2;
				sVar0.f_1.f_27.f_1.f_8.f_1 = 11;
				sVar0.f_1.f_27.f_1.f_8.f_1.f_25 = 11;
				sVar0.f_1.f_27.f_1.f_60.f_4 = 2;
				sVar0.f_1.f_27.f_1.f_60.f_8 = 2;
				sVar0.f_1.f_27.f_1.f_60.f_8.f_1 = 11;
				sVar0.f_1.f_27.f_1.f_60.f_8.f_1.f_25 = 11;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_4 = 2;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_8 = 2;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_8.f_1 = 11;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_8.f_1.f_25 = 11;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_4 = 2;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8 = 2;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8.f_1 = 11;
				sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8.f_1.f_25 = 11;
				if (!MINIGAME::_0x580F34C726387226(&sVar0, 269))
				{
					return;
				}
				uParam0->f_286 = { sVar0.f_1 /*268*/ };
				func_289(&(uParam0->f_17), &(uParam0->f_286), &(uParam0->f_554));
			}
		}
	}
}

bool func_108(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
	}
	else if (uParam0->f_285 == iParam1)
	{
		return true;
	}
	return false;
}

int func_109(var uParam0)
{
	if (uParam0->f_285 != 0)
	{
		return 1;
	}
	return 0;
}

var func_110(var uParam0)
{
	return uParam0->f_285;
}

int func_111(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (uParam0->f_285 == 0)
	{
	}
	else
	{
		if (bParam1)
		{
			if (uParam0->f_285 == joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
			{
				iVar0 = 0;
				while (iVar0 < 11)
				{
					if (uParam0->f_554[iVar0] != 0)
					{
						return 0;
					}
					iVar0++;
				}
			}
		}
		switch (uParam0->f_285)
		{
			case joaat("MINIGAMEEVENTTABLEJOINED"):
				func_290(uParam0);
				break;
			case joaat("MINIGAMEEVENTTABLELEFT"):
				func_291(uParam0);
				break;
			case joaat("MINIGAMEEVENTPLAYERADDED"):
				func_292(uParam0);
				break;
			case joaat("MINIGAMEEVENTPLAYERREMOVED"):
				func_293(uParam0);
				break;
			case joaat("BLACKJACKEVENTGAMEDATAUPDATED"):
				func_294(uParam0);
				break;
			case joaat("BLACKJACKEVENTACTIONINVALID"):
			case joaat("BLACKJACKEVENTGAMECANCELLED"):
				func_295();
				break;
			default:
				break;
		}
		uParam0->f_285 = 0;
		func_107(uParam0);
		return 1;
	}
	return 0;
}

void func_112(var uParam0, int iParam1)
{
	switch (uParam0->f_1626)
	{
		case 0:
			break;
		case 1:
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME_POKER_INTRO"));
			break;
		case 2:
			HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
			break;
	}
	uParam0->f_1626 = iParam1;
	switch (uParam0->f_1626)
	{
		case 0:
			break;
		case 1:
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME_POKER_INTRO"));
			break;
		case 2:
			HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
			break;
	}
}

int func_113(var uParam0, int iParam1)
{
	return uParam0->f_27[iParam1 /*60*/].f_1;
}

char* func_114(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_1564);
}

void func_115(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_296(iParam0, sParam4, iParam5);
	}
	func_297(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_116(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 4) && uParam0->f_27[iParam1 /*60*/] != -1)
	{
		return true;
	}
	return false;
}

bool func_117(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 4) && uParam0->f_946[iParam1 /*46*/] != 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_946[iParam1 /*46*/]))
		{
			return true;
		}
	}
	return false;
}

var func_118(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/];
}

bool func_119(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_198() != -1)
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

bool func_120(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_298(iParam0);
		return func_299(iParam0, joaat("CURRENCY_CASH") /* GXTEntry: "Money" */, iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

void func_121(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_1239 == 0)
	{
	}
	else
	{
		iVar0 = uParam0->f_1239;
		func_300(uParam0);
		iVar1 = func_301(uParam0);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_302(iVar0);
			if (iVar1 == 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar0) || func_119(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				else if (!bParam1)
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				else
				{
					func_303(iVar0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
					func_304(uParam0, 4);
					func_305(uParam0, "idle_a", 1, 1000.0f, -1056964608 /* Float: -8f */, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
		}
		func_164(uParam0, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				if (func_119(iVar0))
				{
					func_307(func_306(iVar0), 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
		}
	}
}

void func_122(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_155(uParam0, iVar0))
		{
			func_308(uParam0, iVar0, bParam1);
		}
		iVar0++;
	}
}

void func_123(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar4 = 0;
		while (iVar4 < 2)
		{
			iVar3 = 0;
			while (iVar3 < 11)
			{
				func_309(uParam0, iVar0, iVar4, iVar3);
				iVar3++;
			}
			iVar4++;
		}
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < 11)
	{
		func_310(uParam0, iVar3);
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		func_311(uParam0, iVar3);
		iVar3++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/][iVar2]))
			{
				AUDIO::_0x341CDD17EFC2472E(iVar0, iVar2);
				OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/][iVar2]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_15[iVar2]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_15[iVar2]));
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/][iVar2]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/][iVar2]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_15[iVar2]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_15[iVar2]));
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_30[iVar2]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_30[iVar2]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_30.f_15[iVar2]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_30.f_15[iVar2]));
			}
			iVar2++;
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_931.f_1[iVar2]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_931.f_1[iVar2]));
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_930))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_930))
			{
				ENTITY::DETACH_ENTITY(uParam0->f_930, true, true);
			}
			OBJECT::DELETE_OBJECT(&(uParam0->f_930));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_931))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_931));
		}
	}
}

void func_124(var uParam0)
{
	func_312(uParam0);
	func_313(uParam0);
	func_314(&(uParam0->f_756));
	*uParam0 = 0;
}

void func_125(var uParam0, bool bParam1)
{
	func_315(uParam0);
	func_316(uParam0);
	func_317(uParam0);
	func_318(uParam0, 1);
	func_122(uParam0, 1);
	func_123(uParam0, 1);
	if (bParam1)
	{
		func_129(uParam0);
	}
}

void func_126(var uParam0)
{
	if (uParam0->f_1)
	{
		func_319(uParam0);
	}
	func_320(&(uParam0->f_32));
	func_130(uParam0);
}

void func_127(var uParam0)
{
	func_321(uParam0);
	func_322(uParam0);
	func_323(uParam0);
	if (uParam0->f_1 != 0 && uParam0->f_1 != 5)
	{
		func_324(uParam0);
	}
}

void func_128(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_325(iVar0))
		{
			func_307(iVar0, iParam1, bParam2, bParam0, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_129(var uParam0)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_38)
	{
		uParam0->f_38 = 0;
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_939);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_940);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_941);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_942);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = 0;
			while (iVar1 < 2)
			{
				STREAMING::REMOVE_ANIM_DICT(func_246(uParam0, iVar0, iVar1));
				iVar1++;
			}
			iVar0++;
		}
		func_326(uParam0);
		func_327();
		func_328(uParam0);
		func_329(uParam0);
	}
}

void func_130(var uParam0)
{
	if (*uParam0)
	{
		*uParam0 = 0;
		CAM::_UNLOAD_CAMERA_DATA_DICT("table_games_cam");
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("P_COIN01X"));
	}
}

void func_131(var uParam0)
{
}

void func_132(var uParam0)
{
	if (uParam0->f_44 == -1)
	{
	}
	else
	{
		ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_44, "NEW_SESSION", 0, 0, false);
	}
}

void func_133(var uParam0)
{
	uParam0->f_1567.f_53 = 1;
}

int func_134(int iParam0, int iParam1)
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

int func_135(int iParam0, int iParam1)
{
	return (iParam1 / func_134(iParam0, iParam1));
}

void func_136(var uParam0, var uParam1)
{
	uParam0->f_1564 = uParam1;
	func_330(&(uParam0->f_3218), uParam1);
}

void func_137(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_331(iParam0);
	if (bParam3)
	{
		func_332(iParam0, sParam1, iParam2);
	}
}

void func_138(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_134(0, uParam0->f_3497.f_3.f_10);
	iVar1 = func_135(0, uParam0->f_3497.f_3.f_10);
	uParam1->f_10.f_4 = 2;
	uParam1->f_10.f_5 = (500 / iVar0);
	uParam1->f_10.f_6 = iVar1;
}

bool func_139(int iParam0, Vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;

	fVar8 = (0.25f * 2.0f);
	if (!func_333(iParam0, vParam1, uParam4, iParam5, &vVar0, 1))
	{
		return false;
	}
	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		return false;
	}
	vVar0.f_2 = (vVar0.z + 0.9f);
	func_334(&iVar5, vVar0, 0.0f, 0.0f, 0.0f, fVar8, fVar8, 1.8f);
	iVar6 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar5, iVar4, 1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		iVar3 = MISC::_GET_PED_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar7, iVar4));
		if (func_335(iParam0, iVar3) || iParam8 == 1)
		{
			if (iParam7 == 0 || (iParam7 == 1 && !PED::IS_PED_A_PLAYER(iVar3)))
			{
				func_336(iVar5);
				ITEMSET::_CLEAR_ITEMSET(iVar4);
				ITEMSET::DESTROY_ITEMSET(iVar4);
				*iParam6 = iVar3;
				return true;
			}
		}
		iVar7++;
	}
	func_336(iVar5);
	ITEMSET::_CLEAR_ITEMSET(iVar4);
	ITEMSET::DESTROY_ITEMSET(iVar4);
	return false;
}

int func_140()
{
	if (func_337())
	{
		return 2;
	}
	return 1;
}

int func_141(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_338(&(uParam0->f_756), iParam1, iParam2, iParam3, 1);
	func_339(&(uParam0->f_756));
	func_107(uParam0);
	if (!func_108(uParam0, joaat("MINIGAMEEVENTTABLEJOINED")))
	{
		return 0;
	}
	else
	{
		func_111(uParam0, 0, 1);
	}
	if (!func_108(uParam0, joaat("BLACKJACKEVENTGAMEDATAUPDATED")))
	{
		return 0;
	}
	else
	{
		func_111(uParam0, 0, 1);
	}
	return 1;
}

bool func_142(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	if (func_340(uParam0, iParam1, iParam2, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9))
	{
		if (bParam3)
		{
			func_341(uParam0, iParam1, fParam10);
		}
		else
		{
			func_342(uParam0, iParam1, 1, bParam11);
		}
		return true;
	}
	return false;
}

void func_143(var uParam0, int iParam1)
{
	int iVar0;

	if (!uParam0->f_1567.f_53)
	{
		return;
	}
	if (uParam0->f_1567[iParam1 /*10*/])
	{
	}
	else
	{
		iVar0 = func_113(&(uParam0->f_17), iParam1);
		uParam0->f_1567[iParam1 /*10*/] = 1;
		uParam0->f_1567[iParam1 /*10*/].f_2 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_3 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_1 = iVar0;
		uParam0->f_1567[iParam1 /*10*/].f_4 = 0.0f;
		uParam0->f_1567[iParam1 /*10*/].f_5 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_6 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_7 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_8 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_9 = 0;
	}
}

void func_144(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_343(uParam0, 1, 0);
	}
	else
	{
		func_343(uParam0, 2, 0);
	}
}

void func_145(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_41))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_41, *uParam0, 0.0f, 0.0f, uParam0->f_3, 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_41);
	}
}

void func_146(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_344(iParam0);
	if (iVar0 <= 10)
	{
		if (iVar0 <= 1)
		{
			strcpy_s(&cVar1, 64, "MG_HELP_UPDATED" /* GXTEntry: "Help Section Updated" */);
		}
		else
		{
			strcpy_s(&cVar1, 64, "MG_HELP_REMINDER" /* GXTEntry: "Help Section" */);
		}
		switch (iParam0)
		{
			case 1:
				func_346(func_345(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_DOMINOES") /* GXTEntry: "Dominoes" */, MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */, joaat("DOMINOES"), -2, 0, 0, 0, 0, 1, 1);
				break;
			case 3:
				func_346(func_345(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_FIVE_FINGER_FILLET") /* GXTEntry: "Five Finger Fillet" */, MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */, joaat("FFF"), -2, 0, 0, 0, 0, 1, 1);
				break;
			case 2:
				func_346(func_345(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_POKER") /* GXTEntry: "Poker" */, MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */, joaat("POKER"), -2, 0, 0, 0, 0, 1, 1);
				break;
			case 0:
				func_346(func_345(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_BLACKJACK") /* GXTEntry: "Blackjack" */, MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC" /* GXTEntry: "Hold ~INPUT_FEED_INTERACT~ for details" */, joaat("BLACKJACK"), -2, 0, 0, 0, 0, 1, 1);
				break;
		}
	}
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

int func_148(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != -1)
	{
		iVar0 = ((uParam0->f_3497.f_37 * 4 + iParam1) % 23);
		return (4 + iVar0);
	}
	return func_347(uParam0);
}

int func_149(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam0->f_285 != 0)
	{
		return 0;
	}
	if (!func_348(&(uParam0->f_756), iParam1, iParam2, iParam3))
	{
		return 0;
	}
	func_272(&(uParam0->f_756));
	func_107(uParam0);
	if (func_108(uParam0, joaat("MINIGAMEEVENTPLAYERADDED")))
	{
		func_111(uParam0, 1, 1);
	}
	if (!func_275(uParam0, iParam1, 0, 1))
	{
		return 0;
	}
	if (bParam4)
	{
		func_111(uParam0, 0, 1);
	}
	return 1;
}

int func_150(int iParam0, int iParam1)
{
	if (Global_1899528.f_61.f_1 != iParam0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	return Global_1899528.f_61.f_134[iParam1];
}

int func_151(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (func_349(uParam0, iParam1, 0, 4, iParam2, iParam3))
	{
		func_350(uParam0, 4, fParam4);
		return 1;
	}
	return 0;
}

void func_152(var uParam0, var uParam1)
{
	func_351(uParam0, &(uParam0->f_1724), uParam1);
}

void func_153(var uParam0)
{
	uParam0->f_275 = func_352("MGBLK_CTX_HOLECAM" /* GXTEntry: "Your cards" */, joaat("INPUT_MINIGAME_BLACKJACK_HAND_VIEW"), 3, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	func_353(uParam0->f_275, 14, 1, 1);
	uParam0->f_276 = func_352("MGBLK_CTX_DEALERCAM" /* GXTEntry: "Dealer\'s cards" */, joaat("INPUT_MINIGAME_BLACKJACK_TABLE_VIEW"), 3, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	func_353(uParam0->f_276, 14, 1, 1);
	uParam0->f_277 = func_352("MGBLK_CTX_FREE_LOOK" /* GXTEntry: "Camera" */, joaat("INPUT_PC_FREE_LOOK"), 3, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
	func_353(uParam0->f_277, 14, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PC_FREE_LOOK"), false);
}

void func_154(var uParam0, int iParam1)
{
	func_354(&(uParam0->f_756), iParam1);
}

bool func_155(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 4) && uParam0->f_946[iParam1 /*46*/] != 0)
	{
		return true;
	}
	return false;
}

int func_156(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_1;
}

int func_157(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_2;
}

var func_158(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_4;
}

var func_159(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_5;
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1899528.f_61.f_1 = iParam0;
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

int func_161(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0->f_946[iParam1 /*46*/];
	iVar1 = uParam0->f_946[iParam1 /*46*/].f_45;
	if (iVar0 == 0)
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (uParam0->f_946[iParam1 /*46*/].f_43)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			}
			if (bParam2)
			{
				func_355(uParam0, iParam1, 0);
			}
			iVar2 = 0;
			while (iVar2 < 29)
			{
				if ((((iVar2 == 1 || iVar2 == 7) || iVar2 == 8) || iVar2 == 9) || iVar2 == 10)
				{
					WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar0, iVar2, true);
				}
				iVar2++;
			}
			func_356(uParam0, iParam1);
			if (uParam0->f_44 != -1)
			{
				ANIMSCENE::_0xAE6DE22DE0ED4554(uParam0->f_44, iVar0);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 534 /*PCF_0x09CAAAC1*/, false);
			if (iVar1 != 255 && iVar1 != PLAYER::PLAYER_ID())
			{
				if (!func_357())
				{
					func_358(iVar1);
					func_359(iVar1);
					func_360(iVar1);
				}
			}
		}
		func_361(uParam0, iParam1);
		uParam0->f_1131--;
	}
	return iVar0;
}

bool func_162(var uParam0)
{
	if (uParam0->f_1239 != 0)
	{
		return true;
	}
	return false;
}

int func_163(var uParam0)
{
	return uParam0->f_1239;
}

int func_164(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_1239;
	if (iVar0 == 0)
	{
	}
	else
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (uParam0->f_1239.f_21)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
			}
			if (bParam1)
			{
				func_362(uParam0, 0);
			}
			iVar1 = 0;
			while (iVar1 < 29)
			{
				if ((((iVar1 == 1 || iVar1 == 7) || iVar1 == 8) || iVar1 == 9) || iVar1 == 10)
				{
					WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar0, iVar1, true);
				}
				iVar1++;
			}
			func_363(uParam0);
			if (uParam0->f_44 != -1)
			{
				ANIMSCENE::_0xAE6DE22DE0ED4554(uParam0->f_44, iVar0);
			}
			func_300(uParam0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CAN_RAGDOLL(iVar0, true);
		}
		func_364(uParam0);
	}
	return iVar0;
}

void func_165()
{
}

int func_166()
{
	return 0;
}

int func_167()
{
	return 0;
}

int func_168(var uParam0)
{
	return 0;
}

int func_169()
{
	return 0;
}

int func_170()
{
	return Global_1899528.f_61.f_2;
}

int func_171(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_172(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_173(int iParam0)
{
	if (!func_172(iParam0))
	{
		return 0;
	}
	return func_366(func_365(iParam0));
}

char* func_174(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_367(bParam1, "OOJBJ", "MGBLK");
		case 1:
			return func_367(bParam1, "OOJDO", "MGDOM");
		case 2:
			return func_367(bParam1, "OOJPO", "MGPKR");
		case 3:
			return func_367(bParam1, "OOJFF", "MGFFF");
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
	}
	return "XXXXX";
}

void func_175(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_176(int iParam0)
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
}

void func_177(bool bParam0)
{
	if (!bParam0)
	{
		func_368(0);
	}
	Global_1935689.f_2 = bParam0;
}

void func_178(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_369(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_370(&Global_1935630, (1 << 22));
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

int func_179()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_371(iVar0))
		{
			return func_372(func_206(), iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 11;
		case 2:
			return 52;
		case 1:
			return 53;
		case 3:
			return 33;
		case 4:
			return 93;
		case 7:
			return 97;
		case 6:
			return 81;
		case 5:
			return 70;
		case 8:
			return 83;
		default:
			break;
	}
	return -1;
}

void func_181(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_373(iParam0))
		{
			func_374(iParam0, (1 << 26));
		}
	}
	else if (func_373(iParam0))
	{
		func_375(iParam0, (1 << 26));
	}
}

char* func_182(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Minigame_Dominoes_Scene";
		case 0:
			return "Minigame_Blackjack_Scene";
		case 2:
			return "Minigame_Poker_Scene";
		case 3:
			return "Minigame_Five_Finger_Fillet_Scene";
		default:
			break;
	}
	return "Minigame_Global_Scene";
}

bool func_183(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] & iParam1) != 0;
}

void func_184(bool bParam0)
{
	if (bParam0)
	{
		func_376(4);
	}
	func_376(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
}

void func_185()
{
	func_377(0);
}

void func_186(var uParam0)
{
	if (uParam0->f_56 && !func_183(uParam0->f_38, 2))
	{
		if (uParam0->f_54 == 0)
		{
			func_188(uParam0, 1);
		}
	}
	else if (uParam0->f_54 != 0)
	{
		func_188(uParam0, 0);
	}
	switch (uParam0->f_54)
	{
		case 0:
			break;
		case 1:
			if (func_97(uParam0->f_55, 1))
			{
				func_188(uParam0, 2);
			}
			break;
		case 2:
			if (!func_97(uParam0->f_55, 1))
			{
				func_188(uParam0, 1);
			}
			else if (func_378(uParam0->f_55, 1))
			{
				func_188(uParam0, 3);
			}
			break;
		case 3:
			break;
	}
}

void func_187(var uParam0)
{
	func_379(uParam0, 0.0f);
}

void func_188(var uParam0, int iParam1)
{
	uParam0->f_54 = iParam1;
	func_380(uParam0);
}

void func_189()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528.f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_190()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528.f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

void func_191(var uParam0)
{
	if (uParam0->f_47)
	{
		uParam0->f_47 = 0;
		AUDIO::STOP_AUDIO_SCENE(func_182(uParam0->f_38));
		func_181(func_180(func_179()), 0);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(Global_35, 9, true);
		func_177(1);
		func_178(1);
		UIFEED::UI_FEED_CLEAR_CHANNEL(2, true, false);
		func_176(0);
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		Stack.Invoke(uParam0->f_103);
	}
}

void func_192(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_198() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_381(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_382();
		Global_1898077.f_9 = func_383(Global_1894899.f_2);
		func_384(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_193(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

void func_194(var uParam0)
{
	if (uParam0->f_77 != 0)
	{
		UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_77);
		uParam0->f_77 = 0;
	}
}

bool func_195()
{
	return Global_1899528.f_2 == 1;
}

void func_196(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_172(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_385(iParam0) && !func_386(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_387(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_385(iParam0))
	{
		iParam2 = -1;
	}
	if (func_388(iParam0) == 3 || (func_388(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_387(iParam0))))
	{
		func_389(func_173(iParam0), func_387(iParam0), iParam2);
		if ((!func_172(Global_1572864.f_8) && !func_390(0, 1, 0)) && !func_391(Global_1935630, (1 << 15)))
		{
			iVar0 = func_392(iParam0);
			if (iVar0 != -1)
			{
				func_192(0);
			}
			else if (func_173(iParam0) == 8)
			{
				iVar0 = func_393();
				if (iVar0 != -1)
				{
					func_192(0);
				}
			}
		}
	}
	func_394(iParam0, 0);
	if (func_171(0) == iParam0)
	{
		func_178(1);
		func_395(0);
		func_396(1);
	}
	func_397(iParam0, 1);
	func_398(iParam0);
}

void func_197(int iParam0, bool bParam1)
{
	if (!func_172(iParam0))
	{
		return;
	}
	if (!func_399(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_387(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_387(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_173(iParam0), func_400(iParam0), func_401(iParam0), func_387(iParam0), Global_36);
		}
	}
	func_394(iParam0, 1);
	bParam1 = bParam1;
}

int func_198()
{
	return Global_1572887.f_12;
}

void func_199(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_200(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_402(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar0 /*20*/].f_19 = iParam1;
}

int func_200(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

float func_201(int iParam0)
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

bool func_202(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (func_403(Global_1898330[iVar0]) == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_203(int iParam0)
{
	if (!func_404(iParam0))
	{
		return false;
	}
	return (!func_405() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_204(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_200(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_402(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_19;
}

bool func_205(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

int func_206()
{
	return Global_1894899.f_2;
}

void func_207(var uParam0)
{
	int iVar0;

	uParam0->f_938 = 0;
	uParam0->f_941 = joaat("P_BLACKJACKCADDY01X");
	func_240(&(uParam0->f_939), uParam0->f_938);
	func_241(&(uParam0->f_942), uParam0->f_938);
	func_243(&(uParam0->f_940), func_242(), uParam0->f_938, 0);
	uParam0->f_943 = 1.5f;
	uParam0->f_944 = 2.0f;
	uParam0->f_945 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_406(uParam0, iVar0);
		func_407(uParam0, iVar0);
		func_408(uParam0, iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_409(uParam0, iVar0, 0);
		func_409(uParam0, iVar0, 1);
		iVar0++;
	}
	func_410(uParam0);
	func_411(uParam0);
	func_412(uParam0);
	func_413(uParam0);
}

void func_208(var uParam0)
{
	func_364(uParam0);
	uParam0->f_1357 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_1360 = { 0.0f, 0.0f, 0.0f /*3*/ };
	func_414(*uParam0, uParam0->f_3, uParam0->f_1357, uParam0->f_1360, &(uParam0->f_1363), &(uParam0->f_1366));
	strcpy_s(&(uParam0->f_1310[0 /*8*/]), 64, "mini_games@blackjack_mg@dealer@seat_01@main");
	strcpy_s(&(uParam0->f_1310[1 /*8*/]), 64, "mini_games@blackjack_mg@dealer@seat_02@main");
	strcpy_s(&(uParam0->f_1310[2 /*8*/]), 64, "mini_games@blackjack_mg@dealer@seat_03@main");
	strcpy_s(&(uParam0->f_1310[3 /*8*/]), 64, "mini_games@blackjack_mg@dealer@seat_04@main");
	strcpy_s(&(uParam0->f_1310[4 /*8*/]), 64, "mini_games@blackjack_mg@dealer@self@main");
	uParam0->f_1351[0] = joaat("CLIPSET@MINI_GAMES@BLACKJACK_MG@DEALER@SEAT_01@MAIN");
	uParam0->f_1351[1] = joaat("CLIPSET@MINI_GAMES@BLACKJACK_MG@DEALER@SEAT_02@MAIN");
	uParam0->f_1351[2] = joaat("CLIPSET@MINI_GAMES@BLACKJACK_MG@DEALER@SEAT_03@MAIN");
	uParam0->f_1351[3] = joaat("CLIPSET@MINI_GAMES@BLACKJACK_MG@DEALER@SEAT_04@MAIN");
	uParam0->f_1351[4] = joaat("CLIPSET@MINI_GAMES@BLACKJACK_MG@DEALER@SELF@MAIN");
	uParam0->f_1293[0] = 61981;
	uParam0->f_1293[1] = 61989;
	uParam0->f_1293[2] = 61997;
	uParam0->f_1293[3] = 62052;
	uParam0->f_1293[4] = 62241;
	uParam0->f_1293[5] = 62401;
	uParam0->f_1293[6] = 62605;
	uParam0->f_1293[7] = 63183;
	uParam0->f_1293[8] = 63512;
	uParam0->f_1293[9] = 63697;
	uParam0->f_1293[10] = 64078;
	uParam0->f_1293[11] = 64644;
	uParam0->f_1293[12] = 65785;
	uParam0->f_1293[13] = 67458;
	uParam0->f_1293[14] = 67706;
	uParam0->f_1293[15] = 67848;
}

void func_209(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_361(uParam0, iVar0);
		iVar0++;
	}
	uParam0->f_1181[0 /*3*/] = { Vector(50.0f, -7.9116f, 112.5219f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
	uParam0->f_1194[0 /*3*/] = { 0.0f, 0.0f, (-112.4086f + 180.0f) /*3*/ };
	uParam0->f_1181[1 /*3*/] = { Vector(50.0f, -73.55062f, 45.94575f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
	uParam0->f_1194[1 /*3*/] = { 0.0f, 0.0f, (-157.4087f + 180.0f) /*3*/ };
	uParam0->f_1181[2 /*3*/] = { Vector(50.0f, -72.85871f, -47.61618f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
	uParam0->f_1194[2 /*3*/] = { 0.0f, 0.0f, (157.5913f + 180.0f) /*3*/ };
	uParam0->f_1181[3 /*3*/] = { Vector(50.0f, -6.31211f, -113.1842f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
	uParam0->f_1194[3 /*3*/] = { 0.0f, 0.0f, (112.5913f + 180.0f) /*3*/ };
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_414(*uParam0, uParam0->f_3, uParam0->f_1181[iVar0 /*3*/], uParam0->f_1194[iVar0 /*3*/], &(uParam0->f_1207[iVar0 /*3*/]), &(uParam0->f_1220[iVar0 /*3*/]));
		iVar0++;
	}
	strcpy_s(&(uParam0->f_1152[0 /*8*/]), 64, "mini_games@blackjack_mg@player@base");
	strcpy_s(&(uParam0->f_1152[1 /*8*/]), 64, "mini_games@blackjack_mg@player_02@base");
	strcpy_s(&(uParam0->f_1152[2 /*8*/]), 64, "mini_games@blackjack_mg@fem_player@base");
	uParam0->f_1177[0] = -1470567942;
	uParam0->f_1177[1] = 623585751;
	uParam0->f_1177[2] = -545674439;
	uParam0->f_1132[0] = 67990;
	uParam0->f_1132[1] = 67998;
	uParam0->f_1132[2] = 68006;
	uParam0->f_1132[3] = 68065;
	uParam0->f_1132[4] = 69378;
	uParam0->f_1132[5] = 69778;
	uParam0->f_1132[6] = 69999;
	uParam0->f_1132[7] = 70995;
	uParam0->f_1132[8] = 71243;
	uParam0->f_1132[9] = 72037;
	uParam0->f_1132[10] = 72730;
	uParam0->f_1132[11] = 74297;
	uParam0->f_1132[12] = 74872;
	uParam0->f_1132[13] = 75039;
	uParam0->f_1132[14] = 75206;
	uParam0->f_1132[15] = 75401;
	uParam0->f_1132[16] = 75584;
	uParam0->f_1132[17] = 75698;
	uParam0->f_1132[18] = 76110;
}

void func_210(var uParam0)
{
	uParam0->f_41 = -1;
}

void func_211(var uParam0)
{
	uParam0->f_44 = -1;
}

void func_212(var uParam0, Vector3 vParam1, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_42 != 0)
	{
		return;
	}
	iVar0 = 1;
	if ((iVar0 + 31 / 32) < 1)
	{
		return;
	}
	iVar1 = 1;
	if ((iVar1 + 31 / 32) < 1)
	{
		return;
	}
	uParam0->f_42 = 0;
	uParam0->f_43 = -1;
	MISC::SET_BIT(&(uParam0->f_42), 0);
	uParam0->f_44 = -1;
	uParam0->f_45 = -1;
	uParam0->f_46 = 0.0f;
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_38[iVar2] = 0;
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 1)
	{
		uParam0->f_40[iVar2] = 0;
		iVar2++;
	}
	uParam0->f_91 = 76129;
	uParam0->f_92 = 76129;
	uParam0->f_51 = 0;
	uParam0->f_47 = { vParam1 /*3*/ };
	uParam0->f_50 = uParam4;
}

int func_213(var uParam0, int iParam1, Vector3 vParam2, Vector3 vParam5, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13)
{
	if (uParam0->f_42 == 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return 0;
	}
	uParam0->f_13[iParam1 /*12*/] = { vParam2 /*3*/ };
	uParam0->f_13[iParam1 /*12*/].f_3 = { vParam5 /*3*/ };
	uParam0->f_13[iParam1 /*12*/].f_6 = fParam8;
	uParam0->f_13[iParam1 /*12*/].f_7 = iParam9;
	uParam0->f_13[iParam1 /*12*/].f_8 = iParam10;
	uParam0->f_13[iParam1 /*12*/].f_9 = iParam11;
	uParam0->f_13[iParam1 /*12*/].f_10 = fParam12;
	uParam0->f_13[iParam1 /*12*/].f_11 = fParam13;
	MISC::SET_BIT(&(uParam0->f_40[(iParam1 / 32)]), (iParam1 % 32));
	return 1;
}

void func_214(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_215(var uParam0)
{
	uParam0->f_239 = 0;
	uParam0->f_239.f_1 = 0;
	uParam0->f_239.f_2 = 0;
	uParam0->f_239.f_12 = 0;
	uParam0->f_239.f_13 = 0;
	func_451(&(uParam0->f_239.f_3));
	uParam0->f_253 = 0;
	uParam0->f_253.f_1 = 0;
	uParam0->f_253.f_3 = 0;
	uParam0->f_253.f_13 = 0;
	uParam0->f_253.f_14 = 0;
	uParam0->f_253.f_15 = 0;
	func_451(&(uParam0->f_253.f_4));
	uParam0->f_269 = 0;
	uParam0->f_269.f_2 = 0;
	uParam0->f_269.f_3 = 0;
	uParam0->f_269.f_4 = 0;
	uParam0->f_269.f_5 = 0;
}

void func_216(var uParam0)
{
	int iVar0;

	uParam0->f_229 = 0;
	uParam0->f_227 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_452(uParam0, iVar0);
		iVar0++;
	}
}

void func_217(var uParam0, Vector3 vParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_211[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_226 = MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16));
	func_453(&Global_1899750, vParam1 - Vector(2.0f, 0.0f, 0.0f));
}

void func_218(var uParam0)
{
	int iVar0;

	*uParam0 = -1;
	uParam0->f_1 = 0;
	func_454(&(uParam0->f_2));
	uParam0->f_2.f_24 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_455(&(uParam0->f_27[iVar0 /*60*/]));
		iVar0++;
	}
}

void func_219(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1567[iVar0 /*10*/] = 0;
		uParam0->f_1567[iVar0 /*10*/].f_2 = 0;
		uParam0->f_1567[iVar0 /*10*/].f_3 = 0;
		uParam0->f_1567[iVar0 /*10*/].f_1 = 0;
		uParam0->f_1567[iVar0 /*10*/].f_4 = 0.0f;
		uParam0->f_1567[iVar0 /*10*/].f_5 = 0;
		uParam0->f_1567[iVar0 /*10*/].f_6 = 0;
		uParam0->f_1567[iVar0 /*10*/].f_7 = 0;
		uParam0->f_1567[iVar0 /*10*/].f_8 = 0;
		uParam0->f_1567[iVar0 /*10*/].f_9 = 0;
		iVar0++;
	}
	uParam0->f_1567.f_41 = 0;
	uParam0->f_1567.f_41.f_2 = -1;
	uParam0->f_1567.f_41.f_3 = -1;
	func_214(&(uParam0->f_1567.f_41.f_4));
	func_214(&(uParam0->f_1567.f_41.f_7));
	uParam0->f_1567.f_53 = 0;
	uParam0->f_1567.f_54 = 0;
	uParam0->f_1567.f_55 = 0;
	uParam0->f_1567.f_56 = 0;
}

void func_220(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1705[iVar0] = 0;
		iVar0++;
	}
}

void func_221(var uParam0)
{
	uParam0->f_1654[0 /*7*/] = 0.6f;
	uParam0->f_1654[0 /*7*/].f_1 = 0.9f;
	uParam0->f_1654[0 /*7*/].f_2 = 0.4f;
	uParam0->f_1654[0 /*7*/].f_3 = 0.6f;
	uParam0->f_1654[0 /*7*/].f_4 = 70;
	uParam0->f_1654[0 /*7*/].f_5 = 65;
	uParam0->f_1654[0 /*7*/].f_6 = 2;
	uParam0->f_1654[1 /*7*/] = 0.6f;
	uParam0->f_1654[1 /*7*/].f_1 = 0.9f;
	uParam0->f_1654[1 /*7*/].f_2 = 0.0f;
	uParam0->f_1654[1 /*7*/].f_3 = 0.0f;
	uParam0->f_1654[1 /*7*/].f_4 = 10;
	uParam0->f_1654[1 /*7*/].f_5 = 30;
	uParam0->f_1654[1 /*7*/].f_6 = 1;
	uParam0->f_1654[2 /*7*/] = 0.6f;
	uParam0->f_1654[2 /*7*/].f_1 = 0.9f;
	uParam0->f_1654[2 /*7*/].f_2 = 0.0f;
	uParam0->f_1654[2 /*7*/].f_3 = 0.0f;
	uParam0->f_1654[2 /*7*/].f_4 = 40;
	uParam0->f_1654[2 /*7*/].f_5 = 0;
	uParam0->f_1654[2 /*7*/].f_6 = 1;
	uParam0->f_1654[3 /*7*/] = 0.15f;
	uParam0->f_1654[3 /*7*/].f_1 = 0.15f;
	uParam0->f_1654[3 /*7*/].f_2 = 0.4f;
	uParam0->f_1654[3 /*7*/].f_3 = 0.8f;
	uParam0->f_1654[3 /*7*/].f_4 = 75;
	uParam0->f_1654[3 /*7*/].f_5 = 50;
	uParam0->f_1654[3 /*7*/].f_6 = 3;
	uParam0->f_1654[4 /*7*/] = 0.0f;
	uParam0->f_1654[4 /*7*/].f_1 = 0.0f;
	uParam0->f_1654[4 /*7*/].f_2 = 0.0f;
	uParam0->f_1654[4 /*7*/].f_3 = 0.0f;
	uParam0->f_1654[4 /*7*/].f_4 = 100;
	uParam0->f_1654[4 /*7*/].f_5 = 100;
	uParam0->f_1654[4 /*7*/].f_6 = 1;
	uParam0->f_1654[5 /*7*/] = 0.25f;
	uParam0->f_1654[5 /*7*/].f_1 = 0.5f;
	uParam0->f_1654[5 /*7*/].f_2 = 0.0f;
	uParam0->f_1654[5 /*7*/].f_3 = 0.0f;
	uParam0->f_1654[5 /*7*/].f_4 = 100;
	uParam0->f_1654[5 /*7*/].f_5 = 0;
	uParam0->f_1654[5 /*7*/].f_6 = 1;
	uParam0->f_1654[6 /*7*/] = 0.15f;
	uParam0->f_1654[6 /*7*/].f_1 = 0.15f;
	uParam0->f_1654[6 /*7*/].f_2 = 0.4f;
	uParam0->f_1654[6 /*7*/].f_3 = 0.8f;
	uParam0->f_1654[6 /*7*/].f_4 = 75;
	uParam0->f_1654[6 /*7*/].f_5 = 100;
	uParam0->f_1654[6 /*7*/].f_6 = 3;
}

void func_222(var uParam0)
{
	int iVar0;

	MINIGAME::_0x6480723D3BE535B6(-1150372370);
	func_218(uParam0);
	func_456(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_543[iVar0] = 0;
		uParam0->f_548[iVar0 /*3*/] = 0;
		uParam0->f_561[iVar0 /*2*/] = 0;
		iVar0++;
	}
	uParam0->f_570[0 /*2*/] = 0;
	uParam0->f_570[0 /*2*/].f_1 = 0;
	uParam0->f_579 = 0;
	uParam0->f_580 = 0;
	uParam0->f_581 = 1;
	uParam0->f_582 = -1;
	func_457(&(uParam0->f_268));
	func_214(&(uParam0->f_583));
	func_214(&(uParam0->f_586));
	func_214(&(uParam0->f_589));
	func_458(&(uParam0->f_592));
	uParam0->f_699 = 0;
	func_459(uParam0);
	uParam0->f_701 = 0;
}

int func_223(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = uParam1->f_9;
	switch (uParam1->f_1459)
	{
		case 0:
			if ((!func_155(uParam3, iVar0) || !func_460(uParam3, iVar0, 3)) || func_461(uParam3, iVar0, 0))
			{
				func_462(&(uParam0->f_3093), uParam3, 0);
				func_463(uParam1, 1);
				return 1;
			}
			break;
		case 1:
			if (!func_155(uParam3, iVar0) || !func_464(uParam3, iVar0, 3))
			{
				func_463(uParam1, 2);
				return 1;
			}
			break;
		case 2:
			if (!func_465(&(uParam0->f_3497)))
			{
				func_466(uParam0, uParam1, uParam2, 0);
				func_343(uParam1, 2, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

void func_224(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1463[iParam1] = iParam2;
}

int func_225(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	switch (uParam1->f_1459)
	{
		case 0:
			if (func_263(&(uParam0->f_3218)))
			{
				func_467(uParam0, uParam2);
				func_468(uParam1);
				uParam1->f_1553 = 0;
				uParam1->f_1550 = 0;
				uParam1->f_1552 = 0;
				func_379(&(uParam1->f_1540), 5.0f);
				func_379(&(uParam1->f_1537), 5.0f);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					func_379(&(uParam1->f_1711[iVar0 /*3*/]), -MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 6.0f));
					iVar0++;
				}
				func_463(uParam1, 5);
				return 1;
			}
			break;
		case 5:
			if ((!uParam1->f_1552 && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
			{
				uParam1->f_1552 = func_471(uParam1, uParam3);
			}
			if (!uParam1->f_1553)
			{
				iVar2 = 0;
				if (!func_472(uParam4))
				{
					if (func_113(uParam2, uParam1->f_9) >= uParam1->f_10.f_4)
					{
						func_473(uParam4, uParam2, &(uParam1->f_10), uParam1->f_9, 0);
					}
				}
				else
				{
					func_474(uParam4, uParam2, &(uParam1->f_10), &iVar2);
				}
				if (iVar2 != 0)
				{
					if (func_286(uParam1, uParam1->f_9, &iVar2))
					{
						func_475(uParam0);
						func_476(uParam4);
						uParam1->f_1553 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_116(uParam2, iVar0) && iVar0 != uParam1->f_9)
				{
					if (func_155(uParam3, iVar0))
					{
						if (!func_464(uParam3, iVar0, 3))
						{
							if (func_477(&(uParam1->f_1711[iVar0 /*3*/])) && func_478(&(uParam1->f_1711[iVar0 /*3*/]), 0.0f))
							{
								func_479(uParam1, iVar0, &iVar2);
								func_286(uParam1, iVar0, &iVar2);
								func_214(&(uParam1->f_1711[iVar0 /*3*/]));
							}
						}
						else if (uParam1->f_1553)
						{
							func_480(uParam3, iVar0, 1);
						}
					}
				}
				iVar0++;
			}
			if (func_162(uParam3))
			{
				if (!uParam1->f_1550)
				{
					if (func_481(uParam3, 1))
					{
						func_482(uParam3);
						uParam1->f_1550 = 1;
					}
				}
				else if (!func_483(uParam3, 15) && !uParam1->f_1553)
				{
					if (func_481(uParam3, 1))
					{
						func_484(uParam3, uParam1->f_9);
						func_485(uParam3, 3);
					}
				}
			}
			if (!uParam1->f_1553)
			{
				if ((func_478(&(uParam1->f_1537), 22.0f) && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
				{
					if (func_162(uParam3))
					{
						func_486(uParam1, uParam3);
						func_379(&(uParam1->f_1537), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 2.0f));
					}
				}
				if ((func_478(&(uParam1->f_1540), 30.0f) && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
				{
					iVar0 = func_487(uParam2, uParam1->f_9);
					if (func_155(uParam3, iVar0))
					{
						func_488(uParam1, uParam3, uParam2, iVar0, uParam1->f_9);
						func_379(&(uParam1->f_1540), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 2.0f));
					}
				}
			}
			if (func_108(uParam0, joaat("BLACKJACKEVENTACTIONINVALID")))
			{
				func_476(uParam4);
				uParam1->f_1553 = 0;
				func_111(uParam0, 1, 1);
				return 1;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_275(uParam1, iVar0, 1, 1))
				{
					func_489(uParam1, iVar0, 1, 1);
					func_490(uParam0, uParam2, iVar0);
					func_491(&(uParam0->f_1724), iVar0, func_113(uParam2, iVar0), 1);
				}
				if ((func_275(uParam1, iVar0, 2, 1) && func_155(uParam3, iVar0)) && func_480(uParam3, iVar0, 1))
				{
					func_489(uParam1, iVar0, 2, 1);
					func_493(uParam3, iVar0, 0, 0, func_492(uParam2, iVar0, 0));
					func_494(uParam1, uParam3, uParam2, iVar0);
					func_495(uParam0, iVar0, 2, 15);
					func_496(uParam0, uParam2, iVar0);
					if (func_492(uParam2, iVar0, 0) >= (13 * uParam1->f_10.f_4) && MISC::GET_GAME_TIMER() > (uParam1->f_1556 + 240000))
					{
						func_497(uParam1, 4, iVar0, -1, 0, 1);
					}
					func_498(uParam1, iVar0);
				}
				if ((func_275(uParam1, iVar0, 3, 1) && func_155(uParam3, iVar0)) && func_480(uParam3, iVar0, 1))
				{
					func_489(uParam1, iVar0, 3, 1);
					func_499(uParam3, iVar0, -1);
					func_500(uParam1, uParam3, uParam2, iVar0);
					func_495(uParam0, iVar0, 2, 15);
					func_501(uParam0, iVar0);
				}
				iVar0++;
			}
			bVar1 = false;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_155(uParam3, iVar0))
				{
					if ((func_464(uParam3, iVar0, 8) || func_464(uParam3, iVar0, 13)) || func_502(uParam3, iVar0))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (func_162(uParam3))
			{
				if (func_503(uParam3, 5) || func_504(uParam3))
				{
					bVar1 = true;
				}
			}
			if (!func_505(uParam1) && !bVar1)
			{
				if (func_506(uParam1, 0, 1))
				{
					func_507(uParam0);
					func_476(uParam4);
					func_485(uParam3, 0);
					uParam1->f_1553 = 0;
					func_343(uParam1, 3, 0);
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_226(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (uParam1->f_1459 == 0)
	{
		uParam1->f_1563 = 0;
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET(uParam1->f_1563, iVar1))
			{
				if (!func_116(uParam2, iVar1) || !func_155(uParam3, iVar1))
				{
					MISC::CLEAR_BIT(&(uParam1->f_1563), iVar1);
				}
				else
				{
					iVar5 = func_508(uParam2, iVar1, 0);
					if (iVar5 == 21)
					{
						if (func_480(uParam3, iVar1, 1))
						{
							func_509(uParam3, iVar1, 0, 1);
							func_511(uParam1, uParam3, uParam2, iVar1, func_510(uParam1, iVar1));
							MISC::CLEAR_BIT(&(uParam1->f_1563), iVar1);
							func_512(uParam2, &iVar6);
							func_495(uParam0, iVar1, 3, -1 ^ iVar6);
							func_497(uParam1, 6, iVar1, -1, 0, 1);
						}
					}
					else
					{
						func_513(uParam1, uParam3, uParam2, iVar1);
						MISC::CLEAR_BIT(&(uParam1->f_1563), iVar1);
					}
				}
			}
			iVar1++;
		}
	}
	switch (uParam1->f_1459)
	{
		case 0:
			func_514(uParam1, 0, 1);
			func_515(uParam3, uParam2);
			func_516(uParam3, uParam2);
			func_517(uParam0, uParam2);
			func_518(uParam1, uParam2);
			uParam1->f_1552 = 0;
			if ((func_519(uParam2) || func_520(uParam2)) || func_521(uParam2))
			{
				bVar3 = true;
			}
			else
			{
				bVar3 = false;
			}
			func_522(uParam1, &iVar0);
			func_523(uParam3, iVar0, bVar3);
			func_524(0);
			func_463(uParam1, 6);
			return 1;
		case 6:
			if (func_478(&(uParam1->f_1460), 0.5f) && func_525(uParam3))
			{
				if (func_162(uParam3) && func_481(uParam3, 1))
				{
					if ((func_519(uParam2) || func_520(uParam2)) || func_521(uParam2))
					{
						bVar3 = true;
					}
					else
					{
						bVar3 = false;
					}
					func_522(uParam1, &iVar0);
					func_526(uParam3, iVar0, bVar3, 0);
					func_527(uParam3);
					func_463(uParam1, 8);
					return 0;
				}
			}
			break;
		case 8:
			if ((!uParam1->f_1552 && !func_469(uParam3)) && !func_470(uParam1))
			{
				uParam1->f_1552 = func_528(uParam1, uParam3);
			}
			if (func_503(uParam3, 6))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_529(uParam4, iVar1))
					{
						iVar2 = 0;
						while (iVar2 < 2)
						{
							iVar7 = ((0 + iVar1) + iVar2 * 4);
							if (func_530(uParam3, iVar7))
							{
								func_531(uParam0, uParam2, iVar1, iVar2);
								if (iVar2 == 1)
								{
									MISC::SET_BIT(&(uParam1->f_1563), iVar1);
									if (func_532(uParam2, iVar1))
									{
										func_533(uParam1, uParam3);
									}
								}
								func_534(uParam3, iVar7);
							}
							iVar2++;
						}
					}
					iVar1++;
				}
				if (func_530(uParam3, 9))
				{
					func_535(uParam0, uParam2, 1);
					func_534(uParam3, 9);
				}
			}
			else
			{
				func_536(uParam0, uParam2);
				func_537(uParam3);
				func_463(uParam1, 9);
				return 1;
			}
			break;
		case 9:
			bVar4 = uParam1->f_1563 == false;
			if (bVar4)
			{
				func_463(uParam1, 4);
				return 1;
			}
			break;
		case 4:
			if (func_519(uParam2))
			{
				func_343(uParam1, 4, 0);
				return 1;
			}
			else
			{
				if (func_274(uParam1, 6, 1))
				{
					func_538(uParam1, 6, 1);
				}
				if (func_274(uParam1, 7, 1))
				{
					func_538(uParam1, 7, 1);
				}
				if (!func_505(uParam1))
				{
					if (func_506(uParam1, 2, 1) && func_539(&(uParam1->f_286)))
					{
						func_343(uParam1, 5, 0);
						return 1;
					}
					else if ((func_506(uParam1, 1, 1) || func_506(uParam1, 2, 1)) || func_506(uParam1, 3, 1))
					{
						func_343(uParam1, 6, 0);
						return 1;
					}
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_227(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	switch (uParam1->f_1459)
	{
		case 0:
			func_463(uParam1, 18);
			return 1;
		case 18:
			func_540(uParam0, uParam2);
			if (func_280(uParam2, uParam1->f_9) && func_113(uParam2, uParam1->f_9) > 0)
			{
				func_473(uParam4, uParam2, &(uParam1->f_10), uParam1->f_9, 1);
			}
			func_541(uParam1);
			uParam1->f_1553 = 0;
			uParam1->f_1552 = 0;
			func_379(&(uParam1->f_1540), 5.0f);
			func_379(&(uParam1->f_1537), 5.0f);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				func_379(&(uParam1->f_1711[iVar0 /*3*/]), -MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 3.0f));
				iVar0++;
			}
			func_463(uParam1, 19);
			return 1;
		case 19:
			if ((!uParam1->f_1552 && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
			{
				uParam1->f_1552 = func_542(uParam1, uParam3);
			}
			if (func_280(uParam2, uParam1->f_9) && !uParam1->f_1553)
			{
				iVar2 = 0;
				func_474(uParam4, uParam2, &(uParam1->f_10), &iVar2);
				if (iVar2 == 0)
				{
					if (func_113(uParam2, uParam1->f_9) == 0)
					{
						func_543(&iVar2);
					}
				}
				if (iVar2 != 0)
				{
					if (func_286(uParam1, uParam1->f_9, &iVar2))
					{
						func_544(uParam0);
						func_476(uParam4);
						uParam1->f_1553 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_116(uParam2, iVar0) && iVar0 != uParam1->f_9)
				{
					if (func_477(&(uParam1->f_1711[iVar0 /*3*/])) && func_478(&(uParam1->f_1711[iVar0 /*3*/]), 0.0f))
					{
						func_545(uParam1, iVar0, &iVar2);
						func_286(uParam1, iVar0, &iVar2);
						func_214(&(uParam1->f_1711[iVar0 /*3*/]));
					}
				}
				iVar0++;
			}
			if ((func_162(uParam3) && func_546(uParam3) != 4) && !func_483(uParam3, 3))
			{
				if (func_481(uParam3, 1))
				{
					func_547(uParam3, 4);
				}
			}
			if (!uParam1->f_1553)
			{
				if (func_162(uParam3) && !func_483(uParam3, 15))
				{
					if (func_481(uParam3, 1))
					{
						func_484(uParam3, uParam1->f_9);
						func_485(uParam3, 3);
					}
				}
				if ((func_478(&(uParam1->f_1537), 22.0f) && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
				{
					if (func_162(uParam3))
					{
						func_486(uParam1, uParam3);
						func_379(&(uParam1->f_1537), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 2.0f));
					}
				}
				if ((func_478(&(uParam1->f_1540), 30.0f) && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
				{
					iVar0 = func_487(uParam2, uParam1->f_9);
					if (func_155(uParam3, iVar0))
					{
						func_488(uParam1, uParam3, uParam2, iVar0, uParam1->f_9);
						func_379(&(uParam1->f_1540), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 2.0f));
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if ((func_275(uParam1, iVar0, 4, 1) && func_155(uParam3, iVar0)) && func_480(uParam3, iVar0, 1))
				{
					func_489(uParam1, iVar0, 4, 1);
					func_548(uParam0, uParam2, iVar0);
					func_494(uParam1, uParam3, uParam2, iVar0);
					func_495(uParam0, iVar0, 2, 15);
					func_550(uParam3, iVar0, func_549(uParam2, iVar0));
				}
				if ((func_275(uParam1, iVar0, 5, 1) && func_155(uParam3, iVar0)) && func_480(uParam3, iVar0, 1))
				{
					func_489(uParam1, iVar0, 5, 1);
					func_551(uParam0, uParam2, iVar0);
					func_500(uParam1, uParam3, uParam2, iVar0);
					func_495(uParam0, iVar0, 2, 15);
					func_499(uParam3, iVar0, -1);
				}
				iVar0++;
			}
			bVar1 = false;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_155(uParam3, iVar0))
				{
					if (func_464(uParam3, iVar0, 9) || func_464(uParam3, iVar0, 13))
					{
						bVar1 = true;
					}
				}
				iVar0++;
			}
			if (func_162(uParam3) && func_546(uParam3) != 4)
			{
				bVar1 = true;
			}
			if (func_274(uParam1, 6, 1))
			{
				func_538(uParam1, 6, 1);
			}
			if (func_274(uParam1, 7, 1))
			{
				func_538(uParam1, 7, 1);
			}
			if (!func_505(uParam1) && !bVar1)
			{
				if (func_506(uParam1, 2, 1) && func_539(&(uParam1->f_286)))
				{
					func_552(uParam0);
					func_476(uParam4);
					func_485(uParam3, 0);
					func_343(uParam1, 5, 0);
					return 1;
				}
				else if ((func_506(uParam1, 1, 1) || func_506(uParam1, 2, 1)) || func_506(uParam1, 3, 1))
				{
					func_552(uParam0);
					func_476(uParam4);
					func_485(uParam3, 0);
					func_343(uParam1, 6, 0);
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_228(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	iVar12 = 0;
	while (iVar12 < 4)
	{
		if (func_553(uParam1, iVar12, &iVar0))
		{
			switch (iVar0)
			{
				case 1:
					if (!func_155(uParam3, iVar12))
					{
						func_554(uParam1, iVar12);
					}
					else if (func_480(uParam3, iVar12, 1))
					{
						if (func_555(uParam1, iVar12, &iVar1, &iVar2, &iVar3))
						{
							func_509(uParam3, iVar12, iVar1, iVar2);
							func_556(uParam1, uParam3, uParam2, iVar12, iVar3);
						}
						func_554(uParam1, iVar12);
					}
					break;
				case 2:
					if (!func_155(uParam3, iVar12))
					{
						func_554(uParam1, iVar12);
					}
					else if (func_480(uParam3, iVar12, 1))
					{
						func_557(uParam1, iVar12, &uVar4, 0, -1);
						func_558(uParam2, iVar12, &uVar4, &uVar8);
						func_559(uParam3, iVar12, &uVar8, func_113(uParam2, iVar12));
						func_495(uParam0, iVar12, 2, 15);
						if (!uParam1->f_1555)
						{
							func_560(uParam1, uParam3, uParam2, iVar12);
							uParam1->f_1555 = 1;
						}
						func_554(uParam1, iVar12);
					}
					break;
				case 3:
					if (!func_155(uParam3, iVar12))
					{
						func_554(uParam1, iVar12);
					}
					else if (func_480(uParam3, iVar12, 1))
					{
						func_561(uParam3, iVar12, func_113(uParam2, iVar12));
						func_495(uParam0, iVar12, 2, 15);
						if (!uParam1->f_1555)
						{
							func_560(uParam1, uParam3, uParam2, iVar12);
							uParam1->f_1555 = 1;
						}
						func_554(uParam1, iVar12);
					}
					break;
				default:
					func_554(uParam1, iVar12);
					break;
			}
		}
		iVar12++;
	}
	switch (uParam1->f_1459)
	{
		case 0:
			if (func_562(&(uParam0->f_3218)))
			{
				func_514(uParam1, 2, 1);
				func_516(uParam3, uParam2);
				func_563(&(uParam0->f_3218));
				func_564(uParam0);
				uParam1->f_1557 = 0;
				uParam1->f_1558 = 0;
				uParam1->f_1559 = 0;
				uParam1->f_1560 = 0;
				uParam1->f_1561 = 0;
				uParam1->f_1562 = 0;
				uParam1->f_1555 = 0;
				func_463(uParam1, 10);
				return 1;
			}
			break;
		case 10:
			if (func_162(uParam3) && func_546(uParam3) != 4)
			{
				if (func_481(uParam3, 1))
				{
					func_547(uParam3, 4);
					func_463(uParam1, 11);
					return 1;
				}
			}
			else
			{
				func_463(uParam1, 11);
				return 1;
			}
			break;
		case 11:
			if (func_162(uParam3) && func_481(uParam3, 1))
			{
				func_565(uParam1, &iVar13);
				func_566(uParam1, &iVar14);
				func_522(uParam1, &iVar15);
				iVar16 = (iVar15 & func_567(iVar14));
				func_568(uParam3, iVar13, iVar16, iVar15);
				func_527(uParam3);
				func_485(uParam3, 2);
				func_463(uParam1, 12);
				return 1;
			}
			break;
		case 12:
			if (func_530(uParam3, 0))
			{
				func_569(uParam2, &iVar17);
				if (!func_570(uParam1, iVar17))
				{
					func_571(uParam0, uParam2);
					func_572(uParam0, uParam2);
					func_573(uParam0, uParam1, uParam2);
					func_574(uParam0, uParam1, uParam2);
					func_533(uParam1, uParam3);
					func_575(uParam1, iVar17, 1, 0.0f, 0.0f, 0.25f, 0.5f, 0);
					func_534(uParam3, 0);
				}
			}
			else
			{
				if (func_530(uParam3, 1))
				{
					func_565(uParam1, &iVar17);
					if (!func_570(uParam1, iVar17))
					{
						func_575(uParam1, iVar17, 3, 0.0f, 0.0f, 0.5f, 1.0f, 0);
						func_534(uParam3, 1);
					}
				}
				if (func_530(uParam3, 2))
				{
					func_566(uParam1, &iVar17);
					if (!func_570(uParam1, iVar17))
					{
						func_575(uParam1, iVar17, 2, 0.0f, 0.0f, 0.5f, 1.0f, 0);
						func_534(uParam3, 2);
					}
				}
			}
			if (!func_503(uParam3, 10) && !func_576(uParam3))
			{
				func_537(uParam3);
				func_463(uParam1, 4);
			}
			break;
		case 4:
			if (!func_577(uParam1))
			{
				if (func_506(uParam1, 3, 1))
				{
					func_578(&(uParam0->f_3218));
					func_343(uParam1, 10, 0);
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_229(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	var uVar1;
	var uVar5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;

	iVar9 = 0;
	while (iVar9 < 4)
	{
		if (func_553(uParam1, iVar9, &iVar0))
		{
			switch (iVar0)
			{
				case 2:
					if (!func_155(uParam3, iVar9))
					{
						func_554(uParam1, iVar9);
					}
					else if (func_480(uParam3, iVar9, 1))
					{
						func_557(uParam1, iVar9, &uVar1, 0, -1);
						func_558(uParam2, iVar9, &uVar1, &uVar5);
						func_559(uParam3, iVar9, &uVar5, func_113(uParam2, iVar9));
						func_495(uParam0, iVar9, 2, 15);
						if (!uParam1->f_1555)
						{
							func_579(uParam1, uParam3, uParam2, iVar9);
							uParam1->f_1555 = 1;
						}
						func_554(uParam1, iVar9);
					}
					break;
				default:
					func_554(uParam1, iVar9);
					break;
			}
		}
		iVar9++;
	}
	switch (uParam1->f_1459)
	{
		case 0:
			uParam1->f_1555 = 0;
			if ((func_519(uParam2) || func_520(uParam2)) || func_580(uParam1))
			{
				if (func_562(&(uParam0->f_3218)))
				{
					func_563(&(uParam0->f_3218));
					if (func_519(uParam2) || func_520(uParam2))
					{
						func_564(uParam0);
					}
					func_463(uParam1, 11);
					return 1;
				}
			}
			else
			{
				func_463(uParam1, 4);
				return 1;
			}
			break;
		case 11:
			if (func_162(uParam3) && func_481(uParam3, 1))
			{
				bVar13 = (func_519(uParam2) || func_520(uParam2));
				func_565(uParam1, &iVar10);
				func_566(uParam1, &iVar11);
				func_522(uParam1, &iVar12);
				func_581(uParam3, bVar13, iVar10, iVar11, iVar12);
				func_527(uParam3);
				func_582(uParam0, uParam1, uParam2);
				func_583(uParam0, uParam1, uParam2);
				func_463(uParam1, 12);
				return 1;
			}
			break;
		case 12:
			if (func_530(uParam3, 0))
			{
				func_584(uParam0);
				func_534(uParam3, 0);
			}
			if (func_530(uParam3, 1))
			{
				func_585(uParam0, uParam2);
				func_534(uParam3, 1);
			}
			if (func_530(uParam3, 2))
			{
				func_566(uParam1, &iVar14);
				if (!func_570(uParam1, iVar14))
				{
					func_575(uParam1, iVar14, 2, 0.0f, 0.0f, 0.25f, 0.5f, 0);
					func_534(uParam3, 2);
				}
			}
			if (!func_503(uParam3, 11) && !func_576(uParam3))
			{
				func_537(uParam3);
				func_463(uParam1, 4);
			}
			break;
		case 4:
			if (!func_577(uParam1))
			{
				if (func_586(&(uParam0->f_3218)))
				{
					func_578(&(uParam0->f_3218));
				}
				if (func_506(uParam1, 1, 1))
				{
					func_587(uParam0, uParam2);
					func_463(uParam1, 7);
					return 1;
				}
				else if (func_506(uParam1, 2, 1))
				{
					func_514(uParam1, 2, 1);
				}
				else if (func_506(uParam1, 3, 1))
				{
					func_343(uParam1, 10, 0);
					return 1;
				}
			}
			break;
		case 7:
			bVar15 = false;
			if ((uParam1->f_1567.f_56 >= 3 && MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f) < 0.5f) || bVar15)
			{
				if (func_588(uParam2) == 4)
				{
					bVar16 = false;
				}
				else if (func_588(uParam2) <= 2)
				{
					bVar16 = true;
				}
				else
				{
					bVar16 = func_589();
				}
				if (bVar16)
				{
					iVar9 = func_590(uParam2, uParam1->f_9);
					if (iVar9 != -1)
					{
						func_591(uParam1, iVar9, 3, func_135(0, uParam0->f_3497.f_3.f_10));
						func_592(uParam1);
					}
				}
				else
				{
					func_593(uParam1);
				}
			}
			func_343(uParam1, 7, 0);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_230(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar8;
	var uVar12;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	switch (uParam1->f_1459)
	{
		case 0:
			func_514(uParam1, 1, 1);
			func_463(uParam1, 15);
			return 1;
		case 15:
			if (func_155(uParam3, *uParam2))
			{
				func_594(uParam3, *uParam2, 1);
			}
			uParam1->f_1565 = 0;
			uParam1->f_1566 = 0;
			func_595(uParam0, *uParam2, 4, 4);
			func_495(uParam0, *uParam2, 0, 15);
			if (func_546(uParam3) != *uParam2)
			{
				func_463(uParam1, 16);
				return 1;
			}
			else if (!func_162(uParam3) || !func_504(uParam3))
			{
				func_463(uParam1, 18);
				return 1;
			}
			break;
		case 16:
			if (func_162(uParam3) && func_481(uParam3, 1))
			{
				func_547(uParam3, *uParam2);
				func_463(uParam1, 17);
				return 0;
			}
			break;
		case 17:
			if (!func_162(uParam3) || ((!func_503(uParam3, 3) && !func_503(uParam3, 9)) && !func_504(uParam3)))
			{
				func_463(uParam1, 18);
				return 0;
			}
			break;
		case 18:
			func_596(uParam0, uParam2, *uParam2, 0);
			func_541(uParam1);
			if (func_597(uParam1, *uParam2))
			{
				func_598(uParam4, *uParam2);
			}
			if (!uParam1->f_1566)
			{
				iVar4 = uParam2->f_27[*uParam2 /*60*/].f_3;
				iVar5 = (uParam2->f_27[*uParam2 /*60*/].f_8[iVar4 /*25*/].f_23 - 1);
				func_599(uParam1, &(uParam0->f_1724), func_508(uParam2, *uParam2, iVar4), 1);
			}
			func_495(uParam0, *uParam2, 1, 15);
			uParam1->f_1554 = 0;
			func_379(&(uParam1->f_1540), 5.0f);
			func_379(&(uParam1->f_1537), 5.0f);
			func_463(uParam1, 19);
			return 1;
		case 19:
			iVar0 = *uParam2;
			iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
			if (!uParam1->f_1554)
			{
				iVar6 = 0;
				if (func_597(uParam1, *uParam2))
				{
					func_600(uParam4, uParam2, &iVar6);
					func_601(uParam0);
				}
				else if (!func_504(uParam3) || func_478(&(uParam1->f_1460), 10.0f))
				{
					if ((func_508(uParam2, *uParam2, iVar1) < 21 && !uParam1->f_1565) && !uParam1->f_1566)
					{
						func_602(uParam1, *uParam2, iVar1, &iVar6);
					}
				}
				if (iVar6 != 0)
				{
					if (func_286(uParam1, *uParam2, &iVar6))
					{
						func_603(uParam0, *uParam2);
						func_604(uParam4);
						uParam1->f_1554 = 1;
					}
				}
			}
			if (!uParam1->f_1554)
			{
				if (func_478(&(uParam1->f_1460), 22.0f))
				{
					if (func_605(uParam3) != 3)
					{
						func_485(uParam3, 3);
					}
				}
				if ((func_478(&(uParam1->f_1537), 22.0f) && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
				{
					if (func_162(uParam3))
					{
						func_486(uParam1, uParam3);
						func_379(&(uParam1->f_1537), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 2.0f));
					}
				}
				if ((func_478(&(uParam1->f_1540), 30.0f) && !func_469(&(uParam0->f_1724))) && !func_470(uParam1))
				{
					iVar17 = func_487(uParam2, *uParam2);
					if (func_155(uParam3, iVar17))
					{
						func_488(uParam1, uParam3, uParam2, iVar17, *uParam2);
						func_379(&(uParam1->f_1540), MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 2.0f));
					}
				}
			}
			if (func_108(uParam0, joaat("BLACKJACKEVENTACTIONINVALID")))
			{
				func_604(&(uParam0->f_3218));
				func_485(uParam3, 0);
				func_111(uParam0, 1, 1);
				func_463(uParam0, 18);
				return 1;
			}
			else if (func_275(uParam1, *uParam2, 9, 1))
			{
				func_604(uParam4);
				func_485(uParam3, 0);
				func_463(uParam1, 20);
				return 1;
			}
			else if (func_275(uParam1, *uParam2, 10, 1))
			{
				func_604(uParam4);
				func_485(uParam3, 0);
				func_463(uParam1, 24);
				return 1;
			}
			else if (func_275(uParam1, *uParam2, 8, 1))
			{
				func_604(uParam4);
				func_485(uParam3, 0);
				func_463(uParam1, 27);
				return 1;
			}
			else if (func_506(uParam1, 1, 1) || func_506(uParam1, 2, 1))
			{
				func_606(uParam0, uParam2, *uParam2);
				func_604(uParam4);
				func_485(uParam3, 0);
				if (!func_116(&(uParam1->f_286), iVar0))
				{
					func_463(uParam1, 4);
					return 1;
				}
				else if (func_508(&(uParam1->f_286), iVar0, iVar1) > 21)
				{
					func_607(uParam0, iVar0, iVar1);
					func_608(uParam0, iVar0, iVar1);
					func_463(uParam1, 32);
					return 1;
				}
				else if (func_609(&(uParam1->f_286), iVar0, iVar1) >= 7)
				{
					func_610(uParam0, iVar0, iVar1);
					func_611(uParam0, iVar0, iVar1);
					func_463(uParam1, 39);
					return 1;
				}
				else if (uParam1->f_1565 || uParam1->f_1566)
				{
					func_463(uParam1, 4);
					return 1;
				}
				else if (func_508(&(uParam1->f_286), iVar0, iVar1) == 21)
				{
					func_463(uParam1, 37);
					return 1;
				}
				else
				{
					func_463(uParam1, 35);
					return 1;
				}
			}
			break;
		case 20:
			if (func_155(uParam3, *uParam2) && func_480(uParam3, *uParam2, 1))
			{
				func_489(uParam1, *uParam2, 9, 1);
				iVar4 = uParam2->f_27[*uParam2 /*60*/].f_3;
				iVar5 = (uParam2->f_27[*uParam2 /*60*/].f_8[iVar4 /*25*/].f_23 - 1);
				func_614(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4), iVar5, func_613(uParam2, *uParam2, iVar4, iVar5), 1);
				if (func_615(uParam2, *uParam2) > 1)
				{
					func_616(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4));
				}
				else
				{
					func_616(uParam3, *uParam2, -1);
				}
				func_617(uParam1, uParam3, uParam2, *uParam2, iVar4);
				func_495(uParam0, *uParam2, 1, 15);
				func_618(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4), iVar5, 0);
				func_463(uParam1, 21);
				return 0;
			}
			break;
		case 21:
			if (func_478(&(uParam1->f_1460), 0.45f) && (!func_162(uParam3) || !func_504(uParam3)))
			{
				if (func_162(uParam3) && func_481(uParam3, 1))
				{
					iVar4 = uParam2->f_27[*uParam2 /*60*/].f_3;
					iVar5 = (uParam2->f_27[*uParam2 /*60*/].f_8[iVar4 /*25*/].f_23 - 1);
					func_619(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4), iVar5, 0);
					func_463(uParam1, 22);
					return 0;
				}
			}
			break;
		case 22:
			if ((!func_162(uParam3) || !func_503(uParam3, 7)) || func_620(uParam3, 0))
			{
				func_463(uParam1, 18);
				return 1;
			}
			break;
		case 24:
			if (func_155(uParam3, *uParam2) && func_480(uParam3, *uParam2, 1))
			{
				func_489(uParam1, *uParam2, 10, 1);
				uParam1->f_1565 = 1;
				iVar4 = uParam2->f_27[*uParam2 /*60*/].f_3;
				iVar5 = (uParam2->f_27[*uParam2 /*60*/].f_8[iVar4 /*25*/].f_23 - 1);
				func_614(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4), iVar5, func_613(uParam2, *uParam2, iVar4, iVar5), 1);
				func_493(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4), 1, (func_492(uParam2, *uParam2, iVar4) / 2));
				func_621(uParam1, uParam3, uParam2, *uParam2);
				func_495(uParam0, *uParam2, 1, 15);
				func_618(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4), iVar5, 1);
				func_463(uParam1, 25);
				return 0;
			}
			break;
		case 25:
			if ((func_478(&(uParam1->f_1460), 0.45f) && (!func_162(uParam3) || !func_504(uParam3))) && (!func_155(uParam3, *uParam2) || !func_502(uParam3, *uParam2)))
			{
				if (func_162(uParam3) && func_481(uParam3, 1))
				{
					iVar4 = uParam2->f_27[*uParam2 /*60*/].f_3;
					iVar5 = (uParam2->f_27[*uParam2 /*60*/].f_8[iVar4 /*25*/].f_23 - 1);
					func_619(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar4), iVar5, 1);
					func_463(uParam1, 26);
					return 0;
				}
			}
			break;
		case 26:
			if ((!func_162(uParam3) || !func_503(uParam3, 7)) || func_620(uParam3, 0))
			{
				iVar4 = uParam2->f_27[*uParam2 /*60*/].f_3;
				iVar5 = (uParam2->f_27[*uParam2 /*60*/].f_8[iVar4 /*25*/].f_23 - 1);
				func_622(uParam1, uParam3, uParam2, *uParam2, iVar4);
				iVar18 = func_508(uParam2, *uParam2, iVar4);
				iVar19 = func_623(iVar18, uParam2->f_2[0 /*2*/], 0);
				if (iVar18 == 21)
				{
					func_497(uParam1, 10, *uParam2, -1, 0, 1);
				}
				else if (iVar18 <= 15 && (iVar19 == 5 || iVar19 == 4))
				{
					func_497(uParam1, 11, *uParam2, -1, 0, 1);
				}
				func_463(uParam1, 18);
				return 1;
			}
			break;
		case 27:
			if (func_155(uParam3, *uParam2) && func_480(uParam3, *uParam2, 1))
			{
				func_489(uParam1, *uParam2, 8, 1);
				if (func_624(func_613(uParam2, *uParam2, 0, 0)) == 14 && func_624(func_613(uParam2, *uParam2, 1, 0)) == 14)
				{
					uParam1->f_1566 = 1;
				}
				func_625(uParam3, *uParam2, 0, 1, 0);
				func_625(uParam3, *uParam2, 1, 0, 0);
				func_625(uParam3, *uParam2, 1, 1, 0);
				func_614(uParam3, *uParam2, 0, 1, func_613(uParam2, *uParam2, 1, 1), 0);
				func_614(uParam3, *uParam2, 1, 0, func_613(uParam2, *uParam2, 0, 0), 0);
				func_614(uParam3, *uParam2, 1, 1, func_613(uParam2, *uParam2, 0, 1), 0);
				func_493(uParam3, *uParam2, 1, 0, func_492(uParam2, *uParam2, 1));
				func_626(uParam1, uParam3, uParam2, *uParam2);
				func_495(uParam0, *uParam2, 1, 15);
				func_627(uParam3, *uParam2);
				func_463(uParam1, 28);
				return 0;
			}
			break;
		case 28:
			if ((func_478(&(uParam1->f_1460), 0.45f) && (!func_162(uParam3) || !func_504(uParam3))) && (!func_155(uParam3, *uParam2) || !func_502(uParam3, *uParam2)))
			{
				if (func_162(uParam3) && func_481(uParam3, 1))
				{
					func_628(uParam3, *uParam2);
					func_463(uParam1, 29);
					return 0;
				}
			}
			break;
		case 29:
			if (!func_162(uParam3) || !func_503(uParam3, 8))
			{
				func_463(uParam1, 18);
				return 1;
			}
			break;
		case 32:
			iVar0 = *uParam2;
			iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
			if (func_155(uParam3, iVar0) && func_480(uParam3, iVar0, 1))
			{
				func_509(uParam3, iVar0, 1, func_629(uParam1, iVar0, iVar1));
				func_631(uParam1, uParam3, uParam2, iVar0, func_630(uParam1, iVar0, iVar1));
				func_495(uParam0, *uParam2, 0, 15);
				func_497(uParam1, 8, iVar0, -1, 0, 1);
				func_463(uParam1, 33);
				return 0;
			}
			break;
		case 33:
			iVar0 = *uParam2;
			iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
			if (func_162(uParam3) && func_481(uParam3, 1))
			{
				if (func_632(uParam2, &iVar2, &uVar3, 1))
				{
					iVar16 = iVar2;
				}
				else
				{
					iVar16 = 4;
				}
				func_557(uParam1, iVar0, &uVar8, 0, iVar1);
				func_558(uParam2, iVar0, &uVar8, &uVar12);
				func_633(uParam3, *uParam2, &uVar12, iVar16);
				func_463(uParam1, 34);
				return 0;
			}
			break;
		case 34:
			if (!func_162(uParam3) || !func_503(uParam3, 9))
			{
				func_463(uParam1, 4);
				return 1;
			}
			break;
		case 35:
			iVar0 = *uParam2;
			iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
			if (func_155(uParam3, *uParam2) && func_480(uParam3, *uParam2, 1))
			{
				if (func_615(uParam2, *uParam2) > 1)
				{
					func_499(uParam3, *uParam2, func_612(uParam2, *uParam2, iVar1));
				}
				else
				{
					func_499(uParam3, *uParam2, -1);
				}
				func_634(uParam1, uParam3, uParam2, *uParam2, iVar1);
				func_495(uParam0, *uParam2, 1, 15);
				iVar20 = func_508(uParam2, *uParam2, iVar1);
				iVar21 = func_623(iVar20, uParam2->f_2[0 /*2*/], 0);
				if (iVar20 <= 15 && (iVar21 == 5 || iVar21 == 4))
				{
					func_497(uParam1, 12, *uParam2, -1, 0, 1);
				}
				func_463(uParam1, 36);
				return 0;
			}
			break;
		case 36:
			if (func_478(&(uParam1->f_1460), 0.45f))
			{
				func_463(uParam1, 4);
				return 1;
			}
			break;
		case 37:
			iVar0 = *uParam2;
			iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
			if (func_155(uParam3, iVar0) && func_480(uParam3, iVar0, 1))
			{
				func_509(uParam3, iVar0, 0, func_635(uParam1, iVar0, iVar1));
				func_636(uParam1, uParam3, uParam2, iVar0);
				func_495(uParam0, *uParam2, 0, 15);
				func_497(uParam1, 10, iVar0, -1, 0, 1);
				func_463(uParam1, 38);
				return 0;
			}
			break;
		case 38:
			if (func_478(&(uParam1->f_1460), 0.0f))
			{
				func_463(uParam1, 4);
				return 1;
			}
			break;
		case 39:
			iVar0 = *uParam2;
			iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
			if (func_155(uParam3, iVar0) && func_480(uParam3, iVar0, 1))
			{
				func_509(uParam3, iVar0, 0, 1);
				func_556(uParam1, uParam3, uParam2, iVar0, 3);
				func_495(uParam0, *uParam2, 0, 15);
				func_497(uParam1, 7, iVar0, -1, 0, 1);
				func_463(uParam1, 40);
				return 0;
			}
			break;
		case 40:
			iVar0 = *uParam2;
			iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
			if (func_162(uParam3) && func_481(uParam3, 1))
			{
				if (func_632(uParam2, &iVar2, &uVar3, 1))
				{
					iVar16 = iVar2;
				}
				else
				{
					iVar16 = 4;
				}
				func_557(uParam1, iVar0, &uVar8, 0, iVar1);
				func_558(uParam2, iVar0, &uVar8, &uVar12);
				func_633(uParam3, *uParam2, &uVar12, iVar16);
				func_463(uParam1, 41);
				return 0;
			}
			break;
		case 41:
			if (!func_162(uParam3) || !func_503(uParam3, 9))
			{
				iVar0 = *uParam2;
				iVar1 = uParam2->f_27[iVar0 /*60*/].f_3;
				if (func_155(uParam3, iVar0) && func_480(uParam3, iVar0, 1))
				{
					func_557(uParam1, iVar0, &uVar8, 0, iVar1);
					func_558(uParam2, iVar0, &uVar8, &uVar12);
					func_559(uParam3, iVar0, &uVar12, func_113(uParam2, iVar0));
					func_579(uParam1, uParam3, uParam2, iVar0);
					func_463(uParam1, 4);
					return 1;
				}
			}
			break;
		case 4:
			func_637(uParam0, *uParam2);
			if (func_155(uParam3, *uParam2))
			{
				func_594(uParam3, *uParam2, 0);
			}
			func_463(uParam1, 3);
			return 1;
		case 3:
			if (func_506(uParam1, 1, 1))
			{
				if (!func_638(&(uParam1->f_286)))
				{
					func_514(uParam1, 1, 1);
				}
				else
				{
					func_343(uParam1, 7, 0);
					return 1;
				}
			}
			else if (func_506(uParam1, 2, 1) && func_639(&(uParam1->f_286)))
			{
				func_343(uParam1, 8, 0);
				return 1;
			}
			else if ((func_506(uParam1, 2, 1) && !func_639(&(uParam1->f_286))) || func_506(uParam1, 3, 1))
			{
				func_343(uParam1, 9, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;
	var uVar8;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<4> /*32*/ sVar18[4];

	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (func_553(uParam1, iVar13, &iVar0))
		{
			switch (iVar0)
			{
				case 1:
					if (!func_155(uParam3, iVar13))
					{
						func_554(uParam1, iVar13);
					}
					else if (func_480(uParam3, iVar13, 1))
					{
						if (func_640(uParam1, iVar13, &iVar1, &iVar2, &iVar3))
						{
							func_509(uParam3, iVar13, iVar1, iVar2);
							func_556(uParam1, uParam3, uParam2, iVar13, iVar3);
							func_641(uParam2, &iVar12);
							func_495(uParam0, iVar13, 6, -1 ^ iVar12);
						}
						func_554(uParam1, iVar13);
					}
					break;
				case 2:
					if (!func_155(uParam3, iVar13))
					{
						func_554(uParam1, iVar13);
					}
					else if (func_480(uParam3, iVar13, 1))
					{
						func_557(uParam1, iVar13, &sVar4, 1, -1);
						func_558(uParam2, iVar13, &sVar4, &uVar8);
						func_559(uParam3, iVar13, &uVar8, func_113(uParam2, iVar13));
						func_554(uParam1, iVar13);
					}
					break;
				default:
					func_554(uParam1, iVar13);
					break;
			}
		}
		iVar13++;
	}
	switch (uParam1->f_1459)
	{
		case 0:
			func_514(uParam1, 2, 1);
			func_516(uParam3, uParam2);
			func_463(uParam1, 10);
			return 1;
		case 10:
			if (func_162(uParam3) && func_546(uParam3) != 4)
			{
				if (func_481(uParam3, 1))
				{
					func_547(uParam3, 4);
					func_463(uParam1, 11);
					return 1;
				}
			}
			else
			{
				func_463(uParam1, 11);
				return 1;
			}
			break;
		case 11:
			if (func_562(uParam4))
			{
				if ((func_162(uParam3) && !func_504(uParam3)) && func_481(uParam3, 1))
				{
					func_563(uParam4);
					iVar13 = 0;
					while (iVar13 < 4)
					{
						sVar4.f_0 = 0;
						sVar4.f_1 = 0;
						sVar4.f_2 = 0;
						sVar4.f_3 = 0;
						if (func_116(uParam2, iVar13))
						{
							func_557(uParam1, iVar13, &sVar4, 1, -1);
						}
						func_558(uParam2, iVar13, &sVar4, &(sVar18[iVar13 /*4*/]));
						iVar13++;
					}
					func_643(uParam3, func_642(uParam2), &sVar18);
					func_527(uParam3);
					func_485(uParam3, 2);
					func_463(uParam1, 13);
					return 1;
				}
			}
			break;
		case 13:
			if (func_644(uParam3, 0) || !func_483(uParam3, 12))
			{
				func_599(uParam1, &(uParam0->f_1724), func_645(&(uParam2->f_2), 2), 1);
				func_646(uParam0, uParam2);
				func_463(uParam1, 22);
				return 1;
			}
			break;
		case 22:
			if (func_644(uParam3, 12) || !func_483(uParam3, 12))
			{
				func_599(uParam1, &(uParam0->f_1724), func_647(uParam2), 1);
				func_648(uParam0, uParam2);
				func_572(uParam0, uParam2);
				func_649(uParam0, uParam1, uParam2);
				func_650(uParam0, uParam1, uParam2);
				func_463(uParam1, 9);
				return 1;
			}
			else
			{
				iVar17 = 0;
				while (iVar17 < 11)
				{
					iVar14 = (1 + iVar17);
					if (func_530(uParam3, iVar14))
					{
						func_599(uParam1, &(uParam0->f_1724), func_645(&(uParam2->f_2), iVar17 + 1), 1);
						func_651(uParam0, uParam2, iVar17);
						func_534(uParam3, iVar14);
					}
					iVar17++;
				}
			}
			break;
		case 9:
			func_641(uParam2, &iVar12);
			if (!func_570(uParam1, iVar12))
			{
				func_575(uParam1, iVar12, 1, 0.0f, 0.0f, 0.25f, 0.6f, 0);
				func_497(uParam1, 13, -1, -1, 0, 1);
				func_463(uParam1, 14);
				return 1;
			}
			break;
		case 14:
			iVar13 = 0;
			while (iVar13 < 4)
			{
				iVar15 = (13 + iVar13);
				if (func_530(uParam3, iVar15))
				{
					func_557(uParam1, iVar13, &sVar4, 1, -1);
					if (func_652(&sVar4))
					{
						if (!func_653(uParam1, iVar13))
						{
							func_654(uParam1, iVar13, 2, 0.0f, 0.0f, 0);
							func_534(uParam3, iVar15);
						}
						else
						{
							bVar16 = true;
						}
					}
				}
				iVar13++;
			}
			if (!bVar16)
			{
				if (!func_503(uParam3, 12))
				{
					func_537(uParam3);
					func_463(uParam1, 4);
					return 1;
				}
			}
			break;
		case 4:
			if (!func_577(uParam1))
			{
				if (func_506(uParam1, 3, 1))
				{
					func_578(uParam4);
					func_343(uParam1, 10, 0);
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	switch (uParam1->f_1459)
	{
		case 0:
			func_655(uParam3);
			func_463(uParam1, 11);
			break;
		case 11:
			if (func_162(uParam3) && func_481(uParam3, 1))
			{
				func_656(uParam3);
				func_463(uParam1, 12);
				return 1;
			}
			break;
		case 12:
			if (!func_503(uParam3, 13))
			{
				func_463(uParam1, 4);
				return 1;
			}
			break;
		case 4:
			if (func_506(uParam1, 2, 1))
			{
				func_514(uParam1, 2, 1);
			}
			else if (func_506(uParam1, 3, 1))
			{
				func_343(uParam1, 10, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_233(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_553(uParam1, iVar0, &iVar2))
		{
			switch (iVar2)
			{
				case 4:
					if (!func_116(uParam2, iVar0) || !func_155(&(uParam0->f_1724), iVar0))
					{
						return 1;
					}
					else if (func_657(uParam0, iVar0))
					{
						func_658(uParam0, iVar0, 0);
						func_659(uParam0, iVar0);
						func_554(uParam1, iVar0);
					}
					break;
				default:
					func_554(uParam1, iVar0);
					break;
			}
		}
		iVar0++;
	}
	switch (uParam1->f_1459)
	{
		case 0:
			func_514(uParam1, 3, 1);
			func_660(uParam1);
			func_661();
			if (func_662(uParam1, &iVar1, 0))
			{
				func_575(uParam1, iVar1, 4, 0.0f, 0.0f, 0.5f, 2.0f, 0);
				func_592(uParam1);
			}
			else if (uParam1->f_1567.f_57)
			{
				bVar4 = false;
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (((func_116(uParam2, iVar0) && uParam0->f_1567[iVar0 /*10*/]) && (uParam0->f_1567[iVar0 /*10*/].f_2 >= 5 || bVar4)) && uParam0->f_9 != iVar0)
					{
						func_654(uParam1, iVar0, 4, 0.0f, 0.0f, 0);
						func_592(uParam1);
					}
					else
					{
						iVar0 += 1 % 4;
						iVar3++;
					}
				}
			}
			func_463(uParam1, 10);
			return 1;
		case 10:
			if (func_162(uParam3) && func_546(uParam3) != 4)
			{
				if (func_481(uParam3, 1))
				{
					func_547(uParam3, 4);
					func_463(uParam1, 4);
					return 1;
				}
			}
			else
			{
				func_463(uParam1, 4);
				return 1;
			}
			break;
		case 4:
			if (!func_577(uParam1))
			{
				func_485(uParam3, 0);
				func_328(uParam3);
				func_329(uParam3);
				func_154(uParam0, 1);
				func_343(uParam1, 2, 0);
				return 1;
			}
			break;
		default:
			break;
	}
	return 0;
}

int func_234(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar12;
	Vector3 vVar13;
	Vector3 vVar16;
	float fVar19;

	uVar7 = 4;
	switch (uParam2->f_1)
	{
		case 0:
			iVar0 = func_663(uParam1, iParam3);
			if (iVar0 == 0)
			{
			}
			else if (iVar0 != 1 && iVar0 != 2)
			{
			}
			else
			{
				func_664(uParam1, iParam3, 1);
				return 1;
			}
			break;
		case 1:
			iVar0 = func_663(uParam1, iParam3);
			if (func_155(&(uParam0->f_1724), iParam3))
			{
			}
			else
			{
				if (iVar0 == 2)
				{
					if (MISC::GET_FRAME_COUNT() < uParam1->f_1630 + 5)
					{
						return 0;
					}
				}
				func_187(&(uParam2->f_2));
				func_664(uParam1, iParam3, 2);
				return 1;
			}
			break;
		case 2:
			iVar0 = func_663(uParam1, iParam3);
			if (iVar0 == 1)
			{
				iVar1 = func_665(uParam1, iParam3);
				vVar13 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false) /*3*/ };
			}
			else if (iVar0 == 2)
			{
				iVar1 = 255;
				vVar13 = { uParam0->f_1724 /*3*/ };
			}
			if (!func_666(&(uParam0->f_1724), vVar13, &vVar16, &fVar19, !func_478(&(uParam2->f_2), 10.0f)))
			{
				return 0;
			}
			if (!func_270(uParam0, iParam3, iVar1, &iVar2, &iVar4))
			{
				return 0;
			}
			if (PED::IS_PED_MALE(iVar2))
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1 + 1);
			}
			else
			{
				iVar3 = 2;
			}
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar2, vVar16, fVar19, true, false, true);
			iVar5 = 92;
			func_667(&(uParam0->f_1724), &uVar7, &iVar12);
			if (func_669(iVar2, 0, func_668(0, func_206(), iVar4), &uVar7, iVar12, &iVar5))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iVar2, func_670(iVar5));
			}
			else if (func_671(iVar2, 0, &uVar7, iVar12, &iVar5))
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(iVar2, func_670(iVar5));
			}
			func_672(uParam0, iParam3, func_148(uParam0, iVar4));
			iVar6 = 0;
			if (!func_142(&(uParam0->f_1724), iParam3, iVar2, 0, iVar3, 1, iVar4, iVar5, iVar1, iVar6, 0, 0))
			{
				PED::DELETE_PED(&iVar2);
				return 0;
			}
			if (iVar0 == 1)
			{
				func_268(&(uParam0->f_3218), iParam3, iVar1);
			}
			else if (iVar0 == 2)
			{
				func_262(&(uParam0->f_3218), iParam3, iVar2);
			}
			func_664(uParam1, iParam3, 3);
			return 1;
		case 3:
			func_489(uParam1, iParam3, 0, 1);
			func_143(uParam1, iParam3);
			func_664(uParam1, iParam3, 4);
			return 1;
		case 4:
			if ((!func_155(&(uParam0->f_1724), iParam3) || !func_464(&(uParam0->f_1724), iParam3, 3)) || func_461(&(uParam0->f_1724), iParam3, 0))
			{
				func_491(&(uParam0->f_1724), iParam3, func_113(&(uParam1->f_17), iParam3), 1);
				func_673(uParam1, iParam3);
			}
			break;
	}
	return 0;
}

void func_235(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1510[iParam1] = iParam2;
}

int func_236(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (uParam2->f_1)
	{
		case 0:
			uParam2->f_5 = 0;
			if (func_116(&(uParam1->f_17), iParam3))
			{
				uParam2->f_5 = func_113(&(uParam1->f_17), iParam3);
			}
			if (func_117(&(uParam0->f_1724), iParam3))
			{
				iVar1 = func_118(&(uParam0->f_1724), iParam3);
				if (!PED::IS_PED_A_PLAYER(iVar1) && !func_119(iVar1))
				{
					iVar0 = func_114(uParam0, uParam2->f_5);
					if (iVar0 > 0)
					{
						func_120(iVar1, iVar0);
						PED::SET_LOOTING_FLAG(iVar1, 0, true);
						PED::SET_LOOTING_FLAG(iVar1, 1, true);
					}
				}
			}
			func_674(uParam1, &(uParam0->f_1724), &(uParam1->f_17), iParam3, 1);
			func_495(uParam0, iParam3, 3, 15);
			func_489(uParam1, iParam3, 0, 1);
			func_675(uParam1, iParam3);
			func_664(uParam1, iParam3, 8);
			return 1;
		case 8:
			if (func_502(&(uParam0->f_1724), iParam3))
			{
				return 0;
			}
			if (!func_155(&(uParam0->f_1724), iParam3) || func_480(&(uParam0->f_1724), iParam3, 1))
			{
				if (func_155(&(uParam0->f_1724), iParam3))
				{
					func_677(&(uParam0->f_1724), iParam3, func_589(), 0, 0, func_676(uParam2->f_5));
					func_491(&(uParam0->f_1724), iParam3, 0, 1);
				}
				func_664(uParam1, iParam3, 9);
				return 1;
			}
			break;
		case 9:
			func_678(uParam0, iParam3);
			if (func_679(&(uParam0->f_3218), iParam3))
			{
				func_680(&(uParam0->f_3218), iParam3);
			}
			func_681(&(uParam0->f_3218));
			uParam1->f_1630 = MISC::GET_FRAME_COUNT();
			func_673(uParam1, iParam3);
			break;
	}
	return 0;
}

int func_237(var uParam0, var uParam1, var uParam2)
{
	switch (uParam2->f_1)
	{
		case 0:
			func_343(uParam1, 0, 0);
			func_682(uParam1, &(uParam1->f_17));
			func_683(&(uParam0->f_3218));
			func_684(uParam1, 3);
			return 1;
		case 3:
			if (!func_155(&(uParam0->f_1724), uParam1->f_9) || func_480(&(uParam0->f_1724), uParam1->f_9, 1))
			{
				uParam1->f_1532 = 1;
				func_684(uParam1, 4);
			}
			break;
	}
	return 0;
}

void func_238(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1479[iParam1] = iParam2;
}

int func_239(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	switch (uParam2->f_1)
	{
		case 0:
			func_343(uParam1, 0, 0);
			func_683(&(uParam0->f_3218));
			func_685(&(uParam0->f_1724), uParam1->f_9 <= 1);
			func_684(uParam1, 1);
			return 1;
		case 1:
			if (!func_155(&(uParam0->f_1724), uParam1->f_9) || func_480(&(uParam0->f_1724), uParam1->f_9, 1))
			{
				if (func_686(&(uParam0->f_1724)))
				{
					if (func_155(&(uParam0->f_1724), uParam1->f_9))
					{
						func_687(&(uParam0->f_1724), uParam1->f_9);
					}
					func_674(uParam1, &(uParam0->f_1724), &(uParam1->f_17), uParam1->f_9, 0);
					uParam2->f_2 = func_118(&(uParam0->f_1724), uParam1->f_9);
					uParam2->f_3 = 0;
					func_161(&(uParam0->f_1724), uParam1->f_9, 1);
					func_688(&(uParam0->f_3218));
					func_319(&(uParam0->f_3093));
					func_689(&(uParam0->f_1724));
					func_684(uParam1, 2);
					return 1;
				}
			}
			break;
		case 2:
			if ((!func_690(&(uParam0->f_1724)) || func_691(&(uParam0->f_1724))) || func_692(&(uParam0->f_1724)))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_155(&(uParam0->f_1724), iVar0))
					{
						func_341(&(uParam0->f_1724), iVar0, 0);
					}
					iVar0++;
				}
				if (func_162(&(uParam0->f_1724)))
				{
					func_350(&(uParam0->f_1724), 4, 0);
				}
				func_123(&(uParam0->f_1724), 1);
				func_684(uParam1, 3);
				return 1;
			}
			break;
		case 3:
			if (!uParam2->f_3)
			{
				if (!PED::IS_PED_INJURED(uParam2->f_2) && !AUDIO::IS_ANY_SPEECH_PLAYING(uParam2->f_2))
				{
					func_693(uParam1, &(uParam0->f_1724), func_676(func_113(&(uParam1->f_17), uParam1->f_9)));
					uParam2->f_3 = 1;
				}
			}
			if (!func_690(&(uParam0->f_1724)) || func_691(&(uParam0->f_1724)))
			{
				uParam1->f_1532 = 1;
				func_684(uParam1, 4);
			}
			break;
	}
	return 0;
}

int func_240(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("P_CHIPS_BLA01X");
			return 1;
		case 1:
			*uParam0 = joaat("P_CHIPS_CAMP01X");
			return 1;
		case 2:
			*uParam0 = joaat("P_CHIPS_GAR_KOR01X");
			return 1;
		case 3:
			*uParam0 = joaat("P_CHIPS05X10_RHO");
			return 1;
		case 4:
			*uParam0 = joaat("P_CHIPS_FLA01X");
			return 1;
		case 5:
			*uParam0 = joaat("P_CHIPS_LA_BAS01X");
			return 1;
		case 6:
			*uParam0 = joaat("P_CHIPS_OPI01X");
			return 1;
		case 7:
			*uParam0 = joaat("P_CHIPS_VAL01X");
			return 1;
		case 8:
			*uParam0 = joaat("P_CHIPS_VAL01X");
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_241(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = joaat("P_CARDSSPLIT01X_BLA");
			return 1;
		case 1:
			*uParam0 = joaat("P_CARDSSPLIT01X_CAMP");
			return 1;
		case 2:
			*uParam0 = joaat("P_CARDSSPLIT01X_GK");
			return 1;
		case 3:
			*uParam0 = joaat("P_CARDSSPLIT01X_RHO");
			return 1;
		case 4:
			*uParam0 = joaat("P_CARDSSPLIT01X_RRS");
			return 1;
		case 5:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_LABASTILLE");
			return 1;
		case 6:
			*uParam0 = joaat("P_CARDSSPLIT01X_STD_OPIUM");
			return 1;
		case 7:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAL");
			return 1;
		case 8:
			*uParam0 = joaat("P_CARDSSPLIT01X_VAN");
			return 1;
		default:
			break;
	}
	return 0;
	return 0;
}

struct<2> /*16*/ func_242()
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = -1;
	sVar0.f_0 = -1;
	return sVar0;
}

bool func_243(int iParam0, struct<2> /*16*/ sParam1, int iParam3, bool bParam4)
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
						case 14:
							*iParam0 = joaat("P_CRD_A_C01X_CAMP");
							return true;
						default:
							break;
					}
					break;
				case 1:
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
					break;
				case 0:
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
					break;
				case 2:
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
					break;
			}
			break;
		case 2:
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
			break;
		case 3:
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
			break;
		case 4:
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
			break;
		case 5:
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
			break;
		case 6:
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
			break;
		case 7:
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
			break;
		case 8:
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
			break;
		default:
			return false;
	}
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

void func_244(var uParam0, Vector3 vParam1)
{
	if (uParam0->f_107 >= 20)
	{
	}
	else
	{
		uParam0->f_46[uParam0->f_107 /*3*/] = { vParam1 /*3*/ };
		uParam0->f_107++;
	}
}

void func_245(var uParam0, Vector3 vParam1)
{
	uParam0->f_111 = 1;
	uParam0->f_108 = { vParam1 /*3*/ };
}

char* func_246(var uParam0, int iParam1, int iParam2)
{
	struct<8> /*64*/ sVar0;

	sVar0 = { uParam0->f_4[iParam1 /*8*/] /*8*/ };
	strcat_s(&sVar0, 64, "@");
	strcat_s(&sVar0, 64, &(uParam0->f_21[iParam2 /*8*/]));
	return HUD::_GET_TEXT_SUBSTRING_2(&sVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&sVar0));
}

void func_247(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::REQUEST_ANIM_DICT(func_694(uParam0, iVar0));
		STREAMING::REQUEST_CLIP_SET(func_695(uParam0, iVar0));
		iVar0++;
	}
	STREAMING::REQUEST_MOVE_NETWORK_DEF("TaskMoveBlackjackPlayer");
}

void func_248()
{
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@deal");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@insurance");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@retrieve_bets");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@retrieve_cards");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_01@hit");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_02@hit");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_03@hit");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_04@hit");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@self@hit");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_01@outcome");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_02@outcome");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_03@outcome");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_04@outcome");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@self@cleanup");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_01@main");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_02@main");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_03@main");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_04@main");
	STREAMING::REQUEST_ANIM_DICT("mini_games@blackjack_mg@dealer@self@main");
	STREAMING::REQUEST_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_01@main");
	STREAMING::REQUEST_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_02@main");
	STREAMING::REQUEST_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_03@main");
	STREAMING::REQUEST_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_04@main");
	STREAMING::REQUEST_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@self@main");
	STREAMING::REQUEST_MOVE_NETWORK_DEF("TaskMoveBlackjackDealer");
}

void func_249(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_41 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@blackjack_generic", 0, "plMain", false, true);
	}
	else
	{
		uParam0->f_41 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@blackjack_generic", 0, "plMain_noBlend", false, true);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_41))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_41);
	}
}

void func_250(var uParam0, int iParam1)
{
	ANIMSCENE::_LOAD_MGM_ASSETS(func_696(iParam1));
	uParam0->f_43 = iParam1;
}

int func_251(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			return 1;
		case 1:
			*uParam1 = 4;
			return 1;
		case 2:
			*uParam1 = 0;
			return 1;
		case 3:
			*uParam1 = 7;
			return 1;
		case 4:
			*uParam1 = 1;
			return 1;
		case 5:
			*uParam1 = 6;
			return 1;
		case 6:
			*uParam1 = 2;
			return 1;
		case 7:
			*uParam1 = 8;
			return 1;
		case 8:
			*uParam1 = 3;
			return 1;
		default:
			break;
	}
	*uParam1 = 5;
	return 0;
}

void func_252(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	uParam0->f_196++;
	*uParam0 = iParam1;
	uParam0->f_2 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(joaat("MINIGAMES/MINIGAMES_PRELOADER_FLOW"));
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MinigamesDataStore");
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "gameSettings");
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "totalsStack");
	uParam0->f_36 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "isVisible", true);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, "totalsTextItemData");
	func_697(uParam0, iParam3);
	iVar1 = 0;
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "totalsItemArray");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_30);
	func_698(uParam0);
	if ((iParam1 == 2 || iParam1 == 0) || bParam2)
	{
		iVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "communityGameTokenItemArray");
		iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, "communityGameTokenItemData");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(iVar4);
		iVar0 = 0;
		while (iVar0 < uParam0->f_17)
		{
			strcpy_s(&cVar2, 8, "");
			StringIntConCat(&cVar2, iVar0, 8);
			iVar6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar5, &cVar2);
			uParam0->f_17[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar6, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iVar4, iVar0, "single_game_token_big", iVar6);
			iVar0++;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_30, 0, "community_cards", uParam0->f_29);
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		strcpy_s(&cVar2, 8, "");
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_10[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar3, &cVar2);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_30, (iVar0 + iVar1), "money_with_text", uParam0->f_10[iVar0]);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "moneyText", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "text", "");
		iVar0++;
	}
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "playerStack");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_7, "playerData");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_7, "playerList");
	uParam0->f_35 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_7, "isVisible", true);
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	iVar7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "bettingControl");
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isVisible", false);
	uParam0->f_32 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar7, "text", "");
	uParam0->f_33 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isLeftArrowVisible", false);
	uParam0->f_34 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isRightArrowVisible", false);
	iVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "centralScoretimer");
	uParam0->f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "isVisible", false);
	uParam0->f_38 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar8, "timerString", "18:88");
	uParam0->f_39 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "isVisible", false);
	func_699(uParam0, 2);
}

bool func_253(var uParam0)
{
	if (ANIMSCENE::_IS_MGM_SYSTEM_LOADED(func_696(uParam0->f_43)))
	{
		return true;
	}
	return false;
}

void func_254(var uParam0)
{
	if (uParam0->f_44 != -1)
	{
	}
	else
	{
		uParam0->f_44 = ANIMSCENE::_CREATE_MGM_SYSTEM(func_696(uParam0->f_43));
	}
}

bool func_255(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_694(uParam0, iVar0)) || !STREAMING::HAS_CLIP_SET_LOADED(func_695(uParam0, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	if (!STREAMING::HAS_MOVE_NETWORK_DEF_LOADED("TaskMoveBlackjackPlayer"))
	{
		return false;
	}
	return true;
}

bool func_256()
{
	if (((!STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@actions@deal") || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@actions@insurance")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@actions@retrieve_bets")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@actions@retrieve_cards"))
	{
		return false;
	}
	if ((((!STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_01@hit") || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_02@hit")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_03@hit")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_04@hit")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@self@hit"))
	{
		return false;
	}
	if ((((!STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_01@outcome") || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_02@outcome")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_03@outcome")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_04@outcome")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@self@cleanup"))
	{
		return false;
	}
	if ((((!STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_01@main") || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_02@main")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_03@main")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@seat_04@main")) || !STREAMING::HAS_ANIM_DICT_LOADED("mini_games@blackjack_mg@dealer@self@main"))
	{
		return false;
	}
	if ((((!STREAMING::HAS_CLIP_SET_LOADED("clipset@mini_games@blackjack_mg@dealer@seat_01@main") || !STREAMING::HAS_CLIP_SET_LOADED("clipset@mini_games@blackjack_mg@dealer@seat_02@main")) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@mini_games@blackjack_mg@dealer@seat_03@main")) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@mini_games@blackjack_mg@dealer@seat_04@main")) || !STREAMING::HAS_CLIP_SET_LOADED("clipset@mini_games@blackjack_mg@dealer@self@main"))
	{
		return false;
	}
	if (!STREAMING::HAS_MOVE_NETWORK_DEF_LOADED("TaskMoveBlackjackDealer"))
	{
		return false;
	}
	return true;
}

bool func_257(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_41))
	{
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_41, true, false))
	{
		return true;
	}
	return false;
}

void func_258(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	func_700(uParam0, &(uParam0->f_40[iParam1 /*38*/]), iParam1, sParam2, sParam3, bParam4, bParam5);
}

int func_259(int iParam0)
{
	return iParam0;
}

void func_260(var uParam0, bool bParam1)
{
	func_701(uParam0, bParam1);
	func_702(uParam0, bParam1);
	func_703(uParam0);
}

void func_261(var uParam0)
{
	func_704(uParam0);
	func_705(uParam0);
}

void func_262(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_211[iParam1] != 0)
	{
		func_680(uParam0, iParam1);
	}
	if (iParam2 == 0 || PED::IS_PED_INJURED(iParam2))
	{
		uParam0->f_211[iParam1] = 3;
	}
	else if (func_706(&Global_1899750, iParam2, iParam1, 0))
	{
		uParam0->f_211[iParam1] = 2;
	}
	else
	{
		uParam0->f_211[iParam1] = 3;
	}
	uParam0->f_221[iParam1] = MISC::GET_GAME_TIMER();
}

bool func_263(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_211[iVar0] == 1)
		{
			if (!(func_707(uParam0->f_216[iVar0]) | func_708(uParam0->f_216[iVar0]) || MISC::GET_GAME_TIMER() > uParam0->f_221[iVar0] + 5000))
			{
				return false;
			}
		}
		else if (uParam0->f_211[iVar0] == 2)
		{
			if (!(func_709(&Global_1899750, iVar0) || MISC::GET_GAME_TIMER() > uParam0->f_221[iVar0] + 5000))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_264(var uParam0, var uParam1, var uParam2)
{
	func_328(uParam1);
	func_329(uParam1);
	func_515(uParam1, uParam2);
	func_516(uParam1, uParam2);
}

bool func_265(var uParam0, var uParam1)
{
	if (!func_710(uParam1) || !func_711(uParam1))
	{
		return false;
	}
	return true;
}

void func_266(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = uParam0->f_1705[iVar1];
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
				ENTITY::SET_ENTITY_COLLISION(iVar0, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
			}
			else
			{
				PED::DELETE_PED(&iVar0);
			}
		}
		uParam0->f_1705[iVar1] = 0;
		iVar1++;
	}
}

int func_267(var uParam0, int iParam1)
{
	if (uParam0->f_597[iParam1 /*19*/] != 1)
	{
		return 255;
	}
	return uParam0->f_597[iParam1 /*19*/].f_17;
}

void func_268(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (uParam0->f_211[iParam1] != 0)
	{
		func_680(uParam0, iParam1);
	}
	if (iParam2 == 255 || PLAYER::IS_PLAYER_DEAD(iParam2))
	{
		uParam0->f_211[iParam1] = 3;
	}
	else
	{
		iVar0 = func_712(iParam2, "bjkHeadShot", &(uParam0->f_226));
		if (iVar0 != 0)
		{
			uParam0->f_211[iParam1] = 1;
			uParam0->f_216[iParam1] = iVar0;
		}
		else
		{
			uParam0->f_211[iParam1] = 3;
		}
	}
	uParam0->f_221[iParam1] = MISC::GET_GAME_TIMER();
}

int func_269(var uParam0, int iParam1)
{
	return uParam0->f_597[iParam1 /*19*/];
}

bool func_270(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;

	*uParam3 = 0;
	*uParam4 = -1;
	if (uParam0->f_9 == iParam1)
	{
		*uParam3 = PLAYER::GET_PLAYER_PED(iParam2);
	}
	else if (iParam2 != 255 && !PLAYER::IS_PLAYER_DEAD(iParam2))
	{
		*uParam3 = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(iParam2), false, false, false);
	}
	else
	{
		iVar0 = func_92(uParam0->f_3497.f_38, uParam0->f_3497.f_41, -1);
		if (iVar0 != 0)
		{
			*uParam3 = func_713(iVar0, uParam0->f_1724, 0.0f, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
			{
				*uParam4 = func_715(0, func_714(&(uParam0->f_1724)));
				func_716(*uParam3, 0, uParam0->f_3497.f_41, *uParam4);
			}
		}
	}
	if (PED::IS_PED_INJURED(*uParam3))
	{
		return false;
	}
	return true;
}

void func_271(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_1705[iParam1] != 0)
	{
	}
	else if (PED::IS_PED_INJURED(iParam2))
	{
	}
	else
	{
		uParam0->f_1705[iParam1] = iParam2;
		if (bParam3)
		{
			ENTITY::SET_ENTITY_VISIBLE(iParam2, false);
			ENTITY::SET_ENTITY_COLLISION(iParam2, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iParam2, true);
		}
	}
}

void func_272(var uParam0)
{
	int iVar0;
	bool bVar1;

	func_717(uParam0);
	iVar0 = 0;
	bVar1 = true;
	while (bVar1)
	{
		bVar1 = false;
		if (uParam0->f_581 == 0)
		{
			if (func_718(uParam0))
			{
				iVar0++;
				bVar1 = true;
			}
		}
		if (func_719(uParam0))
		{
			func_339(uParam0);
			func_456(uParam0);
		}
		if (iVar0 > 30)
		{
		}
	else
	{
		}
	}
}

bool func_273(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			return false;
		}
		iVar0++;
	}
	if (uParam0->f_12 != 0)
	{
		return false;
	}
	if (bParam1)
	{
		if (uParam0->f_13 != 0)
		{
			return false;
		}
	}
	return true;
}

bool func_274(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_285 == joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
	{
		if (bParam2)
		{
			if (iParam1 > 0 && uParam0->f_554[0] != 0)
			{
				return false;
			}
		}
		if (uParam0->f_554[iParam1] != 0)
		{
			return true;
		}
	}
	return false;
}

bool func_275(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_285 == joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
	{
		if (bParam3)
		{
			if (iParam2 > 0 && uParam0->f_554[0] != 0)
			{
				return false;
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_554[iParam2], iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_276(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam1->f_1485[iParam2 /*6*/] != 0)
	{
		return 0;
	}
	uParam1->f_1485[iParam2 /*6*/] = iParam3;
	uParam1->f_1485[iParam2 /*6*/].f_1 = 0;
	func_187(&(uParam1->f_1485[iParam2 /*6*/].f_2));
	if (bParam4)
	{
		func_279(uParam0, uParam1, iParam2);
	}
	return 1;
}

void func_277(var uParam0, var uParam1)
{
	func_721(uParam0, uParam1, func_720(uParam0), 1);
}

void func_278(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_1475;
	iVar1 = 0;
	Stack.Invoke(uParam1->f_1479[iVar0], uParam0, uParam1, &(uParam1->f_1475));
	while (StackVal && iVar1 < 10)
	{
		iVar1++;
	}
}

void func_279(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_1485[iParam2 /*6*/];
	iVar1 = 0;
	Stack.Invoke(uParam1->f_1510[iVar0], uParam0, uParam1, &(uParam1->f_1485[iParam2 /*6*/]), iParam2);
	while (StackVal && iVar1 < 10)
	{
		iVar1++;
	}
}

bool func_280(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 4) && uParam0->f_27[iParam1 /*60*/] != -1) && uParam0->f_27[iParam1 /*60*/].f_59 > 0)
	{
		return true;
	}
	return false;
}

bool func_281(var uParam0, int iParam1)
{
	if (((iParam1 >= 0 && iParam1 < 4) && uParam0->f_27[iParam1 /*60*/] != -1) && (uParam0->f_27[iParam1 /*60*/].f_7 > 0 && uParam0->f_27[iParam1 /*60*/].f_4[0] > 0))
	{
		return true;
	}
	return false;
}

int func_282(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_283(var uParam0)
{
	return uParam0->f_239;
}

void func_284(var uParam0, var uParam1)
{
	if (uParam0->f_198)
	{
		return;
	}
	if (uParam0->f_239)
	{
	}
	uParam0->f_239 = 1;
	uParam0->f_239.f_2 = func_723(uParam1->f_6, func_722(uParam0, func_282(1)));
	func_451(&(uParam0->f_239.f_3));
	uParam0->f_239.f_11 = 0;
}

int func_285(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_239)
	{
		if (!func_96(uParam0->f_239.f_12))
		{
			uParam0->f_239.f_12 = func_352("MGBLK_CTX_BUYIN" /* GXTEntry: "Buy-in (~1$~)" */, joaat("INPUT_MINIGAME_BLACKJACK_BET"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if (!func_96(uParam0->f_239.f_13))
		{
			uParam0->f_239.f_13 = func_352("MGBLK_CTX_ALTER" /* GXTEntry: "Amount" */, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
		iVar0 = func_723(uParam1->f_4, func_722(uParam0, func_282(1)));
		iVar1 = func_723(uParam1->f_6, func_722(uParam0, func_282(1)));
		iVar2 = 0;
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
		{
			func_451(&(uParam0->f_239.f_3));
		}
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")))
		{
			iVar2 = func_724(&(uParam0->f_239.f_3), 1.0f, 0);
		}
		else if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
		{
			iVar2 = func_724(&(uParam0->f_239.f_3), -1.0f, 0);
		}
		else
		{
			iVar2 = func_724(&(uParam0->f_239.f_3), -PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y")), 0);
		}
		if (iVar2 != 0)
		{
			iVar3 = func_725((uParam0->f_239.f_2 + iVar2), iVar0, iVar1);
			if (uParam0->f_239.f_2 != iVar3)
			{
				uParam0->f_239.f_2 = iVar3;
				func_726((iVar3 == iVar0 || iVar3 == iVar1));
			}
		}
		if (func_727(uParam0->f_239.f_12, 1))
		{
			*uParam2 = 1;
			uParam2->f_1 = uParam0->f_239.f_2;
		}
		if (func_96(uParam0->f_239.f_12))
		{
			func_729(uParam0->f_239.f_12, "MGBLK_CTX_BUYIN" /* GXTEntry: "Buy-in (~1$~)" */, func_728(uParam0, uParam0->f_239.f_2), 1);
		}
		if (*uParam2 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_286(var uParam0, int iParam1, int iParam2)
{
	switch (*iParam2)
	{
		case 1:
			return func_730(uParam0, iParam1, iParam2->f_1);
		case 2:
			return func_731(uParam0, iParam1, iParam2->f_1);
		case 3:
			return func_732(uParam0, iParam1, iParam2->f_1);
		case 4:
			return func_733(uParam0, iParam1);
		case 5:
			return func_734(uParam0, iParam1);
		case 6:
			return func_735(uParam0, iParam1);
		case 7:
			return func_736(uParam0, iParam1);
		default:
			break;
	}
	return 0;
}

void func_287(var uParam0)
{
	if (uParam0->f_239)
	{
		uParam0->f_239 = 0;
		uParam0->f_239.f_2 = 0;
		func_737(&(uParam0->f_239.f_12), 1, 1);
		func_737(&(uParam0->f_239.f_13), 1, 1);
	}
}

void func_288(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	bool bVar5;

	iVar0 = uParam0->f_9;
	if (uParam0->f_1626 == 1)
	{
		if (!func_477(&(uParam0->f_1627)))
		{
			func_187(&(uParam0->f_1627));
		}
		else if (func_478(&(uParam0->f_1627), 3.0f))
		{
			func_112(uParam0, 2);
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_155(&(uParam0->f_1724), iVar1))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0) && func_738(&(uParam0->f_1724), iVar1) == PLAYER::PLAYER_ID())
			{
				if (func_460(&(uParam0->f_1724), iVar1, 15))
				{
					func_739(&(uParam0->f_1724), iVar1);
				}
			}
			else if (func_740(&(uParam0->f_1724), iVar1, 1) & func_741(&(uParam0->f_1724), iVar1))
			{
				if (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f) < 0.75f)
				{
					func_742(&(uParam0->f_1724), iVar1, 0);
				}
				else
				{
					func_742(&(uParam0->f_1724), iVar1, 1);
				}
				func_743(&(uParam0->f_1724), iVar1);
			}
		}
		iVar1++;
	}
	if (!uParam0->f_3218.f_198)
	{
		if (func_96(uParam0->f_3218.f_275))
		{
			if (func_744(&(uParam0->f_1724), iVar0, 0) == 1 || func_744(&(uParam0->f_1724), iVar0, 1) == 1)
			{
				func_745(uParam0->f_3218.f_275, 0);
			}
			else
			{
				func_745(uParam0->f_3218.f_275, 1);
			}
		}
		if (func_96(uParam0->f_3218.f_276))
		{
			if (func_746(&(uParam0->f_1724)) == 1)
			{
				func_745(uParam0->f_3218.f_276, 0);
			}
			else
			{
				func_745(uParam0->f_3218.f_276, 1);
			}
		}
	}
	if (uParam0->f_3093.f_1)
	{
		iVar2 = 1;
		iVar3 = 0;
		fVar4 = 0.0f;
		if (func_460(&(uParam0->f_1724), iVar0, 17))
		{
			func_319(&(uParam0->f_3093));
		}
		else
		{
			switch (uParam0->f_3093.f_2)
			{
				case 1:
					if (func_747(uParam0->f_3218.f_275))
					{
						iVar2 = 3;
					}
					else if (func_747(uParam0->f_3218.f_276))
					{
						iVar2 = 2;
					}
					else
					{
						iVar2 = 1;
					}
					break;
				case 3:
					if (func_747(uParam0->f_3218.f_276))
					{
						iVar2 = 2;
					}
					else if (!func_97(uParam0->f_3218.f_275, 1))
					{
						if (func_97(uParam0->f_3218.f_276, 1))
						{
							iVar2 = 2;
						}
						else
						{
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 3;
					}
					break;
				case 2:
					if (func_747(uParam0->f_3218.f_275))
					{
						iVar2 = 3;
					}
					else if (!func_97(uParam0->f_3218.f_276, 1))
					{
						if (func_97(uParam0->f_3218.f_275, 1))
						{
							iVar2 = 3;
						}
						else
						{
							iVar2 = 1;
						}
					}
					else
					{
						iVar2 = 2;
					}
					break;
			}
			if (!func_464(&(uParam0->f_1724), iVar0, 3))
			{
				if (func_472(&(uParam0->f_3218)) || func_748(&(uParam0->f_3218)))
				{
					iVar3 = 1;
				}
			}
			if (iVar2 == 2)
			{
				if (uParam0->f_3093.f_2 == 1)
				{
					fVar4 = 2.5f;
				}
			}
			if (uParam0->f_3093.f_2 != iVar2 || uParam0->f_3093.f_3 != iVar3)
			{
				func_749(&(uParam0->f_3093), iVar2, iVar3, fVar4);
			}
			func_750(&(uParam0->f_3093));
		}
	}
	if (!uParam0->f_1551)
	{
		if (uParam0->f_3093.f_2 == 3)
		{
			uParam0->f_1551 = 1;
		}
	}
	else if (uParam0->f_3093.f_2 != 3 && uParam0->f_3093.f_2 != 2)
	{
		uParam0->f_1551 = 0;
	}
	if (func_155(&(uParam0->f_1724), uParam0->f_9))
	{
		if (uParam0->f_1551)
		{
			if (!func_460(&(uParam0->f_1724), uParam0->f_9, 16) && func_480(&(uParam0->f_1724), uParam0->f_9, 1))
			{
				func_751(&(uParam0->f_1724), uParam0->f_9);
			}
		}
		else if (func_460(&(uParam0->f_1724), uParam0->f_9, 16) && !func_752(&(uParam0->f_1724), uParam0->f_9))
		{
			func_739(&(uParam0->f_1724), uParam0->f_9);
		}
	}
	func_753(uParam0, uParam0);
	func_754(uParam0, uParam0, &(uParam0->f_1567.f_41));
	bVar5 = !func_748(&(uParam0->f_3218));
	if (uParam0->f_3497.f_57 != bVar5)
	{
		func_755(&(uParam0->f_3497), bVar5);
	}
	if (uParam0->f_3497.f_54 == 2 || uParam0->f_3497.f_54 == 3)
	{
		func_756(uParam0, 1);
	}
	switch (uParam0->f_1704)
	{
		case 1:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_BLACKJACK_HAND_VIEW"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_BLACKJACK_TABLE_VIEW"), false);
			PAD::ENABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_QUIT"), true);
			break;
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_BLACKJACK_HAND_VIEW"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_BLACKJACK_TABLE_VIEW"), false);
			break;
	}
	uParam0->f_1704 = 0;
}

int func_289(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_757(uParam2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar0) != func_116(uParam1, iVar0))
		{
			MISC::SET_BIT(uParam2[0], iVar0);
		}
		else if (func_116(uParam0, iVar0))
		{
			if (!func_758(uParam0))
			{
				if (func_113(uParam1, iVar0) > func_113(uParam0, iVar0))
				{
					MISC::SET_BIT(uParam2[1], iVar0);
				}
				if (func_759(uParam0, iVar0) == 0 && func_759(uParam1, iVar0) == 1)
				{
					if (func_492(uParam1, iVar0, 0) > 0)
					{
						MISC::SET_BIT(uParam2[2], iVar0);
					}
					else
					{
						MISC::SET_BIT(uParam2[3], iVar0);
					}
				}
			}
			else if (func_760(uParam0) && *uParam0 == -1)
			{
				if (func_549(uParam0, iVar0) == -1 && func_549(uParam1, iVar0) > 0)
				{
					MISC::SET_BIT(uParam2[4], iVar0);
				}
				if (func_549(uParam0, iVar0) == -1 && func_549(uParam1, iVar0) == 0)
				{
					MISC::SET_BIT(uParam2[5], iVar0);
				}
				if (func_549(uParam0, iVar0) > 0 && func_549(uParam1, iVar0) == 0)
				{
					MISC::SET_BIT(uParam2[6], iVar0);
				}
				if (func_759(uParam1, iVar0) >= 1)
				{
					if (func_492(uParam0, iVar0, 0) > 0 && func_492(uParam1, iVar0, 0) == 0)
					{
						MISC::SET_BIT(uParam2[7], iVar0);
					}
				}
			}
			else if (func_760(uParam0) && func_761(uParam0, iVar0, &iVar1))
			{
				if (func_615(uParam0, iVar0) == 1 && func_615(uParam1, iVar0) == 2)
				{
					MISC::SET_BIT(uParam2[8], iVar0);
				}
				if (func_609(uParam0, iVar0, iVar1) < func_609(uParam1, iVar0, iVar1))
				{
					if (func_492(uParam0, iVar0, iVar1) < func_492(uParam1, iVar0, iVar1))
					{
						MISC::SET_BIT(uParam2[10], iVar0);
					}
					else
					{
						MISC::SET_BIT(uParam2[9], iVar0);
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_758(uParam0) && func_760(uParam1))
	{
		MISC::SET_BIT(&(uParam2->f_12), 0);
	}
	if (func_760(uParam0) && func_760(uParam1))
	{
		if (func_762(uParam0, uParam1))
		{
			MISC::SET_BIT(&(uParam2->f_12), 1);
		}
	}
	if (func_760(uParam0) && func_763(uParam1))
	{
		MISC::SET_BIT(&(uParam2->f_12), 2);
	}
	if (func_758(uParam0) && !func_758(uParam1))
	{
		MISC::SET_BIT(&(uParam2->f_12), 3);
	}
	if (func_764(uParam0) != func_764(uParam1))
	{
		MISC::SET_BIT(&(uParam2->f_13), 0);
	}
	return 1;
}

void func_290(var uParam0)
{
	struct<42> /*336*/ sVar0;
	int iVar42;

	sVar0.f_10 = 6;
	if (!MINIGAME::_0x580F34C726387226(&sVar0, 42))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	uParam0->f_1 = { sVar0.f_1 /*8*/ };
	uParam0->f_9 = sVar0.f_9;
	*uParam0 = 1;
	iVar42 = 0;
	while (iVar42 < sVar0.f_41)
	{
		func_765(uParam0, sVar0.f_10[iVar42 /*5*/], sVar0.f_10[iVar42 /*5*/].f_3);
		iVar42++;
	}
}

void func_291(var uParam0)
{
	MINIGAME::_0x0876326238914A3F();
	*uParam0 = 0;
	uParam0->f_9 = -1;
}

void func_292(var uParam0)
{
	struct<2> /*16*/ sVar0;

	if (!MINIGAME::_0x580F34C726387226(&sVar0, 6))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	func_765(uParam0, sVar0.f_1, sVar0.f_1.f_3);
}

void func_293(var uParam0)
{
	struct<2> /*16*/ sVar0;

	if (!MINIGAME::_0x580F34C726387226(&sVar0, 6))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	func_766(uParam0, sVar0.f_1);
}

void func_294(var uParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar269;

	sVar0.f_1.f_2 = 11;
	sVar0.f_1.f_27 = 4;
	sVar0.f_1.f_27.f_1.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_8.f_1.f_25 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_8.f_1.f_25 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_8.f_1.f_25 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8.f_1.f_25 = 11;
	if (!MINIGAME::_0x580F34C726387226(&sVar0, 269))
	{
		return;
	}
	MINIGAME::_0x0876326238914A3F();
	uParam0->f_17 = { sVar0.f_1 /*268*/ };
	if (!func_758(&(uParam0->f_17)))
	{
		func_660(uParam0);
	}
	else
	{
		func_767(uParam0, &(sVar0.f_1));
	}
	iVar269 = 0;
	while (iVar269 < 4)
	{
		if (uParam0->f_751[iVar269])
		{
			func_768(uParam0, iVar269);
		}
		iVar269++;
	}
}

void func_295()
{
	MINIGAME::_0x0876326238914A3F();
}

void func_296(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN" /* GXTEntry: "~1$~" */;
	}
	func_769(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_297(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_770())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_769(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN" /* GXTEntry: "Total Take ~1$~" */, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_771(iVar0);
			func_772(iVar0, 0, 0);
		}
		func_769(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN" /* GXTEntry: "Your Share ~1$~" */, iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_774(func_773(joaat("CAREER_CASH")), iVar1);
	}
}

int func_298(int iParam0)
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

bool func_299(int iParam0, int iParam1, var uParam2, int iParam3)
{
	struct<13> /*104*/ sVar0;
	int iVar23;

	sVar0.f_1 = 10;
	sVar0.f_12 = 10;
	sVar0.f_0 = 1;
	sVar0.f_1[0] = iParam1;
	sVar0.f_12[0] = uParam2;
	iVar23 = 13;
	return ENTITY::_REQUEST_ENTITY_LOOT_LIST(iParam0, &sVar0, iParam3, iVar23, 2, false);
}

void func_300(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_28))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1239.f_28);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_29))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1239.f_29);
	}
	uParam0->f_1239.f_27 = 0;
	uParam0->f_1239.f_28 = -1;
	uParam0->f_1239.f_29 = -1;
}

var func_301(var uParam0)
{
	return uParam0->f_1239.f_1;
}

void func_302(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, "PedSeatedForMinigame");
}

void func_303(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "PedSeatedForMinigame", true);
}

void func_304(var uParam0, int iParam1)
{
	uParam0->f_1239.f_3 = iParam1;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1239))
	{
		TASK::_0x615DC4A82E90BB48(uParam0->f_1239, uParam0->f_1351[iParam1], joaat("DEFAULT") /* GXTEntry: "_" */);
	}
}

void func_305(var uParam0, char* sParam1, int iParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_1239.f_3;
	iVar1 = uParam0->f_1239;
	iParam2 |= 256 | 128 | 4;
	if (ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	TASK::TASK_PLAY_ANIM_ADVANCED(iVar1, &(uParam0->f_1310[iVar0 /*8*/]), sParam1, uParam0->f_1363, uParam0->f_1366, fParam3, fParam4, -1, iParam2, fParam5, 2, 1, 0);
}

int func_306(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (!func_119(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0 /*1157*/];
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_307(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_775(iParam0))
	{
		return;
	}
	if (func_776(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_777(iParam0, 56, 1);
		func_778(&(Global_1359489.f_40), 1);
	}
	func_779(iParam0, 0);
	func_780(iParam0, 4, 0);
	func_781(iParam0);
	func_782(iParam0);
	func_783(iParam0, 37, 1);
	bVar0 = func_784(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_785(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true) && (Global_1359489.f_16 & (1 << 23)) == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, false);
	}
	if (func_786(iParam0, 64, 1))
	{
		func_783(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_783(iParam0, 33, 1);
		func_783(iParam0, 34, 1);
		func_787(iParam0, 1056964608 /* Float: 0.5f */, -1, 1061158912 /* Float: 0.75f */);
		func_788(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_777(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_777(iParam0, 35, 1);
			if (bParam8)
			{
				func_777(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_789(iParam0, 0);
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
		func_783(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_777(iParam0, 33, 1);
		func_788(iParam0, 0, 1, 0);
		if (fParam4 > 0.0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_778(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_214(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_777(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_790(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_786(iParam0, 45, 1))
	{
		func_783(iParam0, 45, 1);
	}
	func_791(iParam0, 16, 1);
	func_783(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_784(func_792(iParam0), 0))
		{
			func_793(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_308(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else
	{
		iVar0 = uParam0->f_946[iParam1 /*46*/];
		iVar1 = func_156(uParam0, iParam1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_302(iVar0);
			if (iVar1 == 1)
			{
				if (PED::IS_PED_A_PLAYER(iVar0) || func_119(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				else if (!bParam2)
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				else
				{
					func_303(iVar0);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
					func_794(uParam0, iParam1, 0);
					func_795(uParam0, iParam1, "idle_a", 1, 0.0f, 1040187392 /* Float: 0.125f */, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
					PED::SET_PED_KEEP_TASK(iVar0, true);
				}
			}
		}
		func_161(uParam0, iParam1, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
			}
			else if (func_119(iVar0))
			{
				func_307(func_306(iVar0), 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
			}
		}
	}
}

void func_309(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3]));
		uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3] = 0;
	}
}

void func_310(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_889.f_23[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_889.f_23[iParam1]));
		uParam0->f_889.f_23[iParam1] = 0;
	}
}

void func_311(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_925[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_925[iParam1]));
		uParam0->f_925[iParam1] = 0;
	}
}

void func_312(var uParam0)
{
	func_796(&(uParam0->f_3218));
}

void func_313(var uParam0)
{
	func_266(uParam0);
}

void func_314(var uParam0)
{
	MINIGAME::_0x3DF7EE3A76185108();
}

void func_315(var uParam0)
{
	if (uParam0->f_44 != -1)
	{
		ANIMSCENE::_DELETE_MGM_SYSTEM(uParam0->f_44);
		uParam0->f_44 = -1;
	}
}

void func_316(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_41))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_41);
	}
	uParam0->f_41 = -1;
}

void func_317(var uParam0)
{
	if (uParam0->f_42 != -1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_42);
		}
		uParam0->f_42 = -1;
	}
}

void func_318(var uParam0, bool bParam1)
{
	if (func_162(uParam0))
	{
		func_121(uParam0, bParam1);
	}
}

void func_319(var uParam0)
{
	if (!uParam0->f_1)
	{
	}
	else
	{
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_5)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_5));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5.f_17))
		{
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(uParam0->f_5.f_17));
		}
		if (uParam0->f_4 != 0)
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0) && CAM::_IS_IN_FULL_FIRST_PERSON_MODE())
			{
				GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(5.0f);
			}
			else
			{
				GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(1E-08f);
			}
		}
		func_797(&(uParam0->f_32));
		uParam0->f_1 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_4 = 0;
	}
}

void func_320(var uParam0)
{
	int iVar0;

	if (func_798(uParam0))
	{
		func_799(uParam0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
		CAM::DESTROY_CAM(uParam0->f_51, false);
	}
	uParam0->f_42 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_38[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		uParam0->f_40[iVar0] = 0;
		iVar0++;
	}
}

void func_321(var uParam0)
{
	if (func_283(uParam0))
	{
		func_287(uParam0);
	}
	if (func_472(uParam0))
	{
		func_476(uParam0);
	}
	if (func_748(uParam0))
	{
		func_604(uParam0);
	}
	func_737(&(uParam0->f_275), 1, 1);
	func_737(&(uParam0->f_276), 1, 1);
	func_737(&(uParam0->f_277), 1, 1);
}

void func_322(var uParam0)
{
}

void func_323(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_211[iVar0] != 0)
		{
			func_680(uParam0, iVar0);
		}
		iVar0++;
	}
}

void func_324(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 != 5)
	{
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
		{
			func_800(uParam0);
			iVar0 = 0;
			while (iVar0 < 6)
			{
				func_801(uParam0, iVar0);
				iVar0++;
			}
			func_698(uParam0);
			UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(-1631983120);
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_2));
		}
		func_699(uParam0, 5);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		uParam0->f_196--;
	}
}

bool func_325(int iParam0)
{
	if (!func_775(iParam0))
	{
		return false;
	}
	if (!func_776(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_326(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::REMOVE_ANIM_DICT(func_694(uParam0, iVar0));
		STREAMING::REMOVE_CLIP_SET(func_695(uParam0, iVar0));
		iVar0++;
	}
	STREAMING::REMOVE_MOVE_NETWORK_DEF("TaskMoveBlackjackPlayer");
}

void func_327()
{
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@deal");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@insurance");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@retrieve_bets");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@actions@retrieve_cards");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_01@hit");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_02@hit");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_03@hit");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_04@hit");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@self@hit");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_01@outcome");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_02@outcome");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_03@outcome");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_04@outcome");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@self@cleanup");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_01@main");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_02@main");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_03@main");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@seat_04@main");
	STREAMING::REMOVE_ANIM_DICT("mini_games@blackjack_mg@dealer@self@main");
	STREAMING::REMOVE_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_01@main");
	STREAMING::REMOVE_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_02@main");
	STREAMING::REMOVE_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_03@main");
	STREAMING::REMOVE_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@seat_04@main");
	STREAMING::REMOVE_CLIP_SET("clipset@mini_games@blackjack_mg@dealer@self@main");
	STREAMING::REMOVE_MOVE_NETWORK_DEF("TaskMoveBlackjackDealer");
}

void func_328(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar3 = 0;
			while (iVar3 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar1 /*194*/].f_121[iVar2 /*36*/].f_23[iVar3]))
				{
				}
				if (func_802(uParam0, uParam0->f_112[iVar1 /*194*/].f_121[iVar2 /*36*/][iVar3 /*2*/], &iVar0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
				uParam0->f_112[iVar1 /*194*/].f_121[iVar2 /*36*/][iVar3 /*2*/] = { func_242() /*2*/ };
				iVar3++;
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_329(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_889.f_23[iVar1]))
		{
		}
		if (func_802(uParam0, uParam0->f_889[iVar1 /*2*/], &iVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		uParam0->f_889[iVar1 /*2*/] = { func_242() /*2*/ };
		iVar1++;
	}
}

void func_330(var uParam0, var uParam1)
{
	uParam0->f_199 = uParam1;
}

void func_331(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_282(1) < iParam0)
	{
		iParam0 = func_282(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_773(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_332(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND" /* GXTEntry: "-~1$~" */;
	}
	func_769(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_333(int iParam0, Vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	Vector3 vVar0;
	var uVar3;

	if (!func_404(iParam0))
	{
		return false;
	}
	if (!func_803(iParam0, iParam5, &vVar0))
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

void func_334(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_804());
	}
}

bool func_335(int iParam0, int iParam1)
{
	int iVar0;
	char cVar1[64];

	if (func_805(iParam1))
	{
		return false;
	}
	if (func_806(iParam1))
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
		if (func_807(iParam1))
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
		return func_807(iParam1);
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
		return func_807(iParam1);
	}
	return true;
}

void func_336(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_337()
{
	if (func_198() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_338(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	func_808(uParam0, iParam1, iParam3);
	func_809(uParam0, iParam1, iParam2, bParam4);
}

void func_339(var uParam0)
{
	struct<2> /*16*/ sVar0;
	bool bVar269;

	sVar0.f_1.f_2 = 11;
	sVar0.f_1.f_27 = 4;
	sVar0.f_1.f_27.f_1.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_8.f_1.f_25 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_8.f_1.f_25 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_8.f_1.f_25 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_4 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8 = 2;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8.f_1 = 11;
	sVar0.f_1.f_27.f_1.f_60.f_60.f_60.f_8.f_1.f_25 = 11;
	sVar0.f_0 = joaat("BLACKJACKEVENTGAMEDATAUPDATED");
	sVar0.f_1 = { *uParam0 /*268*/ };
	bVar269 = uParam0->f_580 != false;
	if (bVar269)
	{
		func_810(&(sVar0.f_1.f_2));
	}
	MINIGAME::_0xE1F365C4C8F259D8(sVar0.f_0, &sVar0, 269);
}

bool func_340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	char* sVar1;

	if (uParam0->f_946[iParam1 /*46*/] != 0)
	{
	}
	else if (PED::IS_PED_INJURED(iParam2))
	{
	}
	else if (func_119(iParam2) && !func_325(func_306(iParam2)))
	{
	}
	else
	{
		if (!PED::IS_PED_A_PLAYER(iParam2))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
			{
				PED::SET_PED_CONFIG_FLAG(iParam2, 171 /*PCF_0x6868B572*/, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam2, false, true);
				PED::SET_PED_CONFIG_FLAG(iParam2, 171 /*PCF_0x6868B572*/, false);
			}
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam2, true))
			{
				return false;
			}
		}
		uParam0->f_946[iParam1 /*46*/] = iParam2;
		uParam0->f_946[iParam1 /*46*/].f_1 = 0;
		uParam0->f_946[iParam1 /*46*/].f_2 = iParam3;
		uParam0->f_946[iParam1 /*46*/].f_3 = iParam4;
		uParam0->f_946[iParam1 /*46*/].f_4 = iParam5;
		uParam0->f_946[iParam1 /*46*/].f_5 = iParam6;
		uParam0->f_946[iParam1 /*46*/].f_43 = iParam8;
		uParam0->f_946[iParam1 /*46*/].f_45 = iParam7;
		uParam0->f_946[iParam1 /*46*/].f_6 = 1;
		uParam0->f_946[iParam1 /*46*/].f_7 = 0;
		func_743(uParam0, iParam1);
		uParam0->f_1131++;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam2, true);
		PED::SET_PED_CAN_RAGDOLL(iParam2, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam2, WEAPON::_GET_DEFAULT_UNARMED_WEAPON_HASH(iParam2), false, 0, false, false);
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if ((((iVar0 == 1 || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
			{
				WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam2, iVar0, false);
			}
			iVar0++;
		}
		PED::SET_PED_CONFIG_FLAG(iParam2, 534 /*PCF_0x09CAAAC1*/, true);
		func_594(uParam0, iParam1, 0);
		if (iParam7 != 255 && iParam7 != PLAYER::PLAYER_ID())
		{
			if (!func_357())
			{
				func_811(iParam7, iParam2);
				func_812(iParam7, joaat("MINIGAMES"));
			}
		}
		if (uParam0->f_44 != -1)
		{
			ANIMSCENE::_0xB1A196BAFE650402(uParam0->f_44, iParam2);
			sVar1 = func_814(func_813(iParam6));
			if ((iParam6 == 92 || MISC::IS_STRING_NULL_OR_EMPTY(sVar1)) || MISC::ARE_STRINGS_EQUAL(sVar1, "unknown"))
			{
				ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_44, iParam2, "");
			}
			else
			{
				ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_44, iParam2, sVar1);
			}
		}
		return true;
	}
	return false;
}

void func_341(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 2);
		if (!uParam0->f_39)
		{
			if (fParam2 == 0.0f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_946[iParam1 /*46*/], false, true);
				WEAPON::_HIDE_PED_WEAPONS(uParam0->f_946[iParam1 /*46*/], 2, true);
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(uParam0->f_946[iParam1 /*46*/], 1);
			}
			func_816(uParam0, iParam1, "IdleRequest", fParam2);
		}
		func_817(uParam0, iParam1, 1);
	}
}

void func_342(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1 && uParam0->f_946[iParam1 /*46*/].f_6 != 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 0)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 3);
		if (bParam2)
		{
			MISC::SET_BIT(&(uParam0->f_946[iParam1 /*46*/].f_14), 0);
		}
		if (bParam3)
		{
			MISC::SET_BIT(&(uParam0->f_946[iParam1 /*46*/].f_14), 1);
		}
		if (!uParam0->f_39)
		{
			iVar0 = uParam0->f_946[iParam1 /*46*/];
			iVar3 = WEAPON::_GET_DEFAULT_UNARMED_WEAPON_HASH(iVar0);
			WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, true, 0, false);
			WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar2, true, 1, false);
			if (iVar1 != iVar3)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar3, false, 0, false, false);
			}
			if (iVar2 != iVar3)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar3, false, 1, false, false);
			}
			if (iVar1 != iVar3 || iVar2 != iVar3)
			{
				TASK::TASK_SWAP_WEAPON(iVar0, 0, 0, 0, 0);
			}
		}
		func_818(uParam0, iParam1, 2);
		func_817(uParam0, iParam1, 1);
	}
}

void func_343(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1458 = iParam1;
	uParam0->f_1459 = iParam2;
	func_187(&(uParam0->f_1460));
}

int func_344(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar12;

	iVar0 = 0;
	vVar2 = -1;
	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	iVar1 = 0;
	while (iVar1 < 33)
	{
		if (func_819(iVar1, &vVar2, 1) && vVar2.y == iParam0)
		{
			iVar12 = func_820(iParam0, iVar1);
			if (func_172(iVar12))
			{
				iVar0 += func_821(iVar12);
			}
		}
		iVar1++;
	}
	return iVar0;
}

char* func_345(int iParam0)
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

int func_346(char* sParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam7;
	sVar0.f_1 = iParam8;
	sVar0.f_2 = iParam9;
	sVar0.f_3 = iParam11;
	sVar0.f_4 = iParam4;
	sVar0.f_4.f_1 = iParam6;
	sVar0.f_4.f_2 = sParam5;
	sVar13.f_7 = 1;
	sVar13.f_0 = iParam10;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = cParam1;
	sVar13.f_3 = 0;
	sVar13.f_4 = iParam2;
	sVar13.f_5 = iParam3;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&sVar0, &sVar13, bParam12, bParam13);
	return iVar21;
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (uParam0->f_597[iVar2 /*19*/] == 2)
		{
			iVar1 = (uParam0->f_597[iVar2 /*19*/].f_18 - 4);
			if (iVar1 >= 0 && iVar1 < 23)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 23);
	iVar3 = 0;
	while (iVar3 < 23)
	{
		if (!MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		else
		{
			iVar3++;
		}
	}
	return (4 + iVar1);
}

bool func_348(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_548[iParam1 /*3*/] != 0)
	{
		return false;
	}
	if (!func_822(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_548[iParam1 /*3*/] = 1;
	uParam0->f_548[iParam1 /*3*/].f_1 = iParam2;
	uParam0->f_548[iParam1 /*3*/].f_2 = iParam3;
	return true;
}

bool func_349(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (uParam0->f_1239 != 0)
	{
	}
	else if (PED::IS_PED_INJURED(iParam1))
	{
	}
	else
	{
		if (!PED::IS_PED_A_PLAYER(iParam1))
		{
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam1, true))
			{
				PED::SET_PED_CONFIG_FLAG(iParam1, 171 /*PCF_0x6868B572*/, true);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, false, true);
				PED::SET_PED_CONFIG_FLAG(iParam1, 171 /*PCF_0x6868B572*/, false);
			}
			if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam1, true))
			{
				return false;
			}
		}
		uParam0->f_1239 = iParam1;
		uParam0->f_1239.f_1 = iParam2;
		uParam0->f_1239.f_2 = iParam3;
		uParam0->f_1239.f_3 = func_823(iParam3);
		uParam0->f_1239.f_4 = iParam4;
		uParam0->f_1239.f_6 = 1;
		uParam0->f_1239.f_7 = 0;
		uParam0->f_1239.f_21 = iParam5;
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
		PED::SET_PED_CAN_RAGDOLL(iParam1, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam1, WEAPON::_GET_DEFAULT_UNARMED_WEAPON_HASH(iParam1), false, 0, false, false);
		iVar0 = 0;
		while (iVar0 < 29)
		{
			if ((((iVar0 == 1 || iVar0 == 7) || iVar0 == 8) || iVar0 == 9) || iVar0 == 10)
			{
				WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iParam1, iVar0, false);
			}
			iVar0++;
		}
		func_485(uParam0, 0);
		if (uParam0->f_44 != -1)
		{
			ANIMSCENE::_0xB1A196BAFE650402(uParam0->f_44, iParam1);
		}
		return true;
	}
	return false;
}

void func_350(var uParam0, int iParam1, float fParam2)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (iParam1 < 0 || iParam1 >= 5)
	{
	}
	else
	{
		func_824(uParam0, 2);
		func_825(uParam0, 0);
		func_826(uParam0, iParam1);
		func_304(uParam0, func_823(iParam1));
		if (!uParam0->f_39)
		{
			if (fParam2 == 0.0f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_1239, false, true);
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(uParam0->f_1239, 1);
			}
			func_827(uParam0, "IdleWithDeckRequest", fParam2, 0, 0);
		}
	}
}

void func_351(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_828(uParam1);
	func_829(uParam1);
	func_830(uParam1);
	func_831(uParam1, 0, 1, 10, 0);
	func_831(uParam1, 1, 3, 10, 0);
	func_831(uParam1, 2, 1, 8, 0);
	func_831(uParam1, 3, 3, 7, 0);
	func_831(uParam1, 4, 5, 6, 0);
	if (func_760(uParam2))
	{
		func_832(uParam1, 0, 0, 1, 0);
		func_832(uParam1, 1, 0, 0, 1);
		func_833(uParam1, 1);
	}
	else if (func_763(uParam2))
	{
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam2, iVar0))
		{
			func_491(&(uParam0->f_1724), iVar0, func_113(uParam2, iVar0), 0);
			if (func_549(uParam2, iVar0) > 0)
			{
				func_834(uParam1, iVar0, 0, 0, 2, 2, 0, 0, 0);
			}
			iVar3 = 0;
			while (iVar3 < func_759(uParam2, iVar0))
			{
				if (func_492(uParam2, iVar0, iVar3) > 0)
				{
					func_835(uParam1, iVar0, func_612(uParam2, iVar0, iVar3), 0, 0, 4, 4, 0, 0, 0);
				}
				iVar3++;
			}
			iVar1 = 0;
			while (iVar1 < func_615(uParam2, iVar0))
			{
				if (func_492(uParam2, iVar0, iVar1) > 0 && func_609(uParam2, iVar0, iVar1) > 0)
				{
					iVar2 = 0;
					while (iVar2 < func_609(uParam2, iVar0, iVar1))
					{
						func_836(uParam1, iVar0, func_612(uParam2, iVar0, iVar1), iVar2, 0, 1);
						iVar2++;
					}
					func_837(uParam1, iVar0, func_612(uParam2, iVar0, iVar1), 1);
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_352(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
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
		if (func_838(iVar0, 2))
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
		func_839(iVar1, iParam1, sParam0, 0, iParam10, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_353(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_259(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

void func_354(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_581 == 0)
	{
		return;
	}
	if (uParam0->f_581 != iParam1)
	{
		return;
	}
	uParam0->f_581 = 0;
}

void func_355(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_946[iParam1 /*46*/].f_44 = bParam2;
	if (bParam2)
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_946[iParam1 /*46*/], 0);
	}
	else if (PED::IS_PED_A_PLAYER(uParam0->f_946[iParam1 /*46*/]))
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_946[iParam1 /*46*/], 2);
	}
	else
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_946[iParam1 /*46*/], 1);
	}
}

void func_356(var uParam0, int iParam1)
{
	if (uParam0->f_946[iParam1 /*46*/].f_3 >= 2)
	{
	}
	else
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_946[iParam1 /*46*/]);
	}
}

bool func_357()
{
	return Global_1572887.f_45.f_28 != 0;
}

void func_358(int iParam0)
{
	if (Global_1058888.f_42714[iParam0 /*12*/].f_11 != 0)
	{
		func_840(iParam0);
		Global_1058888.f_42714[iParam0 /*12*/].f_11 = 0;
		func_841(iParam0);
	}
}

void func_359(int iParam0)
{
	if (Global_1058888.f_42714[iParam0 /*12*/].f_3 != 0)
	{
		func_840(iParam0);
		Global_1058888.f_42714[iParam0 /*12*/].f_3 = 0;
		func_841(iParam0);
	}
}

void func_360(int iParam0)
{
	if (Global_1058888.f_42714[iParam0 /*12*/].f_8 != 0)
	{
		Global_1058888.f_42714[iParam0 /*12*/].f_8 = 0;
		if (HUD::IS_MP_GAMER_TAG_ACTIVE(Global_1058888.f_42714[iParam0 /*12*/].f_2))
		{
			HUD::_SET_MP_GAMER_TAG_TYPE(Global_1058888.f_42714[iParam0 /*12*/].f_2, 0);
		}
		func_841(iParam0);
	}
}

void func_361(var uParam0, int iParam1)
{
	uParam0->f_946[iParam1 /*46*/] = 0;
	uParam0->f_946[iParam1 /*46*/].f_1 = 0;
	uParam0->f_946[iParam1 /*46*/].f_2 = 0;
	uParam0->f_946[iParam1 /*46*/].f_3 = 1;
	uParam0->f_946[iParam1 /*46*/].f_4 = -1;
	uParam0->f_946[iParam1 /*46*/].f_5 = 92;
	uParam0->f_946[iParam1 /*46*/].f_6 = 0;
	uParam0->f_946[iParam1 /*46*/].f_7 = 0;
	func_214(&(uParam0->f_946[iParam1 /*46*/].f_8));
	func_214(&(uParam0->f_946[iParam1 /*46*/].f_11));
	uParam0->f_946[iParam1 /*46*/].f_14 = 0;
	uParam0->f_946[iParam1 /*46*/].f_15 = 0;
	uParam0->f_946[iParam1 /*46*/].f_16 = 0;
	uParam0->f_946[iParam1 /*46*/].f_36 = 0;
	uParam0->f_946[iParam1 /*46*/].f_37 = 0;
	uParam0->f_946[iParam1 /*46*/].f_38 = 0;
	uParam0->f_946[iParam1 /*46*/].f_39 = 0;
	func_214(&(uParam0->f_946[iParam1 /*46*/].f_40));
	uParam0->f_946[iParam1 /*46*/].f_43 = 1;
	uParam0->f_946[iParam1 /*46*/].f_44 = 0;
	uParam0->f_946[iParam1 /*46*/].f_45 = 255;
}

void func_362(var uParam0, bool bParam1)
{
	uParam0->f_1239.f_22 = bParam1;
	if (bParam1)
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_1239, 0);
	}
	else if (PED::IS_PED_A_PLAYER(uParam0->f_1239))
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_1239, 2);
	}
	else
	{
		PED::SET_PED_LEG_IK_MODE(uParam0->f_1239, 1);
	}
}

void func_363(var uParam0)
{
	if (uParam0->f_1239.f_4 >= 2)
	{
	}
	else
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_1239);
	}
}

void func_364(var uParam0)
{
	uParam0->f_1239 = 0;
	uParam0->f_1239.f_1 = 0;
	uParam0->f_1239.f_2 = 4;
	uParam0->f_1239.f_3 = 4;
	uParam0->f_1239.f_4 = 1;
	uParam0->f_1239.f_5 = 4;
	uParam0->f_1239.f_6 = 0;
	uParam0->f_1239.f_7 = 0;
	func_214(&(uParam0->f_1239.f_8));
	func_214(&(uParam0->f_1239.f_11));
	uParam0->f_1239.f_14 = 0;
	uParam0->f_1239.f_15 = 0;
	uParam0->f_1239.f_16 = 0;
	uParam0->f_1239.f_17 = 0;
	uParam0->f_1239.f_18 = 0;
	uParam0->f_1239.f_19 = 0;
	uParam0->f_1239.f_20 = 0;
	uParam0->f_1239.f_21 = 1;
	uParam0->f_1239.f_22 = 0;
	uParam0->f_1239.f_23 = 0;
	uParam0->f_1239.f_24 = 0;
	uParam0->f_1239.f_25 = 0;
	uParam0->f_1239.f_26 = 0;
	uParam0->f_1239.f_27 = 0;
	uParam0->f_1239.f_28 = -1;
	uParam0->f_1239.f_29 = -1;
}

int func_365(int iParam0)
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

int func_366(int iParam0)
{
	return (iParam0 & 31);
}

char* func_367(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_368(bool bParam0)
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

void func_369(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_370(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_371(int iParam0)
{
	if (!func_842(iParam0))
	{
		return false;
	}
	return Global_1935369.f_5[iParam0 /*11*/];
}

int func_372(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
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

bool func_373(int iParam0)
{
	return func_843(iParam0, (1 << 26));
}

void func_374(int iParam0, int iParam1)
{
	if (!func_844(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] |= iParam1;
}

void func_375(int iParam0, int iParam1)
{
	if (!func_844(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] -= (Global_1914319.f_15614[iParam0] & iParam1);
}

void func_376(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

void func_377(int iParam0)
{
	Global_1954819.f_753.f_1 = 0.0f;
	Global_1954819.f_753 = iParam0;
}

bool func_378(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_96(iParam0))
	{
		return false;
	}
	iVar0 = func_259(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_379(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_845() - fParam1);
	func_846(uParam0, 1);
	func_847(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

void func_380(var uParam0)
{
	switch (uParam0->f_54)
	{
		case 0:
		case 3:
			func_737(&(uParam0->f_55), 1, 1);
			break;
		case 1:
			if (!func_96(uParam0->f_55))
			{
				uParam0->f_55 = func_352("MG_LEAVE1" /* GXTEntry: "Leave" */, joaat("INPUT_MINIGAME_QUIT"), 5, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			}
			if (func_96(uParam0->f_55))
			{
				func_848(uParam0->f_55, uParam0->f_57, 1);
				func_849(uParam0->f_55, joaat("INPUT_FRONTEND_PAUSE") /* GXTEntry: "Pause" */);
			}
			break;
		case 2:
			if (!func_96(uParam0->f_55))
			{
				uParam0->f_55 = func_352("MG_LEAVE1" /* GXTEntry: "Leave" */, joaat("INPUT_MINIGAME_QUIT"), 5, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("MEDIUM_TIMED_EVENT"), 0);
			}
			if (func_96(uParam0->f_55))
			{
				func_848(uParam0->f_55, 1, 1);
				func_849(uParam0->f_55, joaat("INPUT_FRONTEND_PAUSE") /* GXTEntry: "Pause" */);
			}
			break;
	}
}

void func_381(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_382()
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

int func_383(int iParam0)
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

void func_384(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

bool func_385(int iParam0)
{
	int iVar0;

	iVar0 = func_850(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_386(int iParam0)
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
		iVar0 = func_388(iParam0);
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

int func_387(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_388(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_851(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_389(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_198() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_STATSTRACKER_DEED_STATUS(iParam0, iParam1, iParam2, &vVar0);
}

bool func_390(int iParam0, bool bParam1, bool bParam2)
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
		if (func_852())
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
		iVar0 = func_400(Global_1898164.f_1[0 /*5*/]);
		if (func_853(iVar0) && func_854(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_172(Global_1898164.f_1[0 /*5*/]))
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

bool func_391(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_392(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_173(iParam0))
	{
		case 1:
			iVar0 = func_400(iParam0);
			return func_855(iVar0);
		case 8:
			iVar1 = func_400(iParam0);
			if (func_854(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_856(iVar1);
			}
			break;
	}
	return -1;
}

int func_393()
{
	if (!func_857(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_857(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_857(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_857(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_857(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_857(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_857(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_394(int iParam0, int iParam1)
{
	if (!func_172(iParam0))
	{
		return;
	}
	func_858(iParam0, iParam1);
}

int func_395(bool bParam0)
{
	if (!bParam0 && func_859(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_396(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_397(int iParam0, bool bParam1)
{
	if (func_198() != -1)
	{
		return;
	}
	if (func_171(0) != iParam0)
	{
		return;
	}
	if (func_860(iParam0))
	{
		if (bParam1)
		{
			func_861(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_862(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_398(int iParam0)
{
	return func_864(func_863(iParam0));
}

bool func_399(int iParam0)
{
	return func_850(iParam0) == 0;
}

int func_400(int iParam0)
{
	if (!func_172(iParam0))
	{
		return -1;
	}
	return func_865(func_365(iParam0));
}

int func_401(int iParam0)
{
	if (!func_172(iParam0))
	{
		return -1;
	}
	return func_866(func_365(iParam0));
}

int func_402(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

int func_403(int iParam0)
{
	if (func_173(iParam0) != 4)
	{
		return -1;
	}
	return func_400(iParam0);
}

bool func_404(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_405()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

void func_406(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_112[iParam1 /*194*/][iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_5[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_10[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_15[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_20[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_25[iVar0] = 0.0f;
		iVar0++;
	}
}

void func_407(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			uParam0->f_112[iParam1 /*194*/].f_60[iVar0 /*30*/][iVar1] = 0;
			uParam0->f_112[iParam1 /*194*/].f_60[iVar0 /*30*/].f_5[iVar1] = 0;
			uParam0->f_112[iParam1 /*194*/].f_60[iVar0 /*30*/].f_10[iVar1] = 0;
			uParam0->f_112[iParam1 /*194*/].f_60[iVar0 /*30*/].f_15[iVar1] = 0;
			uParam0->f_112[iParam1 /*194*/].f_60[iVar0 /*30*/].f_20[iVar1] = 0;
			uParam0->f_112[iParam1 /*194*/].f_60[iVar0 /*30*/].f_25[iVar1] = 0.0f;
			iVar1++;
		}
		iVar0++;
	}
}

void func_408(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_112[iParam1 /*194*/].f_30[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_30.f_5[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_30.f_10[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_30.f_15[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_30.f_20[iVar0] = 0;
		uParam0->f_112[iParam1 /*194*/].f_30.f_25[iVar0] = 0.0f;
		iVar0++;
	}
}

void func_409(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iVar0 /*2*/] = { func_242() /*2*/ };
		uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_35 = 0;
}

void func_410(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		uParam0->f_889[iVar0 /*2*/] = { func_242() /*2*/ };
		uParam0->f_889.f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_889.f_35 = 0;
}

void func_411(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_925[iVar0] = 0;
		iVar0++;
	}
}

void func_412(var uParam0)
{
	uParam0->f_930 = 0;
}

void func_413(var uParam0)
{
	uParam0->f_931 = 0;
}

void func_414(Vector3 vParam0, float fParam3, Vector3 vParam4, Vector3 vParam7, var uParam10, var uParam11)
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

void func_415(var uParam0, var uParam1)
{
}

void func_416(var uParam0, var uParam1)
{
}

void func_417(var uParam0, var uParam1)
{
	if (uParam0->f_39)
	{
		func_824(uParam0, 1);
		return;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
	{
		if (func_867(uParam1, "IdleWithDeck"))
		{
			func_824(uParam0, 1);
		}
	}
}

void func_418(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_546(uParam0);
	if (uParam0->f_39)
	{
		func_304(uParam0, func_823(iVar0));
		func_824(uParam0, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 2:
			func_868(uParam0, joaat("INTERRUPTIBLE"));
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(iVar0));
				if (func_867(uParam1, "FidgetAnimFinished") || func_869(uParam0, 1))
				{
					func_304(uParam0, func_823(iVar0));
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "IdleWithDeck");
					func_870(uParam0, 1);
				}
			}
			break;
		case 1:
			if (func_867(uParam1, "IdleWithDeck"))
			{
				func_824(uParam0, 1);
			}
			break;
	}
}

void func_419(var uParam0, var uParam1)
{
	if (uParam0->f_39)
	{
		func_300(uParam0);
		func_824(uParam0, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 6:
			if (func_871(uParam0))
			{
				func_870(uParam0, 7);
			}
			break;
		case 7:
			if (func_872(uParam0, 1.0f))
			{
				func_873(uParam0);
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_420(var uParam0, var uParam1)
{
	if (uParam0->f_39)
	{
		func_824(uParam0, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			if ((func_867(uParam1, "ShuffleStandardAnimFinished") || func_867(uParam1, "ShuffleRiffleAnimFinished")) || func_869(uParam0, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "IdleWithDeck");
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (func_867(uParam1, "IdleWithDeck"))
			{
				func_824(uParam0, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1398572482))
	{
		func_875(uParam0, "riffle_shuffle_deck", func_874(uParam0), 0, 2, 0);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1092906934))
	{
		func_875(uParam0, "standard_shuffle_deck", func_874(uParam0), 0, 2, 0);
	}
}

void func_421(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = uParam0->f_1239.f_32;
	iVar1 = func_546(uParam0);
	bVar2 = iVar1 == 4;
	if (uParam0->f_39)
	{
		if (func_710(uParam0) && func_711(uParam0))
		{
			func_300(uParam0);
			func_304(uParam0, func_823(iVar1));
			func_824(uParam0, 1);
		}
		return;
	}
	switch (uParam1->f_7)
	{
		case 3:
			if (func_867(uParam1, "ShuffleStandardAnimFinished") || func_867(uParam1, "ShuffleRiffleAnimFinished"))
			{
				func_870(uParam0, 6);
			}
			break;
		case 6:
			if (func_710(uParam0) && func_711(uParam0))
			{
				if (func_876(uParam0, iVar0, bVar2))
				{
					func_870(uParam0, 7);
				}
			}
			break;
		case 7:
			if (!func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				func_868(uParam0, joaat("ACTIONDONE"));
				iVar5 = 0;
				while (iVar5 < 4)
				{
					if (MISC::IS_BIT_SET(iVar0, iVar5))
					{
						iVar6 = 0;
						while (iVar6 < 2)
						{
							iVar3 = func_877(uParam0, iVar5, 0, iVar6);
							if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar3, 1))
							{
								if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 680259806))
								{
									iVar4 = ((0 + iVar5) + iVar6 * 4);
									func_878(uParam0, iVar4);
								}
							}
							iVar6++;
						}
					}
					iVar5++;
				}
				iVar6 = 0;
				while (iVar6 < 2)
				{
					iVar3 = func_879(uParam0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar3) && ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar3, 1))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 680259806))
						{
							iVar4 = (8 + iVar6);
							func_878(uParam0, iVar4);
						}
					}
					iVar6++;
				}
			}
			else
			{
				func_873(uParam0);
				func_304(uParam0, func_823(iVar1));
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1398572482))
	{
		func_875(uParam0, "riffle_shuffle_deck", func_874(uParam0), 0, 2, 0);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1092906934))
	{
		func_875(uParam0, "standard_shuffle_deck", func_874(uParam0), 0, 2, 0);
	}
}

void func_422(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_39)
	{
		if (func_710(uParam0))
		{
			func_300(uParam0);
			func_824(uParam0, 1);
			return;
		}
	}
	switch (uParam1->f_7)
	{
		case 5:
			if (func_710(uParam0))
			{
				if (func_880(uParam0, uParam0->f_1239.f_51, uParam0->f_1239.f_52))
				{
					func_870(uParam0, 7);
				}
			}
			break;
		case 4:
			if (func_710(uParam0))
			{
				if (func_881(uParam0, uParam0->f_1239.f_51, uParam0->f_1239.f_52, uParam0->f_1239.f_53))
				{
					func_870(uParam0, 7);
				}
			}
			break;
		case 7:
			if (!func_620(uParam0, 0))
			{
				iVar0 = func_877(uParam0, uParam0->f_1239.f_51, uParam0->f_1239.f_52, uParam0->f_1239.f_53);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar0, 1))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 680259806))
					{
						func_878(uParam0, 0);
					}
				}
			}
			if (func_872(uParam0, 1.0f))
			{
				func_873(uParam0);
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_423(var uParam0, var uParam1)
{
	if (uParam0->f_39)
	{
		if (func_710(uParam0))
		{
			func_300(uParam0);
			func_824(uParam0, 1);
			return;
		}
	}
	switch (uParam1->f_7)
	{
		case 6:
			if (func_710(uParam0))
			{
				if (func_882(uParam0, uParam0->f_1239.f_51))
				{
					func_870(uParam0, 7);
				}
			}
			break;
		case 7:
			if (func_872(uParam0, 1.0f))
			{
				func_873(uParam0);
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_424(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_546(uParam0);
	iVar1 = uParam0->f_1239.f_51;
	if (uParam0->f_39)
	{
		func_304(uParam0, func_823(iVar0));
		func_300(uParam0);
		func_824(uParam0, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 6:
			if (func_883(uParam0, iVar1, &(uParam0->f_1239.f_34[0 /*4*/])))
			{
				func_870(uParam0, 18);
			}
			break;
		case 18:
			if (func_884(uParam0, iVar1, &(uParam0->f_1239.f_34[0 /*4*/]), iVar0))
			{
				func_870(uParam0, 19);
			}
			break;
		case 19:
			func_868(uParam0, joaat("ACTIONDONE"));
			if (func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				if (uParam0->f_1239.f_34[0 /*4*/] == 3)
				{
					func_885(uParam0, iVar1, 0, 0, 0);
					func_885(uParam0, iVar1, 0, 1, 0);
					func_885(uParam0, iVar1, 0, 2, 0);
					func_885(uParam0, iVar1, 0, 3, 0);
				}
				if (uParam0->f_1239.f_34[0 /*4*/].f_1 == 3)
				{
					func_885(uParam0, iVar1, 1, 0, 0);
					func_885(uParam0, iVar1, 1, 1, 0);
					func_885(uParam0, iVar1, 1, 2, 0);
					func_885(uParam0, iVar1, 1, 3, 0);
				}
				func_304(uParam0, func_823(iVar0));
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_425(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_39)
	{
		if (func_711(uParam0))
		{
			func_300(uParam0);
			func_824(uParam0, 1);
			return;
		}
	}
	switch (uParam1->f_7)
	{
		case 10:
			if (func_711(uParam0) && func_886(uParam0))
			{
				func_870(uParam0, 11);
			}
			break;
		case 11:
			if (!func_620(uParam0, 0))
			{
				iVar0 = func_879(uParam0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar0, 1))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 680259806))
					{
						func_878(uParam0, 0);
					}
				}
			}
			if (uParam0->f_1239.f_30 != 0)
			{
				if (func_887(uParam0, uParam0->f_1239.f_30))
				{
					func_878(uParam0, 0);
					func_870(uParam0, 32);
				}
			}
			else if (uParam0->f_1239.f_31 != 0)
			{
				if (func_888(uParam0, uParam0->f_1239.f_31))
				{
					func_878(uParam0, 0);
					func_870(uParam0, 34);
				}
			}
			else if (func_889(uParam0, uParam0->f_1239.f_32, 1))
			{
				func_878(uParam0, 0);
				func_870(uParam0, 35);
			}
			break;
		case 32:
			if (uParam0->f_1239.f_31 != 0)
			{
				if (func_888(uParam0, uParam0->f_1239.f_31))
				{
					func_878(uParam0, 1);
					func_870(uParam0, 34);
				}
			}
			else if (func_889(uParam0, uParam0->f_1239.f_32, 1))
			{
				func_878(uParam0, 1);
				func_870(uParam0, 35);
			}
			break;
		case 34:
			if (func_889(uParam0, uParam0->f_1239.f_32, 1))
			{
				func_878(uParam0, 2);
				func_870(uParam0, 35);
			}
			break;
		case 35:
			if (func_890(uParam0, 0))
			{
				func_870(uParam0, 36);
			}
			break;
		case 36:
			if (func_478(&(uParam1->f_11), 0.75f))
			{
				func_873(uParam0);
			}
			if (func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				func_891(uParam0);
				func_892(uParam0);
				func_893(uParam0);
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_426(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	struct<4> /*32*/ sVar8;

	if (uParam0->f_39)
	{
		func_300(uParam0);
		func_824(uParam0, 1);
		return;
	}
	iVar0 = uParam0->f_1239.f_30;
	iVar1 = uParam0->f_1239.f_31;
	iVar2 = uParam0->f_1239.f_32;
	iVar3 = func_894(iVar1);
	iVar4 = func_895(iVar1);
	iVar5 = func_895((iVar2 & func_567(iVar1)));
	iVar6 = iVar5;
	bVar7 = iVar5 == -1;
	sVar8.f_0 = 1;
	sVar8.f_1 = 0;
	sVar8.f_2 = 0;
	sVar8.f_3 = 0;
	switch (uParam1->f_7)
	{
		case 20:
			if (func_896(uParam0))
			{
				if (!func_897(uParam0))
				{
					func_870(uParam0, 21);
				}
				else
				{
					func_870(uParam0, 22);
				}
			}
			break;
		case 21:
			if (func_897(uParam0))
			{
				func_870(uParam0, 22);
			}
			break;
		case 22:
			if (iVar0 != 0)
			{
				if (func_898(uParam0, iVar0))
				{
					func_870(uParam0, 23);
				}
			}
			else if (iVar3 >= 1)
			{
				if (func_899(uParam0, iVar1))
				{
					func_870(uParam0, 26);
				}
			}
			else if (iVar3 == 1)
			{
				if (func_872(uParam0, 1065353216 /* Float: 1f */))
				{
					func_900(uParam0, iVar4, &sVar8);
					func_901(uParam0, iVar4, 1, 1056964608 /* Float: 0.5f */);
					func_870(uParam0, 27);
				}
			}
			else if (func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			if (uParam0->f_1239.f_7 != 22)
			{
				func_878(uParam0, 0);
			}
			break;
		case 23:
			if (iVar3 >= 1)
			{
				if (func_899(uParam0, iVar1))
				{
					func_870(uParam0, 26);
				}
			}
			else if (iVar3 == 1)
			{
				if (func_872(uParam0, 1065353216 /* Float: 1f */))
				{
					func_900(uParam0, iVar4, &sVar8);
					func_901(uParam0, iVar4, 1, 1056964608 /* Float: 0.5f */);
					func_870(uParam0, 27);
				}
			}
			else if (func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 24:
			if (func_896(uParam0))
			{
				if (!func_899(uParam0, iVar1))
				{
					func_870(uParam0, 25);
				}
				else
				{
					func_870(uParam0, 26);
				}
			}
			break;
		case 25:
			if (func_899(uParam0, iVar1))
			{
				func_870(uParam0, 26);
			}
			break;
		case 26:
			func_878(uParam0, 1);
			if (func_889(uParam0, iVar1, bVar7))
			{
				func_870(uParam0, 35);
			}
			if (uParam0->f_1239.f_7 != 26)
			{
				func_878(uParam0, 2);
			}
			break;
		case 35:
			if (!bVar7)
			{
				if (func_872(uParam0, 1065353216 /* Float: 1f */))
				{
					func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
					func_870(uParam0, 1);
				}
			}
			else if (func_890(uParam0, 0))
			{
				func_870(uParam0, 36);
			}
			break;
		case 27:
			if (func_896(uParam0))
			{
				if (!func_883(uParam0, iVar4, &sVar8))
				{
					func_870(uParam0, 28);
				}
				else
				{
					func_870(uParam0, 18);
				}
			}
			break;
		case 28:
			if (func_883(uParam0, iVar4, &sVar8))
			{
				func_870(uParam0, 18);
			}
			break;
		case 18:
			func_878(uParam0, 1);
			if (!bVar7 && iVar4 < iVar5)
			{
				if (func_884(uParam0, iVar4, &sVar8, iVar6))
				{
					func_826(uParam0, iVar6);
					func_304(uParam0, func_823(iVar6));
					func_870(uParam0, 19);
				}
			}
			else if (func_884(uParam0, iVar4, &sVar8, 4))
			{
				func_826(uParam0, 4);
				func_304(uParam0, func_823(4));
				func_870(uParam0, 19);
			}
			if (uParam0->f_1239.f_7 != 18)
			{
				func_878(uParam0, 2);
			}
			break;
		case 19:
			if (!bVar7)
			{
				if (func_872(uParam0, 1065353216 /* Float: 1f */))
				{
					func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
					func_870(uParam0, 1);
				}
			}
			else if (func_890(uParam0, 1))
			{
				func_870(uParam0, 36);
			}
			break;
		case 36:
			if (func_478(&(uParam1->f_11), 0.75f))
			{
				func_873(uParam0);
			}
			if (func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				func_891(uParam0);
				func_892(uParam0);
				func_893(uParam0);
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_427(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (uParam0->f_39)
	{
		func_300(uParam0);
		func_824(uParam0, 1);
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (((uParam0->f_1239.f_34[iVar4 /*4*/] == 1 || uParam0->f_1239.f_34[iVar4 /*4*/] == 3) && uParam0->f_1239.f_34[iVar4 /*4*/].f_1 == 0) && !uParam0->f_1239.f_34[iVar4 /*4*/].f_2)
		{
			if (uParam0->f_1239.f_34[iVar4 /*4*/] == 1)
			{
				MISC::SET_BIT(&iVar1, iVar4);
			}
			else
			{
				MISC::SET_BIT(&iVar2, iVar4);
			}
		}
		else if (uParam0->f_1239.f_34[iVar4 /*4*/] != 0 || uParam0->f_1239.f_34[iVar4 /*4*/].f_1 != 0)
		{
			MISC::SET_BIT(&iVar0, iVar4);
		}
		iVar4++;
	}
	if (func_894(iVar1) == 1)
	{
		iVar0 |= iVar1;
		iVar1 = 0;
	}
	if (func_894(iVar2) == 1)
	{
		iVar0 |= iVar2;
		iVar2 = 0;
	}
	if (iVar0 != 0)
	{
		iVar0 |= iVar1;
		iVar0 |= iVar2;
		iVar1 = 0;
		iVar2 = 0;
	}
	iVar3 = iVar1 | iVar2;
	switch (uParam1->f_7)
	{
		case 12:
			if (func_902(uParam0))
			{
				func_870(uParam0, 13);
			}
			break;
		case 13:
		case 14:
			if (uParam0->f_1239.f_7 == 13)
			{
				if (!func_620(uParam0, 0))
				{
					iVar6 = func_879(uParam0, 0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar6, 1)) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar6, 680259806))
					{
						func_878(uParam0, 0);
						if (uParam0->f_1239.f_33 == 2)
						{
							func_878(uParam0, 12);
						}
					}
				}
			}
			else
			{
				iVar5 = ((1 + uParam0->f_1239.f_53) - 1);
				if (!func_620(uParam0, iVar5))
				{
					iVar6 = func_879(uParam0, (uParam0->f_1239.f_53 - 1));
					if ((ENTITY::DOES_ENTITY_EXIST(iVar6) && ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar6, 1)) && ENTITY::HAS_ANIM_EVENT_FIRED(iVar6, 680259806))
					{
						func_878(uParam0, iVar5);
						if (uParam0->f_1239.f_53 == uParam0->f_1239.f_33)
						{
							func_878(uParam0, 12);
						}
					}
				}
			}
			if (uParam0->f_1239.f_53 < uParam0->f_1239.f_33)
			{
				if (!func_903(uParam0, 9))
				{
					func_904(uParam0, uParam0->f_1239.f_53);
				}
				else if (func_905(uParam0, 1065353216 /* Float: 1f */) && !func_504(uParam0))
				{
					func_906(uParam0, uParam0->f_1239.f_53);
					uParam0->f_1239.f_53++;
					func_870(uParam0, 14);
				}
			}
			else if (iVar0 != 0)
			{
				if (!func_903(uParam0, 10))
				{
					uParam0->f_1239.f_51 = func_895(iVar0);
					func_900(uParam0, uParam0->f_1239.f_51, &(uParam0->f_1239.f_34[uParam0->f_1239.f_51 /*4*/]));
				}
				else if (func_872(uParam0, 1065353216 /* Float: 1f */))
				{
					func_827(uParam0, "TransitionToIdleRequest", 0.5f, "CheckType", BUILTIN::TO_FLOAT(uParam0->f_1239.f_51));
					func_870(uParam0, 15);
				}
			}
			else if (iVar1 != 0)
			{
				if (func_899(uParam0, iVar1))
				{
					func_870(uParam0, 33);
				}
			}
			else if (iVar2 != 0)
			{
				if (func_888(uParam0, iVar2))
				{
					func_870(uParam0, 34);
				}
			}
			if (uParam0->f_1239.f_7 != 13 && uParam0->f_1239.f_7 != 14)
			{
				func_878(uParam0, 12);
			}
			break;
		case 15:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(uParam0->f_1239.f_51));
				if (func_867(uParam1, "FidgetAnimFinished") || func_907(uParam0, 1))
				{
					if (func_883(uParam0, uParam0->f_1239.f_51, &(uParam0->f_1239.f_34[uParam0->f_1239.f_51 /*4*/])))
					{
						func_870(uParam0, 18);
					}
					else
					{
						func_870(uParam0, 17);
					}
				}
			}
			break;
		case 17:
			if (func_883(uParam0, uParam0->f_1239.f_51, &(uParam0->f_1239.f_34[uParam0->f_1239.f_51 /*4*/])))
			{
				func_870(uParam0, 18);
			}
			break;
		case 18:
			iVar7 = func_908(iVar0, uParam0->f_1239.f_51);
			if (iVar7 != -1)
			{
				if (func_884(uParam0, uParam0->f_1239.f_51, &(uParam0->f_1239.f_34[uParam0->f_1239.f_51 /*4*/]), iVar7))
				{
					func_878(uParam0, (13 + uParam0->f_1239.f_51));
					uParam0->f_1239.f_51 = iVar7;
					func_870(uParam0, 19);
				}
			}
			else if (func_884(uParam0, uParam0->f_1239.f_51, &(uParam0->f_1239.f_34[uParam0->f_1239.f_51 /*4*/]), 4))
			{
				func_878(uParam0, (13 + uParam0->f_1239.f_51));
				uParam0->f_1239.f_51 = iVar7;
				func_870(uParam0, 19);
			}
			break;
		case 19:
			if (uParam0->f_1239.f_51 != -1)
			{
				if (func_883(uParam0, uParam0->f_1239.f_51, &(uParam0->f_1239.f_34[uParam0->f_1239.f_51 /*4*/])))
				{
					func_870(uParam0, 18);
				}
			}
			else if (iVar1 != 0)
			{
				if (func_899(uParam0, iVar1))
				{
					func_870(uParam0, 33);
				}
			}
			else if (iVar2 != 0)
			{
				if (func_888(uParam0, iVar2))
				{
					func_870(uParam0, 34);
				}
			}
			else if (iVar3 != 0)
			{
				if (func_889(uParam0, iVar3, 1))
				{
					func_870(uParam0, 35);
				}
			}
			else if (func_890(uParam0, 1))
			{
				func_870(uParam0, 36);
			}
			break;
		case 33:
			if (iVar2 != 0)
			{
				if (func_888(uParam0, iVar2))
				{
					func_870(uParam0, 34);
				}
			}
			else if (func_889(uParam0, iVar3, 1))
			{
				func_870(uParam0, 35);
			}
			if (uParam0->f_1239.f_7 != 33)
			{
				iVar4 = 0;
				while (iVar4 < 4)
				{
					if (MISC::IS_BIT_SET(iVar1, iVar4))
					{
						func_878(uParam0, (13 + iVar4));
					}
					iVar4++;
				}
			}
			break;
		case 34:
			if (func_889(uParam0, iVar3, 1))
			{
				func_870(uParam0, 35);
			}
			break;
		case 35:
			if (func_890(uParam0, 0))
			{
				func_870(uParam0, 36);
			}
			break;
		case 36:
			if (func_478(&(uParam1->f_11), 0.75f))
			{
				func_873(uParam0);
			}
			if (func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				func_891(uParam0);
				func_892(uParam0);
				func_893(uParam0);
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_428(var uParam0, var uParam1)
{
	if (uParam0->f_39)
	{
		func_300(uParam0);
		func_824(uParam0, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 29:
			if (func_896(uParam0))
			{
				if (!func_890(uParam0, 1))
				{
					func_870(uParam0, 30);
				}
				else
				{
					func_870(uParam0, 31);
				}
			}
			break;
		case 30:
			if (func_890(uParam0, 1))
			{
				func_870(uParam0, 31);
			}
			break;
		case 31:
			if (func_478(&(uParam1->f_11), 0.75f))
			{
				func_873(uParam0);
			}
			if (func_872(uParam0, 1065353216 /* Float: 1f */))
			{
				func_891(uParam0);
				func_892(uParam0);
				func_893(uParam0);
				func_827(uParam0, "IdleWithDeckRequest", 0.5f, 0, 0);
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
			{
				if (func_867(uParam1, "IdleWithDeck"))
				{
					func_300(uParam0);
					func_824(uParam0, 1);
				}
			}
			break;
	}
}

void func_429(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_824(uParam0, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_867(uParam1, "FidgetAnimFinished") || func_869(uParam0, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "IdleWithDeck");
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (func_867(uParam1, "IdleWithDeck"))
			{
				func_824(uParam0, 1);
			}
			break;
	}
}

void func_430(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_824(uParam0, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_867(uParam1, "IdleImpatientAnimFinished") || func_869(uParam0, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "IdleWithDeck");
				func_870(uParam0, 1);
			}
			break;
		case 1:
			if (func_867(uParam1, "IdleWithDeck"))
			{
				func_824(uParam0, 1);
			}
			break;
	}
}

void func_431(var uParam0, var uParam1, var uParam2)
{
}

void func_432(var uParam0, var uParam1, var uParam2)
{
}

void func_433(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1))
	{
		if (func_909(uParam1, "Idle"))
		{
			func_815(uParam0, iParam2, 1);
		}
	}
}

void func_434(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;
	int iVar10;
	Vector3 vVar11;
	float fVar14;
	Vector3 vVar15;
	Vector3 vVar18;

	bVar0 = MISC::IS_BIT_SET(uParam1->f_14, 0);
	bVar1 = MISC::IS_BIT_SET(uParam1->f_14, 1);
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 2:
			if (!func_910(*uParam1, joaat("SCRIPT_TASK_SWAP_WEAPON")))
			{
				iVar10 = func_911(0, *uParam0, uParam0->f_3, iParam2, 1051931443 /* Float: 0.35f */);
				if (ENTITY::DOES_ENTITY_EXIST(iVar10))
				{
					vVar11 = { ENTITY::GET_ENTITY_COORDS(iVar10, true, false) /*3*/ };
					fVar14 = ENTITY::GET_ENTITY_HEADING(iVar10);
					func_912(vVar11, fVar14, uParam0->f_1207[iParam2 /*3*/], uParam0->f_1220[iParam2 /*3*/], &vVar15, &vVar18);
					iVar9 = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_1207[iParam2 /*3*/], joaat("MINIGAME_BLACKJACK_PLAYER"), 0.6f, 1, false);
					if (TASK::DOES_SCENARIO_POINT_EXIST(iVar9))
					{
						TASK::_SET_SCENARIO_POINT_COORDS(iVar9, vVar15, false);
						TASK::_SET_SCENARIO_POINT_HEADING(iVar9, vVar18.z, false);
					}
					else
					{
						iVar9 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iVar10, joaat("MINIGAME_BLACKJACK_PLAYER"), vVar15, vVar18.z, 0, 0, false);
					}
					if (TASK::DOES_SCENARIO_POINT_EXIST(iVar9))
					{
						switch (func_157(uParam0, iParam2))
						{
							case 0:
							case 2:
								TASK::TASK_USE_SCENARIO_POINT(*uParam1, iVar9, "MINIGAME_BLACKJACK_PLAYER_1", 0, true, false, 0, false, -1.0f, false);
								break;
							case 1:
							default:
								TASK::TASK_USE_SCENARIO_POINT(*uParam1, iVar9, "MINIGAME_BLACKJACK_PLAYER_2", 0, true, false, 0, false, -1.0f, false);
								break;
						}
						func_818(uParam0, iParam2, 3);
						return;
					}
				}
				iVar2 = func_157(uParam0, iParam2);
				if (bVar0)
				{
					vVar3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&(uParam0->f_1152[iVar2 /*8*/]), "sit_enter_left", uParam0->f_1207[iParam2 /*3*/], uParam0->f_1220[iParam2 /*3*/], 0.0f, 2) /*3*/ };
					vVar6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&(uParam0->f_1152[iVar2 /*8*/]), "sit_enter_left", uParam0->f_1207[iParam2 /*3*/], uParam0->f_1220[iParam2 /*3*/], 0.0f, 2) /*3*/ };
				}
				else
				{
					vVar3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(&(uParam0->f_1152[iVar2 /*8*/]), "sit_enter_right", uParam0->f_1207[iParam2 /*3*/], uParam0->f_1220[iParam2 /*3*/], 0.0f, 2) /*3*/ };
					vVar6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(&(uParam0->f_1152[iVar2 /*8*/]), "sit_enter_right", uParam0->f_1207[iParam2 /*3*/], uParam0->f_1220[iParam2 /*3*/], 0.0f, 2) /*3*/ };
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*uParam1, vVar3, 1.0f, -1, 0.25f, 5120, vVar6.z);
				func_818(uParam0, iParam2, 5);
			}
			break;
		case 3:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam1, 1))
			{
				func_913(uParam0, iParam2, 0);
				func_818(uParam0, iParam2, 4);
			}
			else if (!func_910(*uParam1, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")) || (func_478(&(uParam1->f_11), 20.0f) && (uParam1->f_38 || bVar1)))
			{
				if (!func_910(*uParam1, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
				{
				}
				func_913(uParam0, iParam2, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, false, true);
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*uParam1) != INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1207[iParam2 /*3*/]))
				{
					ENTITY::SET_ENTITY_COORDS(*uParam1, uParam0->f_1207[iParam2 /*3*/] - Vector(0.5f, 0.0f, 0.0f), true, false, true, true);
				}
				func_816(uParam0, iParam2, "IdleRequest", 0);
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 4:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			func_914(uParam0, iParam2, joaat("INTERRUPTIBLE"));
			if ((TASK::IS_PED_ACTIVE_IN_SCENARIO(*uParam1, 0) || func_915(uParam0, iParam2, 0)) || func_478(&(uParam1->f_11), 20.0f))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*uParam1);
				TASK::_0x2D657B10F211C572(*uParam1, 0.5f);
				func_816(uParam0, iParam2, "IdleRequest", 0.5f);
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 5:
			if (!func_910(*uParam1, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) || (func_478(&(uParam1->f_11), 20.0f) && (uParam1->f_38 || bVar1)))
			{
				if (func_478(&(uParam1->f_11), 20.0f) && (uParam1->f_38 || bVar1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(*uParam1, false, true);
					if (INTERIOR::GET_INTERIOR_FROM_ENTITY(*uParam1) != INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1207[iParam2 /*3*/]))
					{
						ENTITY::SET_ENTITY_COORDS(*uParam1, uParam0->f_1207[iParam2 /*3*/] - Vector(0.5f, 0.0f, 0.0f), true, false, true, true);
					}
				}
				if (bVar0)
				{
					func_795(uParam0, iParam2, "sit_enter_left", 2, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
				}
				else
				{
					func_795(uParam0, iParam2, "sit_enter_right", 2, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
				}
				func_913(uParam0, iParam2, 0);
				func_818(uParam0, iParam2, 6);
			}
			break;
		case 6:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			func_914(uParam0, iParam2, joaat("INTERRUPTIBLE"));
			if ((!func_916(uParam0, iParam2, "sit_enter_left", 1065353216 /* Float: 1f */) && !func_916(uParam0, iParam2, "sit_enter_right", 1065353216 /* Float: 1f */)) || func_915(uParam0, iParam2, 0))
			{
				func_816(uParam0, iParam2, "IdleRequest", 0.5f);
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_435(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_909(uParam1, "BetAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1640046519))
	{
		func_835(uParam0, iParam2, 0, 0, 0, 4, 4, 0, 0, 0);
		func_918(uParam0, iParam2, "bet_a01_a01_chips", func_917(uParam0, iParam2, 0, 0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1946165974))
	{
		func_835(uParam0, iParam2, 0, 1, 0, 4, 4, 0, 0, 0);
		func_918(uParam0, iParam2, "bet_a01_dbl_a01_dbl_chips", func_917(uParam0, iParam2, 0, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1995104600))
	{
		func_835(uParam0, iParam2, 1, 0, 0, 4, 4, 0, 0, 0);
		func_918(uParam0, iParam2, "bet_b01_b01_chips", func_917(uParam0, iParam2, 1, 0), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -2121162615))
	{
		func_835(uParam0, iParam2, 1, 1, 0, 4, 4, 0, 0, 0);
		func_918(uParam0, iParam2, "bet_b01_dbl_b01_dbl_chips", func_917(uParam0, iParam2, 1, 1), 0, 2);
	}
}

void func_436(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_909(uParam1, "BetAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1618227096))
	{
		func_834(uParam0, iParam2, 0, 0, 2, 2, 0, 0, 0);
		func_918(uParam0, iParam2, "bet_ins_c01_chips", func_919(uParam0, iParam2, 0), 0, 2);
	}
}

void func_437(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_909(uParam1, "TakeAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				if (iVar0 == 7)
				{
					func_885(uParam0, iParam2, 0, 0, 0);
					func_885(uParam0, iParam2, 0, 1, 0);
					func_885(uParam0, iParam2, 0, 2, 0);
					func_885(uParam0, iParam2, 0, 3, 0);
					func_885(uParam0, iParam2, 1, 0, 0);
					func_885(uParam0, iParam2, 1, 1, 0);
					func_885(uParam0, iParam2, 1, 2, 0);
					func_885(uParam0, iParam2, 1, 3, 0);
				}
				else if (iVar0 == 5)
				{
					func_885(uParam0, iParam2, 0, 0, 0);
					func_885(uParam0, iParam2, 0, 1, 0);
					func_885(uParam0, iParam2, 0, 2, 0);
					func_885(uParam0, iParam2, 0, 3, 0);
				}
				else if (iVar0 == 6)
				{
					func_885(uParam0, iParam2, 1, 0, 0);
					func_885(uParam0, iParam2, 1, 1, 0);
					func_885(uParam0, iParam2, 1, 2, 0);
					func_885(uParam0, iParam2, 1, 3, 0);
				}
				else if (iVar0 == 0)
				{
					func_885(uParam0, iParam2, 0, 0, 0);
					func_885(uParam0, iParam2, 0, 1, 0);
				}
				else if (iVar0 == 2)
				{
					func_885(uParam0, iParam2, 1, 0, 0);
					func_885(uParam0, iParam2, 1, 1, 0);
				}
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 1262397426))
	{
		func_918(uParam0, iParam2, "take_a_a01_chips", func_917(uParam0, iParam2, 0, 0), 0, 2);
		func_918(uParam0, iParam2, "take_a_a01_dbl_chips", func_917(uParam0, iParam2, 0, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, 750293157))
	{
		func_918(uParam0, iParam2, "take_b_b01_chips", func_917(uParam0, iParam2, 1, 0), 0, 2);
		func_918(uParam0, iParam2, "take_b_b01_dbl_chips", func_917(uParam0, iParam2, 1, 1), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -2127792778))
	{
		func_918(uParam0, iParam2, "take_scoop_2h_a01_chips", func_917(uParam0, iParam2, 0, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_a01_dbl_chips", func_917(uParam0, iParam2, 0, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_a02_chips", func_917(uParam0, iParam2, 0, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_a02_dbl_chips", func_917(uParam0, iParam2, 0, 3), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b01_chips", func_917(uParam0, iParam2, 1, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b01_dbl_chips", func_917(uParam0, iParam2, 1, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b02_chips", func_917(uParam0, iParam2, 1, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b02_dbl_chips", func_917(uParam0, iParam2, 1, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -649731157))
	{
		func_918(uParam0, iParam2, "take_scoop_lh_a01_chips", func_917(uParam0, iParam2, 0, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_lh_a01_dbl_chips", func_917(uParam0, iParam2, 0, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_lh_a02_chips", func_917(uParam0, iParam2, 0, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_lh_a02_dbl_chips", func_917(uParam0, iParam2, 0, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -402072686))
	{
		func_918(uParam0, iParam2, "take_scoop_rh_b01_chips", func_917(uParam0, iParam2, 1, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_rh_b01_dbl_chips", func_917(uParam0, iParam2, 1, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_rh_b02_chips", func_917(uParam0, iParam2, 1, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_rh_b02_dbl_chips", func_917(uParam0, iParam2, 1, 3), 0, 2);
	}
}

void func_438(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_909(uParam1, "TakeAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				func_920(uParam0, iParam2, 0, 0);
				func_920(uParam0, iParam2, 1, 0);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -1003633298))
	{
		func_918(uParam0, iParam2, "take_ins_c01_chips", func_919(uParam0, iParam2, 0), 0, 2);
		func_918(uParam0, iParam2, "take_ins_c02_chips", func_919(uParam0, iParam2, 1), 0, 2);
	}
}

void func_439(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<13> /*104*/ sVar2;
	int iVar15;
	var uVar16[4];
	int iVar21;
	bool bVar22;
	char cVar23[64];

	iVar0 = uParam1->f_14;
	iVar1 = uParam1->f_15;
	sVar2 = { uParam1->f_17 /*13*/ };
	iVar15 = uParam1->f_32;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 9:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar15));
			if (func_909(uParam1, "BetAnimFinished"))
			{
				func_818(uParam0, iParam2, 13);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("PICKUPCHIPS")))
			{
				func_835(uParam0, iParam2, iVar0, iVar1, sVar2.f_0, sVar2.f_1, func_921(sVar2.f_0, sVar2.f_1, 10), 0, 0, 0);
				func_922(uParam0, iParam2, iVar0, iVar1, 7966);
				func_923(uParam0, iParam2, &uVar16);
				iVar21 = 0;
				while (iVar21 < 4)
				{
					bVar22 = iVar21 != sVar2.f_2;
					func_924(uParam0, iParam2, iVar21, uVar16[iVar21], sVar2.f_8[iVar21], func_921(uVar16[iVar21], sVar2.f_8[iVar21], 10), bVar22, 0);
					iVar21++;
				}
				func_818(uParam0, iParam2, 10);
			}
			else
			{
				switch (iVar15)
				{
					case 0:
						strcpy_s(&cVar23, 64, "BET_A01");
						break;
					case 1:
						strcpy_s(&cVar23, 64, "BET_A01_DBL");
						break;
					case 2:
						strcpy_s(&cVar23, 64, "BET_B01");
						break;
					case 3:
						strcpy_s(&cVar23, 64, "BET_B01_DBL");
						break;
				}
				func_925(uParam0, uParam1, iParam2, sVar2.f_2, &cVar23, "pickupChips", 2, 2);
			}
			break;
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar15));
			if (func_909(uParam1, "BetAnimFinished"))
			{
				func_818(uParam0, iParam2, 13);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("DROPCHIPS")))
			{
				func_885(uParam0, iParam2, iVar0, iVar1, 0);
				func_835(uParam0, iParam2, iVar0, iVar1, sVar2.f_0, sVar2.f_1, func_921(sVar2.f_0, sVar2.f_1, 10), 0, 0, 0);
				func_818(uParam0, iParam2, 12);
			}
			break;
		case 12:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar15));
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			if (func_909(uParam1, "BetAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 13:
			func_835(uParam0, iParam2, iVar0, iVar1, sVar2.f_0, sVar2.f_1, func_921(sVar2.f_0, sVar2.f_1, 10), 1, 0, 0);
			func_923(uParam0, iParam2, &uVar16);
			iVar21 = 0;
			while (iVar21 < 4)
			{
				func_924(uParam0, iParam2, iVar21, uVar16[iVar21], sVar2.f_8[iVar21], func_921(uVar16[iVar21], sVar2.f_8[iVar21], 10), 1, 0);
				iVar21++;
			}
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
			func_818(uParam0, iParam2, 1);
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_440(var uParam0, var uParam1, int iParam2)
{
	struct<13> /*104*/ sVar0;
	int iVar13;
	var uVar14[4];
	int iVar19;
	bool bVar20;

	sVar0 = { uParam1->f_17 /*13*/ };
	iVar13 = uParam1->f_32;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 9:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			if (func_909(uParam1, "BetAnimFinished"))
			{
				func_818(uParam0, iParam2, 13);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("PICKUPCHIPS")))
			{
				func_834(uParam0, iParam2, 0, sVar0.f_0, sVar0.f_1, func_921(sVar0.f_0, sVar0.f_1, 10), 0, 0, 0);
				func_926(uParam0, iParam2, 0, 7966);
				func_923(uParam0, iParam2, &uVar14);
				iVar19 = 0;
				while (iVar19 < 4)
				{
					bVar20 = iVar19 != sVar0.f_2;
					func_924(uParam0, iParam2, iVar19, uVar14[iVar19], sVar0.f_8[iVar19], func_921(uVar14[iVar19], sVar0.f_8[iVar19], 10), bVar20, 0);
					iVar19++;
				}
				func_818(uParam0, iParam2, 10);
			}
			else
			{
				func_925(uParam0, uParam1, iParam2, sVar0.f_2, "BET_INS", "pickupChips", 2, 2);
			}
			break;
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			if (func_909(uParam1, "BetAnimFinished"))
			{
				func_818(uParam0, iParam2, 13);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("DROPCHIPS")))
			{
				func_920(uParam0, iParam2, 0, 0);
				func_834(uParam0, iParam2, 0, sVar0.f_0, sVar0.f_1, func_921(sVar0.f_0, sVar0.f_1, 10), 0, 0, 0);
				func_818(uParam0, iParam2, 12);
			}
			break;
		case 12:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			if (func_909(uParam1, "BetAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 13:
			func_834(uParam0, iParam2, 0, sVar0.f_0, sVar0.f_1, func_921(sVar0.f_0, sVar0.f_1, 10), 1, 0, 0);
			func_923(uParam0, iParam2, &uVar14);
			iVar19 = 0;
			while (iVar19 < 4)
			{
				func_924(uParam0, iParam2, iVar19, uVar14[iVar19], sVar0.f_8[iVar19], func_921(uVar14[iVar19], sVar0.f_8[iVar19], 10), 1, 0);
				iVar19++;
			}
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
			func_818(uParam0, iParam2, 1);
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_441(var uParam0, var uParam1, int iParam2)
{
	struct<13> /*104*/ sVar0;
	int iVar13;
	int iVar14;
	bool bVar15;
	char cVar16[64];

	sVar0 = { uParam1->f_17 /*13*/ };
	iVar13 = uParam1->f_32;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			if (func_909(uParam1, "TakeAnimFinished"))
			{
				func_818(uParam0, iParam2, 13);
			}
			else
			{
				switch (iVar13)
				{
					case 0:
						strcpy_s(&cVar16, 64, "TAKE_A");
						break;
					case 2:
						strcpy_s(&cVar16, 64, "TAKE_B");
						break;
				}
				func_925(uParam0, uParam1, iParam2, sVar0.f_2, &cVar16, "dropChips_1", 3, 1);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("PICKUPCHIPS_1")))
				{
					if (iVar13 == 0)
					{
						func_922(uParam0, iParam2, 0, 0, 7966);
					}
					else
					{
						func_922(uParam0, iParam2, 1, 0, 7966);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("PICKUPCHIPS_2")))
				{
					if (iVar13 == 0)
					{
						func_922(uParam0, iParam2, 0, 1, 7966);
					}
					else
					{
						func_922(uParam0, iParam2, 1, 1, 7966);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("DROPCHIPS_1")))
				{
					if (iVar13 == 0)
					{
						func_885(uParam0, iParam2, 0, 0, 0);
						func_885(uParam0, iParam2, 0, 1, 0);
					}
					else if (iVar13 == 2)
					{
						func_885(uParam0, iParam2, 1, 0, 0);
						func_885(uParam0, iParam2, 1, 1, 0);
					}
					iVar14 = 0;
					while (iVar14 < 4)
					{
						bVar15 = iVar14 != sVar0.f_2;
						func_924(uParam0, iParam2, iVar14, sVar0.f_3[iVar14], sVar0.f_8[iVar14], func_921(sVar0.f_3[iVar14], sVar0.f_8[iVar14], 10), bVar15, 0);
						iVar14++;
					}
					func_818(uParam0, iParam2, 12);
				}
			}
			break;
		case 11:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			if (func_909(uParam1, "TakeAnimFinished"))
			{
				func_818(uParam0, iParam2, 13);
			}
			else if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], 1850349455))
			{
				if ((iVar13 == 0 || iVar13 == 5) || iVar13 == 7)
				{
					func_885(uParam0, iParam2, 0, 0, 1);
					func_885(uParam0, iParam2, 0, 1, 1);
					func_885(uParam0, iParam2, 0, 2, 1);
					func_885(uParam0, iParam2, 0, 3, 1);
				}
				if ((iVar13 == 2 || iVar13 == 6) || iVar13 == 7)
				{
					func_885(uParam0, iParam2, 1, 0, 1);
					func_885(uParam0, iParam2, 1, 1, 1);
					func_885(uParam0, iParam2, 1, 2, 1);
					func_885(uParam0, iParam2, 1, 3, 1);
				}
				iVar14 = 0;
				while (iVar14 < 4)
				{
					bVar15 = iVar14 != sVar0.f_2;
					func_924(uParam0, iParam2, iVar14, sVar0.f_3[iVar14], sVar0.f_8[iVar14], func_921(sVar0.f_3[iVar14], sVar0.f_8[iVar14], 10), bVar15, 0);
					iVar14++;
				}
				func_818(uParam0, iParam2, 12);
			}
			break;
		case 12:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			if (func_909(uParam1, "TakeAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 13:
			if ((iVar13 == 0 || iVar13 == 5) || iVar13 == 7)
			{
				func_885(uParam0, iParam2, 0, 0, 1);
				func_885(uParam0, iParam2, 0, 1, 1);
				func_885(uParam0, iParam2, 0, 2, 1);
				func_885(uParam0, iParam2, 0, 3, 1);
			}
			if ((iVar13 == 2 || iVar13 == 6) || iVar13 == 7)
			{
				func_885(uParam0, iParam2, 1, 0, 1);
				func_885(uParam0, iParam2, 1, 1, 1);
				func_885(uParam0, iParam2, 1, 2, 1);
				func_885(uParam0, iParam2, 1, 3, 1);
			}
			iVar14 = 0;
			while (iVar14 < 4)
			{
				func_924(uParam0, iParam2, iVar14, sVar0.f_3[iVar14], sVar0.f_8[iVar14], func_921(sVar0.f_3[iVar14], sVar0.f_8[iVar14], 10), 1, 0);
				iVar14++;
			}
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
			func_818(uParam0, iParam2, 1);
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -2127792778))
	{
		func_918(uParam0, iParam2, "take_scoop_2h_a01_chips", func_917(uParam0, iParam2, 0, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_a01_dbl_chips", func_917(uParam0, iParam2, 0, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_a02_chips", func_917(uParam0, iParam2, 0, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_a02_dbl_chips", func_917(uParam0, iParam2, 0, 3), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b01_chips", func_917(uParam0, iParam2, 1, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b01_dbl_chips", func_917(uParam0, iParam2, 1, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b02_chips", func_917(uParam0, iParam2, 1, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_2h_b02_dbl_chips", func_917(uParam0, iParam2, 1, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -649731157))
	{
		func_918(uParam0, iParam2, "take_scoop_lh_a01_chips", func_917(uParam0, iParam2, 0, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_lh_a01_dbl_chips", func_917(uParam0, iParam2, 0, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_lh_a02_chips", func_917(uParam0, iParam2, 0, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_lh_a02_dbl_chips", func_917(uParam0, iParam2, 0, 3), 0, 2);
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(*uParam1, -402072686))
	{
		func_918(uParam0, iParam2, "take_scoop_rh_b01_chips", func_917(uParam0, iParam2, 1, 0), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_rh_b01_dbl_chips", func_917(uParam0, iParam2, 1, 1), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_rh_b02_chips", func_917(uParam0, iParam2, 1, 2), 0, 2);
		func_918(uParam0, iParam2, "take_scoop_rh_b02_dbl_chips", func_917(uParam0, iParam2, 1, 3), 0, 2);
	}
}

void func_442(var uParam0, var uParam1, int iParam2)
{
	struct<13> /*104*/ sVar0;
	int iVar13;
	int iVar14;
	bool bVar15;

	sVar0 = { uParam1->f_17 /*13*/ };
	iVar13 = uParam1->f_32;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 10:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			if (func_909(uParam1, "TakeAnimFinished"))
			{
				func_818(uParam0, iParam2, 13);
			}
			else
			{
				func_925(uParam0, uParam1, iParam2, sVar0.f_2, "TAKE_INS", "dropChips_1", 3, 1);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("PICKUPCHIPS_1")))
				{
					func_926(uParam0, iParam2, 0, 7966);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("PICKUPCHIPS_2")))
				{
					func_926(uParam0, iParam2, 1, 7966);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam2 /*46*/], joaat("DROPCHIPS_1")))
				{
					func_920(uParam0, iParam2, 0, 0);
					func_920(uParam0, iParam2, 1, 0);
					iVar14 = 0;
					while (iVar14 < 4)
					{
						bVar15 = iVar14 != sVar0.f_2;
						func_924(uParam0, iParam2, iVar14, sVar0.f_3[iVar14], sVar0.f_8[iVar14], func_921(sVar0.f_3[iVar14], sVar0.f_8[iVar14], 10), bVar15, 0);
						iVar14++;
					}
					func_818(uParam0, iParam2, 12);
				}
			}
			break;
		case 12:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar13));
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			if (func_909(uParam1, "TakeAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 13:
			func_920(uParam0, iParam2, 0, 1);
			func_920(uParam0, iParam2, 1, 1);
			iVar14 = 0;
			while (iVar14 < 4)
			{
				func_924(uParam0, iParam2, iVar14, sVar0.f_3[iVar14], sVar0.f_8[iVar14], func_921(sVar0.f_3[iVar14], sVar0.f_8[iVar14], 10), 1, 0);
				iVar14++;
			}
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
			func_818(uParam0, iParam2, 1);
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_443(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_909(uParam1, "HitAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_444(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if (func_909(uParam1, "StandAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_445(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "WinLossType", BUILTIN::TO_FLOAT(uParam1->f_30));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "IntensityType", BUILTIN::TO_FLOAT(uParam1->f_31));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(*uParam1, "VariationType", BUILTIN::TO_FLOAT(uParam1->f_32));
			if (func_909(uParam1, "ExpressAnimFinished") || func_915(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_446(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam1->f_14;
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam2 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
			if ((func_909(uParam1, "FidgetAnimFinished") || func_909(uParam1, "FidgetSubtleAnimFinished")) || func_927(uParam0, iParam2, 1))
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
				func_818(uParam0, iParam2, 1);
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_447(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_39)
	{
		func_815(uParam0, iParam2, 1);
		return;
	}
	switch (uParam1->f_7)
	{
		case 0:
			if (uParam1->f_38)
			{
				if (TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam1))
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(*uParam1, "Idle");
					func_818(uParam0, iParam2, 1);
				}
			}
			break;
		case 1:
			if (func_909(uParam1, "Idle"))
			{
				func_815(uParam0, iParam2, 1);
			}
			break;
	}
}

void func_448(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;

	bVar0 = MISC::IS_BIT_SET(uParam1->f_14, 0);
	bVar1 = MISC::IS_BIT_SET(uParam1->f_14, 1);
	if (uParam0->f_39)
	{
		func_308(uParam0, iParam2, 0);
		return;
	}
	switch (uParam1->f_7)
	{
		case 7:
			func_914(uParam0, iParam2, joaat("ACTIONDONE"));
			if ((((((!func_916(uParam0, iParam2, "sit_exit_left", 1065353216 /* Float: 1f */) && !func_916(uParam0, iParam2, "sit_exit_left_loss_a", 1065353216 /* Float: 1f */)) && !func_916(uParam0, iParam2, "sit_exit_left_loss_b", 1065353216 /* Float: 1f */)) && !func_916(uParam0, iParam2, "sit_exit_right", 1065353216 /* Float: 1f */)) && !func_916(uParam0, iParam2, "sit_exit_right_loss_a", 1065353216 /* Float: 1f */)) && !func_916(uParam0, iParam2, "sit_exit_right_loss_b", 1065353216 /* Float: 1f */)) || ((bVar0 || !bVar1) && func_928(uParam0, iParam2, 1)))
			{
				if (PED::IS_PED_A_PLAYER(*uParam1) || func_119(*uParam1))
				{
					func_308(uParam0, iParam2, 0);
					return;
				}
				else if (bVar0)
				{
					if (uParam1->f_43)
					{
						ENTITY::FREEZE_ENTITY_POSITION(*uParam1, false);
						ENTITY::SET_ENTITY_COLLISION(*uParam1, true, false);
					}
					func_355(uParam0, iParam2, 0);
					TASK::TASK_WANDER_STANDARD(*uParam1, 40000.0f, 0);
					func_818(uParam0, iParam2, 8);
				}
				else
				{
					func_308(uParam0, iParam2, 0);
					return;
				}
			}
			break;
		case 8:
			if (ENTITY::IS_ENTITY_OCCLUDED(*uParam1) || func_929(&(uParam1->f_11)) > 20.0f)
			{
				func_930(uParam0, iParam2);
				return;
			}
			break;
	}
}

void func_449(var uParam0, var uParam1, var uParam2)
{
	if (!PED::IS_PED_INJURED(*uParam1))
	{
	}
}

char* func_450(int iParam0)
{
	char cVar0[16];

	strcpy_s(&cVar0, 16, "#");
	StringIntConCat(&cVar0, iParam0, 16);
	return func_931(cVar0);
}

void func_451(var uParam0)
{
	uParam0->f_5 = 0.0f;
	uParam0->f_6 = *uParam0;
	uParam0->f_7 = 0;
}

void func_452(var uParam0, int iParam1)
{
	uParam0->f_230[iParam1 /*2*/] = 0;
	uParam0->f_230[iParam1 /*2*/].f_1 = 0;
}

void func_453(var uParam0, Vector3 vParam1)
{
	uParam0->f_11 = { vParam1 /*3*/ };
}

void func_454(var uParam0)
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

void func_455(var uParam0)
{
	int iVar0;

	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_4[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_7 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_454(&(uParam0->f_8[iVar0 /*25*/]));
		uParam0->f_8[iVar0 /*25*/].f_24 = 0;
		iVar0++;
	}
	uParam0->f_59 = 0;
}

void func_456(var uParam0)
{
	uParam0->f_275 = { *uParam0 /*268*/ };
}

void func_457(var uParam0)
{
	uParam0->f_3 = 300;
	uParam0->f_4 = 2;
}

void func_458(var uParam0)
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

void func_459(var uParam0)
{
	int iVar0;

	*uParam0 = -1;
	func_932(uParam0);
	func_458(&(uParam0->f_592));
	func_933(&(uParam0->f_592));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar0))
		{
			uParam0->f_27[iVar0 /*60*/].f_3 = -1;
			uParam0->f_27[iVar0 /*60*/].f_2 = -1;
			func_934(uParam0, iVar0);
		}
		iVar0++;
	}
}

bool func_460(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_946[iParam1 /*46*/].f_6 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_461(var uParam0, int iParam1, int iParam2)
{
	return MISC::IS_BIT_SET(uParam0->f_946[iParam1 /*46*/].f_36, iParam2);
}

void func_462(var uParam0, var uParam1, bool bParam2)
{
	if (uParam0->f_1)
	{
	}
	else if (!CAM::_IS_CAM_DATA_DICT_LOADED("table_games_cam"))
	{
	}
	else if (!STREAMING::HAS_MODEL_LOADED(joaat("P_COIN01X")))
	{
	}
	else
	{
		uParam0->f_5.f_17 = OBJECT::CREATE_OBJECT(joaat("P_COIN01X"), *uParam1 + Vector(0.825f, 0.0f, 0.0f), false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5.f_17))
		{
			return;
		}
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_5.f_17, false);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_5.f_17, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_5.f_17, true);
		strcpy_s(&(uParam0->f_5), 64, "table_games_cam");
		uParam0->f_5.f_16 = joaat("BLACKJACK_TABLE_SETTINGS");
		if (!bParam2)
		{
			strcpy_s(&(uParam0->f_5.f_8), 64, "CAMERA_TABLE_GAMES_BLACKJACK_REQUEST");
		}
		else
		{
			strcpy_s(&(uParam0->f_5.f_8), 64, "CAMERA_TABLE_GAMES_BLACKJACK_CUT_REQUEST");
		}
		CAM::_CAM_CREATE(&(uParam0->f_5));
		func_935(&(uParam0->f_32));
		uParam0->f_1 = 1;
		func_749(uParam0, 1, 0, 0);
		if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0) && CAM::_IS_IN_FULL_FIRST_PERSON_MODE())
		{
			GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("Odd_Jobs_Blackjack_First_Person", 5.0f);
			uParam0->f_4 = 1;
		}
	}
}

void func_463(var uParam0, int iParam1)
{
	uParam0->f_1459 = iParam1;
	func_187(&(uParam0->f_1460));
}

bool func_464(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_946[iParam1 /*46*/].f_6 == iParam2 && uParam0->f_946[iParam1 /*46*/].f_37 == 0)
	{
		return true;
	}
	return false;
}

bool func_465(var uParam0)
{
	if (((((uParam0->f_42 == 0 || uParam0->f_42 == 1) || uParam0->f_42 == 2) || uParam0->f_42 == 3) || uParam0->f_42 == 4) || uParam0->f_42 == 5)
	{
		return true;
	}
	return false;
}

void func_466(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	func_936(&(uParam0->f_3218), uParam0->f_9);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam2, iVar0))
		{
			func_937(uParam0, uParam2, iVar0);
		}
		iVar0++;
	}
	func_681(&(uParam0->f_3218));
	if (bParam3)
	{
		switch (uParam1->f_1458)
		{
			case 1:
			case 2:
				break;
			case 4:
				func_536(uParam0, uParam2);
				break;
			case 7:
				func_536(uParam0, uParam2);
				func_587(uParam0, uParam2);
				if (*uParam2 > 0)
				{
					iVar0 = 0;
					while (iVar0 < *uParam2)
					{
						if (func_280(uParam2, iVar0))
						{
							func_938(uParam0, uParam2, iVar0);
						}
						iVar0++;
					}
				}
				break;
			default:
				break;
		}
	}
}

void func_467(var uParam0, var uParam1)
{
	int iVar0;
	char[] cVar1[8];
	char[] cVar9[8];
	bool bVar17;
	int iVar18;

	iVar0 = func_114(uParam0, uParam0->f_10.f_4);
	if (func_113(uParam1, uParam0->f_9) > 0)
	{
		if (uParam0->f_1545)
		{
			func_939(&(uParam0->f_3218), 4, func_114(uParam0, func_113(uParam1, uParam0->f_9)));
		}
		else
		{
			func_939(&(uParam0->f_3218), 3, 0);
		}
		uParam0->f_1545 = 0;
	}
	else if (func_282(1) >= iVar0)
	{
		func_939(&(uParam0->f_3218), 1, 0);
	}
	else
	{
		func_939(&(uParam0->f_3218), 2, iVar0);
	}
	bVar17 = false;
	iVar18 = 0;
	while (iVar18 < 4)
	{
		if (func_116(uParam1, iVar18))
		{
			if (!func_529(&(uParam0->f_3218), iVar18))
			{
				func_940(&(uParam0->f_3218), iVar18, &cVar1, &cVar9);
				func_941(&(uParam0->f_3218), iVar18, &cVar1, &cVar9);
				bVar17 = true;
			}
			if (func_529(&(uParam0->f_3218), iVar18))
			{
				func_942(&(uParam0->f_3218), iVar18, MISC::VAR_STRING(2, "MGBLK_INFO_WAITING_BET" /* GXTEntry: "Waiting for bet..." */));
				func_943(&(uParam0->f_3218), iVar18, 0);
				func_944(&(uParam0->f_3218), iVar18, func_113(uParam1, iVar18));
				if (func_759(uParam1, iVar18) > 0)
				{
					if (func_492(uParam1, iVar18, 0) > 0)
					{
						func_942(&(uParam0->f_3218), iVar18, MISC::VAR_STRING(2, "MGBLK_INFO_BET" /* GXTEntry: "Bet ~1$~" */, func_114(uParam0, func_492(uParam1, iVar18, 0))));
					}
					else
					{
						func_942(&(uParam0->f_3218), iVar18, MISC::VAR_STRING(2, "MGBLK_INFO_SITTING_OUT" /* GXTEntry: "Sitting out" */));
					}
				}
			}
		}
		iVar18++;
	}
	if (bVar17)
	{
		func_681(&(uParam0->f_3218));
	}
	func_945(&(uParam0->f_3218));
}

void func_468(var uParam0)
{
	func_214(&(uParam0->f_1534));
}

bool func_469(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_117(uParam0, iVar0))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_946[iVar0 /*46*/]))
			{
				return true;
			}
		}
		iVar0++;
	}
	if (func_946(uParam0))
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_1239))
		{
			return true;
		}
	}
	return false;
}

bool func_470(var uParam0)
{
	return uParam0->f_1567.f_41 != 0;
}

bool func_471(var uParam0, var uParam1)
{
	if (func_947(uParam0, uParam1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_PlaceBets", uParam1->f_1239, 0, uParam1->f_39);
	}
	return false;
}

bool func_472(var uParam0)
{
	return uParam0->f_253;
}

void func_473(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	var uVar0;
	var uVar1;

	if (uParam0->f_198)
	{
		return;
	}
	if (uParam0->f_253)
	{
	}
	uParam0->f_253 = 1;
	uParam0->f_253.f_1 = bParam4;
	uParam0->f_253.f_2 = iParam3;
	func_948(uParam1, uParam2, iParam3, &uVar0, &uVar1, bParam4);
	if (bParam4)
	{
		uParam0->f_253.f_3 = uVar1;
	}
	else
	{
		uParam0->f_253.f_3 = uVar0;
	}
	func_451(&(uParam0->f_253.f_4));
	uParam0->f_253.f_12 = 0;
	if (bParam4)
	{
		func_949(uParam0, "MGBLK_OBJ_YOUR_INS" /* GXTEntry: "Place your insurance bet" */);
	}
	else
	{
		func_949(uParam0, "MGBLK_OBJ_YOUR_BET" /* GXTEntry: "Place your bet" */);
	}
}

int func_474(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_253)
	{
		if (!uParam0->f_253.f_1)
		{
			if (!func_96(uParam0->f_253.f_13))
			{
				uParam0->f_253.f_13 = func_352("MGBLK_CTX_PLACE_BET" /* GXTEntry: "Place Bet (~1$~)" */, joaat("INPUT_MINIGAME_BLACKJACK_BET"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (!func_96(uParam0->f_253.f_15))
			{
				uParam0->f_253.f_15 = func_352("MGBLK_CTX_ALTER" /* GXTEntry: "Amount" */, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
		}
		else
		{
			if (!func_96(uParam0->f_253.f_13))
			{
				uParam0->f_253.f_13 = func_352("MGBLK_CTX_PLACE_INS" /* GXTEntry: "Place Insurance Bet (~1$~)" */, joaat("INPUT_MINIGAME_BLACKJACK_BET"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (!func_96(uParam0->f_253.f_14))
			{
				uParam0->f_253.f_14 = func_352("MGBLK_CTX_DECLINE" /* GXTEntry: "Decline" */, joaat("INPUT_MINIGAME_BLACKJACK_DECLINE"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
			if (!func_96(uParam0->f_253.f_15))
			{
				uParam0->f_253.f_15 = func_352("MGBLK_CTX_ALTER" /* GXTEntry: "Amount" */, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
		}
		func_948(uParam1, uParam2, uParam0->f_253.f_2, &iVar0, &iVar1, uParam0->f_253.f_1);
		iVar2 = 0;
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
		{
			func_451(&(uParam0->f_253.f_4));
		}
		if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_INCREASE_BET")))
		{
			iVar2 = func_724(&(uParam0->f_253.f_4), 1.0f, 0);
		}
		else if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_DECREASE_BET")))
		{
			iVar2 = func_724(&(uParam0->f_253.f_4), -1.0f, 0);
		}
		else
		{
			iVar2 = func_724(&(uParam0->f_253.f_4), -PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_MINIGAME_CHANGE_BET_AXIS_Y")), 0);
		}
		if (iVar2 != 0)
		{
			iVar3 = func_725((uParam0->f_253.f_3 + (iVar2 * uParam2->f_4)), iVar0, iVar1);
			if (uParam0->f_253.f_3 != iVar3)
			{
				uParam0->f_253.f_3 = iVar3;
				func_726((iVar3 == iVar0 || iVar3 == iVar1));
			}
		}
		if (func_727(uParam0->f_253.f_13, 1))
		{
			if (!uParam0->f_253.f_1)
			{
				*iParam3 = 2;
			}
			else
			{
				*iParam3 = 3;
			}
			iParam3->f_1 = uParam0->f_253.f_3;
		}
		else if (func_727(uParam0->f_253.f_14, 1))
		{
			if (!uParam0->f_253.f_1)
			{
				*iParam3 = 2;
			}
			else
			{
				*iParam3 = 3;
			}
			iParam3->f_1 = 0;
		}
		if (func_96(uParam0->f_253.f_13))
		{
			if (!uParam0->f_253.f_1)
			{
				func_729(uParam0->f_253.f_13, "MGBLK_CTX_PLACE_BET" /* GXTEntry: "Place Bet (~1$~)" */, func_728(uParam0, uParam0->f_253.f_3), 1);
			}
			else
			{
				func_729(uParam0->f_253.f_13, "MGBLK_CTX_PLACE_INS" /* GXTEntry: "Place Insurance Bet (~1$~)" */, func_728(uParam0, uParam0->f_253.f_3), 1);
			}
		}
		if (*iParam3 != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_475(var uParam0)
{
	func_950(&(uParam0->f_3218), uParam0->f_9, -1.0f);
}

void func_476(var uParam0)
{
	if (uParam0->f_253)
	{
		uParam0->f_253 = 0;
		uParam0->f_253.f_1 = 0;
		uParam0->f_253.f_3 = 0;
		func_951(uParam0);
		func_737(&(uParam0->f_253.f_13), 1, 1);
		func_737(&(uParam0->f_253.f_14), 1, 1);
		func_737(&(uParam0->f_253.f_15), 1, 1);
	}
}

bool func_477(var uParam0)
{
	return func_952(*uParam0, 1);
}

bool func_478(var uParam0, float fParam1)
{
	if (!func_477(uParam0))
	{
		return false;
	}
	if (func_929(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_479(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 2;
	iParam2->f_1 = func_953(&(uParam0->f_17), &(uParam0->f_10), iParam1);
}

bool func_480(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_946[iParam1 /*46*/].f_6 == 1)
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_946[iParam1 /*46*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_946[iParam1 /*46*/]))
		{
			return true;
		}
	}
	else if (!uParam0->f_946[iParam1 /*46*/].f_38)
	{
		func_739(uParam0, iParam1);
	}
	return false;
}

bool func_481(var uParam0, bool bParam1)
{
	if (uParam0->f_1239.f_6 == 1)
	{
		if ((!bParam1 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1239)) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_1239))
		{
			return true;
		}
	}
	else if (!uParam0->f_1239.f_19)
	{
		func_954(uParam0);
	}
	return false;
}

void func_482(var uParam0)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_2 != 4)
	{
	}
	else
	{
		func_824(uParam0, 5);
		if (!uParam0->f_39)
		{
			if (func_589())
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "ShuffleRiffle");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "ShuffleStandard");
			}
		}
	}
}

bool func_483(var uParam0, int iParam1)
{
	if (uParam0->f_1239.f_6 == iParam1)
	{
		return true;
	}
	return false;
}

void func_484(var uParam0, int iParam1)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_2 != 4)
	{
	}
	else
	{
		func_824(uParam0, 15);
		uParam0->f_1239.f_14 = iParam1;
		func_873(uParam0);
		if (!uParam0->f_39)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "IdleImpatient");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(iParam1));
		}
	}
}

void func_485(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_1239.f_4 >= 2)
	{
	}
	else
	{
		iVar0 = func_955(iParam1);
		iVar1 = func_956(uParam0);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_1239, func_957(iParam1), func_246(uParam0, iVar0, iVar1));
		uParam0->f_1239.f_5 = iParam1;
	}
}

bool func_486(var uParam0, var uParam1)
{
	if (func_947(uParam0, uParam1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_PlayerSlow", uParam1->f_1239, 0, uParam1->f_39);
	}
	return false;
}

int func_487(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar1) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 += 1 % 4;
		iVar0++;
	}
	return -1;
}

bool func_488(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, iParam4, 1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "HurryUp", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

bool func_489(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_285 != joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_554[iParam2], iParam1))
	{
		return false;
	}
	if (bParam3)
	{
		if (iParam2 > 0 && uParam0->f_554[0] != 0)
		{
			return false;
		}
	}
	uParam0->f_17.f_27[iParam1 /*60*/] = { uParam0->f_286.f_27[iParam1 /*60*/] /*60*/ };
	switch (iParam2)
	{
		case 0:
			func_768(uParam0, iParam1);
			break;
		case 10:
			func_960(uParam0, iParam1, func_959(&(uParam0->f_17), iParam1));
			break;
	}
	MISC::CLEAR_BIT(&(uParam0->f_554[iParam2]), iParam1);
	if (func_273(&(uParam0->f_554), 0))
	{
		func_111(uParam0, 1, 0);
	}
	return true;
}

void func_490(var uParam0, var uParam1, int iParam2)
{
	if (func_529(&(uParam0->f_3218), iParam2))
	{
		func_939(&(uParam0->f_3218), 3, 0);
		func_944(&(uParam0->f_3218), iParam2, func_113(uParam1, iParam2));
	}
}

void func_491(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar5;

	uVar0 = 4;
	uVar5 = 4;
	func_961(iParam2, &uVar0, &uVar5);
	func_962(uParam0, iParam1, &uVar0, &uVar5, bParam3);
}

int func_492(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_27[iParam1 /*60*/].f_4[iParam2];
}

void func_493(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<9> /*72*/ sVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else if (iParam2 != 0 && iParam2 != 1)
	{
	}
	else if (iParam3 != 0 && iParam3 != 1)
	{
	}
	else if (iParam4 <= 0)
	{
	}
	else
	{
		sVar0.f_3 = 4;
		sVar0.f_8 = 4;
		func_963(uParam0, iParam1, iParam4, &sVar0);
		func_964(uParam0, iParam1, iParam2, iParam3, &sVar0);
	}
}

bool func_494(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		if ((uParam0->f_1567.f_53 && uParam0->f_1567[iParam3 /*10*/]) && uParam0->f_1567[iParam3 /*10*/].f_6 <= -3)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "BetPlaced_LosingStreak", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "BetPlaced", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
	}
	return false;
}

void func_495(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<7> /*56*/ sVar0;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;

	sVar0 = { uParam0->f_1654[iParam2 /*7*/] /*7*/ };
	if (iParam1 < 0 || iParam1 > 4)
	{
	}
	else
	{
		iVar8 = 0;
		iVar9 = 0;
		while (iVar9 < 4)
		{
			if ((((uParam0->f_1724.f_946[iVar9 /*46*/] != 0 && uParam0->f_1724.f_946[iVar9 /*46*/].f_33 == 0) && uParam0->f_1631[iVar9] == -1) && iVar9 != iParam1) && MISC::IS_BIT_SET(iParam3, iVar9))
			{
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < sVar0.f_4)
				{
					MISC::SET_BIT(&iVar8, iVar9);
				}
			}
			iVar9++;
		}
		iVar10 = sVar0.f_6;
		fVar11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(sVar0.f_0, sVar0.f_1);
		while ((iVar8 & 15) != 0 && iVar10 > 0)
		{
			iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			while (!MISC::IS_BIT_SET(iVar8, iVar9))
			{
				iVar9 += 1 % 4;
			}
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < sVar0.f_5)
			{
				iVar7 = 1;
			}
			else
			{
				iVar7 = 0;
			}
			func_965(uParam0, iVar9, iParam1, iVar7, fVar11);
			fVar11 += MISC::GET_RANDOM_FLOAT_IN_RANGE(sVar0.f_2, sVar0.f_3);
			MISC::CLEAR_BIT(&iVar8, iVar9);
			iVar10--;
		}
	}
}

void func_496(var uParam0, var uParam1, int iParam2)
{
	func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_BET" /* GXTEntry: "Bet ~1$~" */, func_114(uParam0, func_492(uParam1, iParam2, 0))));
	func_944(&(uParam0->f_3218), iParam2, func_113(uParam1, iParam2));
}

void func_497(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	uParam0->f_1567.f_41 = iParam1;
	uParam0->f_1567.f_41.f_1 = iParam4;
	uParam0->f_1567.f_41.f_2 = iParam2;
	uParam0->f_1567.f_41.f_3 = iParam3;
	if (bParam5)
	{
		func_187(&(uParam0->f_1567.f_41.f_4));
	}
}

void func_498(var uParam0, int iParam1)
{
	if (iParam1 == uParam0->f_9)
	{
		func_966();
	}
}

void func_499(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 13);
		iVar0 = 2;
		iVar1 = uParam0->f_1234;
		iVar2 = (uParam0->f_1234 / iVar0);
		iVar3 = (uParam0->f_1234 % iVar0);
		if (iParam2 == 0 || iParam2 == 1)
		{
			if (iVar3 >= 0 && iVar3 < iVar0)
			{
				iVar3 = ((iVar3 + MISC::GET_RANDOM_INT_IN_RANGE(1, iVar0)) % iVar0);
			}
			else
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
			}
			iVar2 = iParam2;
			iVar1 = ((iVar2 * iVar0) + iVar3);
		}
		else
		{
			iVar1 = ((iVar1 + MISC::GET_RANDOM_INT_IN_RANGE(1, 4)) % 4);
			iVar2 = (iVar1 / iVar0);
			iVar3 = (iVar1 % iVar0);
		}
		uParam0->f_1234 = iVar1;
		uParam0->f_946[iParam1 /*46*/].f_14 = iVar3;
		if (!uParam0->f_39)
		{
			if (iVar2 == 0)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "StandLeftHand");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "StandRightHand");
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar3));
		}
	}
}

bool func_500(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "BetDeclined", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

void func_501(var uParam0, int iParam1)
{
	func_942(&(uParam0->f_3218), iParam1, MISC::VAR_STRING(2, "MGBLK_INFO_SITTING_OUT" /* GXTEntry: "Sitting out" */));
}

bool func_502(var uParam0, int iParam1)
{
	return AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_946[iParam1 /*46*/]);
}

bool func_503(var uParam0, int iParam1)
{
	if (uParam0->f_1239.f_6 == iParam1 && uParam0->f_1239.f_18 == 0)
	{
		return true;
	}
	return false;
}

bool func_504(var uParam0)
{
	return AUDIO::IS_ANY_SPEECH_PLAYING(uParam0->f_1239);
}

bool func_505(var uParam0)
{
	int iVar0;

	if (uParam0->f_285 == joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (uParam0->f_554[iVar0] != 0)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_506(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_285 == joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
	{
		if (bParam2)
		{
			if (uParam0->f_554[0] != 0)
			{
				return false;
			}
		}
		if (MISC::IS_BIT_SET(uParam0->f_554.f_12, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_507(var uParam0)
{
	func_796(&(uParam0->f_3218));
	func_950(&(uParam0->f_3218), uParam0->f_9, -1.0f);
}

int func_508(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/].f_24;
}

void func_509(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 14);
		uParam0->f_40 = ((uParam0->f_40 + MISC::GET_RANDOM_INT_IN_RANGE(1, 100)) % 3);
		uParam0->f_946[iParam1 /*46*/].f_30 = iParam2;
		uParam0->f_946[iParam1 /*46*/].f_31 = iParam3;
		uParam0->f_946[iParam1 /*46*/].f_32 = uParam0->f_40;
		if (!uParam0->f_39)
		{
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "WinLossType", BUILTIN::TO_FLOAT(uParam0->f_946[iParam1 /*46*/].f_30));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "IntensityType", BUILTIN::TO_FLOAT(uParam0->f_946[iParam1 /*46*/].f_31));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "VariationType", BUILTIN::TO_FLOAT(uParam0->f_946[iParam1 /*46*/].f_32));
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "Express");
		}
	}
}

bool func_510(var uParam0, int iParam1)
{
	return uParam0->f_568[iParam1 /*7*/][0] >= (13 * uParam0->f_10.f_4);
}

bool func_511(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		if (bParam4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "WinHuge", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
			{
				return true;
			}
		}
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DealtHand_Blackjack", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

bool func_512(var uParam0, int* iParam1)
{
	int iVar0;

	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_532(uParam0, iVar0))
		{
			MISC::SET_BIT(iParam1, iVar0);
		}
		iVar0++;
	}
	return *iParam1 != 0;
}

bool func_513(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		iVar0 = func_508(uParam2, iParam3, 0);
		if (iVar0 == 21)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DealtHand_Blackjack", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else if (iVar0 >= 18)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DealtHand_Good", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else if (iVar0 == 17)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DealtHand_Neutral", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else if (iVar0 == 16)
		{
			return false;
		}
		else if (iVar0 >= 13)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DealtHand_Bad", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DealtHand_Neutral", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
	}
	return false;
}

int func_514(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (uParam0->f_285 != joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_554.f_12, iParam1))
	{
		return 0;
	}
	if (bParam2)
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (uParam0->f_554[iVar0] != 0)
			{
				return 0;
			}
			iVar0++;
		}
	}
	func_111(uParam0, 1, 0);
	return 1;
}

void func_515(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < uParam1->f_27[iVar0 /*60*/].f_59)
		{
			iVar2 = 0;
			while (iVar2 < uParam1->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_23)
			{
				func_614(uParam0, iVar0, func_612(uParam1, iVar0, iVar1), iVar2, uParam1->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/][iVar2 /*2*/], 1);
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_516(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam1->f_2.f_23 == 1)
	{
		func_967(uParam0, 1, uParam1->f_2[0 /*2*/], 1);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < uParam1->f_2.f_23)
		{
			func_967(uParam0, iVar0, uParam1->f_2[iVar0 /*2*/], iVar0 != 0);
			iVar0++;
		}
	}
}

void func_517(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam1, iVar0))
		{
			if (func_529(&(uParam0->f_3218), iVar0))
			{
				func_943(&(uParam0->f_3218), iVar0, 1);
				func_968(&(uParam0->f_3218), iVar0, 0);
				func_968(&(uParam0->f_3218), iVar0, 1);
				func_969(&(uParam0->f_3218), iVar0, 0, 0, func_242());
				func_969(&(uParam0->f_3218), iVar0, 0, 1, func_242());
			}
		}
		iVar0++;
	}
	func_945(&(uParam0->f_3218));
	func_970(&(uParam0->f_3218), 0, func_242());
	func_970(&(uParam0->f_3218), 1, func_242());
	if (uParam0->f_1546)
	{
		uParam0->f_1546 = 0;
		func_971(&(uParam0->f_3218), 5, 0);
	}
}

void func_518(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!uParam0->f_1567.f_53)
	{
		return;
	}
	iVar0 = -1;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (uParam0->f_1567[iVar3 /*10*/])
		{
			if (func_116(uParam1, iVar3))
			{
				iVar2 = func_113(uParam1, iVar3);
				uParam0->f_1567[iVar3 /*10*/].f_3 = iVar2;
				if (func_280(uParam1, iVar3))
				{
					if (iVar0 == -1 || iVar1 < iVar2)
					{
						iVar0 = iVar3;
						iVar1 = iVar2;
					}
					uParam0->f_1567[iVar3 /*10*/].f_2++;
				}
			}
		}
		iVar3++;
	}
	uParam0->f_1567.f_54 = iVar1;
	uParam0->f_1567.f_55++;
	uParam0->f_1567.f_56++;
	uParam0->f_1567.f_57 = 0;
}

bool func_519(var uParam0)
{
	return (uParam0->f_2.f_23 == 1 && uParam0->f_2[0 /*2*/] == 14);
}

bool func_520(var uParam0)
{
	if (uParam0->f_2.f_23 == 1)
	{
		if (((uParam0->f_2[0 /*2*/] == 13 || uParam0->f_2[0 /*2*/] == 12) || uParam0->f_2[0 /*2*/] == 11) || uParam0->f_2[0 /*2*/] == 10)
		{
			return true;
		}
	}
	if (uParam0->f_2.f_23 == 2)
	{
		if (((uParam0->f_2[1 /*2*/] == 13 || uParam0->f_2[1 /*2*/] == 12) || uParam0->f_2[1 /*2*/] == 11) || uParam0->f_2[1 /*2*/] == 10)
		{
			return true;
		}
	}
	return false;
}

bool func_521(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar0))
		{
			if ((uParam0->f_27[iVar0 /*60*/].f_59 == 1 && uParam0->f_27[iVar0 /*60*/].f_8[0 /*25*/].f_23 == 2) && uParam0->f_27[iVar0 /*60*/].f_8[0 /*25*/].f_24 == 21)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_522(var uParam0, int* iParam1)
{
	int iVar0;

	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(&(uParam0->f_17), iVar0))
		{
			MISC::SET_BIT(iParam1, iVar0);
		}
		iVar0++;
	}
}

void func_523(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == 0)
	{
	}
	else if (iParam1 > 15)
	{
	}
	else if (!uParam0->f_39)
	{
		func_972(uParam0, iParam1, bParam2);
	}
}

void func_524(int iParam0)
{
	if (func_198() != -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_11958, iParam0))
	{
		MISC::SET_BIT(&(Global_40.f_11958), iParam0);
		func_973(iParam0);
	}
}

bool func_525(var uParam0)
{
	return func_974(uParam0);
}

void func_526(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_2 != 4)
	{
	}
	else if (iParam1 == 0)
	{
	}
	else if (iParam1 > 15)
	{
	}
	else
	{
		func_824(uParam0, 6);
		uParam0->f_1239.f_32 = iParam1;
		if (bParam2)
		{
			func_826(uParam0, 4);
		}
		else
		{
			iVar0 = func_895(iParam1);
			func_826(uParam0, iVar0);
		}
		if (!uParam0->f_39)
		{
			func_972(uParam0, iParam1, bParam2);
			if (bParam3)
			{
				if (func_589())
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "ShuffleRiffle");
				}
				else
				{
					TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "ShuffleStandard");
				}
				func_870(uParam0, 3);
			}
			else
			{
				func_870(uParam0, 6);
			}
		}
	}
}

void func_527(var uParam0)
{
	if (uParam0->f_1239.f_6 == 0)
	{
	}
	else if (uParam0->f_1239.f_23 != 0)
	{
	}
	else
	{
		uParam0->f_1239.f_23 = uParam0->f_1239.f_6;
		uParam0->f_1239.f_24 = uParam0->f_1239.f_17;
		uParam0->f_1239.f_25 = 0;
		uParam0->f_1239.f_26 = 1;
	}
}

bool func_528(var uParam0, var uParam1)
{
	if (func_947(uParam0, uParam1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_ClosedBets", uParam1->f_1239, 0, uParam1->f_39);
	}
	return false;
}

bool func_529(var uParam0, int iParam1)
{
	if ((iParam1 >= 0 && iParam1 < 4) && uParam0->f_230[iParam1 /*2*/])
	{
		return true;
	}
	return false;
}

bool func_530(var uParam0, int iParam1)
{
	if (uParam0->f_1239.f_23 == 0)
	{
		return false;
	}
	return (MISC::IS_BIT_SET(uParam0->f_1239.f_24, iParam1) && !MISC::IS_BIT_SET(uParam0->f_1239.f_25, iParam1));
}

void func_531(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (func_529(&(uParam0->f_3218), iParam2))
	{
		func_969(&(uParam0->f_3218), iParam2, 0, iParam3, func_613(uParam1, iParam2, 0, iParam3));
	}
}

bool func_532(var uParam0, int iParam1)
{
	if ((uParam0->f_27[iParam1 /*60*/].f_59 == 1 && uParam0->f_27[iParam1 /*60*/].f_8[0 /*25*/].f_23 == 2) && uParam0->f_27[iParam1 /*60*/].f_8[0 /*25*/].f_24 == 21)
	{
		return true;
	}
	return false;
}

bool func_533(var uParam0, var uParam1)
{
	if (func_947(uParam0, uParam1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_Blackjack", uParam1->f_1239, 0, uParam1->f_39);
	}
	return false;
}

void func_534(var uParam0, int iParam1)
{
	if (uParam0->f_1239.f_23 == 0)
	{
		return;
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_1239.f_24, iParam1))
	{
		return;
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_1239.f_25, iParam1))
	{
		MISC::SET_BIT(&(uParam0->f_1239.f_25), iParam1);
	}
}

void func_535(var uParam0, var uParam1, int iParam2)
{
	func_970(&(uParam0->f_3218), iParam2, func_975(uParam1, iParam2));
}

void func_536(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam1, iVar0))
		{
			if (func_529(&(uParam0->f_3218), iVar0))
			{
				func_943(&(uParam0->f_3218), iVar0, 1);
				func_968(&(uParam0->f_3218), iVar0, 0);
				func_968(&(uParam0->f_3218), iVar0, 1);
				iVar1 = 0;
				while (iVar1 < uParam1->f_27[iVar0 /*60*/].f_59)
				{
					iVar2 = 0;
					while (iVar2 < uParam1->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_23)
					{
						func_969(&(uParam0->f_3218), iVar0, iVar1, iVar2, func_613(uParam1, iVar0, iVar1, iVar2));
						iVar2++;
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	func_945(&(uParam0->f_3218));
	func_970(&(uParam0->f_3218), 0, func_242());
	func_970(&(uParam0->f_3218), 1, func_975(uParam1, 0));
}

void func_537(var uParam0)
{
	if (uParam0->f_1239.f_23 != 0)
	{
		uParam0->f_1239.f_23 = 0;
		uParam0->f_1239.f_24 = 0;
		uParam0->f_1239.f_25 = 0;
		uParam0->f_1239.f_26 = 0;
	}
}

int func_538(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (uParam0->f_285 != joaat("BLACKJACKEVENTGAMEDATAUPDATED"))
	{
		return 0;
	}
	else
	{
		if (bParam2)
		{
			if (iParam1 > 0 && uParam0->f_554[0] != 0)
			{
				return 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET(uParam0->f_554[iParam1], iVar1))
			{
				if (func_489(uParam0, iVar1, iParam1, bParam2))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_539(var uParam0)
{
	if (uParam0->f_2.f_23 == 2 && uParam0->f_2.f_24 == 21)
	{
		return true;
	}
	return false;
}

void func_540(var uParam0, var uParam1)
{
	int iVar0;

	func_939(&(uParam0->f_3218), 8, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam1, iVar0))
		{
			if (func_529(&(uParam0->f_3218), iVar0))
			{
				func_942(&(uParam0->f_3218), iVar0, MISC::VAR_STRING(2, "MGBLK_INFO_WAITING_INS" /* GXTEntry: "Waiting for insurance..." */));
				func_943(&(uParam0->f_3218), iVar0, 0);
				func_944(&(uParam0->f_3218), iVar0, func_113(uParam1, iVar0));
				if (func_549(uParam1, iVar0) > 0)
				{
					func_942(&(uParam0->f_3218), iVar0, MISC::VAR_STRING(2, "MGBLK_INFO_BET_INS" /* GXTEntry: "Bet ~1$~ and ~2$~ insurance" */, func_114(uParam0, func_492(uParam1, iVar0, 0)), func_114(uParam0, func_549(uParam1, iVar0))));
				}
				else if (func_549(uParam1, iVar0) == 0)
				{
					func_942(&(uParam0->f_3218), iVar0, MISC::VAR_STRING(2, "MGBLK_INFO_BET" /* GXTEntry: "Bet ~1$~" */, func_114(uParam0, func_492(uParam1, iVar0, 0))));
				}
			}
		}
		iVar0++;
	}
}

void func_541(var uParam0)
{
	func_187(&(uParam0->f_1534));
}

bool func_542(var uParam0, var uParam1)
{
	if (func_947(uParam0, uParam1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_PlaceIns", uParam1->f_1239, 0, uParam1->f_39);
	}
	return false;
}

void func_543(int iParam0)
{
	*iParam0 = 3;
	iParam0->f_1 = 0;
}

void func_544(var uParam0)
{
	func_950(&(uParam0->f_3218), uParam0->f_9, -1.0f);
}

void func_545(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 3;
	if (func_976(&(uParam0->f_17)))
	{
		iParam2->f_1 = func_977(&(uParam0->f_17), &(uParam0->f_10), iParam1);
	}
	else
	{
		iParam2->f_1 = 0;
	}
}

int func_546(var uParam0)
{
	return uParam0->f_1239.f_2;
}

void func_547(var uParam0, int iParam1)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_2 == iParam1)
	{
	}
	else if (uParam0->f_1239.f_2 != 4 && uParam0->f_1239.f_2 > iParam1)
	{
	}
	else
	{
		func_824(uParam0, 3);
		func_826(uParam0, iParam1);
		if (!uParam0->f_39)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "TransitionToIdle");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(iParam1));
			func_870(uParam0, 2);
		}
	}
}

void func_548(var uParam0, var uParam1, int iParam2)
{
	func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_BET_INS" /* GXTEntry: "Bet ~1$~ and ~2$~ insurance" */, func_114(uParam0, func_492(uParam1, iParam2, 0)), func_114(uParam0, func_549(uParam1, iParam2))));
	func_944(&(uParam0->f_3218), iParam2, func_113(uParam1, iParam2));
}

int func_549(var uParam0, int iParam1)
{
	return uParam0->f_27[iParam1 /*60*/].f_2;
}

void func_550(var uParam0, int iParam1, int iParam2)
{
	struct<9> /*72*/ sVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else if (iParam2 <= 0)
	{
	}
	else
	{
		sVar0.f_3 = 4;
		sVar0.f_8 = 4;
		func_963(uParam0, iParam1, iParam2, &sVar0);
		func_978(uParam0, iParam1, &sVar0);
	}
}

void func_551(var uParam0, var uParam1, int iParam2)
{
	func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_BET" /* GXTEntry: "Bet ~1$~" */, func_114(uParam0, func_492(uParam1, iParam2, 0))));
}

void func_552(var uParam0)
{
	func_796(&(uParam0->f_3218));
	func_950(&(uParam0->f_3218), uParam0->f_9, -1.0f);
}

bool func_553(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_1514[iParam1] != 0 && func_478(&(uParam0->f_1519[iParam1 /*3*/]), 0.0f))
	{
		*uParam2 = uParam0->f_1514[iParam1];
		return true;
	}
	return false;
}

void func_554(var uParam0, int iParam1)
{
	uParam0->f_1514[iParam1] = 0;
}

bool func_555(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_280(&(uParam0->f_17), iParam1))
	{
		if (uParam0->f_568[iParam1 /*7*/][0] >= (13 * uParam0->f_10.f_4))
		{
			*uParam4 = -3;
		}
		else if (uParam0->f_568[iParam1 /*7*/][0] >= (3 * uParam0->f_10.f_4))
		{
			*uParam4 = -2;
		}
		else
		{
			*uParam4 = -1;
		}
		*uParam2 = 1;
		if (uParam0->f_568[iParam1 /*7*/][0] >= (3 * uParam0->f_10.f_4))
		{
			*uParam3 = 1;
		}
		else
		{
			*uParam3 = 0;
		}
		if (func_532(&(uParam0->f_17), iParam1) || uParam0->f_568[iParam1 /*7*/].f_6 > 0)
		{
			*uParam4 = -1;
			*uParam3 = 0;
		}
		return true;
	}
	return false;
}

int func_556(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		if (iParam4 > 0)
		{
			if (iParam4 >= 3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "WinHuge", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
				{
					return 1;
				}
			}
			if (iParam4 >= 2)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "WinBig", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
				{
					return 1;
				}
			}
			if (iParam4 >= 1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "WinSmall", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
				{
					return 1;
				}
			}
		}
		else
		{
			if (iParam4 <= -3)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "LoseHuge", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
				{
					return 1;
				}
			}
			if (iParam4 <= -2)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "LoseBig", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
				{
					return 1;
				}
			}
			if (iParam4 <= -1)
			{
				if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "LoseSmall", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_557(var uParam0, int iParam1, var uParam2, bool bParam3, int iParam4)
{
	var uVar0;

	*uParam2 = 0;
	uParam2->f_2 = 0;
	if (iParam4 == -1 || iParam4 == 0)
	{
		if (uParam0->f_17.f_27[iParam1 /*60*/].f_59 >= 1)
		{
			*uParam2 = func_979(uParam0, iParam1, 0, &uVar0, bParam3);
			if (*uParam2 != 0)
			{
				uParam2->f_2 = func_980(uParam0, iParam1, 0);
			}
		}
	}
	uParam2->f_1 = 0;
	uParam2->f_3 = 0;
	if (iParam4 == -1 || iParam4 == 1)
	{
		if (uParam0->f_17.f_27[iParam1 /*60*/].f_59 >= 2)
		{
			uParam2->f_1 = func_979(uParam0, iParam1, 1, &uVar0, bParam3);
			if (uParam2->f_1 != 0)
			{
				uParam2->f_3 = func_980(uParam0, iParam1, 1);
			}
		}
	}
}

void func_558(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (uParam0->f_27[iParam1 /*60*/].f_59 <= 1)
	{
		*uParam3 = *uParam2;
		uParam3->f_1 = uParam2->f_1;
		uParam3->f_2 = uParam2->f_2;
		uParam3->f_3 = uParam2->f_3;
	}
	else
	{
		*uParam3 = uParam2->f_1;
		uParam3->f_1 = *uParam2;
		uParam3->f_2 = uParam2->f_3;
		uParam3->f_3 = uParam2->f_2;
	}
}

void func_559(var uParam0, int iParam1, var uParam2, int iParam3)
{
	struct<9> /*72*/ sVar0;
	int iVar13;
	int iVar14;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else if (((*uParam2 != 1 && *uParam2 != 2) && uParam2->f_1 != 1) && uParam2->f_1 != 2)
	{
	}
	else
	{
		sVar0.f_3 = 4;
		sVar0.f_8 = 4;
		iVar14 = (iParam3 - func_981(uParam0, iParam1));
		if (*uParam2 == 1 || *uParam2 == 2)
		{
			iVar13 = func_982(uParam0, iParam1, 0, 0);
		}
		else
		{
			iVar13 = func_982(uParam0, iParam1, 1, 0);
		}
		if (iVar14 >= 0)
		{
			func_983(uParam0, iParam1, iVar14, iVar13, &sVar0);
		}
		else
		{
			func_961(iParam3, &(sVar0.f_3), &(sVar0.f_8));
			sVar0.f_2 = 0;
		}
		func_984(uParam0, iParam1, uParam2, &sVar0);
	}
}

bool func_560(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "Result_Filler", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

void func_561(var uParam0, int iParam1, int iParam2)
{
	struct<9> /*72*/ sVar0;
	int iVar13;
	int iVar14;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		sVar0.f_3 = 4;
		sVar0.f_8 = 4;
		iVar13 = func_985(uParam0, iParam1, 0);
		iVar14 = (iParam2 - func_981(uParam0, iParam1));
		if (iVar14 >= 0)
		{
			func_983(uParam0, iParam1, iVar14, iVar13, &sVar0);
		}
		else
		{
			func_961(iParam2, &(sVar0.f_3), &(sVar0.f_8));
			sVar0.f_2 = 0;
		}
		func_986(uParam0, iParam1, &sVar0);
	}
}

bool func_562(var uParam0)
{
	return !uParam0->f_207;
}

void func_563(var uParam0)
{
	if (uParam0->f_207)
	{
	}
	else if (!uParam0->f_206)
	{
		uParam0->f_206 = 1;
	}
}

void func_564(var uParam0)
{
	func_939(&(uParam0->f_3218), 9, 0);
}

void func_565(var uParam0, int* iParam1)
{
	int iVar0;

	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(&(uParam0->f_17), iVar0) && uParam0->f_568[iVar0 /*7*/].f_6 > 0)
		{
			MISC::SET_BIT(iParam1, iVar0);
		}
		iVar0++;
	}
}

void func_566(var uParam0, int* iParam1)
{
	int iVar0;

	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(&(uParam0->f_17), iVar0) && func_532(&(uParam0->f_17), iVar0))
		{
			MISC::SET_BIT(iParam1, iVar0);
		}
		iVar0++;
	}
}

int func_567(int iParam0)
{
	return iParam0 ^ -1;
}

void func_568(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_2 != 4)
	{
	}
	else if (iParam3 == 0)
	{
	}
	else
	{
		func_824(uParam0, 10);
		uParam0->f_1239.f_30 = iParam1;
		uParam0->f_1239.f_31 = iParam2;
		uParam0->f_1239.f_32 = iParam3;
		if (!uParam0->f_39)
		{
			func_987(uParam0);
			func_870(uParam0, 10);
		}
	}
}

bool func_569(var uParam0, int* iParam1)
{
	int iVar0;

	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam0, iVar0))
		{
			MISC::SET_BIT(iParam1, iVar0);
		}
		iVar0++;
	}
	return *iParam1 != 0;
}

bool func_570(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar0))
		{
			if (uParam0->f_1514[iVar0] != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_571(var uParam0, var uParam1)
{
	int iVar0;

	if (func_280(uParam1, uParam0->f_9) && uParam0->f_568[uParam0->f_9 /*7*/].f_6 > 0)
	{
		if (func_532(uParam1, uParam0->f_9))
		{
			func_971(&(uParam0->f_3218), 11, 0);
		}
		else
		{
			func_971(&(uParam0->f_3218), 10, 0);
		}
	}
	else if (func_532(uParam1, uParam0->f_9))
	{
		func_971(&(uParam0->f_3218), 13, 0);
	}
	else
	{
		func_971(&(uParam0->f_3218), 12, 0);
	}
	func_945(&(uParam0->f_3218));
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_970(&(uParam0->f_3218), iVar0, func_975(uParam1, iVar0));
		iVar0++;
	}
}

void func_572(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[2];

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_529(&(uParam0->f_3218), iVar0))
		{
			if (func_280(uParam1, iVar0))
			{
				iVar1 = 0;
				while (iVar1 < uParam1->f_27[iVar0 /*60*/].f_59)
				{
					func_988(uParam1, iVar0, iVar1, uParam0->f_568[iVar0 /*7*/][iVar1], uParam0->f_568[iVar0 /*7*/].f_6, &iVar2, &iVar3);
					if (iVar1 == 0)
					{
						switch (iVar2)
						{
							case 1:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_WIN_INSURANCE_PUSH" /* GXTEntry: "Pushed, and won ~1$~ from insurance" */, func_114(uParam0, iVar3));
								break;
							case 2:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_WIN_INSURANCE_LOSS" /* GXTEntry: "Lost ~1$~, and won ~2$~ from insurance" */, func_114(uParam0, uParam0->f_568[iVar0 /*7*/][iVar1]), func_114(uParam0, iVar3));
								break;
							case 3:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_WIN" /* GXTEntry: "Won ~1$~" */, func_114(uParam0, iVar3));
								break;
							case 4:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_PUSH" /* GXTEntry: "Pushed" */);
								break;
							case 5:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_LOSS" /* GXTEntry: "Lost ~1$~" */, func_114(uParam0, iVar3));
								break;
						}
					}
					else
					{
						switch (iVar2)
						{
							case 3:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_WIN_LCASE" /* GXTEntry: "won ~1$~" */, func_114(uParam0, iVar3));
								break;
							case 4:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_PUSH_LCASE" /* GXTEntry: "pushed" */);
								break;
							case 5:
								sVar4[iVar1] = MISC::VAR_STRING(2, "MGBLK_INFO_PAYOUT_LOSS_LCASE" /* GXTEntry: "lost ~1$~" */, func_114(uParam0, iVar3));
								break;
						}
					}
					iVar1++;
				}
				if (uParam1->f_27[iVar0 /*60*/].f_59 == 1)
				{
					func_942(&(uParam0->f_3218), iVar0, sVar4[0]);
				}
				else
				{
					func_942(&(uParam0->f_3218), iVar0, MISC::VAR_STRING(42, "MGBLK_INFO_CONCAT" /* GXTEntry: "~1p~ and ~2p~" */, sVar4[0], sVar4[1]));
				}
			}
		}
		iVar0++;
	}
}

void func_573(var uParam0, var uParam1, var uParam2)
{
	if (func_280(uParam2, uParam1->f_9))
	{
		if (func_532(uParam2, uParam1->f_9) && !func_539(uParam2))
		{
			func_989(uParam0->f_3497.f_41, 0, 0);
		}
	}
	if (func_280(uParam2, uParam1->f_9))
	{
		func_524(0);
	}
}

void func_574(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam2, iVar0))
		{
			func_990(uParam1, iVar0, 0);
		}
		iVar0++;
	}
	uParam1->f_1567.f_58 = 0;
}

int func_575(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	int iVar4;

	fVar2 = 0.0f;
	bVar3 = true;
	iVar4 = 1;
	while (true)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar1))
			{
			}
			else
			{
				iVar1 += 1 % 4;
				iVar0++;
			}
		}
		if (MISC::IS_BIT_SET(iParam1, iVar1))
		{
			if (bVar3)
			{
				fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4);
			}
			else
			{
				fVar2 += MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam5, fParam6);
			}
			bVar3 = false;
			if (!func_654(uParam0, iVar1, iParam2, fVar2, fVar2, bParam7))
			{
				iVar4 = 0;
			}
			MISC::CLEAR_BIT(&iParam1, iVar1);
		}
		else
		{
			if (iParam1 != 0)
			{
				iVar4 = 0;
			}
			return iVar4;
		}
	}
	return 0;
}

bool func_576(var uParam0)
{
	if (uParam0->f_1239.f_23 == 0)
	{
		return false;
	}
	return (uParam0->f_1239.f_24 & -1 ^ uParam0->f_1239.f_25) != 0;
}

bool func_577(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_1514[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_578(var uParam0)
{
	if (uParam0->f_206)
	{
		uParam0->f_206 = 0;
	}
}

bool func_579(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "Result_Win_MedRun", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

bool func_580(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(&(uParam0->f_17), iVar0) && func_532(&(uParam0->f_17), iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_581(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;

	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if ((!bParam1 && iParam2 == 0) && iParam3 == 0)
	{
	}
	else if (iParam4 == 0)
	{
	}
	else
	{
		func_824(uParam0, 11);
		uParam0->f_1239.f_30 = iParam2;
		uParam0->f_1239.f_31 = iParam3;
		uParam0->f_1239.f_32 = iParam4;
		iVar0 = func_546(uParam0);
		iVar1 = func_894(iParam3);
		iVar2 = func_895(iParam3);
		sVar3.f_0 = 1;
		sVar3.f_1 = 0;
		sVar3.f_2 = 0;
		sVar3.f_3 = 0;
		if (!uParam0->f_39)
		{
			if (bParam1)
			{
				func_991(uParam0);
				if (iVar0 != 4)
				{
					func_901(uParam0, 4, 0, 1056964608 /* Float: 0.5f */);
					func_870(uParam0, 20);
				}
				else
				{
					func_870(uParam0, 21);
				}
			}
			else if (iVar1 >= 1)
			{
				func_992(uParam0, iParam3);
				if (iVar0 != 4)
				{
					func_901(uParam0, 4, 0, 1056964608 /* Float: 0.5f */);
					func_870(uParam0, 24);
				}
				else
				{
					func_870(uParam0, 25);
				}
			}
			else if (iVar1 == 1)
			{
				func_900(uParam0, iVar2, &sVar3);
				if (iVar0 != iVar2)
				{
					func_901(uParam0, iVar2, 0, 1056964608 /* Float: 0.5f */);
					func_870(uParam0, 27);
				}
				else
				{
					func_870(uParam0, 28);
				}
			}
		}
	}
}

void func_582(var uParam0, var uParam1, var uParam2)
{
	if (func_280(uParam2, uParam1->f_9))
	{
		if (func_532(uParam2, uParam1->f_9) && !func_539(uParam2))
		{
			func_989(uParam0->f_3497.f_41, 0, 0);
		}
	}
	if (func_532(uParam2, uParam1->f_9))
	{
		func_524(0);
	}
}

void func_583(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam2, iVar0) && func_532(uParam2, iVar0))
		{
			func_990(uParam1, iVar0, 0);
		}
		iVar0++;
	}
	uParam1->f_1567.f_58 = 0;
}

void func_584(var uParam0)
{
	if (func_993(uParam0))
	{
		func_971(&(uParam0->f_3218), 14, 0);
	}
	else
	{
		func_971(&(uParam0->f_3218), 15, 0);
	}
}

void func_585(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_796(&(uParam0->f_3218));
	if (func_532(uParam1, uParam0->f_9))
	{
		func_979(uParam0, uParam0->f_9, 0, &iVar0, 0);
		func_971(&(uParam0->f_3218), 16, func_114(uParam0, iVar0));
	}
	else if (func_521(uParam1))
	{
		func_971(&(uParam0->f_3218), 17, 0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_532(uParam1, iVar1))
		{
			func_942(&(uParam0->f_3218), iVar1, MISC::VAR_STRING(2, "MGBLK_INFO_BJK" /* GXTEntry: "Blackjack" */));
		}
		iVar1++;
	}
}

bool func_586(var uParam0)
{
	return uParam0->f_206;
}

void func_587(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam1, iVar0) && !func_532(uParam1, iVar0))
		{
			if (func_529(&(uParam0->f_3218), iVar0))
			{
				func_942(&(uParam0->f_3218), iVar0, MISC::VAR_STRING(2, "MGBLK_INFO_WAITING_TURN" /* GXTEntry: "~1~. Waiting for turn..." */, func_508(uParam1, iVar0, 0)));
				func_943(&(uParam0->f_3218), iVar0, 1);
				func_968(&(uParam0->f_3218), iVar0, 0);
				func_968(&(uParam0->f_3218), iVar0, 1);
				iVar1 = 0;
				while (iVar1 < uParam1->f_27[iVar0 /*60*/].f_59)
				{
					iVar2 = 0;
					while (iVar2 < uParam1->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_23)
					{
						func_969(&(uParam0->f_3218), iVar0, iVar1, iVar2, func_613(uParam1, iVar0, iVar1, iVar2));
						iVar2++;
					}
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

int func_588(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_116(uParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_589()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

int func_590(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_116(uParam0, iVar1) && iVar1 != iParam1)
		{
			return iVar1;
		}
		iVar1 += 1 % 4;
		iVar0++;
	}
	return -1;
}

bool func_591(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return func_348(&(uParam0->f_756), iParam1, iParam2, iParam3);
}

void func_592(var uParam0)
{
	if (!uParam0->f_1567.f_53)
	{
		return;
	}
	uParam0->f_1567.f_56 = 0;
}

void func_593(var uParam0)
{
	if (!uParam0->f_1567.f_53)
	{
		return;
	}
	uParam0->f_1567.f_57 = 1;
}

void func_594(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_946[iParam1 /*46*/].f_3 >= 2)
	{
	}
	else
	{
		iVar0 = func_955(iParam2);
		iVar1 = func_994(uParam0, iParam1);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_946[iParam1 /*46*/], func_957(iParam2), func_246(uParam0, iVar0, iVar1));
	}
}

void func_595(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<7> /*56*/ sVar0;
	int iVar7;
	float fVar8;

	sVar0 = { uParam0->f_1654[iParam3 /*7*/] /*7*/ };
	fVar8 = MISC::GET_RANDOM_FLOAT_IN_RANGE(sVar0.f_0, sVar0.f_1);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < sVar0.f_5)
	{
		iVar7 = 1;
	}
	else
	{
		iVar7 = 0;
	}
	func_965(uParam0, iParam1, iParam2, iVar7, fVar8);
}

void func_596(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<16> /*128*/ sVar0;
	int iVar16;
	int iVar17;

	if (iParam2 == uParam0->f_9)
	{
		func_796(&(uParam0->f_3218));
		if (!func_995(uParam1, iParam2))
		{
			if (func_996(uParam1, iParam2, uParam1->f_27[iParam2 /*60*/].f_3, 14))
			{
				if (func_997(uParam1, iParam2, 0))
				{
					func_939(&(uParam0->f_3218), 22, 0);
				}
				else if (func_998(uParam1, iParam2, 0))
				{
					func_939(&(uParam0->f_3218), 21, 0);
				}
			}
			else if (func_997(uParam1, iParam2, 0))
			{
				func_939(&(uParam0->f_3218), 19, 0);
			}
			else if (func_998(uParam1, iParam2, 0))
			{
				func_939(&(uParam0->f_3218), 18, 0);
			}
		}
		else if (func_996(uParam1, iParam2, uParam1->f_27[iParam2 /*60*/].f_3, 14))
		{
			if (func_997(uParam1, iParam2, 0))
			{
				func_939(&(uParam0->f_3218), 20, 0);
			}
			else
			{
				func_939(&(uParam0->f_3218), 23, 0);
			}
		}
	}
	if (iParam2 == uParam0->f_9)
	{
		if (uParam1->f_27[iParam2 /*60*/].f_59 == 1)
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_YOUR_TURN" /* GXTEntry: "~1~. Your turn..." */, func_508(uParam1, iParam2, 0)));
		}
		else if (uParam1->f_27[iParam2 /*60*/].f_3 == 0)
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_YOUR_TURN_SPLIT1" /* GXTEntry: "~1~. Your turn, first hand..." */, func_508(uParam1, iParam2, 0)));
		}
		else if (uParam1->f_27[iParam2 /*60*/].f_3 == 1)
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_YOUR_TURN_SPLIT2" /* GXTEntry: "~1~. Your turn, second hand..." */, func_508(uParam1, iParam2, 1)));
		}
	}
	else
	{
		sVar0 = { func_999(uParam0, iParam2, 0) /*16*/ };
		if (uParam1->f_27[iParam2 /*60*/].f_59 == 1)
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(34, "MGBLK_INFO_THEIR_TURN" /* GXTEntry: "~1~. ~2p~\'s turn..." */, func_508(uParam1, iParam2, 0), &sVar0));
		}
		else if (uParam1->f_27[iParam2 /*60*/].f_3 == 0)
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(34, "MGBLK_INFO_THEIR_TURN_SPLIT1" /* GXTEntry: "~1~. ~2p~\'s turn, first hand..." */, func_508(uParam1, iParam2, 0), &sVar0));
		}
		else if (uParam1->f_27[iParam2 /*60*/].f_3 == 1)
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(34, "MGBLK_INFO_THEIR_TURN_SPLIT2" /* GXTEntry: "~1~. ~2p~\'s turn, second hand..." */, func_508(uParam1, iParam2, 1), &sVar0));
		}
	}
	iVar16 = 0;
	while (iVar16 < uParam1->f_27[iParam2 /*60*/].f_59)
	{
		iVar17 = 0;
		while (iVar17 < uParam1->f_27[iParam2 /*60*/].f_8[iVar16 /*25*/].f_23)
		{
			func_969(&(uParam0->f_3218), iParam2, iVar16, iVar17, func_613(uParam1, iParam2, iVar16, iVar17));
			iVar17++;
		}
		iVar16++;
	}
	if (bParam3)
	{
		func_950(&(uParam0->f_3218), iParam2, 1.0f);
	}
	else
	{
		func_1000(&(uParam0->f_3218), iParam2, 1);
	}
}

bool func_597(var uParam0, int iParam1)
{
	if (uParam0->f_9 == iParam1)
	{
		return true;
	}
	return false;
}

void func_598(var uParam0, var uParam1)
{
	if (uParam0->f_198)
	{
		return;
	}
	if (uParam0->f_269)
	{
	}
	uParam0->f_269 = 1;
	uParam0->f_269.f_1 = uParam1;
}

bool func_599(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "DLR_Num");
	StringIntConCat(&cVar0, iParam2, 64);
	if (AUDIO::IS_ANY_SPEECH_PLAYING(uParam1->f_1239))
	{
		AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(uParam1->f_1239, 0);
	}
	if (func_947(uParam0, uParam1))
	{
		if (iParam2 <= 21)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, &cVar0, uParam1->f_1239, 0, uParam1->f_39);
		}
		else if (bParam3)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_Bust", uParam1->f_1239, 0, uParam1->f_39);
		}
	}
	return false;
}

int func_600(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_269)
	{
		if (!func_96(uParam0->f_269.f_2))
		{
			uParam0->f_269.f_2 = func_352("MGBLK_CTX_STAND" /* GXTEntry: "Stand" */, joaat("INPUT_MINIGAME_BLACKJACK_STAND"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if (!func_96(uParam0->f_269.f_3))
		{
			uParam0->f_269.f_3 = func_352("MGBLK_CTX_HIT" /* GXTEntry: "Hit" */, joaat("INPUT_MINIGAME_BLACKJACK_HIT"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		}
		if (!func_96(uParam0->f_269.f_4))
		{
			if (func_998(uParam1, uParam0->f_269.f_1, 1))
			{
				uParam0->f_269.f_4 = func_352("MGBLK_CTX_DBLDOWN" /* GXTEntry: "Double Down" */, joaat("INPUT_MINIGAME_BLACKJACK_DOUBLE"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
		}
		if (!func_96(uParam0->f_269.f_5))
		{
			if (func_997(uParam1, uParam0->f_269.f_1, 1))
			{
				uParam0->f_269.f_5 = func_352("MGBLK_CTX_SPLIT" /* GXTEntry: "Split" */, joaat("INPUT_MINIGAME_BLACKJACK_SPLIT"), 0, 570, 4000, 10, (1 << 30), 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			}
		}
		if (func_727(uParam0->f_269.f_2, 1))
		{
			*iParam2 = 7;
			iParam2->f_1 = 0;
		}
		else if (func_727(uParam0->f_269.f_3, 1))
		{
			*iParam2 = 5;
			iParam2->f_1 = 0;
		}
		else if (func_727(uParam0->f_269.f_4, 1))
		{
			*iParam2 = 4;
			iParam2->f_1 = 0;
		}
		else if (func_727(uParam0->f_269.f_5, 1))
		{
			*iParam2 = 6;
			iParam2->f_1 = 0;
		}
		if (*iParam2 != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_601(var uParam0)
{
	if (uParam0->f_1547)
	{
		uParam0->f_1547 = 0;
		func_971(&(uParam0->f_3218), 6, 0);
	}
	if (uParam0->f_1548 && !func_1001())
	{
		uParam0->f_1548 = 0;
		func_939(&(uParam0->f_3218), 7, 0);
	}
}

void func_602(var uParam0, int iParam1, int iParam2, int iParam3)
{
	*iParam3 = func_1002(&(uParam0->f_17), iParam1, iParam2);
	iParam3->f_1 = 0;
}

void func_603(var uParam0, int iParam1)
{
	func_950(&(uParam0->f_3218), iParam1, -1.0f);
	if (uParam0->f_3218.f_201 == 6 || uParam0->f_3218.f_201 == 7)
	{
		func_796(&(uParam0->f_3218));
	}
}

void func_604(var uParam0)
{
	if (uParam0->f_269)
	{
		uParam0->f_269 = 0;
		func_737(&(uParam0->f_269.f_2), 1, 1);
		func_737(&(uParam0->f_269.f_3), 1, 1);
		func_737(&(uParam0->f_269.f_4), 1, 1);
		func_737(&(uParam0->f_269.f_5), 1, 1);
	}
}

int func_605(var uParam0)
{
	return uParam0->f_1239.f_5;
}

void func_606(var uParam0, var uParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;

	if (uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_24 > 21)
	{
		sVar0 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_BUST" /* GXTEntry: "Bust with ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_24);
	}
	else if (uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_23 >= 7)
	{
		sVar0 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_CHARLIE" /* GXTEntry: "7-Card charlie" */);
	}
	else if (uParam0->f_568[iParam2 /*7*/].f_3[0])
	{
		sVar0 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_DOUBLE" /* GXTEntry: "Doubled down ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_24);
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_STOOD" /* GXTEntry: "Stood on ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_24);
	}
	if (uParam1->f_27[iParam2 /*60*/].f_3 > 0)
	{
		if (uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_24 > 21)
		{
			sVar1 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_BUST_LCASE" /* GXTEntry: "bust with ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_24);
		}
		else if (uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_23 >= 7)
		{
			sVar1 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_CHARLIE_LCASE" /* GXTEntry: "7-card charlie" */);
		}
		else if (uParam0->f_568[iParam2 /*7*/].f_3[1])
		{
			sVar1 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_DOUBLE_LCASE" /* GXTEntry: "doubled down ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_24);
		}
		else
		{
			sVar1 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_STOOD_LCASE" /* GXTEntry: "stood on ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_24);
		}
	}
	if (uParam1->f_27[iParam2 /*60*/].f_3 > 0)
	{
		func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(42, "MGBLK_INFO_CONCAT" /* GXTEntry: "~1p~ and ~2p~" */, sVar0, sVar1));
	}
	else
	{
		func_942(&(uParam0->f_3218), iParam2, sVar0);
	}
	func_950(&(uParam0->f_3218), iParam2, -1.0f);
	func_1000(&(uParam0->f_3218), iParam2, 1);
}

void func_607(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == uParam0->f_9)
	{
		func_1003();
		func_524(0);
	}
}

void func_608(var uParam0, int iParam1, int iParam2)
{
	func_990(uParam0, iParam1, iParam2);
}

int func_609(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/].f_23;
}

void func_610(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == uParam0->f_9)
	{
		func_989(uParam0->f_3497.f_41, 0, 1);
		func_524(0);
	}
}

void func_611(var uParam0, int iParam1, int iParam2)
{
	func_990(uParam0, iParam1, iParam2);
}

int func_612(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0)
	{
		return -1;
	}
	if (uParam0->f_27[iParam1 /*60*/].f_59 <= 1)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
		else
		{
			return 2;
		}
	}
	if (iParam2 == 0)
	{
		return 1;
	}
	if (iParam2 == 1)
	{
		return 0;
	}
	return 2;
}

struct<2> /*16*/ func_613(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/][iParam3 /*2*/];
}

int func_614(var uParam0, int iParam1, int iParam2, int iParam3, struct<2> /*16*/ sParam4, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (!func_802(uParam0, sParam4, &iVar0))
	{
		if (bParam6)
		{
			if (uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3] != 0)
			{
			}
		}
		if (func_802(uParam0, uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/], &iVar1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		}
		uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/] = { func_242() /*2*/ };
		return 0;
	}
	if (uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/].f_1 != sParam4.f_1 || uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/] != sParam4.f_0)
	{
		if (bParam6)
		{
			if (uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3] != 0)
			{
			}
		}
		if (func_802(uParam0, uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/], &iVar1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		}
		uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/] = { sParam4 /*2*/ };
		STREAMING::REQUEST_MODEL(iVar0, false);
	}
	return 1;
}

int func_615(var uParam0, int iParam1)
{
	return uParam0->f_27[iParam1 /*60*/].f_59;
}

void func_616(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 12);
		iVar0 = 3;
		iVar1 = uParam0->f_1233;
		iVar2 = (uParam0->f_1233 / iVar0);
		iVar3 = (uParam0->f_1233 % iVar0);
		if (iParam2 == 0 || iParam2 == 1)
		{
			if (iVar3 >= 0 && iVar3 < iVar0)
			{
				iVar3 = ((iVar3 + MISC::GET_RANDOM_INT_IN_RANGE(1, iVar0)) % iVar0);
			}
			else
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
			}
			iVar2 = iParam2;
			iVar1 = ((iVar2 * iVar0) + iVar3);
		}
		else
		{
			iVar1 = ((iVar1 + MISC::GET_RANDOM_INT_IN_RANGE(1, 6)) % 6);
			iVar2 = (iVar1 / iVar0);
			iVar3 = (iVar1 % iVar0);
		}
		uParam0->f_1233 = iVar1;
		uParam0->f_946[iParam1 /*46*/].f_14 = iVar3;
		if (!uParam0->f_39)
		{
			if (iVar2 == 0)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "HitLeftHand");
			}
			else
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "HitRightHand");
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar3));
		}
	}
}

int func_617(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		if (func_609(uParam2, iParam3, iParam4) > 3)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "ActionHit_Again", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
			{
				return 1;
			}
		}
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "ActionHit_Base", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
		{
			return 1;
		}
	}
	return 0;
}

void func_618(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4 && iParam3 != 2)
	{
	}
	else if (!uParam0->f_39)
	{
		if (bParam4)
		{
			func_1004(uParam0, iParam1, iParam2);
		}
		else
		{
			func_1005(uParam0, iParam1, iParam2, iParam3);
		}
	}
}

void func_619(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_3 != iParam1)
	{
	}
	else if (bParam4 && iParam3 != 2)
	{
	}
	else
	{
		func_824(uParam0, 7);
		uParam0->f_1239.f_51 = iParam1;
		uParam0->f_1239.f_52 = iParam2;
		uParam0->f_1239.f_53 = iParam3;
		if (!uParam0->f_39)
		{
			if (bParam4)
			{
				func_1004(uParam0, iParam1, iParam2);
				func_870(uParam0, 5);
			}
			else
			{
				func_1005(uParam0, iParam1, iParam2, iParam3);
				func_870(uParam0, 4);
			}
		}
	}
}

bool func_620(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_1239.f_17, iParam1);
}

bool func_621(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "ActionDouble", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

bool func_622(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		iVar0 = func_508(uParam2, iParam3, iParam4);
		if (iVar0 > 21)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "HitCard_Bust", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else if (iVar0 == 21)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "HitCard_21", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else if (iVar0 >= 18)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DblCard_Good", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else if (iVar0 >= 15)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DblCard_Neutral", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DblCard_Bad", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
	}
	return false;
}

int func_623(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		switch (iParam1)
		{
			case 14:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 5;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 5;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 7;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 13:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 5;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 5;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 7;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 12:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 5;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 5;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 7;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 11:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 5;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 5;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 7;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 10:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 5;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 5;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 7;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 9:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 5;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 8:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 5;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 7:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 6;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 5;
					case 13:
						return 0;
					case 14:
						return 6;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 6:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 6;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 6;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 6;
					case 13:
						return 0;
					case 14:
						return 6;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 5:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 6;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 6;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 6;
					case 13:
						return 0;
					case 14:
						return 6;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 4:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 6;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 6;
					case 13:
						return 0;
					case 14:
						return 6;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 6;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 6;
					case 13:
						return 0;
					case 14:
						return 6;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
			case 2:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 6;
					case 5:
						return 0;
					case 6:
						return 5;
					case 7:
						return 0;
					case 8:
						return 5;
					case 9:
						return 0;
					case 10:
						return 4;
					case 11:
						return 0;
					case 12:
						return 6;
					case 13:
						return 0;
					case 14:
						return 6;
					case 15:
						return 0;
					case 16:
						return 6;
					case 17:
						return 0;
					case 18:
						return 6;
					case 19:
						return 0;
					case 20:
						return 7;
					case 21:
						return 0;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 2:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 7;
					case 14:
						return 7;
					case 15:
						return 7;
					case 16:
						return 7;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				break;
			case 3:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 4;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 7;
					case 14:
						return 7;
					case 15:
						return 7;
					case 16:
						return 7;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				break;
			case 4:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 4;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 7;
					case 13:
						return 7;
					case 14:
						return 7;
					case 15:
						return 7;
					case 16:
						return 7;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				break;
			case 5:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 4;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 7;
					case 13:
						return 7;
					case 14:
						return 7;
					case 15:
						return 7;
					case 16:
						return 7;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				break;
			case 6:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 4;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 7;
					case 13:
						return 7;
					case 14:
						return 7;
					case 15:
						return 7;
					case 16:
						return 7;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				break;
			case 7:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				break;
			case 8:
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				Jump @7933; // curOff = 6148
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 4;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				Jump @7933; // curOff = 6445
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 5;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				Jump @7933; // curOff = 6742
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 5;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				Jump @7933; // curOff = 7039
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 5;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				Jump @7933; // curOff = 7336
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 5;
					case 11:
						return 4;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
				Jump @7933; // curOff = 7633
				switch (iParam0)
				{
					case 0:
						return 0;
					case 1:
						return 0;
					case 2:
						return 0;
					case 3:
						return 0;
					case 4:
						return 5;
					case 5:
						return 5;
					case 6:
						return 5;
					case 7:
						return 5;
					case 8:
						return 5;
					case 9:
						return 5;
					case 10:
						return 5;
					case 11:
						return 5;
					case 12:
						return 5;
					case 13:
						return 5;
					case 14:
						return 5;
					case 15:
						return 5;
					case 16:
						return 5;
					case 17:
						return 7;
					case 18:
						return 7;
					case 19:
						return 7;
					case 20:
						return 7;
					case 21:
						return 7;
				}
			}
			return 0;
		}

int func_624(var uParam0, var uParam1)
{
	return uParam0;
}

void func_625(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
		if (uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3] != 0)
		{
		}
	}
	if (func_802(uParam0, uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/], &iVar0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
	uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/] = { func_242() /*2*/ };
}

bool func_626(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "ActionSplit", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

void func_627(var uParam0, int iParam1)
{
	if (!uParam0->f_39)
	{
		func_1006(uParam0, iParam1);
	}
}

void func_628(var uParam0, int iParam1)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_3 != iParam1)
	{
	}
	else
	{
		func_824(uParam0, 8);
		uParam0->f_1239.f_51 = iParam1;
		if (!uParam0->f_39)
		{
			func_1006(uParam0, iParam1);
			func_870(uParam0, 6);
		}
	}
}

int func_629(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_568[iParam1 /*7*/][iParam2] >= uParam0->f_10.f_4 * 3)
	{
		return 1;
	}
	return 0;
}

bool func_630(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_568[iParam1 /*7*/][iParam2] >= (13 * uParam0->f_10.f_4);
}

bool func_631(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		if (bParam4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "LoseHuge", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
			{
				return true;
			}
		}
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "HitCard_Bust", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

bool func_632(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = *uParam0;
	if (func_280(uParam0, iVar0) && uParam0->f_27[iVar0 /*60*/].f_3 + 1 < uParam0->f_27[iVar0 /*60*/].f_59)
	{
		*uParam1 = iVar0;
		*uParam2 = uParam0->f_27[iVar0 /*60*/].f_3 + 1;
		return true;
	}
	while (iVar0 < 4)
	{
		iVar0++;
		if (func_280(uParam0, iVar0))
		{
			if (!bParam3 || !func_532(uParam0, iVar0))
			{
				*uParam1 = iVar0;
				*uParam2 = 0;
				return true;
			}
		}
	}
	return false;
}

void func_633(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_2 != iParam1)
	{
	}
	else if ((uParam0->f_1239.f_2 != 4 && iParam3 != 4) && iParam3 < uParam0->f_1239.f_2)
	{
	}
	else
	{
		func_824(uParam0, 9);
		uParam0->f_1239.f_51 = iParam1;
		uParam0->f_1239.f_34[0 /*4*/] = { *uParam2 /*4*/ };
		func_826(uParam0, iParam3);
		if (!uParam0->f_39)
		{
			func_900(uParam0, iParam1, uParam2);
			func_870(uParam0, 6);
		}
	}
}

bool func_634(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		iVar0 = func_508(uParam2, iParam3, iParam4);
		if (iVar0 <= 14)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "ActionStand_LowHand", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
		else
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "ActionStand_Base", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
		}
	}
	return false;
}

int func_635(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_568[iParam1 /*7*/][iParam2] >= uParam0->f_10.f_4 * 3)
	{
		return 1;
	}
	return 0;
}

bool func_636(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "HitCard_21", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39);
	}
	return false;
}

void func_637(var uParam0, int iParam1)
{
	func_1000(&(uParam0->f_3218), iParam1, 0);
}

bool func_638(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = *uParam0;
	if (iVar0 >= 0 && iVar0 < 4)
	{
		iVar1 = uParam0->f_27[iVar0 /*60*/].f_3;
		if (iVar1 >= 0 && iVar1 < uParam0->f_27[iVar0 /*60*/].f_59)
		{
			return true;
		}
	}
	return false;
}

bool func_639(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar0) && func_1007(uParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_640(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = func_647(&(uParam0->f_17));
	iVar4 = 0;
	while (iVar4 < uParam0->f_17.f_27[iParam1 /*60*/].f_59)
	{
		iVar3 = func_508(&(uParam0->f_17), iParam1, iVar4);
		if (func_1008(&(uParam0->f_17), iParam1, iVar4))
		{
			if (iVar2 > 21 || iVar3 > iVar2)
			{
				iVar1 += uParam0->f_568[iParam1 /*7*/][iVar4];
			}
			else if (iVar3 == iVar2)
			{
				iVar1 = iVar1;
			}
			else if (iVar3 < iVar2)
			{
				iVar1 -= uParam0->f_568[iParam1 /*7*/][iVar4];
			}
			iVar0 = 1;
		}
		iVar4++;
	}
	if (iVar1 >= 0)
	{
		*uParam2 = 0;
		if (iVar1 >= (3 * uParam0->f_10.f_4))
		{
			*uParam3 = 1;
		}
		else
		{
			*uParam3 = 0;
		}
	}
	else
	{
		*uParam2 = 1;
		if (iVar1 <= (-3 * uParam0->f_10.f_4))
		{
			*uParam3 = 1;
		}
		else
		{
			*uParam3 = 0;
		}
	}
	if (iVar1 >= 0)
	{
		if (iVar1 >= (13 * uParam0->f_10.f_4))
		{
			*uParam4 = 3;
		}
		else if (iVar1 >= (3 * uParam0->f_10.f_4))
		{
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 1;
		}
	}
	else if (iVar1 <= (-13 * uParam0->f_10.f_4))
	{
		*uParam4 = -3;
	}
	else if (iVar1 <= (-3 * uParam0->f_10.f_4))
	{
		*uParam4 = -2;
	}
	else
	{
		*uParam4 = -1;
	}
	return iVar0;
}

bool func_641(var uParam0, int* iParam1)
{
	int iVar0;

	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_1007(uParam0, iVar0))
		{
			MISC::SET_BIT(iParam1, iVar0);
		}
		iVar0++;
	}
	return *iParam1 != 0;
}

int func_642(var uParam0)
{
	return uParam0->f_2.f_23;
}

void func_643(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else if (uParam0->f_1239.f_2 != 4)
	{
	}
	else
	{
		bVar0 = false;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if ((*uParam2)[iVar1 /*4*/] != 0 || (uParam2[iVar1 /*4*/])->f_1 != 0)
			{
				bVar0 = true;
			}
			iVar1++;
		}
		if (!bVar0)
		{
		}
		else
		{
			func_824(uParam0, 12);
			uParam0->f_1239.f_33 = uParam1;
			uParam0->f_1239.f_53 = 2;
			iVar1 = 0;
			while (iVar1 < 4)
			{
				uParam0->f_1239.f_34[iVar1 /*4*/] = { *(uParam2[iVar1 /*4*/]) /*4*/ };
				iVar1++;
			}
			if (!uParam0->f_39)
			{
				func_1009(uParam0);
				func_870(uParam0, 12);
			}
		}
	}
}

bool func_644(var uParam0, int iParam1)
{
	if (uParam0->f_1239.f_23 == 0)
	{
		return false;
	}
	return MISC::IS_BIT_SET(uParam0->f_1239.f_24, iParam1);
}

int func_645(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == -1)
	{
		iParam1 = uParam0->f_23;
	}
	else
	{
		iParam1 = func_723(uParam0->f_23, iParam1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		iVar0 += func_1010(*(uParam0[iVar2 /*2*/]));
		if ((*uParam0)[iVar2 /*2*/] == 14)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 -= 10;
		iVar1--;
	}
	return iVar0;
}

void func_646(var uParam0, var uParam1)
{
	int iVar0;

	func_939(&(uParam0->f_3218), 24, func_645(&(uParam1->f_2), 2));
	func_945(&(uParam0->f_3218));
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_970(&(uParam0->f_3218), iVar0, func_975(uParam1, iVar0));
		iVar0++;
	}
}

int func_647(var uParam0)
{
	if (uParam0->f_2.f_23 > 0)
	{
		return uParam0->f_2.f_24;
	}
	return 0;
}

void func_648(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_647(uParam1);
	iVar1 = func_508(uParam1, uParam0->f_9, 0);
	iVar2 = func_508(uParam1, uParam0->f_9, 1);
	iVar3 = func_615(uParam1, uParam0->f_9);
	if (iVar3 < 2)
	{
		iVar2 = 0;
	}
	func_945(&(uParam0->f_3218));
	iVar4 = 0;
	while (iVar4 < func_642(uParam1))
	{
		func_970(&(uParam0->f_3218), iVar4, func_975(uParam1, iVar4));
		iVar4++;
	}
	if ((iVar0 <= 21 && (iVar1 == iVar0 || iVar2 == iVar0)) && !func_532(uParam1, uParam0->f_9))
	{
		func_939(&(uParam0->f_3218), 26, iVar0);
	}
	else if (iVar0 <= 21)
	{
		func_939(&(uParam0->f_3218), 25, iVar0);
	}
	else
	{
		func_939(&(uParam0->f_3218), 27, iVar0);
	}
}

void func_649(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar1 = 0;
	while (iVar1 < func_615(uParam2, uParam1->f_9))
	{
		iVar2 = func_979(uParam1, uParam1->f_9, iVar1, &uVar0, 1);
		if (iVar2 == 1)
		{
			bVar3 = func_980(uParam1, uParam1->f_9, iVar1);
			bVar4 = func_609(uParam2, uParam1->f_9, iVar1) >= 5;
			func_989(uParam0->f_3497.f_41, bVar3, bVar4);
		}
		else if (iVar2 == 3)
		{
			func_1003();
		}
		iVar1++;
	}
	if (func_532(uParam2, uParam1->f_9))
	{
		func_524(0);
	}
}

void func_650(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = func_615(uParam2, iVar0);
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (func_1008(uParam2, iVar0, iVar1))
			{
				func_990(uParam1, iVar0, iVar1);
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam1->f_1567.f_58 = func_647(uParam2) > 21;
}

void func_651(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_939(&(uParam0->f_3218), 24, func_645(&(uParam1->f_2), iParam2 + 1));
	func_945(&(uParam0->f_3218));
	iVar0 = 0;
	while (iVar0 < iParam2 + 1)
	{
		func_970(&(uParam0->f_3218), iVar0, func_975(uParam1, iVar0));
		iVar0++;
	}
}

bool func_652(var uParam0)
{
	if (((*uParam0 == 1 || *uParam0 == 2) || uParam0->f_1 == 1) || uParam0->f_1 == 2)
	{
		return true;
	}
	return false;
}

bool func_653(var uParam0, int iParam1)
{
	return uParam0->f_1514[iParam1] != 0;
}

bool func_654(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, bool bParam5)
{
	if (!bParam5 && uParam0->f_1514[iParam1] != 0)
	{
		return false;
	}
	uParam0->f_1514[iParam1] = iParam2;
	func_379(&(uParam0->f_1519[iParam1 /*3*/]), -MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4));
	return true;
}

void func_655(var uParam0)
{
	if (!uParam0->f_39)
	{
		func_1011(uParam0, 1);
	}
}

void func_656(var uParam0)
{
	int iVar0;

	if (uParam0->f_1239 == 0)
	{
	}
	else if (uParam0->f_1239.f_6 != 1)
	{
	}
	else if (uParam0->f_1239.f_1 != 0)
	{
	}
	else
	{
		func_824(uParam0, 13);
		iVar0 = func_546(uParam0);
		if (!uParam0->f_39)
		{
			func_1011(uParam0, 1);
			if (iVar0 != 4)
			{
				func_901(uParam0, 4, 0, 1056964608 /* Float: 0.5f */);
				func_870(uParam0, 29);
			}
			else if (!func_890(uParam0, 1))
			{
				func_870(uParam0, 30);
			}
			else
			{
				func_870(uParam0, 31);
			}
		}
	}
}

bool func_657(var uParam0, int iParam1)
{
	if (uParam0->f_285 != 0)
	{
		return false;
	}
	if (func_1012(&(uParam0->f_756)))
	{
		return false;
	}
	if (func_822(&(uParam0->f_756), iParam1))
	{
		return false;
	}
	return true;
}

int func_658(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_285 != 0)
	{
		return 0;
	}
	if (!func_1013(&(uParam0->f_756), iParam1))
	{
		return 0;
	}
	func_272(&(uParam0->f_756));
	func_107(uParam0);
	if (func_108(uParam0, joaat("MINIGAMEEVENTPLAYERREMOVED")))
	{
		func_111(uParam0, 1, 1);
	}
	if (!func_275(uParam0, iParam1, 0, 1) && !func_108(uParam0, joaat("MINIGAMEEVENTTABLELEFT")))
	{
		return 0;
	}
	if (bParam2)
	{
		func_111(uParam0, 0, 1);
	}
	return 1;
}

void func_659(var uParam0, int iParam1)
{
	func_276(uParam0, uParam0, iParam1, 2, 1);
}

void func_660(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			uParam0->f_568[iVar0 /*7*/][iVar1] = 0;
			uParam0->f_568[iVar0 /*7*/].f_3[iVar1] = 0;
			iVar1++;
		}
		uParam0->f_568[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
}

void func_661()
{
	if (Global_1899528.f_2 == 0)
	{
	}
	Global_1899528.f_2 = 1;
}

bool func_662(var uParam0, int* iParam1, bool bParam2)
{
	int iVar0;

	*iParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != uParam0->f_9 || bParam2)
		{
			if (func_116(&(uParam0->f_17), iVar0) && func_113(&(uParam0->f_17), iVar0) < uParam0->f_10.f_4)
			{
				MISC::SET_BIT(iParam1, iVar0);
			}
		}
		iVar0++;
	}
	return *iParam1 != 0;
}

int func_663(var uParam0, int iParam1)
{
	if (!uParam0->f_751[iParam1])
	{
		return 0;
	}
	return uParam0->f_674[iParam1 /*19*/];
}

void func_664(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1485[iParam1 /*6*/].f_1 = iParam2;
}

int func_665(var uParam0, int iParam1)
{
	if (uParam0->f_674[iParam1 /*19*/] != 1)
	{
		return 255;
	}
	return uParam0->f_674[iParam1 /*19*/].f_17;
}

bool func_666(var uParam0, Vector3 vParam1, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;

	if (uParam0->f_107 > 0)
	{
		iVar0 = -1;
		fVar1 = 0.0f;
		iVar2 = 0;
		while (iVar2 < uParam0->f_107)
		{
			fVar3 = BUILTIN::VDIST2(uParam0->f_46[iVar2 /*3*/], vParam1);
			if (iVar0 == -1 || fVar1 > fVar3)
			{
				if (!bParam6 || ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), uParam0->f_46[iVar2 /*3*/], true))
				{
					iVar0 = iVar2;
					fVar1 = fVar3;
				}
			}
			iVar2++;
		}
		if (iVar0 != -1)
		{
			*bParam4 = { uParam0->f_46[iVar0 /*3*/] /*3*/ };
			*uParam5 = func_1014(*bParam4, *uParam0);
			return true;
		}
	}
	else
	{
		*bParam4 = { *uParam0 + uParam0->f_1181[1 /*3*/] * Vector(1.78f, 1.78f, 1.78f) /*3*/ };
		*uParam5 = func_1014(*bParam4, *uParam0);
		bParam4->f_2 = uParam0->f_2;
	}
	return false;
}

void func_667(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_155(uParam0, iVar0))
		{
			(*uParam1)[*uParam2] = uParam0->f_946[iVar0 /*46*/].f_5;
			*uParam2++;
		}
		iVar0++;
	}
}

int func_668(int iParam0, int iParam1, int iParam2)
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

bool func_669(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
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
	if (func_1015(iParam0))
	{
		return false;
	}
	func_1016(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, iParam2, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam4;
	iVar7 = 0;
	while (iVar7 < iParam4)
	{
		iVar6 = (*uParam3)[iVar7];
		if (!func_1017(&uVar0, iVar6))
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
			if (func_1017(&uVar0, iVar6))
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
		if (func_1017(&uVar0, iVar6))
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
					*iParam5 = iVar6;
					return true;
				}
				iVar13++;
			}
		}
		iVar6++;
	}
	return false;
}

char* func_670(int iParam0)
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

bool func_671(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
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
	func_1018(ENTITY::GET_ENTITY_MODEL(iParam0), iParam1, &uVar0, &iVar4);
	if (iVar4 == 0)
	{
		return false;
	}
	iVar5 = iParam3;
	iVar7 = 0;
	while (iVar7 < iParam3)
	{
		iVar6 = (*uParam2)[iVar7];
		if (!func_1017(&uVar0, iVar6))
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
			if (func_1017(&uVar0, iVar6))
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
		if (func_1017(&uVar0, iVar6))
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

void func_672(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_674[iParam1 /*19*/] != 2)
	{
	}
	else
	{
		strcpy_s(&(uParam0->f_674[iParam1 /*19*/].f_1), 128, func_1019(iParam2));
		uParam0->f_674[iParam1 /*19*/].f_18 = iParam2;
	}
}

void func_673(var uParam0, int iParam1)
{
	uParam0->f_1485[iParam1 /*6*/] = 0;
	uParam0->f_1485[iParam1 /*6*/].f_1 = 0;
}

int func_674(var uParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (func_958(uParam0, uParam1, uParam2, iParam3, -1, 1))
	{
		iVar0 = func_113(uParam2, iParam3);
		iVar1 = func_1020(&(uParam0->f_1567), iParam3);
		iVar2 = func_1021(&(uParam0->f_1567), iParam3);
		bVar3 = func_1022(iVar0, iVar1);
		bVar4 = func_1023(iVar0, iVar1);
		bVar5 = func_1024(iVar0);
		bVar6 = func_1025(iVar0, iVar2);
		if (bVar3)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "leave_good", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
			{
				if (bParam4)
				{
					func_497(uParam0, 1, iParam3, -1, 0, 1);
				}
				return 1;
			}
		}
		if (bVar6)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "leave_bust_early", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
			{
				if (bParam4)
				{
					func_497(uParam0, 3, iParam3, -1, 0, 1);
				}
				return 1;
			}
		}
		if (bVar5)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "leave_bust", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
			{
				if (bParam4)
				{
					func_497(uParam0, 3, iParam3, -1, 0, 1);
				}
				return 1;
			}
		}
		if (bVar4)
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "leave_bad", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
			{
				if (bParam4)
				{
					func_497(uParam0, 3, iParam3, -1, 0, 1);
				}
				return 1;
			}
		}
		if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "leave_neutral", uParam1->f_946[iParam3 /*46*/], 0, uParam1->f_39))
		{
			if (bParam4)
			{
				func_497(uParam0, 2, iParam3, -1, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_675(var uParam0, int iParam1)
{
	if (!uParam0->f_1567.f_53)
	{
		return;
	}
	if (uParam0->f_1567[iParam1 /*10*/])
	{
		uParam0->f_1567[iParam1 /*10*/] = 0;
		uParam0->f_1567[iParam1 /*10*/].f_2 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_3 = 0;
		uParam0->f_1567[iParam1 /*10*/].f_1 = 0;
	}
}

int func_676(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 2;
}

void func_677(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 17);
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		uParam0->f_946[iParam1 /*46*/].f_30 = iParam5;
		uParam0->f_946[iParam1 /*46*/].f_32 = iVar0;
		if (bParam3)
		{
			MISC::SET_BIT(&(uParam0->f_946[iParam1 /*46*/].f_14), 0);
		}
		if (bParam4)
		{
			MISC::SET_BIT(&(uParam0->f_946[iParam1 /*46*/].f_14), 1);
		}
		if (bParam2)
		{
			switch (iParam5)
			{
				case 1:
					if (iVar0 == 0)
					{
						func_795(uParam0, iParam1, "sit_exit_left_loss_a", 0, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
					}
					else
					{
						func_795(uParam0, iParam1, "sit_exit_left_loss_b", 0, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
					}
					break;
				default:
					func_795(uParam0, iParam1, "sit_exit_left", 0, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
					break;
			}
		}
		else
		{
			switch (iParam5)
			{
				case 1:
					if (iVar0 == 0)
					{
						func_795(uParam0, iParam1, "sit_exit_right_loss_a", 0, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
					}
					else
					{
						func_795(uParam0, iParam1, "sit_exit_right_loss_b", 0, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
					}
					break;
				default:
					func_795(uParam0, iParam1, "sit_exit_right", 0, 1040187392 /* Float: 0.125f */, 1040187392 /* Float: 0.125f */, 0);
					break;
			}
		}
		func_817(uParam0, iParam1, 0);
		func_818(uParam0, iParam1, 7);
	}
}

void func_678(var uParam0, int iParam1)
{
	if (func_529(&(uParam0->f_3218), iParam1))
	{
		func_1026(&(uParam0->f_3218), iParam1);
	}
}

bool func_679(var uParam0, int iParam1)
{
	return uParam0->f_211[iParam1] != 0;
}

void func_680(var uParam0, int iParam1)
{
	if (uParam0->f_211[iParam1] == 0)
	{
	}
	else
	{
		if (uParam0->f_211[iParam1] == 1)
		{
			func_1027(&(uParam0->f_216[iParam1]));
		}
		else if (uParam0->f_211[iParam1] == 2)
		{
			func_1028(&Global_1899750, Global_1899750.f_14[iParam1]);
		}
		uParam0->f_211[iParam1] = 0;
	}
}

void func_681(var uParam0)
{
	int iVar0;
	int iVar1;

	func_1029(uParam0);
	iVar0 = uParam0->f_227;
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (uParam0->f_230[iVar0 /*2*/])
		{
			func_1030(uParam0, iVar0);
		}
		iVar0--;
		if (iVar0 < 0)
		{
			iVar0 += 4;
		}
		iVar1++;
	}
	uParam0->f_228 = 1;
}

void func_682(var uParam0, var uParam1)
{
}

void func_683(var uParam0)
{
	uParam0->f_198 = 1;
	func_321(uParam0);
}

void func_684(var uParam0, int iParam1)
{
	uParam0->f_1475.f_1 = iParam1;
}

void func_685(var uParam0, bool bParam1)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "PBL_EXIT_");
	if (bParam1)
	{
		strcat_s(&cVar0, 64, "R");
	}
	else
	{
		strcat_s(&cVar0, 64, "L");
	}
	uParam0->f_42 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mini_game@blackjack@interrupt_exits", 0, &cVar0, false, true);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
	}
	else
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_42);
	}
}

bool func_686(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
	}
	else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_42, true, false))
	{
		return true;
	}
	return false;
}

void func_687(var uParam0, int iParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_42, uParam0->f_1207[iParam1 /*3*/], uParam0->f_1220[iParam1 /*3*/], 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_42, "player", Global_35, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_42);
	}
}

void func_688(var uParam0)
{
	uParam0->f_197 = 1;
	func_1031(uParam0, 0);
	func_1032(uParam0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	func_175(1);
}

void func_689(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_41))
	{
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(uParam0->f_41, "plMain"))
	{
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_41, "Breakout", true, false);
	}
}

bool func_690(var uParam0)
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42);
}

bool func_691(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
		return false;
	}
	return (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_42) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(uParam0->f_42, false));
}

bool func_692(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_42))
	{
		return false;
	}
	return ANIMSCENE::GET_ANIM_SCENE_CURRENT_ACTIVE_CAMERA_COUNT(uParam0->f_42) >= 1;
}

bool func_693(var uParam0, var uParam1, int iParam2)
{
	if (func_947(uParam0, uParam1))
	{
		if (iParam2 == 0)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_PlayerLeaveGood", uParam1->f_1239, 0, uParam1->f_39);
		}
		else if (iParam2 == 1)
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_PlayerLeaveBad", uParam1->f_1239, 0, uParam1->f_39);
		}
		else
		{
			return ANIMSCENE::_0x61B2AAEF645DDAF0(uParam1->f_44, "DLR_PlayerLeaveNeutral", uParam1->f_1239, 0, uParam1->f_39);
		}
	}
	return false;
}

char* func_694(var uParam0, int iParam1)
{
	struct<8> /*64*/ sVar0;

	sVar0 = { uParam0->f_1152[iParam1 /*8*/] /*8*/ };
	return HUD::_GET_TEXT_SUBSTRING_2(&sVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&sVar0));
}

char* func_695(var uParam0, int iParam1)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "clipset@");
	strcat_s(&cVar0, 64, &(uParam0->f_1152[iParam1 /*8*/]));
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

char* func_696(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Blackjack";
		case 1:
			return "BlackjackArthur";
		case 2:
			return "BlackjackJohn";
		default:
			break;
	}
	return "Blackjack";
}

void func_697(var uParam0, int iParam1)
{
	char cVar0[64];

	switch (*uParam0)
	{
		case 1:
			strcpy_s(&cVar0, 64, "dominos_set_");
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = MISC::GET_HASH_KEY(&cVar0);
			uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
		case 0:
		case 2:
			strcpy_s(&cVar0, 64, "card_set_");
			StringIntConCat(&cVar0, iParam1 + 1, 64);
			uParam0->f_3 = MISC::GET_HASH_KEY(&cVar0);
			uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_4, "gameTokenSetTextureDictionary", &cVar0);
			break;
	}
}

void func_698(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_30, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_30);
}

void func_699(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
	}
	uParam0->f_1 = iParam1;
}

void func_700(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	char[] cVar1[8];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	StringIntConCat(&cVar1, iParam2, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		sParam3 = "avatar_generic";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		sParam4 = "minigames_hud";
	}
	uParam1->f_1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, &cVar1);
	uParam1->f_2 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "playerIconTextureDictionary", sParam4);
	uParam1->f_3 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "playerIconTextureName", sParam3);
	uParam1->f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isEnabled", true);
	uParam1->f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isVisible", bParam6);
	uParam1->f_6 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isActivePlayer", false);
	uParam1->f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "stateText", " ");
	uParam1->f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_1, "moneyText", "");
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isMoneyTextVisible", true);
	uParam1->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam1->f_1, "isDealer", false);
	uParam1->f_11 = DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_1, "turnTimerValue", -1);
	if (bParam5)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, iParam2, "player_stack_item", uParam1->f_1);
	}
	iVar2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_1, "playerHandData");
	uParam1->f_12 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam1->f_1, "playerHandList");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam1->f_12);
	iVar0 = 0;
	while (iVar0 < uParam1->f_14)
	{
		strcpy_s(&cVar1, 8, "");
		StringIntConCat(&cVar1, iVar0, 8);
		iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar2, &cVar1);
		uParam1->f_14[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "textureName", "");
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_12, iVar0, "single_game_token", iVar3);
		iVar0++;
	}
	if (*uParam0 == 0)
	{
		iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_1, "secondPlayerHandData");
		uParam1->f_13 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam1->f_1, "secondPlayerHandList");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam1->f_13);
		iVar0 = 0;
		while (iVar0 < uParam1->f_26)
		{
			strcpy_s(&cVar1, 8, "");
			StringIntConCat(&cVar1, iVar0, 8);
			iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar4, &cVar1);
			uParam1->f_26[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_13, iVar0, "single_game_token", iVar5);
			iVar0++;
		}
	}
	MISC::SET_BIT(&(uParam0->f_195), iParam2);
	*uParam1 = 1;
}

void func_701(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (uParam0->f_1239 != 0 && PED::IS_PED_INJURED(uParam0->f_1239))
		{
			func_121(uParam0, 0);
		}
	}
	if (uParam0->f_1239 != 0)
	{
		Stack.Invoke(uParam0->f_1293[uParam0->f_1239.f_6], uParam0, &(uParam0->f_1239));
	}
	iVar0 = uParam0->f_1239;
	if (iVar0 != 0)
	{
		if (uParam0->f_1239.f_22)
		{
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_CAN_LEG_IK(iVar0, false);
				PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar0, 0, 1);
			}
		}
	}
}

void func_702(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (uParam0->f_946[iVar0 /*46*/] != 0 && PED::IS_PED_INJURED(uParam0->f_946[iVar0 /*46*/]))
			{
				func_308(uParam0, iVar0, 0);
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_946[iVar0 /*46*/] != 0)
		{
			Stack.Invoke(uParam0->f_1132[uParam0->f_946[iVar0 /*46*/].f_6], uParam0, &(uParam0->f_946[iVar0 /*46*/]), iVar0);
		}
		iVar1 = uParam0->f_946[iVar0 /*46*/];
		if (iVar1 != 0)
		{
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "LookQuickInline") || TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "LookMediumInline"))
				{
					func_1033(uParam0, iVar0, 2);
				}
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar1, "Motiontree"))
				{
					func_1033(uParam0, iVar0, 0);
				}
			}
			else if (uParam0->f_946[iVar0 /*46*/].f_33 != 0)
			{
				func_1033(uParam0, iVar0, 0);
			}
			if (uParam0->f_946[iVar0 /*46*/].f_44)
			{
				if (!PED::IS_PED_INJURED(iVar1))
				{
					PED::SET_PED_CAN_LEG_IK(iVar1, false);
					PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar1, 0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_703(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (uParam0->f_112[iVar0 /*194*/].f_20[iVar2] != 0)
			{
				if (uParam0->f_112[iVar0 /*194*/].f_20[iVar2] == 3)
				{
					fVar6 = uParam0->f_944;
				}
				else
				{
					fVar6 = uParam0->f_943;
				}
				uParam0->f_112[iVar0 /*194*/].f_25[iVar2] += (MISC::GET_FRAME_TIME() / fVar6);
				fVar5 = uParam0->f_112[iVar0 /*194*/].f_25[iVar2];
				if (fVar5 < 1.0f)
				{
					switch (uParam0->f_112[iVar0 /*194*/].f_20[iVar2])
					{
						case 1:
							fVar4 = 1.0f;
							fVar3 = fVar5;
							break;
						case 2:
							fVar4 = (1.0f - fVar5);
							fVar3 = 1.0f;
							break;
						case 3:
							fVar4 = func_1034((1.0f - (2.0f * fVar5)), 0, 1065353216 /* Float: 1f */);
							fVar3 = func_1034(((2.0f * fVar5) - 1.0f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/][iVar2]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/][iVar2], BUILTIN::ROUND((fVar3 * 255.0f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_15[iVar2]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/].f_15[iVar2], BUILTIN::ROUND((fVar4 * 255.0f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/][iVar2]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/][iVar2], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_15[iVar2]))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_15[iVar2]));
					}
					uParam0->f_112[iVar0 /*194*/].f_20[iVar2] = 0;
				}
			}
			iVar2++;
		}
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_20[iVar2] != 0)
				{
					if (uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_20[iVar2] == 3)
					{
						fVar6 = uParam0->f_944;
					}
					else
					{
						fVar6 = uParam0->f_943;
					}
					uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_25[iVar2] += (MISC::GET_FRAME_TIME() / fVar6);
					fVar5 = uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_25[iVar2];
					if (fVar5 < 1.0f)
					{
						switch (uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_20[iVar2])
						{
							case 1:
								fVar4 = 1.0f;
								fVar3 = fVar5;
								break;
							case 2:
								fVar4 = (1.0f - fVar5);
								fVar3 = 1.0f;
								break;
							case 3:
								fVar4 = func_1034((1.0f - (2.0f * fVar5)), 0, 1065353216 /* Float: 1f */);
								fVar3 = func_1034(((2.0f * fVar5) - 1.0f), 0, 1065353216 /* Float: 1f */);
								break;
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/][iVar2]))
						{
							ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/][iVar2], BUILTIN::ROUND((fVar3 * 255.0f)), false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_15[iVar2]))
						{
							ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_15[iVar2], BUILTIN::ROUND((fVar4 * 255.0f)), false);
						}
					}
					else
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/][iVar2]))
						{
							ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/][iVar2], 255, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_15[iVar2]))
						{
							OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_15[iVar2]));
						}
						uParam0->f_112[iVar0 /*194*/].f_60[iVar1 /*30*/].f_20[iVar2] = 0;
					}
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (uParam0->f_112[iVar0 /*194*/].f_30.f_20[iVar2] != 0)
			{
				if (uParam0->f_112[iVar0 /*194*/].f_30.f_20[iVar2] == 3)
				{
					fVar6 = uParam0->f_944;
				}
				else
				{
					fVar6 = uParam0->f_943;
				}
				uParam0->f_112[iVar0 /*194*/].f_30.f_25[iVar2] += (MISC::GET_FRAME_TIME() / fVar6);
				fVar5 = uParam0->f_112[iVar0 /*194*/].f_30.f_25[iVar2];
				if (fVar5 < 1.0f)
				{
					switch (uParam0->f_112[iVar0 /*194*/].f_30.f_20[iVar2])
					{
						case 1:
							fVar4 = 1.0f;
							fVar3 = fVar5;
							break;
						case 2:
							fVar4 = (1.0f - fVar5);
							fVar3 = 1.0f;
							break;
						case 3:
							fVar4 = func_1034((1.0f - (2.0f * fVar5)), 0, 1065353216 /* Float: 1f */);
							fVar3 = func_1034(((2.0f * fVar5) - 1.0f), 0, 1065353216 /* Float: 1f */);
							break;
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_30[iVar2]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/].f_30[iVar2], BUILTIN::ROUND((fVar3 * 255.0f)), false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_30.f_15[iVar2]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/].f_30.f_15[iVar2], BUILTIN::ROUND((fVar4 * 255.0f)), false);
					}
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_30[iVar2]))
					{
						ENTITY::SET_ENTITY_ALPHA(uParam0->f_112[iVar0 /*194*/].f_30[iVar2], 255, false);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_30.f_15[iVar2]))
					{
						OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_30.f_15[iVar2]));
					}
					uParam0->f_112[iVar0 /*194*/].f_30.f_20[iVar2] = 0;
				}
			}
			iVar2++;
		}
		iVar0++;
	}
}

bool func_704(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
			func_699(uParam0, 2);
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				func_699(uParam0, 3);
			}
			break;
		case 3:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_2, uParam0->f_3);
				UISTATEMACHINE::UI_STATE_MACHINE_CREATE(-1631983120, uParam0->f_2);
				func_699(uParam0, 4);
			}
			break;
		case 4:
			if (MISC::GET_FRAME_COUNT() > uParam0->f_193 && uParam0->f_194 != -1)
			{
				func_1035(uParam0, -1);
			}
			break;
	}
	return uParam0->f_1 == 4;
}

void func_705(var uParam0)
{
	if (uParam0->f_207 && func_929(&(uParam0->f_208)) >= 0.0f)
	{
		uParam0->f_207 = 0;
		func_214(&(uParam0->f_208));
		if (uParam0->f_201 != 0)
		{
			if (func_477(&(uParam0->f_203)))
			{
				if (func_929(&(uParam0->f_203)) < 0.0f)
				{
					if (!uParam0->f_197)
					{
						func_175(1);
						func_1038(func_1036(uParam0->f_201, uParam0->f_202), -func_1037(&(uParam0->f_203)), 0, 0, 0, 1);
					}
				}
				else
				{
					uParam0->f_201 = 0;
					uParam0->f_202 = 0;
					func_214(&(uParam0->f_203));
				}
			}
			else if (!uParam0->f_197)
			{
				func_175(1);
				func_1039(func_1036(uParam0->f_201, uParam0->f_202), 0, 0, 1);
			}
		}
	}
}

bool func_706(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (uParam0->f_14[iParam2] == iParam1 && iParam3 == 0)
	{
		if (MISC::IS_BIT_SET(uParam0->f_22, iParam2))
		{
			return true;
		}
	}
	uParam0->f_14[iParam2] = iParam1;
	MISC::SET_BIT(&(uParam0->f_22), iParam2);
	MISC::CLEAR_BIT(&(uParam0->f_23), iParam2);
	return true;
}

int func_707(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	else if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0) == 0)
	{
		return 1;
	}
	return 0;
}

int func_708(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	else if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0) == 2)
	{
		return 1;
	}
	return 0;
}

bool func_709(var uParam0, int iParam1)
{
	char* sVar0;

	sVar0 = func_1040(uParam0, iParam1);
	return NETWORK::_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID(sVar0);
}

bool func_710(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar3 = 0;
			while (iVar3 < 11)
			{
				if (func_802(uParam0, uParam0->f_112[iVar1 /*194*/].f_121[iVar2 /*36*/][iVar3 /*2*/], &iVar0))
				{
					if (!STREAMING::HAS_MODEL_LOADED(iVar0))
					{
						return false;
					}
				}
				iVar3++;
			}
			iVar2++;
		}
		iVar1++;
	}
	return true;
}

bool func_711(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 11)
	{
		if (func_802(uParam0, uParam0->f_889[iVar1 /*2*/], &iVar0))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

int func_712(int iParam0, char* sParam1, var uParam2)
{
	struct<2> /*16*/ sVar0;
	char cVar2[64];

	sVar0 = { func_1041(iParam0) /*2*/ };
	if (*uParam2 < 0)
	{
		*uParam2 = 0;
	}
	strcpy_s(&cVar2, 64, sParam1);
	StringIntConCat(&cVar2, *uParam2, 64);
	*uParam2++;
	return NETWORK::TEXTURE_DOWNLOAD_REQUEST(&sVar0, func_1042(0), &cVar2, true);
}

int func_713(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_1043(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_714(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_155(uParam0, iVar2))
		{
			iVar1 = uParam0->f_946[iVar2 /*46*/].f_4;
			if (iVar1 != -1)
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_715(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1044(iParam0);
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

int func_716(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_668(iParam1, iParam2, iParam3);
	PED::_EQUIP_META_PED_OUTFIT(iParam0, iVar0);
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	return iVar0;
}

void func_717(var uParam0)
{
	Vector3 vVar0;
	bool bVar3;
	int iVar4;

	bVar3 = false;
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (uParam0->f_548[iVar4 /*3*/] != 0)
		{
			bVar3 = true;
		}
		iVar4++;
	}
	if (bVar3)
	{
		iVar4 = 0;
		while (iVar4 < 4)
		{
			if (func_1045(uParam0, iVar4, &vVar0))
			{
				func_1046(uParam0, iVar4);
				if (*uParam0 == iVar4 && uParam0->f_580 == 5)
				{
					func_1047(uParam0, 4);
				}
			}
			else if (func_1048(uParam0, iVar4, &vVar0))
			{
				if (func_116(uParam0, iVar4))
				{
					return;
				}
				else
				{
					func_338(uParam0, iVar4, vVar0.y, vVar0.z, 0);
				}
			}
			iVar4++;
		}
	}
}

bool func_718(var uParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar24;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	uVar0 = 11;
	switch (uParam0->f_580)
	{
		case 0:
			if (!func_477(&(uParam0->f_583)))
			{
				func_187(&(uParam0->f_583));
				func_459(uParam0);
				if (uParam0->f_701 > 0)
				{
					func_1049(uParam0, 1);
					return false;
				}
			}
			iVar26 = 0;
			while (iVar26 < 4)
			{
				if (func_116(uParam0, iVar26))
				{
					uParam0->f_27[iVar26 /*60*/].f_1 += func_1050(uParam0, iVar26);
					iVar30 = func_1051(uParam0, iVar26);
					if (iVar30 >= 0)
					{
						func_1052(uParam0, iVar26);
						if (!func_1053(uParam0, iVar26, 0, iVar30))
						{
							func_1054(uParam0, iVar26);
						}
					}
				}
				iVar26++;
			}
			if (func_1055(uParam0) & func_1056(uParam0))
			{
				func_1047(uParam0, 1);
				return true;
			}
			break;
		case 1:
			func_214(&(uParam0->f_583));
			if (!func_1057(uParam0))
			{
				uParam0->f_700 = -1517144134;
				func_1047(uParam0, 9);
				return true;
			}
			if (uParam0->f_2[1 /*2*/] == 14)
			{
				func_1047(uParam0, 2);
				return true;
			}
			else
			{
				func_1047(uParam0, 3);
				return true;
			}
			break;
		case 2:
			if (!func_477(&(uParam0->f_586)))
			{
				func_187(&(uParam0->f_586));
			}
			iVar26 = 0;
			while (iVar26 < 4)
			{
				if (func_116(uParam0, iVar26))
				{
					if (func_280(uParam0, iVar26))
					{
						iVar30 = func_1058(uParam0, iVar26);
					}
					else
					{
						iVar30 = -1;
					}
					if (func_1059(uParam0, iVar26, iVar30))
					{
						uParam0->f_27[iVar26 /*60*/].f_1 -= iVar30;
						uParam0->f_27[iVar26 /*60*/].f_2 = iVar30;
					}
				}
				iVar26++;
			}
			if (func_1060(uParam0))
			{
				func_214(&(uParam0->f_586));
				iVar26 = 0;
				while (iVar26 < 4)
				{
					if (func_280(uParam0, iVar26))
					{
						if (uParam0->f_27[iVar26 /*60*/].f_2 < 0)
						{
							uParam0->f_27[iVar26 /*60*/].f_2 = 0;
						}
					}
					iVar26++;
				}
				func_1047(uParam0, 3);
				return true;
			}
			break;
		case 3:
			if (func_1061(&(uParam0->f_2)))
			{
				func_1047(uParam0, 8);
				return true;
			}
			else
			{
				iVar26 = 0;
				while (iVar26 < 4)
				{
					if (func_280(uParam0, iVar26))
					{
						if (func_1061(&(uParam0->f_27[iVar26 /*60*/].f_8[0 /*25*/])))
						{
							func_1062(uParam0, iVar26, 0);
							uParam0->f_27[iVar26 /*60*/].f_3 = 1;
						}
						if (uParam0->f_27[iVar26 /*60*/].f_2 > 0)
						{
							uParam0->f_27[iVar26 /*60*/].f_2 = 0;
						}
					}
					iVar26++;
				}
				func_1047(uParam0, 4);
				return true;
			}
			break;
		case 4:
			iVar27 = -1;
			iVar26 = 0;
			while (iVar26 < 4)
			{
				if (func_280(uParam0, iVar26))
				{
					if (uParam0->f_27[iVar26 /*60*/] >= *uParam0 && func_1063(uParam0, iVar26))
					{
						iVar27 = iVar26;
					}
					else
					{
						iVar26++;
					}
					if (iVar27 == -1)
					{
						func_1047(uParam0, 8);
						return true;
					}
					*uParam0 = iVar27;
					if (uParam0->f_27[iVar27 /*60*/].f_3 == -1)
					{
						uParam0->f_27[iVar27 /*60*/].f_3 = 0;
					}
					func_1064(uParam0);
					func_1047(uParam0, 5);
					return true;
					Jump @1511; // curOff = 830
					iVar28 = *uParam0;
					if (!func_280(uParam0, iVar28))
					{
						func_1047(uParam0, 4);
						return true;
					}
					if (func_1065(uParam0, iVar28, &sVar24))
					{
						func_1047(uParam0, 6);
						return true;
					}
					Jump @1511; // curOff = 885
					iVar28 = *uParam0;
					if (!func_116(uParam0, iVar28))
					{
						func_1047(uParam0, 4);
						return true;
					}
					if (!func_1066(uParam0, iVar28, &sVar24))
					{
						sVar24.f_0 = 7;
						sVar24.f_1 = 0;
					}
					if (func_1067(uParam0, iVar28, &sVar24))
					{
						func_1047(uParam0, 7);
						return true;
					}
					else
					{
						func_1064(uParam0);
						func_1054(uParam0, iVar28);
						func_1047(uParam0, 5);
						return true;
					}
					Jump @1511; // curOff = 990
					iVar28 = *uParam0;
					if (func_116(uParam0, iVar28))
					{
						iVar29 = uParam0->f_27[iVar28 /*60*/].f_3;
						while (func_1068(uParam0, iVar28, iVar29) && (((uParam0->f_699 > 0 || uParam0->f_27[iVar28 /*60*/].f_8[iVar29 /*25*/].f_24 == 21) || uParam0->f_27[iVar28 /*60*/].f_8[iVar29 /*25*/].f_24 > 21) || uParam0->f_27[iVar28 /*60*/].f_8[iVar29 /*25*/].f_23 >= 7))
						{
							if ((func_1061(&(uParam0->f_27[iVar28 /*60*/].f_8[iVar29 /*25*/])) && uParam0->f_27[iVar28 /*60*/].f_59 == 1) || func_609(uParam0, iVar28, iVar29) >= 7)
							{
								func_1062(uParam0, iVar28, iVar29);
							}
							else if (func_1069(&(uParam0->f_27[iVar28 /*60*/].f_8[iVar29 /*25*/])))
							{
								func_1070(uParam0, iVar28, iVar29, 0);
							}
							uParam0->f_27[iVar28 /*60*/].f_3++;
							uParam0->f_699--;
							iVar29++;
						}
					}
					func_1071(uParam0);
					func_1047(uParam0, 4);
					return true;
					Jump @1511; // curOff = 1281
					iVar28 = -1;
					if (uParam0->f_2[1 /*2*/] == 14 && func_1061(&(uParam0->f_2)))
					{
						iVar26 = 0;
						while (iVar26 < 4)
						{
							if (func_280(uParam0, iVar26))
							{
								uParam0->f_27[iVar26 /*60*/].f_1 += (2 * uParam0->f_27[iVar26 /*60*/].f_2);
								uParam0->f_27[iVar26 /*60*/].f_2 = 0;
							}
							iVar26++;
						}
					}
					while (uParam0->f_2.f_24 < 17)
					{
						if (!func_1072(uParam0, &uVar0, 1))
						{
							func_1073(uParam0, -1517144134);
							func_1047(uParam0, 9);
							return true;
						}
						func_1074(uParam0, &uVar0);
					}
					func_1075(uParam0);
					uParam0->f_701++;
					func_1047(uParam0, 0);
					return true;
					Jump @1511; // curOff = 1473
					func_1076(uParam0);
					uParam0->f_701++;
					func_1047(uParam0, 0);
					return true;
					return false;
				}
			}
			default:
				break;
	}
}

bool func_719(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (*uParam0 != uParam0->f_275)
	{
		return true;
	}
	if (uParam0->f_2.f_23 != uParam0->f_275.f_2.f_23 || uParam0->f_2.f_24 != uParam0->f_275.f_2.f_24)
	{
		return true;
	}
	iVar3 = 0;
	while (iVar3 < uParam0->f_2.f_23)
	{
		if (uParam0->f_2[iVar3 /*2*/] != uParam0->f_275.f_2[iVar3 /*2*/] || uParam0->f_2[iVar3 /*2*/].f_1 != uParam0->f_275.f_2[iVar3 /*2*/].f_1)
		{
			return true;
		}
		iVar3++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_27[iVar0 /*60*/] != uParam0->f_275.f_27[iVar0 /*60*/])
		{
			return true;
		}
		else if (uParam0->f_27[iVar0 /*60*/] != -1)
		{
			if ((uParam0->f_27[iVar0 /*60*/].f_1 != uParam0->f_275.f_27[iVar0 /*60*/].f_1 || uParam0->f_27[iVar0 /*60*/].f_2 != uParam0->f_275.f_27[iVar0 /*60*/].f_2) || uParam0->f_27[iVar0 /*60*/].f_3 != uParam0->f_275.f_27[iVar0 /*60*/].f_3)
			{
				return true;
			}
			if (uParam0->f_27[iVar0 /*60*/].f_7 != uParam0->f_275.f_27[iVar0 /*60*/].f_7 || uParam0->f_27[iVar0 /*60*/].f_59 != uParam0->f_275.f_27[iVar0 /*60*/].f_59)
			{
				return true;
			}
			iVar2 = 0;
			while (iVar2 < uParam0->f_27[iVar0 /*60*/].f_7)
			{
				if (uParam0->f_27[iVar0 /*60*/].f_4[iVar2] != uParam0->f_275.f_27[iVar0 /*60*/].f_4[iVar2])
				{
					return true;
				}
				iVar2++;
			}
			iVar1 = 0;
			while (iVar1 < uParam0->f_27[iVar0 /*60*/].f_59)
			{
				if (uParam0->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_23 != uParam0->f_275.f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_23 || uParam0->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_24 != uParam0->f_275.f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_24)
				{
					return true;
				}
				iVar3 = 0;
				while (iVar3 < uParam0->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/].f_23)
				{
					if (uParam0->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/][iVar3 /*2*/] != uParam0->f_275.f_27[iVar0 /*60*/].f_8[iVar1 /*25*/][iVar3 /*2*/] || uParam0->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/][iVar3 /*2*/].f_1 != uParam0->f_275.f_27[iVar0 /*60*/].f_8[iVar1 /*25*/][iVar3 /*2*/].f_1)
					{
						return true;
					}
					iVar3++;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return false;
}

int func_720(var uParam0)
{
	return 3;
}

int func_721(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (uParam1->f_1475 != 0)
	{
		return 0;
	}
	uParam1->f_1475 = iParam2;
	uParam1->f_1475.f_1 = 0;
	if (bParam3)
	{
		func_278(uParam0, uParam1);
	}
	return 1;
}

int func_722(var uParam0, int iParam1)
{
	return (iParam1 / uParam0->f_199);
}

int func_723(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_724(var uParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = 0;
	if (fParam1 > 0.5f)
	{
		iVar0 = 1;
	}
	else if (fParam1 < -0.5f)
	{
		iVar0 = -1;
	}
	fVar1 = uParam0->f_2;
	if (MISC::ABSF(fParam1) < uParam0->f_4)
	{
		fVar1 = uParam0->f_1;
	}
	if (iVar0 != uParam0->f_7 || bParam2)
	{
		uParam0->f_5 = 0.0f;
		uParam0->f_6 = *uParam0;
		uParam0->f_7 = iVar0;
		return iVar0;
	}
	else if (iVar0 != 0)
	{
		uParam0->f_5 += ((BUILTIN::TO_FLOAT(iVar0) * MISC::GET_FRAME_TIME()) * uParam0->f_6);
		if (MISC::ABSF(uParam0->f_5) >= 1.0f)
		{
			iVar2 = BUILTIN::ROUND(uParam0->f_5);
			uParam0->f_5 = 0.0f;
			uParam0->f_6 *= uParam0->f_3;
			if (uParam0->f_6 > fVar1)
			{
				uParam0->f_6 = fVar1;
			}
			return iVar2;
		}
	}
	return 0;
}

int func_725(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 < iParam1)
	{
		return iParam1;
	}
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	return iParam0;
}

void func_726(bool bParam0)
{
	AUDIO::_STOP_SOUND_WITH_NAME("BET_AMOUNT", "HUD_POKER");
	if (bParam0)
	{
		AUDIO::PLAY_SOUND_FRONTEND("BET_MIN_MAX", "HUD_POKER", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("BET_AMOUNT", "HUD_POKER", true, 0);
	}
}

bool func_727(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_96(iParam0))
	{
		return false;
	}
	iVar0 = func_259(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

int func_728(var uParam0, int iParam1)
{
	return (iParam1 * uParam0->f_199);
}

void func_729(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_259(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

int func_730(var uParam0, int iParam1, int iParam2)
{
	func_1077(&(uParam0->f_756), iParam1, 1, iParam2);
	return 1;
	return 0;
}

int func_731(var uParam0, int iParam1, int iParam2)
{
	func_1077(&(uParam0->f_756), iParam1, 2, iParam2);
	return 1;
	return 0;
}

int func_732(var uParam0, int iParam1, int iParam2)
{
	func_1077(&(uParam0->f_756), iParam1, 3, iParam2);
	return 1;
	return 0;
}

int func_733(var uParam0, int iParam1)
{
	func_1077(&(uParam0->f_756), iParam1, 4, 0);
	return 1;
	return 0;
}

int func_734(var uParam0, int iParam1)
{
	func_1077(&(uParam0->f_756), iParam1, 5, 0);
	return 1;
	return 0;
}

int func_735(var uParam0, int iParam1)
{
	func_1077(&(uParam0->f_756), iParam1, 6, 0);
	return 1;
	return 0;
}

int func_736(var uParam0, int iParam1)
{
	func_1077(&(uParam0->f_756), iParam1, 7, 0);
	return 1;
	return 0;
}

void func_737(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_96(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_259(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_1078(iVar0);
	*uParam0 = 0;
}

int func_738(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_45;
}

void func_739(var uParam0, int iParam1)
{
	if (!uParam0->f_946[iParam1 /*46*/].f_38)
	{
		uParam0->f_946[iParam1 /*46*/].f_38 = 1;
	}
}

int func_740(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_946[iParam1 /*46*/].f_6 == 1)
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_946[iParam1 /*46*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_946[iParam1 /*46*/]))
		{
			return 1;
		}
	}
	return 0;
}

int func_741(var uParam0, int iParam1)
{
	if (func_477(&(uParam0->f_946[iParam1 /*46*/].f_40)) && func_929(&(uParam0->f_946[iParam1 /*46*/].f_40)) > 0.0f)
	{
		return 1;
	}
	return 0;
}

void func_742(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 15);
		if (iParam2 == 1)
		{
			iVar0 = ((uParam0->f_1235 + MISC::GET_RANDOM_INT_IN_RANGE(1, 100)) % 3);
			uParam0->f_1235 = iVar0;
		}
		else if (iParam2 == 0)
		{
			iVar0 = ((uParam0->f_1236 + MISC::GET_RANDOM_INT_IN_RANGE(1, 100)) % 5);
			uParam0->f_1236 = iVar0;
		}
		uParam0->f_946[iParam1 /*46*/].f_31 = iParam2;
		uParam0->f_946[iParam1 /*46*/].f_32 = iVar0;
		if (!uParam0->f_39)
		{
			if (iParam2 == 1)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "Fidget");
			}
			else if (iParam2 == 0)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "FidgetSubtle");
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
		func_1079(uParam0, iParam1);
	}
}

void func_743(var uParam0, int iParam1)
{
	func_379(&(uParam0->f_946[iParam1 /*46*/].f_40), -MISC::GET_RANDOM_FLOAT_IN_RANGE(20.0f, 45.0f));
}

int func_744(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_35;
}

void func_745(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_96(iParam0))
	{
		return;
	}
	iVar0 = func_259(iParam0);
	HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iVar0 /*18*/].f_3, !bParam1);
}

int func_746(var uParam0)
{
	return uParam0->f_889.f_35;
}

bool func_747(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_259(iParam0);
	iVar1 = Global_1945188[iVar0 /*18*/].f_4;
	return (func_97(iParam0, 1) && PAD::IS_CONTROL_JUST_PRESSED(2, iVar1));
}

bool func_748(var uParam0)
{
	return uParam0->f_269;
}

void func_749(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	if (!uParam0->f_1)
	{
	}
	else if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_5)))
	{
	}
	else
	{
		if (func_798(&(uParam0->f_32)))
		{
			func_1080(&(uParam0->f_32), MISC::GET_FRAME_COUNT() + 1);
		}
		uParam0->f_2 = iParam1;
		uParam0->f_3 = iParam2;
		switch (iParam1)
		{
			case 1:
				uParam0->f_5.f_21 = 0;
				uParam0->f_5.f_22 = 0;
				uParam0->f_5.f_23 = 0;
				uParam0->f_5.f_20 = iParam2;
				break;
			case 2:
				func_1081(&(uParam0->f_32), 0, 0.0f, iParam3);
				uParam0->f_5.f_21 = 0;
				uParam0->f_5.f_22 = 1;
				uParam0->f_5.f_23 = 0;
				uParam0->f_5.f_20 = iParam2;
				break;
			case 3:
				uParam0->f_5.f_21 = 1;
				uParam0->f_5.f_22 = 0;
				uParam0->f_5.f_23 = 0;
				uParam0->f_5.f_20 = iParam2;
				break;
			default:
				return;
		}
		CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_5));
	}
}

void func_750(var uParam0)
{
	func_1082(&(uParam0->f_32), 0);
	switch (uParam0->f_2)
	{
		case 3:
			CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
			break;
	}
	if (uParam0->f_1)
	{
		if (uParam0->f_2 == 2)
		{
			if (uParam0->f_4 != 2)
			{
				uParam0->f_4 = 2;
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("Odd_Jobs_Blackjack_Dealer", 1E-08f);
			}
		}
		else if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
		{
			if (uParam0->f_4 != 1)
			{
				uParam0->f_4 = 1;
				GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("Odd_Jobs_Blackjack_First_Person", 1E-08f);
			}
		}
		else if (uParam0->f_4 != 0)
		{
			uParam0->f_4 = 0;
			GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(1E-08f);
		}
	}
}

void func_751(var uParam0, int iParam1)
{
	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 16);
		if (!uParam0->f_39)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "Peek");
		}
	}
}

bool func_752(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_38;
}

void func_753(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam1->f_1631[iVar0] != -1)
		{
			if (func_155(&(uParam0->f_1724), iVar0) && func_1083(&(uParam0->f_1724), iVar0))
			{
				if (func_929(&(uParam1->f_1641[iVar0 /*3*/])) >= 0.0f)
				{
					func_1084(&(uParam0->f_1724), iVar0, uParam1->f_1636[iVar0], uParam1->f_1631[iVar0]);
					func_1085(uParam1, iVar0);
				}
			}
			else
			{
				func_1085(uParam1, iVar0);
			}
		}
		iVar0++;
	}
}

void func_754(var uParam0, var uParam1, var uParam2)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = 0;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 0;
	iVar11 = 0;
	iVar12 = 0;
	iVar13 = 0;
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar20 = 0;
	iVar21 = 0;
	iVar22 = 0;
	iVar23 = 0;
	iVar24 = -1;
	iVar25 = -1;
	switch (*uParam2)
	{
		case 1:
		case 2:
		case 3:
			if (!func_946(&(uParam0->f_1724)) || func_478(&(uParam2->f_4), 5.0f))
			{
				func_1086(uParam1);
			}
			else if (!func_469(&(uParam0->f_1724)))
			{
				if (*uParam2 == 1)
				{
					func_693(uParam1, &(uParam0->f_1724), 0);
				}
				else if (*uParam2 == 2)
				{
					func_693(uParam1, &(uParam0->f_1724), 2);
				}
				else if (*uParam2 == 3)
				{
					func_693(uParam1, &(uParam0->f_1724), 1);
				}
				func_1086(uParam1);
			}
			break;
		case 4:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || (uParam1->f_1458 != 2 && uParam1->f_1458 != 3))
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2) && !func_464(&(uParam0->f_1724), uParam2->f_2, 8))
			{
				func_497(uParam1, 5, uParam2->f_2, uParam2->f_3, uParam2->f_1, 1);
			}
			break;
		case 5:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || (uParam1->f_1458 != 2 && uParam1->f_1458 != 3))
			{
				func_1086(uParam1);
			}
			else if (func_478(&(uParam2->f_4), 0.5f))
			{
				iVar0 = func_1088(&(uParam0->f_1724), uParam2->f_2, -1, -1, 0);
				MISC::SET_BIT(&iVar1, uParam2->f_2);
				if (func_1089(uParam0, "Comment_HugeBet", iVar0, iVar1, 66, &iVar24, &iVar25))
				{
					uParam1->f_1556 = MISC::GET_GAME_TIMER();
				}
				func_1086(uParam1);
			}
			break;
		case 6:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || ((uParam1->f_1458 != 3 && uParam1->f_1458 != 5) && uParam1->f_1458 != 6))
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2))
			{
				iVar0 = func_1088(&(uParam0->f_1724), uParam2->f_2, -1, -1, 1);
				MISC::SET_BIT(&iVar1, uParam2->f_2);
				if (func_512(&(uParam1->f_17), &iVar28))
				{
					iVar0 = (iVar0 & -1 ^ iVar28);
				}
				func_1089(uParam0, "Comment_Blackjack", iVar0, iVar1, 70, &iVar24, &iVar25);
				func_1086(uParam1);
			}
			break;
		case 7:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || uParam1->f_1458 != 7)
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2))
			{
				iVar0 = func_1088(&(uParam0->f_1724), uParam2->f_2, -1, -1, 1);
				MISC::SET_BIT(&iVar1, uParam2->f_2);
				if (func_1090(&(uParam1->f_17), uParam2->f_2, &iVar27, 1))
				{
					MISC::CLEAR_BIT(&iVar0, iVar27);
				}
				func_1089(uParam0, "Comment_Charlie", iVar0, iVar1, 100, &iVar24, &iVar25);
				func_1086(uParam1);
			}
			break;
		case 8:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || uParam1->f_1458 != 7)
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2))
			{
				iVar0 = func_1088(&(uParam0->f_1724), uParam2->f_2, -1, -1, 1);
				MISC::SET_BIT(&iVar1, uParam2->f_2);
				if (func_1090(&(uParam1->f_17), uParam2->f_2, &iVar27, 1))
				{
					MISC::CLEAR_BIT(&iVar0, iVar27);
				}
				func_1089(uParam0, "Comment_Bust", iVar0, iVar1, 40, &iVar24, &iVar25);
				func_497(uParam1, 9, iVar24, iVar25, 0, 1);
			}
			break;
		case 9:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || uParam1->f_1458 != 7)
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2))
			{
				if (func_1087(&(uParam0->f_1724), uParam2->f_3, 1))
				{
					if (!func_1091(uParam0, "Result_Rebuff", uParam2->f_3, uParam2->f_2, 66))
					{
					}
				}
				func_1086(uParam1);
			}
			break;
		case 10:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || uParam1->f_1458 != 7)
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2))
			{
				iVar0 = func_1088(&(uParam0->f_1724), uParam2->f_2, -1, -1, 1);
				MISC::SET_BIT(&iVar1, uParam2->f_2);
				if (func_1090(&(uParam1->f_17), uParam2->f_2, &iVar27, 1))
				{
					MISC::CLEAR_BIT(&iVar0, iVar27);
				}
				func_1089(uParam0, "Comment_GoodHand", iVar0, iVar1, 66, &iVar24, &iVar25);
				func_1086(uParam1);
			}
			break;
		case 11:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || uParam1->f_1458 != 7)
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2))
			{
				iVar0 = func_1088(&(uParam0->f_1724), uParam2->f_2, -1, -1, 1);
				MISC::SET_BIT(&iVar1, uParam2->f_2);
				if (func_1090(&(uParam1->f_17), uParam2->f_2, &iVar27, 1))
				{
					MISC::CLEAR_BIT(&iVar0, iVar27);
				}
				func_1089(uParam0, "Comment_BadHand", iVar0, iVar1, 66, &iVar24, &iVar25);
				func_1086(uParam1);
			}
			break;
		case 12:
			if ((!func_1087(&(uParam0->f_1724), uParam2->f_2, 0) || func_478(&(uParam2->f_4), 6.0f)) || uParam1->f_1458 != 7)
			{
				func_1086(uParam1);
			}
			else if (!func_502(&(uParam0->f_1724), uParam2->f_2) && !func_464(&(uParam0->f_1724), uParam2->f_2, 13))
			{
				iVar0 = func_1088(&(uParam0->f_1724), uParam2->f_2, -1, -1, 1);
				MISC::SET_BIT(&iVar1, uParam2->f_2);
				if (func_1090(&(uParam1->f_17), uParam2->f_2, &iVar27, 1))
				{
					MISC::CLEAR_BIT(&iVar0, iVar27);
				}
				func_1089(uParam0, "Comment_StandLow", iVar0, iVar1, 60, &iVar24, &iVar25);
				func_1086(uParam1);
			}
			break;
		case 13:
			if (uParam1->f_1458 != 8 && uParam1->f_1458 != 10)
			{
				func_1086(uParam1);
			}
			else if (func_469(&(uParam0->f_1724)))
			{
				func_379(&(uParam2->f_4), -MISC::GET_RANDOM_FLOAT_IN_RANGE(1.0f, 2.75f));
			}
			else if (func_478(&(uParam2->f_4), 0.0f))
			{
				uParam2->f_10 = 0;
				uParam2->f_11 = 0;
				func_497(uParam1, 14, -1, -1, 0, 1);
			}
			break;
		case 14:
			if (uParam1->f_1458 != 8 && uParam1->f_1458 != 10)
			{
				func_1086(uParam1);
			}
			else if (!func_469(&(uParam0->f_1724)))
			{
				func_1092(uParam0, uParam1, uParam2, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12, &iVar13, &iVar14, &iVar15, &iVar16, &iVar17, &iVar18, &iVar19, &iVar20, &iVar21, &iVar22, &iVar23);
				iVar26 = func_894(uParam2->f_10);
				if (uParam2->f_2 != -1 && uParam2->f_3 != -1)
				{
					if ((uParam2->f_1 == 1 && !uParam2->f_11) && !MISC::IS_BIT_SET(uParam2->f_10, uParam2->f_3))
					{
						if (func_1093(uParam1, uParam2->f_2))
						{
							if (func_1093(uParam1, uParam2->f_3))
							{
								if (func_1091(uParam0, "Result_Agree", uParam2->f_3, uParam2->f_2, 40))
								{
									MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
									uParam2->f_11 = 1;
									func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
									func_495(uParam0, uParam2->f_3, 0, 15);
									func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 2, 1);
									return;
								}
							}
							else if (func_1094(uParam1, uParam2->f_2))
							{
								if (func_1091(uParam0, "Result_CommentWinStreak", uParam2->f_3, uParam2->f_2, 75))
								{
									MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
									uParam2->f_11 = 1;
									func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
									func_495(uParam0, uParam2->f_3, 0, 15);
									func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 3, 1);
									return;
								}
							}
							else if (func_1091(uParam0, "Result_CommentWin", uParam2->f_3, uParam2->f_2, 75))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								uParam2->f_11 = 1;
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 3, 1);
								return;
							}
						}
						if (func_1095(uParam1, uParam2->f_2))
						{
							if (func_1095(uParam1, uParam2->f_3))
							{
								if (func_1091(uParam0, "Result_Agree", uParam2->f_3, uParam2->f_2, 40))
								{
									MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
									uParam2->f_11 = 1;
									func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
									func_495(uParam0, uParam2->f_3, 0, 15);
									func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 2, 1);
									return;
								}
							}
							else if (func_1096(uParam1, uParam2->f_2))
							{
								if (func_1091(uParam0, "Result_CommentLossStreak", uParam2->f_3, uParam2->f_2, 75))
								{
									MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
									uParam2->f_11 = 1;
									func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
									func_495(uParam0, uParam2->f_3, 0, 15);
									func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 4, 1);
									return;
								}
							}
							else if (func_1091(uParam0, "Result_CommentLoss", uParam2->f_3, uParam2->f_2, 75))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								uParam2->f_11 = 1;
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 4, 1);
								return;
							}
						}
					}
					if (uParam2->f_1 == 4)
					{
						if (func_1091(uParam0, "Result_Rebuff", uParam2->f_3, uParam2->f_2, 50))
						{
							MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
							func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
							func_495(uParam0, uParam2->f_3, 0, 15);
							func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 5, 1);
							return;
						}
					}
					if ((uParam2->f_1 == 3 || uParam2->f_1 == 4) && iVar26 == 1)
					{
						if (MISC::IS_BIT_SET(iVar5, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Win_Huge", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar15, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Loss_Huge", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar9, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Win_BrokeStreak", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar19, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Loss_BrokeStreak", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar6, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Win_LongRun", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar16, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Loss_LongRun", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar6, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Win_LongRunBackup", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar16, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Loss_LongRunBackup", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar7, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Win_MedRun", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar17, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Loss_MedRun", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar8, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Win_NewRun", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar18, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Loss_NewRun", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
						if (MISC::IS_BIT_SET(iVar3, uParam2->f_3))
						{
							if (func_1091(uParam0, "Result_Pushed", uParam2->f_3, uParam2->f_2, 100))
							{
								MISC::SET_BIT(&(uParam2->f_10), uParam2->f_3);
								func_595(uParam0, uParam2->f_2, uParam2->f_3, 5);
								func_495(uParam0, uParam2->f_3, 0, 15);
								func_497(uParam1, 14, uParam2->f_3, uParam2->f_2, 1, 1);
								return;
							}
						}
					}
				}
				if (iVar26 == 0 && func_1097(50))
				{
					if ((iVar1 & iVar10) != 0)
					{
						if (func_1089(uParam0, "Result_CommentWinStreak", (iVar0 & iVar14), (iVar1 & iVar10), 100, &iVar24, &iVar25))
						{
							func_595(uParam0, iVar25, iVar24, 5);
							func_495(uParam0, iVar24, 0, 15);
							func_497(uParam1, 14, iVar24, iVar25, 3, 1);
							MISC::SET_BIT(&(uParam2->f_10), iVar24);
							uParam2->f_11 = 1;
							return;
						}
					}
					if ((iVar1 & iVar20) != 0)
					{
						if (func_1089(uParam0, "Result_CommentLossStreak", (iVar0 & iVar4), (iVar1 & iVar20), 100, &iVar24, &iVar25))
						{
							func_595(uParam0, iVar25, iVar24, 5);
							func_495(uParam0, iVar24, 0, 15);
							func_497(uParam1, 14, iVar24, iVar25, 4, 1);
							MISC::SET_BIT(&(uParam2->f_10), iVar24);
							uParam2->f_11 = 1;
							return;
						}
					}
					if ((iVar1 & iVar4) != 0 && ((iVar1 & iVar14) == 0 || func_1097(50)))
					{
						if (func_1089(uParam0, "Result_CommentWin", (iVar0 & iVar14), (iVar1 & iVar4), 100, &iVar24, &iVar25))
						{
							func_595(uParam0, iVar25, iVar24, 5);
							func_495(uParam0, iVar24, 0, 15);
							func_497(uParam1, 14, iVar24, iVar25, 3, 1);
							MISC::SET_BIT(&(uParam2->f_10), iVar24);
							uParam2->f_11 = 1;
							return;
						}
					}
					if ((iVar1 & iVar14) != 0)
					{
						if (func_1089(uParam0, "Result_CommentLoss", (iVar0 & iVar4), (iVar1 & iVar14), 100, &iVar24, &iVar25))
						{
							func_595(uParam0, iVar25, iVar24, 5);
							func_495(uParam0, iVar24, 0, 15);
							func_497(uParam1, 14, iVar24, iVar25, 4, 1);
							MISC::SET_BIT(&(uParam2->f_10), iVar24);
							uParam2->f_11 = 1;
							return;
						}
					}
				}
				if (iVar26 == 0 || (iVar26 == 1 && (uParam2->f_1 != 1 || func_1097(50))))
				{
					if (func_1089(uParam0, "Result_Win_Huge", ((iVar0 & iVar2) & iVar5), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_Huge", ((iVar0 & iVar2) & iVar15), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Win_BrokeStreak", ((iVar0 & iVar2) & iVar9), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_BrokeStreak", ((iVar0 & iVar2) & iVar19), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Win_CloseAgain", ((iVar0 & iVar2) & iVar12), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_CloseAgain", ((iVar0 & iVar2) & iVar22), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Win_Close", ((iVar0 & iVar2) & iVar11), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_Close", ((iVar0 & iVar2) & iVar21), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Win_LongRun", ((iVar0 & iVar2) & iVar6), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_LongRun", ((iVar0 & iVar2) & iVar16), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Win_LongRunBackup", ((iVar0 & iVar2) & iVar6), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_LongRunBackup", ((iVar0 & iVar2) & iVar16), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Win_MedRun", ((iVar0 & iVar2) & iVar7 | iVar6), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_MedRun", ((iVar0 & iVar2) & iVar17 | iVar16), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Win_NewRun", ((iVar0 & iVar2) & iVar8), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (func_1089(uParam0, "Result_Loss_NewRun", ((iVar0 & iVar2) & iVar18), iVar1, 100, &iVar24, &iVar25))
					{
						func_595(uParam0, iVar25, iVar24, 5);
						func_495(uParam0, iVar24, 0, 15);
						func_497(uParam1, 14, iVar24, iVar25, 1, 1);
						MISC::SET_BIT(&(uParam2->f_10), iVar24);
						return;
					}
					if (iVar26 == 0)
					{
						if (func_1089(uParam0, "Result_Pushed", ((iVar0 & iVar2) & iVar3), 0, 100, &iVar24, &iVar25))
						{
							func_595(uParam0, iVar25, iVar24, 5);
							func_495(uParam0, iVar24, 0, 15);
							func_497(uParam1, 14, iVar24, iVar25, 1, 1);
							MISC::SET_BIT(&(uParam2->f_10), iVar24);
							return;
						}
					}
				}
				func_497(uParam1, 15, -1, -1, 0, 1);
				func_187(&(uParam2->f_4));
			}
			break;
		case 15:
			func_379(&(uParam2->f_7), -MISC::GET_RANDOM_FLOAT_IN_RANGE(5.0f, 12.0f));
			func_379(&(uParam2->f_4), -MISC::GET_RANDOM_FLOAT_IN_RANGE(2.0f, 4.5f));
			func_497(uParam1, 16, -1, -1, 0, 0);
			break;
		case 16:
			if (uParam1->f_1458 != 8 && uParam1->f_1458 != 10)
			{
				func_1086(uParam1);
			}
			else if (func_469(&(uParam0->f_1724)))
			{
				func_379(&(uParam2->f_4), -MISC::GET_RANDOM_FLOAT_IN_RANGE(2.0f, 4.5f));
			}
			else if (func_1098(&(uParam2->f_7), 0.0f))
			{
				iVar0 = func_1088(&(uParam0->f_1724), -1, -1, -1, 1);
				if (func_1089(uParam0, "Result_Chat", iVar0, 0, 100, &iVar24, &iVar25))
				{
					func_495(uParam0, iVar24, 0, 15);
				}
			}
			else if (func_478(&(uParam2->f_4), 0.0f))
			{
				iVar0 = func_1088(&(uParam0->f_1724), -1, -1, -1, 1);
				if (func_1089(uParam0, "Result_Filler", iVar0, 0, 25, &iVar24, &iVar25))
				{
					func_495(uParam0, iVar24, 1, 15);
				}
				func_379(&(uParam2->f_4), -MISC::GET_RANDOM_FLOAT_IN_RANGE(2.0f, 4.5f));
			}
			break;
	}
}

void func_755(var uParam0, bool bParam1)
{
	uParam0->f_57 = bParam1;
	func_380(uParam0);
}

void func_756(var uParam0, int iParam1)
{
	if (uParam0->f_1704 < iParam1)
	{
		uParam0->f_1704 = iParam1;
	}
}

void func_757(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_13 = 0;
	uParam0->f_12 = 0;
}

bool func_758(var uParam0)
{
	return uParam0->f_2.f_23 > 0;
}

int func_759(var uParam0, int iParam1)
{
	return uParam0->f_27[iParam1 /*60*/].f_7;
}

bool func_760(var uParam0)
{
	return uParam0->f_2.f_23 == 1;
}

bool func_761(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 >= 0 && iParam1 < 4)
	{
		*uParam2 = uParam0->f_27[iParam1 /*60*/].f_3;
		if (*uParam2 >= 0 && *uParam2 < uParam0->f_27[iParam1 /*60*/].f_59)
		{
			return true;
		}
	}
	return false;
}

bool func_762(var uParam0, var uParam1)
{
	if (*uParam1 != *uParam0)
	{
		return true;
	}
	else if (func_1099(*uParam1))
	{
		if (uParam1->f_27[*uParam1 /*60*/].f_3 != uParam0->f_27[*uParam1 /*60*/].f_3)
		{
			return true;
		}
	}
	return false;
}

bool func_763(var uParam0)
{
	return uParam0->f_2.f_23 > 1;
}

int func_764(var uParam0)
{
	return uParam0->f_1;
}

void func_765(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_751[iParam1])
	{
	}
	if (iParam2 == 0)
	{
	}
	uParam0->f_674[iParam1 /*19*/] = 2;
	strcpy_s(&(uParam0->f_674[iParam1 /*19*/].f_1), 128, func_1019(iParam2));
	uParam0->f_674[iParam1 /*19*/].f_18 = iParam2;
	uParam0->f_751[iParam1] = 1;
}

void func_766(var uParam0, int iParam1)
{
	if (uParam0->f_751[iParam1])
	{
	}
	uParam0->f_674[iParam1 /*19*/] = 0;
	uParam0->f_751[iParam1] = 1;
}

void func_767(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam1, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (iVar1 < func_759(uParam1, iVar0))
				{
					if (uParam0->f_568[iVar0 /*7*/][iVar1] < func_492(uParam1, iVar0, iVar1))
					{
						uParam0->f_568[iVar0 /*7*/][iVar1] = func_492(uParam1, iVar0, iVar1);
					}
				}
				iVar1++;
			}
			if (uParam0->f_568[iVar0 /*7*/].f_6 < func_549(uParam1, iVar0))
			{
				uParam0->f_568[iVar0 /*7*/].f_6 = func_549(uParam1, iVar0);
			}
		}
		iVar0++;
	}
}

void func_768(var uParam0, int iParam1)
{
	if (!uParam0->f_751[iParam1])
	{
		return;
	}
	uParam0->f_597[iParam1 /*19*/] = { uParam0->f_674[iParam1 /*19*/] /*19*/ };
	uParam0->f_751[iParam1] = 0;
}

int func_769(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
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
	func_1100(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_770()
{
	if (func_1101())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_771(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1102((Global_40.f_4283.f_325 + iParam0));
}

void func_772(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN" /* GXTEntry: "Gang Share ~1$~" */;
	}
	if (func_770())
	{
		func_769(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_769(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

struct<2> /*16*/ func_773(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

void func_774(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_775(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_776(int iParam0)
{
	return func_1103(iParam0, 16, 1);
}

void func_777(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_1104(iParam0))
		{
			return;
		}
	}
	func_1105(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_778(var uParam0, bool bParam1)
{
	if (bParam1 || !func_477(uParam0))
	{
		func_187(uParam0);
	}
}

void func_779(int iParam0, bool bParam1)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1106(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_780(iParam0, 1, 0);
		}
	}
	func_780(iParam0, 16, bParam1);
}

void func_780(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	func_1107(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_781(int iParam0)
{
	func_780(iParam0, 8, 0);
}

void func_782(int iParam0)
{
	func_777(iParam0, 36, 1);
}

void func_783(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_1104(iParam0))
		{
			return;
		}
	}
	func_1105(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_784(int iParam0, int iParam1)
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
	if (func_1108(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_1108(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_1108(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_1108(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_1108(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_1108(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_1108(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_1108(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_785(int iParam0, bool bParam1)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_1109(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_786(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_1104(iParam0))
		{
			return false;
		}
	}
	func_1105(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_787(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_775(iParam0))
	{
		iVar1 = func_1110(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179 /*PCF_0x605C7288*/, true);
			func_1111(iParam0);
		}
	}
	if (func_786(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_1110(iParam0), 137 /*PCF_0xE18960DE*/, true);
	}
}

void func_788(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_783(iParam0, 50, 1);
		func_783(iParam0, 48, 1);
		func_783(iParam0, 49, 1);
		func_783(iParam0, 51, 1);
		func_783(iParam0, 52, 1);
		func_783(iParam0, 54, 1);
		func_783(iParam0, 55, 1);
	}
	else
	{
		func_777(iParam0, 50, 1);
		func_777(iParam0, 48, 1);
		func_777(iParam0, 49, 1);
		func_777(iParam0, 51, 1);
		if (bParam3)
		{
			func_777(iParam0, 54, 1);
		}
		else
		{
			func_783(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_777(iParam0, 52, 1);
			if (bParam3)
			{
				func_777(iParam0, 55, 1);
			}
		}
		else
		{
			func_783(iParam0, 52, 1);
			if (!bParam3)
			{
				func_783(iParam0, 55, 1);
			}
		}
	}
}

void func_789(int iParam0, bool bParam1)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_1110(iParam0), 204 /*PCF_0x435F091E*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_1110(iParam0), 204 /*PCF_0x435F091E*/, false);
	}
}

void func_790(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_775(iParam0))
	{
		return;
	}
	if (func_776(iParam0))
	{
		if (!func_325(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_786(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_785(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_1110(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_1112(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_777(iParam0, 2, 1);
	}
	else
	{
		func_1113(iParam0);
		func_777(iParam0, 1, 1);
	}
}

void func_791(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_775(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= (Global_40.f_4942[iParam0 /*60*/] & iParam1);
}

int func_792(int iParam0)
{
	if (!func_775(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_793(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_1104(iParam1))
	{
		return;
	}
	iVar0 = func_792(iParam1);
	if (func_1114(iParam1))
	{
		if (!func_1115(iParam1))
		{
			return;
		}
	}
	func_783(iParam1, 39, 1);
	func_1116(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_1116(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_1116(iParam1, (1 << 9), 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_777(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1117(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_794(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_946[iParam1 /*46*/].f_2 = iParam2;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_946[iParam1 /*46*/]))
	{
		TASK::_0x615DC4A82E90BB48(uParam0->f_946[iParam1 /*46*/], uParam0->f_1177[iParam2], joaat("DEFAULT") /* GXTEntry: "_" */);
	}
}

void func_795(var uParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<34> /*272*/ sVar2;
	char cVar40[64];

	iVar0 = uParam0->f_946[iParam1 /*46*/].f_2;
	iVar1 = uParam0->f_946[iParam1 /*46*/];
	iParam3 |= 16 | 4 | 256;
	if (ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	sVar2.f_4 = 1065353216;
	sVar2.f_5 = 1065353216;
	sVar2.f_9 = 1065353216;
	sVar2.f_10 = 1065353216;
	sVar2.f_14 = 1065353216;
	sVar2.f_15 = 1065353216;
	sVar2.f_17 = 1040187392;
	sVar2.f_18 = 1040187392;
	sVar2.f_19 = -1;
	sVar2.f_26 = -1082130432;
	strcpy_s(&cVar40, 64, "clipset@");
	strcat_s(&cVar40, 64, &(uParam0->f_1152[iVar0 /*8*/]));
	sVar2.f_0 = 1;
	sVar2.f_1 = func_1118(cVar40);
	sVar2.f_2 = sParam2;
	sVar2.f_3 = iParam6;
	sVar2.f_20 = iParam3;
	sVar2.f_22 = 1;
	sVar2.f_4 = 1.0f;
	sVar2.f_5 = 1.0f;
	sVar2.f_10 = 0.0f;
	sVar2.f_15 = 0.0f;
	sVar2.f_23 = 1;
	sVar2.f_19 = -1;
	sVar2.f_16 = 0;
	sVar2.f_17 = fParam4;
	sVar2.f_18 = iParam5;
	sVar2.f_33 = 1;
	sVar2.f_27 = { uParam0->f_1207[iParam1 /*3*/] /*3*/ };
	sVar2.f_30 = { uParam0->f_1220[iParam1 /*3*/] /*3*/ };
	TASK::TASK_SCRIPTED_ANIMATION(iVar1, &sVar2);
}

void func_796(var uParam0)
{
	if (uParam0->f_207)
	{
	}
	else if (!uParam0->f_197)
	{
		func_175(1);
	}
	uParam0->f_201 = 0;
	uParam0->f_202 = 0;
	func_214(&(uParam0->f_203));
}

void func_797(var uParam0)
{
	if (func_798(uParam0))
	{
		func_799(uParam0, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
		CAM::DESTROY_CAM(uParam0->f_51, false);
	}
}

bool func_798(var uParam0)
{
	if (uParam0->f_44 != -1 || uParam0->f_45 != -1)
	{
		return true;
	}
	return false;
}

void func_799(var uParam0, int iParam1)
{
	if (uParam0->f_42 == 0)
	{
		return;
	}
	if (uParam0->f_45 != -1)
	{
		func_1119(&(uParam0->f_52));
	}
	if (uParam0->f_44 != -1)
	{
		if (iParam1 > 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam1, true, false, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		}
	}
	uParam0->f_44 = -1;
	uParam0->f_45 = -1;
	uParam0->f_43 = -1;
}

void func_800(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		func_1120(uParam0, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_195 = 0;
}

void func_801(var uParam0, int iParam1)
{
	func_1121(uParam0, iParam1, "");
	func_1122(uParam0, iParam1, "");
}

bool func_802(var uParam0, struct<2> /*16*/ sParam1, int iParam3)
{
	if (func_243(iParam3, sParam1, uParam0->f_938, 0))
	{
		return true;
	}
	*iParam3 = uParam0->f_940;
	return false;
}

bool func_803(int iParam0, int iParam1, var uParam2)
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

char* func_804()
{
	return "unnamed";
}

bool func_805(int iParam0)
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

bool func_806(int iParam0)
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

bool func_807(int iParam0)
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
	fVar13 = func_1123(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0.0f, 0.0f, 0.0f) /*3*/ };
	fVar13 = func_1123(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

int func_808(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_27[iParam1 /*60*/] != -1)
	{
		return 0;
	}
	uParam0->f_27[iParam1 /*60*/] = iParam1;
	uParam0->f_27[iParam1 /*60*/].f_1 = iParam2;
	uParam0->f_27[iParam1 /*60*/].f_2 = -1;
	uParam0->f_27[iParam1 /*60*/].f_3 = -1;
	uParam0->f_27[iParam1 /*60*/].f_7 = 0;
	uParam0->f_27[iParam1 /*60*/].f_59 = 0;
	return 1;
}

int func_809(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_822(uParam0, iParam1))
	{
	}
	else if (iParam2 == 0)
	{
	}
	else
	{
		uParam0->f_543[iParam1] = iParam2;
		if (bParam3)
		{
			if (uParam0->f_582 != -1)
			{
			}
			uParam0->f_582 = iParam1;
		}
		if (uParam0->f_582 == iParam1)
		{
			uParam0->f_579 = 0;
		}
		else
		{
			uParam0->f_561[iParam1 /*2*/] = 0;
		}
		if (uParam0->f_582 == iParam1)
		{
			func_1124(uParam0);
		}
		else
		{
			func_1125(uParam0, iParam1);
		}
		return 1;
	}
	return 0;
}

void func_810(var uParam0)
{
	int iVar0;

	if (uParam0->f_23 > 0)
	{
		iVar0 = 0;
		while (iVar0 < (uParam0->f_23 - 1))
		{
			*(uParam0[iVar0 /*2*/]) = { *(uParam0[iVar0 + 1 /*2*/]) /*2*/ };
			iVar0++;
		}
		uParam0->f_23--;
		uParam0->f_24 = func_645(uParam0, -1);
	}
}

void func_811(int iParam0, int iParam1)
{
	if (Global_1058888.f_42714[iParam0 /*12*/].f_11 != iParam1)
	{
		func_840(iParam0);
		Global_1058888.f_42714[iParam0 /*12*/].f_11 = iParam1;
		func_841(iParam0);
	}
}

void func_812(int iParam0, int iParam1)
{
	if (Global_1058888.f_42714[iParam0 /*12*/].f_8 != iParam1)
	{
		Global_1058888.f_42714[iParam0 /*12*/].f_8 = iParam1;
		if (HUD::IS_MP_GAMER_TAG_ACTIVE(Global_1058888.f_42714[iParam0 /*12*/].f_2))
		{
			HUD::_SET_MP_GAMER_TAG_TYPE(Global_1058888.f_42714[iParam0 /*12*/].f_2, iParam1);
		}
		func_841(iParam0);
	}
}

int func_813(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 5;
		case 5:
			return 6;
		case 6:
			return 5;
		case 7:
			return 2;
		case 8:
			return 1;
		case 9:
			return 2;
		case 10:
			return 4;
		case 11:
			return 3;
		case 12:
			return 6;
		case 14:
			return 6;
		case 15:
			return 6;
		case 16:
			return 2;
		case 17:
			return 6;
		case 18:
			return 0;
		case 26:
			return 6;
		case 28:
			return 5;
		case 29:
			return 2;
		case 34:
			return 5;
		case 35:
			return 1;
		case 36:
			return 4;
		case 37:
			return 7;
		case 38:
			return 5;
		case 39:
			return 1;
		case 41:
			return 1;
		case 45:
			return 0;
		case 46:
			return 5;
		case 47:
			return 6;
		case 48:
			return 1;
		case 50:
			return 7;
		case 51:
			return 6;
		case 52:
			return 4;
		case 53:
			return 7;
		case 56:
			return 6;
		case 58:
			return 4;
		case 61:
			return 6;
		case 63:
			return 3;
		case 64:
			return 6;
		case 66:
			return 6;
		case 67:
			return 7;
		case 68:
			return 3;
		case 71:
			return 7;
		case 73:
			return 6;
		case 75:
			return 6;
		case 76:
			return 7;
		default:
			break;
	}
	return 8;
}

char* func_814(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_VOFX_MALE_AVOID_01";
		case 1:
			return "MINIGAME_VOFX_MALE_AVOID_02";
		case 2:
			return "MINIGAME_VOFX_MALE_AVOID_03";
		case 3:
			return "MINIGAME_VOFX_MALE_AVOID_04";
		case 4:
			return "MINIGAME_VOFX_MALE_AVOID_05";
		case 5:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_01";
		case 6:
			return "MINIGAME_VOFX_MALE_AGGRESSIVE_03";
		case 7:
			return "MINIGAME_VOFX_MALE_TIMID_01";
		case 8:
			return "unknown";
		default:
			break;
	}
	return "unknown";
}

void func_815(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_946[iParam1 /*46*/].f_6 = iParam2;
	uParam0->f_946[iParam1 /*46*/].f_7 = 0;
	func_187(&(uParam0->f_946[iParam1 /*46*/].f_8));
	func_187(&(uParam0->f_946[iParam1 /*46*/].f_11));
	uParam0->f_946[iParam1 /*46*/].f_14 = 0;
	uParam0->f_946[iParam1 /*46*/].f_15 = 0;
	uParam0->f_946[iParam1 /*46*/].f_16 = 0;
	uParam0->f_946[iParam1 /*46*/].f_36 = 0;
	uParam0->f_946[iParam1 /*46*/].f_37 = 0;
	uParam0->f_946[iParam1 /*46*/].f_38 = 0;
	uParam0->f_946[iParam1 /*46*/].f_39 = 0;
}

void func_816(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	struct<34> /*272*/ sVar2;

	iVar0 = uParam0->f_946[iParam1 /*46*/].f_2;
	iVar1 = uParam0->f_946[iParam1 /*46*/];
	sVar2.f_6 = -1082130432;
	sVar2.f_9 = -1082130432;
	sVar2.f_0 = uParam0->f_1177[iVar0];
	sVar2.f_1 = joaat("DEFAULT"); /* GXTEntry: "_" */
	sVar2.f_29 = sParam2;
	sVar2.f_33 = "CurrentPhase";
	sVar2.f_32 = "CurrentClip";
	if (uParam0->f_946[iParam1 /*46*/].f_43)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, uParam0->f_1207[iParam1 /*3*/] - Vector(1.0f, 0.0f, 0.0f), uParam0->f_1220[iParam1 /*3*/].f_2, true, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
	}
	func_355(uParam0, iParam1, 1);
	if (!func_1083(uParam0, iParam1))
	{
		func_1033(uParam0, iParam1, 0);
	}
	TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iVar1, "TaskMoveBlackjackPlayer", &sVar2, uParam0->f_1207[iParam1 /*3*/], uParam0->f_1220[iParam1 /*3*/], 2, fParam3, 0, 0, 1152, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar1, false, false);
}

void func_817(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_946[iParam1 /*46*/].f_1 = iParam2;
}

void func_818(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_946[iParam1 /*46*/].f_7 = iParam2;
	uParam0->f_946[iParam1 /*46*/].f_39 = 0;
	func_187(&(uParam0->f_946[iParam1 /*46*/].f_11));
}

bool func_819(int iParam0, var uParam1, int iParam2)
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
			return true;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400.0f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f /*3*/ };
			uParam1->f_8 = 80.0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300.0f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f /*3*/ };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2.0f;
			return true;
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
			return true;
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
				return true;
			}
			return false;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 1.0f;
			return true;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200.0f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f /*3*/ };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return true;
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
				return true;
			}
			return false;
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
				return true;
			}
			return false;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100.0f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return true;
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
				return true;
			}
			return false;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150.0f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f /*3*/ };
			uParam1->f_8 = -45.0f;
			uParam1->f_9 = 2.5f;
			return true;
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
				return true;
			}
			return false;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f /*3*/ };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2.0f;
			return true;
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
				return true;
			}
			return false;
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
				return true;
			}
			return false;
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
				return true;
			}
			return false;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f /*3*/ };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return true;
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
				return true;
			}
			return false;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f /*3*/ };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return true;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f /*3*/ };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return true;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f /*3*/ };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return true;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147.0f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 1.5f;
			return true;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500.0f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f /*3*/ };
			uParam1->f_8 = 60.0f;
			uParam1->f_9 = 2.5f;
			return true;
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
				return true;
			}
			return false;
		case 25:
			return false;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100.0f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500.0f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return true;
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
				return true;
			}
			return false;
		case 29:
			return false;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250.0f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f /*3*/ };
			uParam1->f_8 = -63.0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200.0f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f /*3*/ };
			uParam1->f_8 = 90.0f;
			uParam1->f_9 = 2.5f;
			return true;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250.0f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f /*3*/ };
			uParam1->f_8 = 135.0f;
			uParam1->f_9 = 2.5f;
			return true;
		default:
			break;
	}
	return false;
}

int func_820(int iParam0, int iParam1)
{
	return func_1127(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_1126(iParam1)));
}

int func_821(int iParam0)
{
	if (!func_172(iParam0))
	{
		return -1;
	}
	return (func_1128(iParam0) & 65535);
}

bool func_822(var uParam0, int iParam1)
{
	return uParam0->f_543[iParam1] == 0;
}

int func_823(int iParam0)
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
		case 4:
			return 4;
		default:
			break;
	}
	return 5;
}

void func_824(var uParam0, int iParam1)
{
	uParam0->f_1239.f_6 = iParam1;
	uParam0->f_1239.f_7 = 0;
	func_187(&(uParam0->f_1239.f_8));
	func_187(&(uParam0->f_1239.f_11));
	uParam0->f_1239.f_14 = 0;
	uParam0->f_1239.f_15 = 0;
	uParam0->f_1239.f_16 = 0;
	uParam0->f_1239.f_17 = 0;
	uParam0->f_1239.f_18 = 0;
	uParam0->f_1239.f_19 = 0;
	uParam0->f_1239.f_20 = 0;
	uParam0->f_1239.f_26 = 0;
}

void func_825(var uParam0, int iParam1)
{
	uParam0->f_1239.f_1 = iParam1;
}

void func_826(var uParam0, int iParam1)
{
	uParam0->f_1239.f_2 = iParam1;
}

void func_827(var uParam0, char* sParam1, float fParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<34> /*272*/ sVar2;

	iVar0 = uParam0->f_1239.f_3;
	iVar1 = uParam0->f_1239;
	sVar2.f_6 = -1082130432;
	sVar2.f_9 = -1082130432;
	sVar2.f_0 = uParam0->f_1351[iVar0];
	sVar2.f_1 = joaat("DEFAULT"); /* GXTEntry: "_" */
	sVar2.f_29 = sParam1;
	sVar2.f_33 = "CurrentPhase";
	sVar2.f_32 = "CurrentClip";
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		sVar2.f_4 = sParam3;
		sVar2.f_5 = iParam4;
	}
	if (uParam0->f_1239.f_21)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar1, uParam0->f_1363 - Vector(1.0f, 0.0f, 0.0f), uParam0->f_1366.f_2, true, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
	}
	func_362(uParam0, 1);
	TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(iVar1, "TaskMoveBlackjackDealer", &sVar2, uParam0->f_1363, uParam0->f_1366, 2, fParam2, 0, 0, 1152, 0);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar1, false, false);
}

int func_828(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_930))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_930));
	}
	uParam0->f_930 = 0;
	if (!func_1129(uParam0, &vVar0, &vVar3, 1))
	{
		return 0;
	}
	iVar6 = OBJECT::CREATE_OBJECT(uParam0->f_942, vVar0, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar6, vVar3, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar6, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	uParam0->f_930 = iVar6;
	return 1;
}

void func_829(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_930))
	{
	}
	else if (PED::IS_PED_INJURED(uParam0->f_1239))
	{
	}
	else
	{
		if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(uParam0->f_930, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(uParam0->f_930, 2, true);
		}
		if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam0->f_930))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_930, uParam0->f_1239, PED::GET_PED_BONE_INDEX(uParam0->f_1239, 37709), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, false, false, false, false, 2, true, false, false);
		}
	}
}

int func_830(var uParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_931))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_931));
	}
	uParam0->f_931 = 0;
	if (!func_1130(uParam0, &vVar0, &vVar3, 1))
	{
		return 0;
	}
	iVar6 = OBJECT::CREATE_OBJECT(uParam0->f_941, vVar0, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar6, vVar3, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar6, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar6, true);
	uParam0->f_931 = iVar6;
	return 1;
}

int func_831(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_931.f_1[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_931.f_1[iParam1]));
		uParam0->f_931.f_1[iParam1] = 0;
	}
	iVar0 = uParam0->f_939;
	if (!func_1131(uParam0, iParam1, &vVar1, &vVar4, 1))
	{
		return 0;
	}
	iVar7 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar7, vVar1, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar7, vVar4, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar7, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	func_1132(iVar7, iParam3, iParam4);
	func_1133(iVar7, iParam2);
	uParam0->f_931.f_1[iParam1] = iVar7;
	return 1;
}

int func_832(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_889.f_23[iParam1]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_889.f_23[iParam1]));
	}
	uParam0->f_889.f_23[iParam1] = 0;
	if (!func_802(uParam0, uParam0->f_889[iParam1 /*2*/], &iVar0))
	{
		iVar0 = uParam0->f_940;
		if (bParam4)
		{
		}
	}
	if (!func_1134(uParam0, iParam1, bParam2, bParam3, &vVar1, &vVar4, 1))
	{
		return 0;
	}
	iVar7 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar7, vVar1, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar7, vVar4, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar7, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	if (iParam1 == 0)
	{
		uParam0->f_945 = bParam3;
	}
	uParam0->f_889.f_23[iParam1] = iVar7;
	return 1;
}

void func_833(var uParam0, int iParam1)
{
	uParam0->f_889.f_35 = iParam1;
}

int func_834(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;

	if (bParam6)
	{
		iVar1 = uParam0->f_112[iParam1 /*194*/].f_30.f_5[iParam2];
		iVar2 = uParam0->f_112[iParam1 /*194*/].f_30.f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return uParam0->f_112[iParam1 /*194*/].f_30[iParam2];
		}
		func_1135(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_30[iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_30[iParam2]));
	}
	uParam0->f_112[iParam1 /*194*/].f_30[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_5[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_10[iParam2] = 0;
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_939;
		if (!func_1136(uParam0, iParam1, iParam2, bParam8, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		func_1132(iVar3, iParam5, 0);
		func_1133(iVar3, iParam3);
	}
	uParam0->f_112[iParam1 /*194*/].f_30[iParam2] = iVar3;
	uParam0->f_112[iParam1 /*194*/].f_30.f_5[iParam2] = iParam3;
	uParam0->f_112[iParam1 /*194*/].f_30.f_10[iParam2] = iParam4;
	return iVar3;
}

int func_835(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;

	if (bParam7)
	{
		iVar1 = uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_5[iParam3];
		iVar2 = uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_10[iParam3];
		if (iParam8 != 0)
		{
			iVar0 = iParam8;
		}
		else if (iVar2 > 0 && iVar1 != iParam4)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam5)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam5)
		{
			iVar0 = 2;
		}
		else
		{
			return uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3];
		}
		func_1137(uParam0, iParam1, iParam2, iParam3, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3]));
	}
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_5[iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_10[iParam3] = 0;
	iVar3 = 0;
	if (iParam6 > 0)
	{
		iVar4 = uParam0->f_939;
		if (!func_1138(uParam0, iParam1, iParam2, iParam3, bParam9, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		if (bParam7)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		func_1132(iVar3, iParam6, 0);
		func_1133(iVar3, iParam4);
	}
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3] = iVar3;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_5[iParam3] = iParam4;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_10[iParam3] = iParam5;
	return iVar3;
}

int func_836(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3]));
	}
	uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3] = 0;
	if (!func_802(uParam0, uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/], &iVar0))
	{
		iVar0 = uParam0->f_940;
		if (bParam5)
		{
		}
	}
	if (!func_1139(uParam0, iParam1, iParam2, iParam3, bParam4, &vVar1, &vVar4, 1))
	{
		return 0;
	}
	iVar7 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return 0;
	}
	ENTITY::SET_ENTITY_COORDS(iVar7, vVar1, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iVar7, vVar4, 2, true);
	ENTITY::SET_ENTITY_COLLISION(iVar7, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iVar7, true);
	uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3] = iVar7;
	return 1;
}

void func_837(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_35 = iParam3;
}

bool func_838(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_839(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
		HUD::_0x53CE46C01A089DA1(iVar0, true);
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
	func_1140(iParam0, 1);
	func_1141(iParam0, 1);
	func_1142(iParam0, 128);
}

void func_840(int iParam0)
{
	var uVar0;
	var uVar1;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(Global_1058888.f_42714[iParam0 /*12*/].f_2))
	{
		Global_1058888.f_42714[iParam0 /*12*/].f_2 = uVar0;
		return;
	}
	func_1143(&(Global_1058888.f_42714[iParam0 /*12*/].f_10));
	func_1144(iParam0, joaat("GENERIC_PLAYER"), 1);
	func_1145(iParam0, 0);
	HUD::REMOVE_MP_GAMER_TAG(&(Global_1058888.f_42714[iParam0 /*12*/].f_2));
	Global_1058888.f_42714[iParam0 /*12*/].f_2 = uVar1;
	Global_1058888.f_42714[iParam0 /*12*/].f_1 = 0;
	Global_1058888.f_42714[iParam0 /*12*/] = 0;
}

void func_841(int iParam0)
{
	if (!func_1146(iParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1058888.f_42287.f_164), iParam0);
	}
}

bool func_842(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_843(int iParam0, int iParam1)
{
	if (!func_844(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] & iParam1) != 0;
}

bool func_844(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

float func_845()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_846(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_847(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_848(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_96(iParam0))
	{
		return;
	}
	iVar0 = func_259(iParam0);
	func_1140(iVar0, bParam1);
}

void func_849(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_96(iParam0))
	{
		return;
	}
	iVar0 = func_259(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

int func_850(int iParam0)
{
	if (!func_172(iParam0))
	{
		return -1;
	}
	return func_388(iParam0);
}

int func_851(int iParam0)
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

bool func_852()
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

bool func_853(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_854(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_855(int iParam0)
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

int func_856(int iParam0)
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

bool func_857(int iParam0, bool bParam1)
{
	switch (func_850(iParam0))
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

void func_858(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1147(iParam0);
	}
	else
	{
		func_1148(iParam0, iParam1);
	}
	func_1149();
}

bool func_859(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1150(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_860(int iParam0)
{
	if (!func_172(iParam0))
	{
		return false;
	}
	switch (func_173(iParam0))
	{
		case 1:
			switch (func_400(iParam0))
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
			switch (func_400(iParam0))
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

void func_861(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1151(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_1152(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1154(func_1153(iParam0), 6);
}

void func_862(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_1151(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_1152(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1155(func_1153(iParam0), 6);
}

int func_863(int iParam0)
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

int func_864(int iParam0)
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
	func_1156(iParam0, Global_1898164.f_162);
	return 1;
}

int func_865(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_866(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

bool func_867(var uParam0, char* sParam1)
{
	if (!uParam0->f_20)
	{
		if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, sParam1))
		{
			uParam0->f_20 = 1;
		}
	}
	return (uParam0->f_20 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0));
}

void func_868(var uParam0, int iParam1)
{
	if (!uParam0->f_1239.f_18)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1239, iParam1))
		{
			func_873(uParam0);
		}
	}
}

bool func_869(var uParam0, bool bParam1)
{
	if (uParam0->f_1239.f_19)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1239, joaat("INTERRUPTIBLE")))
		{
			if ((!bParam1 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1239)) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_1239))
			{
				return true;
			}
		}
	}
	return false;
}

void func_870(var uParam0, int iParam1)
{
	uParam0->f_1239.f_7 = iParam1;
	uParam0->f_1239.f_20 = 0;
	func_187(&(uParam0->f_1239.f_11));
}

bool func_871(var uParam0)
{
	if (!func_903(uParam0, 8))
	{
		func_1157(uParam0);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1158(uParam0);
		return true;
	}
	return false;
}

bool func_872(var uParam0, float fParam1)
{
	return (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_29) || (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_1239.f_29, false) && ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_1239.f_29) >= fParam1));
}

void func_873(var uParam0)
{
	if (!uParam0->f_1239.f_18)
	{
		uParam0->f_1239.f_18 = 1;
	}
}

int func_874(var uParam0)
{
	return uParam0->f_930;
}

void func_875(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<31> /*248*/ sVar3;

	iVar0 = uParam0->f_1239.f_3;
	iVar1 = uParam0->f_1239;
	if (MISC::IS_BIT_SET(iParam3, iVar0))
	{
		return;
	}
	fVar2 = 0.0f;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
	{
		fVar2 = TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(iVar1, "CurrentPhase");
	}
	if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iParam2, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(iParam2, 2, true);
	}
	sVar3.f_4 = 1065353216;
	sVar3.f_5 = 1065353216;
	sVar3.f_9 = 1065353216;
	sVar3.f_10 = 1065353216;
	sVar3.f_14 = 1065353216;
	sVar3.f_15 = 1065353216;
	sVar3.f_17 = 1040187392;
	sVar3.f_18 = 1040187392;
	sVar3.f_19 = -1;
	sVar3.f_26 = -1082130432;
	sVar3.f_0 = 1;
	sVar3.f_1 = func_1118(uParam0->f_1310[iVar0 /*8*/]);
	sVar3.f_2 = sParam1;
	sVar3.f_3 = fVar2;
	sVar3.f_22 = 1;
	sVar3.f_20 = iParam4 | 4 | 2;
	if (bParam5)
	{
		sVar3.f_20 |= 16 | 256;
	}
	sVar3.f_4 = 1.0f;
	sVar3.f_5 = 1.0f;
	sVar3.f_10 = 0.0f;
	sVar3.f_15 = 0.0f;
	sVar3.f_23 = 0;
	sVar3.f_19 = -1;
	sVar3.f_16 = 0;
	sVar3.f_17 = 0.0f;
	sVar3.f_18 = 0.0f;
	sVar3.f_27 = { *uParam0 /*3*/ };
	sVar3.f_30 = { 0.0f, 0.0f, uParam0->f_3 /*3*/ };
	TASK::PLAY_ENTITY_SCRIPTED_ANIM(iParam2, &sVar3);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam2, true);
}

bool func_876(var uParam0, int iParam1, bool bParam2)
{
	if (!func_903(uParam0, 1))
	{
		func_972(uParam0, iParam1, bParam2);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1159(uParam0, iParam1);
		return true;
	}
	return false;
}

int func_877(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3];
}

void func_878(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_1239.f_17, iParam1))
	{
		MISC::SET_BIT(&(uParam0->f_1239.f_17), iParam1);
		if (uParam0->f_1239.f_26)
		{
			MISC::SET_BIT(&(uParam0->f_1239.f_24), iParam1);
		}
	}
}

int func_879(var uParam0, int iParam1)
{
	return uParam0->f_889.f_23[iParam1];
}

bool func_880(var uParam0, int iParam1, int iParam2)
{
	if (!func_903(uParam0, 3))
	{
		func_1004(uParam0, iParam1, iParam2);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1160(uParam0, iParam1, iParam2);
		return true;
	}
	return false;
}

bool func_881(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_903(uParam0, 2))
	{
		func_1005(uParam0, iParam1, iParam2, iParam3);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1161(uParam0, iParam1, iParam2, iParam3);
		return true;
	}
	return false;
}

bool func_882(var uParam0, int iParam1)
{
	if (!func_903(uParam0, 4))
	{
		func_1006(uParam0, iParam1);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1162(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_883(var uParam0, int iParam1, var uParam2)
{
	if (!func_903(uParam0, 10))
	{
		func_900(uParam0, iParam1, uParam2);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1163(uParam0, iParam1, uParam2);
		return true;
	}
	return false;
}

bool func_884(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (!func_903(uParam0, 11))
	{
		func_1164(uParam0, iParam1, iParam3);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1165(uParam0, iParam1, uParam2);
		return true;
	}
	return false;
}

void func_885(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3]))
	{
		if (bParam4)
		{
			func_1137(uParam0, iParam1, iParam2, iParam3, 2);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3]));
		}
	}
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_5[iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_10[iParam3] = 0;
}

bool func_886(var uParam0)
{
	if (!func_903(uParam0, 6))
	{
		func_987(uParam0);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1166(uParam0);
		return true;
	}
	return false;
}

bool func_887(var uParam0, int iParam1)
{
	if (!func_903(uParam0, 12))
	{
		func_1167(uParam0, iParam1);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1168(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_888(var uParam0, int iParam1)
{
	if (!func_903(uParam0, 15))
	{
		func_1169(uParam0, iParam1);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1170(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_889(var uParam0, int iParam1, bool bParam2)
{
	if (!func_903(uParam0, 16))
	{
		func_1171(uParam0, iParam1);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1172(uParam0, iParam1, bParam2);
		return true;
	}
	return false;
}

bool func_890(var uParam0, bool bParam1)
{
	if (!func_903(uParam0, 17))
	{
		func_1011(uParam0, bParam1);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1173(uParam0, bParam1);
		return true;
	}
	return false;
}

void func_891(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 11)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iVar0 /*194*/].f_121[iVar1 /*36*/].f_23[iVar2]))
				{
					OBJECT::DELETE_OBJECT(&(uParam0->f_112[iVar0 /*194*/].f_121[iVar1 /*36*/].f_23[iVar2]));
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_892(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_889.f_23[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_889.f_23[iVar0]));
		}
		iVar0++;
	}
}

void func_893(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_925[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_925[iVar0]));
		}
		iVar0++;
	}
}

int func_894(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_895(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_896(var uParam0)
{
	int iVar0;

	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1239))
	{
		return true;
	}
	else
	{
		iVar0 = func_546(uParam0);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(iVar0));
		if (func_867(&(uParam0->f_1239), "FidgetAnimFinished"))
		{
			func_304(uParam0, func_823(iVar0));
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "IdleWithDeck");
			return true;
		}
	}
	return false;
}

bool func_897(var uParam0)
{
	if (!func_903(uParam0, 5))
	{
		func_991(uParam0);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1174(uParam0);
		return true;
	}
	return false;
}

bool func_898(var uParam0, int iParam1)
{
	if (!func_903(uParam0, 13))
	{
		func_1175(uParam0, iParam1);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1176(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_899(var uParam0, int iParam1)
{
	if (!func_903(uParam0, 14))
	{
		func_992(uParam0, iParam1);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1177(uParam0, iParam1);
		return true;
	}
	return false;
}

int func_900(var uParam0, int iParam1, var uParam2)
{
	char cVar0[64];
	char cVar8[32];

	strcpy_s(&cVar0, 64, "script@mini_game@blackjack@outcome_seat_0");
	StringIntConCat(&cVar0, iParam1 + 1, 64);
	strcpy_s(&cVar8, 32, "PBL");
	if (*uParam2 != 0)
	{
		if (!uParam2->f_2 || *uParam2 == 2)
		{
			strcat_s(&cVar8, 32, "_A");
		}
		else
		{
			strcat_s(&cVar8, 32, "_AA");
		}
		if (*uParam2 == 1)
		{
			strcat_s(&cVar8, 32, "_WIN");
		}
		else if (*uParam2 == 2 || *uParam2 == 0)
		{
			strcat_s(&cVar8, 32, "_PUSH");
		}
		else if (*uParam2 == 3)
		{
			strcat_s(&cVar8, 32, "_LOSS");
		}
		else
		{
			return 0;
		}
	}
	if (uParam2->f_1 != 0)
	{
		if (!uParam2->f_3 || uParam2->f_1 == 2)
		{
			strcat_s(&cVar8, 32, "_B");
		}
		else
		{
			strcat_s(&cVar8, 32, "_BB");
		}
		if (uParam2->f_1 == 1)
		{
			strcat_s(&cVar8, 32, "_WIN");
		}
		else if (uParam2->f_1 == 2)
		{
			strcat_s(&cVar8, 32, "_PUSH");
		}
		else if (uParam2->f_1 == 3)
		{
			strcat_s(&cVar8, 32, "_LOSS");
		}
		else
		{
			return 0;
		}
	}
	return func_1178(uParam0, 10, &cVar0, &cVar8, 2);
}

void func_901(var uParam0, int iParam1, bool bParam2, float fParam3)
{
	if (bParam2)
	{
		func_827(uParam0, "TransitionToIdleRequest", fParam3, "CheckType", BUILTIN::TO_FLOAT(iParam1));
	}
	else
	{
		TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_1239, "TransitionToIdle");
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_1239, "CheckType", BUILTIN::TO_FLOAT(iParam1));
	}
	func_826(uParam0, iParam1);
}

bool func_902(var uParam0)
{
	if (!func_903(uParam0, 7))
	{
		func_1009(uParam0);
	}
	else if (func_905(uParam0, 1065353216 /* Float: 1f */))
	{
		func_1179(uParam0);
		return true;
	}
	return false;
}

bool func_903(var uParam0, int iParam1)
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_28) && (iParam1 == 0 || iParam1 == uParam0->f_1239.f_27));
}

int func_904(var uParam0, int iParam1)
{
	char cVar0[16];

	strcpy_s(&cVar0, 16, "PBL_");
	if (iParam1 + 1 < 10)
	{
		strcat_s(&cVar0, 16, "0");
	}
	StringIntConCat(&cVar0, iParam1 + 1, 16);
	return func_1178(uParam0, 9, "script@mini_game@blackjack@hit_self", &cVar0, 2);
}

bool func_905(var uParam0, float fParam1)
{
	if (func_974(uParam0) && func_872(uParam0, fParam1))
	{
		return true;
	}
	return false;
}

int func_906(var uParam0, int iParam1)
{
	if (func_1180(uParam0, 9, 0))
	{
		func_832(uParam0, iParam1, 1, 0, 1);
		func_1181(uParam0, "hit_card", func_879(uParam0, iParam1), 1, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

bool func_907(var uParam0, bool bParam1)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1239, joaat("INTERRUPTIBLE")))
	{
		if ((!bParam1 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1239)) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_1239))
		{
			return true;
		}
	}
	return false;
}

int func_908(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1 + 1;
	while (iVar0 <= 31)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_909(var uParam0, char* sParam1)
{
	if (!uParam0->f_39)
	{
		if (TASK::GET_TASK_MOVE_NETWORK_EVENT(*uParam0, sParam1))
		{
			uParam0->f_39 = 1;
		}
	}
	return (uParam0->f_39 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(*uParam0));
}

bool func_910(int iParam0, int iParam1)
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

int func_911(int iParam0, Vector3 vParam1, int iParam4, int iParam5, float fParam6)
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
	func_333(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_334(&iVar2, vVar5, 0.0f, 0.0f, 0.0f, (fParam6 * 2.0f), (fParam6 * 2.0f), 1.2f);
	iVar1 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (func_1183(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					func_336(iVar2);
					ITEMSET::_CLEAR_ITEMSET(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_336(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

void func_912(Vector3 vParam0, float fParam3, Vector3 vParam4, Vector3 vParam7, var uParam10, var uParam11)
{
	Vector3 vVar0;

	vVar0 = { vParam4 - vParam0 /*3*/ };
	*uParam10 = ((vVar0.x * BUILTIN::COS(-fParam3)) - (vVar0.y * BUILTIN::SIN(-fParam3)));
	uParam10->f_1 = ((vVar0.x * BUILTIN::SIN(-fParam3)) + (vVar0.y * BUILTIN::COS(-fParam3)));
	uParam10->f_2 = vVar0.z;
	*uParam11 = vParam7.x;
	uParam11->f_1 = vParam7.y;
	uParam11->f_2 = (vParam7.z - fParam3);
}

void func_913(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!MISC::IS_BIT_SET(uParam0->f_946[iParam1 /*46*/].f_36, iParam2))
	{
		uVar0 = uParam0->f_946[iParam1 /*46*/].f_6;
		MISC::SET_BIT(&(uParam0->f_946[iParam1 /*46*/].f_36), iParam2);
	}
}

void func_914(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_946[iParam1 /*46*/].f_37)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam1 /*46*/], iParam2))
		{
			func_1079(uParam0, iParam1);
		}
	}
}

bool func_915(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_946[iParam1 /*46*/].f_38)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam1 /*46*/], joaat("INTERRUPTIBLE")))
		{
			if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_946[iParam1 /*46*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_946[iParam1 /*46*/]))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_916(var uParam0, int iParam1, char* sParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];

	iVar0 = uParam0->f_946[iParam1 /*46*/].f_2;
	iVar1 = uParam0->f_946[iParam1 /*46*/];
	if (!PED::IS_PED_INJURED(iVar1))
	{
		strcpy_s(&cVar2, 64, "clipset@");
		strcat_s(&cVar2, 64, &(uParam0->f_1152[iVar0 /*8*/]));
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar1, &cVar2, sParam2, 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar1, &cVar2, sParam2) < fParam3)
		{
			return true;
		}
	}
	return false;
}

int func_917(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3];
}

void func_918(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<31> /*248*/ sVar3;

	iVar0 = uParam0->f_946[iParam1 /*46*/].f_2;
	iVar1 = uParam0->f_946[iParam1 /*46*/];
	if (MISC::IS_BIT_SET(iParam4, iVar0))
	{
		return;
	}
	fVar2 = 0.0f;
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar1))
	{
		fVar2 = TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(iVar1, "CurrentPhase");
	}
	if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iParam3, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(iParam3, 2, true);
	}
	sVar3.f_4 = 1065353216;
	sVar3.f_5 = 1065353216;
	sVar3.f_9 = 1065353216;
	sVar3.f_10 = 1065353216;
	sVar3.f_14 = 1065353216;
	sVar3.f_15 = 1065353216;
	sVar3.f_17 = 1040187392;
	sVar3.f_18 = 1040187392;
	sVar3.f_19 = -1;
	sVar3.f_26 = -1082130432;
	sVar3.f_0 = 1;
	sVar3.f_1 = func_1118(uParam0->f_1152[iVar0 /*8*/]);
	sVar3.f_2 = sParam2;
	sVar3.f_3 = fVar2;
	sVar3.f_20 = iParam5 | 16 | 4 | 2 | 256;
	sVar3.f_22 = 1;
	sVar3.f_4 = 1.0f;
	sVar3.f_5 = 1.0f;
	sVar3.f_10 = 0.0f;
	sVar3.f_15 = 0.0f;
	sVar3.f_23 = 0;
	sVar3.f_19 = -1;
	sVar3.f_16 = 0;
	sVar3.f_17 = 0.0f;
	sVar3.f_18 = 0.0f;
	sVar3.f_27 = { uParam0->f_1207[iParam1 /*3*/] /*3*/ };
	sVar3.f_30 = { uParam0->f_1220[iParam1 /*3*/] /*3*/ };
	TASK::PLAY_ENTITY_SCRIPTED_ANIM(iParam3, &sVar3);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam3, true);
}

int func_919(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_112[iParam1 /*194*/].f_30[iParam2];
}

void func_920(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_30[iParam2]))
	{
		if (bParam3)
		{
			func_1135(uParam0, iParam1, iParam2, 2);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_30[iParam2]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_30[iParam2]));
		}
	}
	uParam0->f_112[iParam1 /*194*/].f_30[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_5[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_10[iParam2] = 0;
}

int func_921(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

	fVar0 = (BUILTIN::TO_FLOAT(func_1184(iParam0)) / BUILTIN::TO_FLOAT(10));
	iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / fVar0));
	if (iParam2 != -1 && iVar1 > iParam2)
	{
		iVar1 = iParam2;
	}
	return iVar1;
}

void func_922(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	else if (PED::IS_PED_INJURED(uParam0->f_946[iParam1 /*46*/]))
	{
	}
	else
	{
		if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar0, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(iVar0, 2, true);
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0))
		{
			ENTITY::DETACH_ENTITY(iVar0, true, true);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, uParam0->f_946[iParam1 /*46*/], PED::GET_PED_BONE_INDEX(uParam0->f_946[iParam1 /*46*/], iParam4), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, false, false, false, false, 2, true, false, false);
	}
}

void func_923(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_112[iParam1 /*194*/].f_5[iVar0];
		iVar0++;
	}
}

int func_924(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	Vector3 vVar5;
	Vector3 vVar8;

	if (bParam6)
	{
		iVar1 = uParam0->f_112[iParam1 /*194*/].f_5[iParam2];
		iVar2 = uParam0->f_112[iParam1 /*194*/].f_10[iParam2];
		if (iParam7 != 0)
		{
			iVar0 = iParam7;
		}
		else if (iVar2 > 0 && iVar1 != iParam3)
		{
			iVar0 = 3;
		}
		else if (iVar2 < iParam4)
		{
			iVar0 = 1;
		}
		else if (iVar2 > iParam4)
		{
			iVar0 = 2;
		}
		else
		{
			return uParam0->f_112[iParam1 /*194*/][iParam2];
		}
		func_1185(uParam0, iParam1, iParam2, iVar0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/][iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/][iParam2]));
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	uParam0->f_112[iParam1 /*194*/][iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_5[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_10[iParam2] = 0;
	iVar3 = 0;
	if (iParam5 > 0)
	{
		iVar4 = uParam0->f_939;
		if (!func_1186(uParam0, iParam1, iParam2, &vVar5, &vVar8, 0, 1))
		{
			return 0;
		}
		iVar3 = OBJECT::CREATE_OBJECT(iVar4, vVar5, false, true, false, false, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
			return 0;
		}
		ENTITY::SET_ENTITY_COORDS(iVar3, vVar5, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(iVar3, vVar8, 2, true);
		ENTITY::SET_ENTITY_COLLISION(iVar3, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iVar3, true);
		AUDIO::_0x06C5DF5EE444BC6B(iParam1, iParam2, vVar5);
		if (bParam6)
		{
			ENTITY::SET_ENTITY_ALPHA(iVar3, 0, false);
		}
		func_1132(iVar3, iParam5, 0);
		func_1133(iVar3, iParam3);
	}
	uParam0->f_112[iParam1 /*194*/][iParam2] = iVar3;
	uParam0->f_112[iParam1 /*194*/].f_5[iParam2] = iParam3;
	uParam0->f_112[iParam1 /*194*/].f_10[iParam2] = iParam4;
	return iVar3;
}

void func_925(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	Vector3 vVar6;
	var uVar9;
	float fVar12;
	struct<9> /*72*/ sVar13;

	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam1) && iParam3 != -1)
	{
		fVar0 = ENTITY::GET_ANIM_DURATION(&(uParam0->f_1152[uParam1->f_2 /*8*/]), sParam4);
		fVar1 = TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(*uParam1, "CurrentPhase");
		ENTITY::FIND_ANIM_EVENT_PHASE(&(uParam0->f_1152[uParam1->f_2 /*8*/]), sParam4, sParam5, &fVar2, &uVar3);
		fVar4 = (fVar1 * fVar0);
		fVar5 = (fVar2 * fVar0);
		switch (iParam6)
		{
			case 0:
				fVar12 = 2.0f;
				break;
			case 1:
				fVar12 = 1.0f;
				break;
			case 2:
				fVar12 = 0.5f;
				break;
			case 3:
				fVar12 = 0.267f;
				break;
			case 4:
				fVar12 = 0.15f;
				break;
			case 5:
				fVar12 = 0.0f;
				break;
		}
		if (fVar5 < fVar12)
		{
			if (fVar5 >= 1.0f)
			{
				iParam6 = 1;
				fVar12 = 1.0f;
			}
			else if (fVar5 >= 0.5f)
			{
				iParam6 = 2;
				fVar12 = 0.5f;
			}
			else if (fVar5 >= 0.267f)
			{
				iParam6 = 3;
				fVar12 = 0.267f;
			}
			else if (fVar5 >= 0.15f)
			{
				iParam6 = 4;
				fVar12 = 0.15f;
			}
			else if (fVar5 >= 0.0f)
			{
				iParam6 = 5;
				fVar12 = 0.0f;
			}
		}
		if (fVar4 >= (fVar5 - fVar12) && fVar4 <= fVar5)
		{
			func_1186(uParam0, iParam2, iParam3, &vVar6, &uVar9, 0, 1);
			sVar13 = 1;
			sVar13.f_5 = -1;
			sVar13.f_7 = 2;
			sVar13.f_8 = 2;
			sVar13.f_0 = 1;
			sVar13.f_1 = { vVar6 /*3*/ };
			sVar13.f_4 = 0;
			sVar13.f_5 = -1;
			sVar13.f_6 = 18;
			sVar13.f_7 = iParam6;
			sVar13.f_8 = iParam7;
			IK::_0x0B9F7A01EC50448D(*uParam1, &sVar13);
		}
	}
}

void func_926(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = uParam0->f_112[iParam1 /*194*/].f_30[iParam2];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	else if (PED::IS_PED_INJURED(uParam0->f_946[iParam1 /*46*/]))
	{
	}
	else
	{
		if (ENTITY::_IS_ENTITY_PLAYING_ANY_ANIM(iVar0, 1))
		{
			TASK::STOP_ANIM_PLAYBACK(iVar0, 2, true);
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0))
		{
			ENTITY::DETACH_ENTITY(iVar0, true, true);
		}
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, uParam0->f_946[iParam1 /*46*/], PED::GET_PED_BONE_INDEX(uParam0->f_946[iParam1 /*46*/], iParam3), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, false, false, false, false, 2, true, false, false);
	}
}

bool func_927(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_946[iParam1 /*46*/].f_38)
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_946[iParam1 /*46*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_946[iParam1 /*46*/]))
		{
			return true;
		}
	}
	return false;
}

bool func_928(var uParam0, int iParam1, bool bParam2)
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_946[iParam1 /*46*/], joaat("INTERRUPTIBLE")))
	{
		if ((!bParam2 || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_946[iParam1 /*46*/])) || TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(uParam0->f_946[iParam1 /*46*/]))
		{
			return true;
		}
	}
	return false;
}

float func_929(var uParam0)
{
	if (!func_477(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1187(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_845() - uParam0->f_1);
}

void func_930(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else
	{
		iVar0 = func_161(uParam0, iParam1, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (PED::IS_PED_A_PLAYER(iVar0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
			}
			else if (func_119(iVar0))
			{
				func_307(func_306(iVar0), 0, 1, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::DELETE_PED(&iVar0);
			}
		}
	}
}

char* func_931(char[4] cParam0, char[4] cParam1)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_932(var uParam0)
{
	func_1188(&(uParam0->f_2));
}

void func_933(var uParam0)
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

void func_934(var uParam0, int iParam1)
{
	if (uParam0->f_27[iParam1 /*60*/].f_59 > 0)
	{
		uParam0->f_27[iParam1 /*60*/].f_59 = 0;
	}
	if (uParam0->f_27[iParam1 /*60*/].f_7 > 0)
	{
		uParam0->f_27[iParam1 /*60*/].f_7 = 0;
	}
}

void func_935(var uParam0)
{
	if (uParam0->f_42 == 0)
	{
		return;
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
		uParam0->f_51 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_51))
	{
	}
}

void func_936(var uParam0, var uParam1)
{
	uParam0->f_227 = uParam1;
}

void func_937(var uParam0, var uParam1, int iParam2)
{
	char[] cVar0[8];
	char[] cVar8[8];

	if (func_529(&(uParam0->f_3218), iParam2))
	{
		func_1026(&(uParam0->f_3218), iParam2);
	}
	func_940(&(uParam0->f_3218), iParam2, &cVar0, &cVar8);
	if (func_941(&(uParam0->f_3218), iParam2, &cVar0, &cVar8))
	{
		func_943(&(uParam0->f_3218), iParam2, 0);
		func_944(&(uParam0->f_3218), iParam2, func_113(uParam1, iParam2));
		func_1000(&(uParam0->f_3218), iParam2, 0);
		if (uParam0->f_1458 == 2)
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_WAITING_BET" /* GXTEntry: "Waiting for bet..." */));
		}
		else
		{
			func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(2, "MGBLK_INFO_SITTING_OUT" /* GXTEntry: "Sitting out" */));
		}
	}
}

void func_938(var uParam0, var uParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;

	if (uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_24 > 21)
	{
		sVar0 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_BUST" /* GXTEntry: "Bust with ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_24);
	}
	else if (uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_23 >= 7)
	{
		sVar0 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_CHARLIE" /* GXTEntry: "7-Card charlie" */);
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_STOOD" /* GXTEntry: "Stood on ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[0 /*25*/].f_24);
	}
	if (uParam1->f_27[iParam2 /*60*/].f_59 > 1)
	{
		if (uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_24 > 21)
		{
			sVar1 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_BUST_LCASE" /* GXTEntry: "bust with ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_24);
		}
		else if (uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_23 >= 7)
		{
			sVar1 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_CHARLIE_LCASE" /* GXTEntry: "7-card charlie" */);
		}
		else
		{
			sVar1 = MISC::VAR_STRING(2, "MGBLK_INFO_RESULT_STOOD_LCASE" /* GXTEntry: "stood on ~1~" */, uParam1->f_27[iParam2 /*60*/].f_8[1 /*25*/].f_24);
		}
	}
	if (uParam1->f_27[iParam2 /*60*/].f_59 == 1)
	{
		func_942(&(uParam0->f_3218), iParam2, sVar0);
	}
	else
	{
		func_942(&(uParam0->f_3218), iParam2, MISC::VAR_STRING(42, "MGBLK_INFO_CONCAT" /* GXTEntry: "~1p~ and ~2p~" */, sVar0, sVar1));
	}
}

void func_939(var uParam0, int iParam1, char* sParam2)
{
	if (uParam0->f_207)
	{
	}
	else if (!uParam0->f_197)
	{
		func_175(1);
		func_1039(func_1036(iParam1, sParam2), 0, 0, 1);
	}
	uParam0->f_201 = iParam1;
	uParam0->f_202 = sParam2;
	func_214(&(uParam0->f_203));
}

int func_940(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	char* sVar0;

	if (uParam0->f_211[iParam1] == 0)
	{
	}
	else if (uParam0->f_211[iParam1] == 1)
	{
		return func_1189(uParam0->f_216[iParam1], sParam2, sParam3);
	}
	else if (uParam0->f_211[iParam1] == 2)
	{
		sVar0 = func_1040(&Global_1899750, iParam1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			*sParam2 = { func_1190(sVar0) /*8*/ };
			*sParam3 = { func_1190(sVar0) /*8*/ };
			return 1;
		}
	}
	else if (uParam0->f_211[iParam1] == 3)
	{
		strcpy_s(sParam2, 64, "avatar_generic");
		strcpy_s(sParam3, 64, "minigames_hud");
		return 1;
	}
	strcpy_s(sParam2, 64, "avatar_generic");
	strcpy_s(sParam3, 64, "minigames_hud");
	return 0;
}

bool func_941(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		uParam0->f_230[iParam1 /*2*/] = 1;
		uParam0->f_230[iParam1 /*2*/].f_1 = 0;
		func_1191(&(uParam0->f_40[iParam1 /*38*/]), sParam2);
		func_1192(&(uParam0->f_40[iParam1 /*38*/]), sParam3);
		func_1193(&(uParam0->f_40[iParam1 /*38*/]), 1);
		func_1194(&(uParam0->f_40[iParam1 /*38*/]), MISC::VAR_STRING(2, "MGBLK_UI_CASH" /* GXTEntry: "~1$~" */, 0));
		func_1195(&(uParam0->f_40[iParam1 /*38*/]), " ");
		func_1196(uParam0, iParam1);
		iVar0 = 0;
		while (iVar0 < 11)
		{
			func_1197(&(uParam0->f_40[iParam1 /*38*/]), iVar0, "");
			func_1198(&(uParam0->f_40[iParam1 /*38*/]), iVar0, "");
			iVar0++;
		}
		return true;
	}
	return false;
}

void func_942(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		func_1195(&(uParam0->f_40[iParam1 /*38*/]), sParam2);
	}
}

void func_943(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		switch (iParam2)
		{
			case 0:
				func_1193(&(uParam0->f_40[iParam1 /*38*/]), 1);
				break;
			case 1:
				func_1199(&(uParam0->f_40[iParam1 /*38*/]), 1);
				break;
			case 2:
				func_1199(&(uParam0->f_40[iParam1 /*38*/]), 1);
				break;
		}
	}
}

void func_944(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		uParam0->f_230[iParam1 /*2*/].f_1 = iParam2;
		func_1194(&(uParam0->f_40[iParam1 /*38*/]), MISC::VAR_STRING(2, "MGBLK_UI_CASH" /* GXTEntry: "~1$~" */, func_728(uParam0, iParam2)));
	}
}

void func_945(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		func_1200(uParam0, iVar0, "");
		iVar0++;
	}
}

bool func_946(var uParam0)
{
	if (uParam0->f_1239 != 0)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_1239))
		{
			return true;
		}
	}
	return false;
}

bool func_947(var uParam0, var uParam1)
{
	if (uParam1->f_44 == -1)
	{
		return false;
	}
	return true;
}

void func_948(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_113(uParam0, iParam2);
	iVar1 = func_492(uParam0, iParam2, 0);
	if (bParam5)
	{
		*iParam3 = func_723(iVar0, 1);
		*iParam4 = func_723(iVar0, (iVar1 / 2));
	}
	else
	{
		*iParam3 = func_723(iVar0, uParam1->f_4);
		*iParam4 = func_723(iVar0, uParam1->f_5);
		*iParam3 -= (*iParam3 % uParam1->f_4);
		*iParam4 -= (*iParam4 % uParam1->f_4);
	}
}

void func_949(var uParam0, char* sParam1)
{
	if (uParam0->f_197)
	{
		return;
	}
	uParam0->f_200 = func_1201(sParam1, 7500, 0, 0, 0, 0, -1, -1, 0);
}

void func_950(var uParam0, int iParam1, float fParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else if (fParam2 >= 0.0f && fParam2 <= 1.0f)
	{
		func_1202(&(uParam0->f_40[iParam1 /*38*/]), BUILTIN::ROUND((fParam2 * 100.0f)));
	}
	else
	{
		func_1202(&(uParam0->f_40[iParam1 /*38*/]), -1);
	}
}

void func_951(var uParam0)
{
	if (uParam0->f_197)
	{
		return;
	}
	if (func_1203(uParam0->f_200))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(uParam0->f_200, false);
	}
}

bool func_952(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_953(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_4, (5 * uParam1->f_4));
	iVar0 = func_1204(uParam0, uParam1, iParam2, iVar0);
	return iVar0;
}

void func_954(var uParam0)
{
	if (!uParam0->f_1239.f_19)
	{
		uParam0->f_1239.f_19 = 1;
	}
}

int func_955(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_956(var uParam0)
{
	return uParam0->f_1239.f_4;
}

char* func_957(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mood_normal_neutral";
		case 1:
			return "blackjack_concentration";
		case 2:
			return "poker_face";
		case 3:
			return "blackjack_impatient";
		default:
			break;
	}
	return "Unknown";
}

bool func_958(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2[10];
	int iVar13;
	int iVar14;

	if (!uParam1->f_45)
	{
		return false;
	}
	if (uParam1->f_44 == -1)
	{
		return false;
	}
	if (iParam3 < 0 || iParam3 >= 4)
	{
		return false;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	iVar1 = -1;
	if (bParam5)
	{
		iVar13 = 0;
		iVar14 = 0;
		while (iVar14 < 4)
		{
			if (iVar14 != iParam3)
			{
				if ((func_155(uParam1, iVar14) && !func_460(uParam1, iVar14, 3)) && !func_460(uParam1, iVar14, 17))
				{
					iVar2[iVar13] = iVar14;
					iVar13++;
					iVar2[iVar13] = iVar14;
					iVar13++;
				}
			}
			iVar14++;
		}
		iVar2[iVar13] = 4;
		iVar13++;
		iVar1 = iVar2[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar13)];
	}
	ANIMSCENE::_SET_MGM_EVENT(uParam1->f_44, "MgmLookVar", uParam1->f_946[iParam3 /*46*/], 0, BUILTIN::TO_FLOAT(iVar0));
	ANIMSCENE::_SET_MGM_EVENT(uParam1->f_44, "look_atDealer", uParam1->f_946[iParam3 /*46*/], 0, 2.0f);
	ANIMSCENE::_SET_MGM_EVENT(uParam1->f_44, "look_atGivenSeat", uParam1->f_946[iParam3 /*46*/], 0, func_1205(iParam3, iParam4, 1));
	ANIMSCENE::_SET_MGM_EVENT(uParam1->f_44, "look_atAnySeat", uParam1->f_946[iParam3 /*46*/], 0, func_1205(iParam3, iVar1, 1));
	return true;
}

int func_959(var uParam0, int iParam1)
{
	return uParam0->f_27[iParam1 /*60*/].f_3;
}

void func_960(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_568[iParam1 /*7*/].f_3[iParam2] = 1;
}

void func_961(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	(*uParam1)[0] = 0;
	(*uParam2)[0] = 0;
	(*uParam1)[1] = 1;
	(*uParam2)[1] = func_723(iParam0, func_1184(1));
	iParam0 -= (*uParam2)[1];
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_1206(iVar0))
		{
			iVar2 = func_1184(iVar0);
			if (iParam0 <= iVar2 * 2)
			{
				(*uParam1)[2] = iVar0;
				(*uParam1)[3] = iVar0;
			}
			else
			{
				iVar1 = func_1207(iVar0);
				if (iVar1 != 9)
				{
					iVar3 = func_1184(iVar1);
					if (iParam0 <= (iVar2 + iVar3))
					{
						(*uParam1)[2] = iVar0;
						(*uParam1)[3] = iVar1;
					}
					else
					{
						iVar0++;
					}
					if (iVar0 >= 8)
					{
						(*uParam1)[2] = 8;
						(*uParam1)[3] = 8;
					}
					(*uParam2)[2] = func_723(iParam0, func_1184((*uParam1)[2]));
					iParam0 -= (*uParam2)[2];
					(*uParam2)[3] = func_723(iParam0, func_1184((*uParam1)[3]));
					iParam0 -= (*uParam2)[3];
				}
			}
		}
	}
}

void func_962(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((*uParam3)[iVar0] > 0)
		{
			func_924(uParam0, iParam1, iVar0, (*uParam2)[iVar0], (*uParam3)[iVar0], func_921((*uParam2)[iVar0], (*uParam3)[iVar0], 10), bParam4, 0);
		}
		else
		{
			func_1208(uParam0, iParam1, iVar0, bParam4);
		}
		iVar0++;
	}
}

void func_963(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8[4];
	bool bVar13;
	int iVar14[4];
	int iVar19;
	int iVar20;

	func_923(uParam0, iParam1, &(uParam3->f_3));
	func_1209(uParam0, iParam1, &(uParam3->f_8));
	uParam3->f_2 = -1;
	*uParam3 = 0;
	uParam3->f_1 = iParam2;
	iVar1 = -1;
	bVar13 = false;
	iVar19 = 0;
	while (iVar19 < 4)
	{
		iVar14[iVar19] = func_1184(uParam3->f_3[iVar19]);
		if (uParam3->f_8[iVar19] == 0)
		{
			iVar14[iVar19] = 0;
		}
		if (iVar14[iVar19] >= iParam2)
		{
			bVar13 = true;
		}
		iVar19++;
	}
	if (!bVar13)
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (func_1206(iVar0) && iParam2 <= func_1184(iVar0))
			{
			}
			else
			{
				iVar0++;
			}
		}
		if (iVar0 > 8)
		{
			iVar0 = 8;
		}
		*uParam3 = iVar0;
		while (iParam2 > 0)
		{
			iVar1 = -1;
			iVar19 = 0;
			while (iVar19 < 4)
			{
				if (uParam3->f_8[iVar19] > 0)
				{
					iVar3 = uParam3->f_8[iVar19];
					if (iVar1 == -1 || iVar2 < iVar3)
					{
						iVar1 = iVar19;
						iVar2 = iVar3;
					}
				}
				iVar19++;
			}
			if (iVar1 == -1)
			{
				if (uParam3->f_2 == -1)
				{
					uParam3->f_2 = 0;
				}
				return;
			}
			if (uParam3->f_2 == -1)
			{
				uParam3->f_2 = iVar1;
			}
			iVar6 = func_723(iParam2, uParam3->f_8[iVar1]);
			uParam3->f_8[iVar1] -= iVar6;
			iParam2 -= iVar6;
		}
	}
	else
	{
		while (iParam2 > 0)
		{
			iVar19 = 0;
			while (iVar19 < 4)
			{
				if (iVar14[iVar19] >= iParam2 || uParam3->f_2 != -1)
				{
					iVar7 = func_921(uParam3->f_3[iVar19], func_723(iParam2, uParam3->f_8[iVar19]), 10);
					iVar8[iVar19] = ((func_1184(uParam3->f_3[iVar19]) * iVar7) / 10);
				}
				iVar19++;
			}
			iVar1 = -1;
			iVar19 = 0;
			while (iVar19 < 4)
			{
				if (iVar8[iVar19] > 0)
				{
					iVar5 = MISC::ABSI((iParam2 - iVar8[iVar19]));
					if (iVar1 == -1 || iVar4 > iVar5)
					{
						iVar1 = iVar19;
						iVar4 = iVar5;
					}
				}
				iVar19++;
			}
			if (iVar1 == -1)
			{
				if (uParam3->f_2 == -1)
				{
					uParam3->f_2 = 0;
					*uParam3 = 8;
				}
				return;
			}
			if (uParam3->f_2 == -1)
			{
				uParam3->f_2 = iVar1;
				*uParam3 = uParam3->f_3[iVar1];
			}
			iVar6 = func_723(iParam2, uParam3->f_8[iVar1]);
			uParam3->f_8[iVar1] -= iVar6;
			iParam2 -= iVar6;
		}
	}
	if (func_1210(*uParam3))
	{
		iVar20 = func_1211(*uParam3);
		if (func_921(iVar20, uParam3->f_1, 10) <= 3)
		{
			*uParam3 = iVar20;
		}
	}
}

void func_964(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else if (iParam2 != 0 && iParam2 != 1)
	{
	}
	else if (iParam3 != 0 && iParam3 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 8);
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				iVar0 = 0;
			}
			else if (iParam3 == 1)
			{
				iVar0 = 1;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				iVar0 = 2;
			}
			else if (iParam3 == 1)
			{
				iVar0 = 3;
			}
		}
		uParam0->f_946[iParam1 /*46*/].f_14 = iParam2;
		uParam0->f_946[iParam1 /*46*/].f_15 = iParam3;
		uParam0->f_946[iParam1 /*46*/].f_17 = { *uParam4 /*13*/ };
		uParam0->f_946[iParam1 /*46*/].f_32 = iVar0;
		if (!uParam0->f_39)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "Bet");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
		func_818(uParam0, iParam1, 9);
	}
}

void func_965(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (iParam2 < 0 || iParam2 > 4)
	{
	}
	else
	{
		if (uParam0->f_1631[iParam1] != -1)
		{
		}
		uParam0->f_1631[iParam1] = iParam2;
		uParam0->f_1636[iParam1] = iParam3;
		func_379(&(uParam0->f_1641[iParam1 /*3*/]), -fParam4);
	}
}

void func_966()
{
	func_774(func_1212(joaat("ATTEMPTS"), joaat("BLACKJACK")), 1);
	func_1213(0);
}

int func_967(var uParam0, int iParam1, struct<2> /*16*/ sParam2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_802(uParam0, sParam2, &iVar0))
	{
		if (bParam4)
		{
			if (uParam0->f_889.f_23[iParam1] != 0)
			{
			}
		}
		if (func_802(uParam0, uParam0->f_889[iParam1 /*2*/], &iVar1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		}
		uParam0->f_889[iParam1 /*2*/] = { func_242() /*2*/ };
		return 0;
	}
	if (uParam0->f_889[iParam1 /*2*/].f_1 != sParam2.f_1 || uParam0->f_889[iParam1 /*2*/] != sParam2.f_0)
	{
		if (bParam4)
		{
			if (uParam0->f_889.f_23[iParam1] != 0)
			{
			}
		}
		if (func_802(uParam0, uParam0->f_889[iParam1 /*2*/], &iVar1))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
		}
		uParam0->f_889[iParam1 /*2*/] = { sParam2 /*2*/ };
		STREAMING::REQUEST_MODEL(iVar0, false);
	}
	return 1;
}

void func_968(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 2)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 11)
		{
			if (iParam2 == 0)
			{
				func_1197(&(uParam0->f_40[iParam1 /*38*/]), iVar0, "");
			}
			else
			{
				func_1198(&(uParam0->f_40[iParam1 /*38*/]), iVar0, "");
			}
			iVar0++;
		}
	}
}

void func_969(var uParam0, int iParam1, int iParam2, int iParam3, struct<2> /*16*/ sParam4)
{
	char[] cVar0[8];

	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (iParam2 < 0 || iParam2 >= 2)
	{
	}
	else if (iParam3 < 0 || iParam3 >= 11)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		func_1214(sParam4, &cVar0);
		if (iParam2 == 0)
		{
			func_1197(&(uParam0->f_40[iParam1 /*38*/]), iParam3, &cVar0);
		}
		else
		{
			func_1198(&(uParam0->f_40[iParam1 /*38*/]), iParam3, &cVar0);
		}
	}
}

void func_970(var uParam0, int iParam1, struct<2> /*16*/ sParam2)
{
	char[] cVar0[8];

	if (iParam1 < 0 || iParam1 >= 11)
	{
	}
	else
	{
		func_1214(sParam2, &cVar0);
		func_1200(uParam0, (11 - iParam1 + 1), &cVar0);
	}
}

void func_971(var uParam0, int iParam1, char* sParam2)
{
	if (uParam0->f_207)
	{
	}
	else if (!uParam0->f_197)
	{
		func_175(1);
		func_1038(func_1036(iParam1, sParam2), 10000, 0, 0, 0, 1);
	}
	uParam0->f_201 = iParam1;
	uParam0->f_202 = sParam2;
	func_379(&(uParam0->f_203), (-BUILTIN::TO_FLOAT(10000) / 1000.0f));
}

int func_972(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[16];
	int iVar2;

	strcpy_s(&cVar0, 16, "PBL_DEAL_");
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar2))
		{
			StringIntConCat(&cVar0, iVar2 + 1, 16);
		}
		iVar2++;
	}
	if (bParam2)
	{
		return func_1178(uParam0, 1, "script@mini_game@blackjack@deal_end_in_self", &cVar0, 2);
	}
	return func_1178(uParam0, 1, "script@mini_game@blackjack@deal", &cVar0, 2);
}

void func_973(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_1215(6, 1);
			break;
		default:
			break;
	}
}

bool func_974(var uParam0)
{
	return (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_28) || ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1239.f_28, true, false));
}

struct<2> /*16*/ func_975(var uParam0, int iParam1)
{
	return uParam0->f_2[iParam1 /*2*/];
}

bool func_976(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_116(uParam0, iVar1))
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				if (((uParam0->f_27[iVar1 /*60*/].f_8[0 /*25*/][iVar2 /*2*/] == 10 || uParam0->f_27[iVar1 /*60*/].f_8[0 /*25*/][iVar2 /*2*/] == 11) || uParam0->f_27[iVar1 /*60*/].f_8[0 /*25*/][iVar2 /*2*/] == 12) || uParam0->f_27[iVar1 /*60*/].f_8[0 /*25*/][iVar2 /*2*/] == 13)
				{
					iVar0++;
				}
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, (100 - iVar0 * 5));
	if (iVar3 < 50)
	{
		return false;
	}
	return true;
}

int func_977(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(uParam1->f_4, (5 * uParam1->f_4));
	iVar0 = func_1216(uParam0, iParam2, iVar0);
	return iVar0;
}

void func_978(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 9);
		iVar0 = 4;
		uParam0->f_946[iParam1 /*46*/].f_17 = { *uParam2 /*13*/ };
		uParam0->f_946[iParam1 /*46*/].f_32 = iVar0;
		if (!uParam0->f_39)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "Bet");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
		func_818(uParam0, iParam1, 9);
	}
}

int func_979(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	if (!bParam4 || func_1008(&(uParam0->f_17), iParam1, iParam2))
	{
		iVar1 = func_609(&(uParam0->f_17), iParam1, iParam2);
		iVar2 = func_508(&(uParam0->f_17), iParam1, iParam2);
		iVar3 = func_647(&(uParam0->f_17));
		iVar4 = uParam0->f_568[iParam1 /*7*/][iParam2];
		if (func_539(&(uParam0->f_17)) && func_532(&(uParam0->f_17), iParam1))
		{
			iVar0 = 2;
			*uParam3 = 0;
		}
		else if (func_539(&(uParam0->f_17)))
		{
			iVar0 = 3;
			*uParam3 = iVar4;
		}
		else if (func_532(&(uParam0->f_17), iParam1))
		{
			iVar0 = 1;
			*uParam3 = (iVar4 * 3 / 2);
		}
		else if (iVar2 > 21)
		{
			iVar0 = 3;
			*uParam3 = iVar4;
		}
		else if (iVar1 >= 7)
		{
			iVar0 = 1;
			*uParam3 = iVar4;
		}
		else if (iVar3 > 21)
		{
			iVar0 = 1;
			*uParam3 = iVar4;
		}
		else if (iVar2 > iVar3)
		{
			iVar0 = 1;
			*uParam3 = iVar4;
		}
		else if (iVar2 == iVar3)
		{
			iVar0 = 2;
			*uParam3 = 0;
		}
		else
		{
			iVar0 = 3;
			*uParam3 = iVar4;
		}
	}
	return iVar0;
}

var func_980(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_568[iParam1 /*7*/].f_3[iParam2];
}

int func_981(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 += uParam0->f_112[iParam1 /*194*/].f_10[iVar1];
		iVar1++;
	}
	return iVar0;
}

int func_982(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_5[iParam3];
}

void func_983(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
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
	int iVar10;
	int iVar11;

	func_923(uParam0, iParam1, &(uParam4->f_3));
	func_1209(uParam0, iParam1, &(uParam4->f_8));
	uParam4->f_2 = -1;
	*uParam4 = 0;
	uParam4->f_1 = iParam2;
	if (!func_1206(iParam3))
	{
		iParam3 = func_1207(iParam3);
	}
	iVar8 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_1206(iVar0))
		{
			iVar1 = func_1184(iVar0);
			iVar2 = 0;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (uParam4->f_3[iVar3] == iVar0 || uParam4->f_8[iVar3] == 0)
				{
					iVar2 += (iVar1 - uParam4->f_8[iVar3]);
				}
				iVar3++;
			}
			if (iVar2 >= iParam2)
			{
				MISC::SET_BIT(&iVar8, iVar0);
			}
		}
		iVar0++;
	}
	iVar9 = 9;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (MISC::IS_BIT_SET(iVar8, iVar0))
		{
			iVar11 = MISC::ABSI((func_1184(iVar0) - func_1184(iParam3)));
			if (iVar9 == 9 || iVar10 > iVar11)
			{
				iVar9 = iVar0;
				iVar10 = iVar11;
			}
		}
		iVar0++;
	}
	if (iVar9 != 9)
	{
		iVar1 = func_1184(iVar9);
		while (iParam2 > 0)
		{
			iVar4 = -1;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (uParam4->f_3[iVar3] == iVar9 && uParam4->f_8[iVar3] < iVar1)
				{
					iVar6 = uParam4->f_8[iVar3];
					if (iVar4 == -1 || iVar5 > iVar6)
					{
						iVar4 = iVar3;
						iVar5 = iVar6;
					}
				}
				iVar3++;
			}
			if (iVar4 != -1)
			{
				iVar7 = func_723(iParam2, (iVar1 - uParam4->f_8[iVar4]));
				uParam4->f_8[iVar4] += iVar7;
				iParam2 -= iVar7;
				if (uParam4->f_2 == -1)
				{
					uParam4->f_2 = iVar4;
					*uParam4 = iVar9;
				}
			}
			else
			{
				iVar4 = -1;
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (uParam4->f_8[iVar3] == 0)
					{
						iVar4 = iVar3;
					}
					iVar3++;
				}
				if (iVar4 != -1)
				{
					iVar7 = func_723(iParam2, (iVar1 - uParam4->f_8[iVar4]));
					uParam4->f_3[iVar4] = iVar9;
					uParam4->f_8[iVar4] += iVar7;
					iParam2 -= iVar7;
					if (uParam4->f_2 == -1)
					{
						uParam4->f_2 = iVar4;
						*uParam4 = iVar9;
					}
				}
			else
			{
				}
			else
			{
				}
				if (iParam2 > 0)
				{
					func_961((func_1217(&(uParam4->f_8)) + iParam2), &(uParam4->f_3), &(uParam4->f_8));
					iVar3 = 0;
					while (iVar3 < 4)
					{
						if (uParam4->f_8[iVar3] > 0)
						{
							uParam4->f_2 = iVar3;
							*uParam4 = uParam4->f_3[iVar3];
							return;
						}
						iVar3++;
					}
					uParam4->f_2 = 0;
					*uParam4 = uParam4->f_3[0];
				}
			}
		}
	}
}

void func_984(var uParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else if (((*uParam2 != 1 && *uParam2 != 2) && uParam2->f_1 != 1) && uParam2->f_1 != 2)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 10);
		if ((*uParam2 == 1 || *uParam2 == 2) && (uParam2->f_1 == 1 || uParam2->f_1 == 2))
		{
			iVar0 = 7;
		}
		else if ((*uParam2 == 1 || *uParam2 == 2) && uParam2->f_2)
		{
			iVar0 = 5;
		}
		else if ((uParam2->f_1 == 1 || uParam2->f_1 == 2) && uParam2->f_3)
		{
			iVar0 = 6;
		}
		else if (*uParam2 == 1 || *uParam2 == 2)
		{
			iVar0 = 0;
		}
		else if (uParam2->f_1 == 1 || uParam2->f_1 == 2)
		{
			iVar0 = 2;
		}
		uParam0->f_946[iParam1 /*46*/].f_17 = { *uParam3 /*13*/ };
		uParam0->f_946[iParam1 /*46*/].f_32 = iVar0;
		if (!uParam0->f_39)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "Take");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
		if (iVar0 == 0 || iVar0 == 2)
		{
			func_818(uParam0, iParam1, 10);
		}
		else
		{
			func_818(uParam0, iParam1, 11);
		}
	}
}

var func_985(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_112[iParam1 /*194*/].f_30.f_5[iParam2];
}

void func_986(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (uParam0->f_946[iParam1 /*46*/] == 0)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_6 != 1)
	{
	}
	else if (uParam0->f_946[iParam1 /*46*/].f_1 != 1)
	{
	}
	else
	{
		func_815(uParam0, iParam1, 11);
		iVar0 = 4;
		uParam0->f_946[iParam1 /*46*/].f_17 = { *uParam2 /*13*/ };
		uParam0->f_946[iParam1 /*46*/].f_32 = iVar0;
		if (!uParam0->f_39)
		{
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(uParam0->f_946[iParam1 /*46*/], "Take");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "CheckType", BUILTIN::TO_FLOAT(iVar0));
		}
		func_818(uParam0, iParam1, 10);
	}
}

int func_987(var uParam0)
{
	return func_1178(uParam0, 6, "script@mini_game@blackjack@insurance", "PBL_PEEK_REVEAL", 2);
}

void func_988(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_508(uParam0, iParam1, iParam2);
	iVar1 = func_647(uParam0);
	iVar2 = func_615(uParam0, iParam1);
	if (func_539(uParam0))
	{
		if (iParam4 > 0)
		{
			if (func_532(uParam0, iParam1))
			{
				*uParam5 = 1;
				*uParam6 = iParam4 * 2;
			}
			else
			{
				*uParam5 = 2;
				*uParam6 = iParam4 * 2;
			}
		}
		else if (func_532(uParam0, iParam1))
		{
			*uParam5 = 4;
			*uParam6 = 0;
		}
		else
		{
			*uParam5 = 5;
			*uParam6 = iParam3;
		}
	}
	else if ((iVar2 > 1 && iVar0 > iVar1) && iVar0 <= 21)
	{
		*uParam5 = 3;
		*uParam6 = iParam3;
	}
	else if (func_532(uParam0, iParam1))
	{
		*uParam5 = 3;
		*uParam6 = (iParam3 * 3 / 2);
	}
	else if (iVar0 > 21)
	{
		*uParam5 = 5;
		*uParam6 = iParam3;
	}
	else if (func_609(uParam0, iParam1, iParam2) >= 7)
	{
		*uParam5 = 3;
		*uParam6 = iParam3;
	}
	else if (iVar1 > 21)
	{
		*uParam5 = 3;
		*uParam6 = iParam3;
	}
	else if (iVar0 > iVar1)
	{
		*uParam5 = 3;
		*uParam6 = iParam3;
	}
	else if (iVar0 == iVar1)
	{
		*uParam5 = 4;
		*uParam6 = 0;
	}
	else
	{
		*uParam5 = 5;
		*uParam6 = iParam3;
	}
}

void func_989(int iParam0, bool bParam1, bool bParam2)
{
	func_1218(joaat("BLACKJACK"));
	if (bParam1)
	{
		func_774(func_1212(joaat("WINS"), joaat("BLACKJACK_DOUBLED_DOWN")), 1);
	}
	if (bParam2)
	{
		func_774(func_1212(joaat("WINS"), joaat("BLACKJACK_4_HITS")), 1);
	}
	switch (iParam0)
	{
		case 105:
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_GAMB_ROOT"), joaat("ACW_GAMB_RANK_06_BLACKJACK_RHO"), 1);
			break;
		case 92:
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_GAMB_ROOT"), joaat("ACW_GAMB_RANK_06_BLACKJACK_VAN"), 1);
			break;
	}
	func_1213(0);
}

void func_990(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!uParam0->f_1567.f_53)
	{
		return;
	}
	func_988(&(uParam0->f_17), iParam1, iParam2, uParam0->f_568[iParam1 /*7*/][iParam2], uParam0->f_568[iParam1 /*7*/].f_6, &iVar0, &iVar1);
	if (iVar0 == 5 || iVar0 == 2)
	{
		iVar1 = -iVar1;
	}
	uParam0->f_1567[iParam1 /*10*/].f_4 = (BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(uParam0->f_10.f_4));
	uParam0->f_1567[iParam1 /*10*/].f_7 = 0;
	uParam0->f_1567[iParam1 /*10*/].f_8 = 0;
	uParam0->f_1567[iParam1 /*10*/].f_9 = 0;
	if (iVar0 == 3)
	{
		if (uParam0->f_1567[iParam1 /*10*/].f_6 <= -3)
		{
			uParam0->f_1567[iParam1 /*10*/].f_7 = 1;
		}
		if (uParam0->f_1567[iParam1 /*10*/].f_6 < 0)
		{
			uParam0->f_1567[iParam1 /*10*/].f_6 = 1;
		}
		else
		{
			uParam0->f_1567[iParam1 /*10*/].f_6++;
		}
	}
	else if (iVar0 == 5 || iVar0 == 2)
	{
		if (uParam0->f_1567[iParam1 /*10*/].f_6 >= 3)
		{
			uParam0->f_1567[iParam1 /*10*/].f_7 = 1;
		}
		if (uParam0->f_1567[iParam1 /*10*/].f_6 > 0)
		{
			uParam0->f_1567[iParam1 /*10*/].f_6 = -1;
		}
		else
		{
			uParam0->f_1567[iParam1 /*10*/].f_6--;
		}
	}
	if (func_615(&(uParam0->f_17), iParam1) == 1 && func_1008(&(uParam0->f_17), iParam1, iParam2))
	{
		iVar2 = func_508(&(uParam0->f_17), iParam1, iParam2);
		iVar3 = func_647(&(uParam0->f_17));
		if (iVar2 <= 13)
		{
			uParam0->f_1567[iParam1 /*10*/].f_8 = 1;
		}
		if (iVar2 <= 21 && iVar3 <= 21)
		{
			if (iVar3 >= 19 && iVar2 > iVar3)
			{
				if (uParam0->f_1567[iParam1 /*10*/].f_5 < 0)
				{
					uParam0->f_1567[iParam1 /*10*/].f_5 = 1;
				}
				else
				{
					uParam0->f_1567[iParam1 /*10*/].f_5++;
				}
			}
			else if (iVar2 >= 19 && iVar2 < iVar3)
			{
				if (uParam0->f_1567[iParam1 /*10*/].f_5 > 0)
				{
					uParam0->f_1567[iParam1 /*10*/].f_5 = -1;
				}
				else
				{
					uParam0->f_1567[iParam1 /*10*/].f_5--;
				}
			}
			else
			{
				uParam0->f_1567[iParam1 /*10*/].f_5 = 0;
			}
		}
		else
		{
			uParam0->f_1567[iParam1 /*10*/].f_5 = 0;
		}
	}
	else
	{
		uParam0->f_1567[iParam1 /*10*/].f_5 = 0;
	}
	iVar4 = 0;
	iVar5 = func_615(&(uParam0->f_17), iParam1);
	if (iVar5 > 0)
	{
		iVar4 = 1;
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			if (!func_1219(&(uParam0->f_17), iParam1, iVar6))
			{
				iVar4 = 0;
			}
			iVar6++;
		}
	}
	uParam0->f_1567[iParam1 /*10*/].f_9 = iVar4;
}

int func_991(var uParam0)
{
	return func_1178(uParam0, 5, "script@mini_game@blackjack@insurance", "PBL_PEEK", 2);
}

int func_992(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	strcpy_s(&cVar0, 64, "PBL_WIN_");
	iVar8 = 0;
	while (iVar8 < 4)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			StringIntConCat(&cVar0, iVar8 + 1, 64);
		}
		iVar8++;
	}
	return func_1178(uParam0, 14, "script@mini_game@blackjack@pay_original_bets", &cVar0, 2);
}

bool func_993(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(&(uParam0->f_17), iVar0) && uParam0->f_568[iVar0 /*7*/].f_6 > 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_994(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_3;
}

bool func_995(var uParam0, int iParam1)
{
	if (iParam1 >= 0 && iParam1 < 4)
	{
		if (uParam0->f_27[iParam1 /*60*/].f_7 > 0)
		{
			if (uParam0->f_27[iParam1 /*60*/].f_1 >= uParam0->f_27[iParam1 /*60*/].f_4[0])
			{
				return true;
			}
		}
	}
	return false;
}

bool func_996(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/].f_23 > 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/].f_23)
		{
			if (uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/][iVar0 /*2*/] == iParam3)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_997(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 >= 0 && iParam1 < 4)
	{
		if ((uParam0->f_27[iParam1 /*60*/].f_59 == 1 && uParam0->f_27[iParam1 /*60*/].f_8[0 /*25*/].f_23 == 2) && uParam0->f_27[iParam1 /*60*/].f_8[0 /*25*/][0 /*2*/] == uParam0->f_27[iParam1 /*60*/].f_8[0 /*25*/][1 /*2*/])
		{
			if (!bParam2 || uParam0->f_27[iParam1 /*60*/].f_1 >= uParam0->f_27[iParam1 /*60*/].f_4[0])
			{
				return true;
			}
		}
	}
	return false;
}

bool func_998(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if ((iParam1 >= 0 && iParam1 < 4) && uParam0->f_27[iParam1 /*60*/].f_59 == 1)
	{
		iVar0 = uParam0->f_27[iParam1 /*60*/].f_3;
		if (iVar0 >= 0 && iVar0 < uParam0->f_27[iParam1 /*60*/].f_59)
		{
			if (uParam0->f_27[iParam1 /*60*/].f_8[iVar0 /*25*/].f_23 == 2)
			{
				if (!bParam2 || uParam0->f_27[iParam1 /*60*/].f_1 >= uParam0->f_27[iParam1 /*60*/].f_4[0])
				{
					return true;
				}
			}
		}
	}
	return false;
}

struct<16> /*128*/ func_999(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[128];

	strcpy_s(&cVar0, 128, "** Null **");
	if (bParam2)
	{
		if (iParam1 == uParam0->f_9)
		{
			strcpy_s(&cVar0, 128, MISC::VAR_STRING(2, "MGBLK_YOU" /* GXTEntry: "You" */));
			return cVar0;
		}
	}
	switch (uParam0->f_597[iParam1 /*19*/])
	{
		case 1:
		case 2:
			return uParam0->f_597[iParam1 /*19*/].f_1;
	}
	return cVar0;
}

void func_1000(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		func_1220(&(uParam0->f_40[iParam1 /*38*/]), bParam2);
	}
}

bool func_1001()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

int func_1002(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/].f_24;
	iVar1 = uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/].f_23;
	iVar2 = uParam0->f_27[iParam1 /*60*/].f_59;
	iVar3 = uParam0->f_2[0 /*2*/];
	iVar4 = 0;
	if (iVar1 == 2 && func_997(uParam0, iParam1, 1))
	{
		if (uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/][0 /*2*/] == 14 && uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/][1 /*2*/] == 14)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = func_623(iVar0, iVar3, 1);
		}
	}
	else
	{
		iVar4 = func_623(iVar0, iVar3, 0);
	}
	if (iVar4 == 4)
	{
		if (iVar1 > 2 || func_113(uParam0, iParam1) < func_492(uParam0, iParam1, iParam2))
		{
			iVar4 = 5;
		}
		if (iVar2 > 1)
		{
			iVar4 = 5;
		}
	}
	return iVar4;
}

void func_1003()
{
	func_1221(joaat("BLACKJACK"));
	func_1213(0);
}

int func_1004(var uParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	char cVar8[16];

	strcpy_s(&cVar0, 64, "script@mini_game@blackjack@hit_seat_0");
	StringIntConCat(&cVar0, iParam1 + 1, 64);
	strcpy_s(&cVar8, 16, "PBL_");
	if (iParam2 == 0)
	{
		strcat_s(&cVar8, 16, "A03_DBL");
	}
	else
	{
		strcat_s(&cVar8, 16, "B03_DBL");
	}
	return func_1178(uParam0, 3, &cVar0, &cVar8, 2);
}

int func_1005(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[64];
	char cVar8[16];

	strcpy_s(&cVar0, 64, "script@mini_game@blackjack@hit_seat_0");
	StringIntConCat(&cVar0, iParam1 + 1, 64);
	strcpy_s(&cVar8, 16, "PBL_");
	if (iParam2 == 0)
	{
		strcat_s(&cVar8, 16, "A");
	}
	else
	{
		strcat_s(&cVar8, 16, "B");
	}
	if (iParam3 + 1 < 10)
	{
		strcat_s(&cVar8, 16, "0");
	}
	StringIntConCat(&cVar8, iParam3 + 1, 16);
	return func_1178(uParam0, 2, &cVar0, &cVar8, 2);
}

int func_1006(var uParam0, int iParam1)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "script@mini_game@blackjack@hit_seat_0");
	StringIntConCat(&cVar0, iParam1 + 1, 64);
	return func_1178(uParam0, 4, &cVar0, "PBL_SPLIT", 2);
}

bool func_1007(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_532(uParam0, iParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_27[iParam1 /*60*/].f_59)
		{
			if (func_508(uParam0, iParam1, iVar0) <= 21 && func_609(uParam0, iParam1, iVar0) < 7)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1008(var uParam0, int iParam1, int iParam2)
{
	if ((!func_532(uParam0, iParam1) && func_508(uParam0, iParam1, iParam2) <= 21) && func_609(uParam0, iParam1, iParam2) < 7)
	{
		return true;
	}
	return false;
}

int func_1009(var uParam0)
{
	return func_1178(uParam0, 7, "script@mini_game@blackjack@hit_self", "PBL_REVEAL", 2);
}

int func_1010(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 2:
			return 2;
		case 3:
			return 3;
		case 4:
			return 4;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 7;
		case 8:
			return 8;
		case 9:
			return 9;
		case 10:
			return 10;
		case 11:
			return 10;
		case 12:
			return 10;
		case 13:
			return 10;
		case 14:
			return 11;
		default:
			break;
	}
	return 0;
}

int func_1011(var uParam0, bool bParam1)
{
	char cVar0[64];

	if (bParam1)
	{
		strcpy_s(&cVar0, 64, "PBL_CLEANUP_TO_SHUFFLE");
	}
	else
	{
		strcpy_s(&cVar0, 64, "PBL_CLEANUP_DISCARD");
	}
	return func_1178(uParam0, 17, "script@mini_game@blackjack@cleanup", &cVar0, 2);
}

bool func_1012(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_548[iVar0 /*3*/] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1013(var uParam0, int iParam1)
{
	if (uParam0->f_548[iParam1 /*3*/] != 0)
	{
		return false;
	}
	if (func_822(uParam0, iParam1))
	{
		return false;
	}
	uParam0->f_548[iParam1 /*3*/] = 2;
	return true;
}

float func_1014(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((sParam3.f_0 - sParam0.f_0), (sParam3.f_1 - sParam0.f_1));
}

bool func_1015(int iParam0)
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

int func_1016(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)
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
				func_1222(uParam3, 35);
				*iParam4++;
				func_1222(uParam3, 36);
				*iParam4++;
				func_1222(uParam3, 37);
				*iParam4++;
				func_1222(uParam3, 38);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 45);
				*iParam4++;
				func_1222(uParam3, 46);
				*iParam4++;
				func_1222(uParam3, 47);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 50);
				*iParam4++;
				func_1222(uParam3, 51);
				*iParam4++;
				func_1222(uParam3, 52);
				*iParam4++;
				func_1222(uParam3, 53);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_BLACKWATER_VAR_01"))
				{
					func_1222(uParam3, 63);
					*iParam4++;
					func_1222(uParam3, 64);
					*iParam4++;
				}
				func_1222(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_01"):
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_02"):
			case -216756988:
			case 368759504:
			case joaat("META_OUTFIT_EMERALDRANCH_VAR_03"):
			case 1633413521:
				func_1222(uParam3, 35);
				*iParam4++;
				func_1222(uParam3, 36);
				*iParam4++;
				func_1222(uParam3, 37);
				*iParam4++;
				func_1222(uParam3, 38);
				*iParam4++;
				func_1222(uParam3, 45);
				*iParam4++;
				func_1222(uParam3, 46);
				*iParam4++;
				func_1222(uParam3, 47);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 50);
				*iParam4++;
				func_1222(uParam3, 51);
				*iParam4++;
				func_1222(uParam3, 52);
				*iParam4++;
				func_1222(uParam3, 53);
				*iParam4++;
				func_1222(uParam3, 56);
				*iParam4++;
				if (iParam2 == joaat("META_OUTFIT_EMERALDRANCH_VAR_02"))
				{
					func_1222(uParam3, 63);
					*iParam4++;
					func_1222(uParam3, 64);
					*iParam4++;
				}
				func_1222(uParam3, 66);
				*iParam4++;
				func_1222(uParam3, 67);
				*iParam4++;
				func_1222(uParam3, 68);
				*iParam4++;
				func_1222(uParam3, 71);
				*iParam4++;
				func_1222(uParam3, 75);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_01"):
			case joaat("META_OUTFIT_SAINTDENIS_VAR_03"):
			case 1371088384:
			case 2106064285:
				func_1222(uParam3, 37);
				*iParam4++;
				func_1222(uParam3, 38);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 41);
				*iParam4++;
				func_1222(uParam3, 50);
				*iParam4++;
				func_1222(uParam3, 51);
				*iParam4++;
				func_1222(uParam3, 52);
				*iParam4++;
				func_1222(uParam3, 53);
				*iParam4++;
				break;
			case joaat("META_OUTFIT_SAINTDENIS_VAR_02"):
			case 1263868216:
				func_1222(uParam3, 34);
				*iParam4++;
				func_1222(uParam3, 58);
				*iParam4++;
				func_1222(uParam3, 61);
				*iParam4++;
				func_1222(uParam3, 73);
				*iParam4++;
				func_1222(uParam3, 76);
				*iParam4++;
				break;
			default:
				func_1222(uParam3, 1);
				*iParam4++;
				func_1222(uParam3, 2);
				*iParam4++;
				func_1222(uParam3, 3);
				*iParam4++;
				func_1222(uParam3, 4);
				*iParam4++;
				func_1222(uParam3, 5);
				*iParam4++;
				func_1222(uParam3, 6);
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
				func_1222(uParam3, 2);
				*iParam4++;
				func_1222(uParam3, 12);
				*iParam4++;
				func_1222(uParam3, 16);
				*iParam4++;
				func_1222(uParam3, 18);
				*iParam4++;
				func_1222(uParam3, 26);
				*iParam4++;
				func_1222(uParam3, 37);
				*iParam4++;
				func_1222(uParam3, 38);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 50);
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
				func_1222(uParam3, 1);
				*iParam4++;
				func_1222(uParam3, 2);
				*iParam4++;
				func_1222(uParam3, 16);
				*iParam4++;
				func_1222(uParam3, 18);
				*iParam4++;
				func_1222(uParam3, 26);
				*iParam4++;
				func_1222(uParam3, 37);
				*iParam4++;
				func_1222(uParam3, 38);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 50);
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
				func_1222(uParam3, 3);
				*iParam4++;
				func_1222(uParam3, 4);
				*iParam4++;
				func_1222(uParam3, 5);
				*iParam4++;
				func_1222(uParam3, 6);
				*iParam4++;
				func_1222(uParam3, 7);
				*iParam4++;
				func_1222(uParam3, 8);
				*iParam4++;
				func_1222(uParam3, 9);
				*iParam4++;
				func_1222(uParam3, 10);
				*iParam4++;
				func_1222(uParam3, 11);
				*iParam4++;
				func_1222(uParam3, 12);
				*iParam4++;
				func_1222(uParam3, 35);
				*iParam4++;
				func_1222(uParam3, 36);
				*iParam4++;
				func_1222(uParam3, 45);
				*iParam4++;
				func_1222(uParam3, 46);
				*iParam4++;
				func_1222(uParam3, 47);
				*iParam4++;
				func_1222(uParam3, 51);
				*iParam4++;
				func_1222(uParam3, 52);
				*iParam4++;
				func_1222(uParam3, 53);
				*iParam4++;
				func_1222(uParam3, 56);
				*iParam4++;
				func_1222(uParam3, 63);
				*iParam4++;
				func_1222(uParam3, 64);
				*iParam4++;
				func_1222(uParam3, 66);
				*iParam4++;
				func_1222(uParam3, 67);
				*iParam4++;
				func_1222(uParam3, 68);
				*iParam4++;
				func_1222(uParam3, 71);
				*iParam4++;
				func_1222(uParam3, 75);
				*iParam4++;
				break;
			case -1812506033:
			case -967360518:
				func_1222(uParam3, 7);
				*iParam4++;
				func_1222(uParam3, 8);
				*iParam4++;
				func_1222(uParam3, 9);
				*iParam4++;
				func_1222(uParam3, 10);
				*iParam4++;
				func_1222(uParam3, 11);
				*iParam4++;
				func_1222(uParam3, 12);
				*iParam4++;
				func_1222(uParam3, 14);
				*iParam4++;
				func_1222(uParam3, 17);
				*iParam4++;
				func_1222(uParam3, 34);
				*iParam4++;
				func_1222(uParam3, 58);
				*iParam4++;
				func_1222(uParam3, 73);
				*iParam4++;
				func_1222(uParam3, 76);
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
				func_1222(uParam3, 1);
				*iParam4++;
				func_1222(uParam3, 2);
				*iParam4++;
				func_1222(uParam3, 3);
				*iParam4++;
				func_1222(uParam3, 4);
				*iParam4++;
				func_1222(uParam3, 5);
				*iParam4++;
				func_1222(uParam3, 6);
				*iParam4++;
				func_1222(uParam3, 7);
				*iParam4++;
				func_1222(uParam3, 8);
				*iParam4++;
				func_1222(uParam3, 9);
				*iParam4++;
				func_1222(uParam3, 10);
				*iParam4++;
				func_1222(uParam3, 11);
				*iParam4++;
				func_1222(uParam3, 12);
				*iParam4++;
				func_1222(uParam3, 16);
				*iParam4++;
				func_1222(uParam3, 18);
				*iParam4++;
				func_1222(uParam3, 29);
				*iParam4++;
				func_1222(uParam3, 35);
				*iParam4++;
				func_1222(uParam3, 36);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 45);
				*iParam4++;
				func_1222(uParam3, 46);
				*iParam4++;
				func_1222(uParam3, 47);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 50);
				*iParam4++;
				func_1222(uParam3, 51);
				*iParam4++;
				func_1222(uParam3, 52);
				*iParam4++;
				func_1222(uParam3, 53);
				*iParam4++;
				func_1222(uParam3, 56);
				*iParam4++;
				func_1222(uParam3, 63);
				*iParam4++;
				func_1222(uParam3, 64);
				*iParam4++;
				func_1222(uParam3, 66);
				*iParam4++;
				func_1222(uParam3, 67);
				*iParam4++;
				func_1222(uParam3, 68);
				*iParam4++;
				func_1222(uParam3, 71);
				*iParam4++;
				func_1222(uParam3, 75);
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
				func_1222(uParam3, 1);
				*iParam4++;
				func_1222(uParam3, 2);
				*iParam4++;
				func_1222(uParam3, 16);
				*iParam4++;
				func_1222(uParam3, 18);
				*iParam4++;
				func_1222(uParam3, 26);
				*iParam4++;
				func_1222(uParam3, 37);
				*iParam4++;
				func_1222(uParam3, 38);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 50);
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
				func_1222(uParam3, 26);
				*iParam4++;
				func_1222(uParam3, 28);
				*iParam4++;
				func_1222(uParam3, 37);
				*iParam4++;
				func_1222(uParam3, 38);
				*iParam4++;
				func_1222(uParam3, 41);
				*iParam4++;
				func_1222(uParam3, 50);
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
				func_1222(uParam3, 1);
				*iParam4++;
				func_1222(uParam3, 2);
				*iParam4++;
				func_1222(uParam3, 7);
				*iParam4++;
				func_1222(uParam3, 8);
				*iParam4++;
				func_1222(uParam3, 9);
				*iParam4++;
				func_1222(uParam3, 10);
				*iParam4++;
				func_1222(uParam3, 11);
				*iParam4++;
				func_1222(uParam3, 12);
				*iParam4++;
				func_1222(uParam3, 15);
				*iParam4++;
				func_1222(uParam3, 16);
				*iParam4++;
				func_1222(uParam3, 35);
				*iParam4++;
				func_1222(uParam3, 36);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 51);
				*iParam4++;
				func_1222(uParam3, 52);
				*iParam4++;
				func_1222(uParam3, 53);
				*iParam4++;
				func_1222(uParam3, 56);
				*iParam4++;
				func_1222(uParam3, 63);
				*iParam4++;
				func_1222(uParam3, 64);
				*iParam4++;
				func_1222(uParam3, 66);
				*iParam4++;
				func_1222(uParam3, 67);
				*iParam4++;
				func_1222(uParam3, 68);
				*iParam4++;
				func_1222(uParam3, 71);
				*iParam4++;
				func_1222(uParam3, 75);
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
				func_1222(uParam3, 1);
				*iParam4++;
				func_1222(uParam3, 2);
				*iParam4++;
				func_1222(uParam3, 3);
				*iParam4++;
				func_1222(uParam3, 4);
				*iParam4++;
				func_1222(uParam3, 5);
				*iParam4++;
				func_1222(uParam3, 6);
				*iParam4++;
				func_1222(uParam3, 7);
				*iParam4++;
				func_1222(uParam3, 8);
				*iParam4++;
				func_1222(uParam3, 9);
				*iParam4++;
				func_1222(uParam3, 10);
				*iParam4++;
				func_1222(uParam3, 11);
				*iParam4++;
				func_1222(uParam3, 12);
				*iParam4++;
				func_1222(uParam3, 16);
				*iParam4++;
				func_1222(uParam3, 18);
				*iParam4++;
				func_1222(uParam3, 29);
				*iParam4++;
				func_1222(uParam3, 35);
				*iParam4++;
				func_1222(uParam3, 36);
				*iParam4++;
				func_1222(uParam3, 39);
				*iParam4++;
				func_1222(uParam3, 45);
				*iParam4++;
				func_1222(uParam3, 46);
				*iParam4++;
				func_1222(uParam3, 47);
				*iParam4++;
				func_1222(uParam3, 48);
				*iParam4++;
				func_1222(uParam3, 50);
				*iParam4++;
				func_1222(uParam3, 51);
				*iParam4++;
				func_1222(uParam3, 52);
				*iParam4++;
				func_1222(uParam3, 53);
				*iParam4++;
				func_1222(uParam3, 56);
				*iParam4++;
				func_1222(uParam3, 63);
				*iParam4++;
				func_1222(uParam3, 64);
				*iParam4++;
				func_1222(uParam3, 66);
				*iParam4++;
				func_1222(uParam3, 67);
				*iParam4++;
				func_1222(uParam3, 68);
				*iParam4++;
				func_1222(uParam3, 71);
				*iParam4++;
				func_1222(uParam3, 75);
				*iParam4++;
				break;
			case -240866616:
			case 487194674:
			case joaat("META_OUTFIT_TUMBLEWEED_VAR_02"):
			case 1934601404:
				func_1222(uParam3, 14);
				*iParam4++;
				func_1222(uParam3, 17);
				*iParam4++;
				func_1222(uParam3, 34);
				*iParam4++;
				func_1222(uParam3, 58);
				*iParam4++;
				func_1222(uParam3, 73);
				*iParam4++;
				func_1222(uParam3, 76);
				*iParam4++;
				break;
			default:
				return 0;
		}
	}
	return 1;
}

bool func_1017(var uParam0, int iParam1)
{
	return MISC::_IS_BIT_FLAG_SET(uParam0, iParam1);
}

int func_1018(int iParam0, int iParam1, var uParam2, int iParam3)
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
				func_1222(uParam2, 43);
				*iParam3++;
				func_1222(uParam2, 44);
				*iParam3++;
				func_1222(uParam2, 54);
				*iParam3++;
				func_1222(uParam2, 70);
				*iParam3++;
				break;
			default:
				func_1222(uParam2, 43);
				*iParam3++;
				func_1222(uParam2, 44);
				*iParam3++;
				func_1222(uParam2, 54);
				*iParam3++;
				func_1222(uParam2, 70);
				*iParam3++;
				return 0;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("A_M_M_CARDGAMEPLAYERS_01"):
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 3);
				*iParam3++;
				func_1222(uParam2, 4);
				*iParam3++;
				func_1222(uParam2, 5);
				*iParam3++;
				func_1222(uParam2, 6);
				*iParam3++;
				func_1222(uParam2, 7);
				*iParam3++;
				func_1222(uParam2, 8);
				*iParam3++;
				func_1222(uParam2, 9);
				*iParam3++;
				func_1222(uParam2, 10);
				*iParam3++;
				func_1222(uParam2, 11);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 13);
				*iParam3++;
				func_1222(uParam2, 14);
				*iParam3++;
				func_1222(uParam2, 15);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 17);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 29);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 35);
				*iParam3++;
				func_1222(uParam2, 36);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 45);
				*iParam3++;
				func_1222(uParam2, 46);
				*iParam3++;
				func_1222(uParam2, 47);
				*iParam3++;
				func_1222(uParam2, 48);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				func_1222(uParam2, 55);
				*iParam3++;
				func_1222(uParam2, 56);
				*iParam3++;
				func_1222(uParam2, 58);
				*iParam3++;
				func_1222(uParam2, 61);
				*iParam3++;
				func_1222(uParam2, 63);
				*iParam3++;
				func_1222(uParam2, 64);
				*iParam3++;
				func_1222(uParam2, 65);
				*iParam3++;
				func_1222(uParam2, 66);
				*iParam3++;
				func_1222(uParam2, 67);
				*iParam3++;
				func_1222(uParam2, 68);
				*iParam3++;
				func_1222(uParam2, 71);
				*iParam3++;
				func_1222(uParam2, 73);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				func_1222(uParam2, 82);
				*iParam3++;
				func_1222(uParam2, 84);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 28);
				*iParam3++;
				func_1222(uParam2, 41);
				*iParam3++;
				break;
			case joaat("A_M_M_VALTOWNFOLK_01"):
			case joaat("A_M_M_VALTOWNFOLK_02"):
			case joaat("S_M_M_VALCOWPOKE_01"):
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 3);
				*iParam3++;
				func_1222(uParam2, 4);
				*iParam3++;
				func_1222(uParam2, 5);
				*iParam3++;
				func_1222(uParam2, 6);
				*iParam3++;
				func_1222(uParam2, 7);
				*iParam3++;
				func_1222(uParam2, 8);
				*iParam3++;
				func_1222(uParam2, 9);
				*iParam3++;
				func_1222(uParam2, 10);
				*iParam3++;
				func_1222(uParam2, 11);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 13);
				*iParam3++;
				func_1222(uParam2, 14);
				*iParam3++;
				func_1222(uParam2, 15);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 17);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 29);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 35);
				*iParam3++;
				func_1222(uParam2, 36);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 45);
				*iParam3++;
				func_1222(uParam2, 46);
				*iParam3++;
				func_1222(uParam2, 47);
				*iParam3++;
				func_1222(uParam2, 48);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				func_1222(uParam2, 55);
				*iParam3++;
				func_1222(uParam2, 56);
				*iParam3++;
				func_1222(uParam2, 58);
				*iParam3++;
				func_1222(uParam2, 61);
				*iParam3++;
				func_1222(uParam2, 63);
				*iParam3++;
				func_1222(uParam2, 64);
				*iParam3++;
				func_1222(uParam2, 65);
				*iParam3++;
				func_1222(uParam2, 66);
				*iParam3++;
				func_1222(uParam2, 67);
				*iParam3++;
				func_1222(uParam2, 68);
				*iParam3++;
				func_1222(uParam2, 71);
				*iParam3++;
				func_1222(uParam2, 73);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				func_1222(uParam2, 82);
				*iParam3++;
				func_1222(uParam2, 84);
				*iParam3++;
				break;
			case joaat("U_M_M_VALGUNSMITH_01"):
				func_1222(uParam2, 84);
				*iParam3++;
				break;
			case joaat("U_M_M_VALDOCTOR_01"):
				func_1222(uParam2, 82);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWUPPERCLASS_01"):
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_O_BLWUPPERCLASS_01"):
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				break;
			case joaat("U_M_O_BLWGENERALSTOREOWNER_01"):
				func_1222(uParam2, 86);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWFOREMAN_01"):
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 7);
				*iParam3++;
				func_1222(uParam2, 8);
				*iParam3++;
				func_1222(uParam2, 9);
				*iParam3++;
				func_1222(uParam2, 10);
				*iParam3++;
				func_1222(uParam2, 11);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 13);
				*iParam3++;
				func_1222(uParam2, 14);
				*iParam3++;
				func_1222(uParam2, 15);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 17);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 48);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 61);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_O_SDUPPERCLASS_01"):
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 28);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 41);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				break;
			case joaat("A_M_M_RHDUPPERCLASS_01"):
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 28);
				*iParam3++;
				func_1222(uParam2, 29);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				break;
			case joaat("A_M_M_RHDFOREMAN_01"):
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 28);
				*iParam3++;
				func_1222(uParam2, 29);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				func_1222(uParam2, 63);
				*iParam3++;
				func_1222(uParam2, 64);
				*iParam3++;
				break;
			case joaat("U_M_M_RHDGENSTOREOWNER_01"):
				func_1222(uParam2, 80);
				*iParam3++;
				break;
			case joaat("A_M_M_VHTTHUG_01"):
			case joaat("A_M_M_VHTTOWNFOLK_01"):
				func_1222(uParam2, 3);
				*iParam3++;
				func_1222(uParam2, 4);
				*iParam3++;
				func_1222(uParam2, 5);
				*iParam3++;
				func_1222(uParam2, 6);
				*iParam3++;
				func_1222(uParam2, 14);
				*iParam3++;
				func_1222(uParam2, 15);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 17);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 29);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 35);
				*iParam3++;
				func_1222(uParam2, 36);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 45);
				*iParam3++;
				func_1222(uParam2, 46);
				*iParam3++;
				func_1222(uParam2, 47);
				*iParam3++;
				func_1222(uParam2, 48);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				func_1222(uParam2, 55);
				*iParam3++;
				func_1222(uParam2, 56);
				*iParam3++;
				func_1222(uParam2, 58);
				*iParam3++;
				func_1222(uParam2, 61);
				*iParam3++;
				func_1222(uParam2, 62);
				*iParam3++;
				func_1222(uParam2, 63);
				*iParam3++;
				func_1222(uParam2, 64);
				*iParam3++;
				func_1222(uParam2, 65);
				*iParam3++;
				func_1222(uParam2, 66);
				*iParam3++;
				func_1222(uParam2, 67);
				*iParam3++;
				func_1222(uParam2, 68);
				*iParam3++;
				func_1222(uParam2, 71);
				*iParam3++;
				func_1222(uParam2, 73);
				*iParam3++;
				func_1222(uParam2, 79);
				*iParam3++;
				break;
			case joaat("A_M_M_BLWLABORER_01"):
			case joaat("A_M_M_BLWLABORER_02"):
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 3);
				*iParam3++;
				func_1222(uParam2, 4);
				*iParam3++;
				func_1222(uParam2, 5);
				*iParam3++;
				func_1222(uParam2, 6);
				*iParam3++;
				func_1222(uParam2, 7);
				*iParam3++;
				func_1222(uParam2, 8);
				*iParam3++;
				func_1222(uParam2, 9);
				*iParam3++;
				func_1222(uParam2, 10);
				*iParam3++;
				func_1222(uParam2, 11);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 13);
				*iParam3++;
				func_1222(uParam2, 14);
				*iParam3++;
				func_1222(uParam2, 15);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 17);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 35);
				*iParam3++;
				func_1222(uParam2, 36);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 45);
				*iParam3++;
				func_1222(uParam2, 46);
				*iParam3++;
				func_1222(uParam2, 47);
				*iParam3++;
				func_1222(uParam2, 48);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				func_1222(uParam2, 61);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_M_MIDDLESDTOWNFOLK_03"):
			case joaat("A_M_M_MIDDLESDTOWNFOLK_02"):
			case joaat("A_M_M_MIDDLESDTOWNFOLK_01"):
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 26);
				*iParam3++;
				func_1222(uParam2, 28);
				*iParam3++;
				func_1222(uParam2, 29);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 34);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 39);
				*iParam3++;
				func_1222(uParam2, 41);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				break;
			case joaat("A_M_M_EMRFARMHAND_01"):
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 3);
				*iParam3++;
				func_1222(uParam2, 4);
				*iParam3++;
				func_1222(uParam2, 5);
				*iParam3++;
				func_1222(uParam2, 6);
				*iParam3++;
				func_1222(uParam2, 7);
				*iParam3++;
				func_1222(uParam2, 8);
				*iParam3++;
				func_1222(uParam2, 9);
				*iParam3++;
				func_1222(uParam2, 10);
				*iParam3++;
				func_1222(uParam2, 11);
				*iParam3++;
				func_1222(uParam2, 12);
				*iParam3++;
				func_1222(uParam2, 13);
				*iParam3++;
				func_1222(uParam2, 14);
				*iParam3++;
				func_1222(uParam2, 15);
				*iParam3++;
				func_1222(uParam2, 16);
				*iParam3++;
				func_1222(uParam2, 17);
				*iParam3++;
				func_1222(uParam2, 18);
				*iParam3++;
				func_1222(uParam2, 29);
				*iParam3++;
				func_1222(uParam2, 30);
				*iParam3++;
				func_1222(uParam2, 31);
				*iParam3++;
				func_1222(uParam2, 35);
				*iParam3++;
				func_1222(uParam2, 36);
				*iParam3++;
				func_1222(uParam2, 37);
				*iParam3++;
				func_1222(uParam2, 38);
				*iParam3++;
				func_1222(uParam2, 45);
				*iParam3++;
				func_1222(uParam2, 46);
				*iParam3++;
				func_1222(uParam2, 47);
				*iParam3++;
				func_1222(uParam2, 48);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				func_1222(uParam2, 55);
				*iParam3++;
				func_1222(uParam2, 56);
				*iParam3++;
				func_1222(uParam2, 58);
				*iParam3++;
				func_1222(uParam2, 61);
				*iParam3++;
				func_1222(uParam2, 65);
				*iParam3++;
				func_1222(uParam2, 66);
				*iParam3++;
				func_1222(uParam2, 67);
				*iParam3++;
				func_1222(uParam2, 68);
				*iParam3++;
				func_1222(uParam2, 71);
				*iParam3++;
				func_1222(uParam2, 73);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				break;
			case joaat("A_M_M_TUMTOWNFOLK_01"):
			case joaat("A_M_M_TUMTOWNFOLK_02"):
				func_1222(uParam2, 45);
				*iParam3++;
				func_1222(uParam2, 46);
				*iParam3++;
				func_1222(uParam2, 47);
				*iParam3++;
				func_1222(uParam2, 48);
				*iParam3++;
				func_1222(uParam2, 49);
				*iParam3++;
				func_1222(uParam2, 50);
				*iParam3++;
				func_1222(uParam2, 51);
				*iParam3++;
				func_1222(uParam2, 52);
				*iParam3++;
				func_1222(uParam2, 53);
				*iParam3++;
				func_1222(uParam2, 55);
				*iParam3++;
				func_1222(uParam2, 56);
				*iParam3++;
				func_1222(uParam2, 58);
				*iParam3++;
				func_1222(uParam2, 61);
				*iParam3++;
				func_1222(uParam2, 63);
				*iParam3++;
				func_1222(uParam2, 64);
				*iParam3++;
				func_1222(uParam2, 65);
				*iParam3++;
				func_1222(uParam2, 66);
				*iParam3++;
				func_1222(uParam2, 67);
				*iParam3++;
				func_1222(uParam2, 68);
				*iParam3++;
				func_1222(uParam2, 71);
				*iParam3++;
				func_1222(uParam2, 73);
				*iParam3++;
				func_1222(uParam2, 74);
				*iParam3++;
				func_1222(uParam2, 75);
				*iParam3++;
				func_1222(uParam2, 76);
				*iParam3++;
				break;
			case joaat("S_M_M_BLWDEALER_01"):
			case joaat("S_M_M_RHDDEALER_01"):
				func_1222(uParam2, 87);
				*iParam3++;
				func_1222(uParam2, 89);
				*iParam3++;
				func_1222(uParam2, 90);
				*iParam3++;
				func_1222(uParam2, 91);
				*iParam3++;
				break;
			case joaat("S_M_M_VHTDEALER_01"):
				func_1222(uParam2, 62);
				*iParam3++;
				func_1222(uParam2, 79);
				*iParam3++;
				break;
			default:
				func_1222(uParam2, 1);
				*iParam3++;
				func_1222(uParam2, 2);
				*iParam3++;
				func_1222(uParam2, 3);
				*iParam3++;
				func_1222(uParam2, 4);
				*iParam3++;
				func_1222(uParam2, 5);
				*iParam3++;
				func_1222(uParam2, 6);
				*iParam3++;
				return 0;
		}
	}
	return 1;
}

char* func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, "MGBLK_NAME_ARTHUR" /* GXTEntry: "Arthur" */);
		case 2:
			return MISC::VAR_STRING(2, "MGBLK_NAME_JOHN" /* GXTEntry: "John" */);
		case 3:
			return MISC::VAR_STRING(2, "MGBLK_NAME_OPPONENT" /* GXTEntry: "Opponent" */);
		case 4:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_0" /* GXTEntry: "George" */);
		case 5:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_1" /* GXTEntry: "Walter" */);
		case 6:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_2" /* GXTEntry: "Herman" */);
		case 7:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_3" /* GXTEntry: "Jacob" */);
		case 8:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_4" /* GXTEntry: "Harry" */);
		case 9:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_5" /* GXTEntry: "Fred" */);
		case 10:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_6" /* GXTEntry: "Ernest" */);
		case 11:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_7" /* GXTEntry: "Albert" */);
		case 12:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_8" /* GXTEntry: "Clarence" */);
		case 13:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_9" /* GXTEntry: "Clyde" */);
		case 14:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_10" /* GXTEntry: "Willis" */);
		case 15:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_11" /* GXTEntry: "Stanley" */);
		case 16:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_12" /* GXTEntry: "Dewey" */);
		case 17:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_13" /* GXTEntry: "Ira" */);
		case 18:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_14" /* GXTEntry: "Everett" */);
		case 19:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_15" /* GXTEntry: "Emil" */);
		case 20:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_16" /* GXTEntry: "Virgil" */);
		case 21:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_17" /* GXTEntry: "Bob" */);
		case 22:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_18" /* GXTEntry: "Sylvester" */);
		case 23:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_19" /* GXTEntry: "Curtis" */);
		case 24:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_20" /* GXTEntry: "Jake" */);
		case 25:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_21" /* GXTEntry: "Marvin" */);
		case 26:
			return MISC::VAR_STRING(2, "MGBLK_NAME_AMB_22" /* GXTEntry: "Perry" */);
		default:
			break;
	}
	return "** Invalid(char) **";
}

var func_1020(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*10*/])->f_1;
}

var func_1021(var uParam0, int iParam1)
{
	return (uParam0[iParam1 /*10*/])->f_2;
}

bool func_1022(int iParam0, int iParam1)
{
	return iParam0 >= BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam1) * 1.333f));
}

bool func_1023(int iParam0, int iParam1)
{
	return iParam0 < BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam1) * 0.5f));
}

bool func_1024(int iParam0)
{
	return iParam0 == 0;
}

bool func_1025(int iParam0, int iParam1)
{
	return (iParam0 == 0 && iParam1 < 5);
}

void func_1026(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
	}
	else if (!uParam0->f_230[iParam1 /*2*/])
	{
	}
	else
	{
		func_1223(uParam0, iParam1);
		func_452(uParam0, iParam1);
	}
}

void func_1027(var uParam0)
{
	if (*uParam0 == 0)
	{
	}
	else
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(*uParam0);
		*uParam0 = 0;
	}
}

void func_1028(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		if (uParam0->f_14[iVar0] == iParam1)
		{
			MISC::CLEAR_BIT(&(uParam0->f_22), iVar0);
			MISC::CLEAR_BIT(&(uParam0->f_23), iVar0);
			if (uParam0->f_10 == iVar0)
			{
				uParam0->f_10 = -1;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14[iVar0]))
			{
			}
			uParam0->f_14[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_1029(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_195 = 0;
}

void func_1030(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "player_stack_item", uParam0->f_40[iParam1 /*38*/].f_1);
	MISC::SET_BIT(&(uParam0->f_195), iParam1);
}

void func_1031(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_36, bParam1);
}

void func_1032(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, bParam1);
}

void func_1033(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_946[iParam1 /*46*/].f_33 = iParam2;
}

float func_1034(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 < fParam1)
	{
		return fParam1;
	}
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	return fParam0;
}

void func_1035(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_40)
	{
		if (uParam0->f_40[iVar0 /*38*/])
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_40[iVar0 /*38*/].f_6, iVar0 == iParam1);
		}
		iVar0++;
	}
	uParam0->f_194 = iParam1;
	uParam0->f_193 = MISC::GET_FRAME_COUNT() + 30;
}

char* func_1036(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, "MGBLK_MSG_BUYIN_REQUIRED" /* GXTEntry: "Select how much you would like to buy-in for." */);
		case 2:
			return MISC::VAR_STRING(2, "MGBLK_MSG_BROKE" /* GXTEntry: "You cannot afford the minimum buy-in of ~1$~." */, sParam1);
		case 3:
			return MISC::VAR_STRING(2, "MGBLK_MSG_BETTING_STARTED" /* GXTEntry: "Players must place a bet to play." */);
		case 4:
			return MISC::VAR_STRING(2, "MGBLK_MSG_BETTING_STARTED_BUYIN" /* GXTEntry: "You have bought in for ~1$~. Players must place a bet to play. After betting you " +
    "will receive two cards." */, sParam1);
		case 5:
			return MISC::VAR_STRING(2, "MGBLK_MSG_FIRST_DEAL" /* GXTEntry: "In blackjack everyone, including the dealer, is dealt two cards." */);
		case 6:
			return MISC::VAR_STRING(2, "MGBLK_MSG_FIRST_TURN_GOAL" /* GXTEntry: "The goal is for your cards to total as close as possible to 21 without going over" +
    "." */);
		case 7:
			return MISC::VAR_STRING(2, "MGBLK_MSG_FIRST_TURN_INFO" /* GXTEntry: "Choose to \"stand\" if you are happy with your score, \"hit\" to be dealt another car" +
    "d, or \"double down\" to double your bet and be dealt only one more card." */);
		case 8:
			return MISC::VAR_STRING(2, "MGBLK_MSG_INSURANCE_STARTED" /* GXTEntry: "The dealer is showing an ace.~n~Players can protect themselves by placing an insu" +
    "rance bet, which will payout 2:1 if he has blackjack." */);
		case 9:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_CHECK_BJ" /* GXTEntry: "The dealer is checking if he has blackjack. This happens when he is showing an ac" +
    "e, ten, or picture card." */);
		case 10:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_HAS_BJ_INS_LOSE" /* GXTEntry: "The dealer has blackjack.~n~Your insurance bet pays out, but you lose your main b" +
    "et." */);
		case 11:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_HAS_BJ_INS_PUSH" /* GXTEntry: "The dealer has blackjack, and so do you.~n~Your insurance bet pays out, and your " +
    "main bet is \'pushed\' which returns your chips." */);
		case 12:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_HAS_BJ" /* GXTEntry: "The dealer has blackjack." */);
		case 13:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_HAS_BJ_PUSH" /* GXTEntry: "The dealer has blackjack, and so do you. Your bet is \'pushed\' which returns your " +
    "chips." */);
		case 14:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_NO_BJ_INS" /* GXTEntry: "The dealer doesn\'t have blackjack.~n~All insurance bets lose." */);
		case 15:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_NO_BJ" /* GXTEntry: "The dealer doesn\'t have blackjack." */);
		case 16:
			return MISC::VAR_STRING(2, "MGBLK_MSG_PLAYER_BJ" /* GXTEntry: "You have blackjack, which pays 3:2.~n~You won ~1$~." */, sParam1);
		case 17:
			return MISC::VAR_STRING(2, "MGBLK_MSG_OTHERS_BJ" /* GXTEntry: "Other players have blackjack, which pays 3:2." */);
		case 18:
			return MISC::VAR_STRING(2, "MGBLK_MSG_CANT_DOUBLE" /* GXTEntry: "You don\'t have enough chips to double down." */);
		case 19:
			return MISC::VAR_STRING(2, "MGBLK_MSG_CANT_DOUBLE_SPLIT" /* GXTEntry: "You don\'t have enough chips to double down or split." */);
		case 20:
			return MISC::VAR_STRING(2, "MGBLK_MSG_SPLIT_ACES" /* GXTEntry: "Aces can be worth 1 or 11.~n~If you split aces, your hand will end with no opport" +
    "unity to hit." */);
		case 21:
			return MISC::VAR_STRING(2, "MGBLK_MSG_ACE_CANT_DOUBLE" /* GXTEntry: "Aces can be worth 1 or 11.~n~You don\'t have enough chips to double down." */);
		case 22:
			return MISC::VAR_STRING(2, "MGBLK_MSG_ACE_CANT_DOUBLE_SPLIT" /* GXTEntry: "Aces can be worth 1 or 11.~n~You don\'t have enough chips to double down or split." +
    "" */);
		case 23:
			return MISC::VAR_STRING(2, "MGBLK_MSG_ACE_11" /* GXTEntry: "Aces can be worth 1 or 11." */);
		case 24:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_CARDS" /* GXTEntry: "Dealer has ~1~." */, sParam1);
		case 25:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_STAND" /* GXTEntry: "Dealer stands on ~1~." */, sParam1);
		case 26:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_STAND_PUSH" /* GXTEntry: "Dealer stands on ~1~, which is the same as your score so your bet is \'pushed\' whi" +
    "ch returns your chips." */, sParam1);
		case 27:
			return MISC::VAR_STRING(2, "MGBLK_MSG_DEALER_BUST" /* GXTEntry: "Dealer busts with ~1~." */, sParam1);
		default:
			break;
	}
	return "";
}

int func_1037(var uParam0)
{
	if (!func_477(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_1187(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_1224() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

int func_1038(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_1039(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_1038(sParam0, -1, iParam1, iParam2, 0, bParam3);
}

char* func_1040(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_22, iParam1))
	{
		return "";
	}
	if (!MISC::IS_BIT_SET(uParam0->f_23, iParam1))
	{
		return "";
	}
	return NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD(iParam1, uParam0->f_27);
}

struct<2> /*16*/ func_1041(int iParam0)
{
	struct<2> /*16*/ sVar0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &sVar0);
	return sVar0;
}

char* func_1042(int iParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, func_1225());
	strcat_s(&cVar0, 64, func_1226(iParam0));
	return func_1227(cVar0);
}

void func_1043(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_1228(iParam1))
		{
			func_1229(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_1230(iParam0, 0, 1);
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
			func_1231(iParam0, 0);
			bVar0 = true;
		}
		func_1232(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_1044(int iParam0)
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

bool func_1045(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_548[iParam1 /*3*/] == 2)
	{
		*uParam2 = { uParam0->f_548[iParam1 /*3*/] /*3*/ };
		uParam0->f_548[iParam1 /*3*/] = 0;
		return true;
	}
	return false;
}

void func_1046(var uParam0, int iParam1)
{
	func_1233(uParam0, iParam1);
	func_1234(uParam0, iParam1);
}

void func_1047(var uParam0, int iParam1)
{
	uParam0->f_580 = iParam1;
}

bool func_1048(var uParam0, int iParam1, var uParam2)
{
	if (uParam0->f_548[iParam1 /*3*/] == 1)
	{
		*uParam2 = { uParam0->f_548[iParam1 /*3*/] /*3*/ };
		uParam0->f_548[iParam1 /*3*/] = 0;
		return true;
	}
	return false;
}

void func_1049(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (uParam0->f_581 != 0)
	{
	}
	uParam0->f_581 = iParam1;
}

int func_1050(var uParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	if (func_1065(uParam0, iParam1, &sVar0) && sVar0.f_0 == 1)
	{
		func_1066(uParam0, iParam1, &sVar0);
		return sVar0.f_1;
	}
	return 0;
}

int func_1051(var uParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	if (func_1065(uParam0, iParam1, &sVar0) && sVar0.f_0 == 2)
	{
		func_1066(uParam0, iParam1, &sVar0);
		return sVar0.f_1;
	}
	return -1;
}

void func_1052(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = uParam0->f_27[iParam1 /*60*/].f_7;
	uParam0->f_27[iParam1 /*60*/].f_4[iVar0] = 0;
	uParam0->f_27[iParam1 /*60*/].f_7++;
}

bool func_1053(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if ((((func_116(uParam0, iParam1) && iParam3 > 0) && iParam3 <= func_113(uParam0, iParam1)) && iParam2 >= 0) && iParam2 < func_759(uParam0, iParam1))
	{
		uParam0->f_27[iParam1 /*60*/].f_1 -= iParam3;
		func_1070(uParam0, iParam1, iParam2, (func_492(uParam0, iParam1, iParam2) + iParam3));
		return true;
	}
	return false;
}

void func_1054(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == uParam0->f_582)
	{
		iVar0 = joaat("BLACKJACKEVENTACTIONINVALID");
		MINIGAME::_0xE1F365C4C8F259D8(iVar0, &iVar0, 1);
	}
}

int func_1055(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1056(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar0) && uParam0->f_27[iVar0 /*60*/].f_7 == 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_1057(var uParam0)
{
	var uVar0;
	int iVar24;

	uVar0 = 11;
	iVar24 = 0;
	while (iVar24 < 4)
	{
		if (func_116(uParam0, iVar24))
		{
			if (func_759(uParam0, iVar24) > 0 && func_492(uParam0, iVar24, 0) > 0)
			{
				if (!func_1072(uParam0, &uVar0, 2))
				{
					return false;
				}
				func_1235(uParam0, iVar24, &uVar0);
			}
		}
		iVar24++;
	}
	if (!func_1072(uParam0, &uVar0, 2))
	{
		return false;
	}
	func_1236(uParam0, &uVar0);
	return true;
}

int func_1058(var uParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	if (func_1065(uParam0, iParam1, &sVar0) && sVar0.f_0 == 3)
	{
		func_1066(uParam0, iParam1, &sVar0);
		return sVar0.f_1;
	}
	return -1;
}

bool func_1059(var uParam0, int iParam1, int iParam2)
{
	return (((((((((iParam2 >= 0 && func_116(uParam0, iParam1)) && func_615(uParam0, iParam1) > 0) && func_113(uParam0, iParam1) >= iParam2) && func_759(uParam0, iParam1) == 1) && func_492(uParam0, iParam1, 0) >= (2 * iParam2)) && func_549(uParam0, iParam1) == -1) && uParam0->f_2.f_23 > 0) && uParam0->f_2.f_23 <= 2) && uParam0->f_2[(uParam0->f_2.f_23 - 1) /*2*/] == 14);
}

bool func_1060(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (uParam0->f_27[iVar0 /*60*/].f_59 > 0)
		{
			if (uParam0->f_27[iVar0 /*60*/].f_2 == -1)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_1061(var uParam0)
{
	if (uParam0->f_23 == 2 && uParam0->f_24 == 21)
	{
		return true;
	}
	return false;
}

void func_1062(var uParam0, int iParam1, int iParam2)
{
	if (func_1068(uParam0, iParam1, iParam2))
	{
		if (func_1061(&(uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/])) && uParam0->f_27[iParam1 /*60*/].f_59 == 1)
		{
			uParam0->f_27[iParam1 /*60*/].f_1 += BUILTIN::FLOOR((2.5f * BUILTIN::TO_FLOAT(uParam0->f_27[iParam1 /*60*/].f_4[iParam2])));
		}
		else
		{
			uParam0->f_27[iParam1 /*60*/].f_1 += (2 * uParam0->f_27[iParam1 /*60*/].f_4[iParam2]);
		}
		func_1070(uParam0, iParam1, iParam2, 0);
	}
}

bool func_1063(var uParam0, int iParam1)
{
	return (func_280(uParam0, iParam1) && uParam0->f_27[iParam1 /*60*/].f_3 < uParam0->f_27[iParam1 /*60*/].f_59);
}

void func_1064(var uParam0)
{
	uParam0->f_699 = 0;
	func_187(&(uParam0->f_589));
}

bool func_1065(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 == uParam0->f_582)
	{
		if (uParam0->f_579 <= 0)
		{
			return false;
		}
		*uParam2 = { uParam0->f_570[0 /*2*/] /*2*/ };
		return true;
	}
	if (uParam0->f_561[iParam1 /*2*/] == 0)
	{
		return false;
	}
	*uParam2 = { uParam0->f_561[iParam1 /*2*/] /*2*/ };
	return true;
}

bool func_1066(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 == uParam0->f_582)
	{
		if (uParam0->f_579 <= 0)
		{
			return false;
		}
		*iParam2 = { uParam0->f_570[0 /*2*/] /*2*/ };
		if (uParam0->f_579 > 1)
		{
			iVar0 = 0;
			while (iVar0 < (uParam0->f_579 - 1))
			{
				uParam0->f_570[iVar0 /*2*/] = { uParam0->f_570[iVar0 + 1 /*2*/] /*2*/ };
				iVar0++;
			}
		}
		uParam0->f_570[(uParam0->f_579 - 1) /*2*/] = 0;
		uParam0->f_579--;
		return true;
	}
	if (uParam0->f_561[iParam1 /*2*/] == 0)
	{
		return false;
	}
	*iParam2 = { uParam0->f_561[iParam1 /*2*/] /*2*/ };
	uParam0->f_561[iParam1 /*2*/] = 0;
	return true;
}

bool func_1067(var uParam0, int iParam1, var uParam2)
{
	struct<2> /*16*/ sVar0[11];
	struct<24> /*192*/ sVar24;
	struct<2> /*16*/ sVar48[11];
	struct<24> /*192*/ sVar72;
	var uVar96;
	int iVar120;
	int iVar121;

	if (!func_1237(uParam0, &(uParam0->f_27[iParam1 /*60*/]), uParam2))
	{
		return false;
	}
	sVar24 = 11;
	sVar72 = 11;
	uVar96 = 11;
	iVar120 = uParam0->f_27[iParam1 /*60*/].f_3;
	iVar121 = uParam0->f_27[iParam1 /*60*/].f_4[iVar120];
	switch (*uParam2)
	{
		case 4:
			if (!func_1053(uParam0, iParam1, iVar120, iVar121))
			{
				return false;
			}
			if (!func_1072(uParam0, &uVar96, 1))
			{
				return false;
			}
			func_1238(uParam0, iParam1, iVar120, &uVar96);
			uParam0->f_699 = 1;
			break;
		case 5:
			if (!func_1072(uParam0, &uVar96, 1))
			{
				return false;
			}
			func_1238(uParam0, iParam1, iVar120, &uVar96);
			break;
		case 6:
			if (!func_1072(uParam0, &sVar0, 1))
			{
				return false;
			}
			if (!func_1072(uParam0, &sVar48, 1))
			{
				return false;
			}
			sVar24[0 /*2*/] = { uParam0->f_27[iParam1 /*60*/].f_8[iVar120 /*25*/][1 /*2*/] /*2*/ };
			sVar24[1 /*2*/] = { sVar0[0 /*2*/] /*2*/ };
			sVar24.f_23 = 2;
			sVar72[0 /*2*/] = { uParam0->f_27[iParam1 /*60*/].f_8[iVar120 /*25*/][0 /*2*/] /*2*/ };
			sVar72[1 /*2*/] = { sVar48[0 /*2*/] /*2*/ };
			sVar72.f_23 = 2;
			func_1052(uParam0, iParam1);
			if (!func_1053(uParam0, iParam1, iVar120 + 1, iVar121))
			{
				return false;
			}
			func_1239(uParam0, iParam1);
			func_1235(uParam0, iParam1, &sVar24);
			func_1235(uParam0, iParam1, &sVar72);
			if (uParam0->f_27[iParam1 /*60*/].f_8[iVar120 /*25*/][0 /*2*/] == 14)
			{
				uParam0->f_699 = 2;
			}
			break;
		case 7:
			uParam0->f_699 = 1;
			break;
		default:
			return false;
	}
	return true;
}

bool func_1068(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 >= 0 && iParam2 < uParam0->f_27[iParam1 /*60*/].f_59)
	{
		return true;
	}
	return false;
}

bool func_1069(var uParam0)
{
	if (uParam0->f_24 > 21)
	{
		return true;
	}
	return false;
}

void func_1070(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_27[iParam1 /*60*/].f_4[iParam2] = iParam3;
}

void func_1071(var uParam0)
{
	func_214(&(uParam0->f_589));
}

bool func_1072(var uParam0, var uParam1, int iParam2)
{
	uParam1->f_23 = 0;
	while (uParam1->f_23 < iParam2)
	{
		if (!func_1240(&(uParam0->f_592), uParam1[uParam1->f_23 /*2*/]))
		{
			return false;
		}
		uParam1->f_23++;
	}
	return true;
}

void func_1073(var uParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = joaat("BLACKJACKEVENTGAMECANCELLED");
	sVar0.f_1 = iParam1;
	MINIGAME::_0xE1F365C4C8F259D8(sVar0.f_0, &sVar0, 2);
}

void func_1074(var uParam0, var uParam1)
{
	func_1241(&(uParam0->f_2), uParam1);
}

void func_1075(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_280(uParam0, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_27[iVar0 /*60*/].f_59)
			{
				if (uParam0->f_27[iVar0 /*60*/].f_4[iVar1] > 0)
				{
					iVar2 = func_1242(&(uParam0->f_27[iVar0 /*60*/].f_8[iVar1 /*25*/]), &(uParam0->f_2));
					if (iVar2 < 0)
					{
						func_1070(uParam0, iVar0, iVar1, 0);
					}
					else if (iVar2 > 0)
					{
						func_1062(uParam0, iVar0, iVar1);
					}
					else
					{
						func_1243(uParam0, iVar0, iVar1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_1076(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_116(uParam0, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < uParam0->f_27[iVar0 /*60*/].f_7)
			{
				uParam0->f_27[iVar0 /*60*/].f_1 += uParam0->f_27[iVar0 /*60*/].f_4[iVar1];
				func_1070(uParam0, iVar0, iVar1, 0);
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_1077(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (func_822(uParam0, iParam1))
	{
		return 0;
	}
	if (iParam1 == uParam0->f_582)
	{
		if (uParam0->f_579 >= 4)
		{
			return 0;
		}
		iVar0 = uParam0->f_579;
		uParam0->f_570[iVar0 /*2*/] = iParam2;
		uParam0->f_570[iVar0 /*2*/].f_1 = iParam3;
		uParam0->f_579++;
		return 1;
	}
	if (uParam0->f_561[iParam1 /*2*/] != 0)
	{
		return 0;
	}
	uParam0->f_561[iParam1 /*2*/] = iParam2;
	uParam0->f_561[iParam1 /*2*/].f_1 = iParam3;
	return 1;
}

void func_1078(int iParam0)
{
	if (!func_1244(iParam0))
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

void func_1079(var uParam0, int iParam1)
{
	if (!uParam0->f_946[iParam1 /*46*/].f_37)
	{
		uParam0->f_946[iParam1 /*46*/].f_37 = 1;
	}
}

void func_1080(var uParam0, var uParam1)
{
	if (uParam0->f_42 == 0)
	{
		return;
	}
	if (!func_798(uParam0))
	{
		return;
	}
	uParam0->f_43 = uParam1;
}

void func_1081(var uParam0, int iParam1, float fParam2, int iParam3)
{
	Vector3 vVar0;
	Vector3 vVar3;

	if (uParam0->f_42 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 2)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_40[(iParam1 / 32)], (iParam1 % 32)))
	{
		return;
	}
	if (uParam0->f_45 != -1)
	{
		func_1119(&(uParam0->f_52));
	}
	func_414(uParam0->f_47, (uParam0->f_50 + fParam2), uParam0->f_13[iParam1 /*12*/], uParam0->f_13[iParam1 /*12*/].f_3, &vVar0, &vVar3);
	func_1245(&(uParam0->f_52), vVar0, vVar3, uParam0->f_13[iParam1 /*12*/].f_6, uParam0->f_13[iParam1 /*12*/].f_7, uParam0->f_13[iParam1 /*12*/].f_8, BUILTIN::TO_FLOAT(uParam0->f_13[iParam1 /*12*/].f_9), uParam0->f_13[iParam1 /*12*/].f_10, 0, 0, -1.0f, uParam0->f_13[iParam1 /*12*/].f_11 == 0.0f, iParam3, uParam0->f_13[iParam1 /*12*/].f_11);
	uParam0->f_44 = -1;
	uParam0->f_45 = iParam1;
	uParam0->f_46 = fParam2;
	uParam0->f_43 = -1;
}

void func_1082(var uParam0, bool bParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_42, 0))
	{
		if (!CAM::DOES_CAM_EXIST(uParam0->f_51))
		{
			uParam0->f_51 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
			if (CAM::DOES_CAM_EXIST(uParam0->f_51))
			{
			}
		}
		if (uParam0->f_45 != -1)
		{
			func_1246(&(uParam0->f_52), bParam1, 1, 0, 0);
		}
		if (uParam0->f_43 != -1)
		{
			if (func_798(uParam0))
			{
				if (MISC::GET_FRAME_COUNT() >= uParam0->f_43)
				{
					func_799(uParam0, 0);
				}
			}
			else
			{
				uParam0->f_43 = -1;
			}
		}
	}
}

bool func_1083(var uParam0, int iParam1)
{
	return uParam0->f_946[iParam1 /*46*/].f_33 == 0;
}

void func_1084(var uParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;
	int iVar1;

	if (uParam0->f_946[iParam1 /*46*/].f_33 != 0)
	{
	}
	else if (iParam1 == iParam3)
	{
	}
	else
	{
		uParam0->f_946[iParam1 /*46*/].f_33 = 1;
		uParam0->f_946[iParam1 /*46*/].f_34 = iParam2;
		uParam0->f_946[iParam1 /*46*/].f_35 = iParam3;
		fVar0 = func_1205(iParam1, iParam3, 1);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		switch (iParam2)
		{
			case 0:
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(uParam0->f_946[iParam1 /*46*/], "StartQuickMgmLook", true);
				break;
			case 1:
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(uParam0->f_946[iParam1 /*46*/], "StartMediumMgmLook", true);
				break;
		}
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "MgmLookSeat", fVar0);
		TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(uParam0->f_946[iParam1 /*46*/], "MgmLookVar", BUILTIN::TO_FLOAT(iVar1));
		func_1033(uParam0, iParam1, 1);
	}
}

void func_1085(var uParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return;
	}
	if (uParam0->f_1631[iParam1] != -1)
	{
		uParam0->f_1631[iParam1] = -1;
	}
}

void func_1086(var uParam0)
{
	uParam0->f_1567.f_41 = 0;
	uParam0->f_1567.f_41.f_1 = 0;
	uParam0->f_1567.f_41.f_2 = -1;
	uParam0->f_1567.f_41.f_3 = -1;
	func_214(&(uParam0->f_1567.f_41.f_4));
	func_214(&(uParam0->f_1567.f_41.f_7));
}

bool func_1087(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if ((iParam1 >= 0 && iParam1 < 4) && uParam0->f_946[iParam1 /*46*/] != 0)
	{
		iVar0 = uParam0->f_946[iParam1 /*46*/];
		if ((((!PED::IS_PED_INJURED(iVar0) && (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(iVar0) || !bParam2)) && uParam0->f_946[iParam1 /*46*/].f_1 != 0) && uParam0->f_946[iParam1 /*46*/].f_6 != 3) && uParam0->f_946[iParam1 /*46*/].f_6 != 17)
		{
			return true;
		}
	}
	return false;
}

int func_1088(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if ((((iVar1 != iParam1 && iVar1 != iParam2) && iVar1 != iParam3) && func_1087(uParam0, iVar1, 1)) && (bParam4 || uParam0->f_946[iVar1 /*46*/].f_33 == 0))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1089(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1[4];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < iParam4)
	{
		iVar6 = 0;
		iVar7 = 0;
		while (iVar7 < 4)
		{
			if (MISC::IS_BIT_SET(iParam2, iVar7))
			{
				iVar1[iVar6] = iVar7;
				iVar6++;
			}
			iVar7++;
		}
		if (iVar6 > 0)
		{
			iVar7 = iVar1[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6)];
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (MISC::IS_BIT_SET(iParam2, iVar7))
				{
					*iParam6 = -1;
					iVar10 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
					iVar9 = 0;
					while (iVar9 < 4)
					{
						if (MISC::IS_BIT_SET(iParam3, iVar10) && iVar10 != iVar7)
						{
							*iParam6 = iVar10;
						}
						else
						{
							iVar10 += 1 % 4;
							iVar9++;
						}
					}
					if (func_958(uParam0, &(uParam0->f_1724), &(uParam0->f_17), iVar7, *iParam6, 1))
					{
						if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_1724.f_44, sParam1, uParam0->f_1724.f_946[iVar7 /*46*/], 0, uParam0->f_1724.f_39))
						{
							*iParam5 = iVar7;
							return true;
						}
					}
				}
				iVar7 += 1 % 4;
				iVar8++;
			}
		}
		return false;
	}
	return false;
}

bool func_1090(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	iParam1++;
	while (iParam1 < 4)
	{
		if (func_280(uParam0, iParam1))
		{
			if (!bParam3 || !func_532(uParam0, iParam1))
			{
				*iParam2 = iParam1;
				return true;
			}
		}
		iParam1++;
	}
	*iParam2 = -1;
	return false;
}

bool func_1091(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
	if (iVar0 < iParam4)
	{
		if (func_958(uParam0, &(uParam0->f_1724), &(uParam0->f_17), iParam2, iParam3, 1))
		{
			if (ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_1724.f_44, sParam1, uParam0->f_1724.f_946[iParam2 /*46*/], 0, uParam0->f_1724.f_39))
			{
				return true;
			}
		}
		return false;
	}
	return false;
}

void func_1092(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int* iParam5, int* iParam6, int* iParam7, int* iParam8, int* iParam9, int* iParam10, int* iParam11, int* iParam12, int* iParam13, int* iParam14, int* iParam15, int* iParam16, int* iParam17, int* iParam18, int* iParam19, int* iParam20, int* iParam21, int* iParam22, int* iParam23, int* iParam24, int* iParam25, int* iParam26)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1088(&(uParam0->f_1724), -1, -1, -1, 1);
	*iParam3 = (iVar0 & -1) ^ uParam2->f_10;
	*iParam4 = iVar0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if ((func_280(&(uParam1->f_17), iVar1) && uParam1->f_1567[iVar1 /*10*/]) && uParam1->f_1567.f_53)
		{
			if (func_1007(&(uParam1->f_17), iVar1))
			{
				MISC::SET_BIT(iParam5, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_4 >= BUILTIN::TO_FLOAT(13))
			{
				MISC::SET_BIT(iParam8, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_4 <= BUILTIN::TO_FLOAT(-13))
			{
				MISC::SET_BIT(iParam18, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_6 > 0 && uParam1->f_1567[iVar1 /*10*/].f_7)
			{
				MISC::SET_BIT(iParam12, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_6 < 0 && uParam1->f_1567[iVar1 /*10*/].f_7)
			{
				MISC::SET_BIT(iParam22, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_6 >= 3)
			{
				MISC::SET_BIT(iParam13, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_6 <= -3)
			{
				MISC::SET_BIT(iParam23, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_5 == 1)
			{
				MISC::SET_BIT(iParam14, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_5 > 1)
			{
				MISC::SET_BIT(iParam15, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_5 == -1)
			{
				MISC::SET_BIT(iParam24, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_5 < -1)
			{
				MISC::SET_BIT(iParam25, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_4 > 0.0f && uParam1->f_1567[iVar1 /*10*/].f_8)
			{
				MISC::SET_BIT(iParam16, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_9 && uParam1->f_1567.f_58)
			{
				MISC::SET_BIT(iParam26, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_4 > 0.0f)
			{
				if (uParam1->f_1567[iVar1 /*10*/].f_6 >= 4)
				{
					MISC::SET_BIT(iParam9, iVar1);
				}
				else if (uParam1->f_1567[iVar1 /*10*/].f_6 >= 2)
				{
					MISC::SET_BIT(iParam10, iVar1);
				}
				else if (uParam1->f_1567[iVar1 /*10*/].f_6 >= 1)
				{
					MISC::SET_BIT(iParam11, iVar1);
				}
				MISC::SET_BIT(iParam7, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_4 == 0.0f)
			{
				MISC::SET_BIT(iParam6, iVar1);
			}
			if (uParam1->f_1567[iVar1 /*10*/].f_4 < 0.0f)
			{
				if (uParam1->f_1567[iVar1 /*10*/].f_6 <= -4)
				{
					MISC::SET_BIT(iParam19, iVar1);
				}
				else if (uParam1->f_1567[iVar1 /*10*/].f_6 <= -2)
				{
					MISC::SET_BIT(iParam20, iVar1);
				}
				else if (uParam1->f_1567[iVar1 /*10*/].f_6 <= -1)
				{
					MISC::SET_BIT(iParam21, iVar1);
				}
				MISC::SET_BIT(iParam17, iVar1);
			}
		}
		iVar1++;
	}
}

bool func_1093(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	return uParam0->f_1567[iParam1 /*10*/].f_4 > 0.0f;
}

bool func_1094(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	return uParam0->f_1567[iParam1 /*10*/].f_6 >= 3;
}

bool func_1095(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	return uParam0->f_1567[iParam1 /*10*/].f_4 < 0.0f;
}

bool func_1096(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	return uParam0->f_1567[iParam1 /*10*/].f_6 <= -3;
}

bool func_1097(int iParam0)
{
	return MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iParam0;
}

bool func_1098(var uParam0, float fParam1)
{
	if (func_478(uParam0, fParam1))
	{
		func_214(uParam0);
		return true;
	}
	return false;
}

bool func_1099(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 4)
	{
		return true;
	}
	return false;
}

void func_1100(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_1101()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_1102(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_773(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

bool func_1103(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1104(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] & iParam1) != 0;
}

bool func_1104(int iParam0)
{
	return iParam0 > -1;
}

int func_1105(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_1106(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

void func_1107(var uParam0, int iParam1, bool bParam2)
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

bool func_1108(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_1109(int iParam0)
{
	int iVar0;

	if (!func_1104(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_1247(iParam0);
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

int func_1110(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_1111(int iParam0)
{
	if (func_775(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_1110(iParam0)))
		{
			func_1248(iParam0, (1 << 26), 1);
			func_783(iParam0, 19, 1);
		}
	}
}

float func_1112(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_1113(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_1110(iParam0);
	iVar1 = func_785(iParam0, 0);
	func_1249(iParam0, iVar0);
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

bool func_1114(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_1115(int iParam0)
{
	if (!func_1104(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_1116(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1104(iParam0))
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

int func_1117(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1104(iParam0))
	{
		return 0;
	}
	iVar0 = func_792(iParam0);
	if (func_784(iVar0, 0))
	{
		if (func_784(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1114(iParam0)) || func_1115(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_1250(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000.0f))
			{
				iVar1 = func_1251(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_1252(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_1253(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_1253(iParam0, 0));
					func_1254(iParam0);
				}
			}
			else
			{
				if (func_1103(iParam0, (1 << 15), 1))
				{
					iVar2 = func_1253(iParam0, 0);
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
		if (func_784(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_1103(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_1252(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_1253(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_1253(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_1252(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_1255(iParam0, 0);
	return 1;
}

char* func_1118(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_1119(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, false);
	}
	if (uParam0->f_28)
	{
		MAP::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_28 = 0;
	}
	uParam0->f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_7 = 0.0f;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0.0f;
	uParam0->f_8 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_11 = 0.0f;
	uParam0->f_12 = 0.0f;
	uParam0->f_13 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_16 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_22 = 0.0f;
	uParam0->f_23 = 0.0f;
}

void func_1120(var uParam0, int iParam1)
{
	if (uParam0->f_40[iParam1 /*38*/])
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40[iParam1 /*38*/].f_12);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_40[iParam1 /*38*/].f_12);
		if (*uParam0 == 0)
		{
			DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_40[iParam1 /*38*/].f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_40[iParam1 /*38*/].f_13);
		}
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_40[iParam1 /*38*/].f_1);
		uParam0->f_40[iParam1 /*38*/] = 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_195), iParam1);
}

void func_1121(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iParam1], "text", sParam2);
}

void func_1122(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iParam1], "moneyText", sParam2);
}

float func_1123(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

void func_1124(var uParam0)
{
	struct<42> /*336*/ sVar0;
	int iVar42;

	sVar0.f_10 = 6;
	sVar0.f_0 = joaat("MINIGAMEEVENTTABLEJOINED");
	strcpy_s(&(sVar0.f_1), 64, "");
	sVar0.f_9 = uParam0->f_582;
	sVar0.f_41 = 0;
	iVar42 = 0;
	while (iVar42 < 4)
	{
		if (!func_822(uParam0, iVar42))
		{
			sVar0.f_10[sVar0.f_41 /*5*/] = iVar42;
			sVar0.f_10[sVar0.f_41 /*5*/].f_1 = 0;
			sVar0.f_10[sVar0.f_41 /*5*/].f_3.f_1 = 0;
			sVar0.f_10[sVar0.f_41 /*5*/].f_3 = func_1256(uParam0, iVar42);
			sVar0.f_41++;
		}
		iVar42++;
	}
	if (sVar0.f_41 == 0)
	{
	}
	MINIGAME::_0xE1F365C4C8F259D8(sVar0.f_0, &sVar0, 42);
}

void func_1125(var uParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = joaat("MINIGAMEEVENTPLAYERADDED");
	sVar0.f_1 = iParam1;
	sVar0.f_1.f_1 = 0;
	sVar0.f_1.f_3.f_1 = 0;
	sVar0.f_1.f_3 = func_1256(uParam0, iParam1);
	MINIGAME::_0xE1F365C4C8F259D8(sVar0.f_0, &sVar0, 6);
}

char* func_1126(int iParam0)
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

int func_1127(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_1257())
	{
		iVar2 = func_1257();
	}
	iVar5 = func_1258(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_365(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_365(iVar6) == 0)
			{
				return func_1259(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_365(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_365(iVar6) == 0)
			{
				return func_1259(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_1259(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1128(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

bool func_1129(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	vVar1 = { 0.0537f, 0.3153f, 0.8006f /*3*/ };
	vVar4 = { 0.0247f, -0.0879f, 164.3123f /*3*/ };
	if (!bVar0)
	{
		return false;
	}
	else if (bParam3)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 /*3*/ };
		*uParam2 = { vVar4 /*3*/ };
	}
	return true;
}

bool func_1130(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	vVar1 = { Vector(79.91527f, 35.75516f, -45.47359f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
	vVar4 = { 0.0f, 0.0f, -22.0f /*3*/ };
	if (!bVar0)
	{
		return false;
	}
	else if (bParam3)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam1, uParam2);
	}
	else
	{
		*uParam1 = { vVar1 /*3*/ };
		*uParam2 = { vVar4 /*3*/ };
	}
	return true;
}

bool func_1131(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		vVar1 = { Vector(84.27908f, 37.08674f, -34.37373f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
		vVar4 = { 90.0f, 0.0f, -22.0f /*3*/ };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { Vector(84.27908f, 38.90664f, -38.96327f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
		vVar4 = { 90.0f, 0.0f, -22.0f /*3*/ };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { Vector(84.27908f, 40.71551f, -43.35525f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
		vVar4 = { 90.0f, 0.0f, -22.0f /*3*/ };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { Vector(84.27908f, 42.49949f, -47.77074f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
		vVar4 = { 90.0f, 0.0f, -22.0f /*3*/ };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { Vector(84.27908f, 44.32357f, -52.2855f) / Vector(100.0f, 100.0f, 100.0f) /*3*/ };
		vVar4 = { 90.0f, 0.0f, -22.0f /*3*/ };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (bParam4)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam2, uParam3);
	}
	else
	{
		*uParam2 = { vVar1 /*3*/ };
		*uParam3 = { vVar4 /*3*/ };
	}
	return true;
}

void func_1132(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	int iVar1;

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

void func_1133(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 3);
			break;
		case 1:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 18);
			break;
		case 2:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 6);
			break;
		case 3:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 21);
			break;
		case 4:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 9);
			break;
		case 5:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 24);
			break;
		case 6:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 12);
			break;
		case 7:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 27);
			break;
		case 8:
			OBJECT::SET_OBJECT_TINT_INDEX(iParam0, 15);
			break;
		default:
			break;
	}
}

bool func_1134(var uParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, var uParam5, bool bParam6)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (bParam2)
	{
		vVar1 = { 0.0f, 0.0f, (0.8f - 0.05f) /*3*/ };
		vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	else if (bParam3)
	{
		if (iParam1 == 0)
		{
			vVar1 = { 0.1189f, 0.1671f, 0.802f /*3*/ };
			vVar4 = { -0.0024f, 179.9984f, 2.0022f /*3*/ };
		}
		else
		{
			bVar0 = false;
		}
	}
	else if (iParam1 == 0)
	{
		vVar1 = { 0.1189f, 0.1671f, 0.802f /*3*/ };
		vVar4 = { -0.001f, -0.0051f, -177.9985f /*3*/ };
	}
	else if (iParam1 == 1)
	{
		vVar1 = { 0.0537f, 0.1653f, 0.802f /*3*/ };
		vVar4 = { 0.0062f, 0.0027f, -0.0011f /*3*/ };
	}
	else if (iParam1 == 2)
	{
		vVar1 = { -0.011f, 0.1676f, 0.802f /*3*/ };
		vVar4 = { -0.0058f, -0.0003f, 0.0002f /*3*/ };
	}
	else if (iParam1 == 3)
	{
		vVar1 = { -0.0779f, 0.1666f, 0.802f /*3*/ };
		vVar4 = { 0.1605f, -0.0022f, 0.5503f /*3*/ };
	}
	else if (iParam1 == 4)
	{
		vVar1 = { -0.1427f, 0.1654f, 0.802f /*3*/ };
		vVar4 = { -0.0876f, -2.9981f, -1.7819f /*3*/ };
	}
	else if (iParam1 == 5)
	{
		vVar1 = { -0.1606f, 0.1676f, 0.802f /*3*/ };
		vVar4 = { 0.0039f, -3.0038f, 0.0023f /*3*/ };
	}
	else if (iParam1 == 6)
	{
		vVar1 = { -0.1801f, 0.1676f, 0.802f /*3*/ };
		vVar4 = { 0.0625f, -2.9983f, 1.2889f /*3*/ };
	}
	else if (iParam1 == 7)
	{
		vVar1 = { -0.2011f, 0.1665f, 0.802f /*3*/ };
		vVar4 = { -0.0221f, -3.0026f, -0.5106f /*3*/ };
	}
	else if (iParam1 == 8)
	{
		vVar1 = { -0.2223f, 0.1681f, 0.802f /*3*/ };
		vVar4 = { 0.1436f, -3.0005f, 2.6091f /*3*/ };
	}
	else if (iParam1 == 9)
	{
		vVar1 = { -0.244f, 0.166f, 0.802f /*3*/ };
		vVar4 = { 0.0908f, -3.0007f, 1.7663f /*3*/ };
	}
	else if (iParam1 == 10)
	{
		vVar1 = { -0.2685f, 0.1676f, 0.802f /*3*/ };
		vVar4 = { -0.0633f, -3.0014f, -1.2468f /*3*/ };
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (bParam6)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam4, uParam5);
	}
	else
	{
		*uParam4 = { vVar1 /*3*/ };
		*uParam5 = { vVar4 /*3*/ };
	}
	return true;
}

void func_1135(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_30.f_15[iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_30.f_15[iParam2]));
	}
	uParam0->f_112[iParam1 /*194*/].f_30.f_20[iParam2] = iParam3;
	uParam0->f_112[iParam1 /*194*/].f_30.f_15[iParam2] = uParam0->f_112[iParam1 /*194*/].f_30[iParam2];
	uParam0->f_112[iParam1 /*194*/].f_30.f_25[iParam2] = 0.0f;
	uParam0->f_112[iParam1 /*194*/].f_30[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_5[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_10[iParam2] = 0;
}

bool func_1136(var uParam0, int iParam1, int iParam2, bool bParam3, var uParam4, var uParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (bParam3)
	{
		vVar1 = { 0.0f, 0.0f, (0.8f - 0.4f) /*3*/ };
		vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	else if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.4487f, 0.1731f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.4634f, 0.2288f, 0.803f /*3*/ };
			vVar4 = { -0.001f, -0.0018f, -0.0016f /*3*/ };
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
			vVar1 = { 0.1596f, -0.0785f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -45.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.2092f, -0.0495f, 0.803f /*3*/ };
			vVar4 = { 0.0048f, 0.0044f, -44.999f /*3*/ };
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
			vVar1 = { -0.2228f, -0.0519f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -90.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.1672f, -0.0666f, 0.803f /*3*/ };
			vVar4 = { -0.0047f, 0.0049f, -89.9966f /*3*/ };
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
			vVar1 = { -0.4744f, 0.2372f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -135.0f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.4455f, 0.1875f, 0.803f /*3*/ };
			vVar4 = { -0.0003f, -0.001f, -135.0036f /*3*/ };
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
		return false;
	}
	if (iParam6 < 0 || iParam6 >= 10)
	{
		return false;
	}
	if (bParam7)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam4, uParam5);
	}
	else
	{
		*uParam4 = { vVar1 /*3*/ };
		*uParam5 = { vVar4 /*3*/ };
	}
	uParam4->f_2 += (BUILTIN::TO_FLOAT(iParam6) * 0.006f);
	return true;
}

void func_1137(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_15[iParam3]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_15[iParam3]));
	}
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_20[iParam3] = iParam4;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_15[iParam3] = uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3];
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_25[iParam3] = 0.0f;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_5[iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_10[iParam3] = 0;
}

bool func_1138(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5, var uParam6, int iParam7, bool bParam8)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (bParam4)
	{
		vVar1 = { 0.0f, 0.0f, (0.8f - 0.4f) /*3*/ };
		vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	else if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.6392f, 0.0942f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 67.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.6455f, 0.145f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 67.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.557f, 0.0423f, 0.8029f /*3*/ };
				vVar4 = { 0.0043f, 0.0024f, -0.5029f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.5952f, 0.0794f, 0.803f /*3*/ };
				vVar4 = { 0.0026f, 0.001f, -0.5f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.7139f, 0.1964f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 67.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.7195f, 0.249f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 67.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.6675f, 0.2003f, 0.803f /*3*/ };
				vVar4 = { 0.0031f, 0.0033f, -0.4975f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.6739f, 0.2536f, 0.803f /*3*/ };
				vVar4 = { -0.0003f, -0.0026f, -0.5031f /*3*/ };
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
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.2385f, -0.269f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 22.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.2789f, -0.2375f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 22.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.1435f, -0.2479f, 0.803f /*3*/ };
				vVar4 = { 0.0121f, 0.0034f, -45.4934f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.1968f, -0.2486f, 0.803f /*3*/ };
				vVar4 = { -0.0017f, -0.0017f, -45.5004f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.3635f, -0.2495f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 22.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.4047f, -0.2163f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, 22.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.3334f, -0.2142f, 0.803f /*3*/ };
				vVar4 = { 0.0018f, -0.0023f, -45.4956f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.3756f, -0.181f, 0.803f /*3*/ };
				vVar4 = { 0.0024f, 0.0014f, -45.4973f /*3*/ };
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
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.3017f, -0.2424f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -22.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.2509f, -0.2487f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -22.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.3541f, -0.1607f, 0.803f /*3*/ };
				vVar4 = { -0.0028f, 0.0008f, -90.5f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.3169f, -0.1988f, 0.803f /*3*/ };
				vVar4 = { 0.0079f, 0.0039f, -90.4886f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.1995f, -0.3171f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -22.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.1469f, -0.3227f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -22.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.196f, -0.2711f, 0.803f /*3*/ };
				vVar4 = { -0.0003f, -0.0017f, -90.4974f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.1427f, -0.2775f, 0.803f /*3*/ };
				vVar4 = { -0.0028f, 0.0008f, -90.5f /*3*/ };
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
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.6649f, 0.1583f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -67.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.6334f, 0.1179f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -135.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.6442f, 0.2529f, 0.803f /*3*/ };
				vVar4 = { 0.0018f, 0.0013f, -135.5f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.6449f, 0.1995f, 0.803f /*3*/ };
				vVar4 = { 0.0018f, 0.0013f, -135.4863f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.6454f, 0.0333f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -67.5f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.6122f, -0.0079f, 0.803f /*3*/ };
				vVar4 = { 0.0f, 0.0f, -67.5f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.6105f, 0.063f, 0.803f /*3*/ };
				vVar4 = { -0.0021f, -0.0027f, -135.4988f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.5773f, 0.0207f, 0.803f /*3*/ };
				vVar4 = { -0.0021f, -0.0027f, -135.4852f /*3*/ };
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
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= 10)
	{
		return false;
	}
	if (bParam8)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam5, uParam6);
	}
	else
	{
		*uParam5 = { vVar1 /*3*/ };
		*uParam6 = { vVar4 /*3*/ };
	}
	uParam5->f_2 += (BUILTIN::TO_FLOAT(iParam7) * 0.006f);
	return true;
}

bool func_1139(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, var uParam5, var uParam6, bool bParam7)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (bParam4)
	{
		vVar1 = { 0.0f, 0.0f, (0.8f - 0.05f) /*3*/ };
		vVar4 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	else if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.5534f, 0.1271f, 0.8035f /*3*/ };
				vVar4 = { 0.0029f, 2.9973f, 67.5014f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.5455f, 0.1474f, 0.8034f /*3*/ };
				vVar4 = { -0.1766f, 2.9948f, 64.11f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.5377f, 0.1735f, 0.8031f /*3*/ };
				vVar4 = { 0.3426f, 2.9798f, 73.9989f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.5285f, 0.1966f, 0.803f /*3*/ };
				vVar4 = { 0.0321f, 2.995f, 68.038f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { 0.5194f, 0.2208f, 0.803f /*3*/ };
				vVar4 = { 0.2538f, 2.9855f, 72.129f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { 0.509f, 0.2435f, 0.803f /*3*/ };
				vVar4 = { -0.1097f, 2.9982f, 65.3666f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { 0.4998f, 0.2665f, 0.803f /*3*/ };
				vVar4 = { 0.2507f, 2.9887f, 72.2155f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { 0.4862f, 0.2872f, 0.8031f /*3*/ };
				vVar4 = { -0.0468f, 3.0008f, 66.5805f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { 0.4768f, 0.3113f, 0.803f /*3*/ };
				vVar4 = { 0.0036f, 2.9985f, 67.4964f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { 0.4651f, 0.3332f, 0.803f /*3*/ };
				vVar4 = { 0.1721f, 2.9948f, 70.7479f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { 0.4555f, 0.3525f, 0.8033f /*3*/ };
				vVar4 = { -0.2494f, 2.9922f, 62.6892f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.6352f, 0.2316f, 0.8032f /*3*/ };
				vVar4 = { -0.1838f, 2.9944f, 63.8767f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.6257f, 0.258f, 0.8028f /*3*/ };
				vVar4 = { 0.039f, 2.9992f, 68.1876f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.614f, 0.2793f, 0.8028f /*3*/ };
				vVar4 = { -0.3753f, 2.9749f, 60.2688f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.6058f, 0.3031f, 0.8029f /*3*/ };
				vVar4 = { 0.0036f, 2.9985f, 67.4964f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { 0.5949f, 0.325f, 0.803f /*3*/ };
				vVar4 = { 0.2423f, 2.9889f, 72.0221f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { 0.5839f, 0.344f, 0.8031f /*3*/ };
				vVar4 = { 0.0029f, 3.0022f, 67.4957f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { 0.5761f, 0.3618f, 0.8033f /*3*/ };
				vVar4 = { -0.3007f, 2.9873f, 61.7176f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { 0.5657f, 0.386f, 0.8032f /*3*/ };
				vVar4 = { 0.003f, 3.0023f, 67.4957f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { 0.5555f, 0.4065f, 0.8033f /*3*/ };
				vVar4 = { 0.1703f, 2.9949f, 70.6765f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { 0.5492f, 0.4236f, 0.8036f /*3*/ };
				vVar4 = { -0.2656f, 2.9869f, 62.3659f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { 0.5392f, 0.4489f, 0.8034f /*3*/ };
				vVar4 = { 0.003f, 3.0023f, 67.4957f /*3*/ };
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
	}
	else if (iParam1 == 1)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.201f, -0.1851f, 0.8034f /*3*/ };
				vVar4 = { 0.0057f, 2.9996f, 22.499f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.2098f, -0.165f, 0.8034f /*3*/ };
				vVar4 = { -0.1627f, 2.9871f, 19.1067f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.2228f, -0.1411f, 0.803f /*3*/ };
				vVar4 = { 0.3457f, 2.9729f, 29.0002f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.2327f, -0.1183f, 0.803f /*3*/ };
				vVar4 = { 0.025f, 3.0004f, 23.0406f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { 0.2433f, -0.0948f, 0.8031f /*3*/ };
				vVar4 = { 0.2346f, 2.9879f, 27.1363f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { 0.252f, -0.0713f, 0.8031f /*3*/ };
				vVar4 = { -0.1129f, 3.0015f, 20.3669f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { 0.2618f, -0.0486f, 0.803f /*3*/ };
				vVar4 = { 0.2525f, 2.9865f, 27.2185f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { 0.2668f, -0.0242f, 0.8031f /*3*/ };
				vVar4 = { -0.0495f, 2.9986f, 21.5889f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { 0.2772f, -0.0006f, 0.803f /*3*/ };
				vVar4 = { 0.0013f, 2.999f, 22.5009f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { 0.2845f, 0.0231f, 0.803f /*3*/ };
				vVar4 = { 0.1652f, 2.9938f, 25.748f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { 0.2913f, 0.0436f, 0.8033f /*3*/ };
				vVar4 = { -0.2511f, 2.9867f, 17.6982f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { 0.3328f, -0.1689f, 0.8032f /*3*/ };
				vVar4 = { -0.1919f, 2.9874f, 18.878f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { 0.3448f, -0.1436f, 0.8029f /*3*/ };
				vVar4 = { 0.033f, 2.9973f, 23.1924f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { 0.3516f, -0.1203f, 0.8029f /*3*/ };
				vVar4 = { -0.3783f, 2.975f, 15.2638f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { 0.3626f, -0.0977f, 0.8029f /*3*/ };
				vVar4 = { -0.0061f, 2.9998f, 22.5031f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { 0.3704f, -0.0744f, 0.803f /*3*/ };
				vVar4 = { 0.2365f, 2.9925f, 27.0289f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { 0.3761f, -0.0533f, 0.8031f /*3*/ };
				vVar4 = { -0.0037f, 2.9985f, 22.4987f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { 0.3831f, -0.0352f, 0.8033f /*3*/ };
				vVar4 = { -0.3057f, 2.9839f, 16.717f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { 0.3929f, -0.0106f, 0.8032f /*3*/ };
				vVar4 = { -0.0017f, 3.0014f, 22.5037f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { 0.4001f, 0.011f, 0.8034f /*3*/ };
				vVar4 = { 0.1619f, 2.9961f, 25.6829f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { 0.4078f, 0.0276f, 0.8036f /*3*/ };
				vVar4 = { -0.2713f, 2.9861f, 17.3683f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { 0.4186f, 0.0525f, 0.8034f /*3*/ };
				vVar4 = { -0.0061f, 2.9998f, 22.5031f /*3*/ };
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
	}
	else if (iParam1 == 2)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.2688f, -0.1565f, 0.8035f /*3*/ };
				vVar4 = { 0.0112f, 3.0033f, -22.4982f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.2485f, -0.1487f, 0.8035f /*3*/ };
				vVar4 = { -0.177f, 2.9952f, -25.8941f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.2223f, -0.1409f, 0.8031f /*3*/ };
				vVar4 = { 0.3423f, 2.9838f, -16.0001f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.1992f, -0.1317f, 0.803f /*3*/ };
				vVar4 = { 0.044f, 2.9962f, -21.9555f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { -0.1751f, -0.1227f, 0.803f /*3*/ };
				vVar4 = { 0.2561f, 2.9873f, -17.8675f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { -0.1524f, -0.1123f, 0.803f /*3*/ };
				vVar4 = { -0.1076f, 2.997f, -24.6331f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { -0.1294f, -0.103f, 0.803f /*3*/ };
				vVar4 = { 0.2584f, 2.9871f, -17.7778f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { -0.1087f, -0.0894f, 0.8031f /*3*/ };
				vVar4 = { -0.0477f, 2.9983f, -23.4147f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { -0.0845f, -0.08f, 0.803f /*3*/ };
				vVar4 = { 0.0026f, 3.0004f, -22.4994f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { -0.0626f, -0.0684f, 0.803f /*3*/ };
				vVar4 = { 0.1744f, 2.9929f, -19.2526f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { -0.0434f, -0.0588f, 0.8033f /*3*/ };
				vVar4 = { -0.2482f, 2.9933f, -27.3054f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.1643f, -0.2384f, 0.8032f /*3*/ };
				vVar4 = { -0.1905f, 2.9929f, -26.1251f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.1378f, -0.2289f, 0.8028f /*3*/ };
				vVar4 = { 0.0434f, 2.9995f, -21.8092f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.1166f, -0.2172f, 0.8029f /*3*/ };
				vVar4 = { -0.3672f, 2.9742f, -29.7362f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.0928f, -0.209f, 0.8029f /*3*/ };
				vVar4 = { 0.0017f, 2.996f, -22.5016f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { -0.0708f, -0.1981f, 0.803f /*3*/ };
				vVar4 = { 0.2427f, 2.9881f, -17.9732f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { -0.0519f, -0.1872f, 0.8031f /*3*/ };
				vVar4 = { 0.0016f, 2.9958f, -22.5016f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { -0.0341f, -0.1793f, 0.8033f /*3*/ };
				vVar4 = { -0.2975f, 2.9834f, -28.2868f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { -0.0098f, -0.1689f, 0.8032f /*3*/ };
				vVar4 = { 0.0038f, 3.0016f, -22.5037f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { 0.0107f, -0.1587f, 0.8034f /*3*/ };
				vVar4 = { 0.1658f, 2.9926f, -19.3231f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { 0.0278f, -0.1524f, 0.8036f /*3*/ };
				vVar4 = { -0.267f, 2.9885f, -27.6327f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { 0.0531f, -0.1425f, 0.8034f /*3*/ };
				vVar4 = { 0.0039f, 3.0017f, -22.5037f /*3*/ };
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
	}
	else if (iParam1 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.5809f, 0.1958f, 0.8035f /*3*/ };
				vVar4 = { 0.012f, 3.0062f, -67.4973f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.561f, 0.187f, 0.8035f /*3*/ };
				vVar4 = { -0.1793f, 2.9987f, -70.8944f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.537f, 0.174f, 0.8031f /*3*/ };
				vVar4 = { 0.3415f, 2.9779f, -61.0048f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.5142f, 0.1641f, 0.803f /*3*/ };
				vVar4 = { 0.0273f, 2.9975f, -66.9594f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { -0.4907f, 0.1535f, 0.803f /*3*/ };
				vVar4 = { 0.2414f, 2.9854f, -62.87f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { -0.4672f, 0.1447f, 0.803f /*3*/ };
				vVar4 = { -0.1152f, 3.0028f, -69.6303f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { -0.4445f, 0.135f, 0.803f /*3*/ };
				vVar4 = { 0.2471f, 2.9869f, -62.7876f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { -0.4201f, 0.1301f, 0.8031f /*3*/ };
				vVar4 = { -0.044f, 3.0009f, -68.4127f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { -0.3964f, 0.1196f, 0.803f /*3*/ };
				vVar4 = { 0.0023f, 3.0036f, -67.4975f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { -0.3727f, 0.1123f, 0.8029f /*3*/ };
				vVar4 = { 0.1791f, 2.9978f, -64.2491f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { -0.3523f, 0.1055f, 0.8033f /*3*/ };
				vVar4 = { -0.2496f, 2.9913f, -72.3069f /*3*/ };
			}
			else
			{
				bVar0 = false;
			}
		}
		else if (iParam2 == 1)
		{
			if (iParam3 == 0)
			{
				vVar1 = { -0.5649f, 0.0641f, 0.8032f /*3*/ };
				vVar4 = { -0.1932f, 2.9962f, -71.1258f /*3*/ };
			}
			else if (iParam3 == 1)
			{
				vVar1 = { -0.5395f, 0.052f, 0.8029f /*3*/ };
				vVar4 = { 0.0344f, 3.004f, -66.8092f /*3*/ };
			}
			else if (iParam3 == 2)
			{
				vVar1 = { -0.5162f, 0.0452f, 0.8028f /*3*/ };
				vVar4 = { -0.3728f, 2.9754f, -74.7337f /*3*/ };
			}
			else if (iParam3 == 3)
			{
				vVar1 = { -0.4935f, 0.0343f, 0.8029f /*3*/ };
				vVar4 = { -0.0015f, 2.9961f, -67.5019f /*3*/ };
			}
			else if (iParam3 == 4)
			{
				vVar1 = { -0.4703f, 0.0264f, 0.803f /*3*/ };
				vVar4 = { 0.2369f, 2.9836f, -62.9734f /*3*/ };
			}
			else if (iParam3 == 5)
			{
				vVar1 = { -0.4491f, 0.0207f, 0.8031f /*3*/ };
				vVar4 = { 0.0044f, 3.0009f, -67.5002f /*3*/ };
			}
			else if (iParam3 == 6)
			{
				vVar1 = { -0.431f, 0.0137f, 0.8033f /*3*/ };
				vVar4 = { -0.3038f, 2.9852f, -73.2828f /*3*/ };
			}
			else if (iParam3 == 7)
			{
				vVar1 = { -0.4065f, 0.0039f, 0.8032f /*3*/ };
				vVar4 = { 0.0019f, 2.9994f, -67.5006f /*3*/ };
			}
			else if (iParam3 == 8)
			{
				vVar1 = { -0.3848f, -0.0034f, 0.8033f /*3*/ };
				vVar4 = { 0.1673f, 2.992f, -64.3213f /*3*/ };
			}
			else if (iParam3 == 9)
			{
				vVar1 = { -0.3683f, -0.0109f, 0.8036f /*3*/ };
				vVar4 = { -0.2598f, 2.9932f, -72.6304f /*3*/ };
			}
			else if (iParam3 == 10)
			{
				vVar1 = { -0.3433f, -0.0219f, 0.8034f /*3*/ };
				vVar4 = { 0.0025f, 2.9997f, -67.4989f /*3*/ };
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
	}
	else
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	if (bParam7)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam5, uParam6);
	}
	else
	{
		*uParam5 = { vVar1 /*3*/ };
		*uParam6 = { vVar4 /*3*/ };
	}
	return true;
}

void func_1140(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_838(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_1141(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_1142(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

void func_1143(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

void func_1144(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (Global_1058888.f_42714[iParam0 /*12*/].f_4 == iParam1 && !bParam2)
	{
		return;
	}
	Global_1058888.f_42714[iParam0 /*12*/].f_4 = iParam1;
	HUD::_SET_MP_GAMER_TAG_TOP_ICON(Global_1058888.f_42714[iParam0 /*12*/].f_2, iParam1);
}

void func_1145(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	if (Global_1058888.f_42714[iParam0 /*12*/].f_6 == iParam1)
	{
		return;
	}
	Global_1058888.f_42714[iParam0 /*12*/].f_6 = iParam1;
	HUD::_SET_MP_GAMER_TAG_SECONDARY_ICON(Global_1058888.f_42714[iParam0 /*12*/].f_2, iParam1);
}

bool func_1146(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1058888.f_42287.f_164), iParam0);
}

int func_1147(int iParam0)
{
	int iVar0;

	iVar0 = func_851(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1260(iVar0);
}

int func_1148(int iParam0, int iParam1)
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
			func_1261(iVar2);
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

void func_1149()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_1150(int iParam0, int iParam1)
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

int func_1151(bool bParam0)
{
	if (func_198() == -1)
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

int func_1152(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_1262(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_1153(int iParam0)
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

void func_1154(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= (Global_1946054.f_2657.f_26.f_6 & iParam0);
}

void func_1155(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_1156(int iParam0, int iParam1)
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
			func_1263((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1263(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_172(Global_1898164.f_1[0 /*5*/]))
	{
		func_394(Global_1898164.f_1[0 /*5*/], 3);
	}
}

int func_1157(var uParam0)
{
	return func_1178(uParam0, 8, "script@mini_game@blackjack@insurance", "PBL_GESTURE", 2);
}

int func_1158(var uParam0)
{
	if (func_1180(uParam0, 8, 0))
	{
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1159(var uParam0, int iParam1)
{
	char cVar0[16];
	char cVar2[16];
	int iVar4;

	if (func_1180(uParam0, 1, 0))
	{
		iVar4 = 0;
		while (iVar4 < 4)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar4))
			{
				func_836(uParam0, iVar4, 0, 0, 1, 1);
				func_836(uParam0, iVar4, 0, 1, 1, 1);
				func_837(uParam0, iVar4, 0, 1);
				strcpy_s(&cVar0, 16, "S");
				strcpy_s(&cVar2, 16, "S");
				StringIntConCat(&cVar0, iVar4 + 1, 16);
				StringIntConCat(&cVar2, iVar4 + 1, 16);
				strcat_s(&cVar0, 16, "_CARD_A01");
				strcat_s(&cVar2, 16, "_CARD_A02");
				func_1181(uParam0, &cVar0, func_877(uParam0, iVar4, 0, 0), 1, 0);
				func_1181(uParam0, &cVar2, func_877(uParam0, iVar4, 0, 1), 1, 0);
			}
			iVar4++;
		}
		func_832(uParam0, 0, 1, 0, 0);
		func_832(uParam0, 1, 1, 0, 1);
		func_833(uParam0, 1);
		strcpy_s(&cVar0, 16, "DLR_CARD_01");
		strcpy_s(&cVar2, 16, "DLR_CARD_02");
		func_1181(uParam0, &cVar0, func_879(uParam0, 0), 1, 0);
		func_1181(uParam0, &cVar2, func_879(uParam0, 1), 1, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1160(var uParam0, int iParam1, int iParam2)
{
	if (func_1180(uParam0, 3, 0))
	{
		func_836(uParam0, iParam1, iParam2, 2, 1, 1);
		func_1181(uParam0, "hit_card", func_877(uParam0, iParam1, iParam2, 2), 1, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1161(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1180(uParam0, 2, 0))
	{
		func_836(uParam0, iParam1, iParam2, iParam3, 1, 1);
		func_1181(uParam0, "hit_card", func_877(uParam0, iParam1, iParam2, iParam3), 1, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1162(var uParam0, int iParam1)
{
	if (func_1180(uParam0, 4, 0))
	{
		func_836(uParam0, iParam1, 0, 1, 1, 1);
		func_836(uParam0, iParam1, 1, 0, 1, 1);
		func_836(uParam0, iParam1, 1, 1, 1, 1);
		func_837(uParam0, iParam1, 0, 1);
		func_837(uParam0, iParam1, 1, 1);
		func_1181(uParam0, "SPLIT_A02_CARD", func_877(uParam0, iParam1, 0, 1), 1, 0);
		func_1181(uParam0, "SPLIT_B01_CARD", func_877(uParam0, iParam1, 1, 0), 1, 0);
		func_1181(uParam0, "SPLIT_B02_CARD", func_877(uParam0, iParam1, 1, 1), 1, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1163(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	int iVar6;

	if (func_1180(uParam0, 10, "player"))
	{
		switch (*uParam2)
		{
			case 1:
				iVar0 = func_982(uParam0, iParam1, 0, 0);
				iVar1 = func_1264(uParam0, iParam1, 0, 0);
				if (!uParam2->f_2)
				{
					iVar2 = func_835(uParam0, iParam1, 0, 1, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
					func_1181(uParam0, "CHIPS_A01", iVar2, 1, 0);
				}
				else
				{
					iVar2 = func_835(uParam0, iParam1, 0, 2, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
					func_1181(uParam0, "CHIPS_A01", iVar2, 1, 0);
					iVar2 = func_835(uParam0, iParam1, 0, 3, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
					func_1181(uParam0, "CHIPS_A01_DBL", iVar2, 1, 0);
				}
				break;
			case 2:
				break;
			case 3:
				if (!uParam2->f_2)
				{
					iVar2 = func_917(uParam0, iParam1, 0, 0);
					func_1181(uParam0, "CHIPS_A01", iVar2, 0, 0);
				}
				else
				{
					iVar2 = func_917(uParam0, iParam1, 0, 0);
					func_1181(uParam0, "CHIPS_A01", iVar2, 0, 0);
					iVar2 = func_917(uParam0, iParam1, 0, 1);
					func_1181(uParam0, "CHIPS_A01_DBL", iVar2, 0, 0);
				}
				break;
		}
		switch (uParam2->f_1)
		{
			case 1:
				iVar0 = func_982(uParam0, iParam1, 1, 0);
				iVar1 = func_1264(uParam0, iParam1, 1, 0);
				if (!uParam2->f_3)
				{
					iVar2 = func_835(uParam0, iParam1, 1, 1, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
					func_1181(uParam0, "CHIPS_B02", iVar2, 1, 0);
				}
				else
				{
					iVar2 = func_835(uParam0, iParam1, 1, 2, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
					func_1181(uParam0, "CHIPS_B02", iVar2, 1, 0);
					iVar2 = func_835(uParam0, iParam1, 1, 3, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
					func_1181(uParam0, "CHIPS_B02_DBL", iVar2, 1, 0);
				}
				break;
			case 2:
				break;
			case 3:
				if (!uParam2->f_3)
				{
					iVar2 = func_917(uParam0, iParam1, 1, 0);
					func_1181(uParam0, "CHIPS_B02", iVar2, 0, 0);
				}
				else
				{
					iVar2 = func_917(uParam0, iParam1, 1, 0);
					func_1181(uParam0, "CHIPS_B02", iVar2, 0, 0);
					iVar2 = func_917(uParam0, iParam1, 1, 1);
					func_1181(uParam0, "CHIPS_B02_DBL", iVar2, 0, 0);
				}
				break;
		}
		iVar6 = 0;
		while (iVar6 < 11)
		{
			if (*uParam2 != 0)
			{
				func_837(uParam0, iParam1, 0, 2);
				if (func_1265(uParam0, iParam1, 0, iVar6))
				{
					strcpy_s(&cVar4, 16, "CARD_A");
					if (iVar6 + 1 < 10)
					{
						strcat_s(&cVar4, 16, "0");
					}
					StringIntConCat(&cVar4, iVar6 + 1, 16);
					iVar3 = func_877(uParam0, iParam1, 0, iVar6);
					func_1181(uParam0, &cVar4, iVar3, 0, 0);
				}
			}
			if (uParam2->f_1 != 0)
			{
				func_837(uParam0, iParam1, 1, 2);
				if (func_1265(uParam0, iParam1, 1, iVar6))
				{
					strcpy_s(&cVar4, 16, "CARD_B");
					if (iVar6 + 1 < 10)
					{
						strcat_s(&cVar4, 16, "0");
					}
					StringIntConCat(&cVar4, iVar6 + 1, 16);
					iVar3 = func_877(uParam0, iParam1, 1, iVar6);
					func_1181(uParam0, &cVar4, iVar3, 0, 0);
				}
			}
			iVar6++;
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1164(var uParam0, int iParam1, int iParam2)
{
	char cVar0[64];
	char cVar8[32];

	strcpy_s(&cVar0, 64, "script@mini_game@blackjack@outcome_seat_0");
	StringIntConCat(&cVar0, iParam1 + 1, 64);
	strcpy_s(&cVar8, 32, "PBL_EXIT_TO_");
	if (iParam2 == 4)
	{
		strcat_s(&cVar8, 32, "SELF");
	}
	else
	{
		strcat_s(&cVar8, 32, "SEAT_0");
		StringIntConCat(&cVar8, iParam2 + 1, 32);
	}
	return func_1178(uParam0, 11, &cVar0, &cVar8, 2);
}

int func_1165(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar4;

	if (func_1180(uParam0, 11, "player"))
	{
		switch (*uParam2)
		{
			case 1:
				if (!uParam2->f_2)
				{
					iVar0 = func_917(uParam0, iParam1, 0, 1);
					func_1181(uParam0, "CHIPS_A01", iVar0, 0, 0);
				}
				else
				{
					iVar0 = func_917(uParam0, iParam1, 0, 2);
					func_1181(uParam0, "CHIPS_A01", iVar0, 0, 0);
					iVar0 = func_917(uParam0, iParam1, 0, 3);
					func_1181(uParam0, "CHIPS_A01_DBL", iVar0, 0, 0);
				}
				break;
			case 2:
				break;
			case 3:
				if (!uParam2->f_2)
				{
					iVar0 = func_917(uParam0, iParam1, 0, 0);
					func_1181(uParam0, "CHIPS_A01", iVar0, 0, 1);
					func_1266(uParam0, iParam1, 0, 0);
				}
				else
				{
					iVar0 = func_917(uParam0, iParam1, 0, 0);
					func_1181(uParam0, "CHIPS_A01", iVar0, 0, 1);
					func_1266(uParam0, iParam1, 0, 0);
					iVar0 = func_917(uParam0, iParam1, 0, 1);
					func_1181(uParam0, "CHIPS_A01_DBL", iVar0, 0, 1);
					func_1266(uParam0, iParam1, 0, 1);
				}
				break;
		}
		switch (uParam2->f_1)
		{
			case 1:
				if (!uParam2->f_3)
				{
					iVar0 = func_917(uParam0, iParam1, 1, 1);
					func_1181(uParam0, "CHIPS_B02", iVar0, 0, 0);
				}
				else
				{
					iVar0 = func_917(uParam0, iParam1, 1, 2);
					func_1181(uParam0, "CHIPS_B02", iVar0, 0, 0);
					iVar0 = func_917(uParam0, iParam1, 1, 3);
					func_1181(uParam0, "CHIPS_B02_DBL", iVar0, 0, 0);
				}
				break;
			case 2:
				break;
			case 3:
				if (!uParam2->f_3)
				{
					iVar0 = func_917(uParam0, iParam1, 1, 0);
					func_1181(uParam0, "CHIPS_B02", iVar0, 0, 1);
					func_1266(uParam0, iParam1, 1, 0);
				}
				else
				{
					iVar0 = func_917(uParam0, iParam1, 1, 0);
					func_1181(uParam0, "CHIPS_B02", iVar0, 0, 1);
					func_1266(uParam0, iParam1, 1, 0);
					iVar0 = func_917(uParam0, iParam1, 1, 1);
					func_1181(uParam0, "CHIPS_B02_DBL", iVar0, 0, 1);
					func_1266(uParam0, iParam1, 1, 1);
				}
				break;
		}
		iVar4 = 0;
		while (iVar4 < 11)
		{
			if (*uParam2 != 0)
			{
				if (func_1265(uParam0, iParam1, 0, iVar4))
				{
					strcpy_s(&cVar2, 16, "CARD_A");
					if (iVar4 + 1 < 10)
					{
						strcat_s(&cVar2, 16, "0");
					}
					StringIntConCat(&cVar2, iVar4 + 1, 16);
					iVar1 = func_877(uParam0, iParam1, 0, iVar4);
					func_1181(uParam0, &cVar2, iVar1, 0, 0);
				}
			}
			if (uParam2->f_1 != 0)
			{
				if (func_1265(uParam0, iParam1, 1, iVar4))
				{
					strcpy_s(&cVar2, 16, "CARD_B");
					if (iVar4 + 1 < 10)
					{
						strcat_s(&cVar2, 16, "0");
					}
					StringIntConCat(&cVar2, iVar4 + 1, 16);
					iVar1 = func_877(uParam0, iParam1, 1, iVar4);
					func_1181(uParam0, &cVar2, iVar1, 0, 0);
				}
			}
			iVar4++;
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1166(var uParam0)
{
	if (func_1180(uParam0, 6, 0))
	{
		func_832(uParam0, 0, 0, 1, 1);
		func_1181(uParam0, "Card_01", func_879(uParam0, 0), 0, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1167(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	strcpy_s(&cVar0, 64, "PBL_WIN_");
	iVar8 = 0;
	while (iVar8 < 4)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			StringIntConCat(&cVar0, iVar8 + 1, 64);
		}
		iVar8++;
	}
	return func_1178(uParam0, 12, "script@mini_game@blackjack@insurance", &cVar0, 2);
}

int func_1168(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;

	if (func_1180(uParam0, 12, 0))
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar5))
			{
				strcpy_s(&cVar3, 16, "S");
				StringIntConCat(&cVar3, iVar5 + 1, 16);
				strcat_s(&cVar3, 16, "_C02_CHIPS");
				iVar0 = func_985(uParam0, iVar5, 0);
				iVar1 = func_1267(uParam0, iVar5, 0);
				iVar2 = func_834(uParam0, iVar5, 1, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
				func_1181(uParam0, &cVar3, iVar2, 1, 0);
			}
			iVar5++;
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1169(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	strcpy_s(&cVar0, 64, "PBL_LOSS_");
	iVar8 = 0;
	while (iVar8 < 4)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			StringIntConCat(&cVar0, iVar8 + 1, 64);
		}
		iVar8++;
	}
	return func_1178(uParam0, 15, "script@mini_game@blackjack@retrieve_original_bets", &cVar0, 2);
}

int func_1170(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[16];
	int iVar3;

	if (func_1180(uParam0, 15, 0))
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar3))
			{
				iVar0 = func_917(uParam0, iVar3, 0, 0);
				strcpy_s(&cVar1, 16, "S");
				StringIntConCat(&cVar1, iVar3 + 1, 16);
				strcat_s(&cVar1, 16, "_A01_CHIPS");
				func_1181(uParam0, &cVar1, iVar0, 0, 1);
				func_1266(uParam0, iVar3, 0, 0);
			}
			iVar3++;
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1171(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	strcpy_s(&cVar0, 64, "PBL_RETRIEVE_");
	iVar8 = 0;
	while (iVar8 < 4)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			StringIntConCat(&cVar0, iVar8 + 1, 64);
		}
		iVar8++;
	}
	return func_1178(uParam0, 16, "script@mini_game@blackjack@retrieve_cards", &cVar0, 2);
}

int func_1172(var uParam0, int iParam1, bool bParam2)
{
	char cVar0[16];
	int iVar2;
	int iVar3;

	if (func_1180(uParam0, 16, 0))
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 11)
				{
					if (func_1265(uParam0, iVar2, 0, iVar3))
					{
						strcpy_s(&cVar0, 16, "S");
						StringIntConCat(&cVar0, iVar2 + 1, 16);
						strcat_s(&cVar0, 16, "_CARD_A");
						if (iVar3 + 1 < 10)
						{
							strcat_s(&cVar0, 16, "0");
						}
						StringIntConCat(&cVar0, iVar3 + 1, 16);
						func_1181(uParam0, &cVar0, func_877(uParam0, iVar2, 0, iVar3), 0, 0);
					}
					iVar3++;
				}
				func_837(uParam0, iVar2, 0, 2);
			}
			iVar2++;
		}
		if (bParam2)
		{
			iVar3 = 0;
			while (iVar3 < 11)
			{
				if (func_1268(uParam0, iVar3))
				{
					strcpy_s(&cVar0, 16, "DLR_CARD_");
					if (iVar3 + 1 < 10)
					{
						strcat_s(&cVar0, 16, "0");
					}
					StringIntConCat(&cVar0, iVar3 + 1, 16);
					func_1181(uParam0, &cVar0, func_879(uParam0, iVar3), 0, 0);
				}
				iVar3++;
			}
			func_833(uParam0, 2);
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1173(var uParam0, bool bParam1)
{
	char cVar0[16];
	int iVar2;

	if (func_1180(uParam0, 17, 0))
	{
		func_1269(uParam0);
		if (!bParam1)
		{
			func_1270(uParam0);
		}
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (func_1271(uParam0, iVar2))
			{
				strcpy_s(&cVar0, 16, "DISCARD_0");
				StringIntConCat(&cVar0, iVar2 + 1, 16);
				func_1181(uParam0, &cVar0, func_1272(uParam0, iVar2), 0, 0);
			}
			iVar2++;
		}
		if (bParam1)
		{
			iVar2 = 0;
			while (iVar2 < 11)
			{
				if (func_1268(uParam0, iVar2))
				{
					strcpy_s(&cVar0, 16, "");
					if (iVar2 + 1 < 10)
					{
						strcat_s(&cVar0, 16, "0");
					}
					StringIntConCat(&cVar0, iVar2 + 1, 16);
					strcat_s(&cVar0, 16, "_card");
					func_1181(uParam0, &cVar0, func_879(uParam0, iVar2), 0, 0);
				}
				iVar2++;
			}
			func_833(uParam0, 2);
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1174(var uParam0)
{
	if (func_1180(uParam0, 5, 0))
	{
		func_1181(uParam0, "Card_01", func_879(uParam0, 0), 0, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1175(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	strcpy_s(&cVar0, 64, "PBL_LOSS_");
	iVar8 = 0;
	while (iVar8 < 4)
	{
		if (MISC::IS_BIT_SET(iParam1, iVar8))
		{
			StringIntConCat(&cVar0, iVar8 + 1, 64);
		}
		iVar8++;
	}
	return func_1178(uParam0, 13, "script@mini_game@blackjack@insurance", &cVar0, 2);
}

int func_1176(var uParam0, int iParam1)
{
	int iVar0;
	char cVar1[16];
	int iVar3;

	if (func_1180(uParam0, 13, 0))
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar3))
			{
				iVar0 = func_919(uParam0, iVar3, 0);
				strcpy_s(&cVar1, 16, "S");
				StringIntConCat(&cVar1, iVar3 + 1, 16);
				strcat_s(&cVar1, 16, "_C01_CHIPS");
				func_1181(uParam0, &cVar1, iVar0, 0, 1);
				func_1273(uParam0, iVar3, 0);
			}
			iVar3++;
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1177(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	int iVar5;

	if (func_1180(uParam0, 14, 0))
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (MISC::IS_BIT_SET(iParam1, iVar5))
			{
				strcpy_s(&cVar3, 16, "S");
				StringIntConCat(&cVar3, iVar5 + 1, 16);
				strcat_s(&cVar3, 16, "_A02_CHIPS");
				iVar0 = func_982(uParam0, iVar5, 0, 0);
				iVar1 = func_1264(uParam0, iVar5, 0, 0);
				iVar2 = func_835(uParam0, iVar5, 0, 1, iVar0, iVar1, func_921(iVar0, iVar1, 10), 0, 0, 1);
				func_1181(uParam0, &cVar3, iVar2, 1, 0);
			}
			iVar5++;
		}
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

int func_1178(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	int iVar0;

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_28))
	{
		if (uParam0->f_1239.f_27 == iParam1)
		{
			return 1;
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1239.f_28);
			uParam0->f_1239.f_27 = 0;
			uParam0->f_1239.f_28 = -1;
		}
	}
	iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, false, true);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iVar0, true))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
		return 0;
	}
	uParam0->f_1239.f_28 = iVar0;
	uParam0->f_1239.f_27 = iParam1;
	return 1;
}

int func_1179(var uParam0)
{
	if (func_1180(uParam0, 7, 0))
	{
		func_832(uParam0, 0, 0, 1, 1);
		func_1181(uParam0, "hit_card", func_879(uParam0, 0), 1, 0);
		func_1182(uParam0);
		return 1;
	}
	return 0;
}

bool func_1180(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_28))
	{
		return false;
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1239.f_28, true, false))
	{
		return false;
	}
	else if (uParam0->f_1239.f_27 != iParam1)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = "DEALER";
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1239.f_28, *uParam0, 0.0f, 0.0f, uParam0->f_3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1239.f_28, sParam2, uParam0->f_1239, 0);
	return true;
}

int func_1181(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = 1;
	if (bParam3)
	{
		if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1239.f_28, sParam1, &sVar1, false, 0, 2))
		{
			ENTITY::SET_ENTITY_COORDS(iParam2, sVar1, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam2, sVar1.f_3, 2, true);
		}
		else
		{
			iVar0 = 0;
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1239.f_28, sParam1, iParam2, iParam4);
	return iVar0;
}

void func_1182(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_29))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_1239.f_29);
		uParam0->f_1239.f_29 = -1;
	}
	uParam0->f_1239.f_29 = uParam0->f_1239.f_28;
	uParam0->f_1239.f_28 = -1;
	uParam0->f_1239.f_27 = 0;
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1239.f_29))
	{
	}
	else
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_1239.f_29);
	}
}

bool func_1183(int iParam0, int iParam1)
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

int func_1184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 50;
		case 2:
			return 50;
		case 3:
			return 100;
		case 4:
			return 100;
		case 5:
			return 250;
		case 6:
			return 250;
		case 7:
			return 500;
		case 8:
			return 1000;
		default:
			break;
	}
	return 30;
}

void func_1185(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_15[iParam2]))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/].f_15[iParam2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/][iParam2]))
	{
		AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
	}
	uParam0->f_112[iParam1 /*194*/].f_20[iParam2] = iParam3;
	uParam0->f_112[iParam1 /*194*/].f_15[iParam2] = uParam0->f_112[iParam1 /*194*/][iParam2];
	uParam0->f_112[iParam1 /*194*/].f_25[iParam2] = 0.0f;
	uParam0->f_112[iParam1 /*194*/][iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_5[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_10[iParam2] = 0;
}

bool func_1186(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	bVar0 = true;
	if (iParam1 == 0)
	{
		if (iParam2 == 0)
		{
			vVar1 = { 0.7925f, 0.0618f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 68.7678f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.7855f, 0.1025f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 68.7761f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.7601f, 0.0273f, 0.803f /*3*/ };
			vVar4 = { 0.0021f, 0.0028f, 68.7741f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.7523f, 0.0761f, 0.803f /*3*/ };
			vVar4 = { -0.0001f, -0.0003f, 68.7658f /*3*/ };
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
			vVar1 = { 0.3238f, -0.4005f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 23.7677f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { 0.3477f, -0.3669f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, 23.776f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { 0.2765f, -0.4021f, 0.803f /*3*/ };
			vVar4 = { 0.0021f, 0.0028f, 23.774f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { 0.3055f, -0.3621f, 0.803f /*3*/ };
			vVar4 = { -0.0001f, -0.0003f, 23.7657f /*3*/ };
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
			vVar1 = { -0.3352f, -0.3958f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -21.2323f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.2945f, -0.3889f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -21.224f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.3698f, -0.3634f, 0.803f /*3*/ };
			vVar4 = { 0.0021f, 0.0028f, -21.226f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.321f, -0.3557f, 0.803f /*3*/ };
			vVar4 = { -0.0001f, -0.0003f, -21.2343f /*3*/ };
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
			vVar1 = { -0.7969f, 0.0725f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -66.2323f /*3*/ };
		}
		else if (iParam2 == 1)
		{
			vVar1 = { -0.7632f, 0.0486f, 0.803f /*3*/ };
			vVar4 = { 0.0f, 0.0f, -66.224f /*3*/ };
		}
		else if (iParam2 == 2)
		{
			vVar1 = { -0.7984f, 0.1198f, 0.803f /*3*/ };
			vVar4 = { 0.0021f, 0.0028f, -66.226f /*3*/ };
		}
		else if (iParam2 == 3)
		{
			vVar1 = { -0.7584f, 0.0908f, 0.803f /*3*/ };
			vVar4 = { -0.0001f, -0.0003f, -66.2343f /*3*/ };
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
		return false;
	}
	if (iParam5 < 0 || iParam5 >= 10)
	{
		return false;
	}
	if (bParam6)
	{
		func_414(*uParam0, uParam0->f_3, vVar1, vVar4, uParam3, uParam4);
	}
	else
	{
		*uParam3 = { vVar1 /*3*/ };
		*uParam4 = { vVar4 /*3*/ };
	}
	uParam3->f_2 += (BUILTIN::TO_FLOAT(iParam5) * 0.006f);
	return true;
}

bool func_1187(var uParam0)
{
	return func_952(*uParam0, 2);
}

void func_1188(var uParam0)
{
	uParam0->f_23 = 0;
	uParam0->f_24 = 0;
}

int func_1189(int iParam0, char* sParam1, char* sParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
	}
	else
	{
		iVar0 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0);
		if (iVar0 == 0)
		{
			strcpy_s(sParam1, 64, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iParam0));
			*sParam2 = { *sParam1 /*8*/ };
			return 1;
		}
		if (iVar0 == 2)
		{
		}
		else if (iVar0 == 1)
		{
		}
	}
	strcpy_s(sParam1, 64, "avatar_generic");
	strcpy_s(sParam2, 64, "minigames_hud");
	return 0;
}

struct<8> /*64*/ func_1190(char* sParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, sParam0);
	return cVar0;
}

void func_1191(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, sParam1);
}

void func_1192(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, sParam1);
}

void func_1193(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, bParam1);
}

void func_1194(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_8, sParam1);
}

void func_1195(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_7, sParam1);
}

void func_1196(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_40[iParam1 /*38*/].f_5, true);
}

void func_1197(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= uParam0->f_14)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14[iParam1], sParam2);
}

void func_1198(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= uParam0->f_26)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_26[iParam1], sParam2);
}

void func_1199(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, !bParam1);
}

void func_1200(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_17)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_17[iParam1], sParam2);
}

int func_1201(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_1274(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1275(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_1274(sVar0, iParam1, 0, 0, 1, 1);
}

void func_1202(var uParam0, int iParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_11, iParam1);
}

bool func_1203(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_1276(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

int func_1204(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 > func_113(uParam0, iParam2))
	{
		iParam3 = func_113(uParam0, iParam2);
	}
	if (iParam3 > uParam1->f_5)
	{
		iParam3 = uParam1->f_5;
	}
	iParam3 -= (iParam3 % uParam1->f_4);
	if (iParam3 < uParam1->f_4)
	{
		iParam3 = 0;
	}
	return iParam3;
}

float func_1205(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if ((((iParam0 < 0 || iParam0 >= 4) || iParam1 < 0) || iParam1 >= 4) || iParam1 == iParam0)
		{
			return -1.0f;
		}
	}
	else if ((((iParam0 < 0 || iParam0 >= 4) || iParam1 < 0) || iParam1 > 4) || iParam1 == iParam0)
	{
		return -1.0f;
	}
	if (iParam1 == 4)
	{
		return 2.0f;
	}
	else if (iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			return 0.0f;
		}
		else if (iParam1 == 2)
		{
			return 0.0f;
		}
		else if (iParam1 == 3)
		{
			return 2.0f;
		}
	}
	else if (iParam0 == 1)
	{
		if (iParam1 == 0)
		{
			return 1.0f;
		}
		else if (iParam1 == 2)
		{
			return 0.0f;
		}
		else if (iParam1 == 3)
		{
			return 0.0f;
		}
	}
	else if (iParam0 == 2)
	{
		if (iParam1 == 0)
		{
			return 1.0f;
		}
		else if (iParam1 == 1)
		{
			return 1.0f;
		}
		else if (iParam1 == 3)
		{
			return 0.0f;
		}
	}
	else if (iParam0 == 3)
	{
		if (iParam1 == 0)
		{
			return 2.0f;
		}
		else if (iParam1 == 1)
		{
			return 1.0f;
		}
		else if (iParam1 == 2)
		{
			return 1.0f;
		}
	}
	return -1.0f;
}

bool func_1206(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 3:
			return true;
		case 5:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_1207(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 3;
		case 2:
			return 3;
		case 3:
			return 5;
		case 4:
			return 5;
		case 5:
			return 7;
		case 6:
			return 7;
		case 7:
			return 8;
		case 8:
			return 9;
		default:
			break;
	}
	return 9;
}

void func_1208(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/][iParam2]))
	{
		if (bParam3)
		{
			func_1185(uParam0, iParam1, iParam2, 2);
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/][iParam2]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_112[iParam1 /*194*/][iParam2]));
			AUDIO::_0x341CDD17EFC2472E(iParam1, iParam2);
		}
	}
	uParam0->f_112[iParam1 /*194*/][iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_5[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_10[iParam2] = 0;
}

void func_1209(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		(*uParam2)[iVar0] = uParam0->f_112[iParam1 /*194*/].f_10[iVar0];
		iVar0++;
	}
}

bool func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 3:
			return true;
		case 5:
			return true;
		case 7:
			return true;
		default:
			break;
	}
	return false;
}

int func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 3:
			return 2;
		case 5:
			return 4;
		case 7:
			return 6;
		default:
			break;
	}
	return 0;
}

struct<2> /*16*/ func_1212(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_1213(char* sParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
	func_1277(func_1212(joaat("ATTEMPTS"), joaat("BLACKJACK")));
	func_1277(func_1212(joaat("LOSSES"), joaat("BLACKJACK")));
	func_1277(func_1212(joaat("WINS"), joaat("BLACKJACK")));
	func_1277(func_1212(joaat("WIN_STREAK"), joaat("BLACKJACK")));
	func_1277(func_1212(joaat("BEST_WIN_STREAK"), joaat("BLACKJACK")));
	func_1277(func_1212(joaat("WINS"), joaat("BLACKJACK_DOUBLED_DOWN")));
	func_1277(func_1212(joaat("WINS"), joaat("BLACKJACK_4_HITS")));
}

int func_1214(struct<2> /*16*/ sParam0, char* sParam2)
{
	switch (sParam0.f_1)
	{
		case 0:
			strcpy_s(sParam2, 16, "HEARTS_");
			break;
		case 1:
			strcpy_s(sParam2, 16, "DIAMONDS_");
			break;
		case 3:
			strcpy_s(sParam2, 16, "CLUBS_");
			break;
		case 2:
			strcpy_s(sParam2, 16, "SPADES_");
			break;
		default:
			strcpy_s(sParam2, 16, "BACK");
			return 0;
	}
	switch (sParam0.f_0)
	{
		case 2:
			strcat_s(sParam2, 16, "2");
			break;
		case 3:
			strcat_s(sParam2, 16, "3");
			break;
		case 4:
			strcat_s(sParam2, 16, "4");
			break;
		case 5:
			strcat_s(sParam2, 16, "5");
			break;
		case 6:
			strcat_s(sParam2, 16, "6");
			break;
		case 7:
			strcat_s(sParam2, 16, "7");
			break;
		case 8:
			strcat_s(sParam2, 16, "8");
			break;
		case 9:
			strcat_s(sParam2, 16, "9");
			break;
		case 10:
			strcat_s(sParam2, 16, "10");
			break;
		case 11:
			strcat_s(sParam2, 16, "J");
			break;
		case 12:
			strcat_s(sParam2, 16, "Q");
			break;
		case 13:
			strcat_s(sParam2, 16, "K");
			break;
		case 14:
			strcat_s(sParam2, 16, "A");
			break;
		default:
			strcpy_s(sParam2, 16, "BACK");
			return 0;
	}
	return 1;
}

int func_1215(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1278(iParam0))
	{
		return 0;
	}
	if (!func_405())
	{
		return 0;
	}
	if (!func_1279(iParam0, &iVar0, &iVar1))
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

int func_1216(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > func_113(uParam0, iParam1))
	{
		iParam2 = func_113(uParam0, iParam1);
	}
	if (iParam2 > (func_492(uParam0, iParam1, 0) / 2))
	{
		iParam2 = (func_492(uParam0, iParam1, 0) / 2);
	}
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	return iParam2;
}

int func_1217(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		iVar1 += (*uParam0)[iVar0];
		iVar0++;
	}
	return iVar1;
}

void func_1218(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;
	struct<2> /*16*/ sVar4;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;

	sVar0 = { func_1212(joaat("WINS"), iParam0) /*2*/ };
	sVar2 = { func_1212(joaat("WIN_STREAK"), iParam0) /*2*/ };
	sVar4 = { func_1212(joaat("BEST_WIN_STREAK"), iParam0) /*2*/ };
	STATS::_STAT_ID_INCREMENT_INT(&sVar0, 1);
	STATS::_STAT_ID_INCREMENT_INT(&sVar2, 1);
	iVar6 = 0;
	if (STATS::STAT_ID_GET_INT(&sVar2, &iVar6))
	{
		STATS::_0x91A4F58E01ED5E4C(&sVar4, iVar6);
	}
	STATS::STAT_ID_GET_INT(&sVar0, &uVar7);
	STATS::STAT_ID_GET_INT(&sVar2, &uVar8);
	STATS::STAT_ID_GET_INT(&sVar4, &uVar9);
}

bool func_1219(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/].f_24 > 21;
}

void func_1220(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_6, bParam1);
}

void func_1221(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;
	var uVar4;
	var uVar5;

	sVar0 = { func_1212(joaat("LOSSES"), iParam0) /*2*/ };
	sVar2 = { func_1212(joaat("WIN_STREAK"), iParam0) /*2*/ };
	STATS::_STAT_ID_INCREMENT_INT(&sVar0, 1);
	STATS::_0x0FEE2561120F3333(&sVar2);
	STATS::STAT_ID_GET_INT(&sVar0, &uVar4);
	STATS::STAT_ID_GET_INT(&sVar2, &uVar5);
}

void func_1222(var uParam0, int iParam1)
{
	MISC::_SET_BIT_FLAG(uParam0, iParam1);
}

void func_1223(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_40[iParam1 /*38*/].f_5, false);
}

int func_1224()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

char* func_1225()
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "share/");
	strcat_s(&cVar0, 64, NETWORK::_NETWORK_GET_ROS_TITLE_NAME());
	strcat_s(&cVar0, 64, "/pedshots/");
	return func_1227(cVar0);
}

char* func_1226(int iParam0)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			strcat_s(&cVar0, 64, "PROFILE_PHOTO");
			break;
		case 1:
			strcat_s(&cVar0, 64, "MISSION_PHOTO");
			break;
	}
	strcat_s(&cVar0, 64, ".jpg");
	return func_1227(cVar0);
}

char* func_1227(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_1228(int iParam0)
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

void func_1229(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1280(iParam0, iParam1))
		{
			if (func_1281(iParam0, iParam1))
			{
				if (func_1282(iParam0, iParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1283(iParam0);
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

void func_1230(int iParam0, int iParam1, bool bParam2)
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

void func_1231(int iParam0, bool bParam1)
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

void func_1232(int iParam0, int iParam1)
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

int func_1233(var uParam0, int iParam1)
{
	if (uParam0->f_27[iParam1 /*60*/] == -1)
	{
		return 0;
	}
	uParam0->f_27[iParam1 /*60*/] = -1;
	uParam0->f_27[iParam1 /*60*/].f_1 = 0;
	uParam0->f_27[iParam1 /*60*/].f_2 = -1;
	uParam0->f_27[iParam1 /*60*/].f_3 = -1;
	uParam0->f_27[iParam1 /*60*/].f_7 = 0;
	uParam0->f_27[iParam1 /*60*/].f_59 = 0;
	return 1;
}

int func_1234(var uParam0, int iParam1)
{
	if (func_822(uParam0, iParam1))
	{
	}
	else
	{
		uParam0->f_543[iParam1] = 0;
		if (uParam0->f_582 == iParam1)
		{
			uParam0->f_579 = 0;
		}
		else
		{
			uParam0->f_561[iParam1 /*2*/] = 0;
		}
		if (uParam0->f_582 == iParam1)
		{
			func_1284(uParam0);
		}
		else
		{
			func_1285(uParam0, iParam1);
		}
		if (uParam0->f_582 == iParam1)
		{
			uParam0->f_582 = -1;
		}
		return 1;
	}
	return 0;
}

void func_1235(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0->f_27[iParam1 /*60*/].f_59;
	uParam0->f_27[iParam1 /*60*/].f_59++;
	func_1188(&(uParam0->f_27[iParam1 /*60*/].f_8[iVar0 /*25*/]));
	func_1241(&(uParam0->f_27[iParam1 /*60*/].f_8[iVar0 /*25*/]), uParam2);
}

void func_1236(var uParam0, var uParam1)
{
	func_1188(&(uParam0->f_2));
	func_1241(&(uParam0->f_2), uParam1);
}

bool func_1237(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (!func_1068(uParam0, *uParam1, uParam1->f_3))
	{
		return false;
	}
	if (func_759(uParam0, *uParam1) < uParam1->f_3)
	{
		return false;
	}
	iVar0 = uParam1->f_3;
	switch (*uParam2)
	{
		case 4:
			if (uParam1->f_8[iVar0 /*25*/].f_23 > 2)
			{
				return false;
			}
			if (uParam1->f_1 < uParam1->f_4[iVar0])
			{
				return false;
			}
			break;
		case 5:
			if (uParam1->f_8[iVar0 /*25*/].f_24 > 21)
			{
				return false;
			}
			break;
		case 6:
			if (uParam1->f_59 > 1)
			{
				return false;
			}
			if (uParam1->f_8[iVar0 /*25*/].f_23 > 2)
			{
				return false;
			}
			if (uParam1->f_8[iVar0 /*25*/][0 /*2*/] != uParam1->f_8[iVar0 /*25*/][1 /*2*/])
			{
				return false;
			}
			if (uParam1->f_1 < uParam1->f_4[iVar0])
			{
				return false;
			}
			break;
		case 7:
			break;
		default:
			return false;
	}
	return true;
}

void func_1238(var uParam0, int iParam1, int iParam2, var uParam3)
{
	func_1241(&(uParam0->f_27[iParam1 /*60*/].f_8[iParam2 /*25*/]), uParam3);
}

void func_1239(var uParam0, int iParam1)
{
	uParam0->f_27[iParam1 /*60*/].f_59--;
}

bool func_1240(var uParam0, var uParam1)
{
	if (uParam0->f_105 >= uParam0->f_106)
	{
		return false;
	}
	*uParam1 = { *(uParam0[uParam0->f_105 /*2*/]) /*2*/ };
	uParam0->f_105++;
	return true;
}

int func_1241(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam1->f_23)
	{
		if (uParam0->f_23 >= 11)
		{
			return 0;
		}
		else
		{
			*(uParam0[uParam0->f_23 /*2*/]) = { *(uParam1[iVar0 /*2*/]) /*2*/ };
			uParam0->f_23++;
		}
		iVar0++;
	}
	uParam0->f_24 = func_645(uParam0, -1);
	return 1;
}

int func_1242(var uParam0, var uParam1)
{
	if (uParam0->f_24 > 21 && uParam1->f_24 > 21)
	{
		return 0;
	}
	if (uParam1->f_24 > 21)
	{
		return 1;
	}
	if (uParam0->f_24 > 21)
	{
		return -1;
	}
	if (uParam0->f_24 > uParam1->f_24)
	{
		return 1;
	}
	if (uParam0->f_24 == uParam1->f_24)
	{
		return 0;
	}
	return -1;
}

void func_1243(var uParam0, int iParam1, int iParam2)
{
	if (func_1068(uParam0, iParam1, iParam2))
	{
		uParam0->f_27[iParam1 /*60*/].f_1 += uParam0->f_27[iParam1 /*60*/].f_4[iParam2];
		func_1070(uParam0, iParam1, iParam2, 0);
	}
}

bool func_1244(int iParam0)
{
	return func_838(iParam0, 2);
}

void func_1245(var uParam0, Vector3 vParam1, Vector3 vParam4, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11, int iParam12, int iParam13, float fParam14, bool bParam15, float fParam16, float fParam17)
{
	uParam0->f_1 = { vParam1 /*3*/ };
	uParam0->f_4 = { vParam4 /*3*/ };
	uParam0->f_7 = fParam7;
	uParam0->f_25 = iParam8;
	uParam0->f_26 = iParam9;
	uParam0->f_27 = fParam10;
	uParam0->f_8 = { vParam1 /*3*/ };
	uParam0->f_11 = 1.0f;
	uParam0->f_12 = 0.0f;
	uParam0->f_13 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_16 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_22 = fParam7;
	uParam0->f_23 = (fParam7 + fParam16);
	uParam0->f_28 = iParam12;
	uParam0->f_24 = bParam11;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_23, 0, 1, 1, 2, 1, 0);
	if (!bParam15)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", fParam17);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	if (fParam14 > 0.0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam14);
	}
	if (uParam0->f_28)
	{
		MAP::LOCK_MINIMAP_ANGLE(iParam13);
	}
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	uParam0->f_38 = 0;
	uParam0->f_37 = 0;
}

void func_1246(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	Vector3 vVar2;

	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		return;
	}
	if (bParam4)
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X") /* GXTEntry: "FRONTEND RIGHT AXIS X - *NO STANDARD USEAGE*" */) * 127.0f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y") /* GXTEntry: "FRONTEND RIGHT AXIS Y - *NO STANDARD USEAGE*" */) * 127.0f));
	}
	else
	{
		uParam0->f_29[2] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_X") /* GXTEntry: "FRONTEND RIGHT AXIS X - *NO STANDARD USEAGE*" */) * 127.0f));
		uParam0->f_29[3] = BUILTIN::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, joaat("INPUT_FRONTEND_RIGHT_AXIS_Y") /* GXTEntry: "FRONTEND RIGHT AXIS Y - *NO STANDARD USEAGE*" */) * 127.0f));
	}
	if (uParam0->f_29[2] != 0 || uParam0->f_29[3] != 0)
	{
	}
	if (uParam0->f_34 == uParam0->f_29[2] && uParam0->f_35 == uParam0->f_29[3])
	{
		if (uParam0->f_37 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_34 = 0;
			uParam0->f_35 = 0;
		}
	}
	else
	{
		uParam0->f_34 = uParam0->f_29[2];
		uParam0->f_35 = uParam0->f_29[3];
		uParam0->f_37 = MISC::GET_GAME_TIMER() + 4000;
	}
	if (bParam2)
	{
		uParam0->f_13.f_2 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[2]) / 127.0f) * (float)uParam0->f_25);
		uParam0->f_13.f_1 = ((-uParam0->f_13.f_2 * uParam0->f_27) / (float)uParam0->f_25);
		if (PAD::IS_LOOK_INVERTED())
		{
			uParam0->f_13 = ((BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127.0f) * (float)uParam0->f_26);
		}
		else
		{
			uParam0->f_13 = (-(BUILTIN::TO_FLOAT(uParam0->f_29[3]) / 127.0f) * (float)uParam0->f_26);
		}
	}
	else
	{
		uParam0->f_13 = { 0.0f, 0.0f, 0.0f /*3*/ };
		uParam0->f_34 = 0;
		uParam0->f_35 = 0;
	}
	fVar0 = (30.0f * BUILTIN::TIMESTEP());
	if (!func_1286(uParam0->f_1, uParam0->f_8))
	{
		uParam0->f_12 += MISC::GET_FRAME_TIME();
		if (uParam0->f_12 > uParam0->f_11)
		{
			uParam0->f_12 = uParam0->f_11;
		}
		fVar1 = (uParam0->f_12 / uParam0->f_11);
		uParam0->f_1 = { func_1287(uParam0->f_1, uParam0->f_8, fVar1) /*3*/ };
	}
	vVar2 = { uParam0->f_13 + uParam0->f_16 /*3*/ };
	uParam0->f_19 += func_1288((((vVar2.x - uParam0->f_19) * 0.05f) * fVar0), -3.0f, 3.0f);
	uParam0->f_19.f_1 += func_1288((((vVar2.y - uParam0->f_19.f_1) * 0.05f) * fVar0), -3.0f, 3.0f);
	uParam0->f_19.f_2 += func_1288((((vVar2.z - uParam0->f_19.f_2) * 0.05f) * fVar0), -3.0f, 3.0f);
	if (uParam0->f_36)
	{
		uParam0->f_19 = func_1288(uParam0->f_19, BUILTIN::TO_FLOAT(-uParam0->f_26), BUILTIN::TO_FLOAT(uParam0->f_26));
		uParam0->f_19.f_1 = func_1288(uParam0->f_19.f_1, -uParam0->f_27, uParam0->f_27);
		uParam0->f_19.f_2 = func_1288(uParam0->f_19.f_2, BUILTIN::TO_FLOAT(-uParam0->f_25), BUILTIN::TO_FLOAT(uParam0->f_25));
	}
	uParam0->f_22 = uParam0->f_7;
	if (bParam1)
	{
		if (bParam3)
		{
			if (BUILTIN::TO_FLOAT(uParam0->f_29[1]) < 0.0f)
			{
				uParam0->f_22 += (float)BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128.0f) * uParam0->f_24));
			}
		}
		else
		{
			uParam0->f_22 += (float)BUILTIN::ROUND(((BUILTIN::TO_FLOAT(uParam0->f_29[1]) / 128.0f) * uParam0->f_24));
		}
	}
	uParam0->f_23 += (((uParam0->f_22 - uParam0->f_23) * MISC::GET_FRAME_TIME()) * (2.5f / 0.65f));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_19, uParam0->f_23, 0, 1, 1, 2, 1, 0);
}

int func_1247(int iParam0)
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

void func_1248(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_775(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_1249(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_1289(iParam1);
	}
}

float func_1250(int iParam0, int iParam1, bool bParam2)
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
	return func_1290(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_1251(int iParam0, bool bParam1)
{
	if (!func_1104(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_1291(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_1252(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_792(iParam0);
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

int func_1253(int iParam0, bool bParam1)
{
	if (!func_1104(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_1292(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_1254(int iParam0)
{
	int iVar0;

	if (!func_1104(iParam0))
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

void func_1255(int iParam0, int iParam1)
{
	if (!func_1104(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

var func_1256(var uParam0, int iParam1)
{
	return uParam0->f_543[iParam1];
}

int func_1257()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_1258(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_1259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1293(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_1257())
	{
		return -1;
	}
	iVar0 = func_1258(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_858(iVar1, 0);
	func_1294(iVar1, 0);
	func_1295(iVar1, 0);
	func_1296(iVar1, 0);
	func_1297(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1298(iVar1, iParam4);
	}
	return iVar1;
}

int func_1260(int iParam0)
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

int func_1261(int iParam0)
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

bool func_1262(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_1263(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

int func_1264(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_10[iParam3];
}

bool func_1265(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/].f_23[iParam3]);
}

void func_1266(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3]))
	{
	}
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/][iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_5[iParam3] = 0;
	uParam0->f_112[iParam1 /*194*/].f_60[iParam2 /*30*/].f_10[iParam3] = 0;
}

var func_1267(var uParam0, int iParam1, int iParam2)
{
	return uParam0->f_112[iParam1 /*194*/].f_30.f_10[iParam2];
}

bool func_1268(var uParam0, int iParam1)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_889.f_23[iParam1]);
}

void func_1269(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (!func_1271(uParam0, iVar2))
				{
					if (func_1265(uParam0, iVar0, iVar1, iVar2))
					{
						uParam0->f_925[iVar2] = func_877(uParam0, iVar0, iVar1, iVar2);
						uParam0->f_112[iVar0 /*194*/].f_121[iVar1 /*36*/].f_23[iVar2] = 0;
					}
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = 0;
			while (iVar2 < 11)
			{
				if (func_1265(uParam0, iVar0, iVar1, iVar2))
				{
					func_309(uParam0, iVar0, iVar1, iVar2);
				}
				if (func_1299(uParam0, iVar0, iVar1, iVar2))
				{
					func_625(uParam0, iVar0, iVar1, iVar2, 1);
				}
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_837(uParam0, iVar0, 0, 0);
		func_837(uParam0, iVar0, 1, 0);
		iVar0++;
	}
}

void func_1270(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_1271(uParam0, iVar0))
		{
			if (func_1268(uParam0, iVar0))
			{
				uParam0->f_925[iVar0] = func_879(uParam0, iVar0);
				uParam0->f_889.f_23[iVar0] = 0;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		if (func_1268(uParam0, iVar0))
		{
			func_310(uParam0, iVar0);
		}
		if (func_1300(uParam0, iVar0))
		{
			func_1301(uParam0, iVar0, 1);
		}
		iVar0++;
	}
	func_833(uParam0, 0);
}

bool func_1271(var uParam0, int iParam1)
{
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_925[iParam1]);
}

int func_1272(var uParam0, int iParam1)
{
	return uParam0->f_925[iParam1];
}

void func_1273(var uParam0, int iParam1, int iParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_112[iParam1 /*194*/].f_30[iParam2]))
	{
	}
	uParam0->f_112[iParam1 /*194*/].f_30[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_5[iParam2] = 0;
	uParam0->f_112[iParam1 /*194*/].f_30.f_10[iParam2] = 0;
}

int func_1274(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

char* func_1275(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return MISC::VAR_STRING(2, func_1302(sParam1));
}

bool func_1276(int iParam0)
{
	return iParam0 != 0;
}

void func_1277(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
}

bool func_1278(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1279(int iParam0, int iParam1, int iParam2)
{
	if (!func_1278(iParam0))
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

bool func_1280(int iParam0, int iParam1)
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

bool func_1281(int iParam0, int iParam1)
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

bool func_1282(int iParam0, int iParam1)
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
	if (!func_1280(iParam0, iVar0))
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

void func_1283(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_1284(var uParam0)
{
	struct<42> /*336*/ sVar0;
	int iVar42;

	sVar0.f_10 = 6;
	sVar0.f_0 = joaat("MINIGAMEEVENTTABLELEFT");
	strcpy_s(&(sVar0.f_1), 64, "");
	sVar0.f_9 = uParam0->f_582;
	sVar0.f_41 = 0;
	iVar42 = 0;
	while (iVar42 < 4)
	{
		if (!func_822(uParam0, iVar42))
		{
			sVar0.f_10[sVar0.f_41 /*5*/] = iVar42;
			sVar0.f_10[sVar0.f_41 /*5*/].f_1 = 0;
			sVar0.f_10[sVar0.f_41 /*5*/].f_3.f_1 = 0;
			sVar0.f_10[sVar0.f_41 /*5*/].f_3 = func_1256(uParam0, iVar42);
			sVar0.f_41++;
		}
		iVar42++;
	}
	MINIGAME::_0xE1F365C4C8F259D8(sVar0.f_0, &sVar0, 42);
}

void func_1285(var uParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = joaat("MINIGAMEEVENTPLAYERREMOVED");
	sVar0.f_1 = iParam1;
	sVar0.f_1.f_1 = 0;
	sVar0.f_1.f_3.f_1 = 0;
	sVar0.f_1.f_3 = 0;
	MINIGAME::_0xE1F365C4C8F259D8(sVar0.f_0, &sVar0, 6);
}

bool func_1286(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1287(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return FloatToVector((1.0f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

float func_1288(float fParam0, float fParam1, float fParam2)
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

void func_1289(int iParam0)
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

float func_1290(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_1291(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_1104(iParam0))
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
	if (!func_1104(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_1292(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1104(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_1251(iParam0, 1);
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

bool func_1293(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1294(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_1295(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_1296(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_1297(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_1298(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

bool func_1299(var uParam0, int iParam1, int iParam2, int iParam3)
{
	return func_1303(uParam0->f_112[iParam1 /*194*/].f_121[iParam2 /*36*/][iParam3 /*2*/]);
}

bool func_1300(var uParam0, int iParam1)
{
	return func_1303(uParam0->f_889[iParam1 /*2*/]);
}

void func_1301(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		if (uParam0->f_889.f_23[iParam1] != 0)
		{
		}
	}
	if (func_802(uParam0, uParam0->f_889[iParam1 /*2*/], &iVar0))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	}
	uParam0->f_889[iParam1 /*2*/] = { func_242() /*2*/ };
}

char* func_1302(char* sParam0)
{
	return sParam0;
}

int func_1303(struct<2> /*16*/ sParam0)
{
	if (((sParam0.f_0 >= 2 && sParam0.f_0 <= 14) && sParam0.f_1 >= 0) && sParam0.f_1 <= 3)
	{
		return 1;
	}
	return 0;
}

