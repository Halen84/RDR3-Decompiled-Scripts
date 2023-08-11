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
	float fLocal_14 = 0.0f;
	struct<2805> /*22440*/ sLocal_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 19, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 45, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1034818683, 1022739087, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1053273620, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1101004800, 1109393408, 1048576000, 0, 1, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 5, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1, 28, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 0, 0, 0, 29, 0, -1, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1110704128, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 7, 128, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 150, 6, 1, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_2820 = -1;
	var uLocal_2821 = -1;
	var uLocal_2822 = 0;
	var uLocal_2823 = -1;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = -1;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 4;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	struct<14> /*112*/ sScriptParam_0 = { -1, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, -1, 0 } ;
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
	float fVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	fLocal_14 = 0.8f;
	fVar0 = 0.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1();
	}
	sLocal_15.f_2804 = { sScriptParam_0 /*12*/ };
	func_3(func_2(sScriptParam_0.f_2), 0);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(sScriptParam_0.f_6, 1.5f);
	func_4(&sScriptParam_0);
	func_7(func_6(func_5()), 1);
	func_8(1, 128);
	HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
	func_9(&sLocal_15, &sScriptParam_0);
	while (!func_10(&sScriptParam_0))
	{
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
		if (!func_11(1))
		{
			func_1();
		}
		fVar0 += MISC::GET_FRAME_TIME();
		if (fVar0 > 10.0f)
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	while (!func_12(func_2(sScriptParam_0.f_2), 0))
	{
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
		if (!func_11(1))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	func_13();
	while (!func_14(&(sLocal_15.f_1330)))
	{
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
		if (!func_11(1))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	func_8(1, (1 << 23));
	if (sScriptParam_0.f_13 != 1)
	{
	}
	else if (func_15(1))
	{
		while (!func_16(1))
		{
			func_17(0, 0);
			if (!func_11(1))
			{
				func_1();
			}
			BUILTIN::WAIT(0);
		}
	}
	if (func_18(1, 32))
	{
		while (func_18(1, 32))
		{
			if (!func_11(1))
			{
				func_1();
			}
			BUILTIN::WAIT(0);
		}
	}
	if (func_19())
	{
		func_20(sScriptParam_0.f_6, 1.5f, 0);
		AUDIO::START_AUDIO_SCENE("Camp_Poker_and_Dominoes_Scene");
		AUDIO::TRIGGER_MUSIC_EVENT("DOMINOES_START_MUSIC");
	}
	func_21(&(sLocal_15.f_7), sScriptParam_0.f_10, 0, -1);
	func_22(&sLocal_15, &sScriptParam_0, 0);
	func_8(1, 256);
	if (func_19())
	{
		func_17(0, 0);
		CAM::_0x718C6ECF5E8CBDD4();
		func_23(&(sLocal_15.f_1330), &(sLocal_15.f_1330.f_199[sLocal_15.f_1330.f_194 /*124*/]), 1065185444);
		BUILTIN::WAIT(0);
	}
	if (func_19())
	{
		func_20(sLocal_15.f_1330, 2.0f, 0);
	}
	while (true)
	{
		if (func_19())
		{
			CAM::_0x718C6ECF5E8CBDD4();
		}
		if (func_24(&sLocal_15))
		{
			func_1();
		}
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (func_19())
	{
		AUDIO::STOP_AUDIO_SCENE("Camp_Poker_and_Dominoes_Scene");
		AUDIO::TRIGGER_MUSIC_EVENT("DOMINOES_STOP_MUSIC");
	}
	ENTITY::REMOVE_MODEL_HIDE(sLocal_15.f_1330, 2.0f, joaat("P_MUGCOFFEE01X"), 1);
	func_7(func_6(func_5()), 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	func_25(&sLocal_15, 3);
}

int func_2(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			return 0;
		case 98:
			return 1;
		case 5:
			return 2;
		case 9:
			return 3;
		case 69:
			return 5;
		default:
			break;
	}
	return 0;
}

void func_3(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_26(iParam0, bParam1);
	func_27();
	CAM::_LOAD_CAMERA_DATA_DICT("table_games_cam");
	AUDIO::PREPARE_SOUNDSET("MGDOM_Sounds", true);
	if (!func_19())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = func_29(1, func_28(), iVar0);
			if (iVar1 != 0)
			{
				STREAMING::REQUEST_MODEL(iVar1, false);
			}
			iVar0++;
		}
	}
	HUD::TEXT_BLOCK_REQUEST("MGDOM");
}

void func_4(var uParam0)
{
	int iVar0;
	int iVar1;

	func_30(1);
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(2, true, false);
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!Global_1935630.f_12)
	{
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_35))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		}
	}
	func_31(1);
	HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
	if (func_32() == -1)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(10000);
	}
	func_33(0);
	iVar0 = func_34(0);
	if (func_35(iVar0))
	{
		iVar1 = func_36(iVar0);
		if (iVar1 == 4)
		{
			MISC::_0x1096603B519C905F(func_37(uParam0->f_1, func_32() != -1));
		}
	}
	func_38(0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(Global_35, 9, false);
	func_39();
	AUDIO::START_AUDIO_SCENE(func_40(uParam0->f_1));
}

int func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_41(iVar0))
		{
			return func_42(func_28(), iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_6(int iParam0)
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

void func_7(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_43(iParam0))
		{
			func_44(iParam0, (1 << 26));
		}
	}
	else if (func_43(iParam0))
	{
		func_45(iParam0, (1 << 26));
	}
}

void func_8(int iParam0, int iParam1)
{
	if (!func_18(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] |= iParam1;
}

void func_9(var uParam0, var uParam1)
{
	if (uParam0->f_4 == 1)
	{
		return;
	}
	if (func_19())
	{
		if (uParam1->f_2 == 71)
		{
			uParam1->f_9 = -103.99f;
			func_46(joaat("WS_HSO_DOMINOES_SEATS"), 1, 0);
		}
		if (uParam1->f_2 == 98)
		{
			uParam1->f_9 = 135.0f;
			func_46(joaat("WS_DEWCLM_DOMINOES_SEATS"), 1, 0);
		}
		if (uParam1->f_2 == 9)
		{
			uParam1->f_9 = 77.47f;
			uParam1->f_6 = { uParam1->f_6 + func_47(0.0f, -0.1f, 0.0f, uParam1->f_9) /*3*/ };
			func_46(joaat("WS_SHADY_BELLE_DOMINO_SEATS"), 1, 0);
			func_48(-1828030290);
			func_49(827269092);
		}
	}
	uParam0->f_4 = 1;
}

bool func_10(var uParam0)
{
	if (func_19())
	{
		if (uParam0->f_2 == 98)
		{
			if (!STREAMING::IS_IPL_ACTIVE_HASH(719147410))
			{
				return false;
			}
		}
		if (uParam0->f_2 == 9)
		{
			if (!STREAMING::IS_IPL_ACTIVE_HASH(827269092))
			{
				return false;
			}
		}
		if (uParam0->f_2 == 71)
		{
			if (!STREAMING::IS_IPL_ACTIVE_HASH(1453569688))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_11(int iParam0)
{
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	else if (Global_1935630.f_12)
	{
		return false;
	}
	else if (func_18(iParam0, 8))
	{
		return false;
	}
	func_50();
	GRAPHICS::_0x1C6306E5BC25C29C();
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	PED::SET_PED_RESET_FLAG(Global_35, 184 /*PRF_DisableAutoGreets*/, true);
	PED::SET_PED_RESET_FLAG(Global_35, 175 /*PRF_0xF0584C9A*/, true);
	func_51(iParam0, 1);
	PLAYER::_SET_PLAYER_RESET_FLAG(PLAYER::PLAYER_ID(), 41, true);
	Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
	return true;
}

bool func_12(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_52(iParam0, bParam1))
	{
		return false;
	}
	if (!func_53())
	{
		return false;
	}
	if (!CAM::_IS_CAM_DATA_DICT_LOADED("table_games_cam"))
	{
		return false;
	}
	if (!AUDIO::PREPARE_SOUNDSET("MGDOM_Sounds", true))
	{
		return false;
	}
	if (!AUDIO::PREPARE_SOUNDSET("HUD_DOMINOS_SOUNDSET", true))
	{
		return false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED("MGDOM"))
	{
		return false;
	}
	if (!func_19())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = func_29(1, func_28(), iVar0);
			if (iVar1 != 0)
			{
				if (!STREAMING::HAS_MODEL_LOADED(iVar1))
				{
					return false;
				}
			}
			iVar0++;
		}
	}
	return true;
}

void func_13()
{
	ANIMSCENE::_LOAD_MGM_ASSETS("Dominoes");
}

bool func_14(var uParam0)
{
	if (!ANIMSCENE::_IS_MGM_SYSTEM_LOADED("Dominoes"))
	{
		return false;
	}
	func_54(uParam0);
	return true;
}

bool func_15(int iParam0)
{
	return Global_1899528.f_61.f_4 != -1;
}

bool func_16(int iParam0)
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

void func_17(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1.0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1.0f);
}

bool func_18(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] & iParam1) != 0;
}

bool func_19()
{
	return (Global_1894899 & 2) != 0;
}

void func_20(Vector3 vParam0, float fParam3, int iParam4)
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

int func_21(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_55(uParam0);
	if (func_32() == -1)
	{
		if (uParam0->f_1)
		{
			uParam0->f_666.f_3 = -1617663169;
		}
		else
		{
			switch (func_28())
			{
				case 69:
					uParam0->f_666.f_3 = -1360983891;
					break;
				case 5:
					uParam0->f_666.f_3 = -1234859967;
					break;
				case 38:
					uParam0->f_666.f_3 = -382896522;
					break;
				case 71:
					uParam0->f_666.f_3 = -1617663169;
					break;
				case 98:
					uParam0->f_666.f_3 = -1234859967;
					break;
				case 9:
					uParam0->f_666.f_3 = -382896522;
					break;
				default:
					uParam0->f_666.f_3 = -1234859967;
					break;
			}
		}
	}
	if (iParam1 != -1)
	{
		uParam0->f_666.f_6 = iParam1;
	}
	if (iParam2 != 0)
	{
		uParam0->f_666.f_3 = iParam2;
	}
	if (uParam0->f_666.f_3 == -1234859967)
	{
		uParam0->f_666.f_14[0] = 100;
	}
	else if (uParam0->f_666.f_3 == -382896522)
	{
		uParam0->f_666.f_14[0] = 90;
	}
	else
	{
		uParam0->f_666.f_14[0] = 60;
	}
	if (iParam3 != -1)
	{
		uParam0->f_666.f_14[0] = iParam3;
	}
	MINIGAME::_0x58521E6DCDE97D74(uParam0->f_666.f_4, uParam0->f_666.f_5, uParam0->f_666.f_3);
	func_56(&(uParam0->f_340));
	func_56(&(uParam0->f_14));
	func_57(uParam0);
	func_58(1);
	return 1;
}

void func_22(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_2804 = { *uParam1 /*12*/ };
	uParam0->f_6 = 0;
	uParam0->f_1330.f_1003 = uParam1->f_4;
	func_59(&(uParam0->f_1330), uParam1->f_6, uParam1->f_9, uParam1->f_2, 0);
	func_60(&(uParam0->f_2334), uParam0->f_1330.f_6);
	func_61(&(uParam0->f_2840), uParam1->f_6, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 3.0f, "DomBlockVol");
	uParam0->f_2839 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_2840, false, 15);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2840, 2016, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2840, 10208, 0, 0, -1, -1, 0);
	uParam0->f_2841 = func_62(uParam0->f_2840, "DominoNoHorse", 1, 0, 0, 0, -1082130432);
	if (func_19() || func_32() == 0)
	{
		func_63(&(uParam0->f_1330));
		func_64(&(uParam0->f_1330));
		func_65(&(uParam0->f_1330));
		func_20(uParam1->f_6, 2.0f, 2);
	}
	if (func_32() == -1 && func_19())
	{
		func_66(uParam1, &(uParam0->f_7), &(uParam0->f_1330), uParam1->f_13 == 1);
		func_67(&(uParam0->f_7));
	}
}

void func_23(var uParam0, var uParam1, int iParam2)
{
	Vector3 vVar0;
	int iVar3;
	char* sVar4;

	iVar3 = 41346;
	sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
	vVar0 = { func_68(uParam0, uParam1) /*3*/ };
	switch (uParam1->f_10)
	{
		case 0:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
			break;
		case 1:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_01";
			break;
		case 2:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_02";
			break;
		case 3:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00";
	}
	func_70(uParam0, uParam1, sVar4, "PLAYER_00_IDLE", vVar0, iVar3, iParam2, 0, 1);
}

bool func_24(var uParam0)
{
	uParam0->f_6++;
	CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
	GRAPHICS::_0x1C6306E5BC25C29C();
	if (!func_11(1))
	{
		func_71(&(uParam0->f_2334));
		return true;
	}
	if (uParam0->f_1330.f_700 == 0)
	{
		func_72(&(uParam0->f_1330));
	}
	if (func_19())
	{
		if (uParam0->f_5 == 0)
		{
			if (CLOCK::GET_CLOCK_HOURS() >= 20)
			{
				uParam0->f_5 = 1;
			}
		}
		else
		{
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
		}
	}
	func_73(uParam0);
	func_74(uParam0);
	func_75(uParam0);
	func_76(uParam0, uParam0->f_7.f_14);
	func_77(&(uParam0->f_7));
	func_78(uParam0, &(uParam0->f_7));
	func_79(&(uParam0->f_1330), uParam0);
	func_80(uParam0, &(uParam0->f_7));
	if (func_81(&(uParam0->f_2334)))
	{
		func_82(uParam0);
	}
	if (func_83(uParam0))
	{
		if (func_32() == 0)
		{
			if (MINIGAME::_MINIGAME_IS_REQUEST_PENDING(&(uParam0->f_7.f_1300[0 /*4*/])))
			{
				return false;
			}
		}
		if (func_32() == -1)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		}
		if (uParam0->f_2334.f_238)
		{
		}
		func_84(&(uParam0->f_2334), &(uParam0->f_7));
		return true;
	}
	return false;
}

void func_25(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_2839 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_2839, false);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_2840))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_2840);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(uParam0->f_2840);
		func_85(uParam0->f_2840);
	}
	if (func_19() && uParam0->f_5)
	{
		CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
	}
	if (func_32() == 0)
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
	}
	func_86(1);
	if (iParam1 != 1 && !func_19())
	{
		iVar0 = 0;
		while (iVar0 < 28)
		{
			func_87(1, uParam0->f_1330.f_746[iVar0 /*8*/].f_1, iVar0, uParam0->f_1330.f_746[iVar0 /*8*/].f_3, 0);
			uParam0->f_1330.f_746[iVar0 /*8*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			func_87(1, uParam0->f_1330.f_971[iVar0], (28 + iVar0), 0, 0);
			uParam0->f_1330.f_971[iVar0] = 0;
			iVar0++;
		}
	}
	func_88(uParam0);
	func_89(uParam0->f_2840);
	func_90(&(uParam0->f_2334));
	func_91(&(uParam0->f_1330), iParam1);
	func_92(func_2(uParam0->f_2804.f_2), 0);
	func_93(&(uParam0->f_7));
	func_94(&(Global_1359489.f_40), 1);
	func_95(&(uParam0->f_2804), 1, 0);
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		STREAMING::REQUEST_MODEL(func_96(0, iParam0), false);
		STREAMING::REQUEST_MODEL(func_96(28, iParam0), false);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		STREAMING::REQUEST_MODEL(func_96(iVar0, iParam0), false);
		iVar0++;
	}
}

void func_27()
{
	STREAMING::REQUEST_MOVE_NETWORK_DEF("SCRIPT_MINI_GAME_DOMINOES");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REQUEST_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	STREAMING::REQUEST_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES");
}

int func_28()
{
	return Global_1894899.f_2;
}

int func_29(int iParam0, int iParam1, int iParam2)
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

void func_30(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_31(int iParam0)
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
}

int func_32()
{
	return Global_1572887.f_12;
}

void func_33(bool bParam0)
{
	if (!bParam0)
	{
		func_97(0);
	}
	Global_1935689.f_2 = bParam0;
}

int func_34(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_35(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_36(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 0;
	}
	return func_99(func_98(iParam0));
}

char* func_37(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_100(bParam1, "OOJBJ", "MGBLK");
		case 1:
			return func_100(bParam1, "OOJDO", "MGDOM");
		case 2:
			return func_100(bParam1, "OOJPO", "MGPKR");
		case 3:
			return func_100(bParam1, "OOJFF", "MGFFF");
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
	}
	return "XXXXX";
}

void func_38(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_101(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_102(&Global_1935630, (1 << 22));
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

void func_39()
{
	if (!Global_1898068.f_1)
	{
	}
	Global_1898068.f_1 = 1;
}

char* func_40(int iParam0)
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

bool func_41(int iParam0)
{
	if (!func_103(iParam0))
	{
		return false;
	}
	return Global_1935369.f_5[iParam0 /*11*/];
}

int func_42(int iParam0, int iParam1)
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

bool func_43(int iParam0)
{
	return func_104(iParam0, (1 << 26));
}

void func_44(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] |= iParam1;
}

void func_45(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] -= (Global_1914319.f_15614[iParam0] & iParam1);
}

void func_46(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_106(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_107(joaat("WS_DOWNS_RANCH_EDITH"));
			func_107(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_107(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_107(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_106(joaat("WS_DOWNS_RANCH_EDITH"));
			func_107(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_107(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_107(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_107(joaat("WS_DOWNS_RANCH_EDITH"));
			func_106(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_107(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_107(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_107(joaat("WS_DOWNS_RANCH_EDITH"));
			func_107(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_106(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_107(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_107(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_107(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_106(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_108();
			func_106(iParam0);
			break;
		case joaat("WS_BEECHERS_HOUSE_ABIGAIL3"):
		case joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_DECORATED"):
		case joaat("WS_BEECHERS_HOUSE_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"):
		case joaat("WS_BEECHERS_SHACK_WITH_FIRE"):
		case joaat("WS_BEECHERS_SHACK"):
		case joaat("WS_BEECHERS_BARN_FINISHED"):
		case joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"):
		case joaat("WS_BEECHERS_CAMP_WITH_SHACK"):
			func_109();
			func_106(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_107(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_107(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_106(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_107(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_107(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_106(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_107(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_107(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_106(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_107(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_107(joaat("WS_RHODES_GRAVE_OPEN"));
			func_106(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_107(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_107(joaat("WS_RHODES_GRAVE_OPEN"));
			func_106(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_107(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_107(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_106(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_107(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_106(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_107(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_106(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_107(joaat("WS_UTOPIA_TREE_MISSION"));
			func_107(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_107(joaat("WS_UTOPIA_TREE_STUMP"));
			func_106(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_107(joaat("WS_UTOPIA_TREE_STANDING"));
			func_107(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_107(joaat("WS_UTOPIA_TREE_STUMP"));
			func_106(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_107(joaat("WS_UTOPIA_TREE_STANDING"));
			func_107(joaat("WS_UTOPIA_TREE_MISSION"));
			func_107(joaat("WS_UTOPIA_TREE_STUMP"));
			func_106(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_107(joaat("WS_UTOPIA_TREE_STANDING"));
			func_107(joaat("WS_UTOPIA_TREE_MISSION"));
			func_107(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_106(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_107(joaat("WS_MICAH_CAMP"));
			func_107(joaat("WS_MICAH_CAMP_POST"));
			func_106(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_107(joaat("WS_MICAH_CAMP_EMPTY"));
			func_107(joaat("WS_MICAH_CAMP_POST"));
			func_106(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_107(joaat("WS_MICAH_CAMP_EMPTY"));
			func_107(joaat("WS_MICAH_CAMP"));
			func_106(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_107(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_106(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_107(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_107(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_110(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_106(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_107(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_107(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_106(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_107(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_106(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_107(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_106(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_107(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_106(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_107(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_106(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_107(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_106(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_107(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_107(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_106(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_107(joaat("WS_NEW_COM_BANK_START"));
			func_107(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_107(joaat("WS_NEW_COM_BANK_AFTER"));
			func_107(joaat("WS_NEW_COM_BANK_POST"));
			func_106(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_107(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_107(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_107(joaat("WS_NEW_COM_BANK_AFTER"));
			func_107(joaat("WS_NEW_COM_BANK_POST"));
			func_106(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_107(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_107(joaat("WS_NEW_COM_BANK_START"));
			func_107(joaat("WS_NEW_COM_BANK_AFTER"));
			func_107(joaat("WS_NEW_COM_BANK_POST"));
			func_106(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_107(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_107(joaat("WS_NEW_COM_BANK_START"));
			func_107(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_107(joaat("WS_NEW_COM_BANK_POST"));
			func_106(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_107(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_107(joaat("WS_NEW_COM_BANK_START"));
			func_107(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_107(joaat("WS_NEW_COM_BANK_AFTER"));
			func_106(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_107(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_106(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_107(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_106(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_107(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_106(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_107(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_107(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_106(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_106(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_106(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_106(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_107(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_106(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_106(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_106(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_106(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_106(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_107(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_106(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_107(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_106(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_107(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_106(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_107(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_106(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_107(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_106(0);
			func_107(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_107(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_106(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_107(0);
			func_107(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_106(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_107(0);
			func_107(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_106(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_107(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_106(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_107(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_106(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_106(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_106(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_106(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_107(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_106(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_107(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_107(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_107(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_106(joaat("WS_SHADY_BELLE_ABANDON"));
			func_107(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_107(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_106(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_107(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_107(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_106(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_107(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_106(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_107(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_110(iParam0))
				{
					func_106(iParam0);
				}
			}
			else if (func_110(iParam0))
			{
				func_107(iParam0);
			}
			break;
	}
}

Vector3 func_47(Vector3 vParam0, float fParam3)
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

void func_48(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_49(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_50()
{
	func_111(0);
}

void func_51(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_QUICK_SELECT_INSPECT"), false);
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_OPEN_JOURNAL"), false);
		if (iParam0 != 5)
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		}
	}
	if (func_112(iParam0) || iParam0 == 4)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 2 /*PRF_0x38E08B64*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 219 /*PRF_0x5E15A1B3*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 220 /*PRF_0x1A08E1EC*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 187 /*PRF_DisableDynamicPlayerScenarios*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 129 /*PRF_DisableAmbientPrompts*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 168 /*PRF_DisablePlayerClimbing*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 247 /*PRF_0x78147664*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 21 /*PRF_DisableAutoVaulting*/, true);
		PED::SET_PED_RESET_FLAG(Global_35, 237 /*PRF_DisableStuckResponse*/, true);
	}
}

bool func_52(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_96(0, iParam0)))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(func_96(28, iParam0)))
		{
			return false;
		}
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (!STREAMING::HAS_MODEL_LOADED(func_96(iVar0, iParam0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_53()
{
	if (!STREAMING::HAS_MOVE_NETWORK_DEF_LOADED("SCRIPT_MINI_GAME_DOMINOES"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_01"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_02"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_03"))
	{
		return false;
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_01"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_02"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_03"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES"))
	{
		return false;
	}
	return true;
}

void func_54(var uParam0)
{
	if (uParam0->f_742 == -1)
	{
		uParam0->f_742 = ANIMSCENE::_CREATE_MGM_SYSTEM("Dominoes");
	}
}

void func_55(var uParam0)
{
	uParam0->f_666.f_4 = 40;
	uParam0->f_666.f_5 = 40;
	uParam0->f_666.f_6 = 100;
	uParam0->f_666.f_7 = 30;
	uParam0->f_666.f_8 = 300;
	uParam0->f_666.f_14[0] = 60;
	uParam0->f_666.f_3 = -1360983891;
}

void func_56(var uParam0)
{
	int iVar0;

	*uParam0 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_149)
	{
		func_113(&(uParam0->f_149[iVar0 /*44*/]));
		iVar0++;
	}
	uParam0->f_6.f_142 = 0;
}

void func_57(var uParam0)
{
	if (func_32() == -1)
	{
		MINIGAME::_0xF6DE98516FD3AC9B();
	}
	func_114(&(uParam0->f_340));
	func_114(&(uParam0->f_14));
}

void func_58(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = func_115(iParam0);
	if (iVar0 <= 10)
	{
		if (iVar0 <= 1)
		{
			strcpy_s(&cVar1, 64, "MG_HELP_UPDATED");
		}
		else
		{
			strcpy_s(&cVar1, 64, "MG_HELP_REMINDER");
		}
		switch (iParam0)
		{
			case 1:
				func_117(func_116(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_DOMINOES"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", joaat("DOMINOES"), -2, 0, 0, 0, 0, 1, 1);
				break;
			case 3:
				func_117(func_116(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_FIVE_FINGER_FILLET"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", -1280897372, -2, 0, 0, 0, 0, 1, 1);
				break;
			case 2:
				func_117(func_116(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_POKER"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", joaat("POKER"), -2, 0, 0, 0, 0, 1, 1);
				break;
			case 0:
				func_117(func_116(iParam0), &cVar1, joaat("TOAST_LOG_BLIPS"), joaat("BLIP_MG_BLACKJACK"), MISC::GET_HASH_KEY("help_menu"), "INPUT_FEED_INTERACT_GENERIC", joaat("BLACKJACK"), -2, 0, 0, 0, 0, 1, 1);
				break;
		}
	}
}

void func_59(var uParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	float fVar7;
	float fVar8;
	int iVar9;

	*uParam0 = { vParam1 /*3*/ };
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = func_2(iParam5);
	uParam0->f_995 = "OJDominoValid";
	uParam0->f_996 = "OJDominoBlur";
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_118(&(uParam0->f_199[iVar0 /*124*/]), iVar0);
		func_119(1, vParam1, iParam4, iVar0, &vVar1, &fVar7);
		vVar1.f_2 = (vVar1.z + 0.01f);
		iVar9 = func_120(1, vParam1, iParam4, iVar0, 1051931443);
		if (ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			uParam0->f_990[iVar0] = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar1, joaat("MINIGAME_DOMINOES_PLAYER"), 0.5f, 0, false);
			vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar9, vVar1) /*3*/ };
			fVar8 = (ENTITY::GET_ENTITY_HEADING(iVar9) - fVar7);
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iVar0]))
			{
				TASK::_SET_SCENARIO_POINT_COORDS(uParam0->f_990[iVar0], vVar4, false);
				TASK::_SET_SCENARIO_POINT_HEADING(uParam0->f_990[iVar0], fVar8, false);
			}
			else
			{
				uParam0->f_990[iVar0] = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iVar9, joaat("MINIGAME_DOMINOES_PLAYER"), vVar4, fVar8, 0, 0, false);
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iVar0]))
				{
					MISC::SET_BIT(&(uParam0->f_989), iVar0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_121(uParam0, iVar0, 28, 1, iVar0, -1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_981)
	{
		uParam0->f_981[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_986 = 0;
	if (bParam6)
	{
		func_63(uParam0);
		func_64(uParam0);
		func_65(uParam0);
	}
	func_122(&Global_1899750, vParam1 - Vector(2.0f, 0.0f, 0.0f));
	uParam0->f_186 = MISC::GET_RANDOM_FLOAT_IN_RANGE(60.0f, 120.0f);
	func_123(uParam0);
	GRAPHICS::ENABLE_ENTITYMASK();
}

void func_60(var uParam0, int iParam1)
{
	int iVar0;

	*uParam0 = 1;
	func_124(&(uParam0->f_240));
	func_125(&(uParam0->f_240), 1);
	func_126(uParam0);
	func_127(uParam0);
	func_128(&(uParam0->f_1), 1, 0, iParam1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_129(&(uParam0->f_1), iVar0, "avatar_generic", 0, 1, 0);
		iVar0++;
	}
	func_130(&(uParam0->f_1));
	uParam0->f_409 = 0;
	strcpy_s(&(uParam0->f_410), 64, "table_games_cam");
	strcpy_s(&(uParam0->f_410.f_8), 64, "CAMERA_TABLE_GAMES_REQUEST");
	uParam0->f_410.f_16 = -832392197;
	uParam0->f_438 = { 0.0f, 0.0f, fLocal_14 /*3*/ };
}

void func_61(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

int func_62(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_131(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_63(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		func_132(&iVar0, *uParam0 + Vector(fLocal_14, 0.0f, 0.0f), 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
		iVar2 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar0, iVar4, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar4));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("P_DOMINORACK01X") || func_133(iVar1))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
					{
						ENTITY::DETACH_ENTITY(iVar1, true, true);
					}
					OBJECT::DELETE_OBJECT(&iVar1);
				}
			}
			iVar3++;
		}
		func_89(iVar0);
		ITEMSET::_CLEAR_ITEMSET(iVar4);
		ITEMSET::DESTROY_ITEMSET(iVar4);
	}
}

void func_64(var uParam0)
{
	int iVar0;

	func_134(uParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_135(uParam0, iVar0);
		iVar0++;
	}
}

void func_65(var uParam0)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	iVar7 = func_96(0, uParam0->f_6);
	func_136(uParam0);
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_137(uParam0, iVar0, &vVar1, &vVar4, 0.05f, 0);
		uParam0->f_746[iVar0 /*8*/].f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar7, vVar1, false, true, false, true);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iVar0 /*8*/].f_1, vVar4, 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar0 /*8*/].f_1, true);
		func_121(uParam0, iVar0, 28, 1, iVar0, -1);
		iVar0++;
	}
}

void func_66(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (func_32() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_23[iVar0]))
		{
			if (PED::IS_PED_A_PLAYER(uParam0->f_23[iVar0]))
			{
			}
			else if (func_138(uParam0->f_23[iVar0]))
			{
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_23[iVar0]))
		{
			if (PED::IS_PED_A_PLAYER(uParam0->f_23[iVar0]))
			{
				if (func_139(uParam2, iVar0, uParam0->f_23[iVar0], 255, 0, 0))
				{
					if (func_140(&(uParam0->f_23[iVar0])))
					{
						func_141(uParam2, iVar0);
					}
					else if (!bParam3)
					{
						func_143(uParam2, iVar0, func_142());
					}
					else
					{
						func_141(uParam2, iVar0);
					}
					func_144(uParam1, iVar0, 1);
				}
			}
			else if (func_138(uParam0->f_23[iVar0]))
			{
				iVar1 = func_145(uParam0->f_23[iVar0]);
				if (!iVar1 == -1)
				{
					if (!func_146(iVar1))
					{
						func_147(iVar1, 1, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1);
					}
					uParam2->f_1002 = iVar1;
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[iVar0]))
					{
						if (func_139(uParam2, iVar0, uParam0->f_23[iVar0], 255, 0, 0))
						{
							PED::SET_PED_RESET_FLAG(uParam0->f_23[iVar0], 264 /*PRF_0x1A4A7EE2*/, true);
							if (func_140(&(uParam0->f_23[iVar0])))
							{
								func_141(uParam2, iVar0);
							}
							else if (!bParam3)
							{
								func_143(uParam2, iVar0, func_142());
							}
							else
							{
								func_141(uParam2, iVar0);
							}
							func_144(uParam1, iVar0, 0);
							func_23(uParam2, &(uParam2->f_199[iVar0 /*124*/]), 1065185444);
						}
					}
				}
			}
			else if (func_139(uParam2, iVar0, uParam0->f_23[iVar0], 255, 0, 0))
			{
				if (func_140(&(uParam0->f_23[iVar0])))
				{
					func_141(uParam2, iVar0);
				}
				else if (!bParam3)
				{
					func_143(uParam2, iVar0, func_142());
				}
				else
				{
					func_141(uParam2, iVar0);
				}
				func_144(uParam1, iVar0, 0);
			}
		}
		iVar0++;
	}
}

void func_67(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	uParam0->f_13 = MISC::ABSI(MISC::GET_FRAME_COUNT());
	MISC::SET_RANDOM_SEED(uParam0->f_13);
	uParam0->f_699 = 0;
	uParam0->f_698 = -1;
	uParam0->f_14 = -1;
	func_57(uParam0);
	func_148(&(uParam0->f_684), 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(&(uParam0->f_14), iVar0))
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 7)
			{
				iVar2 = func_150(&(uParam0->f_684), uParam0->f_699);
				func_151(iVar2, &(uParam0->f_14.f_149[iVar0 /*44*/].f_4[iVar1 /*2*/]), &(uParam0->f_14.f_149[iVar0 /*44*/].f_4[iVar1 /*2*/].f_1));
				uParam0->f_699++;
				iVar1++;
			}
			uParam0->f_14.f_149[iVar0 /*44*/] = iVar0;
			uParam0->f_14.f_149[iVar0 /*44*/].f_4.f_39 = 7;
			uParam0->f_14.f_149[iVar0 /*44*/].f_3 = uParam0->f_14.f_149[iVar0 /*44*/].f_4.f_39;
			func_152(uParam0, iVar0, uParam0->f_14.f_149[iVar0 /*44*/].f_2);
		}
		iVar0++;
	}
	uParam0->f_701 = 0;
}

Vector3 func_68(var uParam0, var uParam1)
{
	switch (uParam1->f_9)
	{
		case 0:
			return { 0.0f, 0.0f, uParam0->f_3 };
		case 1:
			return { 0.0f, 0.0f, (uParam0->f_3 + 180.0f) };
		case 2:
			return { 0.0f, 0.0f, (uParam0->f_3 - 90.0f) };
		case 3:
			return { 0.0f, 0.0f, (uParam0->f_3 + 90.0f) };
		default:
			break;
	}
	return { 0.0f, 0.0f, uParam0->f_3 };
}

bool func_69(var uParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_12))
	{
		return false;
	}
	if (PED::IS_PED_A_PLAYER(uParam1->f_12))
	{
		return false;
	}
	if (uParam0->f_189)
	{
		return true;
	}
	return !PED::IS_PED_MALE(uParam1->f_12);
}

void func_70(var uParam0, var uParam1, char* sParam2, char* sParam3, Vector3 vParam4, int iParam7, float fParam8, bool bParam9, int iParam10)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_153(uParam1);
	bVar1 = TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0);
	if (fParam8 != 0.0f || bParam9)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, *uParam0, vParam4, 1000.0f, -8.0f, -1, iParam7, fParam8, 2, iParam10, uParam1->f_2);
	}
	else
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, *uParam0, vParam4, 8.0f, -8.0f, -1, iParam7, 0.0f, 2, iParam10, uParam1->f_2);
	}
	if (bVar1)
	{
	}
}

void func_71(var uParam0)
{
	if (uParam0->f_409 == 1)
	{
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_410)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_410));
		}
		uParam0->f_409 = 0;
	}
	if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && uParam0->f_407 == 1)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0.25f);
	}
	uParam0->f_407 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		CAM::DESTROY_CAM(uParam0->f_437, false);
	}
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar8;

	switch (uParam0->f_699)
	{
		case 0:
			if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				PED::SPAWNPOINTS_START_SEARCH(*uParam0, 10.0f, 10.0f, 19, 0.5f, 1000, 0.0f);
				uParam0->f_701 = 1;
				uParam0->f_699++;
			}
			break;
		case 1:
			if (PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				uParam0->f_701 = 0;
				uParam0->f_699 = 0;
			}
			if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
			{
				uParam0->f_702 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				iVar0 = 0;
				while (iVar0 < uParam0->f_703)
				{
					uParam0->f_703[iVar0 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
					iVar0++;
				}
				if (uParam0->f_702 >= uParam0->f_703)
				{
					uParam0->f_702 = uParam0->f_703;
				}
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < uParam0->f_702)
				{
					PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar0, &vVar2, &(vVar2.f_1), &(vVar2.f_2));
					vVar5 = { VEHICLE::_GET_NEAREST_TRAIN_TRACK_POSITION(vVar2) /*3*/ };
					fVar8 = BUILTIN::VDIST(vVar5, vVar2);
					if (fVar8 > 3.0f)
					{
						uParam0->f_703[iVar1 /*3*/] = { vVar2 /*3*/ };
						iVar1++;
					}
					iVar0++;
				}
				uParam0->f_702 = iVar1;
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				uParam0->f_701 = 0;
				uParam0->f_699++;
			}
			break;
		case 2:
			uParam0->f_700 = 1;
			return 1;
	}
	return 0;
}

void func_73(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_154() != 1 || func_32() == 0)
	{
		return;
	}
	if (func_19())
	{
		return;
	}
	iVar1 = func_155();
	if (iVar1 == 1)
	{
		iVar0 = func_156();
		if (func_139(&(uParam0->f_1330), iVar0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_ID(), 0, 0))
		{
			func_143(&(uParam0->f_1330), iVar0, 0);
		}
		func_144(&(uParam0->f_7), uParam0->f_1330.f_194, 1);
		func_157(2);
	}
	if (iVar1 == 4)
	{
		func_158(&(uParam0->f_1330), &(uParam0->f_7));
		func_63(&(uParam0->f_1330));
		func_64(&(uParam0->f_1330));
		func_65(&(uParam0->f_1330));
		func_67(&(uParam0->f_7));
		func_157(5);
		func_159();
		func_160();
	}
}

int func_74(var uParam0)
{
	if (func_32() == -1)
	{
		return 0;
	}
	return 0;
}

void func_75(var uParam0)
{
	if (func_32() == -1)
	{
		func_161(&(uParam0->f_7), &(uParam0->f_7.f_14), &(uParam0->f_7.f_340), uParam0->f_1330.f_194);
		uParam0->f_7.f_340 = { uParam0->f_7.f_14 /*326*/ };
		return;
	}
}

void func_76(var uParam0, int iParam1)
{
	if (uParam0->f_7.f_1299 != 0)
	{
		if (!func_149(&(uParam0->f_7.f_14), iParam1))
		{
			func_162(&(uParam0->f_7), 0);
			func_163(&(uParam0->f_7));
			return;
		}
	}
	if (func_164(&(uParam0->f_7.f_14), uParam0->f_7.f_666.f_3, uParam0->f_7.f_666.f_14[0]))
	{
		func_162(&(uParam0->f_7), 0);
		func_163(&(uParam0->f_7));
		return;
	}
	if (func_149(&(uParam0->f_7.f_14), iParam1))
	{
		if (uParam0->f_7.f_14.f_149[iParam1 /*44*/].f_3 == 0)
		{
			func_162(&(uParam0->f_7), 0);
			func_163(&(uParam0->f_7));
			return;
		}
	}
	switch (uParam0->f_7.f_1299)
	{
		case 1:
			if (iParam1 == uParam0->f_1330.f_194 && uParam0->f_7.f_1)
			{
				func_162(&(uParam0->f_7), 5);
			}
			else
			{
				func_162(&(uParam0->f_7), 2);
			}
			break;
		case 2:
			if (!func_165(&(uParam0->f_7), iParam1))
			{
				func_166(&(uParam0->f_7), iParam1);
			}
			func_167(&(uParam0->f_7), iParam1);
			func_162(&(uParam0->f_7), 3);
			break;
		case 3:
			if (func_165(&(uParam0->f_7), iParam1))
			{
				if (iParam1 != uParam0->f_1330.f_194)
				{
					func_168(&(uParam0->f_7), iParam1);
				}
				func_162(&(uParam0->f_7), 4);
			}
			else
			{
				func_162(&(uParam0->f_7), 5);
			}
			break;
		case 4:
			if (iParam1 == uParam0->f_1330.f_194)
			{
				if (uParam0->f_7.f_14.f_3 != 0)
				{
					return;
				}
			}
			func_162(&(uParam0->f_7), 6);
			break;
		case 5:
			if (!func_164(&(uParam0->f_7.f_14), uParam0->f_7.f_666.f_3, uParam0->f_7.f_666.f_14[0]))
			{
				func_169(&(uParam0->f_7), iParam1, uParam0->f_1330.f_194);
			}
			func_162(&(uParam0->f_7), 6);
			break;
		case 6:
			if (func_170(&(uParam0->f_7)))
			{
				func_163(&(uParam0->f_7));
				if (!func_164(&(uParam0->f_7.f_14), uParam0->f_7.f_666.f_3, uParam0->f_7.f_666.f_14[0]))
				{
					func_171(&(uParam0->f_7));
				}
				func_162(&(uParam0->f_7), 0);
			}
			break;
	}
}

void func_77(var uParam0)
{
	uParam0->f_694 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_78(var uParam0, var uParam1)
{
	struct<11> /*88*/ sVar0;

	sVar0.f_1 = -1;
	sVar0.f_2 = 6;
	if (*uParam0)
	{
		return;
	}
	if (!func_172(uParam1, &sVar0))
	{
		return;
	}
	if (uParam0->f_1330.f_196)
	{
		func_173(uParam1, &sVar0);
		return;
	}
	switch (sVar0.f_0)
	{
		case 4:
			if (func_174(uParam0, uParam1, &sVar0))
			{
				uParam1->f_696 = -1;
				func_175(uParam1, 1);
				func_176(uParam1, -1);
				func_173(uParam1, &sVar0);
			}
			break;
		case 5:
			func_176(uParam1, -1);
			func_175(uParam1, 1);
			uParam1->f_696 = -1;
			if (sVar0.f_1 == uParam0->f_1330.f_194 && func_32() == -1)
			{
				func_177(uParam1->f_666.f_6, 0);
			}
			func_173(uParam1, &sVar0);
			break;
		case 12:
			if (func_178(uParam0, uParam1, &sVar0))
			{
				func_173(uParam1, &sVar0);
			}
			break;
		case 14:
			if (func_179(uParam0, uParam1, &sVar0))
			{
				func_173(uParam1, &sVar0);
			}
			break;
		case 13:
			if (func_180(uParam0, uParam1, &sVar0))
			{
				func_173(uParam1, &sVar0);
			}
			break;
		case 15:
			if (func_181(uParam0, uParam1, &sVar0))
			{
				func_173(uParam1, &sVar0);
			}
			break;
		case 7:
			func_182(&(uParam0->f_2334), sVar0.f_1);
			func_183(&(uParam0->f_1330), sVar0.f_1, 0);
			func_184(&(uParam0->f_1330), sVar0.f_1, 0, 0, func_32() != -1, 0);
			func_173(uParam1, &sVar0);
			break;
		case 1:
			func_185(&(uParam0->f_2334), uParam1);
			func_186(&(uParam0->f_2334), sVar0.f_2[0]);
			func_173(uParam1, &sVar0);
			break;
		case 16:
			func_187(&(uParam0->f_2334), sVar0.f_1, sVar0.f_2[0], sVar0.f_2[1]);
			func_173(uParam1, &sVar0);
			break;
		case 3:
			func_188(&(uParam0->f_2334), sVar0.f_1, sVar0.f_2[0]);
			func_173(uParam1, &sVar0);
			break;
		case 26:
			func_189(&(uParam0->f_2334), sVar0.f_2[0]);
			func_173(uParam1, &sVar0);
			break;
		case 2:
			func_190(&(uParam0->f_2334), sVar0.f_1, sVar0.f_10);
			func_173(uParam1, &sVar0);
			break;
		case 8:
			func_191(&(uParam0->f_2334));
			func_192(&(uParam0->f_2334), 18, 0, 5000);
			func_173(uParam1, &sVar0);
			break;
		case 9:
			func_191(&(uParam0->f_2334));
			func_192(&(uParam0->f_2334), 19, 0, 5000);
			func_173(uParam1, &sVar0);
			break;
		case 17:
			func_191(&(uParam0->f_2334));
			if (sVar0.f_2[0] == -1)
			{
				func_194(&(uParam0->f_2334), MISC::VAR_STRING(10, "MGDOM_HLP_GOFIRST", func_193(&(uParam0->f_2334), sVar0.f_1)), 0, 5000);
			}
			else
			{
				func_194(&(uParam0->f_2334), MISC::VAR_STRING(10, "MGDOM_HLP_GOFIRSTD", func_193(&(uParam0->f_2334), sVar0.f_1)), 0, 5000);
			}
			func_173(uParam1, &sVar0);
			break;
		case 21:
			if (uParam1->f_701 >= func_195(&(uParam1->f_14)))
			{
				func_173(uParam1, &sVar0);
				return;
			}
			func_196(uParam1, (6 + sVar0.f_1));
			func_197(&(uParam0->f_2334), sVar0.f_1);
			func_198(&(uParam0->f_2334), 0);
			if (func_32() == -1)
			{
				func_162(&(uParam0->f_7), 2);
			}
			func_173(uParam1, &sVar0);
			break;
		case 22:
			if (uParam1->f_701 >= func_195(&(uParam1->f_14)))
			{
				func_173(uParam1, &sVar0);
				return;
			}
			func_196(uParam1, (6 + sVar0.f_1));
			func_198(&(uParam0->f_2334), 0);
			func_197(&(uParam0->f_2334), sVar0.f_1);
			if (func_32() == -1)
			{
				func_162(&(uParam0->f_7), 2);
			}
			func_173(uParam1, &sVar0);
			break;
		case 24:
			func_199(&(uParam0->f_2334), &sVar0);
			func_173(uParam1, &sVar0);
			break;
		case 25:
			if (sVar0.f_1 != -1)
			{
				uParam0->f_2334.f_204[sVar0.f_1 /*7*/].f_6 = sVar0.f_10;
			}
			func_173(uParam1, &sVar0);
			break;
		case 18:
			if (func_200(uParam0, uParam1, &sVar0))
			{
				func_173(uParam1, &sVar0);
			}
			break;
		case 19:
			if (func_201(uParam0, uParam1, &sVar0))
			{
				func_173(uParam1, &sVar0);
			}
			break;
		case 20:
			if (func_202(uParam0, uParam1, &sVar0))
			{
				func_173(uParam1, &sVar0);
			}
			break;
		case 27:
			func_67(uParam1);
			func_173(uParam1, &sVar0);
			break;
		default:
			func_173(uParam1, &sVar0);
			break;
	}
}

void func_79(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_199)
	{
		func_203(&(uParam0->f_199[iVar0 /*124*/]), uParam0, uParam1);
		iVar0++;
	}
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0))
	{
		if (func_204(uParam0, uParam0->f_194))
		{
			uParam0->f_199[uParam0->f_194 /*124*/].f_18.f_19 = 1;
		}
	}
	func_205(uParam0);
	func_206(uParam0);
	func_207(uParam0, &(uParam1->f_7));
}

void func_80(var uParam0, var uParam1)
{
	if (!HUD::IS_PAUSE_MENU_ACTIVE() && uParam0->f_1330.f_196 == 0)
	{
		if (uParam0->f_2816 == 0)
		{
			PAD::_SET_CONTROL_CONTEXT(4, joaat("MINIGAMEDOMINOES"));
		}
		else
		{
			PAD::_SET_CONTROL_CONTEXT(4, joaat("STICKYFEED"));
		}
	}
	uParam0->f_2334.f_347 = uParam0->f_2334.f_348;
	uParam0->f_2334.f_348 = PAD::IS_USING_KEYBOARD_AND_MOUSE(0);
	uParam0->f_2334.f_350 = uParam0->f_2334.f_349;
	uParam0->f_2334.f_352 = uParam0->f_2334.f_351;
	uParam0->f_2334.f_349 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_CURSOR_X"));
	uParam0->f_2334.f_351 = PAD::GET_DISABLED_CONTROL_NORMAL(2, joaat("INPUT_CURSOR_Y"));
	uParam0->f_2334.f_346 = (uParam0->f_2334.f_350 != uParam0->f_2334.f_349 || uParam0->f_2334.f_352 != uParam0->f_2334.f_351);
	if (uParam0->f_2334.f_402)
	{
		CAM::SET_GAMEPLAY_OBJECT_HINT(uParam0->f_1330.f_971[uParam0->f_1330.f_194], 0.0f, 0.0f, 0.0f, true, 2000, 2000, 2000);
		uParam0->f_2334.f_402 = 0;
	}
	if (uParam0->f_2334.f_347 == 1 && uParam0->f_2334.f_348 == 0)
	{
	}
	if (uParam0->f_2334.f_347 == 0 && uParam0->f_2334.f_348 == 1)
	{
	}
	uParam0->f_2334.f_404 = uParam0->f_2334.f_403;
	uParam0->f_2334.f_403 = uParam0->f_2334.f_348;
	uParam0->f_2334.f_448 = 0;
	if (func_208(uParam0->f_2334.f_463))
	{
		if (uParam0->f_2334.f_348)
		{
			uParam0->f_2334.f_448 = PAD::IS_DISABLED_CONTROL_PRESSED(2, joaat("INPUT_PC_FREE_LOOK"));
		}
	}
	if (uParam0->f_2334.f_348 == 1 && uParam0->f_2334.f_448 == 0)
	{
		if (uParam0->f_2334.f_234 == uParam0->f_1330.f_194)
		{
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_LR"), false);
			PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_LOOK_UD"), false);
		}
		_NAMESPACE30::SET_MOUSE_CURSOR_THIS_FRAME();
		_NAMESPACE30::SET_MOUSE_CURSOR_STYLE(0);
	}
	if (uParam0->f_2334.f_446)
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_2334.f_437, false);
		uParam0->f_2334.f_446 = 0;
	}
	uParam0->f_2334.f_407 = CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0);
	if (uParam0->f_1330.f_198 == 4)
	{
		uParam0->f_2334.f_407 = 0;
	}
	if (uParam0->f_2334.f_407 != uParam0->f_2334.f_408)
	{
		if (uParam0->f_2334.f_407)
		{
			GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("Odd_Jobs_Dominoes_First_Person", 1E-08f);
		}
		else
		{
			GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(1E-08f);
		}
		uParam0->f_2334.f_408 = uParam0->f_2334.f_407;
	}
	if (func_209(&(uParam0->f_1330), 19) || uParam0->f_1330.f_198 == 4)
	{
		func_210(&(uParam0->f_2334), 1, 1);
		func_211(&(uParam0->f_2334));
		func_212(&(uParam0->f_2334.f_1));
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MULTIPLAYER_INFO"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PLAYER_MENU"), false);
	func_213(&(uParam0->f_2334));
	func_214(uParam0, &(uParam0->f_2334));
	func_215(&(uParam0->f_2334), &(uParam0->f_1330));
	func_216(&(uParam0->f_2334), &(uParam0->f_1330));
	func_217(&(uParam0->f_2334.f_1));
	if (func_18(1, 2))
	{
		func_125(&(uParam0->f_2334.f_240), 0);
	}
	else if (func_218(&(uParam0->f_2334.f_240), 1))
	{
		uParam0->f_2334.f_238 = 1;
		uParam1->f_690 = 2;
	}
	if (!func_219(&(uParam0->f_1330)))
	{
		func_211(&(uParam0->f_2334));
		func_210(&(uParam0->f_2334), 1, 1);
		return;
	}
	if (uParam0->f_2334.f_240.f_3 == 1 || func_220())
	{
		func_210(&(uParam0->f_2334), 1, 1);
		func_211(&(uParam0->f_2334));
		func_191(&(uParam0->f_2334));
		return;
	}
	switch (uParam1->f_4)
	{
		case 4:
			if (func_32() == -1)
			{
				func_221(uParam0, &(uParam0->f_2334), uParam1);
			}
			break;
		case 3:
			func_222(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 17:
			func_223(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 16:
			func_224(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 14:
			func_225(uParam0, &(uParam0->f_2334), uParam1);
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			func_226(uParam0, &(uParam0->f_2334), uParam1);
			break;
	}
}

bool func_81(var uParam0)
{
	return (func_227(&(uParam0->f_240)) || uParam0->f_165 == 10);
}

void func_82(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (uParam0->f_3 == 1)
	{
		return;
	}
	uParam0->f_3 = 1;
	func_228(&(uParam0->f_2334.f_240), 0);
	if (func_32() == 0)
	{
		iVar1 = MINIGAME::_0x644439B5387EE57E(PLAYER::PLAYER_ID(), &uVar2);
		if (iVar1 == 355424894)
		{
			func_229(&(uParam0->f_7), 0);
		}
	}
	if (uParam0->f_1330.f_740 == 1)
	{
		uParam0->f_1330.f_741 = 1;
	}
	if (uParam0->f_1330.f_190 == 0)
	{
		func_71(&(uParam0->f_2334));
	}
	func_210(&(uParam0->f_2334), 1, 1);
	func_230(&(uParam0->f_1330));
	func_191(&(uParam0->f_2334));
	func_231(&(uParam0->f_2334), 0);
	func_232(&(uParam0->f_1330), 1);
	if (func_32() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_204(&(uParam0->f_1330), iVar0))
			{
				if (func_233(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
				{
					func_234(&(uParam0->f_1330), iVar0, uParam0->f_1330.f_199[iVar0 /*124*/].f_18.f_22);
				}
			}
			iVar0++;
		}
		if (func_19())
		{
			if (uParam0->f_1330.f_190)
			{
				func_235(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]));
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!func_236(&(uParam0->f_1330.f_199[iVar0 /*124*/]), 19))
				{
					func_184(&(uParam0->f_1330), iVar0, 0, 0, 0, 0);
				}
				iVar0++;
			}
		}
		else
		{
			if (uParam0->f_1330.f_190)
			{
				func_235(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]));
			}
			func_184(&(uParam0->f_1330), uParam0->f_1330.f_194, 0, 0, 0, 0);
		}
	}
	else
	{
		func_184(&(uParam0->f_1330), uParam0->f_1330.f_194, 0, 0, 1, 0);
	}
	func_125(&(uParam0->f_2334.f_240), 0);
	func_212(&(uParam0->f_2334.f_1));
}

bool func_83(var uParam0)
{
	return uParam0->f_1330.f_196 == 1;
}

void func_84(var uParam0, var uParam1)
{
	switch (uParam1->f_690)
	{
		case 1:
			func_194(uParam0, "MG_BUYIN_EXPIRED", 0, 10000);
			break;
		case 3:
		case 4:
			func_194(uParam0, "MG_GAME_CANNED", 0, 10000);
			break;
		case 5:
			func_194(uParam0, "MGDOM_HLP_NOPLAYERS", 0, 10000);
			break;
	}
}

void func_85(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_237(vVar0, 0);
}

void func_86(int iParam0)
{
	Global_1899528.f_61.f_1 = iParam0;
}

void func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_1899528.f_61.f_1 = iParam0;
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

void func_88(var uParam0)
{
	if (uParam0->f_4 == 0)
	{
		return;
	}
	if (func_19())
	{
		if (func_28() == 9)
		{
			func_46(joaat("WS_SHADY_BELLE_DOMINO_SEATS"), 0, 0);
		}
		if (func_28() == 98)
		{
			func_46(joaat("WS_DEWCLM_DOMINOES_SEATS"), 0, 0);
		}
		if (func_28() == 71)
		{
			func_46(joaat("WS_HSO_DOMINOES_SEATS"), 0, 0);
		}
	}
	uParam0->f_4 = 0;
}

void func_89(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_90(var uParam0)
{
	*uParam0 = 0;
	func_127(uParam0);
	func_71(uParam0);
	func_191(uParam0);
	func_210(uParam0, 1, 1);
	func_212(&(uParam0->f_1));
	func_124(&(uParam0->f_240));
}

void func_91(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_238(uParam0, iVar0, iParam1);
		if (MISC::IS_BIT_SET(uParam0->f_989, iVar0))
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iVar0]))
			{
				TASK::_DELETE_SCENARIO_POINT(uParam0->f_990[iVar0]);
			}
		}
		func_89(uParam0->f_976[iVar0]);
		iVar0++;
	}
	if (func_32() == -1)
	{
		func_239(1, 0, 0);
	}
	if (func_19())
	{
		func_240(uParam0, 1);
	}
	else
	{
		func_240(uParam0, iParam1 == 1);
	}
	func_241(uParam0);
	func_242(uParam0);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
	{
		GRAPHICS::ANIMPOSTFX_STOP(uParam0->f_995);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_996))
	{
		GRAPHICS::ANIMPOSTFX_STOP(uParam0->f_996);
	}
	if (uParam0->f_701)
	{
		PED::SPAWNPOINTS_CANCEL_SEARCH();
	}
	GRAPHICS::DISABLE_ENTITYMASK();
}

void func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!func_19())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iVar1 = func_29(1, func_28(), iVar0);
			if (iVar1 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
			}
			iVar0++;
		}
	}
	func_243(iParam0, bParam1);
	func_244();
	AUDIO::_RELEASE_SOUNDSET("MGDOM_Sounds");
	AUDIO::_RELEASE_SOUNDSET("HUD_DOMINOS_SOUNDSET");
	HUD::_TEXT_BLOCK_DELETE("MGDOM");
	CAM::_UNLOAD_CAMERA_DATA_DICT("table_games_cam");
}

void func_93(var uParam0)
{
	if (func_32() == -1)
	{
		MINIGAME::_0x455ECCA0715C507F();
	}
}

void func_94(var uParam0, bool bParam1)
{
	if (bParam1 || !func_245(uParam0))
	{
		func_246(uParam0);
	}
}

void func_95(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = uParam0->f_1;
	iVar1 = uParam0->f_4;
	if (iParam1 == 1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
	}
	func_31(0);
	HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MINIGAME"));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	if (bParam2)
	{
		func_30(1);
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	}
	HUD::_TEXT_BLOCK_DELETE(func_247(iVar0));
	iVar2 = func_34(0);
	if (func_35(iVar2))
	{
		iVar3 = func_36(iVar2);
		if (iVar3 == 4)
		{
			MISC::_0x1096603B519C905F("");
		}
	}
	if (func_248())
	{
		func_249(iVar1, 0, 0);
	}
	else
	{
		func_249(iVar1, 0, 2);
	}
	func_250(iVar1, 1);
	AUDIO::STOP_AUDIO_SCENE(func_40(iVar0));
	ENTITY::_SET_ENTITY_CARRYING_FLAG(PLAYER::PLAYER_PED_ID(), 9, true);
	func_33(1);
	func_38(1);
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
	if (func_32() == -1)
	{
		if (func_19())
		{
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(4000);
		}
		else
		{
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
		}
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	if (func_19())
	{
		func_251(iVar0, uParam0->f_6, uParam0->f_2);
	}
	func_252(iVar0);
	func_39();
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	func_253(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_96(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 28:
			return joaat("P_DOMINORACK01X");
		default:
			break;
	}
	switch (iParam1)
	{
		case -1:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO_0_0");
				case 1:
					return joaat("P_DOMINO_0_1");
				case 2:
					return joaat("P_DOMINO_0_2");
				case 3:
					return joaat("P_DOMINO_0_3");
				case 4:
					return joaat("P_DOMINO_0_4");
				case 5:
					return joaat("P_DOMINO_0_5");
				case 6:
					return joaat("P_DOMINO_0_6");
				case 7:
					return joaat("P_DOMINO_1_1");
				case 8:
					return joaat("P_DOMINO1_2");
				case 9:
					return joaat("P_DOMINO_1_3");
				case 10:
					return joaat("P_DOMINO_1_4");
				case 11:
					return joaat("P_DOMINO_1_5");
				case 12:
					return joaat("P_DOMINO_1_6");
				case 13:
					return joaat("P_DOMINO_2_2");
				case 14:
					return joaat("P_DOMINO_2_3");
				case 15:
					return joaat("P_DOMINO_2_4");
				case 16:
					return joaat("P_DOMINO_2_5");
				case 17:
					return joaat("P_DOMINO_2_6");
				case 18:
					return joaat("P_DOMINO_3_3");
				case 19:
					return joaat("P_DOMINO_3_4");
				case 20:
					return joaat("P_DOMINO_3_5");
				case 21:
					return joaat("P_DOMINO_3_6");
				case 22:
					return joaat("P_DOMINO_4_4");
				case 23:
					return joaat("P_DOMINO_4_5");
				case 24:
					return joaat("P_DOMINO_4_6");
				case 25:
					return joaat("P_DOMINO_5_5");
				case 26:
					return joaat("P_DOMINO_5_6");
				case 27:
					return joaat("P_DOMINO_6_6");
				default:
					break;
			}
			break;
		case 0:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO01_0_0");
				case 1:
					return joaat("P_DOMINO01_0_1");
				case 2:
					return joaat("P_DOMINO01_0_2");
				case 3:
					return joaat("P_DOMINO01_0_3");
				case 4:
					return joaat("P_DOMINO01_0_4");
				case 5:
					return joaat("P_DOMINO01_0_5");
				case 6:
					return joaat("P_DOMINO01_0_6");
				case 7:
					return joaat("P_DOMINO01_1_1");
				case 8:
					return joaat("P_DOMINO01_1_2");
				case 9:
					return joaat("P_DOMINO01_1_3");
				case 10:
					return joaat("P_DOMINO01_1_4");
				case 11:
					return joaat("P_DOMINO01_1_5");
				case 12:
					return joaat("P_DOMINO01_1_6");
				case 13:
					return joaat("P_DOMINO01_2_2");
				case 14:
					return joaat("P_DOMINO01_2_3");
				case 15:
					return joaat("P_DOMINO01_2_4");
				case 16:
					return joaat("P_DOMINO01_2_5");
				case 17:
					return joaat("P_DOMINO01_2_6");
				case 18:
					return joaat("P_DOMINO01_3_3");
				case 19:
					return joaat("P_DOMINO01_3_4");
				case 20:
					return joaat("P_DOMINO01_3_5");
				case 21:
					return joaat("P_DOMINO01_3_6");
				case 22:
					return joaat("P_DOMINO01_4_4");
				case 23:
					return joaat("P_DOMINO01_4_5");
				case 24:
					return joaat("P_DOMINO01_4_6");
				case 25:
					return joaat("P_DOMINO01_5_5");
				case 26:
					return joaat("P_DOMINO01_5_6");
				case 27:
					return joaat("P_DOMINO01_6_6");
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO02_0_0");
				case 1:
					return joaat("P_DOMINO02_0_1");
				case 2:
					return joaat("P_DOMINO02_0_2");
				case 3:
					return joaat("P_DOMINO02_0_3");
				case 4:
					return joaat("P_DOMINO02_0_4");
				case 5:
					return joaat("P_DOMINO02_0_5");
				case 6:
					return joaat("P_DOMINO02_0_6");
				case 7:
					return joaat("P_DOMINO02_1_1");
				case 8:
					return joaat("P_DOMINO02_1_2");
				case 9:
					return joaat("P_DOMINO02_1_3");
				case 10:
					return joaat("P_DOMINO02_1_4");
				case 11:
					return joaat("P_DOMINO02_1_5");
				case 12:
					return joaat("P_DOMINO02_1_6");
				case 13:
					return joaat("P_DOMINO02_2_2");
				case 14:
					return joaat("P_DOMINO02_2_3");
				case 15:
					return joaat("P_DOMINO02_2_4");
				case 16:
					return joaat("P_DOMINO02_2_5");
				case 17:
					return joaat("P_DOMINO02_2_6");
				case 18:
					return joaat("P_DOMINO02_3_3");
				case 19:
					return joaat("P_DOMINO02_3_4");
				case 20:
					return joaat("P_DOMINO02_3_5");
				case 21:
					return joaat("P_DOMINO02_3_6");
				case 22:
					return joaat("P_DOMINO02_4_4");
				case 23:
					return joaat("P_DOMINO02_4_5");
				case 24:
					return joaat("P_DOMINO02_4_6");
				case 25:
					return joaat("P_DOMINO02_5_5");
				case 26:
					return joaat("P_DOMINO02_5_6");
				case 27:
					return joaat("P_DOMINO02_6_6");
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO03_0_0");
				case 1:
					return joaat("P_DOMINO03_0_1");
				case 2:
					return joaat("P_DOMINO03_0_2");
				case 3:
					return joaat("P_DOMINO03_0_3");
				case 4:
					return joaat("P_DOMINO03_0_4");
				case 5:
					return joaat("P_DOMINO03_0_5");
				case 6:
					return joaat("P_DOMINO03_0_6");
				case 7:
					return joaat("P_DOMINO03_1_1");
				case 8:
					return joaat("P_DOMINO03_1_2");
				case 9:
					return joaat("P_DOMINO03_1_3");
				case 10:
					return joaat("P_DOMINO03_1_4");
				case 11:
					return joaat("P_DOMINO03_1_5");
				case 12:
					return joaat("P_DOMINO03_1_6");
				case 13:
					return joaat("P_DOMINO03_2_2");
				case 14:
					return joaat("P_DOMINO03_2_3");
				case 15:
					return joaat("P_DOMINO03_2_4");
				case 16:
					return joaat("P_DOMINO03_2_5");
				case 17:
					return joaat("P_DOMINO03_2_6");
				case 18:
					return joaat("P_DOMINO03_3_3");
				case 19:
					return joaat("P_DOMINO03_3_4");
				case 20:
					return joaat("P_DOMINO03_3_5");
				case 21:
					return joaat("P_DOMINO03_3_6");
				case 22:
					return joaat("P_DOMINO03_4_4");
				case 23:
					return joaat("P_DOMINO03_4_5");
				case 24:
					return joaat("P_DOMINO03_4_6");
				case 25:
					return joaat("P_DOMINO03_5_5");
				case 26:
					return joaat("P_DOMINO03_5_6");
				case 27:
					return joaat("P_DOMINO03_6_6");
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO04_0_0");
				case 1:
					return joaat("P_DOMINO04_0_1");
				case 2:
					return joaat("P_DOMINO04_0_2");
				case 3:
					return joaat("P_DOMINO04_0_3");
				case 4:
					return joaat("P_DOMINO04_0_4");
				case 5:
					return joaat("P_DOMINO04_0_5");
				case 6:
					return joaat("P_DOMINO04_0_6");
				case 7:
					return joaat("P_DOMINO04_1_1");
				case 8:
					return joaat("P_DOMINO04_1_2");
				case 9:
					return joaat("P_DOMINO04_1_3");
				case 10:
					return joaat("P_DOMINO04_1_4");
				case 11:
					return joaat("P_DOMINO04_1_5");
				case 12:
					return joaat("P_DOMINO04_1_6");
				case 13:
					return joaat("P_DOMINO04_2_2");
				case 14:
					return joaat("P_DOMINO04_2_3");
				case 15:
					return joaat("P_DOMINO04_2_4");
				case 16:
					return joaat("P_DOMINO04_2_5");
				case 17:
					return joaat("P_DOMINO04_2_6");
				case 18:
					return joaat("P_DOMINO04_3_3");
				case 19:
					return joaat("P_DOMINO04_3_4");
				case 20:
					return joaat("P_DOMINO04_3_5");
				case 21:
					return joaat("P_DOMINO04_3_6");
				case 22:
					return joaat("P_DOMINO04_4_4");
				case 23:
					return joaat("P_DOMINO04_4_5");
				case 24:
					return joaat("P_DOMINO04_4_6");
				case 25:
					return joaat("P_DOMINO04_5_5");
				case 26:
					return joaat("P_DOMINO04_5_6");
				case 27:
					return joaat("P_DOMINO04_6_6");
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO05_0_0");
				case 1:
					return joaat("P_DOMINO05_0_1");
				case 2:
					return joaat("P_DOMINO05_0_2");
				case 3:
					return joaat("P_DOMINO05_0_3");
				case 4:
					return joaat("P_DOMINO05_0_4");
				case 5:
					return joaat("P_DOMINO05_0_5");
				case 6:
					return joaat("P_DOMINO05_0_6");
				case 7:
					return joaat("P_DOMINO05_1_1");
				case 8:
					return joaat("P_DOMINO05_1_2");
				case 9:
					return joaat("P_DOMINO05_1_3");
				case 10:
					return joaat("P_DOMINO05_1_4");
				case 11:
					return joaat("P_DOMINO05_1_5");
				case 12:
					return joaat("P_DOMINO05_1_6");
				case 13:
					return joaat("P_DOMINO05_2_2");
				case 14:
					return joaat("P_DOMINO05_2_3");
				case 15:
					return joaat("P_DOMINO05_2_4");
				case 16:
					return joaat("P_DOMINO05_2_5");
				case 17:
					return joaat("P_DOMINO05_2_6");
				case 18:
					return joaat("P_DOMINO05_3_3");
				case 19:
					return joaat("P_DOMINO05_3_4");
				case 20:
					return joaat("P_DOMINO05_3_5");
				case 21:
					return joaat("P_DOMINO05_3_6");
				case 22:
					return joaat("P_DOMINO05_4_4");
				case 23:
					return joaat("P_DOMINO05_4_5");
				case 24:
					return joaat("P_DOMINO05_4_6");
				case 25:
					return joaat("P_DOMINO05_5_5");
				case 26:
					return joaat("P_DOMINO05_5_6");
				case 27:
					return joaat("P_DOMINO05_6_6");
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return joaat("P_DOMINO06_0_0");
				case 1:
					return joaat("P_DOMINO06_0_1");
				case 2:
					return joaat("P_DOMINO06_0_2");
				case 3:
					return joaat("P_DOMINO06_0_3");
				case 4:
					return joaat("P_DOMINO06_0_4");
				case 5:
					return joaat("P_DOMINO06_0_5");
				case 6:
					return joaat("P_DOMINO06_0_6");
				case 7:
					return joaat("P_DOMINO06_1_1");
				case 8:
					return joaat("P_DOMINO06_1_2");
				case 9:
					return joaat("P_DOMINO06_1_3");
				case 10:
					return joaat("P_DOMINO06_1_4");
				case 11:
					return joaat("P_DOMINO06_1_5");
				case 12:
					return joaat("P_DOMINO06_1_6");
				case 13:
					return joaat("P_DOMINO06_2_2");
				case 14:
					return joaat("P_DOMINO06_2_3");
				case 15:
					return joaat("P_DOMINO06_2_4");
				case 16:
					return joaat("P_DOMINO06_2_5");
				case 17:
					return joaat("P_DOMINO06_2_6");
				case 18:
					return joaat("P_DOMINO06_3_3");
				case 19:
					return joaat("P_DOMINO06_3_4");
				case 20:
					return joaat("P_DOMINO06_3_5");
				case 21:
					return joaat("P_DOMINO06_3_6");
				case 22:
					return joaat("P_DOMINO06_4_4");
				case 23:
					return joaat("P_DOMINO06_4_5");
				case 24:
					return joaat("P_DOMINO06_4_6");
				case 25:
					return joaat("P_DOMINO06_5_5");
				case 26:
					return joaat("P_DOMINO06_5_6");
				case 27:
					return joaat("P_DOMINO06_6_6");
				default:
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return joaat("P_DOMINO_0_0");
		case 1:
			return joaat("P_DOMINO_0_1");
		case 2:
			return joaat("P_DOMINO_0_2");
		case 3:
			return joaat("P_DOMINO_0_3");
		case 4:
			return joaat("P_DOMINO_0_4");
		case 5:
			return joaat("P_DOMINO_0_5");
		case 6:
			return joaat("P_DOMINO_0_6");
		case 7:
			return joaat("P_DOMINO_1_1");
		case 8:
			return joaat("P_DOMINO1_2");
		case 9:
			return joaat("P_DOMINO_1_3");
		case 10:
			return joaat("P_DOMINO_1_4");
		case 11:
			return joaat("P_DOMINO_1_5");
		case 12:
			return joaat("P_DOMINO_1_6");
		case 13:
			return joaat("P_DOMINO_2_2");
		case 14:
			return joaat("P_DOMINO_2_3");
		case 15:
			return joaat("P_DOMINO_2_4");
		case 16:
			return joaat("P_DOMINO_2_5");
		case 17:
			return joaat("P_DOMINO_2_6");
		case 18:
			return joaat("P_DOMINO_3_3");
		case 19:
			return joaat("P_DOMINO_3_4");
		case 20:
			return joaat("P_DOMINO_3_5");
		case 21:
			return joaat("P_DOMINO_3_6");
		case 22:
			return joaat("P_DOMINO_4_4");
		case 23:
			return joaat("P_DOMINO_4_5");
		case 24:
			return joaat("P_DOMINO_4_6");
		case 25:
			return joaat("P_DOMINO_5_5");
		case 26:
			return joaat("P_DOMINO_5_6");
		case 27:
			return joaat("P_DOMINO_6_6");
		default:
			break;
	}
	return 0;
}

void func_97(bool bParam0)
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

int func_98(int iParam0)
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

int func_99(int iParam0)
{
	return (iParam0 & 31);
}

char* func_100(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_101(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_103(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_104(int iParam0, int iParam1)
{
	if (!func_105(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] & iParam1) != 0;
}

bool func_105(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_254(iParam0, 1);
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

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_254(iParam0, 1);
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

void func_108()
{
	func_107(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_107(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_107(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_107(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_107(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_107(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_107(joaat("WS_COLTER_STAGE_MP"));
}

void func_109()
{
	func_107(joaat("WS_BEECHERS_SHACK"));
	func_107(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_107(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_107(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_107(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_107(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_107(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_107(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_107(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_107(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_254(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

void func_111(int iParam0)
{
	Global_1954819.f_753.f_1 = 0.0f;
	Global_1954819.f_753 = iParam0;
}

bool func_112(int iParam0)
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

void func_113(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_4.f_39 = 0;
	uParam0->f_3 = 0;
}

void func_114(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_149)
	{
		uParam0->f_149[iVar0 /*44*/].f_4.f_39 = 0;
		uParam0->f_149[iVar0 /*44*/].f_3 = 0;
		iVar0++;
	}
	uParam0->f_6.f_142 = 0;
}

int func_115(int iParam0)
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
		if (func_255(iVar1, &vVar2, 1) && vVar2.y == iParam0)
		{
			iVar12 = func_256(iParam0, iVar1);
			if (func_35(iVar12))
			{
				iVar0 += func_257(iVar12);
			}
		}
		iVar1++;
	}
	return iVar0;
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

int func_117(char* sParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

void func_118(var uParam0, int iParam1)
{
	int iVar0;

	uParam0->f_12 = 0;
	uParam0->f_13 = 255;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_3 = 0;
	uParam0->f_2 = 0;
	uParam0->f_5 = 0;
	uParam0->f_7 = 0;
	uParam0->f_16 = 0;
	uParam0->f_46 = 0;
	uParam0->f_9 = iParam1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		func_258(&(uParam0->f_48[iVar0 /*15*/]));
		iVar0++;
	}
}

int func_119(int iParam0, Vector3 vParam1, int iParam4, int iParam5, float fParam6, int iParam7)
{
	if (!func_112(iParam0))
	{
		return 0;
	}
	if (!func_259(iParam0, vParam1, iParam4, iParam5, fParam6, iParam7, 0))
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

int func_120(int iParam0, Vector3 vParam1, int iParam4, int iParam5, float fParam6)
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
	func_260(iParam0, vParam1, iParam4, iParam5, &vVar5, 0);
	func_261(&iVar2, vVar5, 0.0f, 0.0f, 0.0f, (fParam6 * 2.0f), (fParam6 * 2.0f), 1.2f);
	iVar1 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar2, iVar3, 3);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar3));
		if (!ENTITY::IS_ENTITY_DEAD(iVar4))
		{
			if (func_262(iParam0, ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar4) > 0.95f)
				{
					func_89(iVar2);
					ITEMSET::_CLEAR_ITEMSET(iVar3);
					ITEMSET::DESTROY_ITEMSET(iVar3);
					return iVar4;
				}
			}
		}
		iVar0++;
	}
	func_89(iVar2);
	ITEMSET::_CLEAR_ITEMSET(iVar3);
	ITEMSET::DESTROY_ITEMSET(iVar3);
	return 0;
}

void func_121(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_263(uParam0, iParam1, iParam2);
	func_264(uParam0, iParam1, iParam2, iParam3, iParam4, iParam5);
}

void func_122(var uParam0, Vector3 vParam1)
{
	uParam0->f_11 = { vParam1 /*3*/ };
}

void func_123(var uParam0)
{
	uParam0->f_743 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@dominoes_generic", 2, "plMain", false, true);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_743))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_743);
		uParam0->f_77 = 1;
	}
}

void func_124(var uParam0)
{
	if (func_208(*uParam0))
	{
		func_265(uParam0, 1, 0);
	}
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0.0f;
	uParam0->f_5 = 1;
}

void func_125(var uParam0, int iParam1)
{
	if (uParam0->f_2 == 0 || uParam0->f_4 == 1)
	{
		if (func_208(*uParam0))
		{
			func_265(uParam0, 1, 1);
		}
	}
	if (uParam0->f_2 != iParam1)
	{
	}
	uParam0->f_2 = iParam1;
}

void func_126(var uParam0)
{
	uParam0->f_356 = 0;
	uParam0->f_359 = 0;
	uParam0->f_357 = 0;
	uParam0->f_358 = 0;
	uParam0->f_360 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_363 = -1;
}

void func_127(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_266(&(uParam0->f_384[iVar0]));
		uParam0->f_391[iVar0] = -1;
		iVar0++;
	}
}

void func_128(var uParam0, int iParam1, bool bParam2, int iParam3)
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

	uParam0->f_158++;
	*uParam0 = iParam1;
	uParam0->f_2 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-1534086282);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "MinigamesDataStore");
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "gameSettings");
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "totalsStack");
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_15, "isVisible", true);
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_15, "totalsTextItemData");
	func_267(uParam0, iParam3);
	iVar1 = 0;
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_15, "totalsItemArray");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_16);
	func_268(uParam0);
	if ((iParam1 == 2 || iParam1 == 0) || bParam2)
	{
		iVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_15, "communityGameTokenItemArray");
		iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_15, "communityGameTokenItemData");
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(iVar4);
		iVar0 = 0;
		while (iVar0 < uParam0->f_13)
		{
			strcpy_s(&cVar2, 8, "");
			StringIntConCat(&cVar2, iVar0, 8);
			iVar6 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar5, &cVar2);
			uParam0->f_13[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar6, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(iVar4, iVar0, "single_game_token_big", iVar6);
			iVar0++;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_16, 0, "community_cards", uParam0->f_15);
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10)
	{
		strcpy_s(&cVar2, 8, "");
		StringIntConCat(&cVar2, iVar0, 8);
		uParam0->f_10[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar3, &cVar2);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_16, (iVar0 + iVar1), "money_with_text", uParam0->f_10[iVar0]);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "moneyText", "");
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iVar0], "text", "");
		iVar0++;
	}
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "playerStack");
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_7, "playerData");
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_7, "playerList");
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_7, "isVisible", true);
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	iVar7 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "bettingControl");
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isVisible", false);
	uParam0->f_18 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar7, "text", "");
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isLeftArrowVisible", false);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar7, "isRightArrowVisible", false);
	iVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_6, "centralScoretimer");
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "isVisible", false);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar8, "timerString", "18:88");
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "isVisible", false);
	func_269(uParam0, 2);
}

void func_129(var uParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	func_270(uParam0, &(uParam0->f_26[iParam1 /*32*/]), iParam1, sParam2, sParam3, bParam4, bParam5);
}

void func_130(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_157 = 0;
}

int func_131(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_271(vParam0))
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
		if (func_272(vParam0))
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
	func_273(iVar0, bParam8);
	return iVar0;
}

void func_132(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		*uParam0 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_274());
	}
}

bool func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_2(func_28());
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "MinigameObject"))
	{
		return true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = 0;
	while (iVar1 < 28)
	{
		if (iVar2 == func_96(iVar1, iVar0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_134(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		func_132(&iVar0, *uParam0 + Vector(fLocal_14, 0.0f, 0.0f), 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
		iVar2 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar0, iVar4, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar4));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("P_DOMINORACK01X"))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
				{
					ENTITY::DETACH_ENTITY(iVar1, true, true);
				}
				OBJECT::DELETE_OBJECT(&iVar1);
			}
			iVar3++;
		}
		func_89(iVar0);
		ITEMSET::_CLEAR_ITEMSET(iVar4);
		ITEMSET::DESTROY_ITEMSET(iVar4);
	}
}

void func_135(var uParam0, int iParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	iVar6 = joaat("P_DOMINORACK01X");
	func_276(uParam0, func_275(iParam1), &vVar0);
	func_277(uParam0, iParam1, &vVar3);
	func_266(&(uParam0->f_971[iParam1]));
	uParam0->f_971[iParam1] = OBJECT::CREATE_OBJECT(iVar6, vVar0, false, true, false, false, true);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_971[iParam1]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_971[iParam1], true);
		CAM::_0xDB382FE20C2DA222(uParam0->f_971[iParam1]);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_971[iParam1], vVar3, 2, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_971[iParam1], false, false);
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_976[iParam1]))
	{
		func_278(&(uParam0->f_976[iParam1]), vVar0, vVar3, 0.3f, 0.08f, 0.15f, "RACK");
	}
}

void func_136(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_279(&(uParam0->f_746[iVar0 /*8*/]), 1);
		uParam0->f_746[iVar0 /*8*/].f_1 = 0;
		uParam0->f_746[iVar0 /*8*/].f_3 = 29;
		uParam0->f_746[iVar0 /*8*/] = 0;
		uParam0->f_746[iVar0 /*8*/].f_4 = 28;
		iVar0++;
	}
}

void func_137(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4, int iParam5)
{
	char cVar0[64];

	if (iParam1 < 10)
	{
		strcpy_s(&cVar0, 64, "PLAYER_00_PIECE_0");
	}
	else
	{
		strcpy_s(&cVar0, 64, "PLAYER_00_PIECE_");
	}
	StringIntConCat(&cVar0, iParam1, 64);
	strcat_s(&cVar0, 64, "_CLEAR_BOARD");
	*uParam2 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, *uParam0, 0.0f, 0.0f, uParam0->f_3, fParam4, 2) /*3*/ };
	*uParam3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, *uParam0, 0.0f, 0.0f, uParam0->f_3, fParam4, 2) /*3*/ };
}

bool func_138(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_32() != -1)
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

bool func_139(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	char cVar1[32];
	int iVar5;

	strcpy_s(&cVar1, 32, "*** INVALID ***");
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (func_280(uParam0, iParam2, &uVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		return false;
	}
	if (uParam0->f_199[iParam1 /*124*/] == 1)
	{
		return false;
	}
	func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
	if (func_138(iParam2))
	{
		iVar5 = func_145(iParam2);
		if (!func_146(iVar5) || !func_281(iVar5))
		{
			func_147(iVar5, 1, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1);
		}
	}
	func_282(iParam2);
	uParam0->f_199[iParam1 /*124*/] = 1;
	uParam0->f_199[iParam1 /*124*/].f_1 = iParam4;
	uParam0->f_199[iParam1 /*124*/].f_12 = iParam2;
	uParam0->f_199[iParam1 /*124*/].f_13 = iParam3;
	uParam0->f_199[iParam1 /*124*/].f_2 = iParam5;
	uParam0->f_199[iParam1 /*124*/].f_10 = iParam1;
	if ((!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true)) && !func_138(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_199[iParam1 /*124*/].f_12, true, true);
	}
	if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_199[iParam1 /*124*/].f_12, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 231 /*PCF_0xD021799A*/, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 113 /*PCF_DisableShockingEvents*/, true);
	}
	func_246(&(uParam0->f_199[iParam1 /*124*/].f_43));
	ANIMSCENE::_CLEAR_BREAKOUT_ARCHETYPE(iParam2);
	PED::SET_PED_CONFIG_FLAG(iParam2, 168 /*PCF_EnableShockingEvents*/, false);
	if (iParam3 != 255)
	{
		strcpy_s(&cVar1, 32, PLAYER::GET_PLAYER_NAME(iParam3));
	}
	if (PED::IS_PED_A_PLAYER(iParam2))
	{
	}
	else if (uParam0->f_199[iParam1 /*124*/].f_1)
	{
	}
	else if (func_138(iParam2))
	{
		iVar5 = func_145(iParam2);
	}
	if (iParam2 == PLAYER::PLAYER_PED_ID() || iParam3 == PLAYER::PLAYER_ID())
	{
		uParam0->f_194 = iParam1;
		uParam0->f_698 = MISC::GET_FRAME_COUNT();
		func_283(joaat("MPC_HIDE_ACTION_GLOVES"), uParam0->f_199[iParam1 /*124*/].f_12, 0, 1);
		uParam0->f_199[iParam1 /*124*/].f_10 = 3;
		func_86(1);
		func_157(2);
	}
	if (func_69(uParam0, &(uParam0->f_199[iParam1 /*124*/])))
	{
		uParam0->f_199[iParam1 /*124*/].f_10 = 0;
	}
	func_284(&Global_1899750, uParam0->f_199[iParam1 /*124*/].f_12, iParam1, 0);
	func_285(uParam0, iParam1);
	return true;
}

int func_140(var uParam0)
{
	int iVar0;
	char cVar1[64];

	if (func_286(*uParam0, joaat("MINIGAME_DOMINOES_PLAYER")))
	{
		return 1;
	}
	strcpy_s(&cVar1, 64, "MINI_GAMES@DOMINOES@enter_exit@PLAYER_FEMALE_00");
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
	{
		return 1;
	}
	strcpy_s(&cVar1, 64, "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		strcpy_s(&cVar1, 64, "mini_games@dominoes@enter_exit@player_0");
		StringIntConCat(&cVar1, iVar0, 64);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
		{
			return 1;
		}
		strcpy_s(&cVar1, 64, "mini_games@dominoes@game@player_0");
		StringIntConCat(&cVar1, iVar0, 64);
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, &cVar1, "player_00_idle", 1))
		{
			return 1;
		}
		iVar0++;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(*uParam0))
	{
		return TASK::_GET_TASK_MOVE_NETWORK_ID(*uParam0) == joaat("SCRIPT_MINI_GAME_DOMINOES");
	}
	return func_287(*uParam0);
}

int func_141(var uParam0, int iParam1)
{
	struct<15> /*120*/ sVar0;

	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	sVar0.f_0 = 5;
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

bool func_142()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

int func_143(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<15> /*120*/ sVar1;

	iVar0 = 0;
	sVar1.f_1 = 8;
	sVar1.f_14 = -1;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 4))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 3))
	{
		return 0;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iParam1]))
	{
		sVar1.f_0 = 4;
	}
	else
	{
		sVar1.f_0 = 3;
	}
	if (bParam2)
	{
		iVar0 = 1;
	}
	func_289(&sVar1, 0, iVar0);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar1);
}

void func_144(var uParam0, int iParam1, int iParam2)
{
	func_290(&(uParam0->f_14), iParam1, uParam0->f_666.f_6);
	if (iParam2 == 1)
	{
	}
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	if (!func_138(iParam0))
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

bool func_146(int iParam0)
{
	return func_291(iParam0, 16, 1);
}

int func_147(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	Vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_292(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || (Global_1391438.f_5 & 8) != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_293(iParam0, 2, 1))
			{
				func_294(iParam0, 2, 1);
			}
			if (func_291(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_295(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_296(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_297(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_297(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_298(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_295(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_299(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_295(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_299(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!func_293(iParam0, 44, 0))
			{
				func_295(iParam0, 44, 0);
			}
			if (func_300(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_299(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171 /*PCF_0x6868B572*/, true);
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_294(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130 /*PCF_DisableTalkTo*/, false);
			func_301(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_302(iParam0, 0, 0, 1);
			}
			func_294(iParam0, 33, 1);
			func_294(iParam0, 34, 1);
			func_294(iParam0, 29, 1);
			if (!func_271(vVar0) && bParam7)
			{
				func_299(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_299(iParam0, 4);
			}
			else
			{
				func_299(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						func_298(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_303(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, (1 << 30));
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::IS_PED_EXITING_SCENARIO(Global_1360165[iParam0 /*1157*/], true))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_299(iParam0, 4);
			}
			else
			{
				func_299(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (func_304(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_305(iParam0, iParam13, 0);
						func_306(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_293(iParam0, 25, 0))
						{
							func_294(iParam0, 25, 0);
						}
						func_295(iParam0, 66, 0);
						func_299(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_299(iParam0, 5);
				}
				func_295(iParam0, 28, 1);
			}
			else
			{
				func_299(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_299(iParam0, 6);
			}
			break;
		case 6:
			if (func_297(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_SET_PED_DIRT_CLEANED(Global_1360165[iParam0 /*1157*/], 0.0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0.0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_307(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_308(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_299(iParam0, 7);
		case 7:
			func_301(iParam0, bParam9, bParam15, 0);
			func_309(iParam0, 4, bParam11);
			func_310(iParam0);
			if (bParam20)
			{
				if (func_311(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_312(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_299(iParam0, 0);
			func_313(iParam0, 16, 1);
			func_294(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_148(var uParam0, bool bParam1)
{
	int iVar0[28];
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;

	iVar31 = 0;
	while (iVar31 < 28)
	{
		iVar0[iVar31] = iVar31;
		iVar31++;
	}
	iVar30 = 0;
	while (iVar30 < 2)
	{
		iVar31 = 0;
		iVar31 = 0;
		while (iVar31 < 28)
		{
			iVar32 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
			iVar29 = iVar0[iVar32];
			iVar0[iVar32] = iVar0[iVar31];
			iVar0[iVar31] = iVar29;
			iVar31++;
		}
		iVar30++;
	}
	if (bParam1)
	{
		iVar31 = 0;
		iVar31 = 0;
		while (iVar31 < 28)
		{
			if (iVar0[iVar31] == 27)
			{
				iVar30 = iVar31;
			}
			iVar31++;
		}
		iVar29 = iVar0[0];
		iVar0[0] = iVar0[iVar30];
		iVar0[iVar30] = iVar29;
	}
	func_314(uParam0, 28);
	iVar31 = 0;
	while (iVar31 < 28)
	{
		func_315(uParam0, iVar31, iVar0[iVar31]);
		iVar31++;
	}
}

bool func_149(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return false;
	}
	if (func_32() == -1 && func_19())
	{
		return uParam0->f_149[iParam1 /*44*/] == iParam1;
	}
	return (uParam0->f_149[iParam1 /*44*/] == iParam1 && uParam0->f_149[iParam1 /*44*/].f_1 > 0);
}

int func_150(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (5 * iParam1);
	iVar1 = iVar0 + 4;
	iVar4 = 159;
	if (iVar1 > iVar4)
	{
		return 29;
	}
	if (iVar0 > (iVar4 - 5))
	{
		return 29;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (MISC::_IS_BIT_FLAG_SET(uParam0, iVar0))
		{
			MISC::SET_BIT(&iVar2, iVar3);
		}
		iVar0++;
		iVar3++;
	}
	return iVar2;
}

int func_151(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			return 1;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			return 1;
		case 2:
			*uParam1 = 0;
			*uParam2 = 2;
			return 1;
		case 3:
			*uParam1 = 0;
			*uParam2 = 3;
			return 1;
		case 4:
			*uParam1 = 0;
			*uParam2 = 4;
			return 1;
		case 5:
			*uParam1 = 0;
			*uParam2 = 5;
			return 1;
		case 6:
			*uParam1 = 0;
			*uParam2 = 6;
			return 1;
		case 7:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		case 8:
			*uParam1 = 1;
			*uParam2 = 2;
			return 1;
		case 9:
			*uParam1 = 1;
			*uParam2 = 3;
			return 1;
		case 10:
			*uParam1 = 1;
			*uParam2 = 4;
			return 1;
		case 11:
			*uParam1 = 1;
			*uParam2 = 5;
			return 1;
		case 12:
			*uParam1 = 1;
			*uParam2 = 6;
			return 1;
		case 13:
			*uParam1 = 2;
			*uParam2 = 2;
			return 1;
		case 14:
			*uParam1 = 2;
			*uParam2 = 3;
			return 1;
		case 15:
			*uParam1 = 2;
			*uParam2 = 4;
			return 1;
		case 16:
			*uParam1 = 2;
			*uParam2 = 5;
			return 1;
		case 17:
			*uParam1 = 2;
			*uParam2 = 6;
			return 1;
		case 18:
			*uParam1 = 3;
			*uParam2 = 3;
			return 1;
		case 19:
			*uParam1 = 3;
			*uParam2 = 4;
			return 1;
		case 20:
			*uParam1 = 3;
			*uParam2 = 5;
			return 1;
		case 21:
			*uParam1 = 3;
			*uParam2 = 6;
			return 1;
		case 22:
			*uParam1 = 4;
			*uParam2 = 4;
			return 1;
		case 23:
			*uParam1 = 4;
			*uParam2 = 5;
			return 1;
		case 24:
			*uParam1 = 4;
			*uParam2 = 6;
			return 1;
		case 25:
			*uParam1 = 5;
			*uParam2 = 5;
			return 1;
		case 26:
			*uParam1 = 5;
			*uParam2 = 6;
			return 1;
		case 27:
			*uParam1 = 6;
			*uParam2 = 6;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_152(var uParam0, int iParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 3;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = uParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_153(var uParam0)
{
	return uParam0->f_12;
}

int func_154()
{
	return Global_1899528.f_61.f_1;
}

int func_155()
{
	return Global_1899528.f_61;
}

int func_156()
{
	return Global_1899528.f_61.f_3;
}

void func_157(int iParam0)
{
	Global_1899528.f_61 = iParam0;
}

int func_158(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_204(uParam0, iVar0))
		{
			if (!func_318(&(uParam1->f_14), iVar0))
			{
				iVar1 = func_319(1, iVar0);
				if (!PED::IS_PED_INJURED(iVar1))
				{
					if (func_139(uParam0, iVar0, iVar1, 255, 0, 0))
					{
						func_141(uParam0, iVar0);
						func_144(uParam1, iVar0, 0);
						iVar2 = 1;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_159()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1899528.f_61.f_134[iVar0] = 0;
		iVar0++;
	}
}

void func_160()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1899528.f_61.f_101[iVar0] = 0;
		iVar0++;
	}
}

bool func_161(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	struct<4> /*32*/ sVar7;
	bool bVar12;

	bVar4 = false;
	bVar5 = false;
	bVar12 = func_164(uParam1, uParam0->f_666.f_3, uParam0->f_666.f_14[0]);
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (func_318(uParam1, iVar3))
		{
			if (uParam1->f_149[iVar3 /*44*/] != uParam2->f_149[iVar3 /*44*/] && uParam1->f_149[iVar3 /*44*/] == iVar3)
			{
				bVar4 = true;
				func_320(uParam0, iVar3);
			}
			iVar2 = (uParam1->f_149[iVar3 /*44*/].f_1 - uParam2->f_149[iVar3 /*44*/].f_1);
			if (iVar2 > 0)
			{
				bVar4 = true;
				func_322(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_1, uParam2->f_149[iVar3 /*44*/].f_1, func_321(uParam1));
				uParam0->f_14.f_5 = 0;
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_318(uParam1, iVar0))
					{
						uParam0->f_14.f_5 += uParam1->f_149[iVar0 /*44*/].f_1;
					}
					iVar0++;
				}
				if (iVar3 == iParam3)
				{
					func_175(uParam0, 1);
					func_176(uParam0, -1);
				}
			}
		}
		else if (func_318(uParam2, iVar3))
		{
			bVar4 = true;
			func_323(uParam0, iVar3, func_321(uParam1));
		}
		iVar3++;
	}
	if (uParam1->f_6.f_142 == 0)
	{
		bVar5 = false;
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (func_149(uParam1, iVar3))
			{
				if (uParam1->f_149[iVar3 /*44*/].f_3 == 7 && uParam2->f_149[iVar3 /*44*/].f_3 != 7)
				{
					bVar5 = true;
				}
			}
			iVar3++;
		}
		if (bVar5)
		{
			if (uParam0->f_700 == 0)
			{
				func_176(uParam0, -1);
			}
			func_175(uParam0, 0);
			uParam0->f_702 = 0;
			uParam0->f_698 = -1;
			uParam0->f_701 = 0;
			if (!func_318(uParam1, uParam0->f_695))
			{
				uParam0->f_695 = func_324(uParam1, uParam0->f_695);
			}
			if (func_19())
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (func_149(uParam1, iVar3))
					{
						func_322(uParam0, iVar3, 0, 0, func_321(uParam1));
						func_152(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_2);
					}
					iVar3++;
				}
			}
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (func_149(uParam1, iVar3))
				{
					func_152(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_2);
				}
				iVar3++;
			}
			bVar4 = true;
			uParam0->f_11 = 0;
			func_325(uParam0, uParam1, func_321(uParam1));
			func_327(uParam0, func_326(uParam1, uParam0->f_697), uParam0->f_697);
			uParam0->f_696 = -1;
		}
	}
	if (bVar12 == 0)
	{
		if (*uParam1 != -1 && bVar5 == 0)
		{
			if (func_149(uParam1, *uParam1))
			{
				if (uParam1->f_149[*uParam1 /*44*/].f_3 > 0)
				{
					iVar2 = (func_328(uParam2) - func_328(uParam1));
					if (iVar2 > 0)
					{
						bVar4 = true;
						func_330(uParam0, *uParam1, uParam1, iVar2, uParam2->f_149[*uParam1 /*44*/].f_3, func_329(&(uParam1->f_149[*uParam1 /*44*/].f_4)));
						if (*uParam1 == iParam3)
						{
							uParam0->f_11 = 1;
							func_331(uParam0, *uParam1, uParam1);
						}
						func_332(uParam0, *uParam1);
					}
				}
			}
		}
		if (*uParam1 != -1)
		{
			if (*uParam1 != *uParam2 || (uParam1->f_3 != 0 && uParam2->f_3 == 0))
			{
				if (uParam1->f_149[*uParam1 /*44*/].f_3 > 0)
				{
					if (*uParam1 == iParam3)
					{
						func_331(uParam0, *uParam1, uParam1);
					}
					uParam0->f_702++;
					func_333(uParam0, *uParam1, uParam1->f_3, uParam0->f_702);
					bVar4 = true;
				}
			}
		}
	}
	if (func_149(uParam1, *uParam1))
	{
		iVar0 = (uParam1->f_6.f_142 - 1);
		iVar3 = *uParam1;
		if (uParam1->f_6.f_142 > uParam2->f_6.f_142 || (uParam1->f_6.f_142 == 1 && uParam2->f_6.f_142 <= 0))
		{
			uParam0->f_701 = 0;
			sVar7.f_1 = { uParam1->f_6.f_1[iVar0 /*5*/].f_2 /*2*/ };
			sVar7.f_0 = uParam1->f_1;
			sVar7.f_3 = uParam1->f_6.f_1[iVar0 /*5*/].f_4;
			iVar6 = func_334(uParam1->f_6.f_1[iVar0 /*5*/]);
			if (uParam0->f_666.f_3 == -1234859967 || uParam0->f_666.f_3 == -382896522)
			{
				iVar2 = (uParam1->f_149[iVar3 /*44*/].f_2 - uParam2->f_149[iVar3 /*44*/].f_2);
			}
			else
			{
				iVar2 = 0;
			}
			func_335(uParam0, iVar3, &sVar7, iVar6, uParam1->f_149[iVar3 /*44*/].f_3 == 0, iVar2);
			if (uParam0->f_666.f_3 == -1234859967 || uParam0->f_666.f_3 == -382896522)
			{
				iVar2 = (uParam1->f_149[iVar3 /*44*/].f_2 - uParam2->f_149[iVar3 /*44*/].f_2);
				func_336(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_2, iVar2, uParam1->f_6);
				func_337(uParam0, uParam1->f_6);
			}
			else
			{
				func_338(uParam0, iVar3, uParam1->f_149[iVar3 /*44*/].f_3);
			}
			if (bVar12 == 1)
			{
				if (uParam1->f_149[iVar3 /*44*/].f_2 >= uParam0->f_666.f_14[0])
				{
					func_339(uParam0, iVar3 == iParam3, 1, 1);
					func_340(uParam0, iVar3);
					func_341(uParam0, 4, iParam3);
				}
				else
				{
					iVar1 = 0;
					while (iVar1 < 4)
					{
						if (func_149(uParam1, iVar1))
						{
							func_331(uParam0, iVar1, uParam1);
						}
						iVar1++;
					}
					uParam0->f_696 = iVar3;
					func_176(uParam0, iVar3);
					func_342(uParam0, iVar3);
					iVar2 = (uParam1->f_149[iVar3 /*44*/].f_2 + func_343(uParam1, uParam0->f_666.f_3, iVar3));
					func_176(uParam0, iVar3);
					uParam1->f_149[iVar3 /*44*/].f_2 += func_343(uParam1, uParam0->f_666.f_3, iVar3);
					if (iVar2 >= uParam0->f_666.f_14[0])
					{
						func_340(uParam0, iVar3);
						func_339(uParam0, iVar3 == iParam3, 1, 1);
						func_175(uParam0, 1);
						func_341(uParam0, 4, iParam3);
					}
					else
					{
						func_339(uParam0, iVar3 == iParam3, 1, 0);
						func_344(uParam0, iVar3);
					}
				}
			}
			bVar4 = true;
		}
	}
	if (bVar12 == 0)
	{
		if (uParam1->f_3 == 0 && uParam2->f_3 != 0)
		{
			bVar4 = true;
			func_345(uParam0, *uParam2);
			func_331(uParam0, iParam3, uParam1);
		}
	}
	if (bVar4 == 0)
	{
		if (!func_346(uParam2, uParam1))
		{
			bVar4 = true;
		}
	}
	if (bVar4)
	{
	}
	return bVar4;
}

void func_162(var uParam0, int iParam1)
{
	if (uParam0->f_1299 != iParam1)
	{
	}
	uParam0->f_1299 = iParam1;
}

void func_163(var uParam0)
{
	uParam0->f_14.f_3 = 0;
}

bool func_164(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_3 == 0)
			{
				return true;
			}
			if (uParam0->f_149[iVar0 /*44*/].f_2 >= iParam2)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_165(var uParam0, int iParam1)
{
	var uVar0;

	uVar0 = 15;
	return func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &uVar0) > 0;
}

int func_166(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar3;
	var uVar4;

	uVar4 = 15;
	if (uParam0->f_666.f_3 == -1617663169)
	{
		return 0;
	}
	if (!func_149(&(uParam0->f_14), iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar3 = func_348(uParam0, iParam1);
		if (iVar3 == 29)
		{
			return 0;
		}
		if (!func_349(iVar3, &uVar1))
		{
			return 0;
		}
		func_350(&uVar4);
		if (func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &uVar4) > 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_167(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
	uParam0->f_14.f_3 = uParam0->f_694 + 30;
}

int func_168(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<5> /*40*/ sVar2[15];

	iVar1 = 0;
	if (uParam0->f_14.f_6.f_142 == 0)
	{
		return func_351(uParam0, iParam1);
	}
	iVar0 = func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &sVar2);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_352(uParam0->f_666.f_3, &(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &sVar2, &iVar1, iVar0))
	{
		if (!func_353(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &sVar2, &iVar1, iVar0))
		{
			return 0;
		}
	}
	if (!func_354(uParam0->f_666.f_3, &(uParam0->f_14), iParam1, &(sVar2[iVar1 /*5*/])))
	{
		return 0;
	}
	return 1;
}

void func_169(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 2147483647;
	iVar3 = -1;
	if (!func_164(&(uParam0->f_14), uParam0->f_666.f_3, uParam0->f_666.f_14[0]))
	{
		func_355(uParam0, iParam1, 0);
	}
	func_163(uParam0);
	uParam0->f_701++;
	if (uParam0->f_701 < func_356(&(uParam0->f_14)))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(&(uParam0->f_14), iVar0))
		{
			func_331(uParam0, iVar0, &(uParam0->f_14));
			iVar1 = func_357(&(uParam0->f_14), iVar0, uParam0->f_666.f_3);
			if (iVar1 == iVar2)
			{
				iVar3 = -1;
				iVar2 = iVar1;
			}
			if (iVar1 < iVar2)
			{
				iVar3 = iVar0;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	uParam0->f_696 = iVar3;
	func_358(uParam0, iVar3);
	if (uParam0->f_696 != -1)
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_149(&(uParam0->f_14), iVar0) && iVar0 != uParam0->f_696)
			{
				iVar1 += func_357(&(uParam0->f_14), iVar0, uParam0->f_666.f_3);
			}
			iVar0++;
		}
		uParam0->f_14.f_149[uParam0->f_696 /*44*/].f_2 += iVar1;
		if (uParam0->f_14.f_149[uParam0->f_696 /*44*/].f_2 >= uParam0->f_666.f_14[0])
		{
			func_176(uParam0, uParam0->f_696);
			func_339(uParam0, uParam0->f_696 == iParam2, 1, 1);
			func_340(uParam0, uParam0->f_696);
			func_341(uParam0, 4, iParam2);
		}
		else
		{
			func_339(uParam0, uParam0->f_696 == iParam2, 1, 0);
			func_344(uParam0, -1);
		}
	}
	else
	{
		func_344(uParam0, -1);
	}
}

bool func_170(var uParam0)
{
	return uParam0->f_9;
}

void func_171(var uParam0)
{
	int iVar0;

	if (func_164(&(uParam0->f_14), uParam0->f_666.f_3, uParam0->f_666.f_14[0]))
	{
		return;
	}
	if (uParam0->f_696 != -1)
	{
		return;
	}
	if (func_359(&(uParam0->f_14), uParam0->f_14) == 0)
	{
		return;
	}
	iVar0 = func_324(&(uParam0->f_14), -1);
	uParam0->f_14 = iVar0;
	uParam0->f_14.f_3 = uParam0->f_694 + 30;
}

bool func_172(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam0->f_709.f_1;
	if (uParam0->f_709.f_2 < 1)
	{
		return false;
	}
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return false;
	}
	*uParam1 = { uParam0->f_709.f_4[iVar0 /*13*/] /*13*/ };
	if (uParam0->f_709 == 0)
	{
		uParam0->f_709 = 1;
	}
	return true;
}

int func_173(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = uParam0->f_709.f_1;
	if (uParam0->f_709.f_2 < 1)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return 0;
	}
	*iParam1 = { uParam0->f_709.f_4[uParam0->f_709.f_1 /*13*/] /*13*/ };
	func_316(&(uParam0->f_709.f_4[iVar0 /*13*/]));
	uParam0->f_709.f_1 = (iVar0 + 1 % 45);
	uParam0->f_709.f_2--;
	uParam0->f_709.f_3 = iParam1->f_11;
	uParam0->f_709 = 0;
	return 1;
}

bool func_174(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = uParam0->f_2334.f_165;
	if (uParam1->f_4 != 3 || func_170(uParam1))
	{
		func_196(uParam1, 3);
		func_360(&(uParam0->f_2334), 0);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_361(uParam1);
			break;
		case 1:
			if (iVar0 == 8)
			{
				if (func_32() == -1)
				{
					func_290(&(uParam1->f_14), iParam2->f_1, uParam1->f_666.f_6);
					func_362(&(uParam1->f_14));
					func_67(uParam1);
					if (iParam2->f_1 == uParam0->f_1330.f_194)
					{
						func_177(uParam1->f_666.f_6, 0);
					}
				}
				func_363(uParam1);
				return true;
			}
			if (iVar0 == 10)
			{
				if (func_32() == -1)
				{
					func_364(&(uParam1->f_14), iParam2->f_1);
				}
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

void func_175(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		uParam0->f_700 = 0;
	}
	else
	{
		uParam0->f_700++;
	}
}

void func_176(var uParam0, int iParam1)
{
	uParam0->f_697 = iParam1;
}

void func_177(int iParam0, char* sParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_365(iParam0, sParam1, 0, 1, 1);
	AUDIO::PLAY_SOUND_FRONTEND("MONEY", "HUD_DOMINOS_SOUNDSET", true, 0);
}

bool func_178(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (uParam1->f_4 != 4 || func_170(uParam1))
	{
		func_196(uParam1, 4);
		return false;
	}
	func_366(&Global_1899750);
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam0->f_1330.f_183 = 0;
			func_125(&(uParam0->f_2334.f_240), 1);
			func_189(&(uParam0->f_2334), uParam1->f_14.f_5);
			func_232(&(uParam0->f_1330), 1);
			func_367(&(uParam0->f_1330), uParam0->f_1330.f_1002);
			func_191(&(uParam0->f_2334));
			func_361(uParam1);
			func_246(&(uParam1->f_6));
			break;
		case 1:
			if (func_368(&(uParam1->f_6)) > 6.0f)
			{
				func_369(uParam0, uParam2->f_9, uParam0->f_1330.f_194);
				func_246(&(uParam0->f_1330.f_176));
				func_361(uParam1);
			}
			else if (func_370(&Global_1899750))
			{
				if (func_366(&Global_1899750))
				{
					func_246(&(uParam0->f_1330.f_176));
					func_369(uParam0, uParam2->f_9, uParam0->f_1330.f_194);
					func_361(uParam1);
				}
			}
			break;
		case 2:
			if (!func_371(&(uParam0->f_1330)))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (func_373(&(uParam0->f_1330), func_372(iVar0), &uVar2))
					{
						func_183(&(uParam0->f_1330), iVar0, 0);
						iVar1 = 1;
					}
				}
				iVar0++;
			}
			if (iVar1 == 1 || func_373(&(uParam0->f_1330), 6, &iVar0))
			{
				func_374(&(uParam0->f_1330), uParam2->f_1);
				func_375(&(uParam0->f_1330), uParam2->f_1, 0);
			}
			func_361(uParam1);
			break;
		case 3:
			if (func_376(&(uParam0->f_1330)))
			{
				func_377(uParam0, uParam1, uParam2);
				func_361(uParam1);
			}
			break;
		case 4:
			if (func_376(&(uParam0->f_1330)))
			{
				if (func_32() == -1)
				{
					func_378(uParam1);
				}
				func_185(&(uParam0->f_2334), uParam1);
				if (uParam1->f_666.f_3 == -1234859967 || uParam1->f_666.f_3 == -382896522)
				{
					func_186(&(uParam0->f_2334), 0);
				}
				else
				{
					func_379(&(uParam0->f_2334));
				}
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_179(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_4 != 10 || func_170(uParam1))
	{
		if (func_380(uParam1))
		{
			func_173(uParam1, iParam2);
			return true;
		}
		func_196(uParam1, 10);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_381(uParam0, uParam1, iParam2);
			func_361(uParam1);
			break;
		case 1:
			if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_1330.f_199[iParam2->f_1 /*124*/].f_12))
			{
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(uParam0->f_1330.f_199[iParam2->f_1 /*124*/].f_12, "LH_MOVE_ClipFinished") || TASK::GET_TASK_MOVE_NETWORK_EVENT(uParam0->f_1330.f_199[iParam2->f_1 /*124*/].f_12, "RH_MOVE_ClipFinished"))
				{
					func_361(uParam1);
				}
			}
			else if (func_382(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/])))
			{
				func_361(uParam1);
			}
			break;
		case 2:
			func_363(uParam1);
			return true;
	}
	return false;
}

bool func_180(var uParam0, var uParam1, int iParam2)
{
	if (func_380(uParam1))
	{
		func_173(uParam1, iParam2);
		return true;
	}
	if (uParam1->f_4 != 11 || func_170(uParam1))
	{
		func_196(uParam1, 11);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_383(&(uParam0->f_2334), iParam2->f_1, iParam2->f_10);
			func_384(uParam0, uParam1, iParam2);
			func_361(uParam1);
			break;
		case 1:
			if (func_382(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/])))
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_181(var uParam0, var uParam1, int iParam2)
{
	if (uParam1->f_4 != 12 || func_170(uParam1))
	{
		if (func_380(uParam1))
		{
			func_173(uParam1, iParam2);
			return true;
		}
		func_196(uParam1, 12);
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			func_385(&(uParam0->f_1330), iParam2->f_1, MISC::GET_RANDOM_INT_IN_RANGE(250, 1000));
			func_361(uParam1);
			break;
		case 1:
			if (func_386(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 14) || !func_387(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 14))
			{
				func_388(&(uParam0->f_2334), iParam2->f_1);
				func_389(&(uParam0->f_2334), iParam2->f_1, MISC::VAR_STRING(2, "MGDOM_MSGPASS"));
				func_361(uParam1);
			}
			break;
		case 2:
			if (func_382(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/])))
			{
				if (uParam0->f_1330.f_194 == iParam2->f_1)
				{
					uParam0->f_2334.f_261 = 0;
					uParam0->f_2334.f_410.f_20 = 0;
				}
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

void func_182(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_236), iParam1);
	func_390(&(uParam0->f_1), iParam1);
	strcpy_s(&(uParam0->f_171[iParam1 /*8*/]), 64, "");
}

int func_183(var uParam0, int iParam1, int iParam2)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 15))
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 15;
	func_289(&sVar0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

int func_184(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<15> /*120*/ sVar0;
	int iVar15;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 19))
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	iVar15 = 0;
	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (bParam2)
	{
		iVar15 = 1;
	}
	sVar0.f_0 = 19;
	func_289(&sVar0, 0, iVar15);
	func_289(&sVar0, 1, iParam3);
	if (bParam4)
	{
		func_289(&sVar0, 2, 1);
	}
	func_289(&sVar0, 3, iParam5);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

void func_185(var uParam0, var uParam1)
{
	char cVar0[64];

	StringIntConCat(&cVar0, uParam1->f_666.f_14[0], 64);
	if (*uParam0 == 0)
	{
		return;
	}
	func_393(&(uParam0->f_1), 0, MISC::VAR_STRING(10, "MGDOM_TGTSCOREM", func_392(uParam1->f_666.f_3)));
	func_394(&(uParam0->f_1), 0, &cVar0);
}

void func_186(var uParam0, int iParam1)
{
	char cVar0[64];

	StringIntConCat(&cVar0, iParam1, 64);
	uParam0->f_164 = iParam1;
	if (*uParam0 == 0)
	{
		return;
	}
	func_393(&(uParam0->f_1), 1, MISC::VAR_STRING(2, "MGDOM_EDGETOTAL"));
	func_394(&(uParam0->f_1), 1, &cVar0);
}

void func_187(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_395(uParam0, iParam1, iParam3);
	func_188(uParam0, iParam1, iParam2);
}

void func_188(var uParam0, int iParam1, int iParam2)
{
	char cVar0[64];

	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	StringIntConCat(&cVar0, iParam2, 64);
	func_396(&(uParam0->f_1.f_26[iParam1 /*32*/]), 1);
	func_397(&(uParam0->f_1.f_26[iParam1 /*32*/]), &cVar0);
	uParam0->f_166[iParam1] = iParam2;
}

void func_189(var uParam0, var uParam1)
{
	uParam0->f_237 = uParam1;
}

void func_190(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	if (iParam2 == 0)
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGNOTILELEFT"));
	}
	else if (iParam2 == 1)
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGTILELEFT1", iParam2));
	}
	else
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGTILELEFT", iParam2));
	}
}

void func_191(var uParam0)
{
	uParam0->f_246 = 0;
	uParam0->f_247 = 0;
	if (uParam0->f_239 == 1)
	{
		return;
	}
	func_30(1);
}

void func_192(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_399(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (uParam0->f_247 == iParam1)
	{
		return;
	}
	iVar1 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar1 == 0 || uParam0->f_246 == 0)
	{
		if (bParam2)
		{
			func_400(uParam0, sVar0);
		}
		else
		{
			func_194(uParam0, sVar0, 0, iParam3);
		}
		uParam0->f_247 = iParam1;
		return;
	}
	if (iVar1 == uParam0->f_246)
	{
		return;
	}
	func_30(1);
	if (bParam2)
	{
		func_400(uParam0, sVar0);
	}
	else
	{
		func_194(uParam0, sVar0, 0, iParam3);
	}
	uParam0->f_247 = iParam1;
}

char* func_193(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return "";
	}
	if (func_32() == -1)
	{
		return func_401(&(uParam0->f_171[iParam1 /*8*/]), joaat("COLOR_PURE_WHITE"));
	}
	return func_402(&(uParam0->f_171[iParam1 /*8*/]), joaat("COLOR_PURE_WHITE"));
}

void func_194(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		uParam0->f_246 = func_403(sParam1, iParam3, 0, 0, 0, 1);
	}
	else
	{
		uParam0->f_246 = func_404(sParam1, 0, 0, 1);
	}
}

int func_195(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_318(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_196(var uParam0, int iParam1)
{
	if (uParam0->f_4 != iParam1 || uParam0->f_9)
	{
	}
	func_246(&(uParam0->f_6));
	uParam0->f_5 = uParam0->f_4;
	uParam0->f_2 = 0;
	uParam0->f_4 = iParam1;
	uParam0->f_3 = 0;
	uParam0->f_9 = 0;
	if (uParam0->f_4 == 16 || uParam0->f_4 == 14)
	{
		func_405(1);
	}
}

void func_197(var uParam0, var uParam1)
{
	uParam0->f_234 = uParam1;
}

void func_198(var uParam0, int iParam1)
{
	if (uParam0->f_233 != iParam1)
	{
	}
	func_246(&(uParam0->f_160));
	uParam0->f_233 = iParam1;
}

void func_199(var uParam0, var uParam1)
{
	int iVar0;

	func_314(&(uParam0->f_204[uParam1->f_1 /*7*/]), 28);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		uParam0->f_204[uParam1->f_1 /*7*/][iVar0] = uParam1->f_2[iVar0];
		iVar0++;
	}
	uParam0->f_204[uParam1->f_1 /*7*/].f_6 = uParam1->f_10;
}

bool func_200(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (uParam1->f_4 != 14 || func_170(uParam1))
	{
		func_196(uParam1, 14);
		func_360(&(uParam0->f_2334), 0);
		func_406(&(uParam0->f_2334), uParam2->f_1);
		uParam1->f_696 = uParam2->f_1;
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam1->f_696 = uParam2->f_1;
			func_406(&(uParam0->f_2334), uParam2->f_1);
			if (func_204(&(uParam0->f_1330), uParam2->f_1))
			{
				uParam1->f_695 = uParam2->f_1;
				func_407(&(uParam0->f_1330), uParam2->f_1, 0);
				func_374(&(uParam0->f_1330), uParam2->f_1);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (uParam2->f_1 != iVar0 && uParam2->f_1 != -1)
					{
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 2)
						{
							func_408(&(uParam0->f_1330), iVar0, 0);
						}
					}
				}
				iVar0++;
			}
			if (uParam2->f_1 == -1)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_204(&(uParam0->f_1330), iVar0))
					{
						func_183(&(uParam0->f_1330), iVar0, 0);
					}
					iVar0++;
				}
			}
			func_361(uParam1);
			break;
		case 1:
			if (uParam2->f_1 == -1 || func_386(&(uParam0->f_1330.f_199[uParam2->f_1 /*124*/]), 17))
			{
				func_361(uParam1);
			}
			break;
		case 2:
			if (!func_376(&(uParam0->f_1330)))
			{
				return false;
			}
			func_374(&(uParam0->f_1330), uParam1->f_695);
			if (uParam2->f_1 == -1)
			{
				func_375(&(uParam0->f_1330), uParam1->f_695, 0);
			}
			func_361(uParam1);
			break;
		case 3:
			if (uParam0->f_2334.f_165 == 6)
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_201(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	if (uParam1->f_4 != 16 || func_170(uParam1))
	{
		func_196(uParam1, 16);
		func_360(&(uParam0->f_2334), 0);
		func_406(&(uParam0->f_2334), uParam2->f_1);
		uParam1->f_696 = uParam2->f_1;
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam1->f_696 = uParam2->f_1;
			func_406(&(uParam0->f_2334), uParam2->f_1);
			if (func_204(&(uParam0->f_1330), uParam2->f_1))
			{
				func_407(&(uParam0->f_1330), uParam2->f_1, 0);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iVar1 = 0;
				if (func_204(&(uParam0->f_1330), iVar0) && func_149(&(uParam1->f_14), iVar0))
				{
					if (uParam2->f_1 != iVar0)
					{
						if (uParam1->f_695 == uParam2->f_1)
						{
							uParam1->f_695 = iVar0;
							func_374(&(uParam0->f_1330), iVar0);
							iVar1 = 1;
						}
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 2 && iVar1 == 0)
						{
							func_408(&(uParam0->f_1330), iVar0, 0);
						}
					}
					if (uParam2->f_1 == -1)
					{
						func_183(&(uParam0->f_1330), iVar0, 0);
					}
				}
				iVar0++;
			}
			if (uParam2->f_1 == -1)
			{
				func_375(&(uParam0->f_1330), uParam1->f_695, 0);
			}
			func_361(uParam1);
			break;
		case 1:
			if (uParam2->f_1 == -1 || func_386(&(uParam0->f_1330.f_199[uParam2->f_1 /*124*/]), 17))
			{
				func_361(uParam1);
			}
			break;
		case 2:
			if (!func_376(&(uParam0->f_1330)))
			{
				return false;
			}
			func_361(uParam1);
			break;
		case 3:
			if (uParam0->f_2334.f_165 == 6)
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

bool func_202(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam1->f_4 != 17 || func_170(uParam1))
	{
		func_196(uParam1, 17);
		func_360(&(uParam0->f_2334), 0);
		func_406(&(uParam0->f_2334), uParam2->f_1);
		uParam1->f_696 = uParam2->f_1;
		return false;
	}
	switch (uParam1->f_3)
	{
		case 0:
			uParam1->f_2 = 1;
			uParam1->f_696 = uParam2->f_1;
			func_406(&(uParam0->f_2334), uParam2->f_1);
			if (func_204(&(uParam0->f_1330), uParam2->f_1))
			{
				func_407(&(uParam0->f_1330), uParam2->f_1, 1);
			}
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar1))
				{
					if (uParam2->f_1 != iVar1)
					{
						if (uParam1->f_695 == uParam2->f_1)
						{
							uParam1->f_695 = iVar1;
							func_374(&(uParam0->f_1330), iVar1);
							iVar2 = 1;
						}
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5) < 2 && iVar2 == 0)
						{
							func_408(&(uParam0->f_1330), iVar1, 0);
						}
					}
					if (uParam2->f_1 == -1)
					{
						func_183(&(uParam0->f_1330), iVar1, 0);
					}
				}
				iVar1++;
			}
			if (uParam2->f_1 == -1)
			{
				func_375(&(uParam0->f_1330), uParam1->f_695, 0);
			}
			if (func_32() == -1 && func_19())
			{
				if (uParam2->f_1 == uParam0->f_1330.f_194)
				{
					func_409(uParam0->f_1330.f_1002, Global_35, 27, 0, 0);
				}
				else
				{
					func_409(uParam0->f_1330.f_1002, func_410(uParam0->f_1330.f_1002), 27, 0, 0);
				}
			}
			func_361(uParam1);
			break;
		case 1:
			if (func_386(&(uParam0->f_1330.f_199[uParam2->f_1 /*124*/]), 17))
			{
				if (uParam2->f_1 == uParam0->f_1330.f_194)
				{
					func_411(uParam1->f_14.f_5, 0, 1065353216, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
				}
				else
				{
					iVar0 = (PED::GET_PED_MONEY(uParam0->f_1330.f_199[uParam2->f_1 /*124*/].f_12) + uParam1->f_14.f_5);
					PED::SET_PED_MONEY(uParam0->f_1330.f_199[uParam2->f_1 /*124*/].f_12, iVar0);
					func_412(uParam0->f_1330.f_199[uParam2->f_1 /*124*/].f_12, iVar0);
				}
				func_361(uParam1);
			}
			break;
		case 2:
			func_361(uParam1);
			break;
		case 3:
			if (uParam0->f_2334.f_165 == 4)
			{
				func_363(uParam1);
				return true;
			}
			break;
	}
	return false;
}

void func_203(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_153(uParam0);
	iVar1 = func_413(uParam0);
	if (func_32() == 0)
	{
		NETWORK::_0xD78A26024BB13E08(PLAYER::PLAYER_ID());
	}
	if (iVar0 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			func_238(uParam1, iVar1, 3);
			return;
		}
		if (!PED::IS_PED_INJURED(iVar0))
		{
			PED::SET_PED_CAN_LEG_IK(iVar0, false);
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iVar0, 0, 1);
		}
		if (iVar1 != uParam1->f_194)
		{
			CAM::_0x39073DA4EDDBC91D(iVar0);
		}
		if (uParam0->f_48[0 /*15*/] != 0)
		{
			if (!func_414(uParam0))
			{
				switch (uParam0->f_48[0 /*15*/])
				{
					case 1:
						func_415(uParam1, uParam0, iVar1);
						break;
					case 2:
						func_416(uParam1, uParam0, iVar1);
						break;
					case 5:
						func_417(uParam1, uParam0, iVar1);
						break;
					case 3:
						func_418(uParam1, uParam0, iVar1);
						break;
					case 4:
						func_419(uParam1, uParam0, iVar1, uParam2);
						break;
					case 19:
						if (uParam1->f_190 && iVar1 == uParam1->f_194)
						{
							func_420(uParam1, uParam0, iVar1, uParam2);
						}
						else
						{
							func_421(uParam1, uParam0, iVar1);
						}
						break;
					case 11:
						func_422(uParam1, uParam0, iVar1);
						break;
					case 12:
						func_422(uParam1, uParam0, iVar1);
						break;
					case 13:
						func_423(uParam1, uParam0, iVar1);
						break;
					case 6:
						func_424(uParam1, uParam0, iVar1);
						break;
					case 7:
						func_425(uParam1, uParam0, iVar1);
						break;
					case 8:
						func_426(uParam1, uParam0, iVar1);
						break;
					case 9:
					case 10:
						func_427(uParam1, uParam0, iVar1);
						break;
					case 17:
						func_428(uParam1, uParam0, iVar1);
						break;
					case 18:
						func_429(uParam1, uParam0, iVar1);
						break;
					case 14:
						func_430(uParam1, uParam0, iVar1, uParam2);
						break;
					case 15:
						func_431(uParam1, uParam0, iVar1);
						break;
					case 16:
						func_432(uParam1, uParam0, iVar1);
						break;
				}
			}
			func_433(uParam1, iVar0, &(uParam0->f_42));
			if (func_414(uParam0) && uParam0->f_48[1 /*15*/] != 0)
			{
				func_434(uParam0);
				func_435(uParam0, &(uParam0->f_48[0 /*15*/]));
			}
		}
	}
	func_436(uParam0);
}

bool func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(func_153(&(uParam0->f_199[iParam1 /*124*/]))))
	{
		return false;
	}
	return true;
}

void func_205(var uParam0)
{
	Vector3 vVar0;

	vVar0 = { 0.0f, 0.0f, uParam0->f_3 /*3*/ };
	switch (uParam0->f_77)
	{
		case 1:
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_743, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_743, true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_743);
				}
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_743, *uParam0, vVar0, 2);
				ANIMSCENE::START_ANIM_SCENE(uParam0->f_743);
				uParam0->f_77 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_743, "Breakout", true, false);
			break;
	}
}

int func_206(var uParam0)
{
	int iVar0;

	if (func_32() != -1)
	{
		return 0;
	}
	if (!func_19())
	{
		return 0;
	}
	if (uParam0->f_740 == 0)
	{
		return 0;
	}
	if (uParam0->f_184 == 0)
	{
		uParam0->f_186 -= MISC::GET_FRAME_TIME();
	}
	if (func_437(1))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
	{
		return 0;
	}
	if (uParam0->f_184 == 0)
	{
		if (uParam0->f_186 < 0.0f)
		{
			if (func_438(uParam0, &iVar0))
			{
				func_439(uParam0, iVar0);
				return 1;
			}
		}
		return 0;
	}
	if (!func_204(uParam0, uParam0->f_185))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_199[uParam0->f_185 /*124*/].f_12))
	{
		return 0;
	}
	func_440(uParam0);
	uParam0->f_184 = 0;
	uParam0->f_185 = -1;
	uParam0->f_186 = MISC::GET_RANDOM_FLOAT_IN_RANGE(300.0f, 600.0f);
	return 1;
}

void func_207(var uParam0, var uParam1)
{
	int iVar0;

	if (func_32() != -1)
	{
		return;
	}
	if (uParam0->f_740 == 0)
	{
		return;
	}
	uParam0->f_187 -= MISC::GET_FRAME_TIME();
	if (func_437(1))
	{
		return;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35))
	{
		return;
	}
	if (uParam0->f_187 > 0.0f)
	{
		return;
	}
	if (func_142())
	{
		if (func_441(&(uParam1->f_14), &iVar0))
		{
			func_442(uParam0, 88, iVar0, -1);
			uParam0->f_187 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30.0f, 80.0f);
		}
	}
	else if (func_443(&(uParam1->f_14), &iVar0))
	{
		func_442(uParam0, 87, iVar0, -1);
		uParam0->f_187 = MISC::GET_RANDOM_FLOAT_IN_RANGE(30.0f, 80.0f);
	}
}

bool func_208(int iParam0)
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

bool func_209(var uParam0, int iParam1)
{
	if (!func_204(uParam0, uParam0->f_194))
	{
		return false;
	}
	return func_387(&(uParam0->f_199[uParam0->f_194 /*124*/]), iParam1);
}

void func_210(var uParam0, int iParam1, bool bParam2)
{
	func_444(uParam0, &(uParam0->f_454));
	func_444(uParam0, &(uParam0->f_455));
	func_444(uParam0, &(uParam0->f_456));
	func_444(uParam0, &(uParam0->f_458));
	func_444(uParam0, &(uParam0->f_459));
	func_444(uParam0, &(uParam0->f_460));
	func_444(uParam0, &(uParam0->f_461));
	if (iParam1 == 1)
	{
		func_444(uParam0, &(uParam0->f_457));
	}
	func_444(uParam0, &(uParam0->f_462));
	func_444(uParam0, &(uParam0->f_464));
	if (bParam2)
	{
		func_445(uParam0);
	}
}

void func_211(var uParam0)
{
	func_446(uParam0);
}

void func_212(var uParam0)
{
	int iVar0;

	if (uParam0->f_1 != 5)
	{
		if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
		{
			func_447(uParam0);
			iVar0 = 0;
			while (iVar0 < 2)
			{
				func_448(uParam0, iVar0);
				iVar0++;
			}
			func_268(uParam0);
			UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(-1631983120);
			UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(uParam0->f_2));
		}
		func_269(uParam0, 5);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_6))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_6);
		uParam0->f_158--;
	}
}

void func_213(var uParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 == 0)
	{
		uParam0->f_246 = 0;
		uParam0->f_247 = 0;
	}
}

void func_214(var uParam0, var uParam1)
{
	if (!func_219(&(uParam0->f_1330)))
	{
		return;
	}
	if (uParam0->f_7.f_4 < 6 || uParam0->f_7.f_4 >= 14)
	{
		func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 0);
		if (uParam0->f_7.f_4 >= 14 && uParam1->f_405 == 2)
		{
			func_450(uParam1, &(uParam0->f_1330), uParam1->f_410.f_20);
		}
		func_445(uParam1);
		return;
	}
	if ((func_451(&(uParam0->f_1330), 19) || uParam0->f_1330.f_198 == 4) || func_220())
	{
		func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 0);
		func_445(uParam1);
		return;
	}
	if (!func_219(&(uParam0->f_1330)))
	{
		func_445(uParam1);
		return;
	}
	if (uParam1->f_348)
	{
		if (!func_208(uParam1->f_463))
		{
			func_452(uParam1, &(uParam1->f_463), "MGDOM_CTX_FREELOOK", joaat("INPUT_PC_FREE_LOOK"), 0, 3, 4000);
		}
	}
	else
	{
		func_444(uParam1, &(uParam1->f_463));
	}
	uParam1->f_406 = uParam1->f_405;
	switch (uParam1->f_405)
	{
		case 0:
			if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
			{
				func_454(uParam1, 1);
			}
			else if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
			{
				func_454(uParam1, 2);
			}
			break;
		case 1:
			if (uParam1->f_403)
			{
				if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
				{
					func_454(uParam1, 0);
				}
				else if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
				{
					func_454(uParam1, 2);
				}
			}
			else if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
			{
				func_454(uParam1, 2);
				func_456(uParam1->f_465, 14, 1, 1);
				func_456(uParam1->f_466, 14, 0, 1);
			}
			else if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
			{
				if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
				{
					func_454(uParam1, 0);
				}
				else
				{
					func_456(uParam1->f_465, 14, 1, 1);
					func_456(uParam1->f_466, 14, 0, 1);
					if (func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
					{
						func_454(uParam1, 2);
					}
				}
			}
			break;
		case 2:
			if (uParam1->f_403)
			{
				if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
				{
					func_454(uParam1, 1);
				}
				else if (func_455(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
				{
					func_454(uParam1, 0);
				}
			}
			else if (func_453(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
			{
				func_456(uParam1->f_465, 14, 0, 1);
				func_456(uParam1->f_466, 14, 1, 1);
				func_454(uParam1, 1);
			}
			else if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1))
			{
				if (!func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
				{
					func_454(uParam1, 0);
				}
				else
				{
					func_456(uParam1->f_465, 14, 0, 1);
					func_456(uParam1->f_466, 14, 1, 1);
					if (func_457(uParam1, joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1))
					{
						func_454(uParam1, 1);
					}
				}
			}
			break;
	}
	if (uParam1->f_406 != uParam1->f_405)
	{
		switch (uParam1->f_405)
		{
			case 0:
				func_450(uParam1, &(uParam0->f_1330), uParam1->f_410.f_20);
				func_456(uParam1->f_466, 14, 0, 1);
				func_456(uParam1->f_465, 14, 0, 1);
				break;
			case 1:
				func_458(uParam1, &(uParam0->f_1330));
				break;
			case 2:
				func_459(uParam1, &(uParam0->f_1330));
				break;
		}
	}
	switch (uParam1->f_405)
	{
		case 0:
			if (!func_208(uParam1->f_466))
			{
				func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 3, 4000);
				func_456(uParam1->f_466, 29, 1, 1);
			}
			if (!func_208(uParam1->f_465))
			{
				func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 3, 4000);
				func_456(uParam1->f_465, 29, 1, 1);
			}
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0) && (uParam1->f_410.f_20 && uParam1->f_261))
			{
				func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 1);
			}
			else
			{
				func_449(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]), 0);
			}
			uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/].f_18.f_4 = 0;
			if ((func_208(uParam1->f_465) && func_460(uParam1->f_465, 1)) && !((uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/].f_42 != -1 || func_461(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/]))) && CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0)))
			{
				func_462(uParam1->f_465, 1, 1);
			}
			break;
		case 1:
			if (!func_208(uParam1->f_466))
			{
				func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 3, 4000);
				func_456(uParam1->f_466, 29, 1, 1);
			}
			CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
			break;
		case 2:
			if (!func_208(uParam1->f_465))
			{
				func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 3, 4000);
				func_456(uParam1->f_465, 29, 1, 1);
			}
			func_463(uParam1);
			break;
	}
	if (uParam1->f_347 != uParam1->f_348)
	{
		func_444(uParam1, &(uParam1->f_465));
		func_444(uParam1, &(uParam1->f_466));
		if (uParam1->f_348)
		{
			func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 0, 4000);
			func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 0, 4000);
			func_456(uParam1->f_466, 29, 1, 1);
			func_456(uParam1->f_465, 29, 1, 1);
		}
		else
		{
			func_452(uParam1, &(uParam1->f_466), "MGDOM_CTX_TABLE", joaat("INPUT_MINIGAME_DOMINOES_VIEW_MOVES"), 1, 3, 4000);
			func_452(uParam1, &(uParam1->f_465), "MGDOM_CTX_DOMS", joaat("INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES"), 1, 3, 4000);
		}
	}
	if ((uParam1->f_406 != uParam1->f_405 || uParam1->f_404 != uParam1->f_403) || uParam1->f_347 != uParam1->f_348)
	{
		switch (uParam1->f_405)
		{
			case 0:
				func_464(uParam1->f_465, "MGDOM_CTX_DOMS", 1);
				func_464(uParam1->f_466, "MGDOM_CTX_TABLE", 1);
				break;
			case 1:
				func_464(uParam1->f_466, "MGDOM_CTX_TABLE", 1);
				if (uParam1->f_403)
				{
					func_464(uParam1->f_465, "MGDOM_CTX_VIEWRESET", 1);
				}
				else
				{
					func_464(uParam1->f_465, "MGDOM_CTX_DOMS", 1);
				}
				break;
			case 2:
				func_464(uParam1->f_465, "MGDOM_CTX_DOMS", 1);
				if (uParam1->f_403)
				{
					func_464(uParam1->f_466, "MGDOM_CTX_VIEWRESET", 1);
				}
				else
				{
					func_464(uParam1->f_466, "MGDOM_CTX_TABLE", 1);
				}
				break;
		}
	}
}

void func_215(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar1 = 0;
	bVar2 = func_465(uParam1);
	if (bVar2)
	{
		if (uParam0->f_366 < 44)
		{
			uParam0->f_366 = 44;
		}
	}
	else
	{
		uParam0->f_366 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_384[iVar0]))
		{
			iVar1 = ENTITY::GET_ENTITY_ALPHA(uParam0->f_384[iVar0]);
			if (uParam0->f_391[iVar0] != uParam0->f_338)
			{
				iVar1 -= ((uParam0->f_367 - uParam0->f_366) / uParam0->f_368);
				if (iVar1 < uParam0->f_366)
				{
					iVar1 = uParam0->f_366;
				}
			}
			else
			{
				iVar1 += ((uParam0->f_367 - uParam0->f_366) / uParam0->f_368);
				if (iVar1 > uParam0->f_367)
				{
					iVar1 = uParam0->f_367;
				}
			}
			if (uParam0->f_391[iVar0] == uParam0->f_338)
			{
				func_466(uParam0, uParam1, iVar0, 3);
			}
			else
			{
				func_467(uParam0, iVar0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_384[iVar0]))
			{
				ENTITY::SET_ENTITY_ALPHA(uParam0->f_384[iVar0], iVar1, uParam0->f_369);
			}
		}
		iVar0++;
	}
}

void func_216(var uParam0, var uParam1)
{
	if (uParam1->f_198 >= 1 && uParam1->f_198 < 4)
	{
		if (uParam0->f_409 == 0)
		{
			func_468(uParam0, uParam1);
			func_450(uParam0, uParam1, uParam0->f_410.f_20);
		}
	}
	else if (uParam1->f_198 == 4)
	{
		func_71(uParam0);
	}
}

bool func_217(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1:
			func_269(uParam0, 2);
			break;
		case 2:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				func_269(uParam0, 3);
			}
			break;
		case 3:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_2, uParam0->f_3);
				UISTATEMACHINE::UI_STATE_MACHINE_CREATE(-1631983120, uParam0->f_2);
				func_269(uParam0, 4);
			}
			break;
		case 4:
			if (MISC::GET_FRAME_COUNT() > uParam0->f_155 && uParam0->f_156 != -1)
			{
				func_398(uParam0, -1);
			}
			break;
	}
	return uParam0->f_1 == 4;
}

bool func_218(var uParam0, int iParam1)
{
	if (uParam0->f_4 == 1)
	{
		return true;
	}
	if (uParam0->f_2 == 0 || func_18(iParam1, 2))
	{
		if (func_208(*uParam0))
		{
			func_265(uParam0, 1, 1);
		}
		return false;
	}
	Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
	if (PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_QUIT")))
	{
		PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
	}
	if (!func_208(*uParam0))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_QUIT")) || uParam0->f_5)
		{
			*uParam0 = func_469("MG_LEAVE2", joaat("INPUT_MINIGAME_QUIT"), 2, 0, 0, 5, 570, 4000, 10, (1 << 30), joaat("MEDIUM_TIMED_EVENT"), 0);
			func_470(*uParam0, joaat("INPUT_FRONTEND_PAUSE"));
			HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[*uParam0 /*18*/].f_3, 10, true);
			uParam0->f_3 = 1;
		}
	}
	uParam0->f_1 = func_471(*uParam0, 1);
	if (func_208(*uParam0))
	{
		if (func_472(*uParam0, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("YES", "HUD_DOMINOS_SOUNDSET", true, 0);
			if (func_208(*uParam0))
			{
				func_265(uParam0, 1, 1);
			}
			uParam0->f_4 = 1;
			return true;
		}
		if (uParam0->f_1 == 0.0f)
		{
			if (!PAD::IS_CONTROL_PRESSED(2, joaat("INPUT_MINIGAME_QUIT")))
			{
				if (func_208(*uParam0) && uParam0->f_5 == 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("NO", "HUD_DOMINOS_SOUNDSET", true, 0);
					func_265(uParam0, 1, 1);
				}
				uParam0->f_3 = 0;
				return false;
			}
		}
	}
	return false;
}

bool func_219(var uParam0)
{
	return func_204(uParam0, uParam0->f_194);
}

bool func_220()
{
	return Global_1898068;
}

void func_221(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (func_474(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
					{
						func_473(uParam1);
					}
				}
				iVar0++;
			}
			break;
		case 2:
			if (!func_208(uParam1->f_456))
			{
				func_452(uParam1, &(uParam1->f_456), "MGDOM_CTX_SKIP", joaat("INPUT_MINIGAME_DOMINOES_SKIP_DEAL"), 0, 0, 4000);
			}
			if (func_475(uParam1->f_456, 1))
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_204(&(uParam0->f_1330), iVar0))
					{
						if (func_474(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
						{
							uParam0->f_1330.f_199[iVar0 /*124*/].f_8 = 1;
						}
					}
					iVar0++;
				}
				func_473(uParam1);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (func_204(&(uParam0->f_1330), iVar0))
				{
					if (func_474(&(uParam0->f_1330.f_199[iVar0 /*124*/])))
					{
						return;
					}
				}
				iVar0++;
			}
			func_473(uParam1);
			break;
		case 3:
			func_444(uParam1, &(uParam1->f_456));
			func_473(uParam1);
			break;
	}
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 10000;
	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_379(uParam1);
				func_476(uParam1);
				func_477(&(uParam1->f_1));
				func_473(uParam1);
				iVar1 = 0;
				while (iVar1 < 4)
				{
					func_478(uParam1, iVar1);
					iVar1++;
				}
			}
			break;
		case 1:
		case 2:
			func_473(uParam1);
			break;
		case 3:
			if (func_195(&(uParam2->f_14)) > 1 && func_479(&(uParam0->f_1330)) > 1)
			{
				func_191(uParam1);
				if (uParam2->f_666.f_6 == 0)
				{
					func_403("MGDOM_HLP_BUYINF", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_403("MGDOM_HLP_BUYIN", 10000, 0, 0, 0, 1);
				}
				func_473(uParam1);
				PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_QUIT"), false);
				func_452(uParam1, &(uParam1->f_455), "MG_QUIT", joaat("INPUT_GAME_MENU_CANCEL"), 0, 0, 4000);
			}
			break;
		case 4:
			if (func_480(1) >= uParam2->f_666.f_6)
			{
				if (func_32() != -1)
				{
					iVar0 = (uParam2->f_14.f_2 - uParam2->f_694);
					iVar0 = func_481(iVar0, 0, 30);
					iVar0 *= 1000;
				}
				if (uParam2->f_666.f_6 > 0)
				{
					func_482(uParam1, &(uParam1->f_462), "MGDOM_BUY_IN", uParam2->f_666.f_6, joaat("INPUT_MINIGAME_REPLAY"), 0, 1, iVar0);
				}
				else
				{
					func_482(uParam1, &(uParam1->f_462), "MG_PLAY_AGAIN", uParam2->f_666.f_6, joaat("INPUT_MINIGAME_REPLAY"), 0, 1, iVar0);
				}
			}
			func_473(uParam1);
			break;
		case 5:
			if (uParam2->f_666.f_6 > 0)
			{
				func_393(&(uParam1->f_1), 0, MISC::VAR_STRING(2, "MGDOM_YOURMONEY"));
				func_394(&(uParam1->f_1), 0, MISC::VAR_STRING(2, "MGDOM_CASH", func_480(1)));
			}
			if (func_483(uParam1->f_462, 1))
			{
				func_231(uParam1, 10);
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_484(uParam2, uParam1, 1);
				func_194(uParam1, "MG_BUYIN_EXPIRED", 0, 10000);
				func_230(&(uParam0->f_1330));
				func_473(uParam1);
				return;
			}
			if (func_485(uParam1->f_462, 1) || *uParam2)
			{
				func_379(uParam1);
				func_476(uParam1);
				func_231(uParam1, 8);
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_230(&(uParam0->f_1330));
				func_473(uParam1);
				return;
			}
			if (func_475(uParam1->f_455, 1))
			{
				func_231(uParam1, 10);
				func_484(uParam2, uParam1, 2);
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_230(&(uParam0->f_1330));
				func_473(uParam1);
				return;
			}
			break;
	}
}

void func_223(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				func_379(uParam1);
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
			}
			break;
		case 1:
			if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				if (uParam1->f_235 != -1)
				{
					if (uParam2->f_666.f_6 == 0)
					{
						func_194(uParam1, MISC::VAR_STRING(10, "MGDOM_HLP_WINGAMEF", func_193(uParam1, uParam1->f_235)), 0, 10000);
					}
					else if (func_480(1) >= uParam2->f_666.f_6)
					{
						func_194(uParam1, MISC::VAR_STRING(10, "MGDOM_HLP_WINGAMEA", func_193(uParam1, uParam1->f_235), uParam1->f_237), 0, 10000);
					}
					else
					{
						func_194(uParam1, MISC::VAR_STRING(10, "MGDOM_HLP_WINGAMEC", func_193(uParam1, uParam1->f_235), uParam1->f_237), 0, 10000);
					}
				}
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						if (uParam1->f_235 == iVar0)
						{
							func_389(uParam1, iVar0, MISC::VAR_STRING(2, "MGDOM_WINNER"));
						}
						else
						{
							func_389(uParam1, iVar0, MISC::VAR_STRING(2, "MGDOM_LOSER"));
						}
					}
					iVar0++;
				}
				func_388(uParam1, uParam1->f_235);
				func_473(uParam1);
			}
			break;
		case 2:
			if (!func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				if (uParam1->f_235 != -1)
				{
					if (func_486(&(uParam0->f_1330), &iVar1, uParam1->f_235))
					{
						func_442(&(uParam0->f_1330), 53, uParam1->f_235, iVar1);
					}
				}
				func_473(uParam1);
			}
			break;
		case 3:
			func_452(uParam1, &(uParam1->f_457), "MGDOM_CTX_SKIP", joaat("INPUT_MINIGAME_REPLAY"), 0, 1, 5000);
			if ((func_485(uParam1->f_457, 1) || func_483(uParam1->f_457, 1)) || *uParam2)
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 4);
				func_210(uParam1, 1, 1);
				func_473(uParam1);
			}
			break;
	}
}

void func_224(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				iVar0 = 0;
				while (iVar0 < 4)
				{
					func_487(uParam1, iVar0);
					func_488(uParam1, iVar0, uParam2->f_666.f_3);
					func_489(&(uParam0->f_1330), iVar0, uParam1->f_235);
					iVar0++;
				}
			}
			break;
		case 1:
			if (uParam1->f_235 == -1)
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_WINROUNDT"), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_379(uParam1);
				func_360(uParam1, 4);
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				func_191(uParam1);
				func_379(uParam1);
				func_210(uParam1, 1, 1);
				func_194(uParam1, MISC::VAR_STRING(10, "MGDOM_HLP_WINROUND", func_193(uParam1, uParam1->f_235)), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_473(uParam1);
			}
			break;
		case 2:
			if (uParam1->f_235 == -1)
			{
				if (func_368(&(uParam1->f_160)) < 3.0f)
				{
					return;
				}
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				return;
			}
			func_191(uParam1);
			if (uParam2->f_666.f_3 == -1234859967)
			{
				func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 5), 0, 10000);
			}
			else if (uParam2->f_666.f_3 == -382896522)
			{
				func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 3), 0, 10000);
			}
			else
			{
				func_194(uParam1, "MGDOM_HLP_REMAINTILES", 0, 10000);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
				{
					func_389(uParam1, iVar0, MISC::VAR_STRING(2, "MGDOM_CNTTILES"));
				}
				iVar0++;
			}
			func_490(uParam1, uParam1->f_235);
			func_473(uParam1);
			break;
		case 3:
			if (func_491(uParam1->f_456, 1))
			{
				func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 1);
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				return;
			}
			if (func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 0))
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
		case 4:
			if (func_368(&(uParam1->f_160)) > 1.0f)
			{
				iVar1 = 0;
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						if (iVar0 != uParam1->f_235)
						{
							iVar1 += func_493(uParam1, iVar0, uParam2->f_666.f_3);
							func_188(uParam1, iVar0, uParam1->f_166[iVar0]);
							func_389(uParam1, iVar0, MISC::VAR_STRING(2, "MGDOM_MSGWAITTURN"));
						}
					}
					iVar0++;
				}
				func_191(uParam1);
				if (iVar1 == 0 || uParam1->f_235 == -1)
				{
					func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_BONUS0"), 0, 10000);
				}
				else if (iVar1 == 1)
				{
					func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_BONUS1"), 0, 10000);
				}
				else
				{
					func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_BONUS", iVar1), 0, 10000);
				}
				if (uParam1->f_235 != -1)
				{
					func_494(uParam1, uParam1->f_235, iVar1);
					func_188(uParam1, uParam1->f_235, (uParam1->f_166[uParam1->f_235] + iVar1));
				}
				func_473(uParam1);
			}
			break;
		case 5:
			if (func_368(&(uParam1->f_160)) < 1.5f)
			{
				return;
			}
			if (!func_149(&(uParam2->f_14), uParam0->f_1330.f_194))
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 6);
				func_444(uParam1, &(uParam1->f_457));
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				return;
			}
			if (uParam1->f_235 != -1)
			{
				if (uParam1->f_166[uParam1->f_235] >= uParam2->f_666.f_14[0])
				{
					if (func_368(&(uParam1->f_160)) > 1.5f)
					{
						func_230(&(uParam0->f_1330));
						func_231(uParam1, 6);
						func_444(uParam1, &(uParam1->f_457));
						func_473(uParam1);
						func_210(uParam1, 1, 1);
						return;
					}
				}
			}
			func_452(uParam1, &(uParam1->f_457), "MGDOM_CTX_NXTRND", joaat("INPUT_MINIGAME_REPLAY"), 0, 1, 5000);
			if ((func_485(uParam1->f_457, 1) || func_483(uParam1->f_457, 1)) || *uParam2)
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 6);
				func_444(uParam1, &(uParam1->f_457));
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
	}
}

void func_225(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	switch (uParam1->f_163)
	{
		case 0:
			if (uParam2->f_2 == 1)
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				iVar0 = 0;
				while (iVar0 < 4)
				{
					func_487(uParam1, iVar0);
					func_488(uParam1, iVar0, uParam2->f_666.f_3);
					func_489(&(uParam0->f_1330), iVar0, uParam1->f_235);
					iVar0++;
				}
			}
			break;
		case 1:
			if (uParam1->f_235 == -1)
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_ALLPASSD"), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_379(uParam1);
				func_473(uParam1);
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				func_191(uParam1);
				func_210(uParam1, 1, 1);
				func_379(uParam1);
				func_194(uParam1, MISC::VAR_STRING(10, "MGDOM_HLP_ALLPASS", func_193(uParam1, uParam1->f_235)), 0, 10000);
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
					{
						func_190(uParam1, iVar0, uParam1->f_204[iVar0 /*7*/].f_6);
					}
					iVar0++;
				}
				func_473(uParam1);
			}
			break;
		case 2:
			if (uParam1->f_235 == -1)
			{
				if (func_368(&(uParam1->f_160)) < 3.0f)
				{
					return;
				}
			}
			else if (func_386(&(uParam0->f_1330.f_199[uParam1->f_235 /*124*/]), 17))
			{
				return;
			}
			func_473(uParam1);
			func_191(uParam1);
			if (uParam2->f_666.f_3 == -1234859967)
			{
				func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 5), 0, 10000);
			}
			else if (uParam2->f_666.f_3 == -382896522)
			{
				func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_REMAINTILES2", 3), 0, 10000);
			}
			else
			{
				func_194(uParam1, "MGDOM_HLP_REMAINTILES", 0, 10000);
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
				{
					func_389(uParam1, iVar0, MISC::VAR_STRING(2, "MGDOM_CNTTILES"));
				}
				iVar0++;
			}
			func_490(uParam1, uParam0->f_1330.f_194);
			break;
		case 3:
			if (func_491(uParam1->f_456, 1))
			{
				func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 1);
				func_473(uParam1);
				func_210(uParam1, 1, 1);
				return;
			}
			if (func_492(uParam1, uParam2, &(uParam0->f_1330), uParam0->f_1330.f_194, 1, 0))
			{
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
		case 4:
			if (func_368(&(uParam1->f_160)) > 1.0f)
			{
				if (uParam1->f_235 != -1)
				{
					iVar1 = 0;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						if (MISC::IS_BIT_SET(uParam1->f_236, iVar0))
						{
							if (iVar0 != uParam1->f_235)
							{
								iVar1 += func_493(uParam1, iVar0, uParam2->f_666.f_3);
								func_188(uParam1, iVar0, uParam1->f_166[iVar0]);
								func_389(uParam1, iVar0, MISC::VAR_STRING(2, "MGDOM_MSGWAITTURN"));
							}
						}
						iVar0++;
					}
					func_191(uParam1);
					if (iVar1 == 1)
					{
						func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_BONUS1"), 0, 10000);
					}
					else if (iVar1 == 0)
					{
						func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_BONUS0"), 0, 10000);
					}
					else
					{
						func_194(uParam1, MISC::VAR_STRING(2, "MGDOM_HLP_BONUS", iVar1), 0, 10000);
					}
					func_494(uParam1, uParam1->f_235, iVar1);
					func_188(uParam1, uParam1->f_235, (uParam1->f_166[uParam1->f_235] + iVar1));
				}
				func_473(uParam1);
			}
			break;
		case 5:
			if (uParam1->f_235 != -1)
			{
				if (uParam1->f_166[uParam1->f_235] >= uParam2->f_666.f_14[0])
				{
					if (func_368(&(uParam1->f_160)) > 1.5f)
					{
						func_230(&(uParam0->f_1330));
						func_231(uParam1, 6);
						func_444(uParam1, &(uParam1->f_457));
						func_473(uParam1);
						func_210(uParam1, 1, 1);
						return;
					}
				}
			}
			func_452(uParam1, &(uParam1->f_457), "MGDOM_CTX_NXTRND", joaat("INPUT_MINIGAME_REPLAY"), 0, 1, 5000);
			if ((func_485(uParam1->f_457, 1) || func_483(uParam1->f_457, 1)) || *uParam2)
			{
				func_230(&(uParam0->f_1330));
				func_231(uParam1, 6);
				func_444(uParam1, &(uParam1->f_457));
				func_473(uParam1);
				func_210(uParam1, 1, 1);
			}
			break;
	}
}

void func_226(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = uParam1->f_234;
	iVar3 = func_372(uParam0->f_1330.f_194);
	switch (uParam1->f_233)
	{
		case 0:
			func_185(uParam1, uParam2);
			func_231(uParam1, 0);
			func_232(&(uParam0->f_1330), 1);
			func_446(&(uParam0->f_2334));
			func_210(uParam1, 0, 0);
			uParam1->f_342 = -1;
			uParam1->f_343 = -1;
			uParam1->f_344 = 0;
			uParam1->f_251 = 0;
			if (iVar2 == uParam0->f_1330.f_194)
			{
				uParam1->f_259 = -1;
				uParam1->f_410.f_20 = 1;
				uParam1->f_261 = 0;
				func_127(uParam1);
				func_389(uParam1, uParam0->f_1330.f_194, MISC::VAR_STRING(2, "MGDOM_MSGYOURTURN"));
				func_495(uParam1, uParam2, uParam0->f_1330.f_194);
			}
			else
			{
				if (iVar2 != -1)
				{
					func_389(uParam1, iVar2, MISC::VAR_STRING(10, "MGDOM_MSGTURN", func_193(uParam1, iVar2)));
				}
				uParam1->f_410.f_20 = 0;
				CAM::_0x1D9F72DD4FD9A9D7(&(uParam1->f_410));
				func_198(uParam1, 5);
				return;
			}
			CAM::_0x1D9F72DD4FD9A9D7(&(uParam1->f_410));
			func_198(uParam1, 1);
			break;
		case 1:
			if (iVar2 != uParam0->f_1330.f_194)
			{
				return;
			}
			if (func_496(uParam2))
			{
				return;
			}
			if (uParam1->f_261 == 0)
			{
				return;
			}
			func_126(uParam1);
			func_198(uParam1, 2);
			break;
		case 2:
			if (func_497(&(uParam0->f_1330), iVar3, -1, &iVar0))
			{
				uParam1->f_343 = iVar0;
				uParam1->f_340 = uParam0->f_1330.f_746[iVar0 /*8*/].f_4;
				uParam1->f_339 = uParam0->f_1330.f_746[iVar0 /*8*/].f_5;
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				func_498(&(uParam0->f_1330), &(uParam0->f_1330.f_746[iVar0 /*8*/]), 3);
				uParam1->f_260 = func_499(&(uParam1->f_262), uParam1->f_339);
				uParam1->f_344 = uParam1->f_260 > 0;
			}
			func_246(&(uParam1->f_253));
			uParam1->f_258 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10.0f, 20.0f);
			func_500(uParam1, uParam0->f_1330.f_194, 0);
			func_198(uParam1, 3);
			if (uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/].f_47 == 10)
			{
				func_191(uParam1);
				func_444(uParam1, &(uParam1->f_459));
				func_232(&(uParam0->f_1330), 1);
				func_446(&(uParam0->f_2334));
				func_211(uParam1);
				func_501(uParam1, &(uParam0->f_1330), uParam2);
				func_502(uParam1, 1);
				uParam1->f_339 = (uParam1->f_204[uParam0->f_1330.f_194 /*7*/].f_6 - 1);
				if (!func_503(&(uParam1->f_262), uParam1->f_339, &(uParam1->f_338), -1))
				{
				}
				if (func_504(&(uParam0->f_1330), iVar3, uParam1->f_339, &iVar0))
				{
					uParam1->f_343 = iVar0;
				}
			}
			else
			{
				func_502(uParam1, 0);
			}
			break;
		case 3:
			if (func_32() != -1)
			{
				iVar0 = func_505(uParam1);
				func_500(uParam1, uParam0->f_1330.f_194, iVar0);
				if (iVar0 == 100)
				{
					if (uParam1->f_338 >= uParam1->f_259 || uParam1->f_338 < 0)
					{
						uParam1->f_338 = 0;
					}
					if (func_506(uParam1, &(uParam0->f_1330), uParam2))
					{
						return;
					}
				}
			}
			else if (*uParam2)
			{
				if (uParam1->f_338 >= uParam1->f_259 || uParam1->f_338 < 0)
				{
					uParam1->f_338 = 0;
				}
				if (func_506(uParam1, &(uParam0->f_1330), uParam2))
				{
					return;
				}
			}
			uParam1->f_258 -= MISC::GET_FRAME_TIME();
			if (uParam1->f_258 < 0.0f)
			{
				iVar0 = ((uParam0->f_1330.f_194 + MISC::GET_RANDOM_INT_IN_RANGE(0, 4)) % 4);
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (func_204(&(uParam0->f_1330), iVar0) && iVar0 != uParam0->f_1330.f_194)
					{
						func_442(&(uParam0->f_1330), 52, iVar0, uParam0->f_1330.f_194);
						iVar1 = 10000;
					}
					iVar0 += 1 % 4;
					iVar1++;
				}
				uParam1->f_258 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10.0f, 20.0f);
			}
			func_507(uParam0, uParam1);
			if (!uParam1->f_345)
			{
				func_508(uParam0, uParam1, uParam2);
			}
			else
			{
				func_509(uParam0, uParam1, uParam2);
			}
			break;
		case 4:
			if (MISC::IS_BIT_SET(uParam2->f_1322, 3))
			{
				func_191(uParam1);
				func_192(uParam1, 17, 0, 3333);
				func_198(uParam1, 3);
			}
			else if (MISC::IS_BIT_SET(uParam2->f_1321, 3))
			{
				func_510(uParam1);
			}
			break;
	}
}

bool func_227(var uParam0)
{
	return (uParam0->f_4 == 1 && uParam0->f_2 == 1);
}

void func_228(var uParam0, int iParam1)
{
	func_124(uParam0);
	uParam0->f_2 = iParam1;
}

int func_229(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_1321), iParam1);
	MISC::CLEAR_BIT(&(uParam0->f_1322), iParam1);
	switch (iParam1)
	{
		case 1:
			if (MINIGAME::_DOMINOES_BUY_IN(&(uParam0->f_1300[iParam1 /*4*/])))
			{
				return 1;
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1322), iParam1);
			}
			break;
		case 4:
			if (MINIGAME::_DOMINOES_REQUEST_VALID_PLACEMENTS(&(uParam0->f_1300[iParam1 /*4*/])))
			{
				return 1;
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1322), iParam1);
			}
			break;
		case 0:
			if (MINIGAME::_MINIGAME_LEAVE_TABLE(&(uParam0->f_1300[iParam1 /*4*/])))
			{
				return 1;
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1322), iParam1);
			}
			break;
	}
	return 0;
}

void func_230(var uParam0)
{
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_996))
	{
		GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(uParam0->f_996);
	}
}

void func_231(var uParam0, int iParam1)
{
	if (uParam0->f_165 != iParam1)
	{
	}
	uParam0->f_165 = iParam1;
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_746[iVar0 /*8*/].f_1))
		{
			if (uParam0->f_746[iVar0 /*8*/].f_6)
			{
				GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(uParam0->f_746[iVar0 /*8*/].f_1);
				uParam0->f_746[iVar0 /*8*/].f_6 = 0;
			}
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
		{
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(uParam0->f_995);
		}
	}
}

bool func_233(var uParam0)
{
	if (!uParam0->f_3)
	{
		return false;
	}
	if (uParam0->f_42 == -1)
	{
		return false;
	}
	return func_511(uParam0);
}

int func_234(var uParam0, int iParam1, int iParam2)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 7;
	func_289(&sVar0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

void func_235(var uParam0)
{
	int iVar0;

	uParam0->f_46 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		func_258(&(uParam0->f_48[iVar0 /*15*/]));
		iVar0++;
	}
}

bool func_236(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		if (uParam0->f_48[iVar0 /*15*/] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_237(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_271(vParam0))
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
			if (func_512(vVar2, vParam0, 2.0f, 1))
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

void func_238(var uParam0, int iParam1, int iParam2)
{
	char cVar0[32];
	int iVar4;

	strcpy_s(&cVar0, 32, "*** INVALID ***");
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iParam1 /*124*/].f_12))
	{
	}
	func_513(&Global_1899750, uParam0->f_199[iParam1 /*124*/].f_12);
	func_514(uParam0, iParam1);
	if (uParam0->f_199[iParam1 /*124*/].f_12 == PLAYER::PLAYER_PED_ID())
	{
		uParam0->f_194 = 4;
		func_515(uParam0->f_199[iParam1 /*124*/].f_12, joaat("MPC_HIDE_ACTION_GLOVES"), 0);
	}
	if (uParam0->f_199[iParam1 /*124*/].f_13 != 255)
	{
		strcpy_s(&cVar0, 32, PLAYER::GET_PLAYER_NAME(uParam0->f_199[iParam1 /*124*/].f_13));
	}
	if (PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
	}
	if (uParam0->f_199[iParam1 /*124*/].f_2)
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_199[iParam1 /*124*/].f_12, true, true);
		NETWORK::_0x02C4C6C2900D84DF(uParam0->f_199[iParam1 /*124*/].f_13, 0);
	}
	if (func_138(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		iVar4 = func_145(uParam0->f_199[iParam1 /*124*/].f_12);
		func_295(iVar4, 56, 1);
		if (func_281(iVar4))
		{
			func_296(iVar4, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		}
		func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
		return;
	}
	if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		func_516(uParam0, &(uParam0->f_199[iParam1 /*124*/]), 1090519040);
	}
	if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_199[iParam1 /*124*/].f_12, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 231 /*PCF_0xD021799A*/, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_199[iParam1 /*124*/].f_12, 113 /*PCF_DisableShockingEvents*/, false);
	}
	PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(uParam0->f_199[iParam1 /*124*/].f_12);
	if (uParam0->f_199[iParam1 /*124*/].f_1)
	{
		PED::DELETE_PED(&(uParam0->f_199[iParam1 /*124*/].f_12));
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12) && !func_138(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						PED::DELETE_PED(&(uParam0->f_199[iParam1 /*124*/].f_12));
					}
				}
				break;
			case 2:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						func_517(&(uParam0->f_199[iParam1 /*124*/].f_12), 0, 0, 1);
					}
				}
				break;
			case 3:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					PED::SET_PED_KEEP_TASK(uParam0->f_199[iParam1 /*124*/].f_12, true);
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						func_517(&(uParam0->f_199[iParam1 /*124*/].f_12), 1, 0, 1);
					}
				}
				break;
			case 4:
				if (!PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
				{
					if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_199[iParam1 /*124*/].f_12, true))
					{
						func_517(&(uParam0->f_199[iParam1 /*124*/].f_12), 1, 0, 1);
					}
				}
				break;
		}
	}
	func_118(&(uParam0->f_199[iParam1 /*124*/]), iParam1);
}

void func_239(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_281(iVar0))
		{
			func_296(iVar0, iParam1, bParam2, bParam0, -1082130432, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_240(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_746[iVar0 /*8*/].f_1))
		{
			if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iVar0 /*8*/].f_1, 1))
			{
				TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iVar0 /*8*/].f_1, 0, false);
			}
			func_518(uParam0->f_746[iVar0 /*8*/].f_1, 1, 1);
			if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_746[iVar0 /*8*/].f_1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar0 /*8*/].f_1, false);
			}
			if (bParam1 == 0)
			{
				func_279(&(uParam0->f_746[iVar0 /*8*/]), bParam1);
			}
			else
			{
				func_279(&(uParam0->f_746[iVar0 /*8*/]), bParam1);
			}
			uParam0->f_746[iVar0 /*8*/].f_1 = 0;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_971)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_971[iVar0]))
		{
			func_518(uParam0->f_746[iVar0 /*8*/].f_1, 1, 1);
			if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_971[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_971[iVar0], false);
			}
			if (bParam1 == 0)
			{
				func_519(&(uParam0->f_971[iVar0]), 1, 1);
			}
			else
			{
				func_266(&(uParam0->f_971[iVar0]));
			}
			uParam0->f_971[iVar0] = 0;
		}
		iVar0++;
	}
}

void func_241(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_743))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_743);
		uParam0->f_743 = -1;
	}
}

void func_242(var uParam0)
{
	if (uParam0->f_742 != -1)
	{
		ANIMSCENE::_DELETE_MGM_SYSTEM(uParam0->f_742);
		uParam0->f_742 = -1;
	}
}

void func_243(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_96(0, iParam0));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_96(28, iParam0));
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_96(iVar0, iParam0));
		iVar0++;
	}
}

void func_244()
{
	STREAMING::REMOVE_MOVE_NETWORK_DEF("SCRIPT_MINI_GAME_DOMINOES");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REMOVE_ANIM_DICT("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
	STREAMING::REMOVE_CLIP_SET("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
}

bool func_245(var uParam0)
{
	return func_520(*uParam0, 1);
}

void func_246(var uParam0)
{
	func_521(uParam0, 0.0f);
}

char* func_247(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR";
		case 0:
			return "MGBLK";
		case 1:
			return "MGDOM";
		case 3:
			return "MGFFF";
		case 4:
			return "MGMLK";
		case 5:
			return "MGCLS";
		case 6:
			return "MGFNC";
		default:
			break;
	}
	return "";
}

bool func_248()
{
	return Global_1899528.f_2 == 1;
}

void func_249(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_35(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_522(iParam0) && !func_523(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_524(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_522(iParam0))
	{
		iParam2 = -1;
	}
	if (func_525(iParam0) == 3 || (func_525(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_524(iParam0))))
	{
		func_526(func_36(iParam0), func_524(iParam0), iParam2);
		if ((!func_35(Global_1572864.f_8) && !func_527(0, 1, 0)) && !func_528(Global_1935630, (1 << 15)))
		{
			iVar0 = func_529(iParam0);
			if (iVar0 != -1)
			{
				func_253(0);
			}
			else if (func_36(iParam0) == 8)
			{
				iVar0 = func_530();
				if (iVar0 != -1)
				{
					func_253(0);
				}
			}
		}
	}
	func_531(iParam0, 0);
	if (func_34(0) == iParam0)
	{
		func_38(1);
		func_532(0);
		func_533(1);
	}
	func_534(iParam0, 1);
	func_535(iParam0);
}

void func_250(int iParam0, bool bParam1)
{
	if (!func_35(iParam0))
	{
		return;
	}
	if (!func_536(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_524(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_524(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_36(iParam0), func_537(iParam0), func_538(iParam0), func_524(iParam0), Global_36);
		}
	}
	func_531(iParam0, 1);
	bParam1 = bParam1;
}

void func_251(int iParam0, Vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar1 = func_539(iParam0, iParam4);
	iVar0 = func_540(iParam4, iVar1, vParam1);
	if (iVar0 != -1)
	{
		func_541(iParam4, iVar1, vParam1, 0);
	}
}

void func_252(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

void func_253(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_32() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_542(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_543();
		Global_1898077.f_9 = func_544(Global_1894899.f_2);
		func_545(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_254(int iParam0, int iParam1)
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

bool func_255(int iParam0, var uParam1, int iParam2)
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

int func_256(int iParam0, int iParam1)
{
	return func_547(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_546(iParam1)));
}

int func_257(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return (func_548(iParam0) & 65535);
}

void func_258(int iParam0)
{
	int iVar0;

	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_1)
	{
		func_289(iParam0, iVar0, 0);
		iVar0++;
	}
}

bool func_259(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Vector3 vVar0;
	float fVar3;
	var uVar4;

	if (!func_549(iParam0))
	{
		return false;
	}
	if (!func_550(iParam0, iParam5, &vVar0))
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
	if (!func_551(iParam0, iParam5, &fVar3))
	{
		return false;
	}
	*iParam7 = (fParam4 + fVar3);
	if (*iParam7 > 360.0f)
	{
		*iParam7 -= 360.0f;
	}
	if (*iParam7 < -360.0f)
	{
		*iParam7 += 360.0f;
	}
	return true;
}

int func_260(int iParam0, Vector3 vParam1, float fParam4, int iParam5, var uParam6, int iParam7)
{
	Vector3 vVar0;
	var uVar3;

	if (!func_549(iParam0))
	{
		return 0;
	}
	if (!func_550(iParam0, iParam5, &vVar0))
	{
		return 0;
	}
	*uParam6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, vVar0) /*3*/ };
	if (iParam7 == 1)
	{
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(*uParam6 + Vector(0.1f, 0.0f, 0.0f), &uVar3, false))
		{
			uParam6->f_2 = uVar3;
		}
	}
	return 1;
}

void func_261(int iParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*iParam0))
	{
		*iParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, func_274());
	}
}

bool func_262(int iParam0, int iParam1)
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

void func_263(var uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, true, false) /*3*/ };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, 2) /*3*/ };
		iVar6 = func_552(iParam2, uParam0->f_6);
		if (ENTITY::GET_ENTITY_MODEL(uParam0->f_746[iParam1 /*8*/].f_1) != iVar6)
		{
			func_266(&(uParam0->f_746[iParam1 /*8*/].f_1));
			uParam0->f_746[iParam1 /*8*/].f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar6, vVar0, false, true, false, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, vVar3, 2, true);
		}
	}
	uParam0->f_746[iParam1 /*8*/].f_3 = iParam2;
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	func_553(uParam0, iParam1, iParam3, iParam4, iParam5);
	uParam0->f_746[iParam1 /*8*/].f_3 = iParam2;
}

void func_265(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_208(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_554(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_555(iVar0);
	*uParam0 = 0;
}

void func_266(int* iParam0)
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

void func_267(var uParam0, int iParam1)
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

void func_268(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		DATABINDING::_0x6318FB3BE37E11B3(uParam0->f_16, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_16);
}

void func_269(var uParam0, int iParam1)
{
	if (uParam0->f_1 != iParam1)
	{
	}
	uParam0->f_1 = iParam1;
}

void func_270(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6)
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
		while (iVar0 < uParam1->f_30)
		{
			strcpy_s(&cVar1, 8, "");
			StringIntConCat(&cVar1, iVar0, 8);
			iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iVar4, &cVar1);
			uParam1->f_30[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureName", "");
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_13, iVar0, "single_game_token", iVar5);
			iVar0++;
		}
	}
	MISC::SET_BIT(&(uParam0->f_157), iParam2);
	*uParam1 = 1;
}

bool func_271(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_272(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_273(int iParam0, bool bParam1)
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

char* func_274()
{
	return "unnamed";
}

Vector3 func_275(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 0.0f, 0.382f, fLocal_14 };
		case 1:
			return { 0.0f, -0.382f, fLocal_14 };
		case 2:
			return { 0.382f, 0.0f, fLocal_14 };
		case 3:
			return { -0.382f, 0.0f, fLocal_14 };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_276(var uParam0, Vector3 vParam1, var uParam4)
{
	*uParam4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam0, uParam0->f_3, vParam1) /*3*/ };
	return 1;
}

int func_277(var uParam0, int iParam1, var uParam2)
{
	float fVar0;

	if (!func_551(1, iParam1, &fVar0))
	{
		return 0;
	}
	*uParam2 = { Vector(uParam0->f_3, 0.0f, 0.0f) + Vector(fVar0, 0.0f, 0.0f) /*3*/ };
	return 1;
}

void func_278(var uParam0, Vector3 vParam1, Vector3 vParam4, Vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_279(var uParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		if (uParam0->f_6)
		{
			GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(uParam0->f_1);
			uParam0->f_6 = 0;
		}
	}
	if (bParam1 == 0)
	{
		func_519(&(uParam0->f_1), 1, 1);
	}
	else
	{
		func_266(&(uParam0->f_1));
	}
}

bool func_280(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_199)
	{
		iVar1 = func_153(&(uParam0->f_199[iVar0 /*124*/]));
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && iVar1 == iParam1)
		{
			*uParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_281(int iParam0)
{
	if (!func_292(iParam0))
	{
		return false;
	}
	if (!func_146(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_282(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_SET_BOOL(iParam0, "PedSeatedForMinigame", true);
}

int func_283(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	return func_556(iParam0, iParam1, bParam2, bParam3);
}

int func_284(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_285(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_153(&(uParam0->f_199[iParam1 /*124*/]));
	if (!func_557(uParam0))
	{
		return 0;
	}
	if (func_32() != -1)
	{
		return 0;
	}
	if (!func_204(uParam0, iParam1))
	{
		return 0;
	}
	if (uParam0->f_199[iParam1 /*124*/].f_7)
	{
		return 0;
	}
	ANIMSCENE::_0xB1A196BAFE650402(uParam0->f_742, iVar0);
	if (func_138(iVar0) || PED::IS_PED_A_PLAYER(iVar0))
	{
		ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_742, iVar0, "");
	}
	uParam0->f_199[iParam1 /*124*/].f_7 = 1;
	return 1;
}

bool func_286(int iParam0, int iParam1)
{
	return PED::IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

int func_287(int iParam0)
{
	Vector3 vVar0[3];
	Vector3 vVar10;
	float fVar13;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
	{
		return 1;
	}
	if (!TASK::IS_PED_STILL(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_UPRIGHT(iParam0, 90.0f))
	{
		return 0;
	}
	if (PED::GET_PED_CROUCH_MOVEMENT(iParam0))
	{
		return 0;
	}
	if (PED::GET_PED_STEALTH_MOVEMENT(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_JUMPING(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	vVar10 = { PED::GET_PED_BONE_COORDS(iParam0, 56200, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0.0f, 0.0f, 0.0f) /*3*/ };
	if ((vVar10.z - vVar0[2 /*3*/].f_2) > 0.7f)
	{
		return 0;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 65478, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 55120, 0.0f, 0.0f, 0.0f) /*3*/ };
	fVar13 = func_558(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0.0f, 0.0f, 0.0f) /*3*/ };
	fVar13 = func_558(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return 0;
	}
	return 1;
}

int func_288(var uParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(func_153(uParam0)))
	{
		return 0;
	}
	if (*iParam1 == 0)
	{
		return 0;
	}
	if (!func_559(uParam0, &iVar0))
	{
		return 0;
	}
	if (func_391(uParam0))
	{
		return 0;
	}
	if (func_387(uParam0, 19))
	{
		return 0;
	}
	if (iVar0 == 0)
	{
		func_435(uParam0, iParam1);
	}
	else
	{
		uParam0->f_48[iVar0 /*15*/] = { *iParam1 /*15*/ };
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		iVar0++;
	}
	return 1;
}

void func_289(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= iParam0->f_1)
	{
		return;
	}
	iParam0->f_1[iParam1] = iParam2;
}

void func_290(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return;
	}
	uParam0->f_149[iParam1 /*44*/] = iParam1;
	if (iParam2 != -1)
	{
		uParam0->f_149[iParam1 /*44*/].f_1 = iParam2;
	}
}

bool func_291(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_560(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] & iParam1) != 0;
}

bool func_292(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_293(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_560(iParam0))
		{
			return false;
		}
	}
	func_561(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_294(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_560(iParam0))
		{
			return;
		}
	}
	func_561(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_295(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_560(iParam0))
		{
			return;
		}
	}
	func_561(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_296(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_292(iParam0))
	{
		return;
	}
	if (func_146(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_295(iParam0, 56, 1);
		func_94(&(Global_1359489.f_40), 1);
	}
	func_562(iParam0, 0);
	func_309(iParam0, 4, 0);
	func_563(iParam0);
	func_310(iParam0);
	func_294(iParam0, 37, 1);
	bVar0 = func_297(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_564(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true) && (Global_1359489.f_16 & (1 << 23)) == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, false);
	}
	if (func_293(iParam0, 64, 1))
	{
		func_294(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_294(iParam0, 33, 1);
		func_294(iParam0, 34, 1);
		func_565(iParam0, 1056964608, -1, 1061158912);
		func_301(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_295(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_295(iParam0, 35, 1);
			if (bParam8)
			{
				func_295(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_566(iParam0, 0);
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
		func_294(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_295(iParam0, 33, 1);
		func_301(iParam0, 0, 1, 0);
		if (fParam4 > 0.0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_94(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_567(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_295(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_568(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_293(iParam0, 45, 1))
	{
		func_294(iParam0, 45, 1);
	}
	func_569(iParam0, 16, 1);
	func_294(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_297(func_570(iParam0), 0))
		{
			func_571(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_297(int iParam0, int iParam1)
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
	if (func_572(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_572(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_572(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_572(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_572(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_572(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_572(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_572(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_298(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_410(iParam0);
	if (!func_292(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	if (bParam1)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_299(int iParam0, int iParam1)
{
	if (!func_560(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_300(int iParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_560(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_3)
	{
		case 0:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 1;
		case 1:
			if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("DEF_COMP_BRAIN")))
			{
				return false;
			}
			if (Global_1359489.f_9 != -1)
			{
				return false;
			}
			Global_1359489.f_9 = iParam0;
			if (iParam4 == 0)
			{
				if (iParam9 != -1)
				{
					iParam4 = func_573(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_523(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_522(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_573(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_574(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_575(iParam0, 0))
					{
						func_295(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_576(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) /*7*/ };
			if (!bParam6)
			{
				func_294(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_297(func_410(iParam0), 0))
			{
				return false;
			}
			if (iParam5 & iParam10)
			{
				if (!func_297(func_570(iParam0), 0))
				{
					return false;
				}
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 3;
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

void func_301(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_560(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_294(iParam0, 50, 1);
		func_294(iParam0, 48, 1);
		func_294(iParam0, 49, 1);
		func_294(iParam0, 51, 1);
		func_294(iParam0, 52, 1);
		func_294(iParam0, 54, 1);
		func_294(iParam0, 55, 1);
	}
	else
	{
		func_295(iParam0, 50, 1);
		func_295(iParam0, 48, 1);
		func_295(iParam0, 49, 1);
		func_295(iParam0, 51, 1);
		if (bParam3)
		{
			func_295(iParam0, 54, 1);
		}
		else
		{
			func_294(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_295(iParam0, 52, 1);
			if (bParam3)
			{
				func_295(iParam0, 55, 1);
			}
		}
		else
		{
			func_294(iParam0, 52, 1);
			if (!bParam3)
			{
				func_294(iParam0, 55, 1);
			}
		}
	}
}

void func_302(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_292(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_577(iParam0, bParam3);
	}
	else
	{
		func_578(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_579(iParam0, bParam3);
	}
	else
	{
		func_580(iParam0, bParam3);
	}
}

void func_303(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_SET_PED_TO_DISABLE_RAGDOLL(iVar1, true);
		}
	}
	if (iParam0 == func_581(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_582(iParam0))
	{
		if (func_583(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_572(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= (iParam5 & 4);
				func_303(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= (iParam5 & 4);
				func_303(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_572(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_572(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_572(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_572(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_572(iParam5, 129))
	{
		if (func_572(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_572(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_572(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_572(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_582(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_572(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_572(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

bool func_304(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_292(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_584(iParam0, iParam1);
	return bVar0;
}

void func_305(int iParam0, int iParam1, bool bParam2)
{
	if (!func_292(iParam0))
	{
		return;
	}
	if (!func_304(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_295(iParam0, 25, 1);
	}
}

void func_306(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_585(iParam2))
		{
			iVar0 = func_586(iParam2, -1);
			if (func_587(iParam1, iVar0))
			{
				if (func_588(iParam1, iVar0))
				{
					if (func_589(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_590(iParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(iParam1, iVar0);
				}
			}
		}
		func_591(iParam0, iParam1, 0);
		PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
		PED::_SET_PED_DIRT_CLEANED(iParam1, 0.0f, -1, true, true);
		PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam1, 10, "ALL");
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 3);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 0);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 5);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 7);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 8);
		PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam1, 9);
		if (bParam3)
		{
			func_295(iParam0, 66, 0);
		}
	}
}

void func_307(int iParam0)
{
	func_592(iParam0);
	func_593(iParam0, 0);
}

void func_308(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), true, 1, false, false);
		if (PED::IS_PED_A_PLAYER(iParam0) && iParam1 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::PLAYER_ID(), joaat("WEAPON_UNARMED"), false);
			}
		}
	}
}

void func_309(int iParam0, int iParam1, bool bParam2)
{
	if (!func_560(iParam0))
	{
		return;
	}
	func_594(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_310(int iParam0)
{
	func_295(iParam0, 36, 1);
}

bool func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return false;
	}
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, iVar0, true);
		if (!WEAPON::IS_WEAPON_VALID(iVar1))
		{
		}
		else if (!WEAPON::_IS_WEAPON_TWO_HANDED(iVar1))
		{
		}
		else
		{
			iVar2 = 1;
			WEAPON::_SEND_WEAPON_TO_INVENTORY(iParam0, iVar1);
		}
		iVar0++;
	}
	return iVar2;
}

void func_312(int iParam0, int iParam1)
{
	if (!func_560(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_595(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_595(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

void func_313(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_292(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_314(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_315(uParam0, iVar0, 29);
		iVar0++;
	}
}

void func_315(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (5 * iParam1);
	iVar1 = iVar0 + 4;
	iVar2 = iParam2;
	iVar4 = 159;
	if (iVar1 > iVar4)
	{
		return;
	}
	if (iVar0 > (iVar4 - 5))
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 5)
	{
		if (MISC::IS_BIT_SET(iVar2, iVar3))
		{
			MISC::_SET_BIT_FLAG(uParam0, iVar0);
		}
		else
		{
			MISC::_CLEAR_BIT_FLAG(uParam0, iVar0);
		}
		iVar0++;
		iVar3++;
	}
}

void func_316(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2)
	{
		uParam0->f_2[iVar0] = 0;
		iVar0++;
	}
}

bool func_317(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	Vector3 vVar1;

	vVar1.f_1 = -1;
	vVar1.f_2 = 6;
	if (uParam0->f_709.f_2 >= 45)
	{
		while (uParam0->f_709.f_2 >= 45)
		{
			func_173(uParam0, &vVar1);
		}
	}
	iVar0 = (uParam0->f_709.f_1 + uParam0->f_709.f_2);
	iVar0 = (iVar0 % 45);
	if (iVar0 < 0 || iVar0 >= 45)
	{
		return false;
	}
	iParam1->f_11 = MISC::GET_FRAME_COUNT();
	func_316(&(uParam0->f_709.f_4[iVar0 /*13*/]));
	uParam0->f_709.f_4[iVar0 /*13*/] = { *iParam1 /*13*/ };
	uParam0->f_709.f_2++;
	if (!bParam2)
	{
	}
	return true;
}

bool func_318(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return false;
	}
	return uParam0->f_149[iParam1 /*44*/] == iParam1;
}

int func_319(int iParam0, int iParam1)
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

int func_320(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 6;
	vVar0.f_1 = iParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

var func_321(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

int func_322(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_1 = -1;
	sVar0.f_2 = 6;
	func_316(&sVar0);
	sVar0.f_0 = 5;
	sVar0.f_1 = iParam1;
	sVar0.f_2[0] = iParam2;
	sVar0.f_2[1] = iParam3;
	sVar0.f_2[2] = (iParam2 - iParam3);
	sVar0.f_9 = uParam4;
	if (func_317(uParam0, &sVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_323(var uParam0, int iParam1, var uParam2)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_1 = -1;
	sVar0.f_2 = 6;
	func_316(&sVar0);
	sVar0.f_0 = 7;
	sVar0.f_1 = iParam1;
	sVar0.f_9 = uParam2;
	if (func_317(uParam0, &sVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_324(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[4];

	if (iParam1 == -1)
	{
		iParam1 = *uParam0;
	}
	switch (iParam1)
	{
		case 0:
			iVar2[0] = 0;
			iVar2[1] = 2;
			iVar2[2] = 1;
			iVar2[3] = 3;
			break;
		case 1:
			iVar2[0] = 1;
			iVar2[1] = 3;
			iVar2[2] = 0;
			iVar2[3] = 2;
			break;
		case 2:
			iVar2[0] = 2;
			iVar2[1] = 1;
			iVar2[2] = 3;
			iVar2[3] = 0;
			break;
		case 3:
			iVar2[0] = 3;
			iVar2[1] = 0;
			iVar2[2] = 2;
			iVar2[3] = 1;
			break;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_149(uParam0, iVar2[iVar1]))
		{
			return iVar2[iVar1];
		}
		iVar1 += 1 % 4;
		iVar0++;
	}
	return -1;
}

int func_325(var uParam0, var uParam1, var uParam2)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_1 = -1;
	sVar0.f_2 = 6;
	func_316(&sVar0);
	sVar0.f_0 = 12;
	func_596(uParam1, &(sVar0.f_2));
	sVar0.f_1 = uParam0->f_695;
	sVar0.f_9 = uParam2;
	uParam0->f_705 = 0;
	uParam0->f_706 = 0;
	uParam0->f_708 = 0;
	uParam0->f_707 = -1;
	if (func_317(uParam0, &sVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_326(var uParam0, int iParam1)
{
	if (!func_149(uParam0, iParam1))
	{
		return func_597(uParam0, 0);
	}
	return iParam1;
}

int func_327(var uParam0, int iParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 17;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = uParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_328(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 += func_359(uParam0, iVar0);
		iVar0++;
	}
	iVar1 += uParam0->f_6.f_142;
	return (28 - iVar1);
}

bool func_329(var uParam0)
{
	var uVar0;

	uVar0 = 15;
	func_350(&uVar0);
	return MINIGAME::_0x3AE451860F03CA8A(uParam0, &uVar0) > 0;
}

int func_330(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	struct<13> /*104*/ sVar2;

	sVar2.f_1 = -1;
	sVar2.f_2 = 6;
	func_316(&sVar2);
	sVar2.f_0 = 13;
	sVar2.f_10 = iParam3;
	sVar2.f_1 = iParam1;
	func_314(&(sVar2.f_2), 28);
	iVar0 = 0;
	while (iVar0 < sVar2.f_10)
	{
		iVar1 = func_334(uParam2->f_149[iParam1 /*44*/].f_4[(iParam4 + iVar0) /*2*/]);
		func_598(&(sVar2.f_2), iVar1);
		iVar0++;
	}
	sVar2.f_2[5] = iParam4;
	if (bParam5)
	{
		sVar2.f_12 = 1;
	}
	if (func_317(uParam0, &sVar2, 1))
	{
		return 1;
	}
	return 0;
}

int func_331(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<11> /*88*/ sVar2;

	sVar2.f_1 = -1;
	sVar2.f_2 = 6;
	func_316(&sVar2);
	sVar2.f_0 = 24;
	sVar2.f_10 = 0;
	sVar2.f_1 = iParam1;
	func_314(&(sVar2.f_2), 28);
	iVar0 = 0;
	while (iVar0 < uParam2->f_149[iParam1 /*44*/].f_3)
	{
		iVar1 = func_334(uParam2->f_149[iParam1 /*44*/].f_4[iVar0 /*2*/]);
		if (func_598(&(sVar2.f_2), iVar1))
		{
			iVar1 = func_150(&(sVar2.f_2), iVar0);
			sVar2.f_10++;
		}
		iVar0++;
	}
	if (func_317(uParam0, &sVar2, 1))
	{
		return 1;
	}
	return 0;
}

int func_332(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 22;
	vVar0.f_1 = uParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_333(var uParam0, var uParam1, var uParam2, var uParam3)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 21;
	vVar0.f_1 = uParam1;
	vVar0.f_2[0] = uParam2;
	vVar0.f_2[1] = uParam3;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_334(struct<2> /*16*/ sParam0)
{
	switch (sParam0.f_1)
	{
		case 0:
			if (sParam0.f_0 == 0)
			{
				return 0;
			}
			break;
		case 1:
			switch (sParam0.f_0)
			{
				case 0:
					return 1;
				case 1:
					return 7;
				default:
					break;
			}
			break;
		case 2:
			switch (sParam0.f_0)
			{
				case 0:
					return 2;
				case 1:
					return 8;
				case 2:
					return 13;
				default:
					break;
			}
			break;
		case 3:
			switch (sParam0.f_0)
			{
				case 0:
					return 3;
				case 1:
					return 9;
				case 2:
					return 14;
				case 3:
					return 18;
				default:
					break;
			}
			break;
		case 4:
			switch (sParam0.f_0)
			{
				case 0:
					return 4;
				case 1:
					return 10;
				case 2:
					return 15;
				case 3:
					return 19;
				case 4:
					return 22;
				default:
					break;
			}
			break;
		case 5:
			switch (sParam0.f_0)
			{
				case 0:
					return 5;
				case 1:
					return 11;
				case 2:
					return 16;
				case 3:
					return 20;
				case 4:
					return 23;
				case 5:
					return 25;
				default:
					break;
			}
			break;
		case 6:
			switch (sParam0.f_0)
			{
				case 0:
					return 6;
				case 1:
					return 12;
				case 2:
					return 17;
				case 3:
					return 21;
				case 4:
					return 24;
				case 5:
					return 26;
				case 6:
					return 27;
				default:
					break;
			}
			break;
	}
	return 29;
}

int func_335(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5)
{
	struct<13> /*104*/ sVar0;

	sVar0.f_1 = -1;
	sVar0.f_2 = 6;
	func_316(&sVar0);
	sVar0.f_0 = 14;
	sVar0.f_1 = iParam1;
	sVar0.f_2[0] = iParam3;
	sVar0.f_2[1] = func_599(uParam2);
	if (bParam4)
	{
		sVar0.f_2[2] = 1;
	}
	sVar0.f_12 = iParam5;
	if (func_317(uParam0, &sVar0, 1))
	{
		if (bParam4 == 0)
		{
			if (uParam0->f_666.f_3 == -1234859967 || uParam0->f_666.f_3 == -382896522)
			{
				if (uParam0->f_705 == 0)
				{
					if (func_600(iParam3))
					{
						uParam0->f_707 = (uParam0->f_14.f_6.f_142 - 1);
						func_601(uParam0);
						uParam0->f_705 = 1;
					}
				}
				if (uParam0->f_705 == 1)
				{
					uParam0->f_708 = func_602(uParam0);
					if (uParam0->f_708 == 2 && uParam0->f_706 == 0)
					{
						func_603(uParam0);
						uParam0->f_706 = 1;
					}
				}
			}
		}
		return 1;
	}
	return 0;
}

int func_336(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 16;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = uParam2;
	vVar0.f_2[1] = iParam3;
	vVar0.f_2[2] = uParam4;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_337(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 1;
	vVar0.f_2[0] = uParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_338(var uParam0, int iParam1, var uParam2)
{
	struct<11> /*88*/ sVar0;

	sVar0.f_1 = -1;
	sVar0.f_2 = 6;
	func_316(&sVar0);
	sVar0.f_0 = 2;
	sVar0.f_1 = iParam1;
	sVar0.f_10 = uParam2;
	if (func_317(uParam0, &sVar0, 1))
	{
		return 1;
	}
	return 0;
}

void func_339(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		func_605(func_604(joaat("ATTEMPTS"), joaat("DOMINOES_HAND")));
	}
	if (bParam3)
	{
		func_605(func_604(joaat("ATTEMPTS"), joaat("DOMINOES_GAME")));
	}
	if (bParam1)
	{
		if (bParam3)
		{
			func_606(joaat("DOMINOES_GAME"));
		}
		if (bParam2)
		{
			func_606(joaat("DOMINOES_HAND"));
			if ((uParam0->f_11 == 0 && uParam0->f_666.f_3 != -1617663169) && func_356(&(uParam0->f_14)) != 4)
			{
				func_605(func_604(joaat("WINS"), joaat("DOMINOES_NO_DRAWS")));
			}
		}
	}
	else
	{
		if (bParam3)
		{
			func_607(joaat("DOMINOES_GAME"));
		}
		if (bParam2)
		{
			func_607(joaat("DOMINOES_HAND"));
		}
	}
}

int func_340(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 20;
	vVar0.f_1 = iParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_341(var uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = iParam1;
	vVar0.f_1 = iParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_342(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 19;
	vVar0.f_1 = iParam1;
	func_608();
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_343(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0) && iVar0 != iParam2)
		{
			iVar1 += func_357(uParam0, iVar0, iParam1);
		}
		iVar0++;
	}
	return iVar1;
}

int func_344(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 27;
	vVar0.f_1 = iParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_345(var uParam0, var uParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 23;
	vVar0.f_1 = uParam1;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_346(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (uParam0->f_1 != uParam1->f_1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != uParam1->f_4)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (!func_609(&(uParam0->f_6), &(uParam1->f_6)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_610(&(uParam0->f_149[iVar0 /*44*/]), &(uParam1->f_149[iVar0 /*44*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_347(var uParam0, var uParam1)
{
	func_350(uParam1);
	return MINIGAME::_0x3AE451860F03CA8A(uParam0, uParam1);
}

int func_348(var uParam0, int iParam1)
{
	int iVar0;

	if (uParam0->f_699 >= 28)
	{
		return 29;
	}
	iVar0 = func_150(&(uParam0->f_684), uParam0->f_699);
	if (iVar0 == 29)
	{
		return 29;
	}
	if (func_611(uParam0, iParam1, iVar0))
	{
		uParam0->f_699++;
		return iVar0;
	}
	return 29;
}

int func_349(int iParam0, var uParam1)
{
	if (iParam0 == 29)
	{
		return 0;
	}
	return func_151(iParam0, uParam1, &(uParam1->f_1));
}

void func_350(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_612(uParam0[iVar0 /*5*/]);
		iVar0++;
	}
}

int func_351(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<5> /*40*/ sVar2[15];

	iVar1 = 0;
	iVar0 = func_347(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &sVar2);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_352(uParam0->f_666.f_3, &(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &sVar2, &iVar1, iVar0))
	{
		if (!func_353(&(uParam0->f_14.f_149[iParam1 /*44*/].f_4), &sVar2, &iVar1, iVar0))
		{
			return 0;
		}
	}
	if (!func_354(uParam0->f_666.f_3, &(uParam0->f_14), iParam1, &(sVar2[iVar1 /*5*/])))
	{
		return 0;
	}
	return 1;
}

bool func_352(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = -1;
	if (uParam1->f_39 == 0)
	{
		return false;
	}
	*iParam3 = -1;
	if (iParam4 == -1)
	{
		iParam4 = *uParam2;
	}
	iVar1 = 0;
	while (iVar1 < iParam4)
	{
		if (func_613(*(uParam2[iVar1 /*5*/])))
		{
			if ((*uParam2)[iVar1 /*5*/] < uParam1->f_39 && (*uParam2)[iVar1 /*5*/] >= 0)
			{
				iVar0 = (uParam2[iVar1 /*5*/])->f_4;
				if (iVar0 >= iVar2 || iVar2 == -1)
				{
					if (func_614(iParam0, iVar0))
					{
						*iParam3 = iVar1;
						iVar2 = iVar0;
					}
				}
			}
		}
		iVar1++;
	}
	return *iParam3 >= 0;
}

bool func_353(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = -1;
	if (uParam0->f_39 == 0)
	{
		return false;
	}
	*iParam2 = -1;
	if (iParam3 == -1)
	{
		iParam3 = *uParam1;
	}
	iVar1 = 0;
	while (iVar1 < iParam3)
	{
		if (func_613(*(uParam1[iVar1 /*5*/])))
		{
			if ((*uParam1)[iVar1 /*5*/] < uParam0->f_39 && (*uParam1)[iVar1 /*5*/] >= 0)
			{
				iVar0 = func_615(*(uParam0[(*uParam1)[iVar1 /*5*/] /*2*/]));
				if (iVar0 >= iVar2 || iVar2 == -1)
				{
					*iParam2 = iVar1;
					iVar2 = iVar0;
				}
			}
		}
		iVar1++;
	}
	return *iParam2 >= 0;
}

bool func_354(int iParam0, var uParam1, int iParam2, var uParam3)
{
	if (*uParam3 < 0)
	{
		return false;
	}
	if (*uParam3 >= uParam1->f_149[iParam2 /*44*/].f_3)
	{
		return false;
	}
	if (!func_149(uParam1, iParam2))
	{
		return false;
	}
	if (!MINIGAME::_0x012027C28F421F46(uParam3, &(uParam1->f_149[iParam2 /*44*/].f_4)))
	{
		return false;
	}
	uParam1->f_1 = *uParam3;
	uParam1->f_149[iParam2 /*44*/].f_3 = uParam1->f_149[iParam2 /*44*/].f_4.f_39;
	if (!MINIGAME::_0x3F4FD4BED07AB8C4(&(uParam1->f_6)))
	{
		return false;
	}
	if (uParam1->f_6 > 0)
	{
		if ((iParam0 == -382896522 && (uParam1->f_6 % 3) == 0) || (iParam0 == -1234859967 && (uParam1->f_6 % 5) == 0))
		{
			uParam1->f_149[iParam2 /*44*/].f_2 += uParam1->f_6;
		}
	}
	return true;
}

int func_355(var uParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 15;
	vVar0.f_1 = iParam1;
	vVar0.f_2[0] = iParam2;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_356(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_357(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_149(uParam0, iParam1))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_149[iParam1 /*44*/].f_3)
	{
		iVar0 += func_615(uParam0->f_149[iParam1 /*44*/].f_4[iVar1 /*2*/]);
		iVar1++;
	}
	if (iParam2 == -1234859967)
	{
		iVar0 += 2;
		iVar0 -= (iVar0 % 5);
	}
	if (iParam2 == -382896522)
	{
		iVar0++;
		iVar0 -= (iVar0 % 3);
	}
	return iVar0;
}

int func_358(var uParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 18;
	vVar0.f_1 = iParam1;
	func_608();
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_359(var uParam0, int iParam1)
{
	if (!func_149(uParam0, iParam1))
	{
		return 0;
	}
	return uParam0->f_149[iParam1 /*44*/].f_3;
}

void func_360(var uParam0, int iParam1)
{
	if (uParam0->f_163 != iParam1)
	{
	}
	func_246(&(uParam0->f_160));
	uParam0->f_163 = iParam1;
}

void func_361(var uParam0)
{
	uParam0->f_3++;
}

void func_362(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_149)
	{
		uParam0->f_149[iVar0 /*44*/].f_2 = 0;
		iVar0++;
	}
}

void func_363(var uParam0)
{
	uParam0->f_9 = 1;
}

void func_364(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_149)
	{
		return;
	}
	uParam0->f_149[iParam1 /*44*/] = -1;
}

void func_365(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_616(iParam0);
	if (bParam3)
	{
		func_617(iParam0, sParam1, iParam2);
	}
}

bool func_366(var uParam0)
{
	int iVar0;

	if (!func_370(uParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		if (MISC::IS_BIT_SET(uParam0->f_22, iVar0))
		{
			if (!func_618(uParam0, iVar0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_367(var uParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;

	if (!func_19())
	{
		return;
	}
	uParam0->f_179 = { vVar1 /*3*/ };
	iVar4 = func_619(uParam0->f_1003);
	iVar5 = func_620(iParam1);
	func_246(&(uParam0->f_176));
	switch (iParam1)
	{
		case 13:
			if (!MISC::IS_BIT_SET(iVar4, 1))
			{
				iVar0 = 1;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_ABI1");
			}
			else if (!MISC::IS_BIT_SET(iVar4, 2))
			{
				iVar0 = 2;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_ABI2");
			}
			else
			{
				return;
			}
			func_621(&(uParam0->f_78), iVar5, "ABIGAIL", 0);
			break;
		case 15:
			if (!MISC::IS_BIT_SET(iVar4, 3))
			{
				iVar0 = 3;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_MBETH1");
			}
			else if (!MISC::IS_BIT_SET(iVar4, 4))
			{
				iVar0 = 4;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_MBETH2");
			}
			else
			{
				return;
			}
			func_621(&(uParam0->f_78), iVar5, "MARYBETH", 0);
			break;
		case 22:
			if (!MISC::IS_BIT_SET(iVar4, 5))
			{
				iVar0 = 5;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_TILLY1");
				if (!MISC::IS_BIT_SET(iVar4, 7))
				{
					MISC::SET_BIT(&iVar4, 7);
					func_622(20, 22, 1);
				}
			}
			else if (!MISC::IS_BIT_SET(iVar4, 6))
			{
				iVar0 = 6;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_TILLY2");
			}
			else
			{
				return;
			}
			func_621(&(uParam0->f_78), iVar5, "TILLY", 0);
			break;
		case 17:
			if (!MISC::IS_BIT_SET(iVar4, 8))
			{
				iVar0 = 8;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_PEARSON1");
			}
			else
			{
				return;
			}
			func_621(&(uParam0->f_78), iVar5, "PEARSON", 0);
			break;
		case 5:
			if (!MISC::IS_BIT_SET(iVar4, 9))
			{
				iVar0 = 9;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_HOSEA1");
			}
			else if (!MISC::IS_BIT_SET(iVar4, 10))
			{
				iVar0 = 10;
				MISC::SET_BIT(&iVar4, iVar0);
				strcpy_s(&vVar1, 24, "DMINO_HOSEA2");
			}
			else
			{
				return;
			}
			func_621(&(uParam0->f_78), iVar5, "HOSEA", 0);
			break;
		default:
			return;
	}
	func_623(uParam0->f_1003, iVar4);
	func_621(&(uParam0->f_78), Global_35, "ARTHUR", 0);
	uParam0->f_997 = iVar0;
	uParam0->f_179 = { vVar1 /*3*/ };
	uParam0->f_182 = 1;
}

float func_368(var uParam0)
{
	if (!func_245(uParam0))
	{
		return 0.0f;
	}
	if (func_624(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_625() - uParam0->f_1);
}

void func_369(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_626(&(uParam0->f_2334.f_1), iParam2))
	{
		func_627(&(uParam0->f_2334), &(uParam0->f_1330), iParam2);
	}
	iVar1 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_628(iParam1, iVar1);
		if (!func_626(&(uParam0->f_2334.f_1), iVar1))
		{
			func_627(&(uParam0->f_2334), &(uParam0->f_1330), iVar1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(iParam1, iVar0))
		{
			func_182(&(uParam0->f_2334), iVar0);
		}
		iVar0++;
	}
}

bool func_370(var uParam0)
{
	if (uParam0->f_23 == 0 || uParam0->f_22 == 0)
	{
		return false;
	}
	return uParam0->f_23 == uParam0->f_22;
}

bool func_371(var uParam0)
{
	int iVar0;

	iVar0 = func_619(uParam0->f_1003);
	if (!func_19())
	{
		return true;
	}
	if (func_368(&(uParam0->f_176)) > 5.0f)
	{
		MISC::CLEAR_BIT(&iVar0, uParam0->f_997);
		func_623(uParam0->f_1003, iVar0);
		return true;
	}
	if (uParam0->f_182 == 0)
	{
		return true;
	}
	if (uParam0->f_183 == 1)
	{
		return true;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_179)))
	{
		return true;
	}
	if (func_629(&(uParam0->f_78), uParam0->f_179, 0, -1, 0, 0))
	{
		uParam0->f_183 = 1;
		return true;
	}
	return false;
}

int func_372(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 4;
		case 3:
			return 5;
		default:
			break;
	}
	return 0;
}

bool func_373(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	*iParam2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1)
		{
			*iParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_374(var uParam0, int iParam1)
{
	uParam0->f_192 = iParam1;
}

int func_375(var uParam0, int iParam1, bool bParam2)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 16))
	{
		return 0;
	}
	if (func_630(&(uParam0->f_199[iParam1 /*124*/])) == 16)
	{
		return 0;
	}
	if (uParam0->f_988 == 1)
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 16;
	if (bParam2)
	{
		func_289(&sVar0, 0, 1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

bool func_376(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_204(uParam0, iVar0))
		{
			iVar3 = func_153(&(uParam0->f_199[iVar0 /*124*/]));
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				iVar1++;
				if (uParam0->f_199[iVar0 /*124*/].f_48[0 /*15*/] == 0)
				{
					iVar2++;
				}
				else if (uParam0->f_199[iVar0 /*124*/].f_48[1 /*15*/] == 0 && uParam0->f_199[iVar0 /*124*/].f_46 == 54)
				{
					iVar2++;
				}
			}
		}
		iVar0++;
	}
	return iVar1 == iVar2;
}

void func_377(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0;
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::IS_BIT_SET(uParam2->f_9, iVar1))
		{
		}
		iVar1++;
	}
	func_406(&(uParam0->f_2334), -1);
	func_185(&(uParam0->f_2334), uParam1);
	if (uParam1->f_700 <= 1)
	{
		func_631(&(uParam0->f_2334), uParam1->f_666.f_3, 0);
	}
	else
	{
		func_194(&(uParam0->f_2334), "MGDOM_HLP_DEALING", 0, 10000);
	}
	if (!func_204(&(uParam0->f_1330), uParam2->f_1))
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_204(&(uParam0->f_1330), iVar1) && MISC::IS_BIT_SET(uParam2->f_9, iVar1))
			{
				uParam2->f_1 = iVar1;
				uParam1->f_695 = iVar1;
			}
			iVar1++;
		}
	}
	func_374(&(uParam0->f_1330), uParam2->f_1);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::IS_BIT_SET(uParam2->f_9, iVar1))
		{
			func_632(&(uParam0->f_1330), iVar1, 1);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (uParam0->f_1330.f_194 == iVar1)
				{
					iVar2 = func_150(&(uParam2->f_2), (iVar1 * 7 + iVar0));
					func_121(&(uParam0->f_1330), (iVar1 * 7 + iVar0), iVar2, func_372(iVar1), iVar0, iVar0);
					func_263(&(uParam0->f_1330), (iVar1 * 7 + iVar0), iVar2);
				}
				else
				{
					func_121(&(uParam0->f_1330), (iVar1 * 7 + iVar0), 28, func_372(iVar1), iVar0, iVar0);
					func_263(&(uParam0->f_1330), (iVar1 * 7 + iVar0), 28);
				}
				iVar0++;
			}
		}
		else
		{
			func_632(&(uParam0->f_1330), iVar1, 0);
			iVar0 = 0;
			while (iVar0 < 7)
			{
				func_121(&(uParam0->f_1330), (iVar1 * 7 + iVar0), 28, 1, iVar3, -1);
				iVar3++;
				iVar0++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::IS_BIT_SET(uParam2->f_9, iVar1))
		{
			func_632(&(uParam0->f_1330), iVar1, 1);
			if (func_633(&(uParam0->f_1330), iVar1, 1, iVar0 == uParam2->f_1))
			{
				func_389(&(uParam0->f_2334), iVar1, MISC::VAR_STRING(2, "MGDOM_MSGWAITTURN"));
			}
			iVar4++;
		}
		else
		{
			func_632(&(uParam0->f_1330), iVar1, 0);
		}
		iVar1++;
	}
	if (iVar4 != 4)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			func_634(&(uParam0->f_1330), iVar1);
			iVar1++;
		}
	}
	func_232(&(uParam0->f_1330), 1);
}

void func_378(var uParam0)
{
	uParam0->f_702 = 0;
	uParam0->f_14 = func_326(&(uParam0->f_14), uParam0->f_697);
	uParam0->f_14.f_3 = uParam0->f_694 + 30;
}

void func_379(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_393(&(uParam0->f_1), 1, "");
	func_394(&(uParam0->f_1), 1, "");
}

bool func_380(var uParam0)
{
	if (uParam0->f_5 == 17 || uParam0->f_5 == 16)
	{
		return true;
	}
	return false;
}

void func_381(var uParam0, var uParam1, int iParam2)
{
	bool bVar0;
	var uVar1;
	struct<5> /*40*/ sVar2;
	int iVar7;

	iVar7 = iParam2->f_12;
	uVar1 = iParam2->f_2[0];
	func_635(iParam2->f_2[1], &sVar2);
	bVar0 = iParam2->f_2[2] == true;
	if (!func_236(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 6) && !func_236(&(uParam0->f_1330.f_199[iParam2->f_1 /*124*/]), 10))
	{
		func_636(&(uParam0->f_1330), iParam2->f_1, sVar2.f_0);
	}
	if (uParam1->f_666.f_3 == -1617663169 || uParam1->f_666.f_3 == -1360983891)
	{
		iVar7 = -1;
	}
	func_637(&(uParam0->f_1330), iParam2->f_1, sVar2.f_0, sVar2, uVar1, bVar0, iVar7);
	func_232(&(uParam0->f_1330), 1);
}

bool func_382(var uParam0)
{
	return (uParam0->f_48[1 /*15*/] == 0 && uParam0->f_46 == 54);
}

void func_383(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGDRAWTILE"));
}

void func_384(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < iParam2->f_10)
	{
		if (func_638(&(uParam0->f_1330), 1, &iVar1, iVar2))
		{
			iVar2 = iVar1;
			func_639(&(uParam0->f_1330), iVar1, (iParam2->f_2[5] + iVar0));
			if (uParam0->f_1330.f_194 == iParam2->f_1)
			{
				iVar3 = func_150(&(iParam2->f_2), iVar0);
				func_263(&(uParam0->f_1330), iVar1, iVar3);
			}
		}
		iVar0++;
	}
	func_232(&(uParam0->f_1330), 1);
	if (iParam2->f_12 != 0)
	{
		func_640(&(uParam0->f_1330), iParam2->f_1, iParam2->f_10, 1, MISC::GET_RANDOM_INT_IN_RANGE(250, 500));
	}
	else
	{
		func_640(&(uParam0->f_1330), iParam2->f_1, iParam2->f_10, 0, MISC::GET_RANDOM_INT_IN_RANGE(250, 500));
	}
}

int func_385(var uParam0, int iParam1, int iParam2)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 14;
	func_289(&sVar0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

bool func_386(var uParam0, int iParam1)
{
	return (uParam0->f_46 != 54 && uParam0->f_48[0 /*15*/] == iParam1);
}

bool func_387(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		if (uParam0->f_48[iVar0 /*15*/] == iParam1)
		{
			if (iVar0 == 0 && uParam0->f_46 == 54)
			{
				return false;
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_388(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
}

void func_389(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_641(&(uParam0->f_1.f_26[iParam1 /*32*/]), sParam2);
}

void func_390(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_9, uParam0->f_26[iParam1 /*32*/].f_1);
	MISC::CLEAR_BIT(&(uParam0->f_157), iParam1);
}

bool func_391(var uParam0)
{
	if (func_386(uParam0, 19))
	{
		return true;
	}
	if (func_642(uParam0, 19))
	{
		return true;
	}
	return false;
}

char* func_392(int iParam0)
{
	switch (iParam0)
	{
		case -1234859967:
			return "MGDOM_MODE_0";
		case -382896522:
			return "MGDOM_MODE_1";
		case -1360983891:
			return "MGDOM_MODE_2";
		case -1617663169:
			return "MGDOM_MODE_3";
		default:
			break;
	}
	return "";
}

void func_393(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iParam1], "text", sParam2);
}

void func_394(var uParam0, int iParam1, char* sParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_10)
	{
		return;
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_10[iParam1], "moneyText", sParam2);
}

void func_395(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	if (iParam2 >= 0)
	{
		func_398(&(uParam0->f_1), iParam1);
		if (iParam2 == 1)
		{
			func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGSCORE1", iParam2));
		}
		else
		{
			func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGSCORE", iParam2));
		}
	}
}

void func_396(var uParam0, bool bParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, bParam1);
}

void func_397(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_8, sParam1);
}

void func_398(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		if (uParam0->f_26[iVar0 /*32*/])
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26[iVar0 /*32*/].f_6, iVar0 == iParam1);
		}
		iVar0++;
	}
	uParam0->f_156 = iParam1;
	uParam0->f_155 = MISC::GET_FRAME_COUNT() + 30;
}

char* func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		case 1:
			return "MGDOM_HLP_NOMOVES";
		case 2:
			return "MGDOM_HLP_NOMOVEDRAW";
		case 3:
			return "MGDOM_HLP_NOMOVEPASS";
		case 4:
			return "MGDOM_HLP_TILECHOOSE";
		case 5:
			return "MGDOM_HLP_MOVECHOOSE";
		case 6:
			return "MGDOM_HLP_MOREMOVES";
		case 9:
			return "MGDOM_HLP_SCORE";
		case 10:
			return "MGDOM_HLP_WAITPLYR";
		case 11:
			return "MGDOM_HLP_QRULE_0";
		case 12:
			return "MGDOM_HLP_QRULE_1";
		case 13:
			return "MGDOM_HLP_QRULE_2";
		case 14:
			return "MGDOM_HLP_QRULE_3";
		case 15:
			return "MGDOM_HLP_SPECTATOR";
		case 16:
			return "MGDOM_HLP_NOPLAYERS";
		case 7:
			return "MGDOM_HLP_VIEWDOMS";
		case 8:
			return "MGDOM_HLP_VIEWMOVES";
		case 17:
			return "MGDOM_HLP_MOVEFAIL";
		case 18:
			return "MGDOM_HLP_SPINPLACE";
		case 19:
			return "MGDOM_HLP_SPINOPEN";
		default:
			break;
	}
	return "";
}

void func_400(var uParam0, char* sParam1)
{
	uParam0->f_246 = func_404(sParam1, 0, 0, 1);
}

char* func_401(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_643(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_402(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_643(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_403(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_404(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_403(sParam0, -1, iParam1, iParam2, 0, bParam3);
}

void func_405(int iParam0)
{
	if (func_32() != -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_40.f_11958, iParam0))
	{
		MISC::SET_BIT(&(Global_40.f_11958), iParam0);
		func_644(iParam0);
	}
}

void func_406(var uParam0, int iParam1)
{
	uParam0->f_235 = iParam1;
}

int func_407(var uParam0, int iParam1, bool bParam2)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 17;
	if (bParam2)
	{
		func_289(&sVar0, 1, 1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

int func_408(var uParam0, int iParam1, bool bParam2)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 18;
	if (bParam2)
	{
		func_289(&sVar0, 1, 1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

void func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<15> /*120*/ sVar0;

	if (!func_292(iParam0))
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	sVar0.f_14 = func_410(iParam0);
	sVar0.f_0 = iParam1;
	sVar0.f_12 = iParam2;
	sVar0.f_8 = 0;
	if (iParam3 != 0)
	{
		sVar0.f_13 = iParam3;
	}
	if (iParam4 != 0)
	{
		sVar0.f_4 = iParam4;
	}
	MISC::_CREATE_AI_MEMORY(&sVar0, 17);
}

int func_410(int iParam0)
{
	if (!func_560(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_411(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_645(iParam0, sParam4, iParam5);
	}
	func_646(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_412(int iParam0, int iParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = func_647(iParam0);
		return func_648(iParam0, joaat("CURRENCY_CASH"), iParam1, iVar0);
	}
	return DECORATOR::DECOR_SET_INT(iParam0, "loot_money", iParam1);
}

int func_413(var uParam0)
{
	return uParam0->f_9;
}

bool func_414(var uParam0)
{
	return uParam0->f_46 == 54;
}

void func_415(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_649(uParam1);
	switch (iVar0)
	{
		case 1:
			func_650(uParam0, uParam1, 0, 1, 1056964608);
			func_651(uParam1, 30);
			break;
		case 30:
			if (func_652(uParam1))
			{
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 1;
				uParam0->f_198 = 3;
			}
			func_651(uParam1, 54);
			break;
	}
}

void func_416(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_649(uParam1);
	switch (iVar0)
	{
		case 1:
			func_246(&(uParam1->f_43));
			func_653(uParam0, uParam1, 0);
			func_651(uParam1, 50);
			break;
		case 50:
			if (func_654(&(uParam1->f_43)) > 1.0f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_417(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_649(uParam1);
	iVar1 = func_153(uParam1);
	switch (iVar0)
	{
		case 1:
			if (iVar1 == PLAYER::PLAYER_PED_ID())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			}
			else
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iVar1))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
					TASK::CLEAR_PED_TASKS(iVar1, true, false);
				}
				func_655(iVar1, 1);
				WEAPON::_HOLSTER_PED_WEAPONS(iVar1, false, false, true, true);
			}
			if (func_19())
			{
				func_656(uParam0, uParam1, 1000.0f, 1);
			}
			else
			{
				func_656(uParam0, uParam1, (1 << 30), 0);
			}
			func_246(&(uParam1->f_43));
			func_651(uParam1, 2);
			break;
		case 2:
			if (func_368(&(uParam1->f_43)) > 0.1f)
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				func_651(uParam1, 50);
			}
			break;
		case 50:
			ENTITY::CREATE_MODEL_HIDE(*uParam0, 2.0f, joaat("P_MUGCOFFEE01X"), true);
			uParam1->f_3 = 1;
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 1;
				uParam0->f_198 = 3;
			}
			func_651(uParam1, 54);
			break;
	}
}

void func_418(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;
	Vector3 vVar10;
	char* sVar13;
	char* sVar14;
	struct<4> /*32*/ sVar15;
	int iVar19;
	int iVar20;

	sVar13 = "PLAYER_00_ENTER_LEFT";
	sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
	iVar19 = func_153(uParam1);
	iVar20 = func_649(uParam1);
	if (func_657(&(uParam1->f_48[0 /*15*/]), 0) == 1)
	{
		sVar13 = "PLAYER_00_ENTER_RIGHT";
	}
	switch (uParam1->f_10)
	{
		case 0:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
			break;
		case 1:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_01";
			break;
		case 2:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_02";
			break;
		case 3:
			sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar14 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_FEMALE_00";
	}
	switch (iVar20)
	{
		case 1:
			uParam1->f_3 = 0;
			STREAMING::REQUEST_ANIM_DICT(sVar14);
			func_651(uParam1, 6);
			break;
		case 6:
			if (iVar19 == PLAYER::PLAYER_PED_ID())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			WEAPON::_HIDE_PED_WEAPONS(iVar19, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar19, 0, 0, 0, 0);
			func_651(uParam1, 7);
			break;
		case 7:
			if (func_658(iVar19))
			{
				if (iVar19 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				}
				func_651(uParam1, 9);
			}
			break;
		case 9:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar14))
			{
				return;
			}
			if (!uParam1->f_2)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar19, false);
			}
			func_659(uParam0, iParam2, &vVar7);
			func_277(uParam0, iParam2, &vVar10);
			vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sVar14, sVar13, vVar7, vVar10, 0.0f, 2) /*3*/ };
			vVar4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sVar14, sVar13, vVar7, vVar10, 0.0f, 2) /*3*/ };
			if (func_512(vVar1, 0.0f, 0.0f, 0.0f, 1056964608, 1))
			{
				func_651(uParam1, 12);
			}
			else
			{
				sVar15.f_0 = vVar4.z;
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(iVar19, vVar1, 1.0f, 20000, 0.25f, 5120, sVar15, vVar4.z);
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_198 = 1;
				}
				func_651(uParam1, 11);
			}
			break;
		case 11:
			vVar1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sVar14, sVar13, vVar7, vVar10, 0.0f, 2) /*3*/ };
			if (!func_660(iVar19, joaat("SCRIPT_TASK_FOLLOW_NAVMESH_TO_COORD_ADVANCED")) || func_661(Global_35, vVar1, 0) < 0.25f)
			{
				func_659(uParam0, iParam2, &vVar7);
				func_277(uParam0, iParam2, &vVar10);
				vVar7.f_2 = (vVar7.z - 0.5f);
				func_662(uParam0, uParam1, sVar14, sVar13, vVar7, vVar10, 41350, 0, 0, 1);
				func_651(uParam1, 12);
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_198 = 2;
				}
			}
			break;
		case 12:
			func_663(uParam1, sVar14, sVar13, &fVar0);
			if (fVar0 > 0.4f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
			}
			if (!func_664(uParam1, sVar14, sVar13, 0))
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
				func_653(uParam0, uParam1, 1);
				func_651(uParam1, 50);
				func_246(&(uParam1->f_43));
			}
			break;
		case 50:
			if (func_654(&(uParam1->f_43)) > 0.5f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
				STREAMING::REMOVE_ANIM_DICT(sVar14);
				func_650(uParam0, uParam1, 0, 1, 1056964608);
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_419(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	Vector3 vVar10;

	iVar0 = func_153(uParam1);
	iVar1 = func_649(uParam1);
	strcpy_s(&cVar2, 64, "MINIGAME_DOMINOES_PLAYER_");
	StringIntConCat(&cVar2, uParam1->f_10 + 1, 64);
	switch (iVar1)
	{
		case 1:
			uParam1->f_3 = 0;
			if (iVar0 == PLAYER::PLAYER_PED_ID())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				func_125(&(uParam3->f_2334.f_240), 0);
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_990[iParam2]))
			{
				uParam1->f_48[0 /*15*/] = 3;
				func_651(uParam1, 1);
				return;
			}
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_198 = 1;
			}
			WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, false);
			TASK::TASK_SWAP_WEAPON(iVar0, 0, 0, 1, 1);
			func_651(uParam1, 6);
			break;
		case 6:
			if (!func_660(iVar0, joaat("SCRIPT_TASK_SWAP_WEAPON")))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
				{
					TASK::TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_990[iParam2], 0, 0, true, false, 0, false, -1.0f, false);
				}
				else
				{
					TASK::TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_990[iParam2], &cVar2, 0, true, false, 0, false, -1.0f, false);
				}
				func_246(&(uParam1->f_43));
				func_651(uParam1, 10);
			}
			break;
		case 10:
			if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar0, 0) && PED::IS_PED_USING_SCENARIO_HASH(iVar0, joaat("MINIGAME_DOMINOES_PLAYER")))
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_195 = 1;
					uParam0->f_198 = 3;
				}
				uParam1->f_3 = 1;
				vVar10 = { func_68(uParam0, uParam1) /*3*/ };
				strcpy_s(&cVar2, 64, "MINI_GAMES@DOMINOES@GAME@PLAYER_0");
				StringIntConCat(&cVar2, uParam1->f_10, 64);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				PED::SET_PED_LEG_IK_MODE(iVar0, 0);
				TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, &cVar2, "PLAYER_00_IDLE", *uParam0, vVar10, 2.0f, -8.0f, -1, 536912257, 0.0f, 2, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
				func_246(&(uParam1->f_43));
				func_651(uParam1, 12);
			}
			else if (func_368(&(uParam1->f_43)) > 6.0f && !func_660(iVar0, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
			{
				uParam1->f_48[0 /*15*/] = 3;
				func_651(uParam1, 1);
			}
			break;
		case 12:
			if (func_368(&(uParam1->f_43)) > 0.5f)
			{
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_420(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	var uVar18;
	var uVar21;
	Vector3 vVar24;
	float fVar27;
	int iVar28;
	int iVar29;

	iVar0 = func_649(uParam1);
	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 1);
	strcpy_s(&cVar2, 64, "PBL_EXITR");
	StringIntConCat(&cVar2, uParam1->f_9, 64);
	strcpy_s(&cVar10, 64, "script@mini_game@dominoes@interrupt_exits");
	switch (iVar0)
	{
		case 1:
			if (func_657(&(uParam1->f_48[0 /*15*/]), 2) == 1)
			{
				func_651(uParam1, 53);
				return;
			}
			if (uParam0->f_740)
			{
				if (func_438(uParam0, &iVar28))
				{
					iVar29 = 1;
					func_442(uParam0, 21, iVar28, iParam2);
				}
				if (iVar29 == 0 && uParam3->f_7.f_700 > 0)
				{
					func_442(uParam0, 25, iParam2, -1);
				}
			}
			else if (uParam3->f_7.f_700 > 0)
			{
				func_442(uParam0, 25, iParam2, -1);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_697))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_697);
			}
			uParam0->f_697 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar10, 2, &cVar2, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_697);
			func_651(uParam1, 3);
			break;
		case 3:
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_697, true, false))
			{
				return;
			}
			func_260(1, *uParam0, uParam0->f_3, iParam2, &uVar18, 0);
			func_665(1, uParam0->f_3, iParam2, &uVar21);
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_198 = 4;
			}
			uParam0->f_740 = 0;
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_697, *uParam0, func_68(uParam0, uParam1), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_697, "player", uParam1->f_12, 0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_697);
			func_651(uParam1, 50);
			break;
		case 50:
			fVar27 = ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_697);
			if (uParam1->f_16 == 0)
			{
				if (fVar27 > 0.05f)
				{
					uParam1->f_16 = 1;
					func_666(uParam0);
					func_667(uParam3);
					CAM::_0x04084490CC302CFB();
				}
			}
			if (fVar27 > 0.8f && uParam1->f_17 == 0)
			{
				if (func_19())
				{
					func_240(uParam0, 1);
				}
				else
				{
					func_134(uParam0);
					func_668(uParam0);
					func_64(uParam0);
					func_65(uParam0);
				}
				uParam1->f_17 = 1;
			}
			if (fVar27 >= 0.825f || ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_12, joaat("INTERRUPTIBLE")))
			{
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
				func_651(uParam1, 53);
			}
			break;
		case 53:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 0;
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_697))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_697);
			}
			uParam0->f_696 = -1;
			if (PED::IS_PED_A_PLAYER(uParam1->f_12))
			{
				PED::SET_PED_LEG_IK_MODE(uParam1->f_12, 2);
			}
			else
			{
				PED::SET_PED_LEG_IK_MODE(uParam1->f_12, 1);
			}
			if (func_19())
			{
				vVar24 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_12, true, false) - *uParam0 /*3*/ };
				vVar24.f_2 = 0.0f;
				func_669(vVar24);
				func_246(&(uParam1->f_43));
				TASK::TASK_GO_STRAIGHT_TO_COORD(uParam1->f_12, *uParam0 + vVar24 * Vector(2.0f, 2.0f, 2.0f), 1.0f, 20000, 40000.0f, 0.5f, 0);
				func_651(uParam1, 55);
			}
			else
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_196 = 1;
				}
				if (func_138(uParam1->f_12))
				{
					TASK::TASK_WANDER_STANDARD(uParam1->f_12, 40000.0f, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(uParam1->f_12, true, true);
				}
				func_651(uParam1, 54);
				if (iVar1 != 0)
				{
					func_238(uParam0, iParam2, iVar1);
				}
			}
			break;
		case 55:
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
			if (func_368(&(uParam1->f_43)) > 1.5f)
			{
				if (uParam0->f_194 == iParam2)
				{
					uParam0->f_196 = 1;
				}
				func_88(uParam3);
				if (func_138(uParam1->f_12))
				{
					TASK::TASK_WANDER_STANDARD(uParam1->f_12, 40000.0f, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(uParam1->f_12, true, true);
				}
				func_651(uParam1, 54);
				if (iVar1 != 0)
				{
					func_238(uParam0, iParam2, iVar1);
				}
			}
			break;
	}
}

void func_421(var uParam0, var uParam1, int iParam2)
{
	Vector3 vVar0;
	Vector3 vVar3;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	int iVar13;

	sVar6 = "PLAYER_00_EXIT_LEFT";
	sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
	iVar8 = func_649(uParam1);
	iVar9 = func_153(uParam1);
	iVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 1);
	iVar11 = func_657(&(uParam1->f_48[0 /*15*/]), 3);
	switch (uParam1->f_10)
	{
		case 0:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_00";
			break;
		case 1:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_01";
			break;
		case 2:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_02";
			break;
		case 3:
			sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar7 = "MINI_GAMES@DOMINOES@ENTER_EXIT@PLAYER_FEMALE_00";
	}
	if (func_657(&(uParam1->f_48[0 /*15*/]), 0) == 1)
	{
		sVar6 = "PLAYER_00_EXIT_RIGHT";
	}
	switch (iVar8)
	{
		case 1:
			func_246(&(uParam1->f_43));
			STREAMING::REQUEST_ANIM_DICT(sVar7);
			func_670(iVar9);
			func_651(uParam1, 3);
			break;
		case 3:
			if (STREAMING::HAS_ANIM_DICT_LOADED(sVar7))
			{
				if (iVar11 > 0)
				{
					func_651(uParam1, 2);
				}
				else
				{
					func_651(uParam1, 10);
				}
			}
			break;
		case 2:
			if (func_671(&(uParam1->f_43)) > iVar11)
			{
				func_651(uParam1, 10);
			}
			break;
		case 10:
			if (iParam2 == uParam0->f_194)
			{
				if (func_32() == -1 && func_19())
				{
					iVar13 = 0;
					while (iVar13 < 4)
					{
						if (iVar13 != iParam2)
						{
							if (uParam0->f_199[iVar13 /*124*/].f_16 == 0 && func_204(uParam0, iVar13))
							{
								return;
							}
						}
						iVar13++;
					}
				}
			}
			func_651(uParam1, 12);
			break;
		case 12:
			func_246(&(uParam1->f_43));
			uParam1->f_3 = 0;
			uParam1->f_5 = 0;
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_198 = 4;
				func_438(uParam0, &iVar13);
				if (func_142())
				{
					if (uParam0->f_740)
					{
						func_442(uParam0, 21, iVar13, iParam2);
					}
				}
				else if (uParam0->f_740)
				{
					func_442(uParam0, 21, iParam2, iVar13);
				}
				else
				{
					func_442(uParam0, 25, iParam2, -1);
				}
			}
			if (func_657(&(uParam1->f_48[0 /*15*/]), 2) == 1)
			{
				func_651(uParam1, 53);
				return;
			}
			func_659(uParam0, iParam2, &vVar0);
			func_277(uParam0, iParam2, &vVar3);
			vVar0.f_2 = (vVar0.z - 0.5f);
			func_662(uParam0, uParam1, sVar7, sVar6, vVar0, vVar3, 536914306, 0, 0, 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar9, true, true);
			func_651(uParam1, 50);
			break;
		case 50:
			func_663(uParam1, sVar7, sVar6, &fVar12);
			if (fVar12 > 0.4f)
			{
				uParam1->f_16 = 1;
			}
			if (func_32() == -1)
			{
				if (uParam0->f_194 != -1 && uParam0->f_199[uParam0->f_194 /*124*/].f_16 == 1)
				{
					if (func_19())
					{
						func_672(1, *uParam0, uParam0->f_3, uParam1->f_9, -0.5f, -0.5f, 0.0f, &vVar0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar9, false, true);
						func_673(iVar9, vVar0);
						func_651(uParam1, 53);
						return;
					}
					else
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar9, false, true);
						func_23(uParam0, uParam1, 0.0f);
						func_651(uParam1, 53);
						return;
					}
				}
			}
			if ((!func_664(uParam1, sVar7, sVar6, 0) || fVar12 > 0.82f) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar9, joaat("INTERRUPTIBLE")))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar9, false);
				if (func_138(iVar9))
				{
					TASK::TASK_WANDER_STANDARD(iVar9, 40000.0f, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iVar9, true, true);
				}
				func_651(uParam1, 53);
			}
			break;
		case 53:
			if (uParam0->f_194 == iParam2)
			{
				uParam0->f_195 = 0;
				uParam0->f_196 = 1;
			}
			if (PED::IS_PED_A_PLAYER(iVar9))
			{
				PED::SET_PED_LEG_IK_MODE(iVar9, 2);
			}
			else
			{
				PED::SET_PED_LEG_IK_MODE(iVar9, 1);
			}
			STREAMING::REMOVE_ANIM_DICT(sVar7);
			func_651(uParam1, 54);
			if (iVar10 != 0)
			{
				func_238(uParam0, iParam2, iVar10);
			}
			break;
	}
}

void func_422(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];
	int iVar19;
	Vector3 vVar20;

	iVar19 = func_649(uParam1);
	vVar20 = { func_68(uParam0, uParam1) /*3*/ };
	uParam0->f_740 = 1;
	if (uParam1->f_8 && iVar19 < 51)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1250);
		}
		else if (iVar19 < 51)
		{
			func_651(uParam1, 51);
		}
	}
	if (iVar19 > 1 && iVar19 < 52)
	{
		if (uParam1->f_9 != uParam0->f_194)
		{
			if (uParam0->f_198 == 4 || func_236(uParam1, 19))
			{
				func_651(uParam1, 52);
			}
		}
		else if (func_209(uParam0, 19))
		{
			func_651(uParam1, 52);
		}
	}
	switch (iVar19)
	{
		case 1:
			if (uParam1->f_9 == uParam0->f_194)
			{
				uParam0->f_197 = 0;
				if (func_19())
				{
					func_20(*uParam0, 2.0f, 0);
				}
			}
			uParam0->f_988 = 0;
			func_230(uParam0);
			func_651(uParam1, 3);
			break;
		case 3:
			strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE");
			STREAMING::REQUEST_ANIM_DICT(&cVar11);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0");
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0");
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0");
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0");
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0");
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
				StringIntConCat(&cVar11, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar11);
				iVar0++;
			}
			func_651(uParam1, 4);
			break;
		case 4:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 52);
				return;
			}
			strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE");
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0");
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0");
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0");
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0");
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0");
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
				StringIntConCat(&cVar11, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar11))
				{
					return;
				}
				iVar0++;
			}
			if (uParam1->f_47 == 16 && uParam0->f_987)
			{
				func_651(uParam1, 16);
			}
			else
			{
				func_651(uParam1, 14);
			}
			break;
		case 14:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 54);
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0");
				strcpy_s(&cVar3, 64, "PLAYER_00_DEALER");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_DEALER_FEMALE");
				}
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0");
				strcpy_s(&cVar3, 64, "PLAYER_00_PLAYER");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_PLAYER_FEMALE");
				}
			}
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			func_674(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0, 2.0f, 1);
			func_651(uParam1, 15);
			break;
		case 15:
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0");
				strcpy_s(&cVar3, 64, "PLAYER_00_DEALER");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_DEALER_FEMALE");
				}
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0");
				strcpy_s(&cVar3, 64, "PLAYER_00_PLAYER");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_PLAYER_FEMALE");
				}
			}
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			if (func_664(&(uParam0->f_199[iParam2 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_DEALER@0");
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@INTRO_PLAYER@0");
			}
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 16);
			break;
		case 16:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 52);
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE");
				strcpy_s(&cVar3, 64, "PLAYER_00_SHUFFLE");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_SHUFFLE_FEMALE");
				}
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				strcpy_s(&cVar3, 64, "PLAYER_00_SHUFFLE_IDLE");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_SHUFFLE_IDLE_FEMALE");
				}
			}
			func_674(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0, 2.0f, 1);
			if (iParam2 == uParam0->f_192)
			{
				iVar0 = 0;
				while (iVar0 < 28)
				{
					if (iVar0 < 10)
					{
						strcpy_s(&cVar3, 64, "PIECE_0");
					}
					else
					{
						strcpy_s(&cVar3, 64, "PIECE_");
					}
					StringIntConCat(&cVar3, iVar0, 64);
					strcat_s(&cVar3, 64, "_SHUFFLE");
					func_675(uParam0->f_746[iVar0 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0);
					func_676(uParam0->f_746[iVar0 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0, 1065353216, 0, 0);
					iVar0++;
				}
			}
			func_651(uParam1, 17);
			break;
		case 17:
			strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE");
			strcpy_s(&cVar3, 64, "PLAYER_00_SHUFFLE");
			if (func_69(uParam0, &(uParam0->f_199[uParam0->f_192 /*124*/])))
			{
				strcpy_s(&cVar3, 64, "PLAYER_SHUFFLE_FEMALE");
			}
			if (func_664(&(uParam0->f_199[uParam0->f_192 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE");
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_IDLE@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 18);
			break;
		case 18:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 52);
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				strcpy_s(&cVar3, 64, "PLAYER_00_SHUFFLE_TO_POP");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_SHUFFLE_TO_POP_FEMALE");
				}
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				strcpy_s(&cVar3, 64, "PLAYER_00_IDLE_TO_POP");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_IDLE_TO_POP_FEMALE");
				}
			}
			func_70(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0, 0, 1);
			func_651(uParam1, 19);
			break;
		case 19:
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				strcpy_s(&cVar3, 64, "PLAYER_00_SHUFFLE_TO_POP");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_SHUFFLE_TO_POP_FEMALE");
				}
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
				strcpy_s(&cVar3, 64, "PLAYER_00_IDLE_TO_POP");
				if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
				{
					strcpy_s(&cVar3, 64, "PLAYER_IDLE_TO_POP_FEMALE");
				}
			}
			if (func_664(&(uParam0->f_199[iParam2 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			if (iParam2 == uParam0->f_192)
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@SHUFFLE_TO_POP@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
			}
			else
			{
				strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@IDLE_TO_POP@0");
				StringIntConCat(&cVar11, uParam1->f_10, 64);
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 20);
			break;
		case 20:
			strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			strcpy_s(&cVar3, 64, "PLAYER_00_POP_RACK");
			if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
			{
				strcpy_s(&cVar3, 64, "PLAYER_POP_RACK_FEMALE");
			}
			func_70(uParam0, uParam1, &cVar11, &cVar3, vVar20, 33154, 0.0f, 1, 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->f_12, true, true);
			if (iParam2 == uParam0->f_192)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					vVar20 = { func_677(uParam0, iVar2) /*3*/ };
					strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
					StringIntConCat(&cVar11, uParam0->f_199[iVar2 /*124*/].f_10, 64);
					iVar0 = 0;
					while (iVar0 < 7)
					{
						iVar1 = (iVar2 * 7 + iVar0);
						strcpy_s(&cVar3, 64, "PIECE_0");
						StringIntConCat(&cVar3, iVar0, 64);
						strcat_s(&cVar3, 64, "_POP_RACK");
						if (func_678(uParam0, iVar2))
						{
							func_676(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0, 1065353216, 0, 1);
						}
						else
						{
							func_675(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0.0f);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar1 /*8*/].f_1, uParam0->f_745, false);
						}
						iVar0++;
					}
					iVar2++;
				}
			}
			func_651(uParam1, 21);
			break;
		case 21:
			strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			strcpy_s(&cVar3, 64, "PLAYER_00_POP_RACK");
			if (func_69(uParam0, &(uParam0->f_199[iParam2 /*124*/])))
			{
				strcpy_s(&cVar3, 64, "PLAYER_POP_RACK_FEMALE");
			}
			if (func_679(uParam1))
			{
				if (func_236(uParam1, 19) || func_209(uParam0, 19))
				{
					func_651(uParam1, 52);
					return;
				}
			}
			if (func_664(&(uParam0->f_199[iParam2 /*124*/]), &cVar11, &cVar3, 0))
			{
				return;
			}
			func_516(uParam0, uParam1, 4.0f);
			func_651(uParam1, 53);
			break;
		case 51:
			if (iParam2 == uParam0->f_192)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					vVar20 = { func_677(uParam0, iVar2) /*3*/ };
					strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
					StringIntConCat(&cVar11, uParam0->f_199[iVar2 /*124*/].f_10, 64);
					iVar0 = 0;
					while (iVar0 < 7)
					{
						iVar1 = (iVar2 * 7 + iVar0);
						strcpy_s(&cVar3, 64, "PIECE_0");
						StringIntConCat(&cVar3, iVar0, 64);
						strcat_s(&cVar3, 64, "_POP_RACK");
						if (func_678(uParam0, iVar2))
						{
							func_676(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 1.0f, 1065353216, 0, 1);
						}
						else
						{
							func_676(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0.0f, 0.0f, 0, 1);
						}
						iVar0++;
					}
					iVar2++;
				}
			}
			func_651(uParam1, 53);
			break;
		case 52:
			iVar1 = 0;
			while (iVar1 < 28)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar1 /*8*/].f_1))
				{
					TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iVar1 /*8*/].f_1, 2, false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
				}
				iVar1++;
			}
			func_246(&(uParam1->f_43));
			func_516(uParam0, uParam1, 4.0f);
			func_651(uParam1, 55);
			break;
		case 55:
			if (func_368(&(uParam1->f_43)) > 0.25f)
			{
				func_651(uParam1, 54);
			}
			break;
		case 53:
			if (iParam2 == uParam0->f_192)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					vVar20 = { func_677(uParam0, iVar2) /*3*/ };
					strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
					StringIntConCat(&cVar11, uParam0->f_199[iVar2 /*124*/].f_10, 64);
					iVar0 = 0;
					while (iVar0 < 7)
					{
						iVar1 = (iVar2 * 7 + iVar0);
						strcpy_s(&cVar3, 64, "PIECE_0");
						StringIntConCat(&cVar3, iVar0, 64);
						strcat_s(&cVar3, 64, "_POP_RACK");
						if (func_678(uParam0, iVar2))
						{
							func_675(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 1.0f);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar1 /*8*/].f_1, uParam0->f_745, false);
						}
						else
						{
							func_675(uParam0->f_746[iVar1 /*8*/].f_1, &cVar11, &cVar3, *uParam0, vVar20, 0.0f);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iVar1 /*8*/].f_1, true);
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar1 /*8*/].f_1, uParam0->f_745, false);
						}
						iVar0++;
					}
					iVar2++;
				}
			}
			if (!func_236(uParam1, 13))
			{
				uParam1->f_18.f_19 = 0;
				func_650(uParam0, uParam1, 0, 1, 1056964608);
				func_680(1, 2);
				if (uParam1->f_8)
				{
					BUILTIN::WAIT(125);
					uParam1->f_8 = 0;
					CAM::DO_SCREEN_FADE_IN(1250);
				}
			}
			strcpy_s(&cVar11, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
			StringIntConCat(&cVar11, uParam1->f_10, 64);
			STREAMING::REMOVE_ANIM_DICT(&cVar11);
			func_651(uParam1, 54);
			break;
	}
}

void func_423(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	char cVar12[64];
	int iVar20;
	Vector3 vVar21;

	iVar20 = func_649(uParam1);
	vVar21 = { func_68(uParam0, uParam1) /*3*/ };
	if (uParam1->f_8 && iVar20 < 51)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(1250);
		}
		else if (iVar20 < 51)
		{
			func_651(uParam1, 51);
		}
	}
	if (iVar20 > 1 && iVar20 < 52)
	{
		if (uParam1->f_9 != uParam0->f_194)
		{
			if (uParam0->f_198 == 4 || func_236(uParam1, 19))
			{
				func_651(uParam1, 51);
			}
		}
		else if (func_209(uParam0, 19))
		{
			func_651(uParam1, 51);
		}
	}
	switch (iVar20)
	{
		case 1:
			if (func_236(uParam1, 19) || func_209(uParam0, 19))
			{
				func_651(uParam1, 54);
				return;
			}
			func_651(uParam1, 3);
			break;
		case 3:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
			STREAMING::REQUEST_ANIM_DICT(&cVar12);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0");
				StringIntConCat(&cVar12, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar12);
				strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0");
				StringIntConCat(&cVar12, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar12);
				strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0");
				StringIntConCat(&cVar12, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar12);
				iVar0++;
			}
			func_651(uParam1, 4);
			break;
		case 4:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0");
				StringIntConCat(&cVar12, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
				{
					return;
				}
				strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0");
				StringIntConCat(&cVar12, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
				{
					return;
				}
				strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0");
				StringIntConCat(&cVar12, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar12))
				{
					return;
				}
				iVar0++;
			}
			if (iParam2 == uParam0->f_192)
			{
				func_651(uParam1, 22);
			}
			else
			{
				func_651(uParam1, 26);
			}
			break;
		case 26:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0");
			strcpy_s(&cVar4, 64, "PLAYER_00_IDLE");
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_IDLE_FEMALE");
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			func_651(uParam1, 27);
			break;
		case 27:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@IDLE@0");
			strcpy_s(&cVar4, 64, "PLAYER_00_IDLE");
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_IDLE_FEMALE");
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_651(uParam1, 53);
			break;
		case 22:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0");
			strcpy_s(&cVar4, 64, "PLAYER_00_INTRO");
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_INTRO_FEMALE");
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			func_651(uParam1, 23);
			break;
		case 23:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@INTRO@0");
			strcpy_s(&cVar4, 64, "PLAYER_00_INTRO");
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_INTRO_FEMALE");
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_651(uParam1, 24);
			break;
		case 24:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
			strcpy_s(&cVar4, 64, "PLAYER_00_COLLECT_TILES");
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_COLLECT_TILES_FEMALE");
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->f_12, true, true);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!func_678(uParam0, iVar0))
				{
					iVar3 = func_681(iVar0, uParam0->f_192);
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = (iVar0 * 7 + iVar1);
						if (iVar3 < 10)
						{
							strcpy_s(&cVar4, 64, "PLAYER_00_PIECE_0");
						}
						else
						{
							strcpy_s(&cVar4, 64, "PLAYER_00_PIECE_");
						}
						StringIntConCat(&cVar4, iVar3, 64);
						strcat_s(&cVar4, 64, "_COLLECT_TILES");
						func_676(uParam0->f_746[iVar2 /*8*/].f_1, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", &cVar4, *uParam0, vVar21, 0, 1065353216, 0, 1);
						iVar3++;
						iVar1++;
					}
				}
				iVar0++;
			}
			func_651(uParam1, 25);
			break;
		case 25:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
			strcpy_s(&cVar4, 64, "PLAYER_00_COLLECT_TILES");
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_COLLECT_TILES_FEMALE");
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_651(uParam1, 28);
			break;
		case 28:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0");
			strcpy_s(&cVar4, 64, "PLAYER_00_OUTRO");
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_OUTRO_FEMALE");
			}
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			func_651(uParam1, 29);
			break;
		case 29:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@OUTRO@0");
			strcpy_s(&cVar4, 64, "PLAYER_00_OUTRO");
			StringIntConCat(&cVar12, uParam1->f_10, 64);
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar4, 64, "PLAYER_OUTRO_FEMALE");
			}
			if (func_664(uParam1, &cVar12, &cVar4, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar12);
			func_656(uParam0, uParam1, (1 << 30), 0);
			func_651(uParam1, 53);
			break;
		case 51:
			strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
			strcpy_s(&cVar4, 64, "PLAYER_00_COLLECT_TILES");
			func_70(uParam0, uParam1, &cVar12, &cVar4, vVar21, 33154, 0, 0, 1);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!func_678(uParam0, iVar0))
				{
					iVar3 = func_681(iVar0, uParam0->f_192);
					iVar1 = 0;
					while (iVar1 < 7)
					{
						iVar2 = (iVar0 * 7 + iVar1);
						if (iVar3 < 10)
						{
							strcpy_s(&cVar4, 64, "PLAYER_00_PIECE_0");
						}
						else
						{
							strcpy_s(&cVar4, 64, "PLAYER_00_PIECE_");
						}
						StringIntConCat(&cVar4, iVar3, 64);
						strcat_s(&cVar4, 64, "_COLLECT_TILES");
						func_676(uParam0->f_746[iVar2 /*8*/].f_1, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT", &cVar4, *uParam0, vVar21, 1.0f, 1065353216, 0, 1);
						iVar3++;
						iVar1++;
					}
				}
				iVar0++;
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam1->f_12, false, true);
			func_650(uParam0, uParam1, 0, 1, 1056964608);
			func_651(uParam1, 53);
			break;
		case 53:
			if (func_654(&(uParam1->f_43)) > 0.25f)
			{
				func_680(1, 2);
				strcpy_s(&cVar12, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@COLLECT_TILES@COLLECT");
				STREAMING::REMOVE_ANIM_DICT(&cVar12);
				if (uParam1->f_8)
				{
					uParam1->f_8 = 0;
					BUILTIN::WAIT(125);
					CAM::DO_SCREEN_FADE_IN(1250);
				}
				func_650(uParam0, uParam1, 0, 1, 1056964608);
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_424(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_649(uParam1);
	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar2 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	iVar3 = (2 + iParam2);
	switch (iVar0)
	{
		case 1:
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
			}
			else
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_504(uParam0, iVar3, iVar1, &iVar2))
				{
					func_651(uParam1, 54);
					return;
				}
				uParam1->f_18.f_22 = uParam0->f_746[iVar2 /*8*/].f_4;
				uParam1->f_18.f_23 = iVar2;
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar2);
				if (func_682(uParam0->f_746[iVar2 /*8*/].f_4))
				{
					func_683(uParam1, "GET_TILE_RACK_LH");
				}
				else
				{
					func_683(uParam1, "GET_TILE_RACK_RH");
				}
				func_651(uParam1, 33);
			}
			break;
		case 33:
			bVar4 = func_682(uParam0->f_746[iVar2 /*8*/].f_4);
			if (func_684(uParam1, "Pickup"))
			{
				if (bVar4 == 1)
				{
					func_685(uParam0, uParam1, iVar2, 0, 0);
				}
				else
				{
					func_685(uParam0, uParam1, iVar2, 1, 0);
				}
				if (iVar2 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar2 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("COLLECT", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar2 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
				if (uParam1->f_48[1 /*15*/] == 8)
				{
					func_651(uParam1, 53);
					return;
				}
			}
			if (func_686(uParam1, "GET_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "GET_TILE_RACK_RH_ClipFinished", 1))
			{
				if (bVar4)
				{
					func_683(uParam1, "LH_TILE_IDLE");
					func_685(uParam0, uParam1, iVar2, 0, 0);
				}
				else
				{
					func_683(uParam1, "RH_TILE_IDLE");
					func_685(uParam0, uParam1, iVar2, 1, 0);
				}
				func_651(uParam1, 53);
				func_246(&(uParam1->f_43));
			}
			break;
		case 53:
			func_651(uParam1, 54);
			break;
	}
}

void func_425(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_153(uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = func_649(uParam1);
	iVar2 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar3 = (2 + iParam2);
	iVar5 = func_657(&(uParam1->f_48[0 /*15*/]), 3);
	iVar6 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	switch (iVar1)
	{
		case 1:
			if (!func_687(uParam1, &iVar4))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
				func_651(uParam1, 54);
				return;
			}
			if (uParam1->f_42 == -1)
			{
				func_651(uParam1, 54);
				return;
			}
			if (joaat("RH_TILE_IDLE") != iVar4 && joaat("LH_TILE_IDLE") != iVar4)
			{
				if (func_682(iVar5))
				{
					func_650(uParam0, uParam1, "LH_TILE_IDLERequest", 1, 1056964608);
				}
				else
				{
					func_650(uParam0, uParam1, "RH_TILE_IDLERequest", 1, 1056964608);
				}
			}
			func_651(uParam1, 30);
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_504(uParam0, iVar3, iVar2, &iVar6))
				{
					func_651(uParam1, 54);
					return;
				}
				iVar5 = uParam0->f_746[iVar6 /*8*/].f_4;
				uParam1->f_18.f_22 = iVar5;
				uParam1->f_18.f_23 = iVar6;
				uParam1->f_18.f_3 = 0;
				func_289(&(uParam1->f_48[0 /*15*/]), 3, iVar5);
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar6);
				func_688(uParam1, iVar5);
				if (func_682(iVar5))
				{
					func_685(uParam0, uParam1, iVar6, 0, 0);
					func_683(uParam1, "REPLACE_TILE_RACK_LH");
				}
				else
				{
					func_685(uParam0, uParam1, iVar6, 1, 0);
					func_683(uParam1, "REPLACE_TILE_RACK_RH");
				}
				func_651(uParam1, 34);
				func_246(&(uParam1->f_43));
			}
			break;
		case 34:
			if (func_684(uParam1, "Release"))
			{
				if (iVar6 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar6 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("INBOX", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar6 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
				func_689(uParam0, iVar6, iParam2, iVar5, uParam0->f_746[iVar6 /*8*/].f_5);
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				uParam1->f_18.f_3 = 1;
				func_690(uParam1);
			}
			if ((func_686(uParam1, "REPLACE_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "REPLACE_TILE_RACK_RH_ClipFinished", 1)) || func_368(&(uParam1->f_43)) > 2.0f)
			{
				func_690(uParam1);
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				uParam1->f_18.f_3 = 1;
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
				func_246(&(uParam1->f_43));
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				func_651(uParam1, 53);
			}
			break;
		case 53:
			uParam1->f_18.f_3 = 0;
			func_651(uParam1, 54);
			break;
	}
}

void func_426(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;

	iVar0 = func_153(uParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = func_649(uParam1);
	vVar2 = { func_691(&(uParam1->f_48[0 /*15*/])) /*3*/ };
	iVar5 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar6 = func_657(&(uParam1->f_48[0 /*15*/]), 1);
	iVar7 = func_657(&(uParam1->f_48[0 /*15*/]), 2);
	bVar8 = func_657(&(uParam1->f_48[0 /*15*/]), 3) == true;
	iVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	iVar11 = func_657(&(uParam1->f_48[0 /*15*/]), 5);
	iVar12 = func_657(&(uParam1->f_48[0 /*15*/]), 7);
	iVar13 = (2 + iParam2);
	if (bVar8)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam1->f_12, 1368185894))
		{
			uParam1->f_18.f_22 = -1;
			uParam1->f_18.f_23 = -1;
			func_690(uParam1);
			func_651(uParam1, 54);
		}
	}
	switch (iVar1)
	{
		case 1:
			uParam1->f_18.f_13 = 0;
			func_232(uParam0, 1);
			if (uParam0->f_741)
			{
				func_651(uParam1, 54);
				return;
			}
			if (!func_687(uParam1, &iVar14))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
				func_651(uParam1, 53);
				return;
			}
			if (joaat("GET_TILE_RACK_LH") == iVar14 || joaat("GET_TILE_RACK_RH") == iVar14)
			{
				func_651(uParam1, 31);
				return;
			}
			if (func_692(uParam1))
			{
				func_651(uParam1, 30);
				return;
			}
			if (joaat("RH_TILE_IDLE") != iVar14 && joaat("LH_TILE_IDLE") != iVar14)
			{
				if (func_682(iVar10))
				{
					func_650(uParam0, uParam1, "LH_TILE_IDLERequest", 1, 1056964608);
				}
				else
				{
					func_650(uParam0, uParam1, "RH_TILE_IDLERequest", 1, 1056964608);
				}
			}
			func_651(uParam1, 30);
			break;
		case 31:
			if (((func_686(uParam1, "GET_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "GET_TILE_RACK_RH_ClipFinished", 1)) || func_686(uParam1, "Blend", 1)) || uParam1->f_18.f_21 > 0.65f)
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_504(uParam0, iVar13, iVar5, &iVar11))
				{
					func_651(uParam1, 53);
					return;
				}
				iVar10 = uParam0->f_746[iVar11 /*8*/].f_4;
				uParam1->f_18.f_22 = iVar10;
				uParam1->f_18.f_23 = iVar11;
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar10);
				func_289(&(uParam1->f_48[0 /*15*/]), 5, iVar11);
				if (iVar7 != 29)
				{
					func_263(uParam0, iVar11, iVar7);
				}
				func_693(uParam1, vVar2);
				fVar16 = func_694(iParam2, iVar6);
				func_695(uParam1, fVar16);
				func_688(uParam1, iVar10);
				func_696(uParam1);
				bVar9 = (func_682(iVar10) || uParam0->f_199[iParam2 /*124*/].f_14 == 1);
				if (!bVar8)
				{
					if (iVar12 > 0)
					{
						func_442(uParam0, 57, iParam2, -1);
					}
					else if (iVar12 == -1)
					{
						func_442(uParam0, 59, iParam2, -1);
					}
					else
					{
						func_442(uParam0, 58, iParam2, -1);
					}
				}
				else
				{
					func_442(uParam0, 33, iParam2, -1);
				}
				if (bVar9)
				{
					func_685(uParam0, uParam1, iVar11, 0, 0);
					func_683(uParam1, "LH_MOVE");
				}
				else
				{
					func_685(uParam0, uParam1, iVar11, 1, 0);
					func_683(uParam1, "RH_MOVE");
				}
				func_651(uParam1, 37);
			}
			break;
		case 37:
			bVar9 = (func_682(iVar10) || uParam0->f_199[iParam2 /*124*/].f_14 == 1);
			if (uParam1->f_18.f_13 == 0 && !func_600(iVar7))
			{
				if (func_686(&(uParam0->f_199[iParam2 /*124*/]), "FLIP", 0))
				{
					if (func_697(&(uParam0->f_199[iParam2 /*124*/]), iVar6, bVar9))
					{
						if (bVar9)
						{
							func_685(uParam0, uParam1, iVar11, 0, 1);
						}
						else
						{
							func_685(uParam0, uParam1, iVar11, 1, 1);
						}
						uParam1->f_18.f_13 = 1;
					}
				}
			}
			if (func_686(uParam1, "LH_MOVE_ClipFinished", 1) || func_686(uParam1, "RH_MOVE_ClipFinished", 1))
			{
				uParam0->f_193++;
				func_698(uParam0, iParam2, iVar11);
				func_699(uParam0, iVar11, vVar2, iVar6, 0);
				if (iVar11 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar11 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("PLACE", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar11 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
				if (bVar9)
				{
					func_683(uParam1, "LH_MOVE_TO_IDLE");
				}
				else
				{
					func_683(uParam1, "RH_MOVE_TO_IDLE");
				}
				if (bVar8)
				{
					if (func_486(uParam0, &iVar15, iParam2))
					{
						if (func_142())
						{
							func_442(uParam0, 51, iVar15, iParam2);
						}
						else
						{
							func_442(uParam0, 39, iParam2, -1);
						}
					}
				}
				uParam1->f_18.f_3 = 0;
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				func_690(uParam1);
				func_651(uParam1, 38);
			}
			break;
		case 38:
			if (func_686(uParam1, "LH_MOVE_TO_IDLE_ClipFinished", 1) || func_686(uParam1, "RH_MOVE_TO_IDLE_ClipFinished", 1))
			{
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				uParam1->f_18.f_19 = 0;
				uParam1->f_18.f_22 = -1;
				uParam1->f_18.f_23 = -1;
				func_651(uParam1, 54);
			}
			break;
		case 53:
			uParam1->f_18.f_22 = -1;
			uParam1->f_18.f_23 = -1;
			func_651(uParam1, 54);
			break;
	}
}

void func_427(var uParam0, var uParam1, int iParam2)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	Vector3 vVar15;
	Vector3 vVar18;

	iVar3 = func_153(uParam1);
	iVar4 = func_649(uParam1);
	iVar6 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	bVar7 = func_657(&(uParam1->f_48[0 /*15*/]), 1) != false;
	iVar8 = func_657(&(uParam1->f_48[0 /*15*/]), 2);
	iVar9 = func_657(&(uParam1->f_48[0 /*15*/]), 3);
	iVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 4);
	iVar11 = func_657(&(uParam1->f_48[0 /*15*/]), 5);
	switch (iVar4)
	{
		case 1:
			uParam1->f_5 = 1;
			if (uParam0->f_741)
			{
				func_651(uParam1, 54);
				return;
			}
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
			}
			else
			{
				func_651(uParam1, 2);
			}
			func_246(&(uParam1->f_43));
			if (uParam1->f_9 == uParam0->f_194)
			{
				uParam0->f_197 = 1;
			}
			break;
		case 2:
			if (func_671(&(uParam1->f_43)) > iVar11)
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				if (!func_700(uParam0->f_981[iParam2], &iVar9, 20))
				{
					func_651(uParam1, 54);
					return;
				}
				if (!func_373(uParam0, 1, &iVar10))
				{
					func_651(uParam1, 54);
					return;
				}
				uParam1->f_18.f_22 = iVar9;
				uParam1->f_18.f_23 = iVar10;
				func_289(&(uParam1->f_48[0 /*15*/]), 2, uParam0->f_746[iVar10 /*8*/].f_5);
				func_289(&(uParam1->f_48[0 /*15*/]), 3, iVar9);
				func_289(&(uParam1->f_48[0 /*15*/]), 4, iVar10);
				func_701(uParam0, iVar10, func_372(iParam2), iVar9);
				func_702(uParam0, iVar10, &vVar0);
				func_693(uParam1, vVar0);
				func_696(uParam1);
				fVar13 = func_703(iVar3, uParam0->f_746[iVar10 /*8*/].f_1, 1, 1);
				if (iVar10 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar10 /*8*/].f_1))
					{
						fVar14 = func_558(ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar3), ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_746[iVar10 /*8*/].f_1));
						uParam1->f_18.f_10 = MISC::ABSF(fVar14);
					}
				}
				if (func_682(iVar9))
				{
					func_683(uParam1, "GET_TILE_BONEYARD_LH");
				}
				else
				{
					func_683(uParam1, "GET_TILE_BONEYARD_RH");
				}
				if (fVar13 > 0.0f)
				{
				}
				func_651(uParam1, 39);
			}
			break;
		case 39:
			if ((func_686(uParam1, "GET_TILE_BONEYARD_LH_ClipFinished", 1) || func_686(uParam1, "GET_TILE_BONEYARD_RH_ClipFinished", 1)) || func_684(uParam1, "Pickup"))
			{
				if (func_684(uParam1, "Pickup"))
				{
				}
				if (iVar10 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar10 /*8*/].f_1))
					{
						vVar15 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, true, false) /*3*/ };
						vVar18 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_746[iVar10 /*8*/].f_1, 2) /*3*/ };
						AUDIO::_PLAY_SOUND_FROM_POSITION("TAKE", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
						iVar12 = ENTITY::GET_ENTITY_MODEL(uParam0->f_746[iVar10 /*8*/].f_1);
						func_266(&(uParam0->f_746[iVar10 /*8*/].f_1));
						uParam0->f_746[iVar10 /*8*/].f_1 = OBJECT::CREATE_OBJECT(iVar12, vVar15, false, true, false, false, false);
						ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, vVar15, true, false, true, true);
						ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iVar10 /*8*/].f_1, vVar18, 2, true);
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iVar10 /*8*/].f_1, uParam0->f_745, false);
					}
				}
				if (func_682(iVar9))
				{
					func_685(uParam0, uParam1, iVar10, 0, 0);
					func_683(uParam1, "LH_TO_MID_POINT");
				}
				else
				{
					func_685(uParam0, uParam1, iVar10, 1, 0);
					func_683(uParam1, "RH_TO_MID_POINT");
				}
				func_651(uParam1, 40);
			}
			break;
		case 40:
			if (func_686(uParam1, "LH_TO_MID_POINT_ClipFinished", 1) || func_686(uParam1, "RH_TO_MID_POINT_ClipFinished", 1))
			{
				iVar6--;
				func_289(&(uParam1->f_48[0 /*15*/]), 0, iVar6);
				if (uParam0->f_741)
				{
					if (func_682(iVar9))
					{
						func_683(uParam1, "PLACE_TILE_RACK_LH");
					}
					else
					{
						func_683(uParam1, "PLACE_TILE_RACK_RH");
					}
					func_651(uParam1, 41);
				}
				else if (bVar7 && iVar6 <= 0)
				{
					func_442(uParam0, 60, iParam2, -1);
					if (func_682(iVar9))
					{
						func_685(uParam0, uParam1, iVar10, 0, 0);
						func_683(uParam1, "LH_TILE_IDLE");
					}
					else
					{
						func_685(uParam0, uParam1, iVar10, 1, 0);
						func_683(uParam1, "RH_TILE_IDLE");
					}
					func_651(uParam1, 54);
				}
				else
				{
					if (func_142())
					{
						if (func_486(uParam0, &iVar5, iParam2))
						{
							func_442(uParam0, 22, iVar5, iParam2);
						}
					}
					else
					{
						iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
						switch (iVar5)
						{
							case 0:
								func_442(uParam0, 61, iParam2, -1);
								break;
							case 1:
								func_442(uParam0, 62, iParam2, -1);
								break;
							case 2:
								func_442(uParam0, 78, iParam2, -1);
								break;
							case 3:
								func_442(uParam0, 69, iParam2, -1);
								break;
						}
					}
					if (func_682(iVar9))
					{
						func_683(uParam1, "PLACE_TILE_RACK_LH");
					}
					else
					{
						func_683(uParam1, "PLACE_TILE_RACK_RH");
					}
					func_651(uParam1, 41);
				}
			}
			break;
		case 41:
			if (func_684(uParam1, "Release"))
			{
				func_689(uParam0, iVar10, iParam2, iVar9, iVar8);
				func_690(uParam1);
				uParam1->f_18.f_3 = 1;
				if (iVar10 != -1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar10 /*8*/].f_1))
					{
						AUDIO::_PLAY_SOUND_FROM_POSITION("INBOX", ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar10 /*8*/].f_1, true, false), "MGDOM_Sounds", false, 0, true, 0);
					}
				}
			}
			if (func_686(uParam1, "PLACE_TILE_RACK_LH_ClipFinished", 1) || func_686(uParam1, "PLACE_TILE_RACK_RH_ClipFinished", 1))
			{
				func_689(uParam0, iVar10, iParam2, iVar9, iVar8);
				func_690(uParam1);
				if (uParam1->f_48[0 /*15*/] == 9)
				{
					uParam1->f_18.f_22 = -1;
					uParam1->f_18.f_23 = -1;
				}
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				func_651(uParam1, 53);
			}
			break;
		case 53:
			uParam1->f_18.f_19 = 0;
			if (func_236(uParam1, 19))
			{
				func_651(uParam1, 54);
				return;
			}
			if (uParam0->f_741)
			{
				func_651(uParam1, 54);
			}
			else if (iVar6 > 0)
			{
				func_651(uParam1, 30);
			}
			else
			{
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_428(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	char cVar2[64];
	bool bVar10;

	iVar0 = func_649(uParam1);
	sVar1 = "PBL_WIN_A";
	strcpy_s(&cVar2, 64, "script@mini_game@dominoes@player_00_WIN");
	bVar10 = func_657(&(uParam1->f_48[0 /*15*/]), 1) != false;
	uParam0->f_740 = 0;
	switch (iVar0)
	{
		case 1:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_696))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_696);
			}
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
			{
				case 0:
					sVar1 = "PBL_WIN_A";
					break;
				case 1:
					sVar1 = "PBL_WIN_B";
					break;
				case 2:
					sVar1 = "PBL_WIN_C";
					break;
				case 3:
					sVar1 = "PBL_WIN_D";
					break;
			}
			strcpy_s(&cVar2, 64, "script@mini_game@dominoes@player_0");
			StringIntConCat(&cVar2, uParam1->f_10, 64);
			strcat_s(&cVar2, 64, "_WIN");
			if (func_69(uParam0, uParam1))
			{
				strcpy_s(&cVar2, 64, "script@mini_game@dominoes@player_female_win");
			}
			uParam0->f_696 = ANIMSCENE::_CREATE_ANIM_SCENE(&cVar2, 2, sVar1, false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_696);
			func_651(uParam1, 3);
			break;
		case 3:
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_696, true, false))
			{
				return;
			}
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_696, *uParam0, func_68(uParam0, uParam1), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_696, "player", uParam1->f_12, 0);
			ANIMSCENE::START_ANIM_SCENE(uParam0->f_696);
			if (bVar10)
			{
				func_442(uParam0, 38, iParam2, -1);
			}
			else
			{
				func_442(uParam0, 40, iParam2, -1);
			}
			func_651(uParam1, 50);
			break;
		case 50:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_696) >= 0.97f)
			{
				CAM::_0x04084490CC302CFB();
				func_65(uParam0);
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_696) >= 0.99f)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_696))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_696);
				}
				func_656(uParam0, uParam1, (1 << 30), 0);
				uParam0->f_696 = -1;
				uParam1->f_18.f_19 = 0;
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_429(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_649(uParam1);
	uParam0->f_740 = 0;
	switch (iVar0)
	{
		case 1:
			if (uParam1->f_5 == 0)
			{
				func_651(uParam1, 54);
				return;
			}
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
			}
			else
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (func_652(uParam1))
			{
				func_704(uParam1);
				func_683(uParam1, "LOSE");
				func_651(uParam1, 38);
			}
			break;
		case 38:
			if (func_686(uParam1, "LOSE_ClipFinished", 1))
			{
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			if (func_686(uParam1, "Idle", 1))
			{
				uParam1->f_18.f_19 = 0;
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_430(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_649(uParam1);
	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	switch (iVar0)
	{
		case 1:
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
			}
			else
			{
				func_651(uParam1, 2);
			}
			func_651(uParam1, 2);
			break;
		case 2:
			if (func_671(&(uParam1->f_43)) > iVar1)
			{
				func_651(uParam1, 30);
			}
			break;
		case 30:
			if (!func_511(uParam1))
			{
				func_650(uParam0, uParam1, 0, 1, 1056964608);
			}
			else
			{
				func_683(uParam1, "Pass");
				func_442(uParam0, 56, iParam2, -1);
				func_705(uParam1);
				func_651(uParam1, 38);
			}
			break;
		case 38:
			if (func_686(uParam1, "Pass_ClipFinished", 1))
			{
				if (uParam3->f_1330.f_194 == uParam1->f_9)
				{
					uParam3->f_2334.f_261 = 0;
					uParam3->f_2334.f_410.f_20 = 0;
				}
				func_449(uParam1, 0);
				func_683(uParam1, "Idle");
				func_651(uParam1, 50);
			}
			break;
		case 50:
			func_449(uParam1, 0);
			if (func_686(uParam1, "Idle", 1))
			{
				uParam1->f_18.f_19 = 0;
				func_651(uParam1, 54);
			}
			break;
	}
}

void func_431(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	char cVar6[64];
	char cVar14[64];
	int iVar22;

	iVar1 = func_657(&(uParam1->f_48[0 /*15*/]), 0);
	iVar2 = func_649(uParam1);
	vVar3 = { func_68(uParam0, uParam1) /*3*/ };
	iVar22 = (2 + iParam2);
	strcpy_s(&cVar14, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_RACK@PLAYER@0");
	StringIntConCat(&cVar14, uParam1->f_10, 64);
	switch (iVar2)
	{
		case 1:
			if (uParam1->f_5 == 0)
			{
				func_651(uParam1, 54);
				return;
			}
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (uParam0->f_746[iVar0 /*8*/] == iVar22)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0 /*8*/].f_1))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_746[iVar0 /*8*/].f_1, uParam0->f_976[iParam2], true, 0))
						{
							func_246(&(uParam1->f_43));
							STREAMING::REQUEST_ANIM_DICT(&cVar14);
							func_651(uParam1, 2);
							return;
						}
					}
				}
				iVar0++;
			}
			func_651(uParam1, 54);
			break;
		case 2:
			if (func_671(&(uParam1->f_43)) > iVar1)
			{
				func_651(uParam1, 3);
			}
			break;
		case 3:
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar14))
			{
				return;
			}
			func_651(uParam1, 12);
			break;
		case 12:
			strcpy_s(&cVar6, 64, "PLAYER_00_CLEAR_RACK");
			func_674(uParam0, uParam1, &cVar14, &cVar6, vVar3, 8578, 0, 1090519040, 1);
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (uParam0->f_746[iVar0 /*8*/] == iVar22)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0 /*8*/].f_1))
					{
						if (ENTITY::IS_ENTITY_IN_VOLUME(uParam0->f_746[iVar0 /*8*/].f_1, uParam0->f_976[iParam2], true, 0))
						{
							if (uParam0->f_746[iVar0 /*8*/].f_4 < 10)
							{
								strcpy_s(&cVar6, 64, "PLAYER_00_PIECE_0");
							}
							else
							{
								strcpy_s(&cVar6, 64, "PLAYER_00_PIECE_");
							}
							StringIntConCat(&cVar6, uParam0->f_746[iVar0 /*8*/].f_4, 64);
							strcat_s(&cVar6, 64, "_CLEAR_RACK");
							func_676(uParam0->f_746[iVar0 /*8*/].f_1, &cVar14, &cVar6, *uParam0, vVar3, 0, 1065353216, 0, 1);
						}
						func_553(uParam0, iVar0, 0, uParam0->f_746[iVar0 /*8*/].f_4, -1);
					}
				}
				iVar0++;
			}
			func_651(uParam1, 50);
			break;
		case 50:
			strcpy_s(&cVar6, 64, "PLAYER_00_CLEAR_RACK");
			if (func_664(uParam1, &cVar14, &cVar6, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar14);
			func_651(uParam1, 54);
			break;
	}
}

void func_432(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	char cVar9[64];
	int iVar17;
	Vector3 vVar18;
	bool bVar21;

	iVar17 = func_649(uParam1);
	vVar18 = { func_68(uParam0, uParam1) /*3*/ };
	bVar21 = func_657(&(uParam1->f_48[0 /*15*/]), 0) != false;
	switch (iVar17)
	{
		case 1:
			if (uParam1->f_5 == 0)
			{
				func_651(uParam1, 54);
				return;
			}
			uParam0->f_987 = 0;
			func_246(&(uParam1->f_43));
			func_651(uParam1, 3);
			break;
		case 3:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00");
			STREAMING::REQUEST_ANIM_DICT(&cVar9);
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES");
			STREAMING::REQUEST_ANIM_DICT(&cVar9);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0");
				StringIntConCat(&cVar9, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar9);
				strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0");
				StringIntConCat(&cVar9, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar9);
				strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0");
				StringIntConCat(&cVar9, iVar0, 64);
				STREAMING::REQUEST_ANIM_DICT(&cVar9);
				iVar0++;
			}
			func_651(uParam1, 4);
			break;
		case 4:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00");
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
			{
				return;
			}
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES");
			if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 4)
			{
				strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0");
				StringIntConCat(&cVar9, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
				{
					return;
				}
				strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0");
				StringIntConCat(&cVar9, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
				{
					return;
				}
				strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0");
				StringIntConCat(&cVar9, iVar0, 64);
				if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar9))
				{
					return;
				}
				iVar0++;
			}
			func_651(uParam1, 12);
			break;
		case 12:
			if (bVar21)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (func_204(uParam0, iVar0))
					{
						if (func_387(&(uParam0->f_199[iVar0 /*124*/]), 15))
						{
							return;
						}
					}
					iVar0++;
				}
			}
			if (iParam2 == uParam0->f_192)
			{
				func_651(uParam1, 42);
			}
			else
			{
				func_651(uParam1, 46);
			}
			break;
		case 46:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0");
			strcpy_s(&cVar1, 64, "PLAYER_00_IDLE");
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			func_651(uParam1, 47);
			break;
		case 47:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@IDLE@0");
			strcpy_s(&cVar1, 64, "PLAYER_00_IDLE");
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			func_651(uParam1, 53);
			break;
		case 42:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0");
			strcpy_s(&cVar1, 64, "PLAYER_00_INTRO");
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			func_651(uParam1, 43);
			break;
		case 43:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@INTRO@0");
			strcpy_s(&cVar1, 64, "PLAYER_00_INTRO");
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			if (iParam2 == uParam0->f_192)
			{
				func_651(uParam1, 44);
			}
			else
			{
				func_651(uParam1, 46);
			}
			break;
		case 44:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00");
			strcpy_s(&cVar1, 64, "PLAYER_00_CLEAR_BOARD");
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			iVar0 = 0;
			while (iVar0 < 28)
			{
				if (uParam0->f_746[iVar0 /*8*/] == 0)
				{
					func_553(uParam0, iVar0, 6, -1, -1);
				}
				iVar0++;
			}
			func_706(&(uParam0->f_35));
			func_651(uParam1, 45);
			break;
		case 45:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@00");
			strcpy_s(&cVar1, 64, "PLAYER_00_CLEAR_BOARD");
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				func_707(uParam0, uParam1->f_12);
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			func_651(uParam1, 48);
			break;
		case 48:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0");
			strcpy_s(&cVar1, 64, "PLAYER_00_OUTRO");
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			func_70(uParam0, uParam1, &cVar9, &cVar1, vVar18, 33154, 0, 0, 1);
			func_651(uParam1, 49);
			break;
		case 49:
			strcpy_s(&cVar9, 64, "MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@OUTRO@0");
			strcpy_s(&cVar1, 64, "PLAYER_00_OUTRO");
			StringIntConCat(&cVar9, uParam1->f_10, 64);
			if (func_664(uParam1, &cVar9, &cVar1, 0))
			{
				return;
			}
			STREAMING::REMOVE_ANIM_DICT(&cVar9);
			uParam0->f_988 = 1;
			func_516(uParam0, uParam1, 1090519040);
			func_651(uParam1, 53);
			break;
		case 53:
			func_651(uParam1, 54);
			break;
	}
}

int func_433(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	*uParam2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iVar0 /*8*/].f_1))
		{
			if (uParam0->f_746[iVar0 /*8*/] != 6)
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uParam0->f_746[iVar0 /*8*/].f_1, iParam1))
				{
					*uParam2 = iVar0;
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

struct<15> /*120*/ func_434(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<15> /*120*/ sVar2;
	struct<15> /*120*/ sVar17;

	iVar1 = (uParam0->f_48 - 1);
	sVar2.f_1 = 8;
	sVar2.f_14 = -1;
	sVar17 = { uParam0->f_48[0 /*15*/] /*15*/ };
	iVar0 = 1;
	while (iVar0 <= iVar1)
	{
		uParam0->f_48[(iVar0 - 1) /*15*/] = { uParam0->f_48[iVar0 /*15*/] /*15*/ };
		iVar0++;
	}
	uParam0->f_48[iVar1 /*15*/] = { sVar2 /*15*/ };
	return sVar17;
}

int func_435(var uParam0, int iParam1)
{
	if (uParam0->f_48[0 /*15*/] != 0 && uParam0->f_46 != 54)
	{
		return 0;
	}
	uParam0->f_48[0 /*15*/] = { *iParam1 /*15*/ };
	uParam0->f_46 = 1;
	return 1;
}

int func_436(var uParam0)
{
	int iVar0;

	iVar0 = func_153(uParam0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (!func_511(uParam0))
	{
		return 0;
	}
	uParam0->f_18.f_21 = TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(iVar0, "CLIP_PHASE");
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "IntroFinished"))
	{
		uParam0->f_18.f_20 = 1;
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "IdleClipFinished"))
	{
		uParam0->f_18.f_1 = 0;
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "LH_MOVE_TO_IDLE"))
	{
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "RH_MOVE_TO_IDLE"))
	{
	}
	if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "MainIdleClipFinished") && uParam0->f_18.f_19 == 0)
	{
		uParam0->f_18.f_1 = 1;
		uParam0->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	}
	if (uParam0->f_18)
	{
		uParam0->f_18 = 0;
		return 1;
	}
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "X", uParam0->f_18.f_5);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "Y", uParam0->f_18.f_6);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANGLE_OF_PIECE", uParam0->f_18.f_10);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "RACK_TILE_INDEX", BUILTIN::TO_FLOAT(uParam0->f_18.f_22));
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANIM_VARIATION", uParam0->f_18.f_11);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "CLIP_RATE", uParam0->f_18.f_12);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "CHANGE_IDLE", uParam0->f_18.f_1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "FIRSTPERSON_IDLE", uParam0->f_18.f_2);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "TILE_PUT_BACK", uParam0->f_18.f_3);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "PEEK_AT_TILES", uParam0->f_18.f_4);
	if (!func_271(uParam0->f_18.f_7))
	{
		TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(iVar0, "HAND_POS", uParam0->f_18.f_7);
	}
	return 1;
}

bool func_437(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_438(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_199);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iVar0 /*124*/].f_12) && uParam0->f_199[iVar0 /*124*/].f_12 != Global_35)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_439(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_32() != -1)
	{
		return 1;
	}
	if (!func_19())
	{
		return 0;
	}
	iVar0 = func_708();
	switch (iVar0)
	{
		case 71:
			iVar1 = func_442(uParam0, 16, iParam1, uParam0->f_194);
			break;
		case 9:
			iVar1 = func_442(uParam0, 18, iParam1, uParam0->f_194);
			break;
		case 98:
			iVar1 = func_442(uParam0, 17, iParam1, uParam0->f_194);
			break;
	}
	uParam0->f_184 = 1;
	uParam0->f_185 = iParam1;
	return iVar1;
}

int func_440(var uParam0)
{
	if (func_32() != -1)
	{
		return 1;
	}
	if (!func_19())
	{
		return 0;
	}
	return func_442(uParam0, 19, uParam0->f_194, -1);
}

bool func_441(var uParam0, int iParam1)
{
	int iVar0;

	func_709(uParam0, &iVar0);
	func_710(uParam0, iParam1);
	if ((*iParam1 != -1 && iVar0 != -1) && iVar0 != *iParam1)
	{
		if (MISC::ABSI((uParam0->f_149[iVar0 /*44*/].f_2 - uParam0->f_149[*iParam1 /*44*/].f_2)) > 10)
		{
			return true;
		}
	}
	func_711(uParam0, &iVar0);
	func_712(uParam0, iParam1);
	if ((*iParam1 != -1 && iVar0 != -1) && iVar0 != *iParam1)
	{
		if (MISC::ABSI((uParam0->f_149[iVar0 /*44*/].f_3 - uParam0->f_149[*iParam1 /*44*/].f_3)) > 2)
		{
			return true;
		}
	}
	return false;
}

int func_442(var uParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;

	if (func_32() != -1)
	{
		return 1;
	}
	sVar0 = func_713(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	if (func_437(1))
	{
		return 0;
	}
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_199[iParam2 /*124*/].f_12))
	{
		return 0;
	}
	if (uParam0->f_742 == -1)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		if (!ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_742, sVar0, func_153(&(uParam0->f_199[iParam2 /*124*/])), 0, false))
		{
			return 0;
		}
	}
	else if (!ANIMSCENE::_0x61B2AAEF645DDAF0(uParam0->f_742, sVar0, func_153(&(uParam0->f_199[iParam2 /*124*/])), func_153(&(uParam0->f_199[iParam3 /*124*/])), false))
	{
		return 0;
	}
	return 1;
}

bool func_443(var uParam0, int iParam1)
{
	int iVar0;

	func_709(uParam0, iParam1);
	func_710(uParam0, &iVar0);
	if ((*iParam1 != -1 && iVar0 != -1) && iVar0 != *iParam1)
	{
		if (MISC::ABSI((uParam0->f_149[*iParam1 /*44*/].f_2 - uParam0->f_149[iVar0 /*44*/].f_2)) > 10)
		{
			return true;
		}
	}
	func_711(uParam0, iParam1);
	func_712(uParam0, &iVar0);
	if ((*iParam1 != -1 && iVar0 != -1) && iVar0 != *iParam1)
	{
		if (MISC::ABSI((uParam0->f_149[*iParam1 /*44*/].f_3 - uParam0->f_149[iVar0 /*44*/].f_3)) > 2)
		{
			return true;
		}
	}
	return false;
}

int func_444(var uParam0, var uParam1)
{
	if (!func_208(*uParam1))
	{
		return 0;
	}
	uParam0->f_453--;
	func_265(uParam1, 1, 0);
	return 1;
}

void func_445(var uParam0)
{
	func_444(uParam0, &(uParam0->f_465));
	func_444(uParam0, &(uParam0->f_466));
	func_444(uParam0, &(uParam0->f_463));
}

void func_446(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_467(uParam0, iVar0);
		iVar0++;
	}
}

void func_447(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		func_714(uParam0, iVar0);
		iVar0++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	uParam0->f_157 = 0;
}

void func_448(var uParam0, int iParam1)
{
	func_393(uParam0, iParam1, "");
	func_394(uParam0, iParam1, "");
}

void func_449(var uParam0, int iParam1)
{
	if (uParam0->f_18.f_2 != iParam1)
	{
	}
	uParam0->f_18.f_2 = iParam1;
}

void func_450(var uParam0, var uParam1, int iParam2)
{
	uParam0->f_410.f_20 = iParam2;
	uParam0->f_410.f_21 = 0;
	uParam0->f_410.f_22 = 0;
	uParam0->f_410.f_23 = 0;
	uParam0->f_410.f_25 = 0;
	uParam0->f_410.f_19 = 0;
	if (uParam0->f_405 != 0)
	{
	}
	if (func_219(uParam1))
	{
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_2 && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0))
		{
			func_449(&(uParam1->f_199[uParam1->f_194 /*124*/]), 0);
		}
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4)
		{
			uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 0;
		}
	}
	func_454(uParam0, 0);
	func_715(uParam0, 1);
	CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
}

bool func_451(var uParam0, int iParam1)
{
	if (!func_204(uParam0, uParam0->f_194))
	{
		return false;
	}
	if (!func_387(&(uParam0->f_199[uParam0->f_194 /*124*/]), iParam1))
	{
		return false;
	}
	return func_386(&(uParam0->f_199[uParam0->f_194 /*124*/]), iParam1);
}

bool func_452(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_208(*uParam1))
	{
		if (!func_716(*uParam1, 1))
		{
			func_717(uParam0, uParam1, 1);
		}
		return false;
	}
	if (func_220() || uParam0->f_240.f_3 == 1)
	{
		return false;
	}
	*uParam1 = func_718(sParam2, iParam3, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0, iParam5, 1070386381, 570, iParam6, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	if (iParam4 == 1)
	{
		func_719(*uParam1, 1, 1);
	}
	uParam0->f_453++;
	return true;
}

bool func_453(var uParam0, int iParam1, bool bParam2)
{
	if (func_220())
	{
		return false;
	}
	if (bParam2)
	{
		return (PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1));
	}
	return (PAD::IS_CONTROL_PRESSED(2, iParam1) && PAD::IS_CONTROL_JUST_PRESSED(2, iParam1));
}

void func_454(var uParam0, int iParam1)
{
	uParam0->f_405 = iParam1;
	func_567(&(uParam0->f_450));
}

bool func_455(var uParam0, int iParam1, bool bParam2)
{
	if (func_220())
	{
		return false;
	}
	if (bParam2)
	{
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1);
	}
	return PAD::IS_CONTROL_JUST_PRESSED(2, iParam1);
}

void func_456(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_208(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

bool func_457(var uParam0, int iParam1, bool bParam2)
{
	if (func_220())
	{
		return false;
	}
	if (bParam2)
	{
		return PAD::IS_DISABLED_CONTROL_PRESSED(2, iParam1);
	}
	return PAD::IS_CONTROL_PRESSED(2, iParam1);
}

void func_458(var uParam0, var uParam1)
{
	uParam0->f_410.f_21 = 1;
	uParam0->f_410.f_22 = 0;
	uParam0->f_410.f_23 = 0;
	uParam0->f_410.f_25 = 0;
	uParam0->f_410.f_19 = 0;
	if (uParam0->f_405 != 1)
	{
	}
	if (func_219(uParam1))
	{
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 == 0)
		{
			uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 1;
		}
	}
	func_715(uParam0, 0);
	func_454(uParam0, 1);
	CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
	CAM::_FORCE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_459(var uParam0, var uParam1)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;

	uParam0->f_410.f_21 = 0;
	uParam0->f_410.f_22 = 1;
	uParam0->f_410.f_23 = 0;
	uParam0->f_410.f_25 = 0;
	uParam0->f_410.f_19 = 0;
	if (uParam0->f_405 != 2)
	{
	}
	func_454(uParam0, 2);
	CAM::_0x1D9F72DD4FD9A9D7(&(uParam0->f_410));
	if (func_219(uParam1))
	{
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_2 && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(0, 0, 0))
		{
			func_449(&(uParam1->f_199[uParam1->f_194 /*124*/]), 0);
		}
		if (uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4)
		{
			uParam1->f_199[uParam1->f_194 /*124*/].f_18.f_4 = 0;
		}
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		if (!CAM::IS_CAM_ACTIVE(uParam0->f_437))
		{
			func_551(1, uParam1->f_194, &fVar6);
			vVar3 = { func_47(uParam0->f_441, fVar6) /*3*/ };
			func_276(uParam1, vVar3, &vVar0);
			CAM::SET_CAM_COORD(uParam0->f_437, vVar0);
			func_551(1, uParam1->f_194, &fVar6);
			vVar3 = { func_47(uParam0->f_438, fVar6) /*3*/ };
			func_276(uParam1, vVar3, &vVar0);
			CAM::POINT_CAM_AT_COORD(uParam0->f_437, vVar0);
			CAM::SET_CAM_FOV(uParam0->f_437, uParam0->f_444);
			CAM::SET_CAM_ACTIVE(uParam0->f_437, true);
			CAM::SHAKE_CAM(uParam0->f_437, "TABLE_GAMES_IDLE_SHAKE", 0.19f);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			CAM::_0x04084490CC302CFB();
			uParam0->f_445 = 0.0f;
		}
	}
}

bool func_460(int iParam0, bool bParam1)
{
	if (bParam1 && !func_208(iParam0))
	{
		return true;
	}
	return func_720(iParam0, 4);
}

bool func_461(var uParam0)
{
	if (func_386(uParam0, 9))
	{
		return true;
	}
	if (func_386(uParam0, 10))
	{
		return true;
	}
	return false;
}

void func_462(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_208(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (bParam1)
	{
		func_721(iParam0, 4);
		func_722(iVar0, 1);
		func_723(iVar0, 1);
	}
	else
	{
		func_724(iParam0, 4);
		func_723(iVar0, 0);
	}
}

void func_463(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	if (!CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0->f_437))
	{
		return;
	}
	if (uParam0->f_445 == 1.0f)
	{
		return;
	}
	uParam0->f_445 += (MISC::GET_FRAME_TIME() / 0.65f);
	uParam0->f_445 = func_725(uParam0->f_445, 0.0f, 1.0f);
	fVar0 = func_726(uParam0->f_445);
	fVar1 = uParam0->f_444;
	fVar2 = (uParam0->f_444 - 2.5f);
	fVar3 = (fVar1 + ((fVar2 - fVar1) * fVar0));
	CAM::SET_CAM_FOV(uParam0->f_437, fVar3);
}

void func_464(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_208(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, sParam1);
}

bool func_465(var uParam0)
{
	if (!func_204(uParam0, uParam0->f_194))
	{
		return false;
	}
	return func_233(&(uParam0->f_199[uParam0->f_194 /*124*/]));
}

void func_466(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_384[iParam2]))
	{
		return;
	}
	if (uParam0->f_377[iParam2] != iParam3)
	{
	}
	uParam0->f_377[iParam2] = iParam3;
	switch (iParam3)
	{
		case 0:
			if (uParam0->f_370[iParam2])
			{
				GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(uParam0->f_384[iParam2]);
				uParam0->f_370[iParam2] = 0;
			}
			break;
		case 3:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam1->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_995);
			}
			GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK(uParam0->f_384[iParam2], iParam3);
			uParam0->f_370[iParam2] = 1;
			break;
		case 2:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam1->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam1->f_995);
			}
			GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK(uParam0->f_384[iParam2], iParam3);
			uParam0->f_370[iParam2] = 1;
			break;
	}
}

void func_467(var uParam0, int iParam1)
{
	if (uParam0->f_370[iParam1])
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_384[iParam1]))
		{
			GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(uParam0->f_384[iParam1]);
		}
		uParam0->f_370[iParam1] = 0;
	}
}

void func_468(var uParam0, var uParam1)
{
	Vector3 vVar0;

	uParam0->f_409 = 1;
	uParam0->f_444 = CAM::GET_GAMEPLAY_CAM_FOV();
	uParam0->f_444 = 55.0f;
	uParam0->f_441 = { 0.0f, -0.42f, 1.8f /*3*/ };
	uParam0->f_438 = { 0.0f, -0.08f, 0.87f /*3*/ };
	uParam0->f_407 = 0;
	if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_410)))
	{
		CAM::_CAM_DESTROY(&(uParam0->f_410));
	}
	if (!CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_410)))
	{
		CAM::_CAM_CREATE(&(uParam0->f_410));
		uParam0->f_410.f_16 = -832392197;
		uParam0->f_409 = 1;
	}
	if (!CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		uParam0->f_437 = CAM::CREATE_CAMERA(joaat("DEFAULT_SCRIPTED_CAMERA"), false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		func_276(uParam1, uParam0->f_441, &vVar0);
		CAM::SET_CAM_COORD(uParam0->f_437, vVar0);
		func_276(uParam1, uParam0->f_438, &vVar0);
		CAM::POINT_CAM_AT_COORD(uParam0->f_437, vVar0);
		CAM::SET_CAM_FOV(uParam0->f_437, uParam0->f_444);
		CAM::SET_CAM_ACTIVE(uParam0->f_437, false);
	}
	func_450(uParam0, uParam1, 0);
}

int func_469(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
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
		if (func_720(iVar0, 2))
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
		func_727(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_470(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_208(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1945188[iVar0 /*18*/].f_3, iParam1);
}

float func_471(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_208(iParam0))
	{
		return 0.0f;
	}
	iVar0 = func_554(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_GET_MASH_MODE_PROGRESS(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_0x81801291806DBC50(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_472(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_208(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[iVar0 /*18*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_473(var uParam0)
{
	uParam0->f_163++;
	func_246(&(uParam0->f_160));
}

bool func_474(var uParam0)
{
	if (uParam0->f_46 != 54)
	{
		if (uParam0->f_48[0 /*15*/] == 11)
		{
			return true;
		}
		if (uParam0->f_48[0 /*15*/] == 12)
		{
			return true;
		}
		if (uParam0->f_48[0 /*15*/] == 13)
		{
			return true;
		}
	}
	return false;
}

bool func_475(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_208(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_476(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_393(&(uParam0->f_1), 0, "");
	func_394(&(uParam0->f_1), 0, "");
}

void func_477(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_26)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_9, uParam0->f_26[iVar0 /*32*/].f_1);
		MISC::CLEAR_BIT(&(uParam0->f_157), iVar0);
		iVar0++;
	}
}

void func_478(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	func_314(&(uParam0->f_204[iParam1 /*7*/]), 28);
	uParam0->f_204[iParam1 /*7*/].f_6 = 0;
}

int func_479(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_199)
	{
		if (func_204(uParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_480(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_481(int iParam0, int iParam1, int iParam2)
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

int func_482(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_208(*uParam1))
	{
		if (!func_716(*uParam1, 1))
		{
			func_717(uParam0, uParam1, 1);
		}
		return 0;
	}
	if (func_220() || uParam0->f_240.f_3 == 1)
	{
		return 0;
	}
	*uParam1 = func_718(sParam2, iParam4, PLAYER::PLAYER_PED_ID(), 1, 0, 0, 0, iParam6, 1070386381, 570, iParam7, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	if (iParam5 == 1)
	{
		func_719(*uParam1, 1, 1);
	}
	func_728(*uParam1, sParam2, sParam3, 1);
	uParam0->f_453++;
	return 1;
}

bool func_483(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_208(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	return HUD::_UI_PROMPT_HAS_PRESSED_TIMED_MODE_FAILED(Global_1945188[iVar0 /*18*/].f_3);
}

void func_484(var uParam0, var uParam1, int iParam2)
{
	if (uParam0->f_690 != 0)
	{
		return;
	}
	switch (iParam2)
	{
		case 1:
		case 3:
		case 4:
		case 5:
			uParam1->f_239 = 1;
			break;
	}
	uParam0->f_690 = iParam2;
}

bool func_485(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_208(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	return HUD::_UI_PROMPT_HAS_PRESSED_TIMED_MODE_COMPLETED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_486(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 10)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam0->f_199);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_199[iVar0 /*124*/].f_12) && iVar0 != iParam2)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_487(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_729(&(uParam0->f_1.f_26[iParam1 /*32*/]));
}

void func_488(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_204[iParam1 /*7*/].f_6)
	{
		iVar1 = func_150(&(uParam0->f_204[iParam1 /*7*/]), iVar0);
		if (iVar1 != 29)
		{
		}
		iVar0++;
	}
}

void func_489(var uParam0, int iParam1, int iParam2)
{
	if (!func_204(uParam0, iParam1))
	{
		return;
	}
	if (PED::IS_PED_A_PLAYER(uParam0->f_199[iParam1 /*124*/].f_12))
	{
		return;
	}
	if (!func_19())
	{
		return;
	}
	if (func_32() != -1)
	{
		return;
	}
	if (iParam2 != -1)
	{
		if (iParam2 == iParam1)
		{
			func_730(uParam0->f_199[iParam1 /*124*/].f_12, uParam0->f_199[iParam1 /*124*/].f_12, Global_35, 0, 10);
		}
		else if (uParam0->f_199[iParam2 /*124*/].f_12 == Global_35)
		{
			func_730(uParam0->f_199[iParam1 /*124*/].f_12, Global_35, uParam0->f_199[iParam1 /*124*/].f_12, 0, 10);
		}
	}
}

void func_490(var uParam0, var uParam1)
{
	uParam0->f_398 = 0.0f;
	uParam0->f_399 = 0;
	uParam0->f_400 = uParam1;
	uParam0->f_401 = uParam1;
}

bool func_491(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_208(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_492(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	uParam0->f_398 += MISC::GET_FRAME_TIME();
	if (bParam5)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_149(&(uParam1->f_14), iVar1))
			{
				iVar0 = func_493(uParam0, iVar1, uParam1->f_666.f_3);
				if (iVar1 == uParam0->f_235)
				{
					if (iParam4 == 1)
					{
						if (iVar0 != 0)
						{
							func_731(uParam0, iVar1, -1);
						}
						func_732(uParam0, iVar1, iVar0);
					}
				}
				else
				{
					func_731(uParam0, iVar1, -1);
					func_732(uParam0, iVar1, iVar0);
				}
			}
			iVar1++;
		}
		return true;
	}
	if (uParam0->f_398 < 0.2f)
	{
		return false;
	}
	if (iParam4 == 0 && uParam0->f_400 == uParam0->f_235)
	{
		uParam0->f_399 = 0;
		uParam0->f_400 = func_324(&(uParam1->f_14), uParam0->f_400);
		if (iVar0 == 0)
		{
			func_442(uParam2, 65, uParam0->f_400, -1);
		}
		else if (iVar0 < 15)
		{
			func_442(uParam2, 66, uParam0->f_400, -1);
		}
		else if (iVar0 < 30)
		{
			func_442(uParam2, 67, uParam0->f_400, -1);
		}
		else
		{
			func_442(uParam2, 68, uParam0->f_400, -1);
		}
	}
	uParam0->f_398 = 0.0f;
	iVar0 = func_493(uParam0, uParam0->f_400, uParam1->f_666.f_3);
	func_731(uParam0, uParam0->f_400, uParam0->f_399);
	uParam0->f_399++;
	if (uParam0->f_399 < uParam0->f_204[uParam0->f_400 /*7*/].f_6)
	{
		return false;
	}
	if (iVar0 != 0)
	{
		func_732(uParam0, uParam0->f_400, iVar0);
	}
	uParam0->f_399 = uParam0->f_204[uParam0->f_400 /*7*/].f_6;
	func_731(uParam0, uParam0->f_400, uParam0->f_399);
	if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam2->f_199[uParam0->f_400 /*124*/].f_12))
	{
		return false;
	}
	if (func_733(uParam2))
	{
		return false;
	}
	uParam0->f_399 = 0;
	uParam0->f_400 = func_324(&(uParam1->f_14), uParam0->f_400);
	if (uParam0->f_400 == uParam0->f_401 || uParam0->f_400 == -1)
	{
		return true;
	}
	iVar0 = func_493(uParam0, uParam0->f_400, uParam1->f_666.f_3);
	if (iVar0 == 0)
	{
		func_442(uParam2, 65, uParam0->f_400, -1);
	}
	else if (iVar0 < 15)
	{
		func_442(uParam2, 66, uParam0->f_400, -1);
	}
	else if (iVar0 < 30)
	{
		func_442(uParam2, 67, uParam0->f_400, -1);
	}
	else
	{
		func_442(uParam2, 68, uParam0->f_400, -1);
	}
	func_732(uParam0, uParam0->f_400, iVar0);
	return false;
}

int func_493(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 0;
	}
	if (uParam0->f_204[iParam1 /*7*/].f_6 <= 0)
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_204[iParam1 /*7*/].f_6)
	{
		iVar3 = func_150(&(uParam0->f_204[iParam1 /*7*/]), iVar2);
		if (iVar3 != 29)
		{
			iVar0 = (func_734(iVar3) + func_735(iVar3));
			iVar1 += iVar0;
		}
		iVar2++;
	}
	if (iParam2 == -1234859967)
	{
		iVar1 += 2;
		iVar1 -= (iVar1 % 5);
	}
	if (iParam2 == -382896522)
	{
		iVar1++;
		iVar1 -= (iVar1 % 3);
	}
	return iVar1;
}

void func_494(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	if (iParam2 == 0)
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGSCORE0"));
	}
	else if (iParam2 == 1)
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGWINPTS1"));
	}
	else
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGWINPTS", iParam2));
	}
}

int func_495(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	uVar1 = 15;
	uParam0->f_261 = 0;
	if (func_32() == -1)
	{
		iVar0 = func_347(&(uParam1->f_14.f_149[iParam2 /*44*/].f_4), &uVar1);
		func_736(uParam0, &uVar1, iVar0);
	}
	else
	{
		return func_229(uParam1, 4);
	}
	return 1;
}

bool func_496(var uParam0)
{
	if (func_32() == -1)
	{
		return false;
	}
	return MINIGAME::_MINIGAME_IS_REQUEST_PENDING(&(uParam0->f_1300[4 /*4*/]));
}

bool func_497(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	*iParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1)
		{
			if (uParam0->f_746[iVar0 /*8*/].f_4 > iParam2)
			{
				if (iVar1 == -1 || uParam0->f_746[iVar0 /*8*/].f_4 < iVar1)
				{
					iVar1 = uParam0->f_746[iVar0 /*8*/].f_4;
					*iParam3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return *iParam3 != -1;
}

void func_498(var uParam0, var uParam1, int iParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam1->f_1))
	{
		return;
	}
	if (uParam1->f_7 != iParam2)
	{
	}
	uParam1->f_7 = iParam2;
	switch (iParam2)
	{
		case 0:
			if (uParam1->f_6)
			{
				GRAPHICS::_REMOVE_ENTITY_FROM_ENTITY_MASK(uParam1->f_1);
				uParam1->f_6 = 0;
			}
			break;
		case 3:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam0->f_995);
			}
			GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK(uParam1->f_1, iParam2);
			uParam1->f_6 = 1;
			break;
		case 2:
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(uParam0->f_995))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(uParam0->f_995);
			}
			GRAPHICS::_ADD_ENTITY_TO_ENTITY_MASK(uParam1->f_1, iParam2);
			uParam1->f_6 = 1;
			break;
	}
}

int func_499(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iVar0 /*5*/])))
		{
			if ((*uParam0)[iVar0 /*5*/] == iParam1)
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_500(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	uParam0->f_256 = iParam2;
	func_737(&(uParam0->f_1.f_26[iParam1 /*32*/]), iParam2);
}

void func_501(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = func_738(&(uParam0->f_262), uParam0->f_339, &(uParam0->f_391));
	func_446(uParam0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_266(&(uParam0->f_384[iVar0]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = uParam0->f_391[iVar0];
		if (iVar2 != -1)
		{
			iVar3 = func_150(&(uParam0->f_204[uParam1->f_194 /*7*/]), uParam0->f_262[iVar2 /*5*/]);
			func_739(uParam1, &(uParam0->f_262[iVar2 /*5*/]), iVar3, &(uParam0->f_384[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_502(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_8(1, 2);
		func_125(&(uParam0->f_240), 0);
	}
	else
	{
		func_680(1, 2);
		func_125(&(uParam0->f_240), 1);
		uParam0->f_338 = -1;
	}
	func_210(uParam0, 0, 0);
	uParam0->f_345 = bParam1;
}

bool func_503(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iParam3++;
	iParam3 = (iParam3 % *uParam0);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iParam3 /*5*/])))
		{
			if ((*uParam0)[iParam3 /*5*/] == iParam1)
			{
				*iParam2 = iParam3;
				return true;
			}
		}
		iParam3++;
		iParam3 = (iParam3 % *uParam0);
		iVar0++;
	}
	return false;
}

bool func_504(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	*iParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1 && uParam0->f_746[iVar0 /*8*/].f_5 == iParam2)
		{
			*iParam3 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_505(var uParam0)
{
	float fVar0;

	fVar0 = ((func_368(&(uParam0->f_253)) / uParam0->f_257) * 100.0f);
	fVar0 = func_725(fVar0, 0.0f, 100.0f);
	return BUILTIN::FLOOR(fVar0);
}

bool func_506(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	if (func_32() != -1)
	{
		if (uParam0->f_338 == -1)
		{
			if (func_503(&(uParam0->f_262), uParam0->f_339, &(uParam0->f_338), -1))
			{
				func_501(uParam0, uParam1, uParam2);
			}
			return false;
		}
		sVar0 = { func_740(&(uParam0->f_262[uParam0->f_338 /*5*/])) /*4*/ };
		if (!func_741(uParam2, &sVar0))
		{
			func_191(uParam0);
			func_192(uParam0, 17, 0, 3333);
			return false;
		}
	}
	else
	{
		if (uParam0->f_338 == -1)
		{
			if (func_503(&(uParam0->f_262), uParam0->f_339, &(uParam0->f_338), -1))
			{
				func_501(uParam0, uParam1, uParam2);
			}
			return false;
		}
		func_354(uParam2->f_666.f_3, &(uParam2->f_14), uParam1->f_194, &(uParam0->f_262[uParam0->f_338 /*5*/]));
		func_163(uParam2);
	}
	func_500(uParam0, uParam1->f_194, 0);
	func_567(&(uParam0->f_253));
	func_232(uParam1, 1);
	func_446(uParam0);
	if (func_32() == -1)
	{
		func_510(uParam0);
	}
	else
	{
		func_198(uParam0, 4);
	}
	uParam0->f_261 = 0;
	uParam0->f_410.f_20 = 0;
	return true;
}

void func_507(var uParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	var uVar4;
	var uVar7;
	int iVar10;
	int iVar11;

	if (uParam1->f_356 == 0)
	{
		uParam1->f_356 = SHAPETEST::START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE(&uVar4, &uVar7, 16, Global_35, 7);
		return;
	}
	uParam1->f_359 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam1->f_356, &iVar0, &(uParam1->f_360), &uVar1, &iVar10);
	if (uParam1->f_359 == 0)
	{
		uParam1->f_356 = 0;
		return;
	}
	if (uParam1->f_359 == 2)
	{
		if (iVar0 > 0)
		{
			iVar11 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar10);
			if (ENTITY::DOES_ENTITY_EXIST(iVar11) && func_133(iVar11))
			{
				uParam1->f_357 = iVar11;
				func_742(&(uParam0->f_1330), iVar11, &(uParam1->f_363), 0);
				func_743(uParam1, iVar11, &(uParam1->f_364));
			}
			else
			{
				uParam1->f_357 = 0;
				uParam1->f_363 = -1;
				uParam1->f_364 = -1;
			}
		}
		uParam1->f_356 = 0;
	}
}

void func_508(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;

	if (func_452(uParam1, &(uParam1->f_459), "MGDOM_CTX_SELTILE", joaat("INPUT_MINIGAME_DOMINOES_PLAY_TILE"), 0, 0, 4000))
	{
		func_211(uParam1);
	}
	func_744(uParam1, &(uParam0->f_1330), uParam2);
	bVar0 = ((uParam1->f_344 == 1 || uParam2->f_14.f_6.f_142 == 0) && !func_233(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/])));
	if (bVar0 && uParam1->f_348)
	{
		bVar0 = !uParam1->f_448;
	}
	func_462(uParam1->f_459, bVar0, 1);
	if (!uParam1->f_248)
	{
		if (!func_745(uParam1))
		{
			func_192(uParam1, 7, 0, 5000);
			uParam1->f_248 = 1;
		}
	}
	if (uParam1->f_344 == 0)
	{
		if (!func_746(uParam1) && uParam1->f_251 == 0)
		{
			if (!func_461(&(uParam0->f_1330.f_199[uParam0->f_1330.f_194 /*124*/])))
			{
				if (!func_747(uParam1, 1))
				{
					func_192(uParam1, 1, 0, 3333);
					uParam1->f_251 = 1;
					uParam1->f_252 = 0.0f;
				}
			}
		}
	}
	else
	{
		if (func_747(uParam1, 1))
		{
			func_191(uParam1);
		}
		uParam1->f_251 = 0;
		uParam1->f_252 = 0.0f;
	}
	if (uParam1->f_344 == 0 && !func_746(uParam1))
	{
		if (func_747(uParam1, 1))
		{
			uParam1->f_252 = 0.0f;
		}
		else
		{
			uParam1->f_252 += MISC::GET_FRAME_TIME();
			if (uParam1->f_252 > 5.0f && uParam1->f_251 == 1)
			{
				uParam1->f_251 = 0;
				uParam1->f_252 = 0.0f;
			}
		}
	}
	if (func_748(uParam1, &(uParam0->f_1330)) && uParam1->f_344 == 1)
	{
		func_191(uParam1);
		func_636(&(uParam0->f_1330), uParam0->f_1330.f_194, uParam1->f_339);
		func_444(uParam1, &(uParam1->f_459));
		func_232(&(uParam0->f_1330), 1);
		func_446(&(uParam0->f_2334));
		func_211(uParam1);
		if (!func_503(&(uParam1->f_262), uParam1->f_339, &(uParam1->f_338), -1))
		{
		}
		func_501(uParam1, &(uParam0->f_1330), uParam2);
		func_502(uParam1, 1);
	}
}

void func_509(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;

	bVar1 = true;
	iVar2 = func_372(uParam0->f_1330.f_194);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_MINIGAME_QUIT"), false);
	func_444(uParam1, &(uParam1->f_459));
	func_444(uParam1, &(uParam1->f_461));
	func_444(uParam1, &(uParam1->f_458));
	func_452(uParam1, &(uParam1->f_455), "MG_BACK", joaat("INPUT_GAME_MENU_CANCEL"), 0, 0, 4000);
	if (func_452(uParam1, &(uParam1->f_460), "MGDOM_CTX_PLACE", joaat("INPUT_MINIGAME_DOMINOES_PLAY_TILE"), 0, 0, 4000))
	{
		func_501(uParam1, &(uParam0->f_1330), uParam2);
	}
	if (uParam1->f_348)
	{
		bVar1 = !uParam1->f_448;
	}
	func_462(uParam1->f_460, bVar1, 1);
	if (!uParam1->f_249)
	{
		if (!func_745(uParam1))
		{
			func_192(uParam1, 8, 0, 5000);
			uParam1->f_249 = 1;
		}
	}
	if (uParam1->f_260 > 1 && !uParam1->f_250)
	{
		if (!func_745(uParam1))
		{
			func_192(uParam1, 6, 0, 5000);
			uParam1->f_250 = 1;
		}
	}
	func_749(uParam1, &(uParam0->f_1330), uParam2);
	if (uParam1->f_260 > 1)
	{
		func_750(uParam1, &(uParam1->f_464), "MGDOM_CTX_SELMOVE", joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY"), joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY"), 0, 0);
		func_470(uParam1->f_464, joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY"));
		func_470(uParam1->f_464, joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY"));
	}
	else
	{
		func_444(uParam1, &(uParam1->f_464));
	}
	if (func_751(uParam1))
	{
		func_234(&(uParam0->f_1330), uParam0->f_1330.f_194, uParam1->f_339);
		func_191(uParam1);
		func_211(uParam1);
		func_210(uParam1, 0, 0);
		func_502(uParam1, 0);
		func_232(&(uParam0->f_1330), 0);
		func_446(&(uParam0->f_2334));
		if (func_504(&(uParam0->f_1330), iVar2, uParam1->f_339, &uVar0))
		{
		}
		if (uParam1->f_343 != -1)
		{
			func_498(&(uParam0->f_1330), &(uParam0->f_1330.f_746[uParam1->f_343 /*8*/]), 3);
		}
	}
	if (func_752(uParam1, &(uParam0->f_1330)))
	{
		if (func_506(uParam1, &(uParam0->f_1330), uParam2))
		{
			func_444(uParam1, &(uParam1->f_460));
		}
	}
}

void func_510(var uParam0)
{
	uParam0->f_261 = 0;
	func_191(uParam0);
	func_502(uParam0, 0);
	func_211(uParam0);
	func_198(uParam0, 5);
}

bool func_511(var uParam0)
{
	return func_753(func_153(uParam0));
}

bool func_512(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

void func_513(var uParam0, int iParam1)
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

void func_514(var uParam0, int iParam1)
{
	if (!func_557(uParam0))
	{
		return;
	}
	if (!func_204(uParam0, iParam1))
	{
		return;
	}
	if (uParam0->f_199[iParam1 /*124*/].f_7)
	{
		ANIMSCENE::_0xAE6DE22DE0ED4554(uParam0->f_742, func_153(&(uParam0->f_199[iParam1 /*124*/])));
		uParam0->f_199[iParam1 /*124*/].f_7 = 0;
	}
}

void func_515(int iParam0, int iParam1, bool bParam2)
{
	func_754(iParam0, iParam1, bParam2, 1);
}

void func_516(var uParam0, var uParam1, int iParam2)
{
	Vector3 vVar0;
	int iVar3;
	char* sVar4;

	iVar3 = 33153;
	sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
	vVar0 = { func_68(uParam0, uParam1) /*3*/ };
	switch (uParam1->f_10)
	{
		case 0:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
			break;
		case 1:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_01";
			break;
		case 2:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_02";
			break;
		case 3:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00";
	}
	func_674(uParam0, uParam1, sVar4, "PLAYER_00_IDLE", vVar0, iVar3, 0, iParam2, 1);
}

void func_517(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_518(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_519(int* iParam0, bool bParam1, bool bParam2)
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

bool func_520(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_521(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_625() - fParam1);
	func_755(uParam0, 1);
	func_756(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_522(int iParam0)
{
	int iVar0;

	iVar0 = func_757(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_523(int iParam0)
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
		iVar0 = func_525(iParam0);
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

int func_524(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_525(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_758(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_526(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_32() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

bool func_527(int iParam0, bool bParam1, bool bParam2)
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
		if (func_759())
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
		iVar0 = func_537(Global_1898164.f_1[0 /*5*/]);
		if (func_760(iVar0) && func_761(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_35(Global_1898164.f_1[0 /*5*/]))
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

bool func_528(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_529(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_36(iParam0))
	{
		case 1:
			iVar0 = func_537(iParam0);
			return func_762(iVar0);
		case 8:
			iVar1 = func_537(iParam0);
			if (func_761(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_763(iVar1);
			}
			break;
	}
	return -1;
}

int func_530()
{
	if (!func_764(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_764(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_764(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_764(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_764(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_764(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_764(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_531(int iParam0, int iParam1)
{
	if (!func_35(iParam0))
	{
		return;
	}
	func_765(iParam0, iParam1);
}

int func_532(bool bParam0)
{
	if (!bParam0 && func_110(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_533(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_534(int iParam0, bool bParam1)
{
	if (func_32() != -1)
	{
		return;
	}
	if (func_34(0) != iParam0)
	{
		return;
	}
	if (func_766(iParam0))
	{
		if (bParam1)
		{
			func_767(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_768(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_535(int iParam0)
{
	return func_770(func_769(iParam0));
}

bool func_536(int iParam0)
{
	return func_757(iParam0) == 0;
}

int func_537(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return func_771(func_98(iParam0));
}

int func_538(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return func_772(func_98(iParam0));
}

int func_539(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return 3;
		case 0:
			return 1;
		case 6:
			return 7;
		case 1:
			switch (iParam1)
			{
				case 5:
					return 9;
				case 38:
					return 8;
				case 69:
					return 10;
				case 71:
					return 2;
				case 98:
					return 9;
				case 9:
					return 8;
				default:
					break;
			}
			return 2;
		case 3:
			switch (iParam1)
			{
				case 26:
					return 12;
				case 92:
					return 11;
				default:
					break;
			}
			return 4;
		case 4:
			return 5;
		case 5:
			return 6;
		default:
			break;
	}
	return 0;
}

int func_540(int iParam0, int iParam1, Vector3 vParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_271(vParam2))
	{
		return -1;
	}
	iVar2 = func_773(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_774(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_774(iVar0) == iParam1 && func_775(iVar0) == iParam0) && iVar2 == func_776(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_541(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_775(iVar0) == iParam0 && func_774(iVar0) == iParam1)
		{
			func_777(iVar0, -1);
			func_778(iVar0, 0);
			func_779(iVar0, 0);
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				if (bParam5)
				{
					MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
				}
				MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
			}
			return;
		}
		iVar0++;
	}
}

void func_542(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_543()
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

int func_544(int iParam0)
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

void func_545(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

char* func_546(int iParam0)
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

int func_547(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_780())
	{
		iVar2 = func_780();
	}
	iVar5 = func_781(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_98(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_98(iVar6) == 0)
			{
				return func_782(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_98(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_98(iVar6) == 0)
			{
				return func_782(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_782(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_548(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_2;
	}
	return -1;
}

bool func_549(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_550(int iParam0, int iParam1, var uParam2)
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

bool func_551(int iParam0, int iParam1, float fParam2)
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

int func_552(int iParam0, int iParam1)
{
	if ((iParam0 == 29 || iParam0 == 28) || iParam0 == 28)
	{
		switch (iParam1)
		{
			case -1:
				return joaat("P_DOMINO_0_0");
			case 0:
				return joaat("P_DOMINO01_0_0");
			case 1:
				return joaat("P_DOMINO02_0_0");
			case 2:
				return joaat("P_DOMINO03_0_0");
			case 3:
				return joaat("P_DOMINO04_0_0");
			case 4:
				return joaat("P_DOMINO05_0_0");
			case 5:
				return joaat("P_DOMINO06_0_0");
			default:
				break;
		}
		return joaat("P_DOMINO_0_0");
	}
	return func_96(iParam0, iParam1);
}

void func_553(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_701(uParam0, iParam1, iParam2, iParam3);
	uParam0->f_746[iParam1 /*8*/].f_5 = iParam4;
}

int func_554(int iParam0)
{
	return iParam0;
}

void func_555(int iParam0)
{
	if (!func_783(iParam0))
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

int func_556(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (Global_1946054.f_2535.f_1 >= 5)
	{
		return 0;
	}
	if (!func_784(iParam0))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_785(iParam0);
	return func_786(iParam1, iVar0, bParam2, 1);
}

bool func_557(var uParam0)
{
	return uParam0->f_742 != -1;
}

float func_558(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_559(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_48)
	{
		if (uParam0->f_48[iVar0 /*15*/] == 0)
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_560(int iParam0)
{
	return iParam0 > -1;
}

int func_561(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_562(int iParam0, bool bParam1)
{
	if (!func_560(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_787(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_309(iParam0, 1, 0);
		}
	}
	func_309(iParam0, 16, bParam1);
}

void func_563(int iParam0)
{
	func_309(iParam0, 8, 0);
}

int func_564(int iParam0, bool bParam1)
{
	if (!func_292(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_788(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

void func_565(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_292(iParam0))
	{
		iVar1 = func_410(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179 /*PCF_0x605C7288*/, true);
			func_789(iParam0);
		}
	}
	if (func_293(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_410(iParam0), 137 /*PCF_0xE18960DE*/, true);
	}
}

void func_566(int iParam0, bool bParam1)
{
	if (!func_560(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_410(iParam0), 204 /*PCF_0x435F091E*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_410(iParam0), 204 /*PCF_0x435F091E*/, false);
	}
}

void func_567(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_568(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_292(iParam0))
	{
		return;
	}
	if (func_146(iParam0))
	{
		if (!func_281(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_293(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_564(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_410(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_790(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_295(iParam0, 2, 1);
	}
	else
	{
		func_791(iParam0);
		func_295(iParam0, 1, 1);
	}
}

void func_569(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_292(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= (Global_40.f_4942[iParam0 /*60*/] & iParam1);
}

int func_570(int iParam0)
{
	if (!func_292(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_571(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_560(iParam1))
	{
		return;
	}
	iVar0 = func_570(iParam1);
	if (func_792(iParam1))
	{
		if (!func_793(iParam1))
		{
			return;
		}
	}
	func_294(iParam1, 39, 1);
	func_794(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_794(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_794(iParam1, (1 << 9), 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_295(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_795(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_572(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_573(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_560(iParam0))
	{
		return 0;
	}
	iVar0 = CLOCK::GET_CLOCK_HOURS() + 1;
	if (iVar0 == 25)
	{
		iVar0 = 0;
	}
	iVar7 = 0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					if (func_764(Global_1835011[4 /*74*/].f_1, 1))
					{
						iVar1[0] = -695701225;
					}
					else
					{
						iVar1[0] = 404503428;
					}
					break;
				default:
					iVar1[0] = 178615350;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 1:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = 1818898449;
					iVar7 = 3;
					break;
				case 3:
					if (func_796(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					if (!bParam2)
					{
						iVar1[0] = -268604689;
					}
					break;
				case 4:
					iVar1[0] = -268604689;
					break;
				case 5:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 6:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar1[3] = 1818898449;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -268604689;
					iVar1[0] = -1632589543;
					iVar1[1] = 1818898449;
					iVar7 = 3;
					break;
				case 8:
					iVar1[0] = -268604689;
					break;
				case 9:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 10:
					if (func_764(Global_1347702[63 /*49*/].f_15, 1) || func_522(Global_1347702[63 /*49*/].f_15))
					{
						iVar1[0] = -268604689;
					}
					else
					{
						iVar1[0] = -310473775;
					}
					break;
				case 11:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 13:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -268604689;
					break;
				case 15:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 16:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 17:
					if (func_796(iVar0, 9, 12))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar1[2] = -1862464078;
						iVar7 = 3;
					}
					else
					{
						iVar1[0] = -268604689;
					}
					break;
				case 18:
					if (!func_764(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_291(18, (1 << 27), 1))
					{
						iVar1[0] = 961676983;
					}
					else
					{
						iVar1[0] = -1587546924;
					}
					break;
				case 19:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -1862464078;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -268604689;
					iVar1[1] = -1632589543;
					iVar1[2] = -23947011;
					iVar7 = 3;
					break;
				default:
					iVar1[0] = -268604689;
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_796(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 5:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 8:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 9:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar1[4] = 1744281750;
					iVar7 = 5;
					break;
				case 10:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 11:
					if (func_764(Global_1347702[134 /*49*/].f_15, 1) || func_522(Global_1347702[134 /*49*/].f_15))
					{
						iVar1[0] = -2040275819;
						iVar1[1] = 1205492208;
						iVar7 = 2;
					}
					else
					{
						iVar1[0] = -922193456;
					}
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 2:
					if (func_764(Global_1835011[38 /*74*/].f_1, 1))
					{
						iVar1[0] = -1559986688;
					}
					else
					{
						iVar1[0] = -1874208704;
					}
					break;
				default:
					iVar1[0] = 1593315648;
					break;
			}
			break;
		case 5:
		case 6:
			switch (iParam0)
			{
				case 0:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 1:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 2:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 3:
					if (func_796(iVar0, 9, 11))
					{
						iVar1[0] = 283037683;
					}
					else
					{
						iVar1[0] = -922193456;
						iVar1[1] = -2040275819;
						iVar1[2] = -1114682645;
						iVar1[3] = -1414977761;
						iVar7 = 4;
					}
					if (!bParam2)
					{
						iVar1[0] = -922193456;
					}
					break;
				case 4:
					iVar1[0] = -922193456;
					break;
				case 6:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar1[3] = 283037683;
					iVar7 = 4;
					break;
				case 7:
					iVar1[0] = 1295334688;
					iVar7 = 1;
					break;
				case 11:
					iVar1[0] = -2051275045;
					break;
				case 13:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 283037683;
					iVar1[3] = 1744281750;
					iVar7 = 4;
					break;
				case 14:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 15:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 16:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 17:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 18:
					iVar1[0] = -922193456;
					break;
				case 19:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 20:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar7 = 2;
					break;
				case 21:
					iVar1[0] = -922193456;
					iVar1[1] = 1744281750;
					iVar7 = 2;
					break;
				case 22:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = -1114682645;
					iVar7 = 3;
					break;
				case 23:
					iVar1[0] = -922193456;
					iVar1[1] = -2040275819;
					iVar1[2] = 1744281750;
					iVar7 = 3;
					break;
				case 26:
					iVar1[0] = -268604689;
					break;
				default:
					iVar1[0] = -922193456;
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar7 = 2;
					break;
				case 14:
					iVar1[0] = joaat("COMPANION_OUTFIT_DEFAULT");
					iVar1[1] = 1484386316;
					iVar1[2] = 1254970547;
					iVar7 = 3;
					break;
				case 4:
					if (func_797(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_764(Global_1347702[1 /*49*/].f_15, 1))
					{
						iVar1[0] = -1155031950;
					}
					else
					{
						iVar1[0] = -1341683964;
					}
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 13:
					iVar1[0] = -1341683964;
					iVar1[1] = 876797088;
					iVar1[2] = 1484386316;
					iVar7 = 3;
					break;
				case 14:
					iVar1[0] = -1092189504;
					iVar1[1] = 80515440;
					iVar7 = 2;
					break;
				case 4:
					iVar1[0] = -1341683964;
					iVar1[1] = 867156718;
					iVar7 = 2;
					break;
				case 7:
					iVar1[0] = -1341683964;
					iVar1[1] = 1484386316;
					iVar7 = 2;
					break;
				default:
					iVar1[0] = -1341683964;
					break;
			}
			break;
	}
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_410(iParam0)))
	{
		iVar10 = 0;
		while (iVar10 < iVar7)
		{
			if (iVar1[iVar10] == Global_40.f_4942[iParam0 /*60*/].f_3)
			{
				bVar9 = true;
				iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
			}
			iVar10++;
		}
	}
	if (!bVar9)
	{
		iVar11 = 0;
		if (iVar7 > 0 && bParam2)
		{
			iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7);
		}
		iVar8 = iVar1[iVar11];
	}
	if (!func_304(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_574(int iParam0)
{
	switch (iParam0)
	{
		case -1205468859:
		case -946772361:
		case -445211559:
		case 1744281750:
			return true;
		default:
			break;
	}
	return false;
}

bool func_575(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_560(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_146(iParam0) || func_293(iParam0, 44, 1))
		{
			return false;
		}
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
	{
		return false;
	}
	iVar0 = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return iVar0 == joaat("SLEEP");
}

struct<7> /*56*/ func_576(int iParam0, int iParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_3 = { vParam2 /*3*/ };
	sVar0.f_2 = uParam8;
	sVar0.f_6 = 0;
	if (bParam5)
	{
		MISC::SET_BIT(&(sVar0.f_6), 0);
	}
	if (bParam6)
	{
		MISC::SET_BIT(&(sVar0.f_6), 1);
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(sVar0.f_6), 2);
	}
	if (bParam9)
	{
		MISC::SET_BIT(&(sVar0.f_6), 3);
	}
	return sVar0;
}

void func_577(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	bVar0 = func_410(iParam0);
	func_798(bVar0);
	func_295(iParam0, 60, 1);
	if (bParam1)
	{
		func_799(iParam0);
	}
}

void func_578(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	func_800(iVar0);
	func_294(iParam0, 60, 1);
	if (bParam1)
	{
		func_801(iParam0);
	}
}

void func_579(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	func_802(iVar0);
	if (iParam0 == 14)
	{
		func_803(iVar0);
	}
	func_295(iParam0, 61, 1);
	if (bParam1)
	{
		func_804(iParam0);
	}
}

void func_580(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	iVar0 = func_410(iParam0);
	func_805(iVar0);
	func_294(iParam0, 61, 1);
	if (bParam1)
	{
		func_806(iParam0);
	}
}

int func_581(var uParam0)
{
	return uParam0;
}

bool func_582(int iParam0)
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

bool func_583(int iParam0)
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

bool func_584(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_560(iParam0))
	{
		return false;
	}
	func_807(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_585(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_586(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case 178615350:
			return joaat("META_OUTFIT_COLD_WEATHER");
		case 2094043703:
			return joaat("META_OUTFIT_COLD_WEATHER_INJURED");
		case -695701225:
			return -1090160065;
		case 404503428:
			return -1704514526;
		case -1268239471:
			return -1832874334;
		case -1874208704:
			return joaat("META_OUTFIT_ISLAND");
		case 1593315648:
			return joaat("META_OUTFIT_ISLAND_HOLSTER");
		case -1559986688:
			return 174754238;
		case 1071744295:
			return joaat("META_OUTFIT_PRISON");
		case 977450639:
			return 2111449038;
		case 1901494236:
			return joaat("META_OUTFIT_PROSTITUTE");
		case 713940276:
			return -1949892659;
		case 1744281750:
			return joaat("META_OUTFIT_WARM_WEATHER_CASUAL");
		case 283037683:
			return joaat("META_OUTFIT_WARM_WEATHER_WORKING");
		case -2051275045:
			return joaat("META_OUTFIT_OUTLAW");
		case 1495063555:
			return joaat("META_OUTFIT_ROBBERY");
		case 1046468203:
			return joaat("META_OUTFIT_ROBBERY_ALT");
		case 1018353621:
			return joaat("META_OUTFIT_HEIST");
		case -433615745:
			return 643643053;
		case 777603945:
			return joaat("META_OUTFIT_KIDNAPPED");
		case -1668922931:
			return -1915831038;
		case -1341683964:
			return 1689938120;
		case 928493661:
			return 861275228;
		case 431390894:
			return -20643141;
		case -301101630:
			return -1187204983;
		case -1155031950:
			return 1883650185;
		case -1248623443:
			return -1437962122;
		case 350498312:
			return 1959714099;
		case -481967001:
			return 1833893952;
		case 513932985:
			return 505715365;
		case -193269670:
			return joaat("META_OUTFIT_GUARD");
		case -1684458716:
			return 1976273473;
		case -973332710:
			return joaat("META_OUTFIT_BEATUP");
		case 1658153743:
			return -2072429185;
		case 1842975347:
			return 491764525;
		case -1678882891:
			return -1638703055;
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case 1818898449:
			return 30596609;
		case -922193456:
			switch (iParam1)
			{
				case 24:
				case 25:
					return joaat("META_OUTFIT_DEFAULT");
				default:
					break;
			}
			return joaat("META_OUTFIT_WARM_WEATHER");
		case 1205492208:
			return joaat("META_OUTFIT_WARM_WEATHER_PANTS");
		case 1199580439:
			return joaat("META_OUTFIT_COMBAT");
		case -310473775:
			return -877585857;
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case 296923297:
			iVar0 = func_808(296923297, iParam1);
			return func_809(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_808(1237718549, iParam1);
			return func_809(iVar0);
		case -23947011:
			return joaat("META_OUTFIT_COOL_WEATHER_CASUAL");
		case 1295334688:
			return 869636257;
		case 1200878026:
			return joaat("META_OUTFIT_WARM_WEATHER_INJURED");
		case -1692022104:
			return -1851470579;
		case 707545953:
			return 890352471;
		case -1532979576:
			return 1391951221;
		case -1642335258:
			return -1491647079;
		case 876797088:
			return 1309207681;
		case -1587546924:
			return -1303789247;
		case 961676983:
			return -1527307534;
		case 1300659195:
			return joaat("META_OUTFIT_JAIL");
		case -571427255:
			return joaat("META_OUTFIT_JAIL_ARMED");
		case 837028314:
			return -20984612;
		case -1394723994:
			return -1857650992;
		case -1335291723:
			return joaat("META_OUTFIT_SHOOTOUT");
		case -445211559:
			return joaat("META_OUTFIT_SLEEPING");
		case -946772361:
			return 646599895;
		case 1950972546:
			return -1699183538;
		case -1092189504:
			return 389057251;
		case 80515440:
			return -2137653778;
		case 6418928:
			return -211106360;
		case -1648322231:
			return 1074183062;
		case -1065026089:
			return 1087308308;
		case 2062813606:
			return joaat("META_OUTFIT_FISHING");
		case 876535472:
			return joaat("META_OUTFIT_ISLAND_INJURED");
		case -1205468859:
			return joaat("META_OUTFIT_SLEEPING");
		case 1484386316:
			return -800489594;
		case 1254970547:
			return -211106360;
		case 867156718:
			return 241911854;
		case joaat("COMPANION_OUTFIT_DEFAULT"):
			return joaat("META_OUTFIT_DEFAULT");
	}
	return joaat("META_OUTFIT_DEFAULT");
}

bool func_587(int iParam0, int iParam1)
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

bool func_588(int iParam0, int iParam1)
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

bool func_589(int iParam0, int iParam1)
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
	if (!func_587(iParam0, iVar0))
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

void func_590(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_591(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, joaat("WEARABLE_MASKS")))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, joaat("WEARABLE_MASKS"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 494009478))
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam1, 494009478, 1);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 1) > 0 && func_587(iParam1, 860729266))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 12)) > 0 && func_587(iParam1, 879715242))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 128) > 0 && func_587(iParam1, 1606325429))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 256) > 0 && func_587(iParam1, 1743550585))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 9)) > 0 && func_587(iParam1, 1064646155))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 10)) > 0 && func_587(iParam1, -536694793))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 11)) > 0 && func_587(iParam1, -1304053509))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 31)) > 0 && func_587(iParam1, 718939204))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 16)) > 0 && func_587(iParam1, -972364774))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 14)) > 0 && func_587(iParam1, -1100875244))
	{
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, -134124598))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, -134124598, 1);
		}
		if (PED::_IS_METAPED_USING_COMPONENT(iParam1, 2071466316))
		{
			PED::REMOVE_TAG_FROM_META_PED(iParam1, 2071466316, 1);
		}
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1100875244);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 18)) > 0 && func_587(iParam1, 1153596794))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 19)) > 0 && func_587(iParam1, 1016389820))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 20)) > 0 && func_587(iParam1, -726966617))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 21)) > 0 && func_587(iParam1, 1365901568))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 15)) > 0 && func_587(iParam1, -1658942149))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 17)) > 0 && func_587(iParam1, -1980913856))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 22)) > 0 && func_587(iParam1, 491764525))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 23)) > 0 && func_587(iParam1, -76015264))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 24)) > 0 && func_587(iParam1, 622113465))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 25)) > 0 && func_587(iParam1, 781533162))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 26)) > 0 && func_587(iParam1, -271415321))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 27)) > 0 && func_587(iParam1, -1683207356))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 28)) > 0 && func_587(iParam1, -254794762))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 29)) > 0 && func_587(iParam1, 609066278))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 30)) > 0 && func_587(iParam1, -1712783565))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 13)) > 0 && func_587(iParam1, 1544915253))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_592(int iParam0)
{
	func_810(iParam0, 1);
	func_810(iParam0, 128);
	func_810(iParam0, 256);
	func_810(iParam0, (1 << 9));
	func_810(iParam0, (1 << 10));
	func_810(iParam0, (1 << 11));
	func_810(iParam0, (1 << 12));
	func_810(iParam0, (1 << 16));
	func_810(iParam0, (1 << 14));
	func_810(iParam0, (1 << 18));
	func_810(iParam0, (1 << 19));
	func_810(iParam0, (1 << 20));
	func_810(iParam0, (1 << 21));
	func_810(iParam0, (1 << 15));
	func_810(iParam0, (1 << 17));
	func_810(iParam0, (1 << 27));
	func_810(iParam0, (1 << 30));
}

void func_593(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		return;
	}
	if (!bParam1)
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
		{
			DECORATOR::DECOR_REMOVE(Global_1360165[iParam0 /*1157*/], "wearing_bandana");
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(Global_1360165[iParam0 /*1157*/], "wearing_bandana"))
	{
		DECORATOR::DECOR_SET_BOOL(Global_1360165[iParam0 /*1157*/], "wearing_bandana", true);
	}
}

void func_594(var uParam0, int iParam1, bool bParam2)
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

int func_595(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_811(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_811(iVar4) && iVar4 != iVar0)
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
	if (func_32() == -1 && !func_812(iVar0))
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
				if (func_812(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_811(iVar0))
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
		func_813(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_814(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_815(iVar0))
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

void func_596(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	func_314(uParam1, 28);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				if (uParam0->f_149[iVar0 /*44*/].f_4.f_39 == uParam0->f_149[iVar0 /*44*/].f_3)
				{
					func_598(uParam1, func_334(uParam0->f_149[iVar0 /*44*/].f_4[iVar1 /*2*/]));
				}
				else
				{
					func_598(uParam1, 28);
				}
				iVar1++;
			}
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 7)
			{
				func_598(uParam1, 28);
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_597(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = -1;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			iVar1 = func_816(&(uParam0->f_149[iVar0 /*44*/].f_4), iParam1);
			if (iVar1 > iVar2 || iVar2 == -1)
			{
				iVar3 = iVar0;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_598(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 28)
	{
		iVar1 = func_150(uParam0, iVar0);
		if (iVar1 == 29)
		{
			func_315(uParam0, iVar0, iParam1);
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_599(var uParam0)
{
	var uVar0;

	MISC::SET_BITS_IN_RANGE(&uVar0, 0, 4, *uParam0);
	MISC::SET_BITS_IN_RANGE(&uVar0, 5, 10, uParam0->f_1 + 32);
	MISC::SET_BITS_IN_RANGE(&uVar0, 11, 16, uParam0->f_1.f_1 + 32);
	MISC::SET_BITS_IN_RANGE(&uVar0, 17, 19, uParam0->f_3);
	MISC::SET_BITS_IN_RANGE(&uVar0, 20, 31, uParam0->f_4);
	return uVar0;
}

bool func_600(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 13:
		case 18:
		case 22:
		case 25:
		case 27:
			return true;
		default:
			break;
	}
	return false;
}

int func_601(var uParam0)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 8;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

int func_602(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_705 == 0)
	{
		return 0;
	}
	if (uParam0->f_707 == -1)
	{
		return 0;
	}
	iVar3 = uParam0->f_14.f_6.f_1[uParam0->f_707 /*5*/].f_4;
	iVar1 = uParam0->f_14.f_6.f_1[uParam0->f_707 /*5*/].f_2;
	iVar2 = uParam0->f_14.f_6.f_1[uParam0->f_707 /*5*/].f_2.f_1;
	iVar0 = 0;
	if (iVar3 == 1 || iVar3 == 3)
	{
		if (func_817(&(uParam0->f_14), (iVar1 - 4), iVar2))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 4, iVar2))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 1, (iVar2 - 6)))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 1, iVar2 + 3))
		{
			iVar0++;
		}
	}
	else
	{
		if (func_817(&(uParam0->f_14), iVar1, iVar2 + 4))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1, (iVar2 - 4)))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), (iVar1 - 4), (iVar2 - 1)))
		{
			iVar0++;
		}
		if (func_817(&(uParam0->f_14), iVar1 + 2, (iVar2 - 1)))
		{
			iVar0++;
		}
	}
	return iVar0;
}

int func_603(var uParam0)
{
	Vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = 6;
	func_316(&vVar0);
	vVar0.x = 9;
	if (func_317(uParam0, &vVar0, 1))
	{
		return 1;
	}
	return 0;
}

struct<2> /*16*/ func_604(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

int func_605(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;

	if (STATS::STAT_ID_GET_INT(&uParam0, &uVar0))
	{
		STATS::_STAT_ID_INCREMENT_INT(&uParam0, 1);
		STATS::STAT_ID_GET_INT(&uParam0, &uVar1);
		return 1;
	}
	return 0;
}

void func_606(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;
	struct<2> /*16*/ sVar4;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;

	sVar0 = { func_604(joaat("WINS"), iParam0) /*2*/ };
	sVar2 = { func_604(joaat("WIN_STREAK"), iParam0) /*2*/ };
	sVar4 = { func_604(joaat("BEST_WIN_STREAK"), iParam0) /*2*/ };
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

void func_607(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;
	var uVar4;
	var uVar5;

	sVar0 = { func_604(joaat("LOSSES"), iParam0) /*2*/ };
	sVar2 = { func_604(joaat("WIN_STREAK"), iParam0) /*2*/ };
	STATS::_STAT_ID_INCREMENT_INT(&sVar0, 1);
	STATS::_0x0FEE2561120F3333(&sVar2);
	STATS::STAT_ID_GET_INT(&sVar0, &uVar4);
	STATS::STAT_ID_GET_INT(&sVar2, &uVar5);
}

void func_608()
{
	if (Global_1899528.f_2 == 0)
	{
	}
	Global_1899528.f_2 = 1;
}

bool func_609(var uParam0, var uParam1)
{
	int iVar0;

	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (uParam0->f_142 != uParam1->f_142)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!func_818(&(uParam0->f_1[iVar0 /*5*/]), &(uParam1->f_1[iVar0 /*5*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_610(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return 0;
	}
	if (uParam0->f_1 != uParam1->f_1)
	{
		return 0;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return 0;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return 0;
	}
	return func_819(&(uParam0->f_4), &(uParam1->f_4));
}

bool func_611(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_149(&(uParam0->f_14), iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_14.f_149[iParam1 /*44*/].f_4.f_39;
	if (iVar0 >= 19)
	{
		return false;
	}
	func_151(iParam2, &(uParam0->f_14.f_149[iParam1 /*44*/].f_4[iVar0 /*2*/]), &(uParam0->f_14.f_149[iParam1 /*44*/].f_4[iVar0 /*2*/].f_1));
	uParam0->f_14.f_149[iParam1 /*44*/].f_4.f_39++;
	uParam0->f_14.f_149[iParam1 /*44*/].f_3 = uParam0->f_14.f_149[iParam1 /*44*/].f_4.f_39;
	return true;
}

void func_612(var uParam0)
{
	uParam0->f_3 = -1;
	uParam0->f_1 = 0;
	uParam0->f_1.f_1 = 0;
}

bool func_613(struct<2> /*16*/ sParam0, var uParam2, var uParam3, var uParam4)
{
	return (!(sParam0.f_1 == 0 && sParam0.f_1.f_1 == 0) && sParam0.f_0 >= 0);
}

bool func_614(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case -1234859967:
			if (iParam1 == 0)
			{
				return false;
			}
			return (iParam1 % 5) == 0;
		case -382896522:
			if (iParam1 == 0)
			{
				return false;
			}
			return (iParam1 % 3) == 0;
		default:
			break;
	}
	return false;
}

int func_615(struct<2> /*16*/ sParam0)
{
	return (sParam0.f_0 + sParam0.f_1);
}

void func_616(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_480(1) < iParam0)
	{
		iParam0 = func_480(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_820(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_617(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_821(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

bool func_618(var uParam0, int iParam1)
{
	char* sVar0;

	sVar0 = func_822(uParam0, iParam1);
	return NETWORK::_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID(sVar0);
}

int func_619(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return func_823(iParam0);
}

int func_620(int iParam0)
{
	if (func_292(iParam0))
	{
		return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_621(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_824(uParam0, iParam1, sParam2))
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

int func_622(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			Global_40.f_6563[iVar0 /*27*/].f_24 = 2;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/].f_24 != 0)
		{
		}
		else
		{
			func_825(&(Global_40.f_6563[iVar0 /*27*/]), iParam0);
			func_826(iParam0);
			if (bParam2)
			{
				func_827(&(Global_40.f_6563[iVar0 /*27*/]));
				if (!func_828(172))
				{
					func_829(172, 0);
				}
				func_830(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			func_831(iVar0, 1);
			func_832();
			func_834(func_833(joaat("CAMP_REQUESTS_STARTED")), 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_623(int iParam0, int iParam1)
{
	if (!func_35(iParam0))
	{
		return;
	}
	func_835(iParam0, iParam1);
}

bool func_624(var uParam0)
{
	return func_520(*uParam0, 2);
}

float func_625()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_626(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_157, iParam1);
}

void func_627(var uParam0, var uParam1, int iParam2)
{
	char* sVar0;

	if (!func_204(uParam1, iParam2))
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	if (!func_626(&(uParam0->f_1), iParam2))
	{
		func_836(&(uParam0->f_1), iParam2);
	}
	func_837(&(uParam0->f_1), iParam2);
	sVar0 = func_822(&Global_1899750, iParam2);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_838(&(uParam0->f_1.f_26[iParam2 /*32*/]), sVar0);
		func_839(&(uParam0->f_1.f_26[iParam2 /*32*/]), sVar0);
	}
	else if (iParam2 == uParam1->f_194)
	{
		if (func_840())
		{
			func_838(&(uParam0->f_1.f_26[iParam2 /*32*/]), "avatar_john");
		}
		else
		{
			func_838(&(uParam0->f_1.f_26[iParam2 /*32*/]), "avatar_arthur");
		}
	}
	else
	{
		func_838(&(uParam0->f_1.f_26[iParam2 /*32*/]), "avatar_generic");
	}
	MISC::SET_BIT(&(uParam0->f_236), iParam2);
	uParam0->f_171[iParam2 /*8*/] = { func_841(uParam1->f_199[iParam2 /*124*/]) /*8*/ };
	func_188(uParam0, iParam2, uParam0->f_166[iParam2]);
	func_389(uParam0, iParam2, MISC::VAR_STRING(2, "MGDOM_MSGWAITTURN"));
}

int func_628(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2[4];

	switch (iParam1)
	{
		case 0:
			iVar2[0] = 0;
			iVar2[1] = 2;
			iVar2[2] = 1;
			iVar2[3] = 3;
			break;
		case 1:
			iVar2[0] = 1;
			iVar2[1] = 3;
			iVar2[2] = 0;
			iVar2[3] = 2;
			break;
		case 2:
			iVar2[0] = 2;
			iVar2[1] = 1;
			iVar2[2] = 3;
			iVar2[3] = 0;
			break;
		case 3:
			iVar2[0] = 3;
			iVar2[1] = 0;
			iVar2[2] = 2;
			iVar2[3] = 1;
			break;
	}
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(iParam0, iVar2[iVar1]))
		{
			return iVar2[iVar1];
		}
		iVar1 += 1 % 4;
		iVar0++;
	}
	return -1;
}

bool func_629(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_842(vParam1, uParam0);
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

int func_630(var uParam0)
{
	return uParam0->f_47;
}

void func_631(var uParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case -1234859967:
			func_194(uParam0, "MGDOM_HLP_QRULE_0", iParam2, 10000);
			break;
		case -382896522:
			func_194(uParam0, "MGDOM_HLP_QRULE_1", iParam2, 10000);
			break;
		case -1617663169:
			func_194(uParam0, "MGDOM_HLP_QRULE_2", iParam2, 10000);
			break;
		case -1360983891:
			func_194(uParam0, "MGDOM_HLP_QRULE_3", iParam2, 10000);
			break;
	}
}

void func_632(var uParam0, int iParam1, int iParam2)
{
	if (func_204(uParam0, iParam1))
	{
		uParam0->f_199[iParam1 /*124*/].f_5 = iParam2;
	}
}

int func_633(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 12))
	{
		return 0;
	}
	if (func_236(&(uParam0->f_199[iParam1 /*124*/]), 11))
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	if (bParam2)
	{
		sVar0.f_0 = 11;
	}
	else
	{
		sVar0.f_0 = 12;
	}
	if (bParam3)
	{
		func_374(uParam0, iParam1);
	}
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

int func_634(var uParam0, int iParam1)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 13;
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

void func_635(int iParam0, int iParam1)
{
	*iParam1 = MISC::GET_BITS_IN_RANGE(iParam0, 0, 4);
	iParam1->f_1 = (MISC::GET_BITS_IN_RANGE(iParam0, 5, 10) - 32);
	iParam1->f_1.f_1 = (MISC::GET_BITS_IN_RANGE(iParam0, 11, 16) - 32);
	iParam1->f_3 = MISC::GET_BITS_IN_RANGE(iParam0, 17, 19);
	iParam1->f_4 = MISC::GET_BITS_IN_RANGE(iParam0, 20, 31);
}

int func_636(var uParam0, int iParam1, int iParam2)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (uParam0->f_741)
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 6;
	func_289(&sVar0, 0, iParam2);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

int func_637(var uParam0, int iParam1, int iParam2, struct<4> /*32*/ sParam3, var uParam7, int iParam8, bool bParam9, int iParam10)
{
	Vector3 vVar0;
	struct<15> /*120*/ sVar3;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (uParam0->f_741)
	{
		return 0;
	}
	sVar3.f_1 = 8;
	sVar3.f_14 = -1;
	sVar3.f_0 = 8;
	func_289(&sVar3, 0, iParam2);
	func_289(&sVar3, 1, sParam3.f_3);
	func_289(&sVar3, 2, iParam8);
	if (bParam9)
	{
		func_289(&sVar3, 3, 1);
	}
	func_289(&sVar3, 7, iParam10);
	vVar0 = { func_843(uParam0, &sParam3) /*3*/ };
	func_844(&sVar3, vVar0);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar3);
}

bool func_638(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	*iParam2 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1 && iVar0 > iParam3)
		{
			*iParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_639(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_746[iParam1 /*8*/].f_5 = iParam2;
}

int func_640(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	struct<15> /*120*/ sVar0;

	if (iParam1 < 0 || iParam1 >= uParam0->f_199)
	{
		return 0;
	}
	if (func_391(&(uParam0->f_199[iParam1 /*124*/])))
	{
		return 0;
	}
	if (uParam0->f_741)
	{
		return 0;
	}
	sVar0.f_1 = 8;
	sVar0.f_14 = -1;
	sVar0.f_0 = 9;
	func_289(&sVar0, 0, iParam2);
	if (bParam3)
	{
		sVar0.f_0 = 10;
		func_289(&sVar0, 1, 1);
	}
	func_289(&sVar0, 5, iParam4);
	return func_288(&(uParam0->f_199[iParam1 /*124*/]), &sVar0);
}

void func_641(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_7, sParam1);
}

bool func_642(var uParam0, int iParam1)
{
	return (uParam0->f_46 == 54 && uParam0->f_48[0 /*15*/] == iParam1);
}

char* func_643(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_845(6, 1);
			break;
		default:
			break;
	}
}

void func_645(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_821(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_646(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_846())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_821(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_847(iVar0);
			func_848(iVar0, 0, 0);
		}
		func_821(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_834(func_820(joaat("CAREER_CASH")), iVar1);
	}
}

int func_647(int iParam0)
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

bool func_648(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_649(var uParam0)
{
	return uParam0->f_46;
}

int func_650(var uParam0, var uParam1, char* sParam2, bool bParam3, float fParam4)
{
	struct<34> /*272*/ sVar0;
	int iVar34;
	var uVar35;

	sVar0.f_6 = -1082130432;
	sVar0.f_9 = -1082130432;
	iVar34 = func_153(uParam1);
	uVar35 = uParam1->f_9;
	if (func_69(uParam0, uParam1))
	{
		uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
				break;
			case 1:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_01");
				break;
			case 2:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_02");
				break;
			case 3:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_03");
				break;
			default:
				uParam1->f_18.f_17 = joaat("MINI_GAMES@DOMINOES@GAME@PLAYER_00");
				break;
		}
	}
	sVar0.f_0 = uParam1->f_18.f_17;
	sVar0.f_1 = joaat("DEFAULT");
	sVar0.f_4 = "ANGLE_OF_PIECE";
	sVar0.f_5 = 0.0f;
	sVar0.f_32 = "CURRENT_CLIP";
	sVar0.f_33 = "CLIP_PHASE";
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sVar0.f_29 = sParam2;
	}
	else
	{
		sVar0.f_29 = "IdleRequest";
	}
	if (uParam0->f_194 == uParam1->f_9)
	{
		uParam0->f_195 = 1;
		uParam0->f_198 = 3;
	}
	uParam1->f_3 = 1;
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar34, 0) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar34, -1))
	{
		PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar34);
		TASK::CLEAR_PED_TASKS(iVar34, true, false);
	}
	if (func_32() == 0)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar34, true);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar34, false);
	}
	PED::SET_PED_LEG_IK_MODE(iVar34, 0);
	TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(iVar34, "SCRIPT_MINI_GAME_DOMINOES", &sVar0, fParam4, true, 0, (1 << 9));
	uParam1->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	uParam1->f_18.f_20 = 0;
	func_449(uParam1, 0);
	uParam1->f_18.f_4 = 0;
	if (bParam3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar34) && !uParam1->f_2)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar34, false, false);
		}
	}
	return 1;
}

void func_651(var uParam0, int iParam1)
{
	if (iParam1 == 54)
	{
		uParam0->f_47 = uParam0->f_48[0 /*15*/];
	}
	if (iParam1 != uParam0->f_46)
	{
		func_246(&(uParam0->f_43));
		uParam0->f_46 = iParam1;
	}
}

bool func_652(var uParam0)
{
	return func_849(func_153(uParam0));
}

void func_653(var uParam0, var uParam1, int iParam2)
{
	Vector3 vVar0;
	int iVar3;
	char* sVar4;

	iVar3 = 33153;
	sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
	vVar0 = { func_68(uParam0, uParam1) /*3*/ };
	switch (uParam1->f_10)
	{
		case 0:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_00";
			break;
		case 1:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_01";
			break;
		case 2:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_02";
			break;
		case 3:
			sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_03";
			break;
	}
	if (func_69(uParam0, uParam1))
	{
		sVar4 = "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00";
	}
	func_70(uParam0, uParam1, sVar4, "PLAYER_00_IDLE", vVar0, iVar3, 0, iParam2, 1);
}

float func_654(var uParam0)
{
	if (!func_245(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_624(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_625() - uParam0->f_1);
}

void func_655(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[6];
	int iVar8;

	iVar8 = func_850(iParam0, &uVar1, 6);
	iVar0 = 0;
	while (iVar0 < iVar8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar0]) && ENTITY::IS_ENTITY_AN_OBJECT(uVar1[iVar0]))
		{
			PED::DETACH_CARRIABLE_ENTITY(uVar1[iVar0], false, false);
			if (iParam1 == 1)
			{
				if (ENTITY::GET_CARRIABLE_ENTITY_STATE(uVar1[iVar0]) == 5)
				{
					ENTITY::DELETE_ENTITY(&(uVar1[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_656(var uParam0, var uParam1, float fParam2, bool bParam3)
{
	char cVar0[64];
	Vector3 vVar8;

	strcpy_s(&cVar0, 64, "MINI_GAMES@DOMINOES@GAME@PLAYER_0");
	vVar8 = { func_68(uParam0, uParam1) /*3*/ };
	StringIntConCat(&cVar0, uParam1->f_10, 64);
	if (func_69(uParam0, uParam1))
	{
		strcpy_s(&cVar0, 64, "MINI_GAMES@DOMINOES@GAME@PLAYER_FEMALE_00");
	}
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(uParam1->f_12);
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam1->f_12, 0))
	{
		TASK::CLEAR_PED_TASKS(uParam1->f_12, true, false);
	}
	PED::SET_PED_LEG_IK_MODE(uParam1->f_12, 0);
	TASK::TASK_PLAY_ANIM_ADVANCED(uParam1->f_12, &cVar0, "PLAYER_00_IDLE", *uParam0, vVar8, fParam2, -8.0f, -1, 41345, 0.0f, 2, 0, 0);
	if (bParam3)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam1->f_12, false, false);
	}
}

int func_657(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1)
	{
		return 0;
	}
	return uParam0->f_1[iParam1];
}

bool func_658(int iParam0)
{
	int iVar0;
	int iVar1;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true, 0, false);
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 1, false);
	return (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED"));
}

int func_659(var uParam0, int iParam1, var uParam2)
{
	Vector3 vVar0;

	if (!func_550(1, iParam1, &vVar0))
	{
		return 0;
	}
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam0, uParam0->f_3, vVar0) /*3*/ };
	return 1;
}

bool func_660(int iParam0, int iParam1)
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

float func_661(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_662(var uParam0, var uParam1, char* sParam2, char* sParam3, Vector3 vParam4, Vector3 vParam7, int iParam10, float fParam11, bool bParam12, int iParam13)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_153(uParam1);
	bVar1 = TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0);
	if (fParam11 != 0.0f || bParam12)
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, vParam4, vParam7, 1000.0f, -8.0f, -1, iParam10, fParam11, 2, iParam13, uParam1->f_2);
	}
	else
	{
		TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, vParam4, vParam7, 8.0f, -8.0f, -1, iParam10, 0.0f, 2, iParam13, uParam1->f_2);
	}
	if (bVar1)
	{
	}
}

int func_663(var uParam0, char* sParam1, char* sParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_153(uParam0);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sParam1, sParam2, 1))
	{
		return 0;
	}
	*uParam3 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sParam1, sParam2);
	return 1;
}

bool func_664(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_153(uParam0);
	if ((!PED::IS_PED_INJURED(iVar0) && ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sParam1, sParam2, 1)) && (bParam3 || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iVar0, sParam1, sParam2) < 1.0f))
	{
		return true;
	}
	return false;
}

int func_665(int iParam0, float fParam1, int iParam2, var uParam3)
{
	float fVar0;
	float fVar1;

	if (!func_549(iParam0))
	{
		return 0;
	}
	if (!func_551(iParam0, iParam2, &fVar0))
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

void func_666(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_743))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_743, false))
		{
			uParam0->f_77 = 3;
		}
	}
}

void func_667(var uParam0)
{
	if (uParam0->f_2334.f_409 == 1)
	{
		if (CAM::_IS_CAMERA_AVAILABLE(&(uParam0->f_2334.f_410)))
		{
			CAM::_CAM_DESTROY(&(uParam0->f_2334.f_410));
		}
		uParam0->f_2334.f_409 = 0;
	}
	if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1 && uParam0->f_2334.f_407 == 1)
	{
		GRAPHICS::SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(0.25f);
	}
	uParam0->f_2334.f_407 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_2334.f_437))
	{
		CAM::DESTROY_CAM(uParam0->f_2334.f_437, false);
	}
}

void func_668(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar4))
	{
		func_132(&iVar0, *uParam0 + Vector(fLocal_14, 0.0f, 0.0f), 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
		iVar2 = ENTITY::_GET_ENTITIES_IN_VOLUME(iVar0, iVar4, 3);
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar1 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar4));
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && func_133(iVar1))
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
				}
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
				{
					ENTITY::DETACH_ENTITY(iVar1, true, true);
				}
				OBJECT::DELETE_OBJECT(&iVar1);
			}
			iVar3++;
		}
		func_89(iVar0);
		ITEMSET::_CLEAR_ITEMSET(iVar4);
		ITEMSET::DESTROY_ITEMSET(iVar4);
	}
}

Vector3 func_669(Vector3 vParam0)
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

void func_670(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	DECORATOR::DECOR_REMOVE(iParam0, "PedSeatedForMinigame");
}

int func_671(var uParam0)
{
	if (!func_245(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_624(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_851() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

int func_672(int iParam0, Vector3 vParam1, float fParam4, float fParam5, Vector3 vParam6, var uParam9, int iParam10)
{
	Vector3 vVar0;
	float fVar3;

	if (!func_549(iParam0))
	{
		return 0;
	}
	if (!func_259(iParam0, vParam1, fParam4, fParam5, &vVar0, &fVar3, iParam10))
	{
		return 0;
	}
	*uParam9 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar0, fVar3, vParam6) /*3*/ };
	return 1;
}

void func_673(int iParam0, Vector3 vParam1)
{
	Vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 /*3*/ };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_674(var uParam0, var uParam1, char* sParam2, char* sParam3, Vector3 vParam4, int iParam7, float fParam8, float fParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_153(uParam1);
	TASK::TASK_PLAY_ANIM_ADVANCED(iVar0, sParam2, sParam3, *uParam0, vParam4, fParam9, -fParam9, -1, iParam7, fParam8, 2, iParam10, uParam1->f_2);
}

void func_675(int iParam0, char* sParam1, char* sParam2, Vector3 vParam3, Vector3 vParam6, float fParam9)
{
	Vector3 vVar0;
	Vector3 vVar3;

	vVar0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sParam1, sParam2, vParam3, vParam6, fParam9, 2) /*3*/ };
	vVar3 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sParam1, sParam2, vParam3, vParam6, fParam9, 2) /*3*/ };
	ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iParam0, vVar3, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
}

void func_676(int iParam0, char[4] cParam1, char[4] cParam2, Vector3 vParam3, Vector3 vParam6, int iParam9, float fParam10, int iParam11, bool bParam12)
{
	struct<31> /*248*/ sVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	sVar0.f_4 = 1065353216;
	sVar0.f_5 = 1065353216;
	sVar0.f_9 = 1065353216;
	sVar0.f_10 = 1065353216;
	sVar0.f_14 = 1065353216;
	sVar0.f_15 = 1065353216;
	sVar0.f_17 = 1040187392;
	sVar0.f_18 = 1040187392;
	sVar0.f_19 = -1;
	sVar0.f_26 = -1082130432;
	if (ENTITY::_0x0B7CB1300CBFE19C(iParam0, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(iParam0, 0, false);
	}
	sVar0.f_0 = 1;
	sVar0.f_1 = cParam1;
	sVar0.f_2 = cParam2;
	sVar0.f_3 = iParam9;
	sVar0.f_4 = fParam10;
	sVar0.f_5 = 1.0f;
	sVar0.f_10 = 0.0f;
	sVar0.f_15 = 0.0f;
	sVar0.f_23 = 0;
	sVar0.f_19 = -1;
	sVar0.f_16 = 0;
	sVar0.f_20 = 16662;
	sVar0.f_21 = 8;
	sVar0.f_22 = 1;
	sVar0.f_17 = iParam11;
	sVar0.f_18 = 0.0f;
	sVar0.f_27 = { vParam3 /*3*/ };
	sVar0.f_30 = { vParam6 /*3*/ };
	TASK::PLAY_ENTITY_SCRIPTED_ANIM(iParam0, &sVar0);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iParam0, true);
	if (fParam10 != 1.0f)
	{
		TASK::SET_ANIM_RATE(iParam0, fParam10, 0, false);
	}
	if (bParam12)
	{
	}
}

Vector3 func_677(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return { 0.0f, 0.0f, uParam0->f_3 };
		case 1:
			return { 0.0f, 0.0f, (uParam0->f_3 + 180.0f) };
		case 2:
			return { 0.0f, 0.0f, (uParam0->f_3 - 90.0f) };
		case 3:
			return { 0.0f, 0.0f, (uParam0->f_3 + 90.0f) };
		default:
			break;
	}
	return { 0.0f, 0.0f, uParam0->f_3 };
}

bool func_678(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(func_153(&(uParam0->f_199[iParam1 /*124*/]))))
	{
		return false;
	}
	return uParam0->f_199[iParam1 /*124*/].f_5;
}

bool func_679(var uParam0)
{
	char cVar0[64];
	char cVar8[64];
	float fVar16;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_12))
	{
		return true;
	}
	strcpy_s(&cVar0, 64, "MINI_GAMES@DOMINOES@TABLE@BEGIN_GAME@POPULATE@0");
	StringIntConCat(&cVar0, uParam0->f_10, 64);
	strcpy_s(&cVar8, 64, "PLAYER_00_POP_RACK");
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_12, &cVar0, &cVar8, 1))
	{
		return true;
	}
	fVar16 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_12, &cVar0, &cVar8);
	switch (uParam0->f_10)
	{
		case 0:
			if (fVar16 >= 0.005f && fVar16 <= 0.039f)
			{
				return false;
			}
			if (fVar16 >= 0.392f && fVar16 <= 0.637f)
			{
				return false;
			}
			break;
		case 1:
			if (fVar16 >= 0.017f && fVar16 <= 0.22f)
			{
				return false;
			}
			if (fVar16 >= 0.252f && fVar16 <= 0.4f)
			{
				return false;
			}
			if (fVar16 >= 0.447f && fVar16 <= 0.554f)
			{
				return false;
			}
			if (fVar16 >= 0.559f && fVar16 <= 0.772f)
			{
				return false;
			}
			break;
		case 2:
			if (fVar16 >= 0.017f && fVar16 <= 0.128f)
			{
				return false;
			}
			if (fVar16 >= 0.191f && fVar16 <= 0.368f)
			{
				return false;
			}
			if (fVar16 >= 0.413f && fVar16 <= 0.596f)
			{
				return false;
			}
			if (fVar16 >= 0.69f && fVar16 <= 0.823f)
			{
				return false;
			}
			break;
		case 3:
			if (fVar16 >= 0.019f && fVar16 <= 0.128f)
			{
				return false;
			}
			if (fVar16 >= 0.173f && fVar16 <= 0.42f)
			{
				return false;
			}
			if (fVar16 >= 0.486f && fVar16 <= 0.55f)
			{
				return false;
			}
			if (fVar16 >= 0.598f && fVar16 <= 0.728f)
			{
				return false;
			}
			break;
	}
	return true;
}

void func_680(int iParam0, int iParam1)
{
	if (func_18(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] -= (Global_1899528.f_3[iParam0] & iParam1);
}

int func_681(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 7;
			case 2:
				return 14;
			case 3:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 1)
	{
		switch (iParam0)
		{
			case 1:
				return 0;
			case 0:
				return 7;
			case 3:
				return 14;
			case 2:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 2)
	{
		switch (iParam0)
		{
			case 2:
				return 0;
			case 3:
				return 7;
			case 1:
				return 14;
			case 0:
				return 21;
			default:
				break;
		}
	}
	else if (iParam1 == 3)
	{
		switch (iParam0)
		{
			case 3:
				return 0;
			case 2:
				return 7;
			case 0:
				return 14;
			case 1:
				return 21;
			default:
				break;
		}
	}
	return 0;
}

bool func_682(int iParam0)
{
	return (((((iParam0 == 0 || iParam0 == 1) || iParam0 == 5) || iParam0 == 6) || iParam0 == 10) || iParam0 == 11);
}

int func_683(var uParam0, char* sParam1)
{
	var uVar0;
	int iVar1;

	uVar0 = uParam0->f_9;
	iVar1 = func_153(uParam0);
	if (!func_511(uParam0))
	{
		return 0;
	}
	if (!func_652(uParam0))
	{
		return 0;
	}
	TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar1, sParam1);
	func_246(&(uParam0->f_18.f_14));
	return 1;
}

bool func_684(var uParam0, char* sParam1)
{
	int iVar0;

	iVar0 = func_153(uParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	return ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY(sParam1));
}

void func_685(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_153(uParam1);
	func_852(uParam0, iVar0, iParam2, bParam3, bParam4);
	if (bParam3)
	{
		uParam1->f_14 = 0;
		uParam1->f_15 = 1;
	}
	else
	{
		uParam1->f_14 = 1;
		uParam1->f_15 = 0;
	}
}

bool func_686(var uParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (!func_511(uParam0))
	{
		return false;
	}
	iVar0 = func_153(uParam0);
	if (bParam2)
	{
		if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, sParam1))
		{
			return true;
		}
		if (func_368(&(uParam0->f_18.f_14)) > 5.0f)
		{
			return true;
		}
		return false;
	}
	return TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, sParam1);
}

bool func_687(var uParam0, var uParam1)
{
	int iVar0;

	if (!func_511(uParam0))
	{
		return false;
	}
	iVar0 = func_153(uParam0);
	if (func_32() == -1)
	{
		*uParam1 = MISC::GET_HASH_KEY(TASK::GET_TASK_MOVE_NETWORK_STATE(iVar0));
	}
	else
	{
		*uParam1 = TASK::_0xE9A6400D1A0E7A55(iVar0);
	}
	return true;
}

void func_688(var uParam0, int iParam1)
{
	uParam0->f_18.f_22 = iParam1;
}

int func_689(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;
	var uVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	func_853(iParam2, iParam3, &uVar0, &uVar3, 0);
	func_854(uParam0, &uVar0, &uVar3, &vVar6, &vVar9);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		return 0;
	}
	func_518(uParam0->f_746[iParam1 /*8*/].f_1, 1, 1);
	if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iParam1 /*8*/].f_1, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iParam1 /*8*/].f_1, 0, false);
	}
	ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, vVar6, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, vVar9, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iParam1 /*8*/].f_1, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_746[iParam1 /*8*/].f_1, uParam0->f_745, false);
	switch (iParam2)
	{
		case 0:
			func_553(uParam0, iParam1, 2, iParam3, iParam4);
			break;
		case 1:
			func_553(uParam0, iParam1, 3, iParam3, iParam4);
			break;
		case 2:
			func_553(uParam0, iParam1, 4, iParam3, iParam4);
			break;
		case 3:
			func_553(uParam0, iParam1, 5, iParam3, iParam4);
			break;
	}
	return 1;
}

void func_690(var uParam0)
{
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_42 = -1;
}

Vector3 func_691(var uParam0)
{
	return uParam0->f_10;
}

bool func_692(var uParam0)
{
	int iVar0;

	if (!func_511(uParam0))
	{
		return false;
	}
	if (!func_687(uParam0, &iVar0))
	{
		return false;
	}
	if (!uParam0->f_3)
	{
		return false;
	}
	if (joaat("RH_TILE_IDLE") == iVar0 || joaat("LH_TILE_IDLE") == iVar0)
	{
		return true;
	}
	if (func_684(uParam0, "Blend"))
	{
		return true;
	}
	if (uParam0->f_18.f_21 > 0.9f)
	{
		if (joaat("GET_TILE_RACK_LH") == iVar0 || joaat("GET_TILE_RACK_RH") == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_693(var uParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	Vector3 vVar7;

	iVar0 = func_153(uParam0);
	vVar1 = { -0.325f, (0.66f - 0.325f), fLocal_14 /*3*/ };
	vVar4 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, vParam1) /*3*/ };
	vVar7 = { vVar1 - vVar4 /*3*/ };
	uParam0->f_18.f_5 = ((vVar7.x / (0.325f * 2.0f)) * -1.0f);
	uParam0->f_18.f_6 = ((vVar7.y / (0.325f * 2.0f)) * -1.0f);
	uParam0->f_18.f_7 = { vParam1 /*3*/ };
}

float func_694(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			if (iParam1 == 3 || iParam1 == 1)
			{
				return 0.0f;
			}
			return 1.0f;
		default:
			break;
	}
	if (iParam1 == 3 || iParam1 == 1)
	{
		return 1.0f;
	}
	return 0.0f;
}

void func_695(var uParam0, float fParam1)
{
	uParam0->f_18.f_10 = fParam1;
}

void func_696(var uParam0)
{
	int iVar0;

	if (!func_511(uParam0))
	{
		return;
	}
	iVar0 = func_153(uParam0);
	uParam0->f_18.f_21 = TASK::_GET_TASK_MOVE_NETWORK_PHASE_FLOAT(iVar0, "CLIP_PHASE");
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "X", uParam0->f_18.f_5);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "Y", uParam0->f_18.f_6);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANGLE_OF_PIECE", uParam0->f_18.f_10);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "RACK_TILE_INDEX", BUILTIN::TO_FLOAT(uParam0->f_18.f_22));
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "ANIM_VARIATION", uParam0->f_18.f_11);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "CHANGE_IDLE", uParam0->f_18.f_1);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "FIRSTPERSON_IDLE", uParam0->f_18.f_2);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "TILE_PUT_BACK", uParam0->f_18.f_3);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "PEEK_AT_TILES", uParam0->f_18.f_4);
	if (!func_271(uParam0->f_18.f_7))
	{
		TASK::_SET_TASK_MOVE_NETWORK_SIGNAL_VECTOR(iVar0, "HAND_POS", uParam0->f_18.f_7);
	}
	if (!uParam0->f_2)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
	}
	uParam0->f_18 = 1;
}

bool func_697(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_855(uParam0->f_9, iParam1);
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
			if (bParam2 == 1)
			{
				if (iVar0 == 1 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			else
			{
				if (iVar0 == 1 || iVar0 == 0)
				{
					return false;
				}
				return true;
			}
			break;
		case 2:
		case 3:
			if (bParam2 == 1)
			{
				if (iVar0 == 1 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			else
			{
				if (iVar0 == 3 || iVar0 == 2)
				{
					return false;
				}
				return true;
			}
			break;
	}
	return false;
}

void func_698(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_372(iParam1);
	if (iVar2 != uParam0->f_746[iParam2 /*8*/])
	{
		return;
	}
	switch (uParam0->f_746[iParam2 /*8*/])
	{
		case 2:
			MISC::CLEAR_BIT(&(uParam0->f_981[0]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
		case 3:
			MISC::CLEAR_BIT(&(uParam0->f_981[1]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
		case 4:
			MISC::CLEAR_BIT(&(uParam0->f_981[2]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
		case 5:
			MISC::CLEAR_BIT(&(uParam0->f_981[3]), uParam0->f_746[iParam2 /*8*/].f_4);
			break;
	}
	iVar1 = uParam0->f_746[iParam2 /*8*/].f_5;
	uParam0->f_746[iParam2 /*8*/].f_5 = -1;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 != iParam2 && uParam0->f_746[iVar0 /*8*/].f_5 >= 0)
		{
			if (uParam0->f_746[iVar0 /*8*/] == iVar2 && uParam0->f_746[iVar0 /*8*/].f_5 > iVar1)
			{
				uParam0->f_746[iVar0 /*8*/].f_5--;
			}
		}
		iVar0++;
	}
}

int func_699(var uParam0, int iParam1, Vector3 vParam2, int iParam5, int iParam6)
{
	Vector3 vVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		return 0;
	}
	func_518(uParam0->f_746[iParam1 /*8*/].f_1, 1, 1);
	if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iParam1 /*8*/].f_1, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iParam1 /*8*/].f_1, 0, false);
	}
	vParam2.f_2 = (uParam0->f_2 + (fLocal_14 + (0.01f / 2.0f)));
	ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, vParam2, true, false, true, true);
	vVar0 = { 0.0f, 0.0f, (uParam0->f_3 + (float)func_856(iParam5)) /*3*/ };
	ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iParam1 /*8*/].f_1, vVar0, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iParam1 /*8*/].f_1, true);
	uParam0->f_746[iParam1 /*8*/].f_2 = iParam5;
	func_553(uParam0, iParam1, 6, iParam6, -1);
	return 1;
}

bool func_700(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		*iParam1 = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (!MISC::IS_BIT_SET(iParam0, iVar0))
		{
			*iParam1 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_701(var uParam0, int iParam1, int iParam2, int iParam3)
{
	switch (uParam0->f_746[iParam1 /*8*/])
	{
		case 2:
			MISC::CLEAR_BIT(&(uParam0->f_981[0]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 3:
			MISC::CLEAR_BIT(&(uParam0->f_981[1]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 4:
			MISC::CLEAR_BIT(&(uParam0->f_981[2]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 5:
			MISC::CLEAR_BIT(&(uParam0->f_981[3]), uParam0->f_746[iParam1 /*8*/].f_4);
			break;
		case 6:
			MISC::CLEAR_BIT(&(uParam0->f_986), iParam1);
			break;
	}
	uParam0->f_746[iParam1 /*8*/] = iParam2;
	uParam0->f_746[iParam1 /*8*/].f_4 = iParam3;
	switch (uParam0->f_746[iParam1 /*8*/])
	{
		case 2:
			MISC::SET_BIT(&(uParam0->f_981[0]), iParam3);
			break;
		case 3:
			MISC::SET_BIT(&(uParam0->f_981[1]), iParam3);
			break;
		case 4:
			MISC::SET_BIT(&(uParam0->f_981[2]), iParam3);
			break;
		case 5:
			MISC::SET_BIT(&(uParam0->f_981[3]), iParam3);
			break;
		case 6:
			MISC::SET_BIT(&(uParam0->f_986), iParam1);
			break;
	}
}

int func_702(var uParam0, int iParam1, var uParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_746[iParam1 /*8*/].f_1))
	{
		return 0;
	}
	*uParam2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iParam1 /*8*/].f_1, true, false) /*3*/ };
	return 1;
}

float func_703(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_704(var uParam0)
{
	uParam0->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 0.3f);
}

void func_705(var uParam0)
{
	uParam0->f_18.f_11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
}

void func_706(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_8)
	{
		uParam0->f_8[iVar0] = -1;
		iVar0++;
	}
}

void func_707(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	Vector3 vVar8;
	Vector3 vVar11;
	Vector3 vVar14;
	int iVar17;
	int iVar18;

	iVar0 = 41308;
	iVar1 = 16732;
	uParam0->f_35.f_41 = iParam1;
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam1, iVar0, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar2.f_2 = (uParam0->f_2 + fLocal_14);
	vVar5 = { PED::GET_PED_BONE_COORDS(iParam1, iVar1, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar5.f_2 = (uParam0->f_2 + fLocal_14);
	iVar17 = 0;
	while (iVar17 < 28)
	{
		if (func_857(uParam0->f_746[iVar17 /*8*/].f_1, iVar17, &(uParam0->f_35), vVar2, vVar5))
		{
			iVar18 = func_858(uParam0->f_746[iVar17 /*8*/].f_1, iVar17, &(uParam0->f_35), *uParam0, 0.0f, 0.0f, uParam0->f_3);
			if (func_142())
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("TILE_SLIDE_SHORT", vVar2, "MGDOM_Sounds", false, 0, true, 0);
			}
			else
			{
				AUDIO::_PLAY_SOUND_FROM_POSITION("TILE_SLIDE_LONG", vVar2, "MGDOM_Sounds", false, 0, true, 0);
			}
		}
		iVar18 = uParam0->f_35.f_8[iVar17];
		if (iVar18 != -1)
		{
			func_859(iVar18, *uParam0, 0.0f, 0.0f, uParam0->f_3, &vVar8, &vVar11, 0);
			vVar14 = { func_860(ENTITY::GET_ENTITY_COORDS(uParam0->f_746[iVar17 /*8*/].f_1, true, false), vVar8, uParam0->f_35.f_37) /*3*/ };
			ENTITY::SET_ENTITY_COORDS(uParam0->f_746[iVar17 /*8*/].f_1, vVar14, true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_746[iVar17 /*8*/].f_1, vVar11, 2, true);
		}
		iVar17++;
	}
}

int func_708()
{
	return Global_40.f_4283.f_1;
}

bool func_709(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_2 > iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_2;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam1 != -1;
}

bool func_710(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 2147483647;
	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_2 < iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_2;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam1 != -1;
}

bool func_711(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 2147483647;
	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_3 < iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_3;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam1 != -1;
}

bool func_712(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	*iParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_149(uParam0, iVar0))
		{
			if (uParam0->f_149[iVar0 /*44*/].f_3 > iVar1)
			{
				iVar1 = uParam0->f_149[iVar0 /*44*/].f_3;
				*iParam1 = iVar0;
			}
		}
		iVar0++;
	}
	return *iParam1 != -1;
}

char* func_713(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GREET";
		case 1:
			return "GREET_WINNER_MEMORY";
		case 2:
			return "GREET_LOSER_MEMORY";
		case 3:
			return "GREET_GOOD_MEMORY";
		case 4:
			return "GREET_BAD_MEMORY";
		case 5:
			return "GREET_AGAIN_WINNER";
		case 6:
			return "GREET_AGAIN_LOSER";
		case 7:
			return "GREET_CALLOVER";
		case 8:
			return "GREET_APPROACH";
		case 9:
			return "GOOD_MEMORY_CHATTER";
		case 10:
			return "BAD_MEMORY_CHATTER";
		case 11:
			return "GENERIC_CHATTER";
		case 12:
			return "CALLOVER_PLAYERS_GENERIC";
		case 13:
			return "CAMP_CHAT_HORSESHOE_OVERLOOK_CUSTOM";
		case 14:
			return "CAMP_CHAT_CLEMENS_POINT_CUSTOM";
		case 15:
			return "CAMP_CHAT_SHADY_BELLE_CUSTOM";
		case 16:
			return "COMPANION_CHAT_HORSESHOE_OVERLOOK_CUSTOM";
		case 17:
			return "COMPANION_CHAT_CLEMENS_POINT_CUSTOM";
		case 18:
			return "COMPANION_CHAT_SHADY_BELLE_CUSTOM";
		case 19:
			return "PLAYER_CAMP_CHAT_RESPONSE";
		case 20:
			return "COMMENT_LEAVE";
		case 21:
			return "COMMENT_LEAVE_EARLY";
		case 22:
			return "COMMENT_NOT_LOOKING_GOOD";
		case 23:
			return "COMMENT_LOOKING_GOOD";
		case 24:
			return "LEAVE_GOOD_GAME";
		case 25:
			return "LEAVE_NEUTRAL_GAME";
		case 26:
			return "LEAVE_BAD_GAME";
		case 27:
			return "LEAVE_VERY_BAD_GAME";
		case 28:
			return "REJOIN_TABLE";
		case 29:
			return "YES";
		case 30:
			return "NO";
		case 31:
			return "TIE";
		case 32:
			return "THANKS";
		case 33:
			return "FINISHED";
		case 34:
			return "RAISE";
		case 35:
			return "BUST";
		case 36:
			return "PLACE_BID";
		case 37:
			return "DELIBERATING";
		case 38:
			return "BIG_WIN";
		case 39:
			return "BIG_LOSS";
		case 40:
			return "SMALL_WIN";
		case 41:
			return "SMALL_LOSS";
		case 42:
			return "BIG_WIN_VOCAL";
		case 43:
			return "BIG_LOSS_VOCAL";
		case 44:
			return "SMALL_WIN_VOCAL";
		case 45:
			return "SMALL_LOSS_VOCAL";
		case 46:
			return "FILLER";
		case 47:
			return "ANGRY";
		case 48:
			return "EXCITED";
		case 49:
			return "DISAPPROVE";
		case 50:
			return "SURPRISED";
		case 51:
			return "COMMENT_WIN";
		case 52:
			return "COMMENT_SLOW";
		case 53:
			return "COMMENT_LOSS";
		case 54:
			return "COMMENT_RESPONSE";
		case 55:
			return "CALL_BULLSHIT";
		case 56:
			return "PASS";
		case 57:
			return "MOVE_POINT";
		case 58:
			return "MOVE_NO_POINT";
		case 59:
			return "MOVE_GENERIC_NO_POINT";
		case 60:
			return "SUCCESSFUL_DRAW";
		case 61:
			return "UNSUCCESSFUL_DRAW";
		case 62:
			return "UNSUCCESSFUL_DRAW_AGAIN";
		case 63:
			return "DEPLETED_BONEYARD";
		case 64:
			return "NO_LUCK_DEPLETED_BONEYARD";
		case 65:
			return "REVEAL_SURRENDER_NONE";
		case 66:
			return "REVEAL_SURRENDER_LOW";
		case 67:
			return "REVEAL_SURRENDER_MED";
		case 68:
			return "REVEAL_SURRENDER_HIGH";
		case 69:
			return "REACTION_FRUSTRATED_LVL1 ";
		case 70:
			return "REACTION_FRUSTRATED_LVL2";
		case 71:
			return "REACTION_FRUSTRATED_LVL3";
		case 72:
			return "REACTION_DISBELIEF_LVL1";
		case 73:
			return "REACTION_DISBELIEF_LVL2";
		case 74:
			return "REACTION_DISBELIEF_LVL3";
		case 75:
			return "REACTION_EXCITED_LVL1";
		case 76:
			return "REACTION_EXCITED_LVL2";
		case 77:
			return "REACTION_EXCITED_LVL3";
		case 78:
			return "REACTION_ANGRY_LVL1";
		case 79:
			return "REACTION_ANGRY_LVL2";
		case 80:
			return "REACTION_ANGRY_LVL3";
		case 81:
			return "REACTION_CONTENT_LVL1";
		case 82:
			return "REACTION_CONTENT_LVL2";
		case 83:
			return "REACTION_CONTENT_LVL3";
		case 84:
			return "REACTION_NERVOUS_LVL1";
		case 85:
			return "REACTION_NERVOUS_LVL2";
		case 86:
			return "REACTION_NERVOUS_LVL3";
		case 87:
			return "MONO_GOOD_GAME";
		case 88:
			return "MONO_BAD_GAME";
		case 89:
			return "WIN_LAST_MINUTE";
		case 90:
			return "WINNING_STREAK";
		default:
			break;
	}
	return "";
}

void func_714(var uParam0, int iParam1)
{
	if (uParam0->f_26[iParam1 /*32*/])
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_26[iParam1 /*32*/].f_12);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_26[iParam1 /*32*/].f_12);
		if (*uParam0 == 0)
		{
			DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_26[iParam1 /*32*/].f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_26[iParam1 /*32*/].f_13);
		}
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_26[iParam1 /*32*/].f_1);
		uParam0->f_26[iParam1 /*32*/] = 0;
	}
	MISC::CLEAR_BIT(&(uParam0->f_157), iParam1);
}

void func_715(var uParam0, int iParam1)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_437))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_437))
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 2);
			if (iParam1 == 0)
			{
				uParam0->f_446 = 1;
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_437, false);
			}
		}
	}
}

bool func_716(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_208(iParam0))
	{
		return false;
	}
	iVar0 = func_554(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1945188[iVar0 /*18*/].f_3);
}

int func_717(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;

	if (!func_208(*uParam1))
	{
		return 0;
	}
	bVar0 = func_716(*uParam1, 1);
	if (bVar0 != bParam2)
	{
		func_861(*uParam1, bParam2, 1);
	}
	return 1;
}

int func_718(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_720(iVar0, 2))
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
				func_727(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_719(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_208(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, 11, bParam1);
}

bool func_720(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_721(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 -= (Global_1945188[iParam0 /*18*/].f_1 & iParam1);
}

void func_722(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_720(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_723(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_724(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

float func_725(float fParam0, float fParam1, float fParam2)
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

float func_726(float fParam0)
{
	float fVar0;

	fVar0 = (fParam0 * fParam0);
	return (fVar0 / ((2.0f * (fVar0 - fParam0)) + 1.0f));
}

void func_727(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_722(iParam0, 1);
	func_723(iParam0, 1);
	func_724(iParam0, 128);
}

void func_728(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_208(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[iVar0 /*18*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_729(var uParam0)
{
	int iVar0;

	if (*uParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_14)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14[iVar0], "");
		iVar0++;
	}
}

int func_730(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	struct<15> /*120*/ sVar1;

	switch (func_28())
	{
		case 71:
			iVar0 = 18;
			break;
		case 98:
			iVar0 = 24;
			break;
		case 9:
			iVar0 = 4;
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		sVar1.f_14 = iParam0;
		sVar1.f_0 = uParam1;
		sVar1.f_12 = 27;
		sVar1.f_3 = uParam2;
		sVar1.f_8 = iParam3;
		sVar1.f_11 = iParam4;
		sVar1.f_13 = iVar0;
		MISC::_CREATE_AI_MEMORY(&sVar1, 17);
		return 1;
	}
	return 0;
}

void func_731(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];

	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_396(&(uParam0->f_1.f_26[iParam1 /*32*/]), 0);
	iVar1 = 0;
	if (iParam2 < 0 || iParam2 >= uParam0->f_204[iParam1 /*7*/].f_6)
	{
		iParam2 = uParam0->f_204[iParam1 /*7*/].f_6;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		iVar2 = func_150(&(uParam0->f_204[iParam1 /*7*/]), iVar0);
		if (func_862(iVar2, &cVar3))
		{
			func_863(&(uParam0->f_1.f_26[iParam1 /*32*/]), iVar1, &cVar3);
			iVar1++;
		}
		iVar0++;
	}
}

void func_732(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return;
	}
	if (*uParam0 == 0)
	{
		return;
	}
	func_398(&(uParam0->f_1), iParam1);
	if (iParam2 == 1)
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGTILEPTS1"));
	}
	else
	{
		func_389(uParam0, iParam1, MISC::VAR_STRING(2, "MGDOM_MSGTILEPTS", iParam2));
	}
}

bool func_733(var uParam0)
{
	int iVar0;

	if (func_437(1))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_204(uParam0, iVar0))
		{
			if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(uParam0->f_199[iVar0 /*124*/].f_12))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_734(int iParam0)
{
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
			return 0;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 2;
		case 16:
			return 2;
		case 17:
			return 2;
		case 18:
			return 3;
		case 19:
			return 3;
		case 20:
			return 3;
		case 21:
			return 3;
		case 22:
			return 4;
		case 23:
			return 4;
		case 24:
			return 4;
		case 25:
			return 5;
		case 26:
			return 5;
		case 27:
			return 6;
		default:
			break;
	}
	return -1;
}

int func_735(int iParam0)
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
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 1;
		case 8:
			return 2;
		case 9:
			return 3;
		case 10:
			return 4;
		case 11:
			return 5;
		case 12:
			return 6;
		case 13:
			return 2;
		case 14:
			return 3;
		case 15:
			return 4;
		case 16:
			return 5;
		case 17:
			return 6;
		case 18:
			return 3;
		case 19:
			return 4;
		case 20:
			return 5;
		case 21:
			return 6;
		case 22:
			return 4;
		case 23:
			return 5;
		case 24:
			return 6;
		case 25:
			return 5;
		case 26:
			return 6;
		case 27:
			return 6;
		default:
			break;
	}
	return -1;
}

void func_736(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	func_350(&(uParam0->f_262));
	if (iParam2 >= *uParam1)
	{
		iParam2 = *uParam1;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		uParam0->f_262[iVar0 /*5*/] = { *(uParam1[iVar0 /*5*/]) /*5*/ };
		iVar0++;
	}
	uParam0->f_259 = iParam2;
	uParam0->f_261 = 1;
}

void func_737(var uParam0, int iParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_11, iParam1);
}

int func_738(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		(*uParam2)[iVar1] = -1;
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iVar0 /*5*/])))
		{
			if ((*uParam0)[iVar0 /*5*/] == iParam1)
			{
				if (iVar1 < *uParam2)
				{
					(*uParam2)[iVar1] = iVar0;
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_739(var uParam0, var uParam1, int iParam2, int* iParam3, int iParam4)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;

	if (iParam2 == 29)
	{
		return 0;
	}
	iVar0 = func_552(iParam2, uParam0->f_6);
	vVar1 = { func_843(uParam0, uParam1) /*3*/ };
	vVar4 = { 0.0f, 0.0f, (uParam0->f_3 + (float)func_856(uParam1->f_3)) /*3*/ };
	if (ENTITY::DOES_ENTITY_EXIST(*iParam3) && ENTITY::GET_ENTITY_MODEL(*iParam3) != iVar0)
	{
		func_266(iParam3);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam3))
	{
		*iParam3 = OBJECT::CREATE_OBJECT(iVar0, vVar1, false, true, false, false, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam3))
	{
		ENTITY::SET_ENTITY_COORDS(*iParam3, vVar1, true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(*iParam3, vVar4, 2, true);
		ENTITY::SET_ENTITY_ALPHA(*iParam3, iParam4, false);
		CAM::_0xDB382FE20C2DA222(*iParam3);
		return 1;
	}
	return 0;
}

struct<4> /*32*/ func_740(var uParam0)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_0 = *uParam0;
	sVar0.f_1 = { uParam0->f_1 /*2*/ };
	sVar0.f_3 = uParam0->f_3;
	return sVar0;
}

bool func_741(var uParam0, var uParam1)
{
	MISC::CLEAR_BIT(&(uParam0->f_1321), 3);
	MISC::CLEAR_BIT(&(uParam0->f_1322), 3);
	if (MINIGAME::_DOMINOES_PLACE_DOMINO(uParam1, &(uParam0->f_1300[3 /*4*/])))
	{
		return true;
	}
	MISC::SET_BIT(&(uParam0->f_1322), 3);
	return false;
}

int func_742(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	*uParam2 = -1;
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (uParam0->f_746[iVar0 /*8*/].f_1 == iParam1)
		{
			if (iParam3 == 0 || uParam0->f_746[iVar0 /*8*/] == iParam3)
			{
				*uParam2 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_743(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	*uParam2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_384[iVar0] == iParam1)
		{
			*uParam2 = iVar0;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_744(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar3 = func_372(uParam1->f_194);
	if (uParam0->f_345)
	{
		return;
	}
	if (!func_204(uParam1, uParam1->f_194))
	{
		return;
	}
	if (func_233(&(uParam1->f_199[uParam1->f_194 /*124*/])))
	{
		return;
	}
	if (uParam0->f_348 && uParam0->f_448)
	{
		return;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY")))
	{
		if (func_864(uParam1, iVar3, uParam0->f_340, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		else if (func_864(uParam1, iVar3, 19, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 3;
		iVar0 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY")))
	{
		if (func_497(uParam1, iVar3, uParam0->f_340, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		else if (func_497(uParam1, iVar3, -1, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 1;
		iVar0 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_UP_ONLY")))
	{
		if (func_865(uParam1, iVar3, uParam0->f_340 + 5, &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 0;
		iVar0 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_DOWN_ONLY")))
	{
		if (func_865(uParam1, iVar3, (uParam0->f_340 - 5), &uVar2))
		{
			uParam0->f_343 = uVar2;
			uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
			uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
		}
		iVar1 = 2;
		iVar0 = 1;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_363 != -1)
		{
			if (uParam1->f_746[uParam0->f_363 /*8*/] == iVar3)
			{
				if (uParam0->f_343 != uParam0->f_363)
				{
					iVar0 = 1;
				}
				uParam0->f_343 = uParam0->f_363;
				uParam0->f_340 = uParam1->f_746[uParam0->f_343 /*8*/].f_4;
				uParam0->f_339 = uParam1->f_746[uParam0->f_343 /*8*/].f_5;
			}
		}
	}
	if (uParam0->f_342 != uParam0->f_343 || iVar0 == 1)
	{
		uParam0->f_260 = func_499(&(uParam0->f_262), uParam0->f_339);
		uParam0->f_344 = uParam0->f_260 > 0;
		uParam0->f_251 = 0;
		if (uParam0->f_342 != -1)
		{
			func_498(uParam1, &(uParam1->f_746[uParam0->f_342 /*8*/]), 0);
		}
		if (uParam0->f_343 != -1)
		{
			func_498(uParam1, &(uParam1->f_746[uParam0->f_343 /*8*/]), 3);
		}
		if (iVar0 == 1)
		{
			switch (iVar1)
			{
				case 0:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_UP", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
				case 2:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_DOWN", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
				case 1:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_RIGHT", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
				case 3:
					AUDIO::PLAY_SOUND_FRONTEND("NAV_LEFT", "HUD_DOMINOS_SOUNDSET", true, 0);
					break;
			}
		}
	}
	uParam0->f_342 = uParam0->f_343;
}

bool func_745(var uParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return iVar0 != 0;
}

bool func_746(var uParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (uParam0->f_246 == iVar0 && (uParam0->f_247 >= 11 && uParam0->f_247 <= 14));
}

bool func_747(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 == 0)
	{
		return false;
	}
	return (uParam0->f_246 == iVar0 && uParam0->f_247 == iParam1);
}

bool func_748(var uParam0, var uParam1)
{
	if (uParam0->f_343 == -1)
	{
		return false;
	}
	if (func_491(uParam0->f_459, 1))
	{
		return true;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_448)
		{
			return false;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, joaat("INPUT_CURSOR_ACCEPT")))
		{
			return func_866(uParam0, uParam1);
		}
	}
	return false;
}

void func_749(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	if (!uParam0->f_345)
	{
		return;
	}
	if (!func_204(uParam1, uParam1->f_194))
	{
		return;
	}
	if (uParam0->f_259 == 0)
	{
		func_211(uParam0);
		return;
	}
	if (uParam0->f_348)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_357))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (uParam0->f_357 == uParam0->f_384[iVar0])
				{
					uParam0->f_338 = uParam0->f_391[iVar0];
				}
				iVar0++;
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY")))
	{
		if (func_503(&(uParam0->f_262), uParam0->f_339, &iVar0, uParam0->f_338))
		{
			if (uParam0->f_338 != iVar0)
			{
				uParam0->f_338 = iVar0;
				func_501(uParam0, uParam1, uParam2);
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND("NAV_RIGHT", "HUD_DOMINOS_SOUNDSET", true, 0);
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY")))
	{
		if (func_867(&(uParam0->f_262), uParam0->f_339, &iVar0, uParam0->f_338))
		{
			if (uParam0->f_338 != iVar0)
			{
				uParam0->f_338 = iVar0;
				func_501(uParam0, uParam1, uParam2);
			}
		}
		AUDIO::PLAY_SOUND_FRONTEND("NAV_LEFT", "HUD_DOMINOS_SOUNDSET", true, 0);
	}
}

int func_750(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_208(*uParam1))
	{
		if (!func_716(*uParam1, 1))
		{
			func_717(uParam0, uParam1, 1);
		}
		return 0;
	}
	if (func_220() || uParam0->f_240.f_3 == 1)
	{
		return 0;
	}
	*uParam1 = func_868(sParam2, iParam3, iParam4, iParam6);
	if (iParam5 == 1)
	{
		func_719(*uParam1, 1, 1);
	}
	uParam0->f_453++;
	return 1;
}

bool func_751(var uParam0)
{
	if (func_491(uParam0->f_455, 1))
	{
		return true;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_448)
		{
			return false;
		}
		return PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, joaat("INPUT_CURSOR_CANCEL"));
	}
	return false;
}

int func_752(var uParam0, var uParam1)
{
	if (func_491(uParam0->f_460, 1))
	{
		return 1;
	}
	if (uParam0->f_348)
	{
		if (uParam0->f_448)
		{
			return 0;
		}
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, joaat("INPUT_CURSOR_ACCEPT")))
		{
			return func_869(uParam0);
		}
		return 0;
	}
	return 0;
}

int func_753(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	else if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	else if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_754(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!func_870(iParam1))
	{
		return 0;
	}
	if (!bParam3)
	{
		return 1;
	}
	iVar0 = func_785(iParam1);
	return func_871(iParam0, iVar0, bParam2, bParam2);
}

void func_755(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_756(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_757(int iParam0)
{
	if (!func_35(iParam0))
	{
		return -1;
	}
	return func_525(iParam0);
}

int func_758(int iParam0)
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

bool func_759()
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

bool func_760(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_761(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_762(int iParam0)
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

int func_763(int iParam0)
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

bool func_764(int iParam0, bool bParam1)
{
	switch (func_757(iParam0))
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

void func_765(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_872(iParam0);
	}
	else
	{
		func_873(iParam0, iParam1);
	}
	func_874();
}

bool func_766(int iParam0)
{
	if (!func_35(iParam0))
	{
		return false;
	}
	switch (func_36(iParam0))
	{
		case 1:
			switch (func_537(iParam0))
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
			switch (func_537(iParam0))
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

void func_767(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_875(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_876(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, iVar1);
		}
		iVar0++;
	}
	func_878(func_877(iParam0), 6);
}

void func_768(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_875(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_876(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_879(func_877(iParam0), 6);
}

int func_769(int iParam0)
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

int func_770(int iParam0)
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
	func_880(iParam0, Global_1898164.f_162);
	return 1;
}

int func_771(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_772(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

int func_773(struct<2> /*16*/ sParam0, var uParam2)
{
	int iVar0;

	iVar0 = (BUILTIN::ROUND(MISC::ABSF(sParam0.f_0)) & 32767) | BUILTIN::SHIFT_LEFT((BUILTIN::ROUND(MISC::ABSF(sParam0.f_1)) & 32767), 15);
	if (sParam0.f_0 > 0.0f)
	{
		iVar0 |= (1 << 30);
	}
	if (sParam0.f_1 > 0.0f)
	{
		iVar0 |= (1 << 31);
	}
	return iVar0;
}

int func_774(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

int func_775(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_776(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_2;
	}
	return Global_42606[iParam0 /*4*/].f_2;
}

void func_777(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_778(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_779(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

int func_780()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_781(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_782(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_881(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_780())
	{
		return -1;
	}
	iVar0 = func_781(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_765(iVar1, 0);
	func_882(iVar1, 0);
	func_835(iVar1, 0);
	func_883(iVar1, 0);
	func_884(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_885(iVar1, iParam4);
	}
	return iVar1;
}

bool func_783(int iParam0)
{
	return func_720(iParam0, 2);
}

bool func_784(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> /*32*/ sVar3;

	sVar3.f_0 = -961687407;
	if (func_32() == -1)
	{
		sVar3.f_0 = 1444744190;
	}
	sVar3.f_1 = iParam0;
	sVar3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar3);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar3))
	{
		return false;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar3, joaat("META_TYPE")))
	{
		return false;
	}
	iVar2 = func_886(iParam0);
	if (func_887(iVar0, &iVar1))
	{
		func_888(iVar1, iVar2);
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar3, joaat("META_TYPE")))
		{
		}
		else if (!func_887(iVar0, &iVar1))
		{
		}
		else
		{
			func_888(iVar1, iVar2);
		}
	}
	return true;
}

int func_785(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	sVar1.f_0 = -961687407;
	if (func_32() == -1)
	{
		sVar1.f_0 = 1444744190;
	}
	sVar1.f_1 = iParam0;
	sVar1.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar1);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		return 0;
	}
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar1, joaat("META_TAG")))
	{
		return 0;
	}
	return func_889(iVar0);
}

int func_786(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_890(13, iParam1, 0, 0, 0);
		}
		else
		{
			func_890(13, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_891(0))
	{
	}
	func_892(&(Global_1946054.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

bool func_787(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

void func_788(int iParam0)
{
	int iVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_893(iParam0);
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

void func_789(int iParam0)
{
	if (func_292(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_410(iParam0)))
		{
			func_313(iParam0, (1 << 26), 1);
			func_294(iParam0, 19, 1);
		}
	}
}

float func_790(int iParam0)
{
	if (!func_560(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_791(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_410(iParam0);
	iVar1 = func_564(iParam0, 0);
	func_894(iParam0, iVar0);
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

bool func_792(int iParam0)
{
	if (!func_560(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_793(int iParam0)
{
	if (!func_560(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_794(int iParam0, int iParam1, bool bParam2)
{
	if (!func_560(iParam0))
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

int func_795(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_560(iParam0))
	{
		return 0;
	}
	iVar0 = func_570(iParam0);
	if (func_297(iVar0, 0))
	{
		if (func_297(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_792(iParam0)) || func_793(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_895(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000.0f))
			{
				iVar1 = func_896(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_897(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_898(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_898(iParam0, 0));
					func_899(iParam0);
				}
			}
			else
			{
				if (func_291(iParam0, (1 << 15), 1))
				{
					iVar2 = func_898(iParam0, 0);
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
		if (func_297(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_291(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_897(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_898(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_898(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_897(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_900(iParam0, 0);
	return 1;
}

bool func_796(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return false;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return false;
	}
	if (iParam1 == iParam2)
	{
		return true;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	if (!bVar0)
	{
		return false;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return true;
	}
	return false;
}

bool func_797(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_901(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_798(bool bParam0)
{
	if (func_902(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179 /*PCF_0x605C7288*/, true);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 127, false);
	if (FIRE::IS_ENTITY_ON_FIRE(bParam0))
	{
		FIRE::STOP_ENTITY_FIRE(bParam0, 0);
		ENTITY::SET_ENTITY_HEALTH(bParam0, ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false), 0);
	}
}

void func_799(int iParam0)
{
	bool bVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	if (func_896(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_570(iParam0);
	func_798(bVar0);
	func_794(iParam0, (1 << 13), 1);
}

void func_800(bool bParam0)
{
	if (func_902(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179 /*PCF_0x605C7288*/, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_801(int iParam0)
{
	bool bVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	if (func_896(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_570(iParam0);
	func_800(bVar0);
	func_794(iParam0, (1 << 13), 0);
}

void func_802(bool bParam0)
{
	if (func_902(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_803(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_146(14))
	{
		return;
	}
	if (Global_40.f_4283 != 7 && Global_40.f_4283 != 8)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[4]))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[4], true, 0))
	{
		return;
	}
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 909522);
}

void func_804(int iParam0)
{
	bool bVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	if (func_896(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_570(iParam0);
	func_802(bVar0);
	func_794(iParam0, (1 << 14), 1);
}

void func_805(bool bParam0)
{
	if (func_902(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

void func_806(int iParam0)
{
	bool bVar0;

	if (!func_560(iParam0))
	{
		return;
	}
	if (func_896(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_570(iParam0);
	func_805(bVar0);
	func_794(iParam0, (1 << 14), 0);
}

int func_807(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_903(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_808(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case 296923297:
			iVar2 = -268604689;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar0)
			{
				case 0:
					iVar1 = -268604689;
					break;
				case 1:
					iVar1 = -1632589543;
					break;
				case 2:
					iVar1 = -1862464078;
					break;
			}
			break;
		case 1237718549:
			iVar2 = -922193456;
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			switch (iVar0)
			{
				case 0:
					iVar1 = -922193456;
					break;
				case 1:
					iVar1 = -2040275819;
					break;
				case 2:
					iVar1 = -1114682645;
					break;
				case 3:
					iVar1 = -1414977761;
					break;
			}
			break;
	}
	if (iParam1 != -1)
	{
		if (func_304(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_809(int iParam0)
{
	switch (iParam0)
	{
		case -268604689:
			return joaat("META_OUTFIT_COOL_WEATHER");
		case -1632589543:
			return 1052055818;
		case -1862464078:
			return 1895628185;
		case -922193456:
			return joaat("META_OUTFIT_WARM_WEATHER");
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		default:
			break;
	}
	return joaat("META_OUTFIT_DEFAULT");
}

void func_810(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 -= (Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1);
}

bool func_811(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_812(int iParam0)
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

int func_813(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		sVar0 = { func_904(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_905((398 + iVar28), 1);
			if (func_906(iParam0, &sVar0, iVar5, 0))
			{
				if (func_907(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_908(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_909(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_910(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return 0;
					}
					func_911(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_912(iParam0, iParam1);
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

void func_814(int iParam0, int iParam1, float fParam2)
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
		PED::SET_PED_CONFIG_FLAG(iParam0, 361 /*PCF_IgnoreWeaponDegradation*/, true);
	}
}

bool func_815(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_816(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = -1;
	if (uParam0->f_39 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = func_615(*(uParam0[iVar0 /*2*/]));
		if (iVar1 > iVar2 || iVar2 == -1)
		{
			if (iParam1 == 0 || (iParam1 == 1 && func_913(*(uParam0[iVar0 /*2*/]))))
			{
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_817(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_6.f_142)
	{
		if (uParam0->f_6.f_1[iVar0 /*5*/].f_2 == iParam1 && uParam0->f_6.f_1[iVar0 /*5*/].f_2.f_1 == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_818(var uParam0, var uParam1)
{
	if (!func_914(uParam0, uParam1))
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_2.f_1 != uParam1->f_2.f_1)
	{
		return false;
	}
	return uParam0->f_4 == uParam1->f_4;
}

int func_819(var uParam0, var uParam1)
{
	int iVar0;

	if (uParam0->f_39 != uParam1->f_39)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (!func_914(uParam0[iVar0 /*2*/], uParam1[iVar0 /*2*/]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

struct<2> /*16*/ func_820(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_821(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
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
	func_915(sParam0, sParam1, iParam2);
	return iVar20;
}

char* func_822(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_22, iParam1))
	{
		return "";
	}
	if (!MISC::IS_BIT_SET(uParam0->f_23, iParam1))
	{
		return "";
	}
	return NETWORK::_0x356F9FB0698C1FEB(iParam1, uParam0->f_27);
}

int func_823(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_3;
	}
	return 0;
}

bool func_824(var uParam0, int iParam1, char* sParam2)
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

void func_825(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	strcpy_s(&(uParam0->f_12), 64, "script@vignette@ITM@Handover@item_handover");
	switch (iParam1)
	{
		case 1:
			uParam0->f_1 = joaat("CONSUMABLE_HAIR_GREASE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 3;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMBILLA1");
			strcpy_s(&(uParam0->f_9), 24, "CPGEN_ITMBILLA2");
			uParam0->f_22 = func_916(joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"));
			uParam0->f_23 = joaat("CIR_BILL_POMADE");
			break;
		case 3:
			uParam0->f_1 = joaat("CONSUMABLE_MOONSHINE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CAHSO_CHAMOONR1");
			strcpy_s(&(uParam0->f_9), 24, "CAHSO_CHAMOONR2");
			uParam0->f_22 = joaat("W_SP_BOWARROW_FIRE");
			uParam0->f_23 = joaat("CIR_CHARLES_MOONSHINE");
			break;
		case 2:
			uParam0->f_1 = joaat("PROVISION_EAGLE_FEATHER");
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CABCH_ITMCHRA1");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_HORSE_REVIVER"));
			break;
		case 4:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 7;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMCHRB1");
			uParam0->f_22 = joaat("S_INV_ARROWAMMO01P");
			uParam0->f_23 = joaat("CIR_CHARLES_OLEANDER");
			break;
		case 5:
			uParam0->f_1 = joaat("PROVISION_COMP_DUTCH_PIPE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 0;
			uParam0->f_4 = 0;
			uParam0->f_5 = 3;
			uParam0->f_20 = 495;
			strcpy_s(&(uParam0->f_12), 64, "");
			break;
		case 6:
			uParam0->f_1 = joaat("DOCUMENT_BOOK_SHREW");
			uParam0->f_2 = 1;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMHOSA1");
			strcpy_s(&(uParam0->f_9), 24, "CPGEN_ITMHOSA2");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_PREDATOR_BAIT"));
			uParam0->f_23 = joaat("CIR_HOSEA_BOOK");
			break;
		case 7:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_GINSENG");
			uParam0->f_2 = 2;
			uParam0->f_3 = 5;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CALCM_ITMHOSA1");
			strcpy_s(&(uParam0->f_9), 24, "CALCM_ITMHOSA2");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_POTENT_MEDICINE"));
			uParam0->f_23 = joaat("CIR_HOSEA_GINSENG");
			break;
		case 8:
			uParam0->f_1 = joaat("DOCUMENT_BOOK_BLACK_HEART_LADY");
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMJCKA2");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_CHOCOLATE_BAR"));
			uParam0->f_23 = joaat("CIR_JACK_PENNY_DREADFUL");
			break;
		case 9:
			uParam0->f_1 = joaat("PROVISION_JACKS_THIMBLE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMJCKA1");
			break;
		case 10:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
			uParam0->f_2 = 1;
			uParam0->f_3 = 2;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CAHSO_ITMJAVA1");
			strcpy_s(&(uParam0->f_9), 24, "CAHSO_ITMJAVA2");
			uParam0->f_22 = joaat("P_KNIVESBUNDLE02P");
			uParam0->f_23 = joaat("CIR_JAVIER_OLEANDER");
			break;
		case 11:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
			uParam0->f_2 = 2;
			uParam0->f_3 = 10;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CALCM_ITMKIEA1");
			strcpy_s(&(uParam0->f_9), 24, "CALCM_ITMKIEA2");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_HORSE_STIMULANT"));
			uParam0->f_23 = joaat("CIR_KIERAN_BURDOCK_ROOT");
			break;
		case 12:
			uParam0->f_1 = joaat("PROVISION_POCKET_WATCH_SILVER");
			uParam0->f_2 = 1;
			uParam0->f_3 = 9;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMLENA1");
			strcpy_s(&(uParam0->f_9), 24, "CPGEN_ITMLENA2");
			uParam0->f_22 = joaat("P_TNT01X");
			break;
		case 13:
			uParam0->f_1 = joaat("PROVISION_MARYS_FOUNTAIN_PEN");
			uParam0->f_2 = 1;
			uParam0->f_3 = 15;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CAHSO_MB_ITEM");
			uParam0->f_22 = func_916(joaat("PROVISION_GOLDRING"));
			break;
		case 14:
			uParam0->f_1 = joaat("PROVISION_MOLLYS_POCKET_MIRROR");
			uParam0->f_2 = 1;
			uParam0->f_3 = 16;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CALCM_ITMMOLA1");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_CIGAR"));
			uParam0->f_23 = joaat("CIR_MOLLY_POCKET_MIRROR");
			break;
		case 15:
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 1;
			strcpy_s(&(uParam0->f_6), 24, "CAHSO_ITMPRSA1");
			strcpy_s(&(uParam0->f_9), 24, "CAHSO_ITMPRSA2");
			strcpy_s(&(uParam0->f_12), 64, "");
			break;
		case 16:
			uParam0->f_1 = joaat("PROVISION_PEARSONS_NAVAL_COMPASS");
			uParam0->f_2 = 1;
			uParam0->f_3 = 17;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMPRSA1");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_RUM"));
			uParam0->f_23 = joaat("CIR_PEARSON_NAVAL_COMPASS");
			break;
		case 17:
			uParam0->f_1 = joaat("PROVISION_SADIES_HARMONICA");
			uParam0->f_2 = 1;
			uParam0->f_3 = 11;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMSADA1");
			strcpy_s(&(uParam0->f_9), 24, "CPGEN_ITMSADA2");
			uParam0->f_22 = func_916(joaat("KIT_GUN_OIL"));
			uParam0->f_23 = joaat("CIR_SADIE_HARMONICA");
			break;
		case 18:
			uParam0->f_1 = joaat("CONSUMABLE_WHISKEY");
			uParam0->f_2 = 1;
			uParam0->f_3 = 8;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CAHSO_SEAN_ITM");
			uParam0->f_22 = joaat("P_THROW_MOLOTOV01");
			uParam0->f_23 = joaat("CIR_SEAN_WHISKEY");
			break;
		case 19:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_OREGANO");
			uParam0->f_2 = 2;
			uParam0->f_3 = 19;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMSUS1");
			strcpy_s(&(uParam0->f_9), 24, "CPGEN_ITMSUS2");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_POTENT_TONIC"));
			uParam0->f_23 = joaat("CIR_SUSAN_SEASONING");
			break;
		case 20:
			uParam0->f_1 = joaat("PROVISION_NECKLACE_SILVER");
			uParam0->f_2 = 1;
			uParam0->f_3 = 22;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMTLL");
			uParam0->f_22 = func_916(joaat("CONSUMABLE_MEDICINE"));
			uParam0->f_23 = joaat("CIR_TILLY_NECKLACE");
			break;
		case 21:
			uParam0->f_1 = joaat("CONSUMABLE_HERB_MILKWEED");
			uParam0->f_2 = 1;
			uParam0->f_3 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CABCH_ITMUNCA1");
			strcpy_s(&(uParam0->f_9), 24, "CABCH_ITMUNCA2");
			break;
	}
}

void func_826(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			if (func_917(joaat("PROVISION_JACKS_THIMBLE"), 0, 0) < 1)
			{
				func_918();
				func_919(joaat("REWARD_PED_SMALL"), 0.68f);
				func_919(joaat("REWARD_PED_MEDIUM"), 0.68f);
				func_919(joaat("REWARD_PED_LARGE"), 0.68f);
			}
			break;
	}
}

void func_827(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_920(*uParam0);
	iVar1 = func_921(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(func_922(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(8, iVar0, func_924(func_923()), 1307979820, func_925(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, iVar0, iVar1, joaat("SP_MISSIONS_22"));
		if (*uParam0 == 21)
		{
			func_926(1, joaat("CONSUMABLE_WHISKEY"), 0);
			func_926(2, joaat("CONSUMABLE_PEPPERMINT"), 0);
			func_926(3, joaat("CONSUMABLE_HERB_MILKWEED"), 0);
			func_926(4, joaat("CONSUMABLE_HAIR_GREASE"), 0);
			func_926(5, 0, joaat("AT_SKUNK"));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					func_927(uParam0, iVar3, &(Global_1359489.f_361.f_258[iVar3 /*6*/].f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

bool func_828(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_32() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_829(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_928(iParam0, &iVar0, &iVar1);
	if (!func_929(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_930(iVar0, iVar1);
}

void func_830(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char[] cVar4[8];

	iVar0 = func_931(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &cVar4);
		sVar3 = func_401(&cVar4, joaat("COLOR_PURE_WHITE"));
		sVar2 = func_932(uParam0->f_3, 0);
		func_927(uParam0, 1896170705, MISC::VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_927(uParam0, 1896170705, HUD::GET_STRING_FROM_HASH_KEY(iVar0), 0, bParam1, 0);
	}
}

void func_831(int iParam0, int iParam1)
{
	Global_40.f_6563[iParam0 /*27*/].f_24 = iParam1;
}

void func_832()
{
	int iVar0;

	iVar0 = Global_1359489.f_361.f_1 + 1;
	if (iVar0 > 10)
	{
		return;
	}
	Global_1359489.f_361.f_1++;
}

struct<2> /*16*/ func_833(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_834(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_835(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_836(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "player_stack_item", uParam0->f_26[iParam1 /*32*/].f_1);
	MISC::SET_BIT(&(uParam0->f_157), iParam1);
}

void func_837(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26[iParam1 /*32*/].f_5, true);
}

void func_838(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, sParam1);
}

void func_839(var uParam0, char* sParam1)
{
	if (*uParam0 == 0)
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, sParam1);
}

bool func_840()
{
	if (func_32() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

struct<8> /*64*/ func_841(struct<14> /*112*/ sParam0, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];

	iVar0 = func_153(&sParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return cVar3;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iVar0);
	func_933(func_413(&sParam0), !PED::IS_PED_MALE(iVar0), &cVar3);
	if (sParam0.f_1)
	{
		strcpy_s(&cVar3, 64, PLAYER::GET_PLAYER_NAME(sParam0.f_13));
		return cVar3;
	}
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		if (func_32() == -1)
		{
			if (iVar2 == joaat("CS_JOHNMARSTON") || iVar2 == joaat("PLAYER_THREE"))
			{
				strcpy_s(&cVar3, 64, HUD::_GET_LABEL_TEXT_2("COMP_JOHN"));
			}
			else
			{
				strcpy_s(&cVar3, 64, HUD::_GET_LABEL_TEXT_2("PLYR_ARTHUR"));
			}
		}
		else
		{
			strcpy_s(&cVar3, 64, PLAYER::GET_PLAYER_NAME(sParam0.f_13));
		}
	}
	else if (func_32() == -1 && func_138(iVar0))
	{
		iVar1 = func_145(iVar0);
		if (iVar1 != -1)
		{
			strcpy_s(&cVar3, 64, HUD::_GET_LABEL_TEXT_2(func_932(iVar1, 0)));
		}
	}
	return cVar3;
}

void func_842(var uParam0, var uParam1, var uParam2, var uParam3)
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

Vector3 func_843(var uParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0 = { uParam1->f_1 /*2*/ };
	if (func_934(uParam1->f_3))
	{
		sVar0.f_0++;
		sVar0.f_1 -= 2;
	}
	else
	{
		sVar0.f_0 += 2;
		sVar0.f_1--;
	}
	return func_935(uParam0, sVar0);
}

void func_844(int iParam0, Vector3 vParam1)
{
	iParam0->f_10 = { vParam1 /*3*/ };
}

int func_845(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_936(iParam0))
	{
		return 0;
	}
	if (!func_937())
	{
		return 0;
	}
	if (!func_938(iParam0, &iVar0, &iVar1))
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

bool func_846()
{
	if (func_939())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_847(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_940((Global_40.f_4283.f_325 + iParam0));
}

void func_848(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_846())
	{
		func_821(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_821(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_849(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	else if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iParam0))
	{
		return false;
	}
	if (TASK::_GET_TASK_MOVE_NETWORK_ID(iParam0) != joaat("SCRIPT_MINI_GAME_DOMINOES"))
	{
		return false;
	}
	return TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iParam0);
}

int func_850(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*uParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}
}

int func_851()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_852(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;

	fVar0 = 0.0f;
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return 0;
	}
	if (iParam2 < 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_746[iParam2 /*8*/].f_1))
	{
		return 0;
	}
	if (ENTITY::_0x0B7CB1300CBFE19C(uParam0->f_746[iParam2 /*8*/].f_1, 1))
	{
		TASK::STOP_ANIM_PLAYBACK(uParam0->f_746[iParam2 /*8*/].f_1, 0, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_746[iParam2 /*8*/].f_1, false);
	func_518(uParam0->f_746[iParam2 /*8*/].f_1, 1, 1);
	if (bParam4)
	{
		fVar0 = 180.0f;
	}
	if (iParam3 == 1)
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_746[iParam2 /*8*/].f_1, iParam1, PED::GET_PED_BONE_INDEX(iParam1, 7966), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, (0.0f + fVar0), false, false, false, false, 2, true, false, false);
	}
	else
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_746[iParam2 /*8*/].f_1, iParam1, PED::GET_PED_BONE_INDEX(iParam1, 37709), 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, (0.0f + fVar0), false, false, false, false, 2, true, false, false);
	}
	return 1;
}

int func_853(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;
	int iVar8;

	fVar0 = (BUILTIN::TO_FLOAT(4) / 2.0f);
	vVar4 = { func_275(iParam0) /*3*/ };
	*uParam3 = { func_941(iParam0) /*3*/ };
	if (iParam0 < 0 || iParam0 >= 4)
	{
		return 0;
	}
	iVar7 = (iParam1 % 5);
	iVar8 = (iParam1 / 5);
	vVar1 = { -(0.01f * 2.0f), (0.055f * fVar0), 0.0f /*3*/ };
	vVar1 = { vVar1 + Vector(0.0f, -(BUILTIN::TO_FLOAT(iVar7) * 0.055f), (BUILTIN::TO_FLOAT(iVar8) * (0.01f * 2.0f))) /*3*/ };
	vVar1.f_2 = (vVar1.z + (((float)iVar8 * 0.009f) + 0.017f));
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, uParam3->f_2, vVar1) /*3*/ };
	if (bParam4)
	{
		uParam2->f_2 += (0.0525f / 2.0f);
	}
	return 1;
}

void func_854(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam0, uParam0->f_3, *uParam1) /*3*/ };
	*uParam4 = { Vector(uParam0->f_3, 0.0f, 0.0f) + *uParam2 /*3*/ };
	if (*uParam4 > 180.0f)
	{
		*uParam4 -= 360.0f;
	}
	if (uParam4->f_1 > 180.0f)
	{
		uParam4->f_1 -= 360.0f;
	}
	if (uParam4->f_2 > 180.0f)
	{
		uParam4->f_2 -= 360.0f;
	}
	if (*uParam4 < -180.0f)
	{
		*uParam4 += 360.0f;
	}
	if (uParam4->f_1 < -180.0f)
	{
		uParam4->f_1 += 360.0f;
	}
	if (uParam4->f_2 < 180.0f)
	{
		uParam4->f_2 += 360.0f;
	}
}

int func_855(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		switch (iParam1)
		{
			case 0:
				return 2;
			case 2:
				return 0;
			case 1:
				return 3;
			case 3:
				return 1;
			default:
				break;
		}
	}
	if (iParam0 == 1)
	{
		return iParam1;
	}
	if (iParam0 == 2)
	{
		switch (iParam1)
		{
			case 0:
				return 1;
			case 2:
				return 3;
			case 1:
				return 2;
			case 3:
				return 0;
			default:
				break;
		}
	}
	if (iParam0 == 3)
	{
		switch (iParam1)
		{
			case 0:
				return 3;
			case 2:
				return 1;
			case 1:
				return 0;
			case 3:
				return 2;
			default:
				break;
		}
	}
	return -1;
}

int func_856(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return -90;
		case 2:
			return 180;
		case 3:
			return 90;
		default:
			break;
	}
	return 0;
}

bool func_857(int iParam0, int iParam1, int* iParam2, Vector3 vParam3, Vector3 vParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	Vector3 vVar3;

	fVar0 = 1E+10f;
	fVar1 = 1E+10f;
	fVar2 = (iParam2->f_7 + iParam2->f_6);
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	if (MISC::IS_BIT_SET(*iParam2, iParam1))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST(vVar3, vParam3);
	fVar1 = BUILTIN::VDIST(vVar3, vParam6);
	if (fVar0 < fVar1)
	{
		if (fVar0 <= fVar2)
		{
			MISC::SET_BIT(&(iParam2->f_1), iParam1);
			MISC::SET_BIT(iParam2, iParam1);
			return true;
		}
	}
	if (fVar1 <= fVar0)
	{
		if (fVar1 <= fVar2)
		{
			MISC::SET_BIT(&(iParam2->f_2), iParam1);
			MISC::SET_BIT(iParam2, iParam1);
			return true;
		}
	}
	return false;
}

int func_858(int iParam0, int iParam1, var uParam2, Vector3 vParam3, Vector3 vParam6)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2[28];
	float fVar87;
	float fVar88;
	Vector3 vVar89;

	uParam2->f_38 = { vParam3 /*3*/ };
	if (MISC::IS_BIT_SET(uParam2->f_4, iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		func_942(iVar0, vParam3, vParam6, &(vVar2[iVar0 /*3*/]), 0);
		iVar0++;
	}
	fVar88 = -1.0f;
	vVar89 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (!MISC::IS_BIT_SET(uParam2->f_3, iVar0))
		{
			fVar87 = BUILTIN::VDIST(vVar2[iVar0 /*3*/], vVar89);
			if (fVar87 < fVar88 || fVar88 == -1.0f)
			{
				fVar88 = fVar87;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	MISC::SET_BIT(&(uParam2->f_3), iVar1);
	MISC::SET_BIT(&(uParam2->f_4), iParam1);
	uParam2->f_8[iParam1] = iVar1;
	return iVar1;
}

void func_859(int iParam0, Vector3 vParam1, Vector3 vParam4, int iParam7, var uParam8, float fParam9)
{
	char cVar0[64];

	if (iParam0 < 10)
	{
		strcpy_s(&cVar0, 64, "PLAYER_00_PIECE_0");
	}
	else
	{
		strcpy_s(&cVar0, 64, "PLAYER_00_PIECE_");
	}
	StringIntConCat(&cVar0, iParam0, 64);
	strcat_s(&cVar0, 64, "_CLEAR_BOARD");
	*iParam7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam9, 2) /*3*/ };
	*uParam8 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam9, 2) /*3*/ };
}

Vector3 func_860(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return FloatToVector((1.0f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

void func_861(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_208(iParam0))
	{
		return;
	}
	iVar0 = func_554(iParam0);
	func_722(iVar0, bParam1);
}

bool func_862(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 0:
			strcpy_s(sParam1, 32, "DOMINO_0_0");
			return true;
		case 1:
			strcpy_s(sParam1, 32, "DOMINO_0_1");
			return true;
		case 2:
			strcpy_s(sParam1, 32, "DOMINO_0_2");
			return true;
		case 3:
			strcpy_s(sParam1, 32, "DOMINO_0_3");
			return true;
		case 4:
			strcpy_s(sParam1, 32, "DOMINO_0_4");
			return true;
		case 5:
			strcpy_s(sParam1, 32, "DOMINO_0_5");
			return true;
		case 6:
			strcpy_s(sParam1, 32, "DOMINO_0_6");
			return true;
		case 7:
			strcpy_s(sParam1, 32, "DOMINO_1_1");
			return true;
		case 8:
			strcpy_s(sParam1, 32, "DOMINO_1_2");
			return true;
		case 9:
			strcpy_s(sParam1, 32, "DOMINO_1_3");
			return true;
		case 10:
			strcpy_s(sParam1, 32, "DOMINO_1_4");
			return true;
		case 11:
			strcpy_s(sParam1, 32, "DOMINO_1_5");
			return true;
		case 12:
			strcpy_s(sParam1, 32, "DOMINO_1_6");
			return true;
		case 13:
			strcpy_s(sParam1, 32, "DOMINO_2_2");
			return true;
		case 14:
			strcpy_s(sParam1, 32, "DOMINO_2_3");
			return true;
		case 15:
			strcpy_s(sParam1, 32, "DOMINO_2_4");
			return true;
		case 16:
			strcpy_s(sParam1, 32, "DOMINO_2_5");
			return true;
		case 17:
			strcpy_s(sParam1, 32, "DOMINO_2_6");
			return true;
		case 18:
			strcpy_s(sParam1, 32, "DOMINO_3_3");
			return true;
		case 19:
			strcpy_s(sParam1, 32, "DOMINO_3_4");
			return true;
		case 20:
			strcpy_s(sParam1, 32, "DOMINO_3_5");
			return true;
		case 21:
			strcpy_s(sParam1, 32, "DOMINO_3_6");
			return true;
		case 22:
			strcpy_s(sParam1, 32, "DOMINO_4_4");
			return true;
		case 23:
			strcpy_s(sParam1, 32, "DOMINO_4_5");
			return true;
		case 24:
			strcpy_s(sParam1, 32, "DOMINO_4_6");
			return true;
		case 25:
			strcpy_s(sParam1, 32, "DOMINO_5_5");
			return true;
		case 26:
			strcpy_s(sParam1, 32, "DOMINO_5_6");
			return true;
		case 27:
			strcpy_s(sParam1, 32, "DOMINO_6_6");
			return true;
		default:
			break;
	}
	strcpy_s(sParam1, 32, " ");
	return false;
}

void func_863(var uParam0, int iParam1, char* sParam2)
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

bool func_864(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = 2147483647;
	*uParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1)
		{
			if (uParam0->f_746[iVar0 /*8*/].f_4 < iParam2)
			{
				if (iVar1 == 2147483647 || uParam0->f_746[iVar0 /*8*/].f_4 > iVar1)
				{
					iVar1 = uParam0->f_746[iVar0 /*8*/].f_4;
					*uParam3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return *uParam3 != -1;
}

bool func_865(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	*uParam3 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_746)
	{
		if (uParam0->f_746[iVar0 /*8*/] == iParam1 && uParam0->f_746[iVar0 /*8*/].f_4 == iParam2)
		{
			*uParam3 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_866(var uParam0, var uParam1)
{
	if (uParam0->f_343 == -1)
	{
		return false;
	}
	if (!uParam0->f_348)
	{
		return false;
	}
	return (ENTITY::DOES_ENTITY_EXIST(uParam0->f_357) && uParam1->f_746[uParam0->f_343 /*8*/].f_1 == uParam0->f_357);
}

bool func_867(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iParam3--;
	if (iParam3 < 0)
	{
		iParam3 += *uParam0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_613(*(uParam0[iParam3 /*5*/])))
		{
			if ((*uParam0)[iParam3 /*5*/] == iParam1)
			{
				*iParam2 = iParam3;
				return true;
			}
		}
		iParam3--;
		if (iParam3 < 0)
		{
			iParam3 += *uParam0;
		}
		iVar0++;
	}
	return false;
}

int func_868(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_720(iVar0, 2))
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
		func_727(iVar1, iParam1, sParam0, 0, 3, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, (1 << 30), 0, 1065353216, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

int func_869(var uParam0)
{
	int iVar0;

	if (!uParam0->f_348)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_357))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (uParam0->f_391[iVar0] == uParam0->f_338 && uParam0->f_357 == uParam0->f_384[iVar0])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_870(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	if (Global_1946054.f_2535.f_1 <= 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		Global_1946054.f_2535.f_2 = 0;
		Global_1946054.f_2535.f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Global_1946054.f_2535.f_43[iVar0 /*2*/] = { sVar2 /*2*/ };
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 39)
		{
			Global_1946054.f_2535.f_3[iVar1] = 0;
			iVar1++;
		}
		return true;
	}
	iVar0 = func_943(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	Global_1946054.f_2535.f_2 -= (Global_1946054.f_2535.f_2 && Global_1946054.f_2535.f_43[iVar0 /*2*/].f_1);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		if (func_944(iVar1, Global_1946054.f_2535.f_43[iVar0 /*2*/].f_1))
		{
			func_945(iVar1, Global_1946054.f_2535.f_43[iVar0 /*2*/].f_1);
		}
		iVar1++;
	}
	Global_1946054.f_2535.f_1--;
	Global_1946054.f_2535.f_43[iVar0 /*2*/] = { Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] /*2*/ };
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/].f_1 = 0;
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] = 0;
	return true;
}

int func_871(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		iParam1 = -1;
	}
	if (!bParam2)
	{
		if (PED::IS_PED_A_PLAYER(iParam0))
		{
			func_890(14, iParam1, 0, 0, 0);
		}
		else
		{
			func_890(14, iParam1, 1, iParam0, 0);
		}
		return 1;
	}
	if (!func_946(0))
	{
	}
	func_892(&(Global_1946054.f_1497), iParam0, 1, iParam1, 1, bParam3, 1);
	return 1;
}

int func_872(int iParam0)
{
	int iVar0;

	iVar0 = func_758(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_947(iVar0);
}

int func_873(int iParam0, int iParam1)
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
			func_948(iVar2);
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

void func_874()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_875(bool bParam0)
{
	if (func_32() == -1)
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

int func_876(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_949(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_877(int iParam0)
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

void func_878(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= (Global_1946054.f_2657.f_26.f_6 & iParam0);
}

void func_879(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_880(int iParam0, int iParam1)
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
			func_950((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_950(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_35(Global_1898164.f_1[0 /*5*/]))
	{
		func_531(Global_1898164.f_1[0 /*5*/], 3);
	}
}

bool func_881(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_882(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_883(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_884(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_885(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_886(int iParam0)
{
	int iVar0;

	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/] = iParam0;
	iVar0 = Global_1946054.f_2535.f_2 ^ -1;
	iVar0 = (iVar0 & -iVar0);
	Global_1946054.f_2535.f_2 |= iVar0;
	Global_1946054.f_2535.f_43[Global_1946054.f_2535.f_1 /*2*/].f_1 = iVar0;
	Global_1946054.f_2535.f_1++;
	return iVar0;
}

bool func_887(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -696754231)
	{
		iVar0 = joaat("MP_COMPONENT_TYPE_NECKWEAR_1");
		if (func_876(func_951(iVar0)) != joaat("CI_CATEGORY_WARDROBE_MASK"))
		{
			return false;
		}
	}
	else
	{
		iVar0 = iParam0;
	}
	*iParam1 = func_952(iVar0, 1);
	return true;
}

void func_888(int iParam0, int iParam1)
{
	Global_1946054.f_2535.f_3[iParam0] |= iParam1;
}

int func_889(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return (1 << 9);
		case joaat("MPC_SYSTEM_TAG_INFO_EQUIPMENT"):
			return (1 << 10);
		case joaat("MPC_SYSTEM_TAG_INFO_HAND_APPAREL"):
			return (1 << 11);
		case joaat("MPC_SYSTEM_TAG_INFO_SATCHEL"):
			return (1 << 12);
		case joaat("MPC_SYSTEM_TAG_INFO_BASE_GUNBELT"):
			return (1 << 13);
		case joaat("MPC_SYSTEM_TAG_INFO_SECONDARY_HOLSTER"):
			return (1 << 14);
		case joaat("MPC_SYSTEM_TAG_INFO_NECKWEAR"):
			return (1 << 15);
		case -2125161702:
			return (1 << 17);
		case 1929486675:
			return (1 << 18);
		case joaat("MPC_SYSTEM_TAG_INFO_TORSO_APPAREL"):
			return (1 << 16);
		case 315750675:
			return (1 << 19);
		case joaat("MPC_SYSTEM_TAG_INFO_ALL"):
			return -1;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY"):
			return 112;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BUT_SATCHEL"):
			return 1136;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_SATCHEL"):
			return 4208;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_BASE_GUNBELT"):
			return 8304;
		case joaat("MPC_SYSTEM_TAG_INFO_SATCHEL_AND_SECONDARY_HOLSTER"):
			return 20480;
		case joaat("MPC_SYSTEM_TAG_INFO_BARBER_SHOP"):
			return 32833;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_HEAD"):
			return 96;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_SHACKLES"):
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case joaat("MPC_SYSTEM_TAG_INFO_NULL"):
			return 0;
		default:
			break;
	}
	return 0;
}

void func_890(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_953((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_954(sVar0);
}

bool func_891(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1946054.f_2535.f_1 <= 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_955(iVar0, 1);
		if (func_956(iVar2, 2))
		{
		}
		else if (Global_1946054.f_2535.f_3[iVar0] == 0)
		{
		}
		else
		{
			if (bParam0 && func_957(iVar0) == -1)
			{
				func_958(iVar0, 0);
				func_959(&(Global_1946054.f_2589.f_2[(Global_1946054.f_2589 - 1) /*2*/]), 2, 6);
			}
			func_960(iVar2, 2, 6);
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 0)
	{
		return true;
	}
	return false;
}

void func_892(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_32() != -1;
	Global_1946054.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK")) && Global_1347477.f_190 != 0)
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam1, Global_1347477.f_190);
			}
			func_953((1 << 18));
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_961(iParam1, 29, bVar4, 1, 0);
			func_961(iParam1, 31, bVar4, 1, 0);
			func_961(iParam1, 30, bVar4, 1, 0);
			func_961(iParam1, 22, bVar4, 1, 0);
			func_961(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_962((1 << 15)) && func_956(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8)) && func_963(10, iParam3))
	{
		func_964(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946054.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_955(iVar1, 1);
			if (func_956(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_963(iVar1, iParam3))
				{
				}
				else if ((func_956(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
				{
					if (!func_956(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_961(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = joaat("REMOVE_COMPONENT");
						}
						func_960(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946054.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_961(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_956(iVar3, 1))
							{
								func_965(iVar3, 1, 6);
							}
							Global_1946054.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946054.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

int func_893(int iParam0)
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

void func_894(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_966(iParam1);
	}
}

float func_895(int iParam0, int iParam1, bool bParam2)
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
	return func_967(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_896(int iParam0, bool bParam1)
{
	if (!func_560(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_968(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_897(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_570(iParam0);
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

int func_898(int iParam0, bool bParam1)
{
	if (!func_560(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_969(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_899(int iParam0)
{
	int iVar0;

	if (!func_560(iParam0))
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

void func_900(int iParam0, int iParam1)
{
	if (!func_560(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

bool func_901(int iParam0)
{
	int iVar0;
	int iVar1;

	func_970(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

bool func_902(bool bParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(bParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(bParam0);
		}
	}
	return true;
}

int func_903(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2051275045:
			return 14;
		case -2040275819:
			return 46;
		case -1874208704:
			return 5;
		case -1862464078:
			return 44;
		case -1692022104:
			return 63;
		case -1684458716:
			return 31;
		case -1678882891:
			return 36;
		case -1668922931:
			return 20;
		case -1648322231:
			return 72;
		case -1642335258:
			return 66;
		case -1632589543:
			return 43;
		case -1587546924:
			return 54;
		case -1559986688:
			return 7;
		case -1532979576:
			return 65;
		case -1414977761:
			return 48;
		case -1394723994:
			return 59;
		case -1341683964:
			return 21;
		case -1335291723:
			return 60;
		case -1268239471:
			return 68;
		case -1256711921:
			return 35;
		case -1248623443:
			return 26;
		case -1205468859:
			return 76;
		case -1155031950:
			return 25;
		case -1114682645:
			return 47;
		case -1092189504:
			return 69;
		case -1065026089:
			return 73;
		case -973332710:
			return 32;
		case -946772361:
			return 62;
		case -922193456:
			return 39;
		case -695701225:
			return 3;
		case -571427255:
			return 57;
		case -481967001:
			return 28;
		case -445211559:
			return 61;
		case -433615745:
			return 18;
		case joaat("COMPANION_OUTFIT_DEFAULT"):
			return 80;
		case -310473775:
			return 42;
		case -301101630:
			return 24;
		case -268604689:
			return 37;
		case -193269670:
			return 30;
		case -23947011:
			return 50;
		case 0:
			return 0;
		case 6418928:
			return 71;
		case 80515440:
			return 70;
		case 178615350:
			return 1;
		case 283037683:
			return 13;
		case 296923297:
			return 45;
		case 350498312:
			return 27;
		case 404503428:
			return 4;
		case 431390894:
			return 23;
		case 513932985:
			return 29;
		case 707545953:
			return 64;
		case 713940276:
			return 11;
		case 777603945:
			return 19;
		case 837028314:
			return 58;
		case 867156718:
			return 79;
		case 876535472:
			return 75;
		case 876797088:
			return 53;
		case 928493661:
			return 22;
		case 961676983:
			return 55;
		case 977450639:
			return 9;
		case 1018353621:
			return 17;
		case 1046468203:
			return 16;
		case 1071744295:
			return 8;
		case 1199580439:
			return 41;
		case 1200878026:
			return 52;
		case 1205492208:
			return 40;
		case 1237718549:
			return 49;
		case 1254970547:
			return 78;
		case 1295334688:
			return 51;
		case 1300659195:
			return 56;
		case 1484386316:
			return 77;
		case 1495063555:
			return 15;
		case 1593315648:
			return 6;
		case 1658153743:
			return 33;
		case 1744281750:
			return 12;
		case 1818898449:
			return 38;
		case 1842975347:
			return 34;
		case 1901494236:
			return 10;
		case 1950972546:
			return 67;
		case 2062813606:
			return 74;
		case 2094043703:
			return 2;
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

struct<5> /*40*/ func_904(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_971(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_972(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_908(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_973(bParam1) /*4*/ };
			if (bParam2 && func_974(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_906(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_906(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_907(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_975(bParam1) /*4*/ };
			switch (func_876(iParam0))
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
			if (func_976(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_908(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_976(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_908(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_977(sVar0, &sVar27, bParam1, 0))
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

int func_905(int iParam0, int iParam1)
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
			return joaat("SLOTID_CARD_PROGRESSION");
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
			return joaat("SLOTID_CHALLENGE_PROGRESSION");
		case 41:
			return joaat("SLOTID_CHARACTER_0");
		case 42:
			return joaat("SLOTID_CHARACTER_1");
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
			return joaat("SLOTID_WARDROBE_FACE_PAINT");
		case 350:
			return -1994943603;
		case 351:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_1");
		case 352:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_2");
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
			return joaat("SLOTID_WARDROBE_HEADWEAR");
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
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_CLIP");
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_LEVER");
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
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_LEVER");
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_CLIP");
		case 462:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_GRIP");
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_LEVER");
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_CLIP");
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_CLIP");
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
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_CLIP");
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SCOPE");
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
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_CLIP");
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
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP");
		case 532:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP_EXOTIC");
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
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_BARREL");
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
			return joaat("SLOTID_TEMPORARY_HORSE");
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
			return joaat("SLOTID_WARDROBE_FOOTWEAR_3");
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

bool func_906(int iParam0, var uParam1, int iParam2, int iParam3)
{
	return func_978(iParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_907(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_979(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_908(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_949(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_875(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_909(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_980(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_977(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_910(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_875(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_910(bool bParam0)
{
	if (func_32() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_875(bParam0));
}

int func_911(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_981(iParam0))
	{
		return 0;
	}
	if (!func_910(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return 1;
}

void func_912(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_982(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_913(struct<2> /*16*/ sParam0)
{
	return sParam0.f_0 == sParam0.f_1;
}

bool func_914(var uParam0, var uParam1)
{
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	return uParam0->f_1 == uParam1->f_1;
}

void func_915(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

int func_916(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_4;
}

int func_917(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_949(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_972(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_983(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_984(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_875(bParam2), iParam0, false);
	return iVar2;
}

void func_918()
{
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_PED_SMALL")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_PED_SMALL"));
	}
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_PED_MEDIUM")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_PED_MEDIUM"));
	}
	if (MISC::_0x0D0AE5081F88CFE1(joaat("REWARD_PED_LARGE")))
	{
		MISC::_0x154340E87D8CC178(joaat("REWARD_PED_LARGE"));
	}
}

void func_919(int iParam0, float fParam1)
{
	struct<6> /*48*/ sVar0;

	MISC::_0x94FCADCF9F0C368E(iParam0);
	sVar0.f_3 = 4;
	sVar0.f_0 = joaat("PROVISION_JACKS_THIMBLE");
	sVar0.f_1 = fParam1;
	sVar0.f_5 = 1;
	sVar0.f_4 = 0;
	MISC::_0xAF3A84C7DE6A1DC5(iParam0, &sVar0);
}

int func_920(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("IRBLPM");
		case 2:
			return joaat("IRCHEF");
		case 3:
			return joaat("IRCHMS");
		case 4:
			return joaat("IRCHOL");
		case 5:
			return joaat("IRDTPI");
		case 6:
			return joaat("IRHOBK");
		case 7:
			return joaat("IRHOGN");
		case 8:
			return joaat("IRJKPD");
		case 9:
			return joaat("IRJKTH");
		case 10:
			return joaat("IRJVOL");
		case 11:
			return joaat("IRKIBR");
		case 12:
			return joaat("IRLNPW");
		case 13:
			return joaat("IRMBFP");
		case 14:
			return joaat("IRMLPM");
		case 15:
			return joaat("IRPRRB");
		case 16:
			return joaat("IRPRNC");
		case 17:
			return joaat("IRSDHM");
		case 18:
			return joaat("IRSNWH");
		case 19:
			return joaat("IRSUSE");
		case 20:
			return joaat("IRTLNL");
		case 21:
			return joaat("IRUNRM");
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_921(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("MISSION_IRBLPM");
		case 2:
			return joaat("MISSION_IRCHEF");
		case 3:
			return joaat("MISSION_IRCHMS");
		case 4:
			return joaat("MISSION_IRCHOL");
		case 5:
			return joaat("MISSION_IRDTPI");
		case 6:
			return joaat("MISSION_IRHOBK");
		case 7:
			return joaat("MISSION_IRHOGN");
		case 8:
			return joaat("MISSION_IRJKPD");
		case 9:
			return joaat("MISSION_IRJKTH");
		case 10:
			return joaat("MISSION_IRJVOL");
		case 11:
			return joaat("MISSION_IRKIBR");
		case 12:
			return joaat("MISSION_IRLNPW");
		case 13:
			return joaat("MISSION_IRMBFP");
		case 14:
			return joaat("MISSION_IRMLPM");
		case 15:
			return joaat("MISSION_IRPRRB");
		case 16:
			return joaat("MISSION_IRPRNC");
		case 17:
			return joaat("MISSION_IRSDHM");
		case 18:
			return joaat("MISSION_IRSNWH");
		case 19:
			return joaat("MISSION_IRSUSE");
		case 20:
			return joaat("MISSION_IRTLNL");
		case 21:
			return joaat("MISSION_IRUNRM");
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

char* func_922(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEADSHOT_DUTCH";
		case 1:
			return "HEADSHOT_JOHN";
		case 2:
			return "HEADSHOT_JAVIER";
		case 3:
			return "HEADSHOT_BILL";
		case 4:
			return "HEADSHOT_UNCLE";
		case 5:
			return "HEADSHOT_HOSEA";
		case 6:
			return "HEADSHOT_MICAH";
		case 7:
			return "HEADSHOT_CHARLES";
		case 8:
			return "HEADSHOT_SEAN";
		case 9:
			return "HEADSHOT_LENNY";
		case 10:
			return "HEADSHOT_KIERAN";
		case 11:
			return "HEADSHOT_SADIE";
		case 13:
			return "HEADSHOT_ABIGAIL";
		case 14:
			return "HEADSHOT_JACK";
		case 15:
			return "HEADSHOT_MARYBETH";
		case 16:
			return "HEADSHOT_MOLLY";
		case 17:
			return "HEADSHOT_PEARSON";
		case 18:
			return "HEADSHOT_STRAUSS";
		case 19:
			return "HEADSHOT_SUSAN";
		case 20:
			return "HEADSHOT_KAREN";
		case 21:
			return "HEADSHOT_SWANSON";
		case 22:
			return "HEADSHOT_TILLY";
		case 23:
			return "HEADSHOT_TRELAWNY";
		case 24:
			return "HEADSHOT_CLEET";
		case 25:
			return "HEADSHOT_JOE";
		default:
			break;
	}
	return "";
}

int func_923()
{
	return Global_40.f_4283;
}

Vector3 func_924(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { -1343.699f, 2429.397f, 307.0626f };
		case 1:
			return { -123.1805f, -28.8611f, 94.8478f };
		case 2:
			return { 667.9077f, -1252.78f, 42.9221f };
		case 3:
			return { 1880.807f, -1873.231f, 41.8094f };
		case 4:
			return { 1422.625f, -7332.473f, 80.5977f };
		case 5:
			return { 2254.96f, -758.12f, 41.75f };
		case 6:
			return { 2351.282f, 1362.077f, 104.9752f };
		case 7:
			return { -2593.21f, 453.9533f, 145.9973f };
		case 8:
			return func_985();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_925(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("IRBLPM_D");
		case 2:
			return joaat("IRCHEF_D");
		case 3:
			return joaat("IRCHMS_D");
		case 4:
			return joaat("IRCHOL_D");
		case 5:
			return joaat("IRDTPI_D");
		case 6:
			return joaat("IRHOBK_D");
		case 7:
			return joaat("IRHOGN_D");
		case 8:
			return joaat("IRJKPD_D");
		case 9:
			return joaat("IRJKTH_D");
		case 10:
			return joaat("IRJVOL_D");
		case 11:
			return joaat("IRKIBR_D");
		case 12:
			return joaat("IRLNPW_D");
		case 13:
			return joaat("IRMBFP_D");
		case 14:
			return joaat("IRMLPM_D");
		case 15:
			return joaat("IRPRRB_D");
		case 16:
			return joaat("IRPRNC_D");
		case 17:
			return joaat("IRSDHM_D");
		case 18:
			return joaat("IRSNWH_D");
		case 19:
			return joaat("IRSUSE_D");
		case 20:
			return joaat("IRTLNL_D");
		case 21:
			return joaat("IRUNRM_D");
		case -1:
		case 0:
		case 22:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_926(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	char* sVar1;

	iVar0 = iParam0;
	if (iParam1 == 0)
	{
		sVar1 = MISC::VAR_STRING(0, sParam2);
	}
	else
	{
		sVar1 = MISC::VAR_STRING(0, iParam1);
	}
	strcpy_s(&(Global_1359489.f_361.f_258[iVar0 /*6*/].f_2), 32, sVar1);
}

void func_927(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = func_920(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, func_920(*uParam0), iParam1, sParam2, bParam3, bParam5, false);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489.f_361.f_194 = func_117("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(func_922(uParam0->f_3)), joaat("PLAYER_MENU"), "INPUT_FEED_INTERACT_GENERIC", joaat("SP_MISSIONS"), 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

void func_928(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_929(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_986(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_987(iParam0))
	{
		return false;
	}
	if (func_988(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_989(iParam0, 1)) || func_990((1 << 15)))
	{
		if (!func_989(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_991())
	{
		return false;
	}
	return true;
}

void func_930(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_931(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 10:
		case 11:
		case 18:
			return 761950088;
		case 5:
			return -1131986109;
		case 6:
			return 1756591705;
		case 8:
			return 2110897046;
		case 9:
			return 1947074040;
		case 12:
			return 361762491;
		case 13:
			return 542329524;
		case 14:
			return -918949028;
		case 16:
			return -407171189;
		case 15:
			return -1303018308;
		case 17:
			return -1427069925;
		case 19:
			return -1950223422;
		case 20:
			return 364912121;
		case 21:
			return -2103092431;
		default:
			break;
	}
	return 0;
}

char* func_932(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_764(Global_1835011[59 /*74*/].f_1, 1) || func_764(Global_1347702[1 /*49*/].f_15, 1)) || func_522(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_797(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_933(int iParam0, bool bParam1, char* sParam2)
{
	char cVar0[16];

	strcpy_s(sParam2, 64, "Opponent");
	if (bParam1)
	{
		iParam0 = (iParam0 % 10);
		switch (iParam0)
		{
			case 0:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME0"));
				break;
			case 1:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME1"));
				break;
			case 2:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME2"));
				break;
			case 3:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME3"));
				break;
			case 4:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME4"));
				break;
			case 5:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME5"));
				break;
			case 6:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME6"));
				break;
			case 7:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME7"));
				break;
			case 8:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME8"));
				break;
			case 9:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_F_NAME9"));
				break;
		}
		return;
		strcpy_s(&cVar0, 16, "MGDOM_F_NAME");
		StringIntConCat(&cVar0, (iParam0 % 10), 16);
	}
	else
	{
		iParam0 = (iParam0 % 10);
		switch (iParam0)
		{
			case 0:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME0"));
				break;
			case 1:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME1"));
				break;
			case 2:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME2"));
				break;
			case 3:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME3"));
				break;
			case 4:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME4"));
				break;
			case 5:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME5"));
				break;
			case 6:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME6"));
				break;
			case 7:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME7"));
				break;
			case 8:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME8"));
				break;
			case 9:
				strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2("MGDOM_M_NAME9"));
				break;
		}
		return;
		strcpy_s(&cVar0, 16, "MGDOM_M_NAME");
		StringIntConCat(&cVar0, (iParam0 % 10), 16);
	}
	strcpy_s(sParam2, 64, HUD::_GET_LABEL_TEXT_2(&cVar0));
}

bool func_934(int iParam0)
{
	return (iParam0 == 0 || iParam0 == 2);
}

Vector3 func_935(var uParam0, struct<2> /*16*/ sParam1)
{
	Vector3 vVar0;

	vVar0 = { (BUILTIN::TO_FLOAT(sParam1.f_0) * 0.013125f), (BUILTIN::TO_FLOAT(sParam1.f_1) * 0.013125f), 0.0f /*3*/ };
	vVar0.f_2 = (fLocal_14 + (0.01f / 2.0f));
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(*uParam0, uParam0->f_3, vVar0);
}

bool func_936(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_937()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_938(int iParam0, int iParam1, int iParam2)
{
	if (!func_936(iParam0))
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

bool func_939()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_940(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_820(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

Vector3 func_941(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { Vector(180.0f, 0.0f, 90.0f) + Vector(90.0f, -105.0f, 90.0f) };
		case 1:
			return { Vector(0.0f, 0.0f, 90.0f) + Vector(90.0f, -105.0f, 90.0f) };
		case 2:
			return { Vector(90.0f, 0.0f, 90.0f) + Vector(90.0f, -105.0f, 90.0f) };
		case 3:
			return { Vector(270.0f, 0.0f, 90.0f) + Vector(90.0f, -105.0f, 90.0f) };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_942(int iParam0, Vector3 vParam1, Vector3 vParam4, var uParam7, float fParam8)
{
	char cVar0[64];

	if (iParam0 < 10)
	{
		strcpy_s(&cVar0, 64, "PLAYER_00_PIECE_0");
	}
	else
	{
		strcpy_s(&cVar0, 64, "PLAYER_00_PIECE_");
	}
	StringIntConCat(&cVar0, iParam0, 64);
	strcat_s(&cVar0, 64, "_CLEAR_BOARD");
	*uParam7 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("MINI_GAMES@DOMINOES@TABLE@RESTART_GAME@CLEAR_BOARD@BOARD@TILES", &cVar0, vParam1, vParam4, fParam8, 2) /*3*/ };
}

int func_943(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2535.f_1)
	{
		if (Global_1946054.f_2535.f_43[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_944(int iParam0, var uParam1)
{
	return (Global_1946054.f_2535.f_3[iParam0] && uParam1) != 0;
}

void func_945(int iParam0, var uParam1)
{
	Global_1946054.f_2535.f_3[iParam0] -= (Global_1946054.f_2535.f_3[iParam0] && uParam1);
}

bool func_946(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar2 = func_955(iVar0, 1);
		if (!func_956(iVar2, 2))
		{
		}
		else if (Global_1946054.f_2535.f_3[iVar0] != 0)
		{
		}
		else
		{
			if (bParam0 && func_957(iVar0) == -1)
			{
				func_958(iVar0, 0);
				func_959(&(Global_1946054.f_2589.f_2[(Global_1946054.f_2589 - 1) /*2*/]), 2, 6);
			}
			func_965(iVar2, 3, 6);
			Global_1946054.f_2456[iVar0 /*2*/] = 0;
			Global_1946054.f_2456[iVar0 /*2*/].f_1 = 0;
			iVar1++;
		}
		iVar0++;
	}
	return iVar1 > 0;
}

int func_947(int iParam0)
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

int func_948(int iParam0)
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

bool func_949(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

void func_950(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

int func_951(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_952(iParam0, 1) /*3*/];
}

int func_952(int iParam0, int iParam1)
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

void func_953(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_954(struct<4> /*32*/ sParam0)
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
			if (func_992(sParam0.f_0))
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
			func_993(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_953(8);
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
			if (func_992(sParam0.f_0))
			{
				return;
			}
			func_993(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_953(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_994(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

int func_955(int iParam0, int iParam1)
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

bool func_956(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_952(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_957(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2589)
	{
		if (Global_1946054.f_2589.f_2[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_958(int iParam0, int iParam1)
{
	func_995(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_959(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

void func_960(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_952(iParam0, 1) /*11*/].f_10 |= iParam1;
}

void func_961(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_955(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == joaat("MP_COMPONENT_TYPE_HEADWEAR"))
		{
			iVar1 = func_996(iParam4);
		}
		else if (iParam4 != Global_1946054.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_SHOP_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(iParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_962(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

bool func_963(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_964(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_956(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 6))
	{
		if (bParam2)
		{
			func_961(iParam0, iVar0, func_32() != -1, 0, 0);
			func_960(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(iParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_965(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

void func_965(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_952(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_952(iParam0, 1) /*11*/].f_10 & iParam1);
}

void func_966(int iParam0)
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
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

float func_967(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_968(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_560(iParam0))
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
	if (!func_560(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_969(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_560(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_896(iParam0, 1);
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

int func_970(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_997(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

struct<4> /*32*/ func_971(bool bParam0)
{
	return func_908(joaat("CHARACTER"), func_998(), joaat("SLOTID_NONE"), bParam0);
}

int func_972(int iParam0)
{
	Vector3 vVar0;

	if (!func_949(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_973(bool bParam0)
{
	int iVar0;

	iVar0 = func_875(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_908(joaat("CARRIED_WEAPONS"), func_971(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_908(joaat("CARRIED_WEAPONS"), func_971(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_908(joaat("CARRIED_WEAPONS"), func_971(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_974(int iParam0, bool bParam1)
{
	if (func_876(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_999(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_975(bool bParam0)
{
	int iVar0;

	iVar0 = func_875(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_908(joaat("EMOTE_ITEM"), func_971(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_908(joaat("EMOTE_ITEM"), func_971(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_976(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_876(iParam0);
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

bool func_977(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_875(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_978(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_949(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_908(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_875(bParam6), &sVar0, false);
	return iVar4;
}

bool func_979(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_875(0);
	*uParam1 = { func_908(iParam0, func_973(0), iParam3, 0) /*4*/ };
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

bool func_980(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

bool func_981(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_982(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_983(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_949(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_972(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_1000(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_1001(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_984(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_1002(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_1003(&sVar0, func_973(0));
	}
	if (!func_1004(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_1005(iVar18);
	return iVar19;
}

Vector3 func_985()
{
	if (func_1006(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_1006(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

bool func_986(int iParam0, int iParam1)
{
	if (func_32() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_987(int iParam0)
{
	if (func_32() != -1)
	{
		if (func_989(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_989(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_988(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_989(iParam0, (1 << 16)) && !func_989(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_989(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_989(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_989(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_990(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_991()
{
	return Global_1905944.f_5694;
}

bool func_992(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_993(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_994(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = uParam2;
	sVar0.f_0 = uParam0;
	sVar0.f_2 = uParam1;
	func_1007(sVar0);
}

void func_995(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1008(uParam0, 1))
	{
		func_1009(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_996(int iParam0)
{
	int iVar0;

	iVar0 = func_876(iParam0);
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return joaat("HATS");
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return joaat("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

int func_997(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
		case -2104294676:
			return 83;
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
		case -2033572567:
			return 92;
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
		case -1885734028:
			return 110;
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
		case -1818590041:
			return 246;
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
		case joaat("CSTAG_BCH_BASE"):
			return 10;
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
		case -1584659518:
			return 210;
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
		case -1565979762:
			return 507;
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
		case -1426009748:
			return 119;
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
		case -1235200494:
			return 165;
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
		case joaat("CSTAG_PRG_BASE"):
			return 9;
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
		case -1171086122:
			return 41;
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
		case -1152282847:
			return 33;
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
		case -1061998329:
			return 164;
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
		case -1045864225:
			return 510;
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
		case -978287173:
			return 12;
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
		case joaat("CSTAG_COL_BASE"):
			return 2;
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
		case -830432609:
			return 492;
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
		case -818926670:
			return 200;
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
		case joaat("CSTAG_HSO_BASE"):
			return 3;
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
		case -803062666:
			return 65;
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
		case -671103079:
			return 504;
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
		case -650501093:
			return 509;
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
		case -636774257:
			return 146;
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
		case -604891653:
			return 237;
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
		case -534913305:
			return 174;
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
		case -453449739:
			return 182;
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
		case -399703928:
			return 155;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
		case -381477663:
			return 37;
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
		case -317452243:
			return 128;
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
		case -98209688:
			return 55;
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
		case -58291054:
			return 201;
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
		case -21372580:
			return 46;
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
		case -8269375:
			return 137;
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
		case joaat("CSTAG_FLOW_TRN4_PRE"):
			return 321;
		case joaat("CSTAG_MOOD_BILL_BEAVER"):
			return 81;
		case joaat("CSTAG_MOOD_DUTCH_DRUNK"):
			return 51;
		case joaat("CSTAG_MOOD_DUTCH_BEAVER"):
			return 54;
		case joaat("CSTAG_MOOD_MOLLY_UPBEAT"):
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case joaat("CSTAG_FLOW_FUD1_POST"):
			return 408;
		case joaat("CSTAG_FLOW_RDST61_POST"):
			return 458;
		case joaat("CSTAG_VIG_RDOWN1_WNT"):
			return 358;
		case joaat("CSTAG_FLOW_MR53_POST"):
			return 476;
		case 121466883:
			return 498;
		case joaat("CSTAG_FLOW_BE22_POST"):
			return 477;
		case joaat("CSTAG_FLOW_MAR7_POST"):
			return 480;
		case joaat("CSTAG_FLOW_NTV3_POST"):
			return 455;
		case 132239274:
			return 494;
		case joaat("CSTAG_MOOD_MOLLY_DEFAULT"):
			return 184;
		case 137433874:
			return 227;
		case joaat("CSTAG_MOOD_JOHN_DRUNK"):
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"):
			return 279;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_POST"):
			return 282;
		case joaat("CSTAG_FLOW_RMOB01_POST"):
			return 433;
		case joaat("CSTAG_SUPPLY_LOW"):
			return 35;
		case 207369059:
			return 64;
		case joaat("CSTAG_FLOW_MOB2_PRE"):
			return 304;
		case joaat("CSTAG_MOOD_TILLY_DRUNK"):
			return 241;
		case joaat("CSTAG_MOOD_LENNY_COLTER"):
			return 134;
		case 228261307:
			return 74;
		case joaat("CSTAG_FLOW_MUD4_PRE"):
			return 270;
		case joaat("CSTAG_FLOW_UTP1_POST"):
			return 399;
		case joaat("CSTAG_FLOW_RXCF1_POST"):
			return 419;
		case joaat("CSTAG_VIG_SDB_ONLY"):
			return 364;
		case joaat("CSTAG_MOOD_TRELAWNY_DRUNK"):
			return 250;
		case joaat("CSTAG_MOOD_MICAH_DOWN"):
			return 103;
		case joaat("CSTAG_MOOD_UNCLE_BEAVER"):
			return 90;
		case joaat("CSTAG_MOOD_TILLY_ANNOYED"):
			return 240;
		case joaat("CSTAG_MOOD_PEARSON_DEFAULT"):
			return 193;
		case 319124397:
			return 506;
		case joaat("CSTAG_MOOD_UNCLE_DEFAULT"):
			return 84;
		case 388356689:
			return 101;
		case joaat("CSTAG_CAMP_MONEY_LOW"):
			return 335;
		case joaat("CSTAG_MOOD_JAVIER_COLTER"):
			return 71;
		case joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"):
			return 291;
		case 404260466:
			return 73;
		case joaat("CSTAG_MOOD_BILL_COLTER"):
			return 80;
		case joaat("CSTAG_MOOD_LENNY_DRUNK"):
			return 132;
		case joaat("CSTAG_FLOW_RGNG01_POST"):
			return 446;
		case joaat("CSTAG_CAMP_FOOD_HIGH"):
			return 332;
		case joaat("CSTAG_FLOW_RNATV2_POST"):
			return 436;
		case joaat("CSTAG_MOOD_KAREN_DEFAULT"):
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case joaat("CSTAG_VIG_PRIORITY_NINE"):
			return 370;
		case joaat("CSTAG_MOOD_ABIGAIL_BEAVER"):
			return 163;
		case joaat("CSTAG_GRIEFING_MAYHEM"):
			return 40;
		case joaat("CSTAG_FLOW_MAR1_POST"):
			return 471;
		case joaat("CSTAG_FLOW_NTS3_POST"):
			return 452;
		case joaat("CSTAG_MOOD_ABIGAIL_DRUNK"):
			return 160;
		case 531203229:
			return 245;
		case joaat("CSTAG_MOOD_STRAUSS_DOWN"):
			return 203;
		case joaat("CSTAG_FLOW_FIRST_VISIT_DEBT_COLLECTED"):
			return 346;
		case joaat("CSTAG_FLOW_SAD4_POST"):
			return 488;
		case joaat("CSTAG_PLAYER_KILLING_INNOCENT"):
			return 349;
		case joaat("CSTAG_VIG_RHMRO_WNT"):
			return 360;
		case joaat("CSTAG_FLOW_SEN1_POST"):
			return 398;
		case joaat("CSTAG_MOOD_BILL_DRUNK"):
			return 78;
		case joaat("CSTAG_FLOW_TRE1_POST"):
			return 420;
		case joaat("CSTAG_FLOW_RDST2_POST"):
			return 389;
		case joaat("CSTAG_MOOD_MARYBETH_DRUNK"):
			return 178;
		case joaat("CSTAG_FLOW_CA_BR01_POST"):
			return 315;
		case joaat("CSTAG_FLOW_JOHN_RECOVER"):
			return 268;
		case joaat("CSTAG_MOOD_JAVIER_DEFAULT"):
			return 66;
		case joaat("CSTAG_FLOW_RODDF1_POST"):
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case joaat("CSTAG_BVH_BASE"):
			return 8;
		case joaat("CSTAG_MOOD_SUSAN_DEFAULT"):
			return 211;
		case joaat("CSTAG_MOOD_SEAN_BEAVER"):
			return 126;
		case joaat("CSTAG_MOOD_SUSAN_BEAVER"):
			return 217;
		case joaat("CSTAG_FLOW_TRN4_POST"):
			return 467;
		case joaat("CSTAG_MOOD_MARYBETH_ANNOYED"):
			return 177;
		case joaat("CSTAG_FLOW_CA_HR01_POST"):
			return 328;
		case joaat("CSTAG_VIG_BVH_BASE"):
			return 365;
		case joaat("CSTAG_FLOW_RBNP10_POST"):
			return 414;
		case joaat("CSTAG_MOOD_CHARLES_UPBEAT"):
			return 115;
		case joaat("CSTAG_MOOD_SADIE_COLTER"):
			return 153;
		case joaat("CSTAG_MOOD_ABIGAIL_DEFAULT"):
			return 157;
		case joaat("CSTAG_MOOD_DUTCH_ANNOYED"):
			return 50;
		case joaat("CSTAG_FLOW_MAR8_POST"):
			return 481;
		case joaat("CSTAG_VIG_NTV2_HONOR_HIGH"):
			return 367;
		case 761196368:
			return 218;
		case joaat("CSTAG_FLOW_FIRST_VISIT_BRT2_POST"):
			return 296;
		case joaat("CSTAG_ARRANGEMENT_SDB_TEARDOWN"):
			return 28;
		case joaat("CSTAG_LOITERING"):
			return 336;
		case joaat("CSTAG_MOOD_STRAUSS_DEFAULT"):
			return 202;
		case joaat("CSTAG_ARRANGEMENT_COL_SETUP"):
			return 14;
		case 812866778:
			return 355;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RXCF1_POST"):
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case joaat("CSTAG_MOOD_DUTCH_DOWN"):
			return 49;
		case 856952521:
			return 42;
		case joaat("CSTAG_CLM_BASE"):
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case joaat("CSTAG_FLOW_GRY3_POST"):
			return 412;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDOWN3_POST"):
			return 272;
		case joaat("CSTAG_FLOW_DST3_POST"):
			return 407;
		case joaat("CSTAG_MOOD_SUSAN_DOWN"):
			return 212;
		case joaat("CSTAG_MOOD_ABIGAIL_ANNOYED"):
			return 159;
		case joaat("CSTAG_MOOD_JAVIER_UPBEAT"):
			return 70;
		case joaat("CSTAG_CAMP_FOOD_LOW"):
			return 333;
		case joaat("CSTAG_GRIEFING_KNOCKOUT_POST"):
			return 38;
		case 1019519723:
			return 256;
		case joaat("CSTAG_MOOD_JACK_COLTER"):
			return 171;
		case joaat("CSTAG_FLOW_RDCH3_POST"):
			return 456;
		case joaat("CSTAG_VIG_HSO_BASE"):
			return 356;
		case joaat("CSTAG_MOOD_PEARSON_COLTER"):
			return 198;
		case joaat("CSTAG_FLOW_BRT3_PRE"):
			return 299;
		case joaat("CSTAG_FLOW_RCHRB_POST"):
			return 417;
		case joaat("CSTAG_MOOD_MOLLY_COLTER"):
			return 189;
		case joaat("CSTAG_FLOW_SEN1_PRE"):
			return 265;
		case joaat("CSTAG_MOOD_CHARLES_COLTER"):
			return 116;
		case joaat("CSTAG_FLOW_ODR4_PRE"):
			return 305;
		case joaat("CSTAG_FLOW_MUD3_PRE"):
			return 264;
		case joaat("CSTAG_FLOW_RSAD1_POST"):
			return 402;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RABI1_POST"):
			return 271;
		case joaat("CSTAG_FLOW_RSAD1_PRE"):
			return 286;
		case joaat("CSTAG_FLOW_HNT1_POST"):
			return 378;
		case joaat("CSTAG_FLOW_RMARY1_POST"):
			return 392;
		case joaat("CSTAG_VIG_BVH_ONLY"):
			return 366;
		case joaat("CSTAG_FLOW_NTS2_POST"):
			return 451;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RDTC1_POST"):
			return 292;
		case joaat("CSTAG_VIG_SDB_BASE"):
			return 363;
		case joaat("CSTAG_MOOD_KAREN_UPBEAT"):
			return 224;
		case joaat("CSTAG_MOOD_UNCLE_DRUNK"):
			return 87;
		case joaat("CSTAG_FLOW_GRY1_POST"):
			return 410;
		case joaat("CSTAG_MOOD_SUSAN_DRUNK"):
			return 214;
		case joaat("CSTAG_MOOD_JACK_DEFAULT"):
			return 166;
		case joaat("CSTAG_FLOW_RSTR33_POST"):
			return 463;
		case joaat("CSTAG_FLOW_MRY3_POST"):
			return 428;
		case joaat("CSTAG_FLOW_NTS1_POST"):
			return 450;
		case joaat("CSTAG_LAK_BASE"):
			return 7;
		case 1267957796:
			return 32;
		case joaat("CSTAG_MOOD_SUSAN_UPBEAT"):
			return 215;
		case joaat("CSTAG_MOOD_MICAH_COLTER"):
			return 107;
		case joaat("CSTAG_MOOD_LENNY_DOWN"):
			return 130;
		case joaat("CSTAG_MOOD_ARTHUR_BEAVER"):
			return 45;
		case 1305416676:
			return 495;
		case joaat("CSTAG_MOOD_SEAN_ANNOYED"):
			return 122;
		case joaat("CSTAG_FLOW_FIRST_VISIT_RPRSN_POST"):
			return 258;
		case joaat("CSTAG_MOOD_MICAH_DEFAULT"):
			return 102;
		case joaat("CSTAG_MOOD_TRELAWNY_DOWN"):
			return 248;
		case joaat("CSTAG_MOOD_SADIE_UPBEAT"):
			return 152;
		case joaat("CSTAG_FLOW_CA_HT06_POST"):
			return 314;
		case joaat("CSTAG_MOOD_JACK_ANNOYED"):
			return 168;
		case joaat("CSTAG_GUA_BASE"):
			return 6;
		case joaat("CSTAG_FLOW_RDTC2_ACTIVE"):
			return 300;
		case joaat("CSTAG_FLOW_MUD1_POST_EVENING"):
			return 267;
		case joaat("CSTAG_VIG_CAMP_ENTER"):
			return 368;
		case joaat("CSTAG_FLOW_GOONS_ARRIVE_POST"):
			return 322;
		case joaat("CSTAG_MOOD_UNCLE_DOWN"):
			return 85;
		case 1366067161:
			return 91;
		case joaat("CSTAG_MOOD_PEARSON_ANNOYED"):
			return 195;
		case joaat("CSTAG_MOOD_DUTCH_COLTER"):
			return 53;
		case joaat("CSTAG_MOOD_MARYBETH_BEAVER"):
			return 181;
		case joaat("CSTAG_FLOW_RDTC2_POST"):
			return 432;
		case joaat("CSTAG_FLOW_MAR6_POST"):
			return 479;
		case joaat("CSTAG_MOOD_SWANSON_DOWN"):
			return 230;
		case joaat("CSTAG_FLOW_FIRST_VISIT_ODR4_POST"):
			return 306;
		case joaat("CSTAG_MOOD_CHARLES_DEFAULT"):
			return 111;
		case 1441230304:
			return 502;
		case joaat("CSTAG_SP_TRELAWNY_FAMILY"):
			return 352;
		case joaat("CSTAG_MOOD_HOSEA_BEAVER"):
			return 99;
		case joaat("CSTAG_FLOW_IND1_POST"):
			return 421;
		case joaat("CSTAG_FLOW_SAL1_POST"):
			return 397;
		case joaat("CSTAG_MOOD_JAVIER_DRUNK"):
			return 69;
		case joaat("CSTAG_FLOW_RMUD31_POST"):
			return 394;
		case joaat("CSTAG_FLOW_RMOB02_POST"):
			return 434;
		case joaat("CSTAG_MOOD_DUTCH_DEFAULT"):
			return 48;
		case joaat("CSTAG_MOOD_BILL_UPBEAT"):
			return 79;
		case joaat("CSTAG_FLOW_CA_CR02_POST"):
			return 301;
		case joaat("CSTAG_MOOD_SUSAN_COLTER"):
			return 216;
		case joaat("CSTAG_MOOD_JOHN_BEAVER"):
			return 63;
		case joaat("CSTAG_MOOD_BILL_DEFAULT"):
			return 75;
		case joaat("CSTAG_MOOD_KIERAN_BEAVER"):
			return 144;
		case joaat("CSTAG_FLOW_RSTR31_POST"):
			return 462;
		case joaat("CSTAG_PLAYER_DIRTY"):
			return 339;
		case joaat("CSTAG_MOOD_ARTHUR_COLTER"):
			return 44;
		case 1623482561:
			return 503;
		case joaat("CSTAG_FLOW_FIN2_POST"):
			return 478;
		case joaat("CSTAG_ARRANGEMENT_CLM_A"):
			return 20;
		case joaat("CSTAG_EVENT_HSO_UPBEAT"):
			return 278;
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_LATE"):
			return 281;
		case 1675028401:
			return 109;
		case joaat("CSTAG_CAMP_MONEY_HIGH"):
			return 334;
		case 1688887348:
			return 209;
		case joaat("CSTAG_FLOW_KIERAN_TIED"):
			return 263;
		case joaat("CSTAG_MOOD_STRAUSS_COLTER"):
			return 207;
		case joaat("CSTAG_MOOD_JACK_DOWN"):
			return 167;
		case joaat("CSTAG_MOOD_ABIGAIL_UPBEAT"):
			return 161;
		case joaat("CSTAG_FLOW_KIERAN_FREE"):
			return 262;
		case 1750892420:
			return 183;
		case joaat("CSTAG_MOOD_ABIGAIL_COLTER"):
			return 162;
		case joaat("CSTAG_MOOD_JAVIER_BEAVER"):
			return 72;
		case joaat("CSTAG_FLOW_FIN1_POST"):
			return 468;
		case joaat("CSTAG_MOOD_SWANSON_ANNOYED"):
			return 231;
		case joaat("CSTAG_PLAYER_AWAY"):
			return 340;
		case joaat("CSTAG_FLOW_MUD6_POST"):
			return 384;
		case joaat("CSTAG_MOOD_KIERAN_COLTER"):
			return 143;
		case joaat("CSTAG_ARRANGEMENT_BVH_SETUP"):
			return 31;
		case joaat("CSTAG_MOOD_CHARLES_BEAVER"):
			return 117;
		case 1792418811:
			return 100;
		case joaat("CSTAG_FLOW_MRY1_POST"):
			return 379;
		case joaat("CSTAG_FLOW_REV1_POST"):
			return 390;
		case joaat("CSTAG_FLOW_SAL1_SPLITUP_POST"):
			return 276;
		case joaat("CSTAG_FLOW_GNG3_POST"):
			return 449;
		case joaat("CSTAG_FLOW_TILLY_TRAUMATIZED"):
			return 307;
		case joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"):
			return 274;
		case 1874987418:
			return 191;
		case joaat("CSTAG_FLOW_DST5_POST"):
			return 447;
		case 1889392998:
			return 508;
		case joaat("CSTAG_MOOD_SWANSON_BEAVER"):
			return 235;
		case joaat("CSTAG_FLOW_RDOWN3_POST"):
			return 388;
		case joaat("CSTAG_FLOW_RCLDN1_POST"):
			return 430;
		case joaat("CSTAG_MOOD_MARYBETH_DOWN"):
			return 176;
		case joaat("CSTAG_FLOW_GNG2_POST"):
			return 448;
		case joaat("CSTAG_FLOW_MR52_POST"):
			return 475;
		case joaat("CSTAG_FLOW_RDST62_POST"):
			return 459;
		case joaat("CSTAG_MOOD_JOHN_COLTER"):
			return 62;
		case joaat("CSTAG_MOOD_KAREN_BEAVER"):
			return 226;
		case 1964695690:
			return 491;
		case joaat("CSTAG_FLOW_NTV1_POST"):
			return 453;
		case 1974689262:
			return 500;
		case joaat("CSTAG_MOOD_SADIE_BEAVER"):
			return 154;
		case joaat("CSTAG_MOOD_SEAN_DRUNK"):
			return 123;
		case joaat("CSTAG_MOOD_KAREN_DOWN"):
			return 221;
		case 2016323151:
			return 36;
		case joaat("CSTAG_FLOW_MUD2_POST"):
			return 381;
		case 2033246305:
			return 82;
		case joaat("CSTAG_FLOW_NTS1_PRE"):
			return 319;
		case joaat("CSTAG_MOOD_SEAN_DOWN"):
			return 121;
		case 2050878222:
			return 497;
		case joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"):
			return 348;
		case joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"):
			return 347;
		case joaat("CSTAG_MOOD_SUSAN_ANNOYED"):
			return 213;
		case joaat("CSTAG_SDB_BASE"):
			return 5;
		case joaat("CSTAG_ARRANGEMENT_HSO_SETUP"):
			return 15;
		case joaat("CSTAG_FLOW_RDOWN1_POST"):
			return 386;
		case joaat("CSTAG_FLOW_RBRT0_POST"):
			return 416;
		case joaat("CSTAG_FLOW_TRN2_POST"):
			return 465;
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

struct<4> /*32*/ func_998()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

bool func_999(int iParam0)
{
	if (!func_1010(iParam0))
	{
		return false;
	}
	return func_1011(iParam0);
}

bool func_1000(int iParam0, int iParam1)
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

void func_1001(int iParam0, var uParam1, var uParam2)
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

struct<18> /*144*/ func_1002(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1003(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_1004(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_875(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1005(int iParam0)
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

bool func_1006(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_764(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

void func_1007(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_992(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_992(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_993(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_953(8);
}

bool func_1008(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_1009(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

bool func_1010(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1011(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

