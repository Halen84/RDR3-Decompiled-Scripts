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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	struct<10> /*80*/ sLocal_18 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_28 = false;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	char* sLocal_31 = NULL;
	struct<6> /*48*/ sScriptParam_0 = { -1, -1, 0, 0, 0, 0 } ;
#pragma endregion

void __SCRIPT()
{
	struct<2268> /*18144*/ sVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_31 = "CCDTC_ITM_CNV_1";
	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	sVar0.f_17 = 10;
	sVar0.f_18 = 30;
	sVar0.f_19 = 80;
	sVar0.f_20 = 120;
	sVar0.f_33 = 2;
	sVar0.f_36 = 6;
	sVar0.f_36.f_1.f_1 = -1;
	sVar0.f_36.f_1.f_5.f_1 = -1;
	sVar0.f_36.f_1.f_5.f_5.f_1 = -1;
	sVar0.f_36.f_1.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_36.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_36.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	sVar0.f_67 = 3;
	sVar0.f_73 = 15;
	sVar0.f_107 = 14;
	sVar0.f_107.f_1.f_2 = -1;
	sVar0.f_107.f_1.f_7 = -1;
	sVar0.f_107.f_1.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_2 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_7 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_8.f_9 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_1 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_10 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_11 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_14 = 1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_15 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_16 = 3;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_36 = -1;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_39 = 30;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_49 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_50 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_51 = -1082130432;
	sVar0.f_107.f_1.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_113.f_32.f_60 = -1082130432;
	sVar0.f_1711 = 17;
	sVar0.f_1967 = 2;
	sVar0.f_1984 = 30;
	sVar0.f_2015 = 30;
	sVar0.f_2047 = -1;
	sVar0.f_2048 = -1;
	sVar0.f_2050 = -1;
	sVar0.f_2051 = 30;
	sVar0.f_2051.f_1 = -1;
	sVar0.f_2051.f_1.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2051.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6 = -1;
	sVar0.f_2236 = 1;
	sVar0.f_2252 = 1082130432;
	sVar0.f_2253 = 1097859072;
	sVar0.f_2254 = 1084227584;
	sVar0.f_2255 = 1065353216;
	sVar0.f_2256 = 1120403456;
	sVar0.f_2257 = 1084227584;
	sVar0.f_2258 = 1097859072;
	sVar0.f_2259 = (1 << 30);
	sVar0.f_2260 = 1092616192;
	sVar0.f_2261 = 1120403456;
	sVar0.f_2263 = 1090519040;
	sVar0.f_2264 = 1103626240;
	sVar0.f_2266 = 60;
	if (!Global_1327590.f_11465[sScriptParam_0.f_0 /*10*/])
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		if (!sVar0.f_2267)
		{
			func_1(&sVar0);
			func_2(&sVar0);
			func_3(&sVar0);
		}
		func_4(&sVar0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	func_5(&sVar0, sScriptParam_0);
	func_6(&sVar0, 1);
	while (func_7(&sVar0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_1(var uParam0)
{
	PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_31);
	func_8(&iLocal_29, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(func_9(uParam0, iLocal_14)))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(func_9(uParam0, iLocal_14));
	}
	return true;
}

bool func_2(var uParam0)
{
	func_10(uParam0);
	func_11(uParam0);
	func_12(uParam0);
	func_13(uParam0);
	func_14(uParam0);
	func_15(uParam0);
	func_16(uParam0);
	func_17(uParam0);
	func_18(uParam0);
	func_19(uParam0);
	func_20(uParam0);
	if (func_22(func_21(uParam0)))
	{
		func_23();
	}
	return true;
}

bool func_3(var uParam0)
{
	return true;
}

void func_4(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			if (uParam0->f_107[iVar0 /*113*/].f_8 == 3)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_8.f_23);
				}
			}
			if (uParam0->f_107[iVar0 /*113*/].f_32.f_1 == 3)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_32.f_21))
				{
					TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_32.f_21);
				}
			}
			if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_107[iVar0 /*113*/].f_101))
			{
				VOLUME::DELETE_VOLUME(uParam0->f_107[iVar0 /*113*/].f_101);
			}
		}
		iVar0++;
	}
}

void func_5(var uParam0, struct<6> /*48*/ sParam1)
{
	int iVar0;
	int iVar1;

	uParam0->f_2 = sParam1.f_0;
	*uParam0 = sParam1.f_1;
	uParam0->f_2248 = sParam1.f_2;
	uParam0->f_3 = sParam1.f_3;
	uParam0->f_1 = func_24();
	uParam0->f_29 = { func_25(uParam0->f_2) /*3*/ };
	uParam0->f_32 = func_26(uParam0->f_2);
	uParam0->f_4 = func_27(uParam0->f_2);
	uParam0->f_5 = func_28(uParam0->f_2);
	uParam0->f_7 = sParam1.f_4;
	uParam0->f_8 = sParam1.f_5;
	if (func_29(uParam0->f_2))
	{
		uParam0->f_2265 = 1;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		uParam0->f_107[iVar0 /*113*/].f_1 = -1;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			uParam0->f_107[iVar0 /*113*/].f_32.f_16[iVar1] = -1;
			uParam0->f_107[iVar0 /*113*/].f_8.f_9[iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_22 = func_30();
	func_31(&(uParam0->f_22), 0, 0, 1, 0, 0, 0, 0);
	MISC::_0xDA4D8EB04E8E2928(func_32(uParam0->f_2));
}

int func_6(var uParam0, int iParam1)
{
	if (*uParam0 >= 0 && *uParam0 < Global_1327590.f_19547)
	{
		Global_1327590.f_19547[*uParam0 /*5*/].f_1 = iParam1;
		return 1;
	}
	return 0;
}

bool func_7(var uParam0)
{
	if (func_33(uParam0))
	{
		if (func_34(uParam0) < 6)
		{
			func_35(func_21(uParam0), 30);
			func_6(uParam0, 6);
		}
	}
	switch (func_34(uParam0))
	{
		case 1:
			if (func_36(uParam0))
			{
				func_6(uParam0, 2);
			}
			else
			{
				func_37(uParam0);
			}
			break;
		case 2:
			if (func_38(uParam0))
			{
				if (func_39(uParam0))
				{
					func_6(uParam0, 3);
				}
				else
				{
					func_37(uParam0);
				}
			}
			break;
		case 3:
			if (func_40(uParam0))
			{
				if (func_41(uParam0))
				{
					func_6(uParam0, 4);
				}
				else
				{
					func_37(uParam0);
				}
			}
			break;
		case 4:
			if (func_42(uParam0))
			{
				if (func_43(uParam0))
				{
					func_6(uParam0, 5);
				}
				else
				{
					func_37(uParam0);
				}
			}
			break;
		case 5:
			if (func_44(uParam0))
			{
				func_6(uParam0, 6);
			}
			break;
		case 6:
			if (func_45(uParam0))
			{
				uParam0->f_2267 = 1;
				func_6(uParam0, 7);
			}
			break;
		case 7:
			if (func_46(uParam0))
			{
				func_4(uParam0);
				func_6(uParam0, 0);
				return false;
			}
			if (func_47(uParam0))
			{
				func_4(uParam0);
				func_6(uParam0, 0);
				return false;
			}
			break;
	}
	return true;
}

void func_8(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_48(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_49(*iParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_50(iVar0);
	*iParam0 = 0;
}

int func_9(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_107)
	{
		return 0;
	}
	return uParam0->f_107[iParam1 /*113*/].f_5;
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (uParam0->f_1711[iVar0 /*15*/].f_9 != 0)
		{
			if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_1711[iVar0 /*15*/].f_9))
			{
				ENTITY::_UNPIN_MAP_ENTITY(uParam0->f_1711[iVar0 /*15*/].f_9);
			}
		}
		iVar1 = uParam0->f_1711[iVar0 /*15*/].f_10;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, true))
		{
		}
		else if (uParam0->f_1711[iVar0 /*15*/].f_6 || (func_46(uParam0) && !uParam0->f_1711[iVar0 /*15*/].f_5))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29));
			func_51(uParam0, "Unpinned interior", 1, -1);
		}
	}
}

void func_11(var uParam0)
{
	if (PROPSET::DOES_PROP_SET_EXIST(uParam0->f_1976.f_6))
	{
		PROPSET::_SET_PROP_SET_AS_NO_LONGER_NEEDED(uParam0->f_1976.f_6);
	}
}

void func_12(var uParam0)
{
	if (!HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2232)))
	{
		return;
	}
	HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_2232));
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_2 != 0)
		{
			STREAMING::_REMOVE_SCENARIO_ASSET(uParam0->f_107[iVar0 /*113*/].f_32.f_2);
		}
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 != 0)
		{
			STREAMING::_REMOVE_SCENARIO_ASSET(uParam0->f_107[iVar0 /*113*/].f_8.f_1);
		}
		iVar0++;
	}
}

void func_14(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(&(uParam0->f_2236[iVar0 /*8*/])))
		{
		}
		else
		{
			STREAMING::REMOVE_ANIM_DICT(&(uParam0->f_2236[iVar0 /*8*/]));
		}
		iVar0++;
	}
}

void func_15(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		iVar1 = uParam0->f_1984[iVar0];
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar1))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iVar1);
		}
		iVar0++;
	}
}

void func_16(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_23)))
			{
				PED::_REMOVE_PED_EMOTIONAL_PRESET(uParam0->f_107[iVar0 /*113*/].f_5, &(uParam0->f_107[iVar0 /*113*/].f_32.f_23));
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_28)))
			{
				PED::_REMOVE_MOTION_TYPE_ASSET(MISC::GET_HASH_KEY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_28)), uParam0->f_107[iVar0 /*113*/].f_5);
			}
		}
		iVar0++;
	}
}

void func_17(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_33)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_33[iVar0]))
		{
		}
		else
		{
			func_52(uParam0->f_33[iVar0]);
			VOLUME::DELETE_VOLUME(uParam0->f_33[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
		{
		}
		else
		{
			if (uParam0->f_36[iVar0 /*5*/].f_2)
			{
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_36[iVar0 /*5*/]);
			}
			if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_36[iVar0 /*5*/].f_4))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_36[iVar0 /*5*/].f_4, false);
			}
			VOLUME::DELETE_VOLUME(uParam0->f_36[iVar0 /*5*/]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_67[iVar0]))
		{
		}
		else
		{
			VOLUME::DELETE_VOLUME(uParam0->f_67[iVar0]);
		}
		iVar0++;
	}
}

void func_18(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2268))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			iVar1 = func_9(uParam0, iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar1, 0.0f);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2269))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_2269, false, true);
	}
}

int func_19(var uParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		func_53(uParam0, iVar0);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (func_54(uParam0->f_107[iVar0 /*113*/].f_7))
		{
			if (!func_55(uParam0->f_107[iVar0 /*113*/].f_7))
			{
			}
			else
			{
				func_56(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_7, 1, 0, 0);
				Jump @294; // curOff = 110
				if (func_54(uParam0->f_107[iVar0 /*113*/].f_1))
				{
					if (uParam0->f_107[iVar0 /*113*/].f_32.f_55 == 1)
					{
						func_57(uParam0, iVar0, 1);
					}
					if (!func_58(uParam0->f_107[iVar0 /*113*/].f_1))
					{
					}
					else if (TASK::_0x9FF5F9B24E870748(uParam0->f_107[iVar0 /*113*/].f_5) && !func_46(uParam0))
					{
						fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20.0f, 60.0f);
						func_59(uParam0->f_107[iVar0 /*113*/].f_1, 68, 1);
						func_60(uParam0->f_107[iVar0 /*113*/].f_1, 0, 0, 0, fVar1, 1, 1, 0, 0, 0, 0);
					}
					else
					{
						func_60(uParam0->f_107[iVar0 /*113*/].f_1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
				}
			}
			iVar0++;
			return 1;
		}
	}
}

int func_20(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_61(uParam0->f_107[iVar0 /*113*/].f_2))
		{
		}
		else if (!func_62(uParam0->f_107[iVar0 /*113*/].f_2))
		{
		}
		else
		{
			func_63(uParam0->f_107[iVar0 /*113*/].f_2, 0, 1, 0, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_21(var uParam0)
{
	return uParam0->f_2;
}

bool func_22(int iParam0)
{
	if (Global_1327590.f_19744 == -1)
	{
		return false;
	}
	return Global_1327590.f_19744 == iParam0;
}

void func_23()
{
	Global_1327590.f_19744 = -1;
}

int func_24()
{
	return Global_40.f_4283;
}

Vector3 func_25(int iParam0)
{
	return Global_1327590.f_11465[iParam0 /*10*/].f_1;
}

var func_26(int iParam0)
{
	return Global_1327590.f_23[iParam0 /*17*/].f_12;
}

bool func_27(int iParam0)
{
	return (((((((((iParam0 >= 508 && iParam0 <= 635) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 498) || iParam0 == 506) || iParam0 == 502) || iParam0 == 507) || iParam0 == 456);
}

bool func_28(int iParam0)
{
	return (iParam0 >= 342 && iParam0 <= 426);
}

bool func_29(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 22);
}

int func_30()
{
	return Global_1899515;
}

void func_31(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_64(*iParam0);
	iVar1 = func_65(*iParam0);
	iVar2 = func_66(*iParam0);
	iVar3 = func_67(*iParam0);
	iVar4 = func_68(*iParam0);
	iVar5 = func_69(*iParam0);
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
	iVar6 = func_70(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_70(iVar1, iVar0);
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
	func_71(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_32(int iParam0)
{
	return MISC::GET_HASH_KEY(func_72(iParam0));
}

bool func_33(var uParam0)
{
	if (func_73(uParam0))
	{
		return true;
	}
	if (func_74(uParam0))
	{
		return true;
	}
	if (func_46(uParam0))
	{
		return true;
	}
	return false;
}

int func_34(var uParam0)
{
	if (*uParam0 >= 0 && *uParam0 < Global_1327590.f_19547)
	{
		return Global_1327590.f_19547[*uParam0 /*5*/].f_1;
	}
	return 0;
}

void func_35(int iParam0, int iParam1)
{
	func_75(iParam0);
	func_31(&(Global_1327590.f_11465[iParam0 /*10*/].f_5), 0, iParam1, 0, 0, 0, 0, 0);
}

bool func_36(var uParam0)
{
	if (!func_76(uParam0))
	{
		return false;
	}
	if (!func_77(uParam0))
	{
		return false;
	}
	if (!func_78(uParam0))
	{
		return false;
	}
	return true;
}

void func_37(var uParam0)
{
	Global_1327590.f_19547[*uParam0 /*5*/].f_4 = 1;
}

bool func_38(var uParam0)
{
	if (!func_79(uParam0))
	{
		return false;
	}
	if (!func_80(uParam0))
	{
		return false;
	}
	if (!func_81(uParam0))
	{
		return false;
	}
	return true;
}

bool func_39(var uParam0)
{
	if (!func_82(uParam0))
	{
		return false;
	}
	if (!func_83(uParam0))
	{
		return false;
	}
	if (!func_84(uParam0))
	{
		return false;
	}
	return true;
}

bool func_40(var uParam0)
{
	if (!func_85(uParam0))
	{
		return false;
	}
	if (!func_86(uParam0))
	{
		return false;
	}
	if (!func_87(uParam0))
	{
		return false;
	}
	return true;
}

bool func_41(var uParam0)
{
	if (!func_88(uParam0))
	{
		return false;
	}
	if (!func_89(uParam0))
	{
		return false;
	}
	if (!func_90(uParam0))
	{
		return false;
	}
	return true;
}

bool func_42(var uParam0)
{
	if (!func_91(uParam0))
	{
		return false;
	}
	if (!func_92(uParam0))
	{
		return false;
	}
	if (!func_93(uParam0))
	{
		return false;
	}
	return true;
}

bool func_43(var uParam0)
{
	if (!func_94(uParam0))
	{
		return false;
	}
	if (!func_95(uParam0))
	{
		return false;
	}
	if (!func_96(uParam0))
	{
		return false;
	}
	return true;
}

bool func_44(var uParam0)
{
	if (!func_97(uParam0))
	{
		return false;
	}
	if (!func_98(uParam0))
	{
		return false;
	}
	if (!func_99(uParam0))
	{
		return false;
	}
	return true;
}

bool func_45(var uParam0)
{
	if (!func_1(uParam0))
	{
		return false;
	}
	if (!func_2(uParam0))
	{
		return false;
	}
	if (!func_3(uParam0))
	{
		return false;
	}
	return true;
}

bool func_46(var uParam0)
{
	return Global_1327590.f_19547[*uParam0 /*5*/].f_4;
}

bool func_47(var uParam0)
{
	if (!func_100(uParam0))
	{
		return false;
	}
	if (!func_101(uParam0))
	{
		return false;
	}
	return true;
}

bool func_48(int iParam0)
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

int func_49(int iParam0)
{
	return iParam0;
}

void func_50(int iParam0)
{
	if (!func_102(iParam0))
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

void func_51(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if ((MISC::GET_FRAME_COUNT() % iParam2) == 0)
	{
		if (iParam3 >= 0 && iParam3 < uParam0->f_107)
		{
			if (func_54(uParam0->f_107[iParam3 /*113*/].f_1))
			{
			}
		}
	}
}

void func_52(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_103(vVar0, 0);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_107)
	{
		return;
	}
	if (uParam0->f_107[iParam1 /*113*/].f_112)
	{
		return;
	}
	if (!func_54(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	func_105(uParam0->f_107[iParam1 /*113*/].f_1, func_104(uParam0->f_7));
	func_106(uParam0->f_107[iParam1 /*113*/].f_1, 1, 1, 0);
	func_107(uParam0->f_107[iParam1 /*113*/].f_1, 45, 1);
	func_107(uParam0->f_107[iParam1 /*113*/].f_1, 46, 1);
	uParam0->f_107[iParam1 /*113*/].f_112 = 1;
}

bool func_54(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_55(int iParam0)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_56(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_108(iParam1))
	{
		return;
	}
	iVar0 = func_109(iParam1);
	if (func_110(iParam1))
	{
		if (!func_55(iParam1))
		{
			return;
		}
	}
	func_107(iParam1, 39, 1);
	func_111(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_111(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_111(iParam1, (1 << 9), 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_59(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_112(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_57(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!bParam2)
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_62)
		{
			return;
		}
	}
	if (uParam0->f_107[iParam1 /*113*/].f_32.f_55 == 0)
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_62 = 1;
		return;
	}
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_59;
	if (iVar0 <= 0 || iVar0 > 600)
	{
		return;
	}
	iVar1 = iVar0 * 1000;
	iVar2 = (iVar1 / 4000);
	if (iVar2 <= 0)
	{
		return;
	}
	switch (uParam0->f_107[iParam1 /*113*/].f_32.f_55)
	{
		case 1:
			if (!func_113(&(uParam0->f_107[iParam1 /*113*/].f_32.f_56)) || func_114(&(uParam0->f_107[iParam1 /*113*/].f_32.f_56)) > 1.0f)
			{
				iVar3 = func_115(uParam0->f_107[iParam1 /*113*/].f_1);
				if (iVar3 == 0)
				{
					return;
				}
				iVar4 = iVar2 + 5;
				while (iVar4 >= 60)
				{
					iVar5++;
					iVar4 -= 60;
				}
				if (PED::_0xCB86D3E3E3708901(iVar3, uParam0->f_1690, iVar5, iVar4, 0))
				{
					func_116(&(uParam0->f_107[iParam1 /*113*/].f_32.f_56), 0.0f);
				}
			}
			if (!func_113(&(uParam0->f_1693)) || func_114(&(uParam0->f_1693)) > 1.0f)
			{
				if (func_117())
				{
					iVar3 = joaat("ARTHUR");
				}
				else
				{
					iVar3 = joaat("JOHN");
				}
				iVar6 = iVar2;
				while (iVar6 >= 60)
				{
					iVar7++;
					iVar6 -= 60;
				}
				if (PED::_0xCB86D3E3E3708901(iVar3, uParam0->f_1691, iVar7, iVar6, 0))
				{
					func_116(&(uParam0->f_1693), 0.0f);
				}
			}
			break;
		case 2:
			if (uParam0->f_1696)
			{
				PED::_0xE737D5F14304A2EC(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), iVar1);
			}
			break;
		case 3:
			PED::_SET_PLAYER_GREET_DISABLED_FOR_PED(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), iVar1);
			PED::_SET_PLAYER_ANTAGONIZE_DISABLED_FOR_PED(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), iVar1);
			break;
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_62 = 1;
}

bool func_58(int iParam0)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	if (!func_118(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return;
		}
	}
	func_119(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_60(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_54(iParam0))
	{
		return;
	}
	if (func_118(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_59(iParam0, 56, 1);
		func_120(&(Global_1359489.f_40), 1);
	}
	func_121(iParam0, 0);
	func_122(iParam0, 4, 0);
	func_123(iParam0);
	func_124(iParam0);
	func_107(iParam0, 37, 1);
	bVar0 = func_125(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_126(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true) && (Global_1359489.f_16 & (1 << 23)) == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, false);
	}
	if (func_127(iParam0, 64, 1))
	{
		func_107(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_107(iParam0, 33, 1);
		func_107(iParam0, 34, 1);
		func_128(iParam0, 1056964608, -1, 1061158912);
		func_106(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_59(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_59(iParam0, 35, 1);
			if (bParam8)
			{
				func_59(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_129(iParam0, 0);
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
		func_107(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_59(iParam0, 33, 1);
		func_106(iParam0, 0, 1, 0);
		if (fParam4 > 0.0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_120(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_130(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_59(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_131(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_127(iParam0, 45, 1))
	{
		func_107(iParam0, 45, 1);
	}
	func_132(iParam0, 16, 1);
	func_107(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_125(func_109(iParam0), 0))
		{
			func_56(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_61(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_62(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_63(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_61(iParam0))
	{
		return;
	}
	if (!func_133(iParam0, 1))
	{
		return;
	}
	if (!func_133(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_62(iParam0)) && func_134(iParam0))
	{
		return;
	}
	func_135(iParam0, 1);
	func_136(iParam0);
	if (func_138(func_137(iParam0)))
	{
		iVar0 = func_139(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171 /*PCF_0x6868B572*/, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_135(iParam0, 16);
	}
	if (func_133(iParam0, 128) && !bParam3)
	{
		func_140(iParam0, 0);
	}
}

int func_64(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_141(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_65(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_66(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_67(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_68(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_69(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_70(int iParam0, int iParam1)
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

void func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_142(iParam0, iParam6);
	func_143(iParam0, iParam5);
	func_144(iParam0, iParam4);
	func_145(iParam0, iParam3);
	func_146(iParam0, iParam2);
	func_147(iParam0, iParam1);
}

char* func_72(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "VIG_INVALID";
		case 0:
			return "VIG_AV_BUTCHER_BLEED_DEER";
		case 1:
			return "VIG_AV_BUTCHER_HANG_CARCASS";
		case 2:
			return "VIG_AV_BUTCHER_FEED_DOG_P2";
		case 3:
			return "VIG_AV_DOG_BED_JUMP_DOWN";
		case 4:
			return "VIG_AV_DOG_JUMP_AND_LICK";
		case 5:
			return "VIG_AV_DOG_LICK_TABLE";
		case 6:
			return "VIG_AV_DOG_PET_SITTING_FEMALE";
		case 7:
			return "VIG_AV_DOG_PET_SITTING_MALE";
		case 8:
			return "VIG_AV_DONATE_MALE";
		case 9:
			return "VIG_AV_DONATE_LOOK_MALE";
		case 10:
			return "VIG_AV_DROP_RABBIT_TABLE";
		case 11:
			return "VIG_AV_DRUNK_CAMPFIRE_D";
		case 12:
			return "VIG_AV_FIRE_BLOW";
		case 13:
			return "VIG_AV_FIRE_POKE";
		case 14:
			return "VIG_AV_FIRE_START";
		case 15:
			return "VIG_AV_JACK_LOOK_POT";
		case 16:
			return "VIG_AV_JACK_POKE_FIRE";
		case 17:
			return "VIG_AV_LIGHT_SMOKE";
		case 20:
			return "VIG_AV_START_PHONOGRAPH";
		case 19:
			return "VIG_AV_SORE_JOINTS_FEMALE";
		case 18:
			return "VIG_AV_SORE_JOINTS_MALE";
		case 21:
			return "VIG_AV_WHISPER_SIT";
		case 22:
			return "VIG_AV_WHISPER_STAND";
		case 23:
			return "CCABI_CNV_1";
		case 24:
			return "CCABI_CNV_2";
		case 25:
			return "CCABI_CNV_3";
		case 26:
			return "CCABI_CNV_4";
		case 27:
			return "CCABI_CNV_5";
		case 28:
			return "CCABI_CNV_6";
		case 29:
			return "CCABI_CNV_7";
		case 30:
			return "CCABI_CNV_8";
		case 31:
			return "CCABI_CNV_9";
		case 32:
			return "CCABI_CNV_10";
		case 33:
			return "CCABI_CNV_11";
		case 34:
			return "CCABI_CNV_12";
		case 35:
			return "CCABI_CNV_13";
		case 36:
			return "CCABI_CNV_14";
		case 37:
			return "CCABI_CNV_15";
		case 38:
			return "CCABI_CNV_16";
		case 39:
			return "CCABI_CNV_17";
		case 40:
			return "CCABI_CNV_19";
		case 41:
			return "CCABI_CNV_20";
		case 42:
			return "CCABI_CNV_21";
		case 43:
			return "CCABI_CNV_23";
		case 44:
			return "CCAM_CONF_CNV_1";
		case 45:
			return "CCAM_CONF_CNV_2";
		case 46:
			return "CCAM_CONF_CNV_3";
		case 47:
			return "CCAM_CONF_CNV_4";
		case 48:
			return "CCAM_CONF_CNV_5";
		case 49:
			return "CCAM_CLN_CNV_1";
		case 50:
			return "CCAM_CLN_CNV_2";
		case 51:
			return "CCAM_CLN_CNV_3";
		case 52:
			return "CCBLL_CNV_4";
		case 53:
			return "CCBLL_CNV_5";
		case 54:
			return "CCBLL_CNV_6";
		case 55:
			return "CCBLL_CNV_8";
		case 56:
			return "CCBLL_CNV_9";
		case 57:
			return "CCBLL_CNV_10";
		case 58:
			return "CCBLL_CNV_11";
		case 59:
			return "CCBLL_CNV_13";
		case 60:
			return "CCBLL_CNV_14";
		case 61:
			return "CCBLL_CNV_15";
		case 62:
			return "CCCHR_CNV_1";
		case 63:
			return "CCCHR_CNV_2";
		case 64:
			return "CCCHR_CNV_3";
		case 65:
			return "CCCHR_CNV_5";
		case 66:
			return "CCDNA_CNV_1";
		case 67:
			return "CCDNH_CNV_1";
		case 68:
			return "CCDNH_CNV_2";
		case 69:
			return "CCDNH_CNV_3";
		case 70:
			return "CCDNH_CNV_4";
		case 71:
			return "CCDNH_CNV_5";
		case 72:
			return "CCDNH_CNV_6";
		case 73:
			return "CCDNH_CNV_7";
		case 74:
			return "CCDNH_CNV_8";
		case 75:
			return "CCDNH_CNV_9";
		case 76:
			return "CCDNH_CNV_10";
		case 77:
			return "CCDNH_CNV_11";
		case 78:
			return "CCDNH_CNV_12";
		case 79:
			return "CCDNJ_CNV_1";
		case 80:
			return "CCDNJ_CNV_2";
		case 81:
			return "CCDNJ_CNV_3";
		case 82:
			return "CCDNJ_CNV_4";
		case 83:
			return "CCDNJ_CNV_5";
		case 84:
			return "CCDNJ_CNV_6";
		case 85:
			return "CCDNJ_CNV_7";
		case 86:
			return "CCDNK_CNV_1";
		case 87:
			return "CCDNK_CNV_2";
		case 88:
			return "CCDNK_CNV_3";
		case 89:
			return "CCDNK_CNV_4";
		case 90:
			return "CCDNL_CNV_1";
		case 91:
			return "CCDNL_CNV_2";
		case 92:
			return "CCDNM_CNV_1";
		case 93:
			return "CCDNM_CNV_2";
		case 94:
			return "CCDNM_CNV_3";
		case 95:
			return "CCDNV_CNV_2";
		case 96:
			return "CCDOG_CNV_1";
		case 97:
			return "CCDOG_CNV_4";
		case 98:
			return "CCDOG_CNV_5";
		case 99:
			return "CCDOG_CNV_6";
		case 100:
			return "CCDOG_CNV_8";
		case 101:
			return "CCDTC_CNV_3";
		case 102:
			return "CCDTC_CNV_4";
		case 103:
			return "CCDTC_CNV_6";
		case 104:
			return "CCDTC_CNV_7";
		case 105:
			return "CCDTC_CNV_8";
		case 106:
			return "CCDTC_CNV_10";
		case 107:
			return "CCDTC_CNV_11";
		case 108:
			return "CCDTC_CNV_12";
		case 109:
			return "CCDTC_CNV_13";
		case 110:
			return "CCDTC_CNV_14";
		case 111:
			return "CCDTC_CNV_15";
		case 112:
			return "CCDTC_CNV_17";
		case 113:
			return "CCDTC_CNV_18";
		case 114:
			return "CCDTC_CNV_19";
		case 115:
			return "CCDTC_CNV_20";
		case 116:
			return "CCDTC_CNV_21";
		case 117:
			return "CCDTC_CNV_22";
		case 118:
			return "CCDTC_CNV_23";
		case 119:
			return "CCDTC_CNV_24";
		case 120:
			return "CCDTC_CNV_25";
		case 121:
			return "CCDTC_CNV_28";
		case 122:
			return "CCDTC_CNV_29";
		case 123:
			return "CCDTC_CNV_30";
		case 124:
			return "CCDTC_CNV_31";
		case 125:
			return "CCDTC_CNV_32";
		case 126:
			return "CCDTC_CNV_33";
		case 127:
			return "CCDTC_CNV_34";
		case 128:
			return "CCHSH_CNV_1";
		case 129:
			return "CCHSH_CNV_3";
		case 130:
			return "CCHSH_CNV_4";
		case 131:
			return "CCHSH_CNV_6";
		case 132:
			return "CCHSH_CNV_7";
		case 133:
			return "CCHSH_CNV_8";
		case 134:
			return "CCHSH_CNV_9";
		case 135:
			return "CCHSH_CNV_11";
		case 136:
			return "CCHSH_CNV_12";
		case 137:
			return "CCHSH_CNV_13";
		case 138:
			return "CCHSH_CNV_14";
		case 139:
			return "CCHSH_CNV_15";
		case 140:
			return "CCHSH_CNV_16";
		case 141:
			return "CCHSH_CNV_17";
		case 142:
			return "CCHSH_CNV_18";
		case 143:
			return "CCHSH_CNV_19";
		case 144:
			return "CCJAV_CNV_1";
		case 145:
			return "CCJAV_CNV_2";
		case 146:
			return "CCJAV_CNV_3";
		case 147:
			return "CCJAV_CNV_4";
		case 148:
			return "CCJAV_CNV_5";
		case 149:
			return "CCJAV_CNV_7";
		case 150:
			return "CCJAV_CNV_8";
		case 151:
			return "CCJAV_CNV_9";
		case 152:
			return "CCJAV_CNV_10";
		case 153:
			return "CCJAV_CNV_11";
		case 154:
			return "CCJCK_CNV_1";
		case 155:
			return "CCJCK_CNV_2";
		case 156:
			return "CCJCK_CNV_3";
		case 157:
			return "CCJCK_CNV_4";
		case 158:
			return "CCJCK_CNV_5";
		case 159:
			return "CCJCK_PAR_CNV1";
		case 160:
			return "CCJHN_CNV_1";
		case 161:
			return "CCJHN_CNV_2";
		case 162:
			return "CCJHN_CNV_3";
		case 163:
			return "CCJHN_CNV_4";
		case 164:
			return "CCJHN_CNV_5";
		case 165:
			return "CCJHN_CNV_6";
		case 166:
			return "CCJHN_CNV_7";
		case 167:
			return "CCJHN_CNV_8";
		case 168:
			return "CCJHN_CNV_9";
		case 169:
			return "CCJHN_CNV_10";
		case 170:
			return "CCKAR_CNV_1";
		case 171:
			return "CCKAR_CNV_2";
		case 172:
			return "CCKAR_CNV_3";
		case 173:
			return "CCKAR_CNV_4";
		case 174:
			return "CCKAR_CNV_5";
		case 175:
			return "CCKAR_CNV_6";
		case 176:
			return "CCKAR_CNV_7";
		case 177:
			return "CCKAR_CNV_8";
		case 178:
			return "CCKAR_CNV_9";
		case 179:
			return "CCKAR_CNV_10";
		case 180:
			return "CCKAR_CNV_11";
		case 181:
			return "CCKAR_CNV_12";
		case 182:
			return "CCKAR_CNV_13";
		case 183:
			return "CCKAR_PAR_CNV2";
		case 184:
			return "CCKAR_PAR_CNV3";
		case 185:
			return "CCKIE_CNV_1";
		case 186:
			return "CCKIE_CNV_4";
		case 187:
			return "CCKIE_CNV_5";
		case 188:
			return "CCKIE_CNV_7";
		case 189:
			return "CCKIE_CNV_8";
		case 190:
			return "CCKIE_CNV_9";
		case 191:
			return "CCKIE_CNV_10";
		case 192:
			return "CCKIE_CNV_11";
		case 193:
			return "CCKIE_CNV_12";
		case 194:
			return "CCKIE_CNV_13";
		case 195:
			return "CCKIE_CNV_14";
		case 196:
			return "CCKIE_CNV_15";
		case 197:
			return "CCLEN_CNV_1";
		case 198:
			return "CCLEN_CNV_2";
		case 199:
			return "CCLEN_CNV_3";
		case 200:
			return "CCLEN_CNV_4";
		case 201:
			return "CCLEN_CNV_5";
		case 202:
			return "CCLEN_CNV_6";
		case 203:
			return "CCLEN_CNV_7";
		case 204:
			return "CCLEN_CNV_8";
		case 205:
			return "CCLNSNM_CNV_1";
		case 206:
			return "CCMCH_CNV_2";
		case 207:
			return "CCMCH_CNV_3";
		case 208:
			return "CCMCH_CNV_5";
		case 209:
			return "CCMCH_CNV_6";
		case 210:
			return "CCMCH_CNV_7";
		case 211:
			return "CCMCH_CNV_8";
		case 212:
			return "CCMCH_CNV_10";
		case 213:
			return "CCMCH_CNV_11";
		case 214:
			return "CCMCH_CNV_12";
		case 215:
			return "CCMCH_CNV_13";
		case 216:
			return "CCMCH_CNV_15";
		case 217:
			return "CCMCH_CNV_16";
		case 218:
			return "CCMCH_CNV_17";
		case 219:
			return "CCMCH_CNV_18";
		case 220:
			return "CCMCH_CNV_19";
		case 221:
			return "CCMCH_CNV_20";
		case 222:
			return "CCMCH_CNV_21";
		case 223:
			return "CCMCH_CNV_22";
		case 224:
			return "CCMCH_CNV_24";
		case 225:
			return "CCMCH_CNV_25";
		case 226:
			return "CCMCH_CNV_26";
		case 227:
			return "CCMCH_CNV_27";
		case 228:
			return "CCMCH_CNV_28";
		case 229:
			return "CCMCH_CNV_29";
		case 230:
			return "CCMCH_CNV_30";
		case 231:
			return "CCMCH_CNV_31";
		case 232:
			return "CCMCH_CNV_32";
		case 233:
			return "CCMCH_CNV_33";
		case 234:
			return "CCMLL_CNV_1";
		case 235:
			return "CCMLL_CNV_2";
		case 236:
			return "CCMLL_CNV_3";
		case 237:
			return "CCMLL_CNV_4";
		case 238:
			return "CCMLL_CNV_5";
		case 239:
			return "CCMLL_CNV_6";
		case 240:
			return "CCMLL_CNV_7";
		case 241:
			return "CCMLL_CNV_8";
		case 242:
			return "CCMLL_CNV_9";
		case 243:
			return "CCMRB_CNV_1";
		case 244:
			return "CCMRB_CNV_2";
		case 245:
			return "CCMRB_CNV_3";
		case 246:
			return "CCMRB_CNV_4";
		case 247:
			return "CCMRB_CNV_5";
		case 248:
			return "CCMRB_CNV_6";
		case 249:
			return "CCMRB_CNV_7";
		case 250:
			return "CCMRB_CNV_8";
		case 251:
			return "CCMRB_CNV_9";
		case 252:
			return "CCMRB_CNV_10";
		case 253:
			return "CCMRB_CNV_11";
		case 254:
			return "CCMRB_CNV_12";
		case 255:
			return "CCPRS_CNV_1";
		case 256:
			return "CCPRS_CNV_2";
		case 257:
			return "CCPRS_CNV_3";
		case 258:
			return "CCPRS_CNV_4";
		case 259:
			return "CCPRS_CNV_5";
		case 260:
			return "CCPRS_CNV_7";
		case 261:
			return "CCPRS_CNV_8";
		case 262:
			return "CCPRS_CNV_9";
		case 263:
			return "CCPRS_CNV_10";
		case 264:
			return "CCPRS_CNV_11";
		case 265:
			return "CCPRS_CNV_12";
		case 266:
			return "CCPRS_CNV_13";
		case 267:
			return "CCPRS_CNV_14";
		case 268:
			return "CCPRS_CNV_15";
		case 269:
			return "CCPRS_CNV_16";
		case 270:
			return "CCPRS_CNV_17";
		case 271:
			return "CCPRS_PAR_CNV1";
		case 272:
			return "CCSAD_CNV_1";
		case 273:
			return "CCSAD_CNV_2";
		case 274:
			return "CCSAD_CNV_3";
		case 275:
			return "CCSEN_CNV_1";
		case 276:
			return "CCSEN_CNV_2";
		case 277:
			return "CCSEN_CNV_3";
		case 278:
			return "CCSEN_CNV_4";
		case 279:
			return "CCSEN_CNV_5";
		case 280:
			return "CCSEN_CNV_6";
		case 281:
			return "CCSEN_CNV_7";
		case 282:
			return "CCSEN_CNV_8";
		case 283:
			return "CCSEN_CNV_9";
		case 284:
			return "CCSEN_CNV_10";
		case 285:
			return "CCSEN_CNV_11";
		case 286:
			return "CCSEN_CNV_12";
		case 287:
			return "CCSEN_CNV_13";
		case 288:
			return "CCSEN_CNV_14";
		case 289:
			return "CCSEN_CNV_15";
		case 290:
			return "CCSEN_CNV_16";
		case 291:
			return "CCSEN_CNV_17";
		case 292:
			return "CCSNK_PAR_CNV1";
		case 293:
			return "CCSNK_PAR_CNV2";
		case 294:
			return "CCSNK_PAR_CNV3";
		case 295:
			return "CCSSN_CNV_1";
		case 296:
			return "CCSSN_CNV_2";
		case 297:
			return "CCSSN_CNV_3";
		case 298:
			return "CCSSN_CNV_4";
		case 299:
			return "CCSSN_CNV_5";
		case 300:
			return "CCSSN_CNV_7";
		case 301:
			return "CCSSN_CNV_8";
		case 302:
			return "CCSSN_CNV_10";
		case 303:
			return "CCSSN_CNV_11";
		case 304:
			return "CCSSN_CNV_12";
		case 305:
			return "CCSSN_CNV_13";
		case 306:
			return "CCSSN_CNV_14";
		case 307:
			return "CCSSN_CNV_16";
		case 308:
			return "CCSSNUNC_CNV_1";
		case 309:
			return "CCSTR_CNV_2";
		case 310:
			return "CCSTR_CNV_3";
		case 311:
			return "CCSWN_CNV_6";
		case 312:
			return "CCSWN_CNV_7";
		case 313:
			return "CCSWN_CNV_8";
		case 314:
			return "CCSWN_CNV_9";
		case 315:
			return "CCSWN_CNV_10";
		case 316:
			return "CCSWN_CNV_11";
		case 317:
			return "CCSWN_CNV_12";
		case 318:
			return "CCSWN_CNV_13";
		case 319:
			return "CCSWN_CNV_14";
		case 320:
			return "CCSWN_CNV_15";
		case 321:
			return "CCSWN_CNV_16";
		case 322:
			return "CCSWN_CNV_17";
		case 323:
			return "CCSWN_CNV_19";
		case 324:
			return "CCSWN_CNV_21";
		case 325:
			return "CCSWN_CNV_22";
		case 326:
			return "CCTLL_CNV_1";
		case 327:
			return "CCTLL_CNV_2";
		case 328:
			return "CCTLL_CNV_3";
		case 329:
			return "CCTLL_CNV_4";
		case 330:
			return "CCTLL_CNV_5";
		case 331:
			return "CCTLL_CNV_6";
		case 332:
			return "CCTRL_CNV_1";
		case 333:
			return "CCTRL_CNV_3";
		case 334:
			return "CCUNC_CNV_1";
		case 335:
			return "CCUNC_CNV_2";
		case 336:
			return "CCUNC_CNV_3";
		case 337:
			return "CCUNC_CNV_4";
		case 338:
			return "CCUNC_CNV_5";
		case 339:
			return "CCUNC_CNV_6";
		case 340:
			return "CCUNC_CNV_7";
		case 341:
			return "CCUNC_CNV_8";
		case 342:
			return "CFAM_CNV_1";
		case 343:
			return "CFAR_CNV_1";
		case 344:
			return "CFAR_CNV_2";
		case 345:
			return "CFBW_CNV_1";
		case 346:
			return "CFBW_CNV_2";
		case 347:
			return "CFBW_CNV_3";
		case 348:
			return "CFBW_CNV_4";
		case 349:
			return "CFBW_CNV_5";
		case 350:
			return "CFBW_CNV_6";
		case 351:
			return "CFBLLMCH_CNV_1";
		case 352:
			return "CFCH_CNV_1";
		case 353:
			return "CFDV_CNV_1";
		case 354:
			return "CFDV_CNV_2";
		case 355:
			return "CFDV_CNV_3";
		case 356:
			return "CFDTCBLL_CNV_1";
		case 357:
			return "CFDTCJMBLL_CNV_1";
		case 358:
			return "CFHM_CNV_1";
		case 359:
			return "CFHM_CNV_2";
		case 360:
			return "CFHM_CNV_3";
		case 361:
			return "CFHM_CNV_4";
		case 362:
			return "CFHM_CNV_5";
		case 363:
			return "CFHM_CNV_6";
		case 364:
			return "CFHM_CNV_7";
		case 365:
			return "CFHM_CNV_8";
		case 366:
			return "CFHM_CNV_9";
		case 367:
			return "CFHS_CNV_1";
		case 368:
			return "CFHSHUNC_CNV_1";
		case 369:
			return "CFHSHUNC_CNV_2";
		case 370:
			return "CFHSHUNC_CNV_3";
		case 371:
			return "CFJE_CNV_1";
		case 372:
			return "CFJE_CNV_2";
		case 373:
			return "CFJE_CNV_3";
		case 374:
			return "CFJE_CNV_4";
		case 375:
			return "CFJE_CNV_5";
		case 376:
			return "CFJM_CNV_1";
		case 377:
			return "CFJM_CNV_2";
		case 378:
			return "CFJM_CNV_3";
		case 379:
			return "CFJM_CNV_4";
		case 380:
			return "CFJM_CNV_5";
		case 381:
			return "CFJM_CNV_6";
		case 382:
			return "CFKIESEN_CNV_1";
		case 383:
			return "CFKIESEN_CNV_2";
		case 384:
			return "CFKIESEN_CNV_3";
		case 385:
			return "CFLN_CNV_1";
		case 386:
			return "CFLN_CNV_2";
		case 387:
			return "CFMB_CNV_1";
		case 388:
			return "CFMB_CNV_2";
		case 389:
			return "CFMB_CNV_3";
		case 390:
			return "CFMB_CNV_4";
		case 391:
			return "CFMB_CNV_5";
		case 392:
			return "CFMB_CNV_6";
		case 393:
			return "CFMP_CNV_1";
		case 394:
			return "CFMP_CNV_2";
		case 395:
			return "CFMP_CNV_3";
		case 396:
			return "CFRS_CNV_1";
		case 397:
			return "CFRS_CNV_2";
		case 398:
			return "CFRS_CNV_3";
		case 399:
			return "CFRS_CNV_4";
		case 400:
			return "CFRS_CNV_5";
		case 403:
			return "CFSENLEN_CNV_1";
		case 401:
			return "CFSG_CNV_1";
		case 402:
			return "CFSG_CNV_2";
		case 404:
			return "CFSN_CNV_1";
		case 405:
			return "CFSN_CNV_2";
		case 406:
			return "CFSN_CNV_3";
		case 407:
			return "CFSSNBLL_CNV_1";
		case 408:
			return "CFSSNUNC_CNV_1";
		case 409:
			return "CFTL_CNV_1";
		case 410:
			return "CFTL_CNV_2";
		case 411:
			return "CFTL_CNV_3";
		case 412:
			return "CFTRLUNC_CNV_1";
		case 413:
			return "CFUN_CNV_1";
		case 414:
			return "CFUN_CNV_2";
		case 415:
			return "CFUN_CNV_3";
		case 416:
			return "CFUN_CNV_4";
		case 417:
			return "CFUN_CNV_5";
		case 418:
			return "CFUN_CNV_6";
		case 419:
			return "CFUNCBLL_CNV_1";
		case 420:
			return "CFUNCBLL_CNV_2";
		case 421:
			return "CFUNCBLL_CNV_3";
		case 422:
			return "CFUNCHR_CNV_1";
		case 423:
			return "CFUNCDTC_CNV_1";
		case 424:
			return "CFUNMCH_CNV_1";
		case 425:
			return "CFUNMCH_CNV_2";
		case 426:
			return "CFUNCPRS_CNV_1";
		case 427:
			return "CCABIJCK_SNG1_ES_HELL_BOUND_TRAIN";
		case 428:
			return "CCABIJCK_SNG1_ES_LITTLE_JOE_WRANGLER";
		case 429:
			return "CCABIJCK_SNG1_ES_NEVER_GET_DRUNK";
		case 430:
			return "CCABIJCK_SNG1_ES_WILD_ROVER";
		case 431:
			return "CCCHR_HARM_SNG_4";
		case 432:
			return "CCJAV_GUIT_SNG1";
		case 433:
			return "CCJAV_GUIT_SNG2";
		case 434:
			return "CCJAV_GUIT_SNG4";
		case 435:
			return "CCJAV_GUIT_SNG5";
		case 436:
			return "CCJAV_GUIT_SNG6";
		case 437:
			return "CCJCK_SNG1_ES_CLEMENTINE";
		case 438:
			return "CCJCK_SNG1_ES_LILY_OF_THE_VALLEY";
		case 439:
			return "CCJCK_SNG1_ES_OH_SHENENDOH";
		case 440:
			return "CCJCK_SNG1_ES_OH_SUSANNA";
		case 441:
			return "CCJCK_SNG1_ES_YELLOW_ROSE_OF_TEXAS";
		case 442:
			return "CCKAR_SNG1";
		case 443:
			return "CCKNSNUNJ_SNG1";
		case 444:
			return "CCPNKNJ_SNG1";
		case 445:
			return "CCPNS_CONC_SNG1";
		case 446:
			return "CCPNS_CONC_SNG4";
		case 447:
			return "CCPNS_CONC_SNG7";
		case 448:
			return "CCPRS_CONC_SNG5";
		case 449:
			return "CCPRS_CONC_SNG8";
		case 450:
			return "CCPSN_SNG1";
		case 451:
			return "CCSEN_SNG1_SPRIG_OF_SHILLELAH";
		case 452:
			return "CCSNK_SNG2";
		case 453:
			return "CCSNK_SNG3";
		case 454:
			return "CCSNKNJ_SNG1";
		case 455:
			return "CCSNKNJ_SNG2";
		case 458:
			return "CCSWN_SNG1_SIT_SING";
		case 459:
			return "CCSWN_SNG1_SIT_SING_SLEEP";
		case 457:
			return "CCSWN_SNG1_WANDER";
		case 456:
			return "CCSWN_SNG1_WNT";
		case 460:
			return "CCUNC_SNG1_DRUNK";
		case 461:
			return "CCUNC_SNG1_SOBER";
		case 462:
			return "CCUNC_SNG2";
		case 463:
			return "CCUNJNSNK_SNG1";
		case 464:
			return "CCUNP_SNG1";
		case 465:
			return "CCUNPNKNJ_SNG1";
		case 466:
			return "CCUNPNKNS_SNG1";
		case 467:
			return "CCUNPNSNJ_SNG2";
		case 468:
			return "CCUNPNSNJ_SNG3";
		case 469:
			return "CCUNS_SNG2";
		case 470:
			return "CCUNS_SNG3";
		case 471:
			return "CCUNSNJ_SNG1";
		case 472:
			return "CCUNSNK_SNG1";
		case 473:
			return "CCUNSNKNJ_SNG1";
		case 474:
			return "CCUNSNKNS_SNG1";
		case 475:
			return "CCBLL_WRK_CNV_1";
		case 476:
			return "CCBLL_WRK_CNV_2";
		case 477:
			return "CCHSH_WRK_CNV_1_P1";
		case 478:
			return "CCHSH_WRK_CNV_2";
		case 479:
			return "CCJAV_WRK_CNV_1";
		case 480:
			return "CCMCH_WRK_CNV_1";
		case 481:
			return "CCMCH_WRK_CNV_2";
		case 482:
			return "CCSWN_WRK_CNV_1";
		case 483:
			return "CCDTC_SPEECH_BVH_CNV1";
		case 484:
			return "CCDTC_SPEECH_CLM_CNV1";
		case 485:
			return "CCDTC_SPEECH_SDB_CNV1";
		case 486:
			return "CCPRS_SPEECH_LOW_FOOD_CNV1";
		case 487:
			return "CCSEN_SPEECH_HSO_CNV1";
		case 488:
			return "CCSSN_SPEECH_LOW_FOOD_CNV1";
		case 489:
			return "CCABI_ITM_CNV_1";
		case 490:
			return "CCBLL_ITM_CNV_1";
		case 491:
			return "CCCHR_ITM_CNV_1";
		case 492:
			return "CCCHR_ITM_CNV_2";
		case 493:
			return "CCCHR_ITM_CNV_3";
		case 494:
			return "CCDTC_ITM_CNV_1_GET";
		case 495:
			return "CCDTC_ITM_CNV_1_GOT";
		case 496:
			return "CCHSH_ITM_CNV_1";
		case 497:
			return "CCJAV_ITM_CNV_1";
		case 498:
			return "CCJCK_WLK_HSO_ITM_CNV1";
		case 499:
			return "CCKAR_ITM_CNV_1";
		case 500:
			return "CCKIE_ITM_CNV_1";
		case 501:
			return "CCLEN_ITM_CNV_2";
		case 502:
			return "CCMLL_ITM_CNV_1";
		case 503:
			return "CCMRB_ITM_CNV_2";
		case 504:
			return "CCPRS_ITM_CNV_1";
		case 505:
			return "CCSEN_ITM_CNV_1";
		case 506:
			return "CCSSN_ITM_CNV_2";
		case 507:
			return "CCUNC_ITM_CNV_1";
		case 508:
			return "BCABI_WLK_GEN_CNV1";
		case 509:
			return "BCABI_WLK_GEN_CNV2";
		case 510:
			return "BCABI_WLK_GEN_CNV3";
		case 511:
			return "BCCHR_WLK_GEN_CNV1";
		case 512:
			return "BCCHR_WLK_GEN_CNV2";
		case 513:
			return "BCUNC_WLK_GEN_CNV1";
		case 514:
			return "BCUNC_WLK_GEN_CNV2";
		case 515:
			return "BCUNC_WLK_GEN_CNV3";
		case 516:
			return "BCUNC_WLK_GEN_CNV4";
		case 517:
			return "CCABI_WLK_BVH_CNV1";
		case 518:
			return "CCABI_WLK_BVH_CNV2";
		case 519:
			return "CCABI_WLK_HSO_CNV1";
		case 520:
			return "CCABI_WLK_HSO_CNV2";
		case 521:
			return "CCBLL_WLK_BVH_CNV1";
		case 522:
			return "CCBLL_WLK_BVH_CNV2";
		case 523:
			return "CCBLL_WLK_BVH_CNV3";
		case 524:
			return "CCBLL_WLK_BVH_CNV4";
		case 525:
			return "CCBLL_WLK_COL_CNV1";
		case 526:
			return "CCBLL_WLK_GEN_CNV1";
		case 527:
			return "CCBLL_WLK_GEN_CNV2";
		case 528:
			return "CCBLL_WLK_REP_SOFT_CNV1";
		case 529:
			return "CCCHR_WLK_GEN_CNV1";
		case 530:
			return "CCDTC_CNV_9";
		case 531:
			return "CCDTC_CNV_26";
		case 532:
			return "CCDTC_CNV_27";
		case 533:
			return "CCDTC_WLK_AWAY_CNV1";
		case 534:
			return "CCDTC_WLK_CLM_CNV2";
		case 536:
			return "CCDTC_WLK_CLM_CNV4";
		case 543:
			return "CCDTC_WLK_DOWNES1";
		case 535:
			return "CCDTC_WLK_CLM_CNV3";
		case 537:
			return "CCDTC_WLK_DRK_CNV1";
		case 538:
			return "CCDTC_WLK_GRF_CNV1";
		case 539:
			return "CCDTC_WLK_GRF_CNV2";
		case 540:
			return "CCDTC_WLK_HSO_CNV1";
		case 541:
			return "CCDTC_WLK_HSO_CNV2";
		case 542:
			return "CCDTC_WLK_HSO_CNV3";
		case 544:
			return "CCDTC_WLK_MAYHEM_CNV1";
		case 545:
			return "CCDTC_WLK_MUD4";
		case 546:
			return "CCDTC_WLK_PAR_CNV1";
		case 547:
			return "CCDTC_WLK_REP_CRAZY_CNV1";
		case 548:
			return "CCDTC_WLK_REP_CRAZY_CNV2";
		case 549:
			return "CCDTC_WLK_SDB_CNV1";
		case 550:
			return "CCDTC_WLK_TITHE_CNV1";
		case 551:
			return "CCHSH_WLK_CLM_CNV1";
		case 552:
			return "CCHSH_WLK_HSO_CNV1";
		case 553:
			return "CCHSH_WLK_HSO_CNV2";
		case 554:
			return "CCHSH_WLK_SDB_CNV1";
		case 555:
			return "CCJAV_WLK_BVH_CNV1";
		case 556:
			return "CCJAV_WLK_BVH_CNV2";
		case 557:
			return "CCJAV_WLK_CLM_CNV1";
		case 558:
			return "CCJAV_WLK_SDB_CNV1";
		case 559:
			return "CCKAR_WLK_CLM_CNV1";
		case 560:
			return "CCKAR_WLK_GEN_CNV1";
		case 561:
			return "CCKAR_WLK_GEN_CNV2";
		case 562:
			return "CCKAR_WLK_GEN_CNV3";
		case 563:
			return "CCKIE_WLK_HSO_CNV1";
		case 564:
			return "CCKIE_WLK_PAR_CNV1";
		case 565:
			return "CCKIE_WLK_GEN_CNV1";
		case 566:
			return "CCLEN_WLK_COL_CNV1";
		case 567:
			return "CCMCH_WLK_BVH_CNV1";
		case 568:
			return "CCMCH_WLK_CLM_CNV1";
		case 569:
			return "CCMCH_WLK_COL_CNV1";
		case 570:
			return "CCMCH_WLK_GEN_CNV1";
		case 571:
			return "CCMCH_WLK_GEN_CNV2";
		case 572:
			return "CCMCH_WLK_GEN_CNV3";
		case 573:
			return "CCMCH_WLK_GEN_CNV4";
		case 574:
			return "CCMCH_WLK_GEN_CNV5";
		case 575:
			return "CCMCH_WLK_REP_SOFT_CNV1";
		case 576:
			return "CCMCH_WLK_REP_SOFT_CNV2";
		case 577:
			return "CCMCH_WLK_REP_SOFT_CNV3";
		case 578:
			return "CCMRB_WLK_GEN_CNV1";
		case 579:
			return "CCMRB_WLK_HSO_CNV1";
		case 580:
			return "CCMRB_WLK_HSO_CNV2";
		case 581:
			return "CCMRB_WLK_SDB_CNV1";
		case 582:
			return "CCPRS_WLK_GEN_CNV1";
		case 583:
			return "CCPRS_WLK_LOW_FOOD_CNV1";
		case 584:
			return "CCPRS_WLK_LOW_FOOD_URG_CNV1";
		case 585:
			return "CCSAD_WLK_BVH_CNV1";
		case 586:
			return "CCSAD_WLK_HSO_CNV1";
		case 587:
			return "CCSEN_WLK_PAR_CNV1";
		case 588:
			return "CCSSN_CNV_6";
		case 589:
			return "CCSSN_WLK_AWAY_CNV1";
		case 590:
			return "CCSSN_WLK_AWAY_CNV2";
		case 591:
			return "CCSSN_WLK_BVH_CNV1";
		case 592:
			return "CCSSN_WLK_BVH_CNV2";
		case 593:
			return "CCSSN_WLK_BVH_CNV3";
		case 594:
			return "CCSSN_WLK_GEN_CNV1";
		case 595:
			return "CCSSN_WLK_GRF_MAYHEM_CNV1";
		case 596:
			return "CCSSN_WLK_HOMEROB_CNV1";
		case 597:
			return "CCSSN_WLK_HSO_CNV1";
		case 598:
			return "CCSSN_WLK_HSO_CNV2";
		case 599:
			return "CCSSN_WLK_HSO_CNV3";
		case 600:
			return "CCSSN_WLK_HSO_CNV4";
		case 601:
			return "CCSSN_WLK_HSO_CNV5";
		case 602:
			return "CCSSN_WLK_HSO_CNV6";
		case 603:
			return "CCSSN_WLK_HSO_CNV7";
		case 604:
			return "CCSSN_WLK_LOW_FOOD_CNV1";
		case 605:
			return "CCSSN_WLK_REP_CRAZY_CNV1";
		case 606:
			return "CCSSN_WLK_REP_CRAZY_CNV2";
		case 607:
			return "CCSSN_WLK_REP_CRAZY_CNV3";
		case 608:
			return "CCSSN_WLK_SDB_CNV1";
		case 609:
			return "CCSSN_WLK_SDB_CNV2";
		case 610:
			return "CCSSN_WLK_TITHE_CNV1";
		case 611:
			return "CCSTR_CNV_4";
		case 612:
			return "CCSWN_CNV_18";
		case 613:
			return "CCSWN_WLK_BVH_CNV1";
		case 614:
			return "CCSWN_WLK_GEN_CNV1";
		case 615:
			return "CCSWN_WLK_GEN_CNV2";
		case 616:
			return "CCSWN_WLK_GEN_CNV4";
		case 617:
			return "CCSWN_WLK_GEN_CNV5";
		case 618:
			return "CCSWN_WLK_HSO_CNV1";
		case 619:
			return "CCSWN_WLK_HSO_CNV2";
		case 620:
			return "CCSWN_WLK_HSO_CNV3";
		case 621:
			return "CCSWN_WLK_SDB_CNV1";
		case 622:
			return "CCSWN_WLK_SDB_CNV2";
		case 623:
			return "CCTLL_WLK_GEN_CNV1";
		case 624:
			return "CCTLL_WLK_GEN_CNV2";
		case 625:
			return "CCTLL_WLK_HSO_CNV1";
		case 626:
			return "CCTRL_WLK_BVH_CNV1";
		case 627:
			return "CCTRL_WLK_CLM_CNV1";
		case 628:
			return "CCTRL_WLK_CLM_CNV2";
		case 629:
			return "CCTRL_WLK_CLM_CNV3";
		case 630:
			return "CCTRL_WLK_GEN_CNV1";
		case 631:
			return "CCUNC_WLK_BVH_CNV1";
		case 632:
			return "CCUNC_WLK_CLM_CNV1";
		case 633:
			return "CCUNC_WLK_GEN_CNV1";
		case 634:
			return "CCUNC_WLK_GEN_CNV2";
		case 635:
			return "CCUNC_WLK_GEN_CNV3";
		case 636:
			return "BCABI_CNV_1";
		case 637:
			return "BCABI_CNV_2";
		case 638:
			return "BCABI_CNV_4";
		case 639:
			return "BCABI_CNV_5";
		case 640:
			return "BCABI_CNV_6";
		case 641:
			return "BCABI_CNV_7";
		case 642:
			return "BCABI_SLP_CNV_1";
		case 643:
			return "BCABI_SLP_CNV_2";
		case 644:
			return "BCABI_SLP_CNV_3";
		case 645:
			return "BCABI_SLP_CNV_4";
		case 646:
			return "BCANC_CNV_1";
		case 647:
			return "BCANJ_CNV_1";
		case 648:
			return "BCANJ_CNV_2";
		case 649:
			return "BCANJ_CNV_3";
		case 650:
			return "BCANJ_CNV_4";
		case 651:
			return "BCANU_CNV_1";
		case 652:
			return "BCCHR_CNV_1";
		case 653:
			return "BCCHR_CNV_2";
		case 654:
			return "BCCHR_CNV_3";
		case 655:
			return "BCCHR_CNV_5";
		case 656:
			return "BCCNU_CNV_1";
		case 657:
			return "BCCNU_CNV_2";
		case 658:
			return "BCCNU_CNV_3";
		case 659:
			return "BCCNU_CNV_4";
		case 660:
			return "BCCNU_CNV_5";
		case 661:
			return "BCCNJ_CNV_1";
		case 662:
			return "BCJCK_CNV_1";
		case 663:
			return "BCJCK_CNV_3";
		case 664:
			return "BCJCK_CNV_4";
		case 665:
			return "BCJCK_CNV_5";
		case 666:
			return "BCJCK_CNV_6";
		case 667:
			return "BCUNC_CNV_1";
		case 668:
			return "BCUNC_CNV_2";
		case 669:
			return "BCUNC_CNV_4";
		case 670:
			return "BCUNC_CNV_6";
		case 671:
			return "BCUNC_CNV_7";
		case 672:
			return "BCUNJ_CNV_1";
		default:
			break;
	}
	return "UNDEFINED";
}

bool func_73(var uParam0)
{
	return false;
}

bool func_74(var uParam0)
{
	if (func_148(uParam0))
	{
		func_37(uParam0);
		return true;
	}
	if (func_149(uParam0))
	{
		if (func_34(uParam0) == 4 && !uParam0->f_2262)
		{
			if (!func_150(uParam0) || uParam0->f_16)
			{
				uParam0->f_2262 = 1;
				return false;
			}
		}
		func_151(uParam0);
		uParam0->f_9 = 1;
		return true;
	}
	return false;
}

void func_75(int iParam0)
{
	Global_1327590.f_11465[iParam0 /*10*/].f_5 = func_152();
}

bool func_76(var uParam0)
{
	switch (func_153(uParam0))
	{
		case 1:
			func_154(uParam0, 130, 0, 0, 0);
			break;
		case 2:
			func_155(uParam0, 653.448f, -1252.911f, 42.464f, -1.525f, 0.0f, 125.82f);
			break;
			break;
		case 3:
			func_155(uParam0, 1891.541f, -1867.241f, 41.98f, 0.0f, 0.0f, -31.88f);
			break;
		default:
			return false;
	}
	func_156(uParam0, 0, 0);
	func_157(uParam0, 0.624f, -2.879f, 0.0f, 0.0f, 1.0f, 1.0f, 5.0f, joaat("VOLBOX"), joaat("APMS_COMP_DUTCH"), 1, 1, 1);
	func_157(uParam0, 0.624f, -4.1415f, 0.0f, 0.0f, 1.0f, 1.0f, 5.0f, joaat("VOLBOX"), -1, 1, 1, 1);
	if (func_21(uParam0) == 494)
	{
		iLocal_17 = func_158(uParam0, joaat("P_CIGAR02X"), 0.0f, 0.0f, 0.0f, "CIGAR", 0, 0, 1);
		iLocal_15 = func_159(uParam0, "script@vignette@itm@dutch_item_1@action_request", 0, 0, 0, 1);
		func_160(uParam0, iLocal_14, 3, joaat("WORLD_CAMP_DUTCH_SMOKE_CIGAR"), "WORLD_CAMP_DUTCH_SMOKE_CIGAR_MALE_A", -1, 1);
		func_161(uParam0, iLocal_14, 2, joaat("WORLD_CAMP_DUTCH_SMOKE_CIGAR"), "WORLD_CAMP_DUTCH_SMOKE_CIGAR_MALE_A", -1, 1, -1073741824, 1065353216, 1);
		func_162(uParam0, iLocal_14, iLocal_17, "p_cigar02x_PH_R_HAND", 0, 0);
		func_163(5);
	}
	if (func_21(uParam0) == 495)
	{
		func_158(uParam0, joaat("P_PIPE01X"), 0.0f, 0.0f, 0.0f, "PIPE", 0, 1, 1);
		func_158(uParam0, joaat("P_PLAYER_SPURS023"), 0.0f, 0.0f, 0.0f, "SPURS", 0, 1, 1);
		func_160(uParam0, iLocal_14, 3, joaat("STAND"), 0, -1, 1);
		iLocal_15 = func_159(uParam0, "script@vignette@itm@dutch_item_1@item_aquired", 2, 1, 0, 1);
		iLocal_16 = func_159(uParam0, "script@vignette@itm@dutch_item_1@action_exchange", 0, 0, 0, 1);
	}
	func_164(uParam0, "CDTI1AU");
	func_165(uParam0, iLocal_14, 4, 2, 0, 0, 0);
	func_166(uParam0, iLocal_14, 2, -1);
	sLocal_18 = { func_167(uParam0, 0.6245f, -2.8792f, 1.1559f, -177.149f, 5.5f, 0.65f, 0.65f) /*10*/ };
	func_168(uParam0, 1);
	if (func_169(10))
	{
		func_170(uParam0);
		func_171(uParam0, iLocal_14, 4);
		func_172(uParam0, iLocal_14, 1);
		func_173(uParam0, 1);
	}
	return true;
}

bool func_77(var uParam0)
{
	if (uParam0->f_106 <= 0 || uParam0->f_106 > 14)
	{
		return false;
	}
	PED::_RESERVE_AMBIENT_PEDS(uParam0->f_106);
	func_174(uParam0);
	func_175(uParam0);
	func_176(uParam0);
	func_177(uParam0);
	func_178(uParam0);
	func_179(uParam0);
	func_180(uParam0, uParam0->f_17);
	return true;
}

bool func_78(var uParam0)
{
	return true;
}

bool func_79(var uParam0)
{
	return true;
}

bool func_80(var uParam0)
{
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	if (!func_181(uParam0))
	{
		return false;
	}
	return true;
}

bool func_81(var uParam0)
{
	return true;
}

bool func_82(var uParam0)
{
	return true;
}

bool func_83(var uParam0)
{
	func_182(uParam0, uParam0->f_23, uParam0->f_26);
	func_183(uParam0);
	if (!func_184(uParam0))
	{
		return false;
	}
	func_180(uParam0, uParam0->f_19);
	return true;
}

bool func_84(var uParam0)
{
	return true;
}

bool func_85(var uParam0)
{
	return true;
}

bool func_86(var uParam0)
{
	if (uParam0->f_2248)
	{
		return true;
	}
	if (!uParam0->f_71)
	{
		if (!uParam0->f_2249)
		{
			if (!func_185(uParam0))
			{
				return false;
			}
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		uParam0->f_2248 = 1;
		return true;
	}
	if (!func_186(uParam0))
	{
		return false;
	}
	return true;
}

bool func_87(var uParam0)
{
	return true;
}

bool func_88(var uParam0)
{
	return true;
}

bool func_89(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (func_54(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			func_59(uParam0->f_107[iVar0 /*113*/].f_1, 46, 1);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (func_187(uParam0, iVar0))
			{
			}
			else if (uParam0->f_2047 >= 0 && uParam0->f_2047 < uParam0->f_1984)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1984[uParam0->f_2047]))
				{
					if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_1984[uParam0->f_2047], uParam0->f_107[iVar0 /*113*/].f_4))
					{
						func_188(uParam0, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
	func_189(uParam0);
	func_190(uParam0, 1);
	func_191(uParam0);
	func_192(uParam0);
	func_193(uParam0, (1 << 30));
	func_194(uParam0);
	func_195(uParam0);
	func_196(uParam0);
	func_197(uParam0);
	func_198(uParam0);
	func_199(uParam0);
	func_200(uParam0);
	if (uParam0->f_15)
	{
		func_180(uParam0, uParam0->f_20);
	}
	else
	{
		func_201(uParam0);
	}
	if (uParam0->f_2047 >= 0)
	{
		func_202(uParam0);
		func_203(uParam0, uParam0->f_2047, 1);
	}
	else if (uParam0->f_2248)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				func_188(uParam0, iVar0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_107[iVar0 /*113*/].f_5, false, true);
				TASK::TASK_USE_SCENARIO_POINT(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23, uParam0->f_107[iVar0 /*113*/].f_8.f_2, 0, false, true, 0, false, -1.0f, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_107[iVar0 /*113*/].f_5, false, false);
			}
			iVar0++;
		}
	}
	return true;
}

bool func_90(var uParam0)
{
	struct<4> /*32*/ sVar0;

	func_205(func_204(uParam0, iLocal_17), 0);
	if (func_21(uParam0) == 495)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1984[iLocal_15], "ARTHUR", &sVar0, false, 0, 2))
			{
				func_206(&sVar0, 3, 2, 0);
				ENTITY::SET_ENTITY_COORDS(Global_35, sVar0, true, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(Global_35, sVar0.f_3, 2, true);
			}
		}
	}
	return true;
}

int func_91(var uParam0)
{
	if (func_21(uParam0) == 495)
	{
		return CAM::IS_SCREEN_FADED_IN();
	}
	return func_207(uParam0);
}

bool func_92(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5))
		{
			PED::SET_PED_RESET_FLAG(uParam0->f_107[iVar0 /*113*/].f_5, 256 /*PRF_0x4779AF94*/, true);
		}
		iVar0++;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_51(uParam0, "Shared Idle - Screen is faded out", 1, -1);
		return false;
	}
	if (uParam0->f_2262)
	{
		return true;
	}
	if (func_208(uParam0))
	{
		return true;
	}
	return false;
}

bool func_93(var uParam0)
{
	return true;
}

bool func_94(var uParam0)
{
	if (func_21(uParam0) == 495)
	{
		return true;
	}
	func_8(&iLocal_29, 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(func_9(uParam0, iLocal_14)))
	{
		PED::_0x32CCAD8A981B53D3(func_9(uParam0, iLocal_14));
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), func_9(uParam0, iLocal_14), sLocal_31, 0.0f, 0.0f, 0.0f, 0, sLocal_31);
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(func_9(uParam0, iLocal_14));
	}
	func_203(uParam0, iLocal_15, 1);
	return true;
}

bool func_95(var uParam0)
{
	int iVar0;

	if (!uParam0->f_2265)
	{
		func_209(uParam0->f_2, 1);
	}
	iVar0 = func_210(func_21(uParam0));
	func_211(iVar0);
	Global_1327590.f_19622[iVar0 /*14*/].f_5++;
	Global_1327590.f_19622[iVar0 /*14*/].f_7++;
	if (uParam0->f_5)
	{
		func_212();
	}
	func_130(&(uParam0->f_10));
	func_213(uParam0);
	if (uParam0->f_2048 >= 0)
	{
		func_203(uParam0, uParam0->f_2048, 1);
	}
	func_214(uParam0);
	MISC::_0xB08C4FA25BC29DB9(func_32(uParam0->f_2));
	return true;
}

bool func_96(var uParam0)
{
	return true;
}

bool func_97(var uParam0)
{
	if (func_215(func_9(uParam0, iLocal_14), -1457502635))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sLocal_31);
		if (func_21(uParam0) == 494)
		{
			func_216(5, 0, 1);
		}
	}
	if (func_21(uParam0) == 495)
	{
		if (func_215(Global_35, 542984997))
		{
			func_217(joaat("CLOTHING_HL_PLAYER_SPURS_023_1"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		}
		if (func_218(uParam0, iLocal_15))
		{
			func_203(uParam0, iLocal_16, 1);
		}
	}
	return true;
}

bool func_98(var uParam0)
{
	if (func_22(func_21(uParam0)))
	{
		func_219();
		func_220();
		PED::SET_PED_RESET_FLAG(Global_35, 189 /*PRF_0x686ECAF3*/, true);
		if (!func_221(4))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 129 /*PRF_DisableAmbientPrompts*/, true);
		}
	}
	func_222(uParam0);
	func_223(uParam0);
	func_224(uParam0);
	if (!func_225(uParam0))
	{
		return false;
	}
	if (func_29(func_21(uParam0)))
	{
		func_35(func_21(uParam0), uParam0->f_2266);
	}
	return true;
}

bool func_99(var uParam0)
{
	if (func_21(uParam0) == 495)
	{
		func_226(joaat("PROVISION_COMP_DUTCH_PIPE"), 1, 0, joaat("REMOVE_REASON_GIVEN"), 0);
	}
	return true;
}

bool func_100(var uParam0)
{
	return true;
}

bool func_101(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar1 /*113*/].f_5))
		{
		}
		else
		{
			if (uParam0->f_107[iVar1 /*113*/].f_8 == 3)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar1 /*113*/].f_8.f_23))
				{
					if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_107[iVar1 /*113*/].f_5, uParam0->f_107[iVar1 /*113*/].f_8.f_23))
					{
						TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar1 /*113*/].f_8.f_23);
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
			if (uParam0->f_107[iVar1 /*113*/].f_32.f_1 == 3)
			{
				if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar1 /*113*/].f_32.f_21))
				{
					if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_107[iVar1 /*113*/].f_5, uParam0->f_107[iVar1 /*113*/].f_32.f_21))
					{
						TASK::_DELETE_SCENARIO_POINT(uParam0->f_107[iVar1 /*113*/].f_32.f_21);
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_102(int iParam0)
{
	return func_227(iParam0, 2);
}

void func_103(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_228(vParam0))
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
			if (func_229(vVar2, vParam0, 2.0f, 1))
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

int func_104(int iParam0)
{
	if (iParam0 >= 9)
	{
		return (1 << 31);
	}
	else if (iParam0 >= 6)
	{
		return 32;
	}
	else if (iParam0 >= 3)
	{
		return 16;
	}
	return 8;
}

void func_105(int iParam0, int iParam1)
{
	if (!func_54(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_140 -= (Global_1360165[iParam0 /*1157*/].f_140 & iParam1);
	Global_1360165[iParam0 /*1157*/].f_141 -= (Global_1360165[iParam0 /*1157*/].f_141 & iParam1);
}

void func_106(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_107(iParam0, 50, 1);
		func_107(iParam0, 48, 1);
		func_107(iParam0, 49, 1);
		func_107(iParam0, 51, 1);
		func_107(iParam0, 52, 1);
		func_107(iParam0, 54, 1);
		func_107(iParam0, 55, 1);
	}
	else
	{
		func_59(iParam0, 50, 1);
		func_59(iParam0, 48, 1);
		func_59(iParam0, 49, 1);
		func_59(iParam0, 51, 1);
		if (bParam3)
		{
			func_59(iParam0, 54, 1);
		}
		else
		{
			func_107(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_59(iParam0, 52, 1);
			if (bParam3)
			{
				func_59(iParam0, 55, 1);
			}
		}
		else
		{
			func_107(iParam0, 52, 1);
			if (!bParam3)
			{
				func_107(iParam0, 55, 1);
			}
		}
	}
}

void func_107(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return;
		}
	}
	func_119(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_108(int iParam0)
{
	return iParam0 > -1;
}

int func_109(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

bool func_110(int iParam0)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

void func_111(int iParam0, int iParam1, bool bParam2)
{
	if (!func_108(iParam0))
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

int func_112(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_108(iParam0))
	{
		return 0;
	}
	iVar0 = func_109(iParam0);
	if (func_125(iVar0, 0))
	{
		if (func_125(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_110(iParam0)) || func_55(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_230(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000.0f))
			{
				iVar1 = func_231(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_232(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_233(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_233(iParam0, 0));
					func_234(iParam0);
				}
			}
			else
			{
				if (func_235(iParam0, (1 << 15), 1))
				{
					iVar2 = func_233(iParam0, 0);
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
		if (func_125(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_235(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_232(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_233(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_233(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_232(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_236(iParam0, 0);
	return 1;
}

bool func_113(var uParam0)
{
	return func_237(*uParam0, 1);
}

float func_114(var uParam0)
{
	if (!func_113(uParam0))
	{
		return 0.0f;
	}
	if (func_238(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_239() - uParam0->f_1);
}

int func_115(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DUTCH");
		case 1:
			return joaat("JOHN");
		case 2:
			return joaat("JAVIER");
		case 3:
			return joaat("BILL");
		case 4:
			return joaat("UNCLE");
		case 5:
			return joaat("HOSEA");
		case 6:
			return joaat("MICAH");
		case 7:
			return joaat("CHARLES");
		case 8:
			return joaat("SEAN");
		case 9:
			return joaat("LENNY");
		case 10:
			return joaat("KIERAN");
		case 11:
			return joaat("SADIE");
		case 12:
			return 0;
		case 13:
			return joaat("ABIGAIL");
		case 14:
			return joaat("JACK");
		case 15:
			return joaat("MARYBETH");
		case 16:
			return joaat("MOLLY");
		case 17:
			return joaat("PEARSON");
		case 18:
			return joaat("STRAUSS");
		case 19:
			return joaat("GRIMSHAW");
		case 20:
			return joaat("KAREN");
		case 21:
			return joaat("SWANSON");
		case 22:
			return joaat("TILLY");
		case 23:
			return joaat("TRELAWNY");
		case 26:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_116(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_239() - fParam1);
	func_240(uParam0, 1);
	func_241(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_117()
{
	if (func_242() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0)
{
	return func_235(iParam0, 16, 1);
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_120(var uParam0, bool bParam1)
{
	if (bParam1 || !func_113(uParam0))
	{
		func_243(uParam0);
	}
}

void func_121(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_244(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_122(iParam0, 1, 0);
		}
	}
	func_122(iParam0, 16, bParam1);
}

void func_122(int iParam0, int iParam1, bool bParam2)
{
	if (!func_108(iParam0))
	{
		return;
	}
	func_245(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_123(int iParam0)
{
	func_122(iParam0, 8, 0);
}

void func_124(int iParam0)
{
	func_59(iParam0, 36, 1);
}

bool func_125(int iParam0, int iParam1)
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
	if (func_246(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_246(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_246(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_246(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_246(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_246(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_246(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_246(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_126(int iParam0, bool bParam1)
{
	if (!func_54(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_247(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_127(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return false;
		}
	}
	func_119(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_54(iParam0))
	{
		iVar1 = func_248(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179 /*PCF_0x605C7288*/, true);
			func_249(iParam0);
		}
	}
	if (func_127(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_248(iParam0), 137 /*PCF_0xE18960DE*/, true);
	}
}

void func_129(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_248(iParam0), 204 /*PCF_0x435F091E*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_248(iParam0), 204 /*PCF_0x435F091E*/, false);
	}
}

void func_130(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_131(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_54(iParam0))
	{
		return;
	}
	if (func_118(iParam0))
	{
		if (!func_58(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_127(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_126(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_248(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_250(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
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
		func_59(iParam0, 2, 1);
	}
	else
	{
		func_251(iParam0);
		func_59(iParam0, 1, 1);
	}
}

void func_132(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= (Global_40.f_4942[iParam0 /*60*/] & iParam1);
}

bool func_133(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return false;
	}
	if (!func_61(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

bool func_134(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_135(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return;
	}
	if (!func_61(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= (Global_24887[iParam0 /*2*/] & iParam1);
}

void func_136(int iParam0)
{
	int iVar0;

	if (!func_61(iParam0))
	{
		return;
	}
	iVar0 = func_252(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

int func_137(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_138(int iParam0)
{
	return iParam0 != 0;
}

int func_139(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

int func_140(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	if (func_137(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_139(iParam0)))
	{
		return 1;
	}
	if (func_133(iParam0, 1) && !bParam1)
	{
		func_253(iParam0, 128);
		return 1;
	}
	func_135(iParam0, 129);
	func_136(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_139(iParam0));
	func_254(iParam0, 0);
	return 1;
}

int func_141(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_142(int iParam0, int iParam1)
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

void func_143(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_65(*iParam0);
	iVar1 = func_64(*iParam0);
	if (iParam1 < 1 || iParam1 > func_70(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_145(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_146(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_147(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_148(var uParam0)
{
	int iVar0;

	if (func_46(uParam0))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return true;
	}
	if (Global_1935630.f_12)
	{
		return true;
	}
	if (!func_255())
	{
		return true;
	}
	if (func_256(Global_1935630, (1 << 14)))
	{
		return true;
	}
	if (func_257(2))
	{
		return true;
	}
	if (!uParam0->f_3)
	{
		if (func_257(1))
		{
			return true;
		}
	}
	if (uParam0->f_4)
	{
		if (!func_258(1))
		{
			return true;
		}
	}
	if (Global_1357549.f_1614 || func_259(4))
	{
		return true;
	}
	if (Global_18)
	{
		return true;
	}
	if (func_260(uParam0->f_22))
	{
		if (!uParam0->f_3 && !Global_1327590.f_19736)
		{
			return true;
		}
	}
	else
	{
		uParam0->f_22 = func_30();
		func_31(&(uParam0->f_22), 0, 0, 1, 0, 0, 0, 0);
	}
	if (func_261())
	{
		if (!Global_1327590.f_19735 && !uParam0->f_8)
		{
			return true;
		}
	}
	if (func_262(1030, 1, 1))
	{
		if (!Global_1327590.f_19734 && !uParam0->f_8)
		{
			return true;
		}
	}
	else if (uParam0->f_8)
	{
		uParam0->f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_54(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else
		{
			if (func_263(uParam0->f_107[iVar0 /*113*/].f_1, (1 << 11)))
			{
				return true;
			}
			if (func_34(uParam0) < 5)
			{
				if (func_127(uParam0->f_107[iVar0 /*113*/].f_1, 29, 1) || func_264(uParam0->f_107[iVar0 /*113*/].f_1))
				{
					return true;
				}
				if (!uParam0->f_3)
				{
					if (func_118(uParam0->f_107[iVar0 /*113*/].f_1) && !func_58(uParam0->f_107[iVar0 /*113*/].f_1))
					{
						func_35(func_21(uParam0), 30);
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_149(var uParam0)
{
	if (func_34(uParam0) >= 5)
	{
		return false;
	}
	if (uParam0->f_9)
	{
		return true;
	}
	if (!uParam0->f_3)
	{
		if (!func_265(uParam0->f_2))
		{
			return true;
		}
	}
	if (func_266(uParam0))
	{
		return true;
	}
	if (uParam0->f_6)
	{
		if (func_267() | func_268())
		{
			if (func_34(uParam0) == 4)
			{
				if (func_269(uParam0))
				{
					return true;
				}
				else
				{
					func_51(uParam0, "Player just donated - waiting for peds to be offscreen to abort", 30, -1);
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_150(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			if (!func_54(uParam0->f_107[iVar0 /*113*/].f_1))
			{
				return false;
			}
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				return false;
			}
			if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				return false;
			}
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, 0))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_151(var uParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (!func_54(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (!func_58(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
		{
			if (PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(20.0f, 60.0f);
				func_59(uParam0->f_107[iVar0 /*113*/].f_1, 68, 1);
				func_60(uParam0->f_107[iVar0 /*113*/].f_1, 0, 0, 0, fVar1, 1, 1, 0, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

var func_152()
{
	return Global_1899515;
}

int func_153(var uParam0)
{
	return uParam0->f_1;
}

void func_154(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	uParam0->f_23 = { func_270(iParam1) + Vector(fParam4, fParam3, fParam2) /*3*/ };
	uParam0->f_26 = { func_271(iParam1) /*3*/ };
}

void func_155(var uParam0, Vector3 vParam1, Vector3 vParam4)
{
	uParam0->f_23 = { vParam1 /*3*/ };
	uParam0->f_26 = { vParam4 /*3*/ };
}

int func_156(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = func_272(iParam1);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (uParam0->f_107[iVar0 /*113*/])
		{
		}
		else
		{
			uParam0->f_107[iVar0 /*113*/] = 1;
			uParam0->f_107[iVar0 /*113*/].f_1 = iParam1;
			uParam0->f_107[iVar0 /*113*/].f_4 = sParam2;
			uParam0->f_106++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_157(var uParam0, Vector3 vParam1, float fParam4, Vector3 vParam5, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12)
{
	int iVar0;

	if (bParam10)
	{
		vParam1 = { func_273(uParam0, vParam1) /*3*/ };
		fParam4 = func_274(uParam0, fParam4);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
		{
			uParam0->f_36[iVar0 /*5*/] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam8, vParam1, 0.0f, 0.0f, fParam4, vParam5, "volBlockPeds");
			uParam0->f_36[iVar0 /*5*/].f_1 = iParam9;
			uParam0->f_36[iVar0 /*5*/].f_2 = iParam11;
			uParam0->f_36[iVar0 /*5*/].f_3 = iParam12;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_158(var uParam0, int iParam1, Vector3 vParam2, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			uParam0->f_1711[iVar0 /*15*/] = iParam1;
			uParam0->f_1711[iVar0 /*15*/].f_1 = { vParam2 /*3*/ };
			uParam0->f_1711[iVar0 /*15*/].f_4 = sParam5;
			uParam0->f_1711[iVar0 /*15*/].f_5 = iParam6;
			uParam0->f_1711[iVar0 /*15*/].f_6 = iParam7;
			uParam0->f_1711[iVar0 /*15*/].f_8 = iParam8;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_159(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1984[iVar0]))
		{
		}
		else
		{
			uParam0->f_1984[iVar0] = ANIMSCENE::_CREATE_ANIM_SCENE(sParam1, iParam2, 0, false, true);
			if (bParam3)
			{
				uParam0->f_2047 = iVar0;
			}
			if (bParam4)
			{
				uParam0->f_2048 = iVar0;
			}
			if (bParam5)
			{
				uParam0->f_2015[iVar0] = 1;
			}
			uParam0->f_1983++;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_160(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	uParam0->f_107[iParam1 /*113*/].f_8 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_8.f_1 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_8.f_2 = sParam4;
	uParam0->f_107[iParam1 /*113*/].f_8.f_7 = iParam5;
	uParam0->f_107[iParam1 /*113*/].f_8.f_8 = iParam6;
}

void func_161(var uParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_1 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_2 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_3 = sParam4;
	uParam0->f_107[iParam1 /*113*/].f_32.f_15 = iParam5;
	uParam0->f_107[iParam1 /*113*/].f_32.f_9 = iParam6;
	uParam0->f_107[iParam1 /*113*/].f_32.f_11 = iParam8;
	uParam0->f_107[iParam1 /*113*/].f_32.f_12 = iParam9;
	func_275(uParam0, iParam1, fParam7);
}

void func_162(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	int iVar0;

	uParam0->f_1711[iParam2 /*15*/].f_11 = sParam3;
	uParam0->f_1711[iParam2 /*15*/].f_12 = iParam5;
	uParam0->f_1711[iParam2 /*15*/].f_7 = iParam4;
	if (uParam0->f_1711[iParam2 /*15*/].f_7)
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_20 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0] >= 0)
		{
		}
		else
		{
			uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0] = iParam2;
			return;
		}
		iVar0++;
	}
}

void func_163(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_40.f_6563[iVar0 /*27*/] == iParam0)
		{
			func_276(&(Global_40.f_6563[iVar0 /*27*/]));
			func_277(iVar0);
			func_278(iVar0);
			func_279();
			return;
		}
		iVar0++;
	}
}

void func_164(var uParam0, char* sParam1)
{
	strcpy_s(&(uParam0->f_2232), 32, sParam1);
}

void func_165(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_32 = iParam2;
	uParam0->f_107[iParam1 /*113*/].f_32.f_33 = iParam3;
	uParam0->f_107[iParam1 /*113*/].f_32.f_34 = iParam4;
	strcpy_s(&(uParam0->f_107[iParam1 /*113*/].f_32.f_23), 32, sParam5);
	strcpy_s(&(uParam0->f_107[iParam1 /*113*/].f_32.f_28), 32, sParam6);
}

void func_166(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_107[iParam1 /*113*/].f_32.f_55 = iParam2;
	if (iParam3 < 0)
	{
		switch (iParam2)
		{
			case 1:
				uParam0->f_107[iParam1 /*113*/].f_32.f_59 = 45;
				break;
			case 2:
				uParam0->f_107[iParam1 /*113*/].f_32.f_59 = 60;
				break;
			case 3:
				uParam0->f_107[iParam1 /*113*/].f_32.f_59 = 120;
				break;
		}
	}
	else
	{
		uParam0->f_107[iParam1 /*113*/].f_32.f_59 = iParam3;
	}
}

struct<10> /*80*/ func_167(var uParam0, Vector3 vParam1, float fParam4, float fParam5, float fParam6, float fParam7)
{
	float fVar0;
	float fVar1;
	struct<10> /*80*/ sVar2;

	fVar0 = func_274(uParam0, (fParam4 + (fParam6 * 90.0f)));
	fVar1 = func_274(uParam0, (fParam4 - (fParam7 * 90.0f)));
	sVar2 = { func_273(uParam0, vParam1) /*3*/ };
	sVar2.f_3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(sVar2, fVar0, 0.0f, fParam5, 0.0f) /*3*/ };
	sVar2.f_6 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(sVar2, fVar1, 0.0f, fParam5, 0.0f) /*3*/ };
	sVar2.f_9 = fParam5;
	return sVar2;
}

void func_168(var uParam0, int iParam1)
{
	uParam0->f_2262 = iParam1;
}

bool func_169(int iParam0)
{
	return Global_1327590.f_10 == iParam0;
}

void func_170(var uParam0)
{
	uParam0->f_71 = 1;
}

void func_171(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_8 = iParam2;
}

void func_172(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_8.f_22 = iParam2;
}

void func_173(var uParam0, int iParam1)
{
	uParam0->f_14 = iParam1;
}

void func_174(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!uParam0->f_72)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_33)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_33[iVar0]))
			{
				if (iVar0 == 0 && uParam0->f_32 > 0.0f)
				{
					uParam0->f_33[iVar0] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(uParam0->f_29, 0.0f, 0.0f, 0.0f, uParam0->f_32, uParam0->f_32, 5.0f, "Block Content");
				}
			else
			{
				}
				else
				{
					func_280(uParam0->f_33[iVar0], 0, 1, 0, (1 << 11), 0, -1082130432);
					iVar0++;
				}
				if (!uParam0->f_71)
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_36)
					{
						if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_36[iVar1 /*5*/]))
						{
							if (iVar1 == 0 && !uParam0->f_4)
							{
								uParam0->f_36[iVar1 /*5*/] = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(joaat("VOLCYLINDER"), uParam0->f_29, 0.0f, 0.0f, 0.0f, 3.0f, 3.0f, 2.0f, "Block Peds");
								uParam0->f_36[iVar1 /*5*/].f_2 = 1;
							}
						else
						{
							}
							else
							{
								if (uParam0->f_36[iVar1 /*5*/].f_2)
								{
									POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(uParam0->f_36[iVar1 /*5*/], 272352, 0, 0, -1, uParam0->f_36[iVar1 /*5*/].f_1, 16);
								}
								iVar1++;
							}
						}
					}
				}
			}
		}
	}
}

void func_175(var uParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = 0.8f;
	if (uParam0->f_5)
	{
		fVar0 = 0.4f;
	}
	else if (uParam0->f_4)
	{
		fVar0 = 0.7f;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar1 /*113*/].f_100 == 0.0f)
		{
			func_281(uParam0, iVar1, fVar0);
		}
		iVar1++;
	}
}

void func_176(var uParam0)
{
	if (!HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2232)))
	{
		return;
	}
	HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_2232));
}

void func_177(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar0 /*113*/].f_3))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(uParam0->f_107[iVar0 /*113*/].f_3, false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(uParam0->f_1711[iVar0 /*15*/], false);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1967[iVar0 /*4*/]))
		{
		}
		else
		{
			WEAPON::_REQUEST_WEAPON_ASSET(uParam0->f_1967[iVar0 /*4*/], 1, false);
		}
		iVar0++;
	}
	if (!uParam0->f_4)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29));
			func_51(uParam0, "Pinned interior", 1, -1);
		}
	}
}

void func_178(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_2 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_107[iVar0 /*113*/].f_32.f_3))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_32.f_2, 15, 0, MISC::GET_HASH_KEY(uParam0->f_107[iVar0 /*113*/].f_32.f_3));
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_32.f_2, 1, 0, 0);
			}
		}
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 != 0)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_107[iVar0 /*113*/].f_8.f_2))
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_8.f_1, 15, 0, MISC::GET_HASH_KEY(uParam0->f_107[iVar0 /*113*/].f_8.f_2));
			}
			else
			{
				STREAMING::_REQUEST_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_8.f_1, 1, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_179(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(&(uParam0->f_2236[iVar0 /*8*/])))
		{
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(&(uParam0->f_2236[iVar0 /*8*/]));
		}
		iVar0++;
	}
}

void func_180(var uParam0, var uParam1)
{
	uParam0->f_13 = uParam1;
	func_116(&(uParam0->f_10), 0.0f);
}

bool func_181(var uParam0)
{
	switch (uParam0->f_2245)
	{
		case 0:
			if (uParam0->f_21 || func_282(uParam0))
			{
				func_283(uParam0, 1);
				func_180(uParam0, uParam0->f_18);
				uParam0->f_2245 = 1;
			}
			break;
		case 1:
			if (func_284(uParam0))
			{
				uParam0->f_2245 = 2;
			}
			break;
		case 2:
			if (func_285(uParam0))
			{
				uParam0->f_2245 = 3;
			}
			break;
		case 3:
			if (func_286(uParam0))
			{
				uParam0->f_2245 = 4;
			}
			break;
		case 4:
			if (func_287(uParam0))
			{
				uParam0->f_2245 = 5;
			}
			break;
		case 5:
			if (func_288(uParam0))
			{
				uParam0->f_2245 = 6;
			}
			break;
		case 6:
			if (func_289(uParam0))
			{
				uParam0->f_2245 = 7;
			}
			break;
		case 7:
			if (func_290(uParam0))
			{
				uParam0->f_2245 = 8;
			}
			break;
		case 8:
			if (func_291(uParam0))
			{
				uParam0->f_2245 = 9;
			}
			break;
		case 9:
			if (func_292(uParam0))
			{
				uParam0->f_2245 = 10;
			}
			break;
		case 10:
			if (func_282(uParam0))
			{
				uParam0->f_2245 = 11;
			}
			break;
		case 11:
			return true;
	}
	return false;
}

void func_182(var uParam0, Vector3 vParam1, Vector3 vParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (!func_293(uParam0, iVar0))
		{
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1984[iVar0], vParam1, vParam4, 2);
		}
		iVar0++;
	}
}

void func_183(var uParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar12;

	if (!func_293(uParam0, 0))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar12 /*113*/].f_5))
		{
		}
		else
		{
			if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar12 /*113*/].f_3))
			{
				if (func_54(uParam0->f_107[iVar12 /*113*/].f_1))
				{
					uParam0->f_107[iVar12 /*113*/].f_3 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_294(uParam0->f_107[iVar12 /*113*/].f_1));
				}
				else if (func_61(uParam0->f_107[iVar12 /*113*/].f_2))
				{
					uParam0->f_107[iVar12 /*113*/].f_3 = func_295(uParam0->f_107[iVar12 /*113*/].f_2);
				}
				else if (func_54(uParam0->f_107[iVar12 /*113*/].f_7))
				{
					uParam0->f_107[iVar12 /*113*/].f_3 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_231(uParam0->f_107[iVar12 /*113*/].f_7, 1));
				}
			}
			if (!func_228(uParam0->f_107[iVar12 /*113*/].f_96))
			{
			}
			else
			{
				if (uParam0->f_2051[0 /*6*/] == 0)
				{
					ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1984[0], uParam0->f_107[iVar12 /*113*/].f_4, &sVar0, true, &(uParam0->f_2051[0 /*6*/].f_1), 2);
				}
				else
				{
					ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(uParam0->f_1984[0], uParam0->f_107[iVar12 /*113*/].f_4, &sVar0, false, 0, 2);
				}
				uParam0->f_107[iVar12 /*113*/].f_96 = { sVar0 /*3*/ };
				uParam0->f_107[iVar12 /*113*/].f_99 = sVar0.f_3.f_2;
			}
		}
		iVar12++;
	}
}

bool func_184(var uParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	float fVar5;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 == 0)
		{
		}
		else
		{
			if (func_228(uParam0->f_107[iVar0 /*113*/].f_8.f_3))
			{
				uParam0->f_107[iVar0 /*113*/].f_8.f_3 = { uParam0->f_107[iVar0 /*113*/].f_96 /*3*/ };
			}
			if (uParam0->f_107[iVar0 /*113*/].f_8.f_6 == 0.0f)
			{
				uParam0->f_107[iVar0 /*113*/].f_8.f_6 = uParam0->f_107[iVar0 /*113*/].f_99;
			}
			iVar1 = uParam0->f_107[iVar0 /*113*/].f_8.f_7;
			vVar2 = { uParam0->f_107[iVar0 /*113*/].f_8.f_3 /*3*/ };
			fVar5 = uParam0->f_107[iVar0 /*113*/].f_8.f_6;
			if (uParam0->f_107[iVar0 /*113*/].f_8.f_8)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), false);
			}
			if (uParam0->f_107[iVar0 /*113*/].f_8 == 4)
			{
				uParam0->f_107[iVar0 /*113*/].f_8.f_23 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar2, uParam0->f_107[iVar0 /*113*/].f_8.f_1, 1.0f, 0, false);
				if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
				{
					return false;
				}
			}
			else if (!uParam0->f_107[iVar0 /*113*/].f_8.f_22)
			{
				if (iVar1 < 0)
				{
					uParam0->f_107[iVar0 /*113*/].f_8.f_23 = TASK::CREATE_SCENARIO_POINT_HASH(uParam0->f_107[iVar0 /*113*/].f_8.f_1, vVar2, fVar5, 0.0f, 0.0f, false);
					func_296(&(uParam0->f_107[iVar0 /*113*/].f_8.f_23), 1, 0);
				}
				else
				{
					iVar6 = uParam0->f_1711[iVar1 /*15*/].f_10;
					if (ENTITY::DOES_ENTITY_EXIST(iVar6))
					{
						vVar2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar6, vVar2) /*3*/ };
						fVar5 -= ENTITY::GET_ENTITY_HEADING(iVar6);
						uParam0->f_107[iVar0 /*113*/].f_8.f_23 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(uParam0->f_1711[iVar1 /*15*/].f_10, uParam0->f_107[iVar0 /*113*/].f_8.f_1, vVar2, fVar5, 0, 0, false);
						func_296(&(uParam0->f_107[iVar0 /*113*/].f_8.f_23), 1, 0);
					}
				}
			}
			if (uParam0->f_107[iVar0 /*113*/].f_8.f_14)
			{
				func_120(&(uParam0->f_107[iVar0 /*113*/].f_8.f_17), 0);
			}
		}
		iVar0++;
	}
	return true;
}

bool func_185(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = func_248(iVar1);
		if (ENTITY::IS_ENTITY_DEAD(iVar2))
		{
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_36)
			{
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
				{
				}
				else if (iVar1 == func_297(uParam0->f_36[iVar0 /*5*/].f_1))
				{
				}
				else if (ENTITY::IS_ENTITY_IN_VOLUME(iVar2, uParam0->f_36[iVar0 /*5*/], false, 0))
				{
					return false;
				}
				iVar0++;
			}
		}
		iVar1++;
	}
	if (uParam0->f_2250)
	{
		iVar1 = 0;
		while (iVar1 < 27)
		{
			iVar3 = func_109(iVar1);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < uParam0->f_36)
				{
					if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
					{
					}
					else if (iVar1 == func_297(uParam0->f_36[iVar0 /*5*/].f_1))
					{
					}
					else if (ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_36[iVar0 /*5*/], false, 0))
					{
						return false;
					}
					iVar0++;
				}
			}
			iVar1++;
		}
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 7)
		{
			if (!(iVar4 == 0 || iVar4 == 1))
			{
			}
			else
			{
				iVar3 = func_298(iVar4);
				iVar0 = 0;
				while (iVar0 < uParam0->f_36)
				{
					if ((VOLUME::DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]) && !ENTITY::IS_ENTITY_DEAD(iVar3)) && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_36[iVar0 /*5*/], false, 0))
					{
						return false;
					}
					iVar0++;
				}
			}
			iVar4++;
		}
	}
	uParam0->f_2249 = 1;
	return true;
}

bool func_186(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	Vector3 vVar4;

	bVar0 = true;
	iVar1 = 1;
	bVar2 = false;
	iVar3 = 0;
	while (iVar3 < uParam0->f_106)
	{
		bVar0 = true;
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar3 /*113*/].f_5))
		{
		}
		else if (uParam0->f_107[iVar3 /*113*/].f_105)
		{
		}
		else if (func_187(uParam0, iVar3))
		{
		}
		else if (uParam0->f_107[iVar3 /*113*/].f_8.f_22)
		{
			iVar1 = 0;
		}
		else if (uParam0->f_107[iVar3 /*113*/].f_8.f_14)
		{
			func_299(uParam0, iVar3);
			if (uParam0->f_107[iVar3 /*113*/].f_8.f_21)
			{
				iVar1 = 0;
			}
			else if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_107[iVar3 /*113*/].f_5, -1))
			{
				if (uParam0->f_107[iVar3 /*113*/].f_1 != 14)
				{
					func_51(uParam0, "Create ped check - Ped is in an animscene", 30, iVar3);
					iVar1 = 0;
				}
				else
				{
					vVar4 = { uParam0->f_107[iVar3 /*113*/].f_96 /*3*/ };
					if (func_228(vVar4))
					{
						func_51(uParam0, "Start location is zero?", 10, iVar3);
					}
					else
					{
						if (!func_300(uParam0, iVar3, vVar4))
						{
							iVar1 = 0;
							bVar0 = false;
						}
						if (!func_301(uParam0, iVar3, vVar4))
						{
							iVar1 = 0;
							bVar0 = false;
						}
						if (!bVar0)
						{
						}
						else if (!bVar2 && uParam0->f_2251 <= 0)
						{
							if (func_302(uParam0, iVar3))
							{
								bVar2 = true;
								iVar1 = 0;
								bVar0 = false;
							}
						}
					}
				}
				iVar3++;
				if (bVar2)
				{
					uParam0->f_2251++;
				}
				else if (uParam0->f_2251 >= 1)
				{
					uParam0->f_2251 = 0;
				}
				return iVar1;
			}
		}
	}
}

bool func_187(var uParam0, int iParam1)
{
	if (uParam0->f_107[iParam1 /*113*/].f_8.f_22 && uParam0->f_107[iParam1 /*113*/].f_8 != 4)
	{
		if (!PED::IS_PED_USING_SCENARIO_HASH(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_1))
		{
			func_51(uParam0, "Is ped in enter scenario - FALSE - not using scenario type", 60, iParam1);
			return false;
		}
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iParam1 /*113*/].f_5, 0))
		{
			func_51(uParam0, "Is ped in enter scenario - FALSE - not active in scenario", 60, iParam1);
			return false;
		}
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), uParam0->f_107[iParam1 /*113*/].f_8.f_3) > 5.0f)
		{
			func_51(uParam0, "Is ped in enter scenario - FALSE - too far from enter position", 60, iParam1);
			return false;
		}
		return true;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_8.f_23))
	{
		func_51(uParam0, "Is ped in enter scenario - FALSE - scenario does not exist", 60, iParam1);
		return false;
	}
	if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23))
	{
		func_51(uParam0, "Is ped in enter scenario - FALSE - not using scenario point", 60, iParam1);
		return false;
	}
	if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iParam1 /*113*/].f_5, 0))
	{
		func_51(uParam0, "Is ped in enter scenario - FALSE - not active in scenario", 60, iParam1);
		return false;
	}
	return true;
}

void func_188(var uParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return;
	}
	func_303(uParam0->f_107[iParam1 /*113*/].f_5);
	TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_107[iParam1 /*113*/].f_5);
	func_304(uParam0->f_107[iParam1 /*113*/].f_5, 1);
}

void func_189(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!uParam0->f_107[iVar0 /*113*/].f_104)
		{
		}
		else if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar0 /*113*/].f_3))
		{
		}
		else
		{
			uParam0->f_107[iVar0 /*113*/].f_5 = func_305(uParam0->f_107[iVar0 /*113*/].f_3, uParam0->f_23, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

void func_190(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1984)
	{
		if (!func_293(uParam0, iVar0))
		{
		}
		else
		{
			if (bParam1)
			{
				if (func_306())
				{
					func_307(Global_35, uParam0->f_1984[iVar0], "JOHN");
				}
				else
				{
					func_307(Global_35, uParam0->f_1984[iVar0], "ARTHUR");
				}
			}
			iVar1 = 0;
			while (iVar1 < uParam0->f_106)
			{
				func_307(uParam0->f_107[iVar1 /*113*/].f_5, uParam0->f_1984[iVar0], uParam0->f_107[iVar1 /*113*/].f_4);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_191(var uParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (uParam0->f_4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, 1) || TASK::IS_PED_EXITING_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, true))
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iVar0 /*113*/].f_8.f_23))
			{
				if (PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_107[iVar0 /*113*/].f_8.f_23))
				{
				}
				else
				{
					iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(uParam0->f_107[iVar0 /*113*/].f_5, true);
					if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
					{
						vVar2 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar1, true) /*3*/ };
						TASK::_0x4161648394262FDF(vVar2, 0.1f);
					}
				}
				iVar0++;
			}
		}
	}
}

void func_192(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		func_308(uParam0->f_107[iVar0 /*113*/].f_5);
		iVar0++;
	}
}

int func_193(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else
		{
			fVar1 = uParam0->f_107[iVar0 /*113*/].f_100;
			if (fVar1 <= 0.0f)
			{
			}
			else
			{
				uParam0->f_107[iVar0 /*113*/].f_101 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLCYLINDER"), ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iVar0 /*113*/].f_5, true, false), 0.0f, 0.0f, 0.0f, fVar1, fVar1, fParam1);
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_107[iVar0 /*113*/].f_101))
				{
				}
				else
				{
					PED::_ATTACH_VOLUME_TO_ENTITY(uParam0->f_107[iVar0 /*113*/].f_101, uParam0->f_107[iVar0 /*113*/].f_5, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 2, true);
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_194(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_67)
	{
		func_309(uParam0, iVar0, 1);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_36[iVar0 /*5*/]))
		{
		}
		else
		{
			if (uParam0->f_36[iVar0 /*5*/].f_3)
			{
				uParam0->f_36[iVar0 /*5*/].f_4 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(uParam0->f_36[iVar0 /*5*/], false, 2);
			}
			iVar0++;
		}
	}
}

void func_195(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (uParam0->f_4)
	{
		bVar0 = true;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_54(uParam0->f_107[iVar1 /*113*/].f_1))
		{
			func_106(uParam0->f_107[iVar1 /*113*/].f_1, 0, 0, bVar0);
		}
		iVar1++;
	}
}

void func_196(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	int iVar6;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1711[iVar0 /*15*/].f_13))
			{
				iVar1 = uParam0->f_1711[iVar0 /*15*/].f_14;
				iVar2 = func_9(uParam0, iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar2))
					{
						uParam0->f_1711[iVar0 /*15*/].f_10 = PED::_GET_PED_REGISTER_PROP(iVar2, uParam0->f_1711[iVar0 /*15*/].f_13, true);
					}
				}
			}
			if (!uParam0->f_1711[iVar0 /*15*/].f_5 && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar0 /*15*/].f_10))
			{
				if (uParam0->f_1711[iVar0 /*15*/].f_8)
				{
					vVar3 = { func_273(uParam0, uParam0->f_1711[iVar0 /*15*/].f_1) /*3*/ };
				}
				else
				{
					vVar3 = { uParam0->f_1711[iVar0 /*15*/].f_1 /*3*/ };
				}
				uParam0->f_1711[iVar0 /*15*/].f_10 = OBJECT::CREATE_OBJECT(uParam0->f_1711[iVar0 /*15*/], vVar3, false, true, false, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar0 /*15*/].f_10))
			{
			}
			else
			{
				iVar6 = 0;
				while (iVar6 < uParam0->f_1984)
				{
					if (!func_293(uParam0, iVar6))
					{
					}
					else
					{
						func_310(uParam0->f_1711[iVar0 /*15*/].f_10, uParam0->f_1984[iVar6], uParam0->f_1711[iVar0 /*15*/].f_4);
					}
					iVar6++;
				}
			}
		}
		iVar0++;
	}
}

void func_197(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1967[iVar1 /*4*/]))
		{
		}
		else
		{
			iVar0 = uParam0->f_1967[iVar1 /*4*/].f_1;
			if (iVar0 < 0 || iVar0 >= uParam0->f_106)
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_1967[iVar1 /*4*/], 0, false))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_1967[iVar1 /*4*/], true, 0, false, false);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_107[iVar0 /*113*/].f_5, uParam0->f_1967[iVar1 /*4*/], 1, true, true, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), true, 0.0f, false);
				}
				uParam0->f_1967[iVar1 /*4*/].f_3 = WEAPON::_GET_PED_WEAPON_OBJECT(uParam0->f_107[iVar0 /*113*/].f_5, true);
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1967[iVar1 /*4*/].f_3))
				{
				}
				else
				{
					iVar2 = 0;
					while (iVar2 < uParam0->f_1984)
					{
						if (!func_293(uParam0, iVar2))
						{
						}
						else
						{
							func_310(uParam0->f_1967[iVar1 /*4*/].f_3, uParam0->f_1984[iVar2], uParam0->f_1967[iVar1 /*4*/].f_2);
						}
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
}

void func_198(var uParam0)
{
	if (uParam0->f_1976.f_5)
	{
		uParam0->f_1976.f_6 = PROPSET::_CREATE_PROP_SET_2(uParam0->f_1976, func_273(uParam0, uParam0->f_1976.f_1), 1, func_274(uParam0, uParam0->f_1976.f_4), 3.0f, false, true);
	}
}

void func_199(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
			}
			else
			{
				iVar2 = uParam0->f_107[iVar0 /*113*/].f_32.f_16[iVar1];
				if (iVar2 >= 0 && iVar2 < uParam0->f_1711)
				{
					iVar3 = uParam0->f_1711[iVar2 /*15*/].f_10;
					sVar4 = uParam0->f_1711[iVar2 /*15*/].f_11;
					if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
					{
						PED::_REQUEST_PED_FOR_SCENARIO_TYPE(uParam0->f_107[iVar0 /*113*/].f_5, iVar3, sVar4, uParam0->f_107[iVar0 /*113*/].f_32.f_2, uParam0->f_107[iVar0 /*113*/].f_32.f_3, false);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_200(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_54(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_40)))
		{
		}
		else
		{
			func_311(uParam0->f_107[iVar0 /*113*/].f_1, uParam0->f_107[iVar0 /*113*/].f_32.f_40, -1);
		}
		iVar0++;
	}
}

void func_201(var uParam0)
{
	uParam0->f_13 = 0;
	func_130(&(uParam0->f_10));
}

void func_202(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!uParam0->f_4)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_106)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar2 /*113*/].f_5))
			{
			}
			else if (func_228(uParam0->f_107[iVar2 /*113*/].f_96))
			{
			}
			else
			{
				iVar0 = func_312(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iVar2 /*113*/].f_5, true, false));
				iVar1 = func_312(uParam0->f_107[iVar2 /*113*/].f_96);
				if (iVar0 | iVar1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_107[iVar2 /*113*/].f_5, uParam0->f_107[iVar2 /*113*/].f_96, false, true, true);
				}
			}
			iVar2++;
		}
	}
}

int func_203(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_313(iParam1))
	{
		return 0;
	}
	if (!func_293(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	ANIMSCENE::START_ANIM_SCENE(iVar0);
	uParam0->f_2046 = iVar0;
	if (uParam0->f_2015[iParam1])
	{
		if (func_314(func_21(uParam0)))
		{
		}
		uParam0->f_1696 = 1;
		func_315(func_21(uParam0));
	}
	else if (func_22(func_21(uParam0)))
	{
		func_23();
	}
	if (uParam0->f_2270)
	{
		uParam0->f_2274 = 0;
		uParam0->f_2275 = 0;
		if ((func_117() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_2046, "ARTHUR")) || (func_306() && ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_2046, "JOHN")))
		{
			uParam0->f_2274 = 1;
		}
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1984)
		{
			if (iVar1 == iParam1)
			{
			}
			else if (func_316(uParam0, iVar1) || func_218(uParam0, iVar1))
			{
				func_317(uParam0, iVar1);
			}
			iVar1++;
		}
	}
	return 1;
}

int func_204(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_1711)
	{
		return 0;
	}
	return uParam0->f_1711[iParam1 /*15*/].f_10;
}

void func_205(int iParam0, bool bParam1)
{
	func_318(iParam0, bParam1);
}

int func_206(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_319(*uParam0, 0.0f, 0.0f, 0.0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

int func_207(var uParam0)
{
	if (!func_320(uParam0, sLocal_18, 1, 0))
	{
		func_8(&iLocal_29, 1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(func_9(uParam0, iLocal_14)))
		{
			MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(func_9(uParam0, iLocal_14));
		}
		bLocal_28 = false;
		return 0;
	}
	if (!bLocal_28)
	{
		MISC::REGISTER_INTERACTION_LOCKON_PROMPT(func_9(uParam0, iLocal_14), "", 6.0f, 0.0f, 0, 0.0f, 0.0f, 0, false, -1);
		bLocal_28 = true;
	}
	iLocal_30 = 0;
	PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iLocal_30, false, false);
	if (iLocal_30 == 0)
	{
		func_8(&iLocal_29, 1, 1);
		return 0;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iLocal_30) != func_9(uParam0, iLocal_14))
	{
		func_8(&iLocal_29, 1, 1);
		return 0;
	}
	if (!func_48(iLocal_29))
	{
		iLocal_29 = func_321("INTERACT_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), func_9(uParam0, iLocal_14), 3, 0, 0, 0, 0, 6.0f, 570, 4000, 10, (1 << 30), 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		func_322(iLocal_29, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(func_9(uParam0, iLocal_14)), 0, 1);
	}
	if (func_323(iLocal_29, 1))
	{
		return 1;
	}
	return 0;
}

bool func_208(var uParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = uParam0->f_2263;
	fVar1 = uParam0->f_2264;
	if (func_24() == 3)
	{
		if (func_324(Global_35, 1))
		{
			fVar0 = 5.0f;
			fVar1 = 8.0f;
		}
	}
	if (func_325(uParam0, fVar0, fVar1))
	{
		return true;
	}
	return false;
}

void func_209(int iParam0, bool bParam1)
{
	if (!func_326(iParam0))
	{
		return;
	}
	if (bParam1)
	{
	}
	Global_32074.f_4[iParam0 /*4*/].f_3 = bParam1;
}

int func_210(int iParam0)
{
	if (!func_326(iParam0))
	{
		return -1;
	}
	return Global_1327590.f_23[iParam0 /*17*/].f_1;
}

void func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_152();
	func_31(&iVar0, 0, Global_1327590.f_19622[iParam0 /*14*/].f_11, 0, 0, 0, 0, 0);
	iVar1 = func_152();
	func_31(&iVar1, 0, Global_1327590.f_19622[iParam0 /*14*/].f_12, 0, 0, 0, 0, 0);
	iVar2 = Global_1327590.f_19622[iParam0 /*14*/].f_9;
	func_31(&iVar2, 0, Global_1327590.f_19622[iParam0 /*14*/].f_10, 0, 0, 0, 0, 0);
	if (func_327(iVar2, iVar0, 0))
	{
		if (func_327(iVar2, iVar1, 0))
		{
			Global_1327590.f_19622[iParam0 /*14*/].f_9 = iVar1;
		}
		else
		{
			Global_1327590.f_19622[iParam0 /*14*/].f_9 = iVar2;
		}
	}
	else
	{
		Global_1327590.f_19622[iParam0 /*14*/].f_9 = iVar0;
	}
	Global_1327590.f_19622[iParam0 /*14*/].f_10 += Global_1327590.f_19622[iParam0 /*14*/].f_13;
}

void func_212()
{
	var uVar0;

	strcpy_s(&(Global_1327590.f_19727), 32, "");
	Global_1327590.f_19727.f_4 = 0;
	Global_1327590.f_19727.f_5 = 0;
	Global_1327590.f_19727.f_6 = uVar0;
}

void func_213(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (!func_54(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else
		{
			if (uParam0->f_107[iVar0 /*113*/].f_32.f_32 > -1)
			{
				if (uParam0->f_107[iVar0 /*113*/].f_32.f_32 == 0)
				{
					if (func_153(uParam0) == 0)
					{
						uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 5;
						if (uParam0->f_107[iVar0 /*113*/].f_1 == 10)
						{
							uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 7;
						}
					}
					else if (func_153(uParam0) == 6)
					{
						if (uParam0->f_107[iVar0 /*113*/].f_1 != 24 && uParam0->f_107[iVar0 /*113*/].f_1 != 25)
						{
							uParam0->f_107[iVar0 /*113*/].f_32.f_32 = 6;
						}
					}
				}
				uVar1 = uParam0->f_107[iVar0 /*113*/].f_32.f_32;
				iVar2 = uParam0->f_107[iVar0 /*113*/].f_32.f_33;
				iVar3 = uParam0->f_107[iVar0 /*113*/].f_32.f_34;
				if (iVar2 == 0 && iVar3 == 0)
				{
					iVar2 = 0;
					iVar3 = 30;
				}
				func_328(uParam0->f_107[iVar0 /*113*/].f_1, uVar1, iVar3, iVar2, 0, 0, 1);
			}
			fVar4 = uParam0->f_107[iVar0 /*113*/].f_32.f_35;
			if (fVar4 > 0.0f)
			{
				func_329(uParam0->f_107[iVar0 /*113*/].f_1, fVar4);
				func_328(uParam0->f_107[iVar0 /*113*/].f_1, 3, 0, 1, 0, 0, 1);
			}
		}
		iVar0++;
	}
}

void func_214(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2268))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_106)
		{
			iVar1 = func_9(uParam0, iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar1, uParam0->f_2268, 0.0f);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2269))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(uParam0->f_2269, true, true);
	}
}

bool func_215(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, iParam1))
	{
		return false;
	}
	return true;
}

int func_216(int iParam0, int iParam1, bool bParam2)
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
			func_330(&(Global_40.f_6563[iVar0 /*27*/]), iParam0);
			func_331(iParam0);
			if (bParam2)
			{
				func_332(&(Global_40.f_6563[iVar0 /*27*/]));
				if (!func_333(172))
				{
					func_334(172, 0);
				}
				func_335(&(Global_40.f_6563[iVar0 /*27*/]), 0);
			}
			func_336(iVar0, 1);
			func_337();
			func_339(func_338(joaat("CAMP_REQUESTS_STARTED")), 1);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_217(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	if (!func_341(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_342(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_343(iParam0, bParam2);
	iVar2 = 0;
	if (func_344(iParam0, 0, 0) == 0)
	{
		if (func_345(iParam0))
		{
			iVar5 = func_346(iParam0);
			iVar6 = func_347(iVar5);
			iVar7 = func_348(iVar6) + 1;
			func_349(iVar5);
			if (func_350(38))
			{
				func_334(483, 0);
			}
			else
			{
				func_334(482, 0);
			}
			if (iVar7 == func_351(iVar6))
			{
				func_217(func_352(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_353() && func_354(4))
				{
					if (func_353() && (func_355(38) || func_350(38)))
					{
						func_357(38, func_352(iVar6), 0, 0, func_356(), 0, -1, 0);
						func_358(2);
					}
					else
					{
						func_357(38, func_352(iVar6), 0, 0, func_356(), 0, -1, 0);
						func_358(1);
					}
				}
			}
			else if (func_353() && func_354(4))
			{
				if (func_353() && (func_355(38) || func_350(38)))
				{
					func_357(38, 0, 0, 0, func_356(), 0, -1, 0);
					func_358(2);
				}
				else
				{
					func_357(38, 0, 0, 0, func_356(), 0, -1, 0);
					func_358(1);
				}
			}
			if (func_353() && func_354(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_353() && (func_355(38) || func_350(38)))
					{
						func_359(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_359(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_360(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_361(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_361(iParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_361(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar3 = true;
		}
	}
	if (func_362(iParam0, (1 << 23)) && !func_363(28))
	{
		func_364(28);
	}
	if (!bVar3)
	{
		if (func_361(iParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_365(iParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				iVar1 = func_367(func_366(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_242() == -1)
					{
						func_368(iVar1);
					}
					if (func_369(0) && func_370(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_371(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_242() == -1)
					{
						func_368(iParam0);
					}
					if (func_369(0) && func_370(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_371(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_360(iParam0) == joaat("WEAPON"))
		{
			if (!func_372(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_360(iParam0) == joaat("AMMO") && func_373(iParam0))
		{
			if (!func_374(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_375(iParam0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_376(iParam0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_339(func_338(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_339(func_377(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_361(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_378(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_334(498, 0);
				}
			}
			if (func_361(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_361(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_379(iParam0);
			}
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_361(iParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_USED")) && func_361(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_334(484, 0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_361(iParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_361(iParam0, 589988438))
		{
			if (func_380())
			{
				func_381(joaat("REWARD_SMALL"), 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_361(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_382(iParam0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_383(iParam0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_384(iParam0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_361(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_385(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_386();
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_387(iParam0, iParam1);
			func_388(iParam0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_361(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_389(iParam0, 0, 0, 0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_361(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_379(iParam0);
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_242() != -1)
			{
				return 0;
			}
			func_390(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_391(215778062, 1, 0))
					{
						func_217(215778062, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_391(670273567, 1, 0))
					{
						func_217(670273567, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_391(-967317137, 1, 0))
					{
						func_217(-967317137, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_391(526074061, 1, 0))
					{
						func_217(526074061, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_391(-1045488665, 1, 0))
					{
						func_217(-1045488665, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_391(471514780, 1, 0))
					{
						func_217(471514780, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_362(iParam0, 4))
		{
			if (!func_350(42))
			{
				func_392(iParam0);
			}
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_393(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_361(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_217(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_364(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_394(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_395(&iVar9, 0))
				{
					func_370(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_242() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_394(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_334(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_396();
				Global_40.f_11095.f_61 += 0.1f;
				func_397();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_398();
				Global_40.f_11095.f_63 += 0.1f;
				func_399();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_400();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_401(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_402(499813453, 0);
				func_403(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_401(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_402(499813453, 0);
				func_403(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_401(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_402(499813453, 0);
				func_403(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_401(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_402(666607663, 0);
				func_404(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_401(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_402(666607663, 0);
				func_404(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_401(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_402(666607663, 0);
				func_404(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_401(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_402(-220219788, 0);
				func_405(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_401(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_402(-220219788, 0);
				func_405(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_401(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_402(-220219788, 0);
				func_405(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_401(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_402(218622660, 0);
				func_406(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_401(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_402(218622660, 0);
				func_406(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_401(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_402(390004462, 0);
				func_407(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_401(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_402(390004462, 0);
				func_407(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_401(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_402(390004462, 0);
				func_407(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_401(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_402(6410548, 0);
				func_408(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_401(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_402(6410548, 0);
				func_408(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_401(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_402(6410548, 0);
				func_408(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_401(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_402(6410548, 0);
				func_408(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_410(242, func_409(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_410(240, func_409(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_410(241, func_409(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_411(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_411(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_411(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_411(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_411(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_411(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_334(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_334(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_334(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_217(func_412(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_217(func_413(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_363(1))
				{
					func_334(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_334(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_242() == -1)
				{
					iParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP");
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_334(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_414(&iVar10);
		if (!func_415(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_369(0))
		{
			return 1;
		}
		if (func_360(iParam0) == joaat("CLOTHING"))
		{
			func_416(iParam0);
		}
		if (func_361(iParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_417(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_369(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_217(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_418(iVar2, 0);
		}
	}
	sVar35 = { func_419(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_420(iParam0);
	if (fParam6 > 0.0f)
	{
		if (func_361(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_421(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_422(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_218(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (func_423(uParam0, iParam1, 1.0f))
	{
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iVar0))
	{
		return true;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar0, false))
	{
		return true;
	}
	return false;
}

void func_219()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_424(0);
	Global_1935689.f_6 = 1;
}

void func_220()
{
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GRAYOUT_ITEM_USE", true, 1);
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GRAYOUT_ITEM_DROP", true, 1);
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BLOCK_STEW_DROP_PROMPT", true, 1);
	PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BLOCK_STEW_EAT_PROMPT", true, 1);
}

bool func_221(int iParam0)
{
	switch (func_242())
	{
		case -1:
			return (Global_1357549.f_1495 & iParam0) != 0;
	}
	return false;
}

void func_222(var uParam0)
{
	int iVar0;
	float fVar1;

	if (!uParam0->f_2270 || !uParam0->f_2274)
	{
		return;
	}
	iVar0 = func_9(uParam0, uParam0->f_2271);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_OCCLUDED(iVar0))
	{
		fVar1 = (uParam0->f_2272 * uParam0->f_2272);
	}
	else
	{
		fVar1 = (uParam0->f_2273 * uParam0->f_2273);
	}
	if (uParam0->f_2275)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) < fVar1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			ANIMSCENE::FADE_ANIM_SCENE_AUDIO_IN(uParam0->f_2046, 10.0f);
			if (func_117())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2046, "ARTHUR", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2046, "JOHN", Global_35, 0);
			}
			uParam0->f_2275 = 0;
		}
	}
	else if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(Global_35, false, false), ENTITY::GET_ENTITY_COORDS(iVar0, false, false)) > fVar1 && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
	{
		ANIMSCENE::FADE_ANIM_SCENE_AUDIO_OUT(uParam0->f_2046, 10.0f);
		if (func_117())
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "ARTHUR", Global_35);
		}
		else
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_2046, "JOHN", Global_35);
		}
		uParam0->f_2275 = 1;
	}
}

int func_223(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_63)
		{
		}
		else if (uParam0->f_107[iVar0 /*113*/].f_32 && !uParam0->f_107[iVar0 /*113*/].f_32.f_48)
		{
		}
		else
		{
			if (!uParam0->f_107[iVar0 /*113*/].f_32)
			{
				if (func_425(uParam0, iVar0))
				{
					if (uParam0->f_107[iVar0 /*113*/].f_32.f_48)
					{
						func_106(uParam0->f_107[iVar0 /*113*/].f_1, 1, 1, 0);
						func_426(uParam0, iVar0, 0, 1);
					}
					else
					{
						func_426(uParam0, iVar0, 1, 1);
					}
					uParam0->f_107[iVar0 /*113*/].f_32 = 1;
				}
			}
			if (uParam0->f_107[iVar0 /*113*/].f_32 && uParam0->f_107[iVar0 /*113*/].f_32.f_48)
			{
				if (func_427(uParam0, iVar0))
				{
					func_426(uParam0, iVar0, 1, 0);
					uParam0->f_107[iVar0 /*113*/].f_32.f_48 = 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_224(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if ((uParam0->f_107[iVar0 /*113*/].f_32.f_60 > 0.0f && !uParam0->f_107[iVar0 /*113*/].f_32.f_62) && func_423(uParam0, uParam0->f_107[iVar0 /*113*/].f_32.f_61, uParam0->f_107[iVar0 /*113*/].f_32.f_60))
		{
			func_57(uParam0, iVar0, 0);
			func_106(uParam0->f_107[iVar0 /*113*/].f_1, 1, 1, 0);
		}
		iVar0++;
	}
}

bool func_225(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (!func_54(uParam0->f_107[iVar0 /*113*/].f_1))
		{
		}
		else if (func_58(uParam0->f_107[iVar0 /*113*/].f_1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_226(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	iVar3 = func_428(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 -= iParam1;
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_422(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_391(iParam0, 1, bParam4))
	{
		return 0;
	}
	sVar5 = { func_419(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_344(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_344(iParam0, 0, 0) - iParam1) < 0)
		{
			func_226(iParam0, func_344(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_360(iParam0) == joaat("WEAPON"))
	{
		if (!func_429(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_430(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_369(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_422(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_431(iParam0, iParam1);
	return 1;
}

bool func_227(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

bool func_228(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_229(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
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

float func_230(int iParam0, int iParam1, bool bParam2)
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
	return func_432(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_231(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
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
		Global_1360165[iParam0 /*1157*/].f_127 = func_433(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_109(iParam0);
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

int func_233(int iParam0, bool bParam1)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_434(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_234(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
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

bool func_235(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_108(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] & iParam1) != 0;
}

void func_236(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

bool func_237(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_238(var uParam0)
{
	return func_237(*uParam0, 2);
}

float func_239()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_240(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_242()
{
	return Global_1572887.f_12;
}

void func_243(var uParam0)
{
	func_116(uParam0, 0.0f);
}

bool func_244(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

void func_245(var uParam0, int iParam1, bool bParam2)
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

bool func_246(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_247(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_294(iParam0);
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

int func_248(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_249(int iParam0)
{
	if (func_54(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_248(iParam0)))
		{
			func_435(iParam0, (1 << 26), 1);
			func_107(iParam0, 19, 1);
		}
	}
}

float func_250(int iParam0)
{
	if (!func_108(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_251(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_248(iParam0);
	iVar1 = func_126(iParam0, 0);
	func_436(iParam0, iVar0);
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

int func_252(int iParam0)
{
	int iVar0;

	iVar0 = func_139(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

void func_253(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return;
	}
	if (!func_61(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_254(int iParam0, int iParam1)
{
	if (!func_61(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

bool func_255()
{
	return Global_1327590;
}

bool func_256(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_257(int iParam0)
{
	return Global_1327590.f_19684 == iParam0;
}

bool func_258(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (func_259((1 << 25)))
			{
				return false;
			}
			if ((Global_1395601.f_4 & Global_1395601.f_4 ^ 256) != 0)
			{
				return false;
			}
			if (func_221(4))
			{
				return false;
			}
			if (func_437(2, 1))
			{
				return false;
			}
			if (func_438())
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_259(int iParam0)
{
	switch (func_242())
	{
		case -1:
			return (Global_1357549.f_1494 & iParam0) != 0;
	}
	return false;
}

bool func_260(int iParam0)
{
	return Global_1899515 > iParam0;
}

bool func_261()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_262(int iParam0, bool bParam1, bool bParam2)
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
		if (func_439())
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
		iVar0 = func_440(Global_1898164.f_1[0 /*5*/]);
		if (func_441(iVar0) && func_442(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_443(Global_1898164.f_1[0 /*5*/]))
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

bool func_263(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	if ((Global_1360165[iParam0 /*1157*/].f_140 & iParam1) != 0)
	{
		return true;
	}
	if ((Global_1360165[iParam0 /*1157*/].f_141 & iParam1) != 0)
	{
		return true;
	}
	return false;
}

bool func_264(int iParam0)
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
	{
		return true;
	}
	return false;
}

bool func_265(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = func_444(iParam0);
	fVar1 = func_445(iParam0);
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (fVar1 > fVar0)
	{
		if ((float)iVar2 >= fVar0 && (float)iVar2 < fVar1)
		{
			return true;
		}
	}
	else if ((float)iVar2 >= fVar0 || (float)iVar2 < fVar1)
	{
		return true;
	}
	return false;
}

bool func_266(var uParam0)
{
	float fVar0;

	if (uParam0->f_14)
	{
		return false;
	}
	if (!func_113(&(uParam0->f_10)))
	{
		return false;
	}
	if (uParam0->f_13 < 0)
	{
		return false;
	}
	if (func_34(uParam0) == 4)
	{
		if (func_446() != 0)
		{
			func_447(&(uParam0->f_10));
		}
		else
		{
			func_448(&(uParam0->f_10));
		}
	}
	fVar0 = func_114(&(uParam0->f_10));
	if (fVar0 > (float)uParam0->f_13)
	{
		return true;
	}
	return false;
}

int func_267()
{
	if ((Global_1935689.f_9415 & 128) != 0)
	{
		return 1;
	}
	if (func_449(joaat("CSTAG_PLAYER_DONATED_FOOD"), 1))
	{
		return 1;
	}
	return 0;
}

int func_268()
{
	if (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_OPEN_CASHBOX")) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("OBJECTEXCHANGE")))
	{
		return 1;
	}
	if (func_449(joaat("CSTAG_PLAYER_DONATED_MONEY"), 1))
	{
		return 1;
	}
	return 0;
}

bool func_269(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_9(uParam0, iVar1)))
		{
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(func_9(uParam0, iVar1)))
		{
			iVar0 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

Vector3 func_270(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 2351.282f, 1362.077f, 104.9752f };
		case 1:
			return { 2349.223f, 1361.247f, 104.9467f };
		case 2:
			return { 2379.521f, 1348.617f, 105.1838f };
		case 3:
			return { 2379.518f, 1348.727f, 105.3143f };
		case 10:
			return { 2354.249f, 1370.797f, 105.13f };
		case 4:
			return { 2360.46f, 1372.098f, 105.3216f };
		case 5:
			return { 2361.062f, 1375.625f, 105.6f };
		case 6:
			return { 2360.392f, 1376.124f, 105.3041f };
		case 7:
			return { 2369.36f, 1342.757f, 105.2225f };
		case 8:
			return { 2342.205f, 1350.963f, 105.36f };
		case 9:
			return { 2343.207f, 1350.193f, 105.0427f };
		case 11:
			return { 2354.913f, 1342.611f, 104.5543f };
		case 12:
			return { 2354.479f, 1347.575f, 104.8036f };
		case 13:
			return { 2352.957f, 1346.719f, 104.7566f };
		case 14:
			return { 2366.306f, 1347.905f, 105.1304f };
		case 15:
			return { 2362.18f, 1352.813f, 105.0625f };
		case 16:
			return { 2368.728f, 1350.747f, 105.1249f };
		case 17:
			return { 2360.894f, 1377.363f, 106.5266f };
		case 18:
			return { 2371.477f, 1356.217f, 105.0569f };
		case 19:
			return { 2344.804f, 1367.986f, 105.3134f };
		case 20:
			return { 2353.949f, 1371.797f, 105.127f };
		case 21:
			return { 2354.013f, 1371.781f, 105.074f };
		case 22:
			return { 2337.284f, 1346.015f, 105.179f };
		case 23:
			return { 2337.322f, 1346.053f, 105.1803f };
		case 103:
			return { -1339.08f, 2397.047f, 306.0378f };
		case 104:
			return { -1317.874f, 2439.626f, 308.5981f };
		case 105:
			return { -1352.902f, 2440.497f, 307.4951f };
		case 106:
			return { -1349.317f, 2442.231f, 307.3924f };
		case 107:
			return { -1316.698f, 2435.933f, 308.5595f };
		case 108:
			return { -1322.826f, 2441.704f, 308.6064f };
		case 109:
			return { -1344.278f, 2405.877f, 306.088f };
		case 49:
			return { 690.7682f, -1253.57f, 43.5496f };
		case 50:
			return { 652.4066f, -1244.674f, 42.6699f };
		case 51:
			return { 653.353f, -1257.616f, 42.6902f };
		case 52:
			return { 663.204f, -1266.61f, 42.867f };
		case 53:
			return { 670.1622f, -1239.483f, 43.1877f };
		case 54:
			return { 683.0387f, -1245.425f, 43.0148f };
		case 55:
			return { 684.351f, -1243.633f, 42.9849f };
		case 56:
			return { 684.4819f, -1246.863f, 42.9927f };
		case 57:
			return { 685.0302f, -1245.902f, 42.9912f };
		case 58:
			return { 672.8356f, -1237.325f, 43.134f };
		case 59:
			return { 650.8051f, -1251.009f, 42.7005f };
		case 60:
			return { 672.4047f, -1259.892f, 42.9838f };
		case 61:
			return { 672.4271f, -1259.96f, 43.1188f };
		case 62:
			return { 655.894f, -1234.782f, 43.1259f };
		case 63:
			return { 654.1125f, -1251.155f, 42.8f };
		case 64:
			return { 651.2626f, -1251.937f, 42.6974f };
		case 65:
			return { 650.6795f, -1252.114f, 43.1362f };
		case 66:
			return { 653.0919f, -1252.156f, 42.8372f };
		case 67:
			return { 653.4479f, -1252.911f, 42.599f };
		case 68:
			return { 690.4313f, -1259.154f, 43.7104f };
		case 70:
			return { 663.0867f, -1231.747f, 43.2655f };
		case 71:
			return { 657.1655f, -1243.321f, 42.8214f };
		case 72:
			return { 659.59f, -1257.613f, 43.245f };
		case 73:
			return { 660.603f, -1253.43f, 42.7f };
		case 74:
			return { 659.5897f, -1257.613f, 43.1646f };
		case 75:
			return { 660.8477f, -1257.421f, 42.5046f };
		case 79:
			return { 678.9159f, -1265.703f, 43.1879f };
		case 77:
			return { 674.4503f, -1265.393f, 42.9755f };
		case 78:
			return { 674.8731f, -1267.135f, 42.9843f };
		case 76:
			return { 675.0228f, -1270.61f, 42.9601f };
		case 80:
			return { 679.2578f, -1248.381f, 42.9808f };
		case 82:
			return { 681.4078f, -1254.114f, 43.0104f };
		case 83:
			return { 679.5405f, -1253.201f, 43.005f };
		case 81:
			return { 676.2629f, -1251.483f, 43.0118f };
		case 84:
			return { 652.429f, -1253.768f, 43.8068f };
		case 85:
			return { 663.2041f, -1266.61f, 42.8666f };
		case 86:
			return { 664.6318f, -1266.261f, 42.8638f };
		case 87:
			return { 661.7732f, -1267.029f, 42.865f };
		case 89:
			return { 665.5107f, -1243.862f, 43.1096f };
		case 90:
			return { 664.7734f, -1244.574f, 43.1442f };
		case 92:
			return { 666.624f, -1244.745f, 43.1513f };
		case 94:
			return { 665.811f, -1243.962f, 43.1096f };
		case 88:
			return { 658.7715f, -1230.395f, 43.1212f };
		case 95:
			return { 667.0524f, -1274.733f, 43.1042f };
		case 96:
			return { 652.5594f, -1256.802f, 42.731f };
		case 97:
			return { 683.7f, -1267.15f, 43.44f };
		case 98:
			return { 688.7827f, -1247.475f, 43.17f };
		case 99:
			return { 654.5885f, -1231.947f, 43.0909f };
		case 100:
			return { 682.0446f, -1250.296f, 43.0812f };
		case 101:
			return { 682.3f, -1250.1f, 43.2f };
		case 102:
			return { 681.875f, -1250.375f, 42.975f };
		case 110:
			return { -148.9178f, -14.2616f, 95.3191f };
		case 111:
			return { -150.5614f, -16.7691f, 95.2844f };
		case 112:
			return { -149.3513f, -15.9276f, 95.314f };
		case 113:
			return { -125.0833f, -39.8813f, 94.5479f };
		case 114:
			return { -134.5811f, -34.3785f, 95.0469f };
		case 116:
			return { -123.8592f, -25.8471f, 94.9403f };
		case 117:
			return { -139.9031f, -41.3454f, 94.5271f };
		case 118:
			return { -141.9657f, -42.1655f, 94.55f };
		case 119:
			return { -140.3628f, -39.3589f, 94.5064f };
		case 120:
			return { -141.3333f, -39.8796f, 94.5036f };
		case 121:
			return { -142.1689f, -44.2803f, 94.5344f };
		case 122:
			return { -132.1766f, -27.8991f, 95.1097f };
		case 123:
			return { -133.2737f, -18.5626f, 95.1372f };
		case 124:
			return { -133.2647f, -18.4593f, 95.2667f };
		case 125:
			return { -148.3239f, -26.4223f, 95.0867f };
		case 126:
			return { -129.6888f, -30.2391f, 95.184f };
		case 127:
			return { -132.3694f, -28.9374f, 95.0871f };
		case 128:
			return { -131.1368f, -30.3165f, 95.1679f };
		case 129:
			return { -131.1368f, -30.3165f, 95.048f };
		case 130:
			return { -131.3613f, -31.1211f, 94.9242f };
		case 131:
			return { -117.945f, -17.21f, 95.035f };
		case 132:
			return { -116.5877f, -17.9793f, 94.9923f };
		case 134:
			return { -107.1891f, -32.681f, 94.979f };
		case 135:
			return { -118.2587f, -37.0856f, 94.8027f };
		case 136:
			return { -122.145f, -35.0285f, 94.7612f };
		case 137:
			return { -118.2644f, -37.0851f, 95.1889f };
		case 138:
			return { -117.631f, -36.1001f, 94.5263f };
		case 139:
			return { -120.0f, -40.0f, 94.5796f };
		case 140:
			return { -138.0953f, -12.0076f, 95.3359f };
		case 146:
			return { -110.7765f, -36.8139f, 94.9131f };
		case 144:
			return { -112.7059f, -40.8189f, 94.7282f };
		case 145:
			return { -110.9286f, -41.0484f, 94.7314f };
		case 141:
			return { -109.1067f, -37.2171f, 94.701f };
		case 142:
			return { -107.6834f, -42.1638f, 94.6885f };
		case 143:
			return { -107.733f, -42.169f, 94.652f };
		case 147:
			return { -144.4145f, -19.2364f, 95.0744f };
		case 149:
			return { -138.4368f, -17.9037f, 95.0856f };
		case 150:
			return { -137.0642f, -20.7528f, 95.087f };
		case 148:
			return { -141.7537f, -22.6105f, 95.0878f };
		case 151:
			return { -132.6974f, -31.0975f, 96.1266f };
		case 152:
			return { -165.216f, -34.132f, 94.1461f };
		case 153:
			return { -172.0029f, -25.0604f, 95.099f };
		case 154:
			return { -138.7686f, -27.4923f, 95.0878f };
		case 155:
			return { -139.3531f, -28.864f, 95.0872f };
		case 156:
			return { -85.0f, -40.0f, 95.908f };
		case 157:
			return { -75.0f, -40.0f, 96.05f };
		case 158:
			return { -85.6f, -12.6f, 95.55f };
		case 159:
			return { -89.4735f, -34.0326f, 95.5727f };
		case 160:
			return { -141.1667f, -43.1414f, 95.5075f };
		case 161:
			return { -96.3596f, -47.1111f, 94.4287f };
		case 162:
			return { -118.0872f, -27.6725f, 94.7697f };
		case 163:
			return { -117.0986f, -27.9306f, 94.7973f };
		case 165:
			return { -118.4542f, -29.0077f, 94.7992f };
		case 167:
			return { -127.236f, -6.6741f, 95.1161f };
		case 169:
			return { -88.6625f, -5.193f, 94.1046f };
		case 170:
			return { -122.2236f, -8.5306f, 95.1336f };
		case 171:
			return { -122.2236f, -8.5306f, 95.1336f };
		case 172:
			return { -143.8062f, -56.5505f, 93.6929f };
		case 168:
			return { -134.5851f, -33.4737f, 95.0571f };
		case 173:
			return { -120.48f, -13.59f, 95.174f };
		case 174:
			return { -139.6016f, -19.6172f, 95.0788f };
		case 175:
			return { -151.097f, -25.003f, 95.037f };
		case 176:
			return { -142.1275f, -16.7126f, 95.0843f };
		case 177:
			return { -111.2999f, -37.7f, 94.8994f };
		case 178:
			return { 2230.607f, -768.9569f, 42.4874f };
		case 179:
			return { 1897.947f, -1867.111f, 46.2557f };
		case 181:
			return { 1878.266f, -1824.908f, 42.0577f };
		case 182:
			return { 1903.976f, -1862.017f, 46.3581f };
		case 183:
			return { 1870.953f, -1874.527f, 41.8405f };
		case 184:
			return { 1872.956f, -1872.378f, 41.8184f };
		case 185:
			return { 1872.729f, -1871.582f, 41.8031f };
		case 186:
			return { 1866.117f, -1858.068f, 42.0334f };
		case 187:
			return { 1863.898f, -1858.133f, 42.0048f };
		case 188:
			return { 1861.93f, -1862.238f, 42.0131f };
		case 189:
			return { 1865.275f, -1856.201f, 42.0099f };
		case 190:
			return { 1877.057f, -1869.943f, 41.8052f };
		case 191:
			return { 1889.777f, -1879.549f, 41.8147f };
		case 192:
			return { 1906.5f, -1818.295f, 38.6799f };
		case 193:
			return { 1897.558f, -1858.596f, 46.341f };
		case 194:
			return { 1897.12f, -1860.05f, 46.341f };
		case 195:
			return { 1891.641f, -1870.441f, 42.1457f };
		case 196:
			return { 1895.595f, -1859.388f, 46.2972f };
		case 197:
			return { 1881.51f, -1849.799f, 42.4553f };
		case 198:
			return { 1882.52f, -1834.448f, 42.9333f };
		case 199:
			return { 1876.192f, -1883.639f, 41.7296f };
		case 202:
			return { 1882.255f, -1883.146f, 41.8057f };
		case 200:
			return { 1879.259f, -1879.515f, 41.8005f };
		case 201:
			return { 1878.292f, -1881.024f, 41.8093f };
		case 203:
			return { 1898.422f, -1859.928f, 42.1456f };
		case 204:
			return { 1903.948f, -1854.875f, 41.0543f };
		case 205:
			return { 1895.606f, -1871.699f, 42.1294f };
		case 206:
			return { 1891.924f, -1864.679f, 42.1401f };
		case 207:
			return { 1878.855f, -1856.19f, 41.7939f };
		case 208:
			return { 1875.995f, -1859.396f, 41.8185f };
		case 209:
			return { 1881.206f, -1861.845f, 41.8164f };
		case 210:
			return { 1879.314f, -1860.996f, 41.8015f };
		case 211:
			return { 1888.849f, -1866.193f, 47.1326f };
		case 212:
			return { 1892.637f, -1855.759f, 42.1324f };
		case 213:
			return { 1871.706f, -1863.183f, 41.8185f };
		case 214:
			return { 1873.123f, -1863.577f, 41.8022f };
		case 216:
			return { 1881.415f, -1875.467f, 41.824f };
		case 217:
			return { 1870.253f, -1862.845f, 41.8179f };
		case 218:
			return { 1973.86f, -1868.714f, 41.7978f };
		case 220:
			return { 1881.7f, -1874.126f, 41.7769f };
		case 221:
			return { 1882.689f, -1874.384f, 41.8045f };
		case 223:
			return { 1881.415f, -1875.467f, 41.834f };
		case 224:
			return { 1881.8f, -1873.626f, 41.797f };
		case 219:
			return { 1886.526f, -1883.668f, 41.8101f };
		case 225:
			return { 1869.947f, -1885.672f, 41.6695f };
		case 226:
			return { 1859.65f, -1895.84f, 40.5f };
		case 227:
			return { 1890.835f, -1882.48f, 41.7655f };
		case 228:
			return { 1881.733f, -1858.001f, 41.8096f };
		case 24:
			return { -1661.819f, -1336.845f, 83.0075f };
		case 25:
			return { -1639.374f, -1354.644f, 82.9775f };
		case 26:
			return { -1604.69f, -1408.436f, 80.9404f };
		case 27:
			return { -1550.021f, -1457.386f, 92.8075f };
		case 28:
			return { -1638.959f, -1361.78f, 83.3962f };
		case 29:
			return { -1643.839f, -1359.537f, 83.3962f };
		case 30:
			return { -1587.194f, -1407.788f, 80.698f };
		case 31:
			return { -1640.616f, -1360.573f, 85.8884f };
		case 32:
			return { -1643.254f, -1369.558f, 83.4323f };
		case 34:
			return { -1607.022f, -1417.066f, 80.9345f };
		case 33:
			return { -1674.691f, -1344.548f, 83.2438f };
		case 35:
			return { -1649.057f, -1373.304f, 86.166f };
		case 36:
			return { -1608.222f, -1414.939f, 80.9437f };
		case 37:
			return { -1598.507f, -1415.938f, 80.8841f };
		case 38:
			return { -1595.798f, -1412.841f, 80.936f };
		case 39:
			return { -1599.63f, -1418.125f, 80.9514f };
		case 40:
			return { -1605.622f, -1412.575f, 80.994f };
		case 41:
			return { -1599.027f, -1408.308f, 80.936f };
		case 42:
			return { -1598.673f, -1411.331f, 80.9016f };
		case 43:
			return { -1634.721f, -1360.413f, 83.3955f };
		case 44:
			return { -1581.597f, -1406.162f, 80.3383f };
		case 45:
			return { -1598.86f, -1407.787f, 80.9358f };
		case 46:
			return { -1603.663f, -1417.489f, 80.8918f };
		case 47:
			return { -1603.441f, -1418.861f, 80.8732f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 0.0f, 0.0f, -100.7f };
		case 1:
			return { 0.0f, 0.0f, 114.06f };
		case 2:
			return { 0.0f, 0.0f, -111.67f };
		case 3:
			return { 0.0f, 0.0f, -24.11f };
		case 10:
			return { 0.0f, 0.0f, -161.79f };
		case 4:
			return { 0.0f, 0.0f, -75.73f };
		case 5:
			return { 0.0f, 0.0f, -26.12f };
		case 6:
			return { 0.0f, 0.0f, -26.16f };
		case 7:
			return { 0.0f, 0.0f, -46.13f };
		case 8:
			return { 0.0f, 0.0f, 119.85f };
		case 9:
			return { 0.0f, 0.0f, 119.65f };
		case 11:
			return { -1.499f, 4.26f, -135.56f };
		case 12:
			return { 0.0f, 0.0f, -125.96f };
		case 13:
			return { 0.0f, 0.0f, 163.12f };
		case 14:
			return { 0.0f, 0.0f, 65.04f };
		case 15:
			return { 0.0f, 0.0f, 13.83f };
		case 16:
			return { 0.0f, 0.0f, 59.28f };
		case 18:
			return { 0.0f, 0.0f, 0.0f };
		case 19:
			return { 0.0f, 0.0f, 0.0f };
		case 20:
			return { 0.0f, 0.0f, -161.79f };
		case 21:
			return { 0.0f, 0.0f, -160.79f };
		case 22:
			return { 0.0f, 0.0f, -55.99f };
		case 23:
			return { 0.0f, 0.0f, 34.42f };
		case 103:
			return { 0.0f, 0.0f, 155.0f };
		case 104:
			return { 0.0f, 0.0f, -26.33f };
		case 105:
			return { 0.0f, 0.0f, 0.0f };
		case 106:
			return { 0.0f, 0.0f, -20.65f };
		case 107:
			return { 0.0f, 0.0f, 153.58f };
		case 108:
			return { 0.0f, 0.0f, 153.41f };
		case 109:
			return { 0.0f, 0.0f, 160.0f };
		case 49:
			return { 0.0f, 0.0f, -16.89f };
		case 50:
			return { 0.0f, 0.0f, -125.64f };
		case 51:
			return { 0.0f, 0.0f, 71.49f };
		case 52:
			return { 0.0f, 0.0f, -50.603f };
		case 53:
			return { 0.0f, 0.0f, -16.32f };
		case 54:
			return { 0.0f, 0.0f, 111.15f };
		case 55:
			return { 0.0f, 0.0f, -34.16f };
		case 56:
			return { 0.0f, 0.0f, -144.4f };
		case 57:
			return { 0.0f, 0.0f, -108.91f };
		case 58:
			return { 0.0f, 0.0f, -149.02f };
		case 59:
			return { 0.0f, 0.0f, -143.88f };
		case 60:
			return { 0.0f, 0.0f, 134.03f };
		case 61:
			return { 0.0f, 0.0f, -140.8f };
		case 62:
			return { 0.0f, 0.0f, 33.3f };
		case 63:
			return { 0.0f, 0.0f, 125.87f };
		case 64:
			return { 0.0f, 0.0f, -146.38f };
		case 65:
			return { 0.0f, 0.0f, -40.85f };
		case 66:
			return { 0.0f, 0.0f, 125.86f };
		case 67:
			return { 0.0f, 0.0f, 125.0f };
		case 68:
			return { 0.0f, 0.0f, -128.67f };
		case 70:
			return { 0.0f, 0.0f, -15.11f };
		case 71:
			return { 0.0f, 0.0f, -34.34f };
		case 72:
			return { 0.0f, 0.0f, 0.0f };
		case 73:
			return { 0.0f, 0.0f, -51.0f };
		case 74:
			return { 0.0f, 0.0f, -13.02f };
		case 75:
			return { 0.0f, 0.0f, 165.73f };
		case 79:
			return { 0.0f, 0.0f, -67.9f };
		case 77:
			return { 0.0f, 0.0f, -55.95f };
		case 78:
			return { 0.0f, 0.0f, -134.78f };
		case 76:
			return { 0.0f, 0.0f, -89.21f };
		case 80:
			return { 0.0f, 0.0f, -81.13f };
		case 82:
			return { 0.0f, 0.0f, 70.61f };
		case 83:
			return { 0.0f, 0.0f, -19.23f };
		case 81:
			return { 0.0f, 0.0f, -11.26f };
		case 84:
			return { 0.0f, 0.0f, 125.86f };
		case 85:
			return { 0.0f, 0.0f, -50.6f };
		case 86:
			return { 0.0f, 0.0f, -74.94f };
		case 87:
			return { 0.0f, 0.0f, 106.88f };
		case 89:
			return { 0.0f, 0.0f, 134.74f };
		case 90:
			return { 0.0f, 0.0f, 134.43f };
		case 92:
			return { 0.0f, 0.0f, -138.4f };
		case 94:
			return { 0.0f, 0.0f, -60.12f };
		case 88:
			return { 0.0f, 0.0f, -35.88f };
		case 95:
			return { 0.0f, 0.0f, 1.32f };
		case 96:
			return { 0.0f, 0.0f, -123.43f };
		case 97:
			return { 0.0f, 0.0f, 180.0f };
		case 98:
			return { 0.0f, 0.0f, -75.0f };
		case 99:
			return { 0.0f, 0.0f, 129.0f };
		case 100:
			return { 0.0f, 0.0f, 80.79f };
		case 101:
			return { 0.0f, 0.0f, 70.0f };
		case 102:
			return { 0.0f, 0.0f, 84.4f };
		case 110:
			return { 0.0f, 0.0f, 30.47f };
		case 111:
			return { 0.0f, 0.0f, 101.58f };
		case 112:
			return { 0.0f, 0.0f, 79.21f };
		case 113:
			return { 0.0f, 0.0f, -10.92f };
		case 114:
			return { 0.0f, 0.0f, 30.63f };
		case 116:
			return { 0.0f, 0.0f, 75.28f };
		case 117:
			return { 0.0f, 0.0f, -100.97f };
		case 118:
			return { 0.0f, 0.0f, 113.79f };
		case 119:
			return { 0.0f, 0.0f, 3.55f };
		case 120:
			return { 0.0f, 0.0f, 39.04f };
		case 121:
			return { 0.0f, 0.0f, 139.07f };
		case 122:
			return { 0.0f, 0.0f, 178.61f };
		case 123:
			return { 0.0f, 0.0f, -75.02f };
		case 124:
			return { 0.0f, 0.0f, 9.63f };
		case 125:
			return { 0.0f, 0.0f, 71.32f };
		case 126:
			return { 0.0f, 0.0f, 85.0f };
		case 127:
			return { 0.0f, 0.0f, 173.23f };
		case 128:
			return { 0.0f, 0.0f, 84.96f };
		case 129:
			return { 0.0f, 0.0f, 84.96f };
		case 130:
			return { 0.0f, 0.0f, 85.0f };
		case 131:
			return { 0.174f, 3.834f, 0.107f };
		case 132:
			return { 0.0f, 0.0f, -105.84f };
		case 134:
			return { 0.0f, 0.0f, -12.98f };
		case 135:
			return { 0.0f, 0.0f, -121.39f };
		case 136:
			return { 0.0f, 0.0f, 25.63f };
		case 137:
			return { 0.0f, 0.0f, 59.67f };
		case 138:
			return { 0.0f, 0.0f, -121.59f };
		case 139:
			return { 0.0f, 0.0f, 0.0f };
		case 140:
			return { 0.0f, 0.0f, 0.0f };
		case 146:
			return { 0.0f, 0.0f, 0.0f };
		case 144:
			return { 0.0f, 0.0f, 13.05f };
		case 145:
			return { 0.0f, 0.0f, -65.78f };
		case 141:
			return { 0.0f, 0.0f, -4.0f };
		case 142:
			return { 0.0f, 0.0f, -22.68f };
		case 143:
			return { -0.541f, 1.972f, -23.429f };
		case 147:
			return { 0.0f, 0.0f, 0.99f };
		case 149:
			return { 0.0f, 0.0f, 152.86f };
		case 150:
			return { 0.0f, 0.0f, -90.36f };
		case 148:
			return { 0.0f, 0.0f, 70.67f };
		case 151:
			return { 0.0f, 0.0f, 84.96f };
		case 152:
			return { 0.0f, 0.0f, -51.94f };
		case 153:
			return { 0.0f, 0.0f, 0.0f };
		case 154:
			return { 0.0f, 0.0f, 0.0f };
		case 155:
			return { 0.0f, 0.0f, 157.49f };
		case 156:
			return { 0.0f, 0.0f, -104.0f };
		case 157:
			return { 0.0f, 0.0f, -104.0f };
		case 158:
			return { 0.0f, 0.0f, -50.0f };
		case 159:
			return { 0.0f, 0.0f, 69.12f };
		case 160:
			return { 0.0f, 0.0f, -37.3f };
		case 161:
			return { 0.0f, 0.0f, -71.02f };
		case 162:
			return { 0.0f, 0.0f, -103.99f };
		case 163:
			return { 0.0f, 0.0f, -104.12f };
		case 165:
			return { 0.0f, 0.0f, 164.57f };
		case 167:
			return { 0.0f, 0.0f, 38.63f };
		case 169:
			return { 0.0f, 0.0f, -134.42f };
		case 170:
			return { 0.0f, 0.0f, 0.0f };
		case 171:
			return { 0.0f, 0.0f, 0.0f };
		case 172:
			return { 0.0f, 0.0f, 0.0f };
		case 168:
			return { 0.0f, 0.0f, -164.4f };
		case 173:
			return { 0.0f, 0.0f, 0.0f };
		case 174:
			return { 0.0f, 0.0f, 62.89f };
		case 175:
			return { 0.0f, 0.0f, 166.69f };
		case 176:
			return { 0.67f, -1.78f, 162.66f };
		case 177:
			return { 0.0f, 0.0f, -2.22f };
		case 178:
			return { 0.0f, 0.0f, 180.0f };
		case 179:
			return { 0.0f, 0.0f, -130.17f };
		case 181:
			return { 0.0f, 0.0f, 93.33f };
		case 182:
			return { 0.0f, 0.0f, -39.99f };
		case 183:
			return { 0.0f, 0.0f, 50.99f };
		case 184:
			return { 0.0f, 0.0f, 177.92f };
		case 185:
			return { 0.0f, 0.0f, -176.32f };
		case 186:
			return { 0.0f, 0.0f, -120.97f };
		case 187:
			return { 0.0f, 0.0f, 93.79f };
		case 188:
			return { 0.0f, 0.0f, -56.45f };
		case 189:
			return { 0.0f, 0.0f, 19.04f };
		case 190:
			return { 0.0f, 0.0f, 165.1f };
		case 191:
			return { 0.0f, 0.0f, -151.73f };
		case 192:
			return { 0.0f, 0.0f, 0.0f };
		case 193:
			return { 0.0f, 0.0f, 158.13f };
		case 194:
			return { 0.0f, 0.0f, -50.0f };
		case 195:
			return { 0.0f, 0.0f, -31.88f };
		case 196:
			return { 0.0f, 0.0f, -85.0f };
		case 197:
			return { 0.0f, 0.0f, -60.0f };
		case 198:
			return { 0.0f, 0.0f, 176.19f };
		case 199:
			return { 0.0f, 0.0f, -135.47f };
		case 202:
			return { 0.0f, 0.0f, -115.29f };
		case 200:
			return { 0.0f, 0.0f, -102.25f };
		case 201:
			return { 0.0f, 0.0f, 178.92f };
		case 203:
			return { 0.0f, 0.0f, -124.94f };
		case 204:
			return { 0.0f, 0.0f, 156.43f };
		case 205:
			return { 0.0f, 0.0f, 163.55f };
		case 206:
			return { 0.0f, 0.0f, -29.7f };
		case 207:
			return { 0.0f, 0.0f, -79.03f };
		case 208:
			return { 0.0f, 0.0f, -9.33f };
		case 209:
			return { 0.0f, 0.0f, 72.86f };
		case 210:
			return { 0.0f, 0.0f, -17.13f };
		case 211:
			return { 0.0f, 0.0f, 158.515f };
		case 212:
			return { 0.0f, 0.0f, -85.0f };
		case 213:
			return { 0.0f, 0.0f, -80.0f };
		case 214:
			return { 0.0f, 0.0f, -104.21f };
		case 216:
			return { 0.0f, 0.0f, 173.75f };
		case 217:
			return { 0.0f, 0.0f, 77.49f };
		case 218:
			return { 0.0f, 0.0f, 180.0f };
		case 220:
			return { 0.0f, 0.0f, -103.99f };
		case 221:
			return { 0.0f, 0.0f, -104.12f };
		case 223:
			return { 0.0f, 0.0f, 69.12f };
		case 224:
			return { 0.0f, 0.0f, 54.0f };
		case 219:
			return { 0.0f, 0.0f, 139.09f };
		case 225:
			return { 0.0f, 0.0f, 0.0f };
		case 226:
			return { 0.0f, 0.0f, -150.12f };
		case 227:
			return { 0.0f, 0.0f, -56.37f };
		case 228:
			return { 0.0f, 0.0f, 82.86f };
		case 24:
			return { 0.0f, 0.0f, 42.8f };
		case 25:
			return { 0.0f, 0.0f, -61.86f };
		case 26:
			return { 0.0f, 0.0f, -115.05f };
		case 27:
			return { 0.0f, 0.0f, 0.0f };
		case 28:
			return { 0.0f, 0.0f, 148.74f };
		case 29:
			return { 0.0f, 0.0f, 60.0f };
		case 30:
			return { 0.0f, 0.0f, 46.5f };
		case 31:
			return { 0.0f, 0.0f, 0.0f };
		case 32:
			return { 0.0f, 0.0f, -42.05f };
		case 34:
			return { 0.0f, 0.0f, -26.98f };
		case 33:
			return { 0.0f, 0.0f, 75.43f };
		case 35:
			return { 0.0f, 0.0f, 0.0f };
		case 36:
			return { 0.0f, 0.0f, -115.0f };
		case 37:
			return { 0.0f, 0.0f, 6.33f };
		case 38:
			return { 0.0f, 0.0f, 155.0f };
		case 39:
			return { 0.0f, 0.0f, 0.0f };
		case 40:
			return { 0.0f, 0.0f, 165.0f };
		case 41:
			return { 0.0f, 0.0f, 155.0f };
		case 42:
			return { 0.0f, 0.0f, 69.0f };
		case 43:
			return { 0.0f, 0.0f, -165.29f };
		case 44:
			return { 0.0f, 0.0f, 180.0f };
		case 45:
			return { 0.0f, 0.0f, 155.0f };
		case 46:
			return { 0.0f, 0.0f, -24.82f };
		case 47:
			return { 0.0f, 0.0f, 0.0f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BILL";
		case 7:
			return "CHARLES";
		case 0:
			return "DUTCH";
		case 5:
			return "HOSEA";
		case 14:
			return "JACK";
		case 1:
			return "JOHN";
		case 2:
			return "JAVIER";
		case 9:
			return "LENNY";
		case 6:
			return "MICAH";
		case 10:
			return "KIERAN";
		case 17:
			return "PEARSON";
		case 8:
			return "SEAN";
		case 18:
			return "STRAUSS";
		case 21:
			return "SWANSON";
		case 23:
			return "JOSIAH";
		case 4:
			return "UNCLE";
		case 13:
			return "ABIGAIL";
		case 20:
			return "KAREN";
		case 15:
			return "MARYBETH";
		case 16:
			return "MOLLY";
		case 11:
			return "SADIE";
		case 19:
			return "SUSAN";
		case 22:
			return "TILLY";
		case 12:
			return "CAIN";
		default:
			break;
	}
	return "INVALID ENUM";
}

Vector3 func_273(var uParam0, Vector3 vParam1)
{
	return OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_23, uParam0->f_26.f_2, vParam1);
}

float func_274(var uParam0, float fParam1)
{
	float fVar0;

	fVar0 = (fParam1 + uParam0->f_26.f_2);
	if (fVar0 > 180.0f)
	{
		fVar0 -= 360.0f;
	}
	else if (fVar0 < -180.0f)
	{
		fVar0 += 360.0f;
	}
	return fVar0;
}

void func_275(var uParam0, int iParam1, float fParam2)
{
	if (fParam2 == -2.0f)
	{
		fParam2 = func_450(1101004800, 1123024896);
	}
	else if (fParam2 < 0.0f)
	{
		fParam2 = -1.0f;
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_4 = fParam2;
}

void func_276(var uParam0)
{
	func_451(*uParam0);
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_22 = 0;
	uParam0->f_2 = -1;
	uParam0->f_3 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	strcpy_s(&(uParam0->f_6), 24, "");
	strcpy_s(&(uParam0->f_9), 24, "");
	uParam0->f_25 = 0;
	uParam0->f_21 = 0;
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_277(int iParam0)
{
	Global_1359489.f_361.f_3[iParam0] = -1;
	Global_1359489.f_361.f_15[iParam0] = 0;
	Global_1359489.f_361.f_59 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_1359489.f_361.f_84[iParam0]))
	{
		OBJECT::DELETE_OBJECT(&(Global_1359489.f_361.f_84[iParam0]));
	}
	if (func_452() == 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1359489.f_361.f_72))
		{
			MAP::REMOVE_BLIP(&(Global_1359489.f_361.f_72));
		}
	}
	if (Global_40.f_6563[iParam0 /*27*/] == 9 || Global_40.f_6563[iParam0 /*27*/] == 11)
	{
		func_453();
	}
	func_8(&(Global_1359489.f_361.f_61[iParam0]), 1, 1);
}

void func_278(int iParam0)
{
	func_122(Global_40.f_6563[iParam0 /*27*/].f_3, (1 << 9), 0);
	func_122(Global_40.f_6563[iParam0 /*27*/].f_3, (1 << 10), 0);
}

void func_279()
{
	int iVar0;

	iVar0 = (Global_1359489.f_361.f_1 - 1);
	if (iVar0 < 0)
	{
		return;
	}
	Global_1359489.f_361.f_1--;
}

int func_280(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_454(vVar0, vVar3.x, iParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_281(var uParam0, int iParam1, float fParam2)
{
	uParam0->f_107[iParam1 /*113*/].f_100 = fParam2;
}

bool func_282(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (func_58(uParam0->f_107[iVar1 /*113*/].f_1))
		{
		}
		else
		{
			if (func_54(uParam0->f_107[iVar1 /*113*/].f_7))
			{
				if (func_55(uParam0->f_107[iVar1 /*113*/].f_7) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar1 /*113*/].f_5))
				{
				}
				else
				{
					uParam0->f_107[iVar1 /*113*/].f_5 = func_455(uParam0->f_107[iVar1 /*113*/].f_7, 1, 1, 0, 0, 1, 1, uParam0->f_107[iVar1 /*113*/].f_6, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					return false;
					if (uParam0->f_107[iVar1 /*113*/].f_102 || uParam0->f_107[iVar1 /*113*/].f_103)
					{
						if (!func_54(uParam0->f_107[iVar1 /*113*/].f_1))
						{
							if (uParam0->f_107[iVar1 /*113*/].f_103)
							{
								uParam0->f_107[iVar1 /*113*/].f_1 = func_456(uParam0, 1, 1);
							}
							else
							{
								uParam0->f_107[iVar1 /*113*/].f_1 = func_456(uParam0, 1, 0);
							}
						}
						if (!func_54(uParam0->f_107[iVar1 /*113*/].f_1))
						{
							if (uParam0->f_107[iVar1 /*113*/].f_103)
							{
								Jump @330; // curOff = 280
							}
							else
							{
								return false;
							}
						}
					}
					if (!func_457(uParam0, iVar1, uParam0->f_107[iVar1 /*113*/].f_1))
					{
						if (!uParam0->f_21)
						{
							return false;
						}
						else
						{
							iVar0 = 0;
						}
					}
				}
				iVar1++;
				return iVar0;
			}
		}
	}
}

void func_283(var uParam0, int iParam1)
{
	Global_1327590.f_19547[*uParam0 /*5*/].f_3 = iParam1;
}

bool func_284(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		iVar1 = uParam0->f_107[iVar0 /*113*/].f_2;
		if (!func_61(iVar1))
		{
		}
		else if (func_62(iVar1))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_DEAD(func_458(iVar1)))
			{
				func_459(iVar1, 1);
				return false;
			}
			uParam0->f_107[iVar0 /*113*/].f_5 = func_460(iVar1, 0, 0, 1, 1, 1);
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iVar0 /*113*/].f_5))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_285(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_107[iVar0 /*113*/].f_3))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_107[iVar0 /*113*/].f_3))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar0 /*15*/]))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_1711[iVar0 /*15*/]))
		{
			return false;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1967)
	{
		if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1967[iVar0 /*4*/]))
		{
		}
		else if (!WEAPON::_HAS_WEAPON_ASSET_LOADED(uParam0->f_1967[iVar0 /*4*/]))
		{
			return false;
		}
		iVar0++;
	}
	if (uParam0->f_1976.f_5)
	{
		if (!PROPSET::_HAS_PROP_SET_LOADED_2(uParam0->f_1976))
		{
			PROPSET::_REQUEST_PROP_SET_2(uParam0->f_1976);
			return false;
		}
	}
	return true;
}

bool func_286(var uParam0)
{
	if (!HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_2232)))
	{
		return true;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_2232)))
	{
		return false;
	}
	return true;
}

bool func_287(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_32.f_2 != 0)
		{
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(uParam0->f_107[iVar0 /*113*/].f_32.f_2, false))
			{
				return false;
			}
		}
		if (uParam0->f_107[iVar0 /*113*/].f_8.f_1 != 0)
		{
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(uParam0->f_107[iVar0 /*113*/].f_8.f_1, false))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_288(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_2236)
	{
		if (!STREAMING::DOES_ANIM_DICT_EXIST(&(uParam0->f_2236[iVar0 /*8*/])))
		{
		}
		else if (!STREAMING::HAS_ANIM_DICT_LOADED(&(uParam0->f_2236[iVar0 /*8*/])))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_289(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_1984)
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_1984[iVar1]))
		{
		}
		else if (ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_1984[iVar1], true, false))
		{
		}
		else
		{
			iVar0 = 0;
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_1984[iVar1], true))
			{
			}
			else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_1984[iVar1], false))
			{
				func_51(uParam0, "Metadata not loaded", 20, -1);
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS(uParam0->f_1984[iVar1], 0) > 2)
			{
				func_51(uParam0, "Audio load stress is too high", 20, -1);
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1984[iVar1]);
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_290(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	bool bVar7;
	int iVar8;

	iVar0 = 1;
	iVar8 = 0;
	while (iVar8 < uParam0->f_2051)
	{
		iVar1 = uParam0->f_2051[iVar8 /*6*/];
		if (iVar1 < 0)
		{
		}
		else
		{
			sVar2 = { uParam0->f_2051[iVar8 /*6*/].f_1 /*4*/ };
			bVar7 = uParam0->f_2051[iVar8 /*6*/].f_5;
			iVar6 = uParam0->f_1984[iVar1];
			if (!bVar7)
			{
			}
			else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar6))
			{
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar6, true, false))
				{
					return false;
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iVar6, &sVar2))
				{
				}
				else
				{
					iVar0 = 0;
					if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(iVar6, &sVar2))
					{
					}
					else if (ANIMSCENE::_GET_ANIM_SCENE_PLAYBACK_LIST_PHASE_AUDIO_LOAD_STRESS(iVar6, &sVar2) > 2)
					{
						func_51(uParam0, "Audio load stress is too high", 20, -1);
					}
					else
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iVar6, &sVar2);
					}
				}
			}
		}
		iVar8++;
	}
	return iVar0;
}

bool func_291(var uParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	iVar1 = 0;
	while (iVar1 < uParam0->f_1711)
	{
		if (!STREAMING::IS_MODEL_VALID(uParam0->f_1711[iVar1 /*15*/]))
		{
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar1 /*15*/].f_10))
		{
		}
		else if (uParam0->f_1711[iVar1 /*15*/].f_5)
		{
			iVar0 = 0;
			if (uParam0->f_1711[iVar1 /*15*/].f_8)
			{
				vVar2 = { func_273(uParam0, uParam0->f_1711[iVar1 /*15*/].f_1) /*3*/ };
			}
			else
			{
				vVar2 = { uParam0->f_1711[iVar1 /*15*/].f_1 /*3*/ };
			}
			if (uParam0->f_1711[iVar1 /*15*/].f_9 == 0)
			{
				uParam0->f_1711[iVar1 /*15*/].f_9 = ENTITY::PIN_CLOSEST_MAP_ENTITY(uParam0->f_1711[iVar1 /*15*/], vVar2, 15);
			}
			if (uParam0->f_1711[iVar1 /*15*/].f_9 != 0)
			{
				if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_1711[iVar1 /*15*/].f_9))
				{
					iVar0 = ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_1711[iVar1 /*15*/].f_9);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				uParam0->f_1711[iVar1 /*15*/].f_10 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1711[iVar1 /*15*/].f_10))
			{
			}
			else
			{
				if ((MISC::GET_FRAME_COUNT() % 60) == 0)
				{
				}
				return false;
			}
		}
		iVar1++;
	}
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
	{
		if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_29)))
		{
			return false;
		}
	}
	return true;
}

bool func_292(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar0 /*113*/].f_5))
		{
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iVar0 /*113*/].f_32.f_23)))
		{
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uParam0->f_107[iVar0 /*113*/].f_5, &(uParam0->f_107[iVar0 /*113*/].f_32.f_23));
		}
		iVar0++;
	}
	return true;
}

bool func_293(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iVar0, false))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return false;
	}
	return true;
}

int func_294(int iParam0)
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

int func_295(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

void func_296(var uParam0, bool bParam1, bool bParam2)
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		return;
	}
	TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 23, true);
	TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 25, true);
	if (bParam1)
	{
		TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 51, true);
	}
	if (bParam2)
	{
		TASK::_SET_SCENARIO_POINT_FLAG(*uParam0, 60, true);
	}
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case joaat("APMS_COMP_BILL"):
			return 3;
		case joaat("APMS_COMP_CHARLES"):
			return 7;
		case joaat("APMS_COMP_DUTCH"):
			return 0;
		case joaat("APMS_COMP_HOSEA"):
			return 5;
		case joaat("APMS_COMP_JACK"):
			return 14;
		case joaat("APMS_COMP_JOHN"):
			return 1;
		case joaat("APMS_COMP_JAVIER"):
			return 2;
		case joaat("APMS_COMP_LENNY"):
			return 9;
		case joaat("APMS_COMP_MICAH"):
			return 6;
		case joaat("APMS_COMP_KIERAN"):
			return 10;
		case joaat("APMS_COMP_PEARSON"):
			return 17;
		case joaat("APMS_COMP_SEAN"):
			return 8;
		case joaat("APMS_COMP_STRAUSS"):
			return 18;
		case joaat("APMS_COMP_SWANSON"):
			return 21;
		case joaat("APMS_COMP_TRELAWNY"):
			return 23;
		case joaat("APMS_COMP_UNCLE"):
			return 4;
		case joaat("APMS_COMP_ABIGAIL"):
			return 13;
		case joaat("APMS_COMP_KAREN"):
			return 20;
		case joaat("APMS_COMP_MARYBETH"):
			return 15;
		case joaat("APMS_COMP_MOLLY"):
			return 16;
		case joaat("APMS_COMP_ADLERS"):
			return 11;
		case joaat("APMS_COMP_GRIMSHAW"):
			return 19;
		case joaat("APMS_COMP_TILLY"):
			return 22;
		case joaat("APMS_DOG_LAB"):
			return 12;
		default:
			break;
	}
	return -1;
}

int func_298(int iParam0)
{
	iParam0 = func_461(iParam0);
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

void func_299(var uParam0, int iParam1)
{
	if (!uParam0->f_107[iParam1 /*113*/].f_8.f_20)
	{
		if (func_114(&(uParam0->f_107[iParam1 /*113*/].f_8.f_17)) >= uParam0->f_107[iParam1 /*113*/].f_8.f_15)
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_8.f_23))
			{
				if (!PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23))
				{
					TASK::TASK_USE_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23, uParam0->f_107[iParam1 /*113*/].f_8.f_2, 0, true, false, uParam0->f_107[iParam1 /*113*/].f_8.f_1, uParam0->f_107[iParam1 /*113*/].f_8.f_16, -1.0f, false);
					func_130(&(uParam0->f_107[iParam1 /*113*/].f_8.f_17));
					uParam0->f_107[iParam1 /*113*/].f_8.f_20 = 1;
				}
			}
		}
	}
	else if (!func_462(uParam0->f_107[iParam1 /*113*/].f_5, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")))
	{
		uParam0->f_107[iParam1 /*113*/].f_8.f_14 = 0;
	}
}

bool func_300(var uParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	fVar0 = (uParam0->f_2256 * uParam0->f_2256);
	fVar1 = (uParam0->f_2252 * uParam0->f_2252);
	fVar2 = (uParam0->f_2253 * uParam0->f_2253);
	if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(uParam0->f_107[iParam1 /*113*/].f_3, vParam2, true))
	{
		if (!func_113(&(uParam0->f_107[iParam1 /*113*/].f_109)))
		{
			func_116(&(uParam0->f_107[iParam1 /*113*/].f_109), 0.0f);
		}
	}
	else
	{
		func_130(&(uParam0->f_107[iParam1 /*113*/].f_109));
	}
	fVar3 = BUILTIN::VDIST2(Global_36, vParam2);
	if (fVar3 > fVar0)
	{
		return true;
	}
	if (fVar3 < fVar1)
	{
		func_51(uParam0, "Create - Player is too close to the start location", 200, iParam1);
		return false;
	}
	if (fVar3 > fVar2)
	{
		fVar4 = uParam0->f_2255;
	}
	else
	{
		fVar4 = func_463(fVar3, fVar1, fVar2, uParam0->f_2254, uParam0->f_2255);
	}
	if (func_114(&(uParam0->f_107[iParam1 /*113*/].f_109)) < fVar4)
	{
		func_51(uParam0, "Create - Start location is on screen or has been on screen recently", 200, iParam1);
		return false;
	}
	return true;
}

bool func_301(var uParam0, int iParam1, Vector3 vParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;

	fVar0 = (uParam0->f_2261 * uParam0->f_2261);
	fVar1 = (uParam0->f_2257 * uParam0->f_2257);
	fVar2 = (uParam0->f_2258 * uParam0->f_2258);
	if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		if (!func_113(&(uParam0->f_107[iParam1 /*113*/].f_106)))
		{
			func_116(&(uParam0->f_107[iParam1 /*113*/].f_106), 0.0f);
		}
	}
	else
	{
		func_130(&(uParam0->f_107[iParam1 /*113*/].f_106));
	}
	fVar3 = BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false));
	if (fVar3 > fVar0)
	{
		return true;
	}
	if (fVar3 < fVar1)
	{
		func_51(uParam0, "Create - Player is too close to ped", 200, iParam1);
		return false;
	}
	if (fVar3 > fVar2)
	{
		fVar4 = uParam0->f_2260;
	}
	else
	{
		fVar4 = func_463(fVar3, fVar1, fVar2, uParam0->f_2259, uParam0->f_2260);
	}
	if (func_153(uParam0) == 3 || func_153(uParam0) == 8)
	{
		iVar5 = func_312(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false));
		iVar6 = func_312(uParam0->f_107[iParam1 /*113*/].f_96);
		if (iVar5 != iVar6)
		{
			func_51(uParam0, "Create - Halving the virtual speed because of indoors/outdoors warping", 200, iParam1);
			fVar4 /= 2.0f;
		}
	}
	fVar7 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), vParam2);
	fVar8 = (func_114(&(uParam0->f_107[iParam1 /*113*/].f_106)) * fVar4);
	fVar9 = (fVar8 * fVar8);
	if (fVar9 < fVar7)
	{
		func_51(uParam0, "Create - Ped is on screen or has been on screen recently", 200, iParam1);
		return false;
	}
	return true;
}

bool func_302(var uParam0, int iParam1)
{
	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_8.f_23))
	{
		return false;
	}
	func_188(uParam0, iParam1);
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_107[iParam1 /*113*/].f_5, false, true);
	TASK::TASK_USE_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_8.f_23, uParam0->f_107[iParam1 /*113*/].f_8.f_2, 0, false, true, 0, false, -1.0f, false);
	PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_107[iParam1 /*113*/].f_5, false, false);
	return true;
}

bool func_303(int iParam0)
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

void func_304(int iParam0, int iParam1)
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

int func_305(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_464(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_306()
{
	if (func_242() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

void func_307(int iParam0, int iParam1, char* sParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, sParam2, iParam0, 0);
}

void func_308(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0))
		{
			PED::_REMOVE_PED_FROM_MOUNT(iParam0, true, false);
		}
	}
}

void func_309(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_67[iParam1]))
	{
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_67[iParam1], bParam2);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_67[iParam1], bParam2);
	}
}

void func_310(int iParam0, int iParam1, char* sParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iParam1, false))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(iParam1, sParam2))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam1, sParam2, iParam0, 0);
}

int func_311(int iParam0, struct<8> /*64*/ sParam1, int iParam9)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&sParam1))
	{
		return 0;
	}
	if (!func_108(iParam0))
	{
		return 0;
	}
	iVar0 = func_294(iParam0);
	if (iVar0 != 0 && func_465(iParam0))
	{
		Global_1360165[iParam0 /*1157*/].f_39 = { sParam1 /*8*/ };
		PERSCHAR::_SET_PERSCHAR_SCHEDULE(iVar0, &sParam1);
		func_59(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			iVar1 = func_30();
			func_31(&iVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0 /*60*/].f_46 = iVar1;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0 /*60*/].f_46 = -15;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 0;
		}
		Global_1360165[iParam0 /*1157*/].f_56 = 1;
		return 1;
	}
	return 0;
}

int func_312(Vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_313(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 30);
}

bool func_314(int iParam0)
{
	if (Global_1327590.f_19744 == -1)
	{
		return false;
	}
	if (iParam0 != -1)
	{
		if (func_22(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_315(int iParam0)
{
	Global_1327590.f_19744 = iParam0;
}

bool func_316(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
	{
		return false;
	}
	return true;
}

int func_317(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0;
	}
	ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
	return 1;
}

void func_318(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

bool func_319(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_320(var uParam0, struct<4> /*32*/ sParam1, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, bool bParam11, bool bParam12)
{
	if (bParam11)
	{
		if (!func_466(func_21(uParam0), 1))
		{
			return false;
		}
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, sParam1, true) > sParam1.f_9)
	{
		return false;
	}
	if (!func_467(sParam1, sParam1.f_6, Global_36))
	{
		return false;
	}
	if (func_467(sParam1, sParam1.f_3, Global_36))
	{
		return false;
	}
	if (bParam12)
	{
		if (MISC::ABSF((sParam1.f_2 - Global_36.f_2)) > 2.0f)
		{
			return false;
		}
	}
	return true;
}

int func_321(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_227(iVar0, 2))
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
				func_468(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0.0f, 0.0f, 0.0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_322(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_48(iParam0))
	{
		return;
	}
	iVar0 = func_49(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[iVar0 /*18*/].f_3, iParam1, iParam2);
}

bool func_323(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_48(iParam0))
	{
		return false;
	}
	iVar0 = func_49(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

bool func_324(int iParam0, bool bParam1)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0) || !bParam1)
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
			if (INTERIOR::IS_VALID_INTERIOR(iVar0))
			{
				if (func_469(iVar0) | func_470(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_325(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < uParam0->f_106)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iVar1 /*113*/].f_5))
		{
		}
		else
		{
			fVar0 = func_471(Global_35, uParam0->f_107[iVar1 /*113*/].f_5, 1, 1);
			if (fVar0 > fParam2)
			{
			}
			else
			{
				if (fVar0 < fParam1)
				{
					return true;
				}
				if (!ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_107[iVar1 /*113*/].f_5))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

bool func_326(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 673);
}

bool func_327(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_472(iParam1) || !func_472(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return;
	}
	bVar0 = ((iParam2 > 0 || iParam3 > 0) || iParam4 > 0);
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = 0;
	}
	if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	iVar1 = func_30();
	if (bVar0)
	{
		func_31(&iVar1, 0, iParam2, iParam3, iParam4, 0, 0, 0);
		if (!func_472(iVar1))
		{
			return;
		}
	}
	if (bParam6)
	{
		if (bVar0)
		{
			Global_1360165[iParam0 /*1157*/].f_1152 = iParam1;
			Global_1360165[iParam0 /*1157*/].f_1153 = iVar1;
		}
		return;
	}
	if (bVar0)
	{
		Global_40.f_4942[iParam0 /*60*/].f_42 = iParam1;
		Global_40.f_4942[iParam0 /*60*/].f_43 = iVar1;
	}
	else
	{
		Global_40.f_4942[iParam0 /*60*/].f_44 = iParam1;
		if (bParam5)
		{
			Global_40.f_4942[iParam0 /*60*/].f_42 = -1;
			Global_40.f_4942[iParam0 /*60*/].f_43 = -15;
		}
	}
}

void func_329(int iParam0, float fParam1)
{
	int iVar0;

	if (!func_54(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	PED::_SET_PED_DRUNKNESS(iVar0, true, fParam1);
}

void func_330(var uParam0, int iParam1)
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
			uParam0->f_22 = func_473(joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"));
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
			uParam0->f_22 = func_473(joaat("CONSUMABLE_HORSE_REVIVER"));
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
			uParam0->f_22 = func_473(joaat("CONSUMABLE_PREDATOR_BAIT"));
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
			uParam0->f_22 = func_473(joaat("CONSUMABLE_POTENT_MEDICINE"));
			uParam0->f_23 = joaat("CIR_HOSEA_GINSENG");
			break;
		case 8:
			uParam0->f_1 = joaat("DOCUMENT_BOOK_BLACK_HEART_LADY");
			uParam0->f_2 = 1;
			uParam0->f_3 = 14;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMJCKA2");
			uParam0->f_22 = func_473(joaat("CONSUMABLE_CHOCOLATE_BAR"));
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
			uParam0->f_22 = func_473(joaat("CONSUMABLE_HORSE_STIMULANT"));
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
			uParam0->f_22 = func_473(joaat("PROVISION_GOLDRING"));
			break;
		case 14:
			uParam0->f_1 = joaat("PROVISION_MOLLYS_POCKET_MIRROR");
			uParam0->f_2 = 1;
			uParam0->f_3 = 16;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CALCM_ITMMOLA1");
			uParam0->f_22 = func_473(joaat("CONSUMABLE_CIGAR"));
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
			uParam0->f_22 = func_473(joaat("CONSUMABLE_RUM"));
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
			uParam0->f_22 = func_473(joaat("KIT_GUN_OIL"));
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
			uParam0->f_22 = func_473(joaat("CONSUMABLE_POTENT_TONIC"));
			uParam0->f_23 = joaat("CIR_SUSAN_SEASONING");
			break;
		case 20:
			uParam0->f_1 = joaat("PROVISION_NECKLACE_SILVER");
			uParam0->f_2 = 1;
			uParam0->f_3 = 22;
			uParam0->f_4 = 0;
			uParam0->f_5 = 2;
			strcpy_s(&(uParam0->f_6), 24, "CPGEN_ITMTLL");
			uParam0->f_22 = func_473(joaat("CONSUMABLE_MEDICINE"));
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

void func_331(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			if (func_344(joaat("PROVISION_JACKS_THIMBLE"), 0, 0) < 1)
			{
				func_474();
				func_475(joaat("REWARD_PED_SMALL"), 0.68f);
				func_475(joaat("REWARD_PED_MEDIUM"), 0.68f);
				func_475(joaat("REWARD_PED_LARGE"), 0.68f);
			}
			break;
	}
}

void func_332(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_476(*uParam0);
	iVar1 = func_477(*uParam0);
	iVar2 = MISC::GET_HASH_KEY(func_478(uParam0->f_3));
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(8, iVar0, func_479(func_24()), 1307979820, func_480(*uParam0), 0);
		UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(8, iVar0, iVar2, 1997120069);
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(8, iVar0, iVar1, joaat("SP_MISSIONS_22"));
		if (*uParam0 == 21)
		{
			func_481(1, joaat("CONSUMABLE_WHISKEY"), 0);
			func_481(2, joaat("CONSUMABLE_PEPPERMINT"), 0);
			func_481(3, joaat("CONSUMABLE_HERB_MILKWEED"), 0);
			func_481(4, joaat("CONSUMABLE_HAIR_GREASE"), 0);
			func_481(5, 0, joaat("AT_SKUNK"));
			iVar3 = 0;
			while (iVar3 < 6)
			{
				if (iVar3 == 0)
				{
				}
				else
				{
					func_482(uParam0, iVar3, &(Global_1359489.f_361.f_258[iVar3 /*6*/].f_2), 0, 1, 1);
				}
				iVar3++;
			}
		}
	}
}

bool func_333(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_242() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_334(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_483(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_485(iVar0, iVar1);
}

void func_335(var uParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char[] cVar4[8];

	iVar0 = func_486(*uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 == 761950088)
	{
		sVar1 = MISC::VAR_STRING(0, uParam0->f_1);
		MISC::_INT_TO_STRING(uParam0->f_2, "%i", &cVar4);
		sVar3 = func_487(&cVar4, joaat("COLOR_PURE_WHITE"));
		sVar2 = func_488(uParam0->f_3, 0);
		func_482(uParam0, 1896170705, MISC::VAR_STRING(168, iVar0, sVar2, sVar3, sVar1), 0, bParam1, 0);
	}
	else
	{
		func_482(uParam0, 1896170705, HUD::GET_STRING_FROM_HASH_KEY(iVar0), 0, bParam1, 0);
	}
}

void func_336(int iParam0, int iParam1)
{
	Global_40.f_6563[iParam0 /*27*/].f_24 = iParam1;
}

void func_337()
{
	int iVar0;

	iVar0 = Global_1359489.f_361.f_1 + 1;
	if (iVar0 > 10)
	{
		return;
	}
	Global_1359489.f_361.f_1++;
}

struct<2> /*16*/ func_338(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

void func_339(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_340(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_341(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_242() == -1)
	{
		if (func_489(iParam0) && func_490(iParam0))
		{
			func_491(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_342(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_492(iParam0, iParam1);
	sVar0 = { func_493(iParam0, 0, 1) /*5*/ };
	iVar5 = func_494(iParam0, &sVar0, 0, 0);
	iVar6 = func_495(iParam0, 0);
	if ((iVar5 > 1 && !func_496()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_361(iParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_334(583, 1);
		}
		else
		{
			func_334(582, 0);
		}
	}
	if (func_497(iParam0, &sVar0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_343(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_498(iParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case joaat("CI_TAG_PAPER_W15_24_H10_16"):
		case joaat("CI_TAG_PAPER_W11_5_H20_5"):
		case -1239610997:
		case joaat("CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2"):
		case joaat("CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL"):
		case -873135685:
		case joaat("CI_TAG_PAPER_W12_7_H17_78"):
		case 10252101:
		case 24248412:
		case joaat("CI_TAG_PAPER_NEWSPAPER"):
		case 632545869:
		case joaat("CI_TAG_PAPER_W10_16_H15_24"):
		case joaat("CI_TAG_PAPER_D2_H32_ROLLED"):
		case joaat("CI_TAG_PAPER_W48_2_H32_2_FOLDVERTICALHORIZONTAL"):
		case joaat("CI_TAG_PAPER_W15_1_H24_FOLDVERTICAL"):
		case joaat("CI_TAG_PAPER_W17_78_H12_7"):
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = iParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

int func_344(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_428(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_499(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_500(bParam2), iParam0, false);
	return iVar2;
}

bool func_345(int iParam0)
{
	if (func_242() != -1)
	{
		return false;
	}
	return func_346(iParam0) != 0;
}

int func_346(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_501())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_502(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_347(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_348(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_501())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_347(iVar0))
		{
			if (func_391(func_502(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_349(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_503(48);
	func_504(0, -1);
}

bool func_350(int iParam0)
{
	if (func_242() != -1)
	{
		return false;
	}
	return func_378(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_351(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_352(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_353()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_354(int iParam0)
{
	if (func_242() != -1)
	{
		return false;
	}
	return func_378(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_355(int iParam0)
{
	if (func_242() != -1)
	{
		return false;
	}
	if (!func_441(iParam0))
	{
		return false;
	}
	return func_505(Global_1347702[iParam0 /*49*/].f_15);
}

int func_356()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_391(func_506(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_357(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	Vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_353() && (func_355(38) || func_350(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = joaat("COL_CC_INTRO");
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = joaat("COL_CC_INTRO_PRE");
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = 12;
			iVar14 = joaat("CIGARETTE_CARDS");
			break;
		case 39:
			if (func_353() && (func_355(39) || func_350(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_RC_DEBORAH");
				iVar13 = joaat("COL_DB_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = joaat("COL_DB_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f /*3*/ };
			iVar10 = 30;
			iVar14 = joaat("DINO_BONES");
			break;
		case 43:
			if (iParam3 == joaat("EXOTIC_STAGE_01"))
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_02"))
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_03"))
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_04"))
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == joaat("EXOTIC_STAGE_05"))
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f /*3*/ };
			iVar9 = func_507(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_353() && (func_355(41) || func_350(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f /*3*/ };
			iVar9 = 13;
			iVar14 = joaat("LEGENDARY_FISH");
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_353() && (func_355(49) || func_350(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = joaat("BLIP_SCM_FRANCES");
				iVar13 = joaat("COL_RC_INTRO");
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = joaat("COL_RC_INTRO_PRE");
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f /*3*/ };
			iVar10 = 10;
			iVar14 = joaat("ROCK_CARVINGS");
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar9 = func_507(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_508(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_509(iParam0, iVar13, iVar14))
	{
	}
	if (func_510(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_511(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_512(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_513(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_514(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_358(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = joaat("CIGARETTE_CARDS");
			if (func_353() && (func_355(38) || func_350(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = joaat("COL_CC_INTRO");
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = joaat("DINO_BONES");
			if (func_353() && (func_355(39) || func_350(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = joaat("BLIP_RC_DEBORAH");
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = joaat("COL_DB_INTRO");
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = joaat("EXOTIC_ITEMS");
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = joaat("LEGENDARY_FISH");
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_353() && (func_355(49) || func_350(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = joaat("BLIP_SCM_FRANCES");
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = joaat("COL_RC_INTRO");
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = joaat("TAXIDERMY");
			iVar4 = joaat("BLIP_RC_HOBBS");
			iVar6 = joaat("COL_TX_INTRO");
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == joaat("CIGARETTE_CARDS"))
	{
		if (func_353() && (func_355(38) || func_350(38)))
		{
			iVar6 = joaat("COL_CC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_CC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_517(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_516(func_352(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_353() && (func_355(39) || func_350(39)))
		{
			iVar6 = joaat("COL_DB_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_DB_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_353() && (func_355(49) || func_350(49)))
		{
			iVar6 = joaat("COL_RC_INTRO");
		}
		else
		{
			iVar6 = joaat("COL_RC_INTRO_PRE");
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_515(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_360(int iParam0)
{
	Vector3 vVar0;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_361(int iParam0, int iParam1)
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

bool func_362(int iParam0, int iParam1)
{
	if (!func_340(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

bool func_363(int iParam0)
{
	if (!func_518(iParam0))
	{
		return false;
	}
	return func_519(iParam0);
}

void func_364(int iParam0)
{
	if (!func_518(iParam0))
	{
		return;
	}
	func_520(iParam0);
	func_521(iParam0);
}

int func_365(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_366(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			Jump @341; // curOff = 145
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			Jump @341; // curOff = 155
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			Jump @341; // curOff = 165
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			Jump @341; // curOff = 175
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			Jump @341; // curOff = 185
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			Jump @341; // curOff = 195
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			Jump @341; // curOff = 205
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			Jump @341; // curOff = 215
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			Jump @341; // curOff = 225
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			Jump @341; // curOff = 235
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			Jump @341; // curOff = 245
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			Jump @341; // curOff = 255
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			Jump @341; // curOff = 265
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			Jump @341; // curOff = 275
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			Jump @341; // curOff = 285
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			Jump @341; // curOff = 295
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			Jump @341; // curOff = 305
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			Jump @341; // curOff = 315
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			Jump @341; // curOff = 325
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			if (func_340(iVar0, 0))
			{
				if (bParam1)
				{
					if (func_522(iVar0) || func_523(iVar0))
					{
						return iVar0;
					}
				}
				else
				{
					return iVar0;
				}
			}
			return iParam0;
		}

int func_367(int iParam0, bool bParam1)
{
	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_368(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_524(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_369(bool bParam0)
{
	if (func_242() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_500(bParam0));
}

bool func_370(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		sVar0 = { func_493(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_525((398 + iVar28), 1);
			if (func_526(iParam0, &sVar0, iVar5, 0))
			{
				if (func_527(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_528(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_529(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_369(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_371(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_530(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return true;
			}
		}
	}
}

bool func_371(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_373(iParam0))
	{
		return false;
	}
	if (!func_369(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_372(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_367(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_242() == -1)
		{
			func_368(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_531(iVar0);
			}
		}
		if (!func_497(iParam0, &uVar1, 1, 0, 0))
		{
			func_491(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_532(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_370(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_370(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_370(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_306())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_533(iVar0))
				{
					func_370(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_370(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_534(Global_35, 2, 0, 1);
				if ((((func_524(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_363(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_524(iVar7) && func_363(24))
				{
					if (!func_370(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_370(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_370(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == joaat("ADD_REASON_PURCHASED"))
	{
		func_334(480, 1);
	}
	return true;
}

bool func_373(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_374(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_373(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_524(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_391(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
	{
		iVar6 = BUILTIN::CEIL(((float)iVar6 * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_410(func_535(iParam0), func_409(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_242() == -1)
		{
			if (func_378(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_334(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_369(0))
	{
		if (func_371(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_415(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_375(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_536()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_537(Global_35, iParam0, &uVar0))
		{
			func_394(PLAYER::PLAYER_PED_ID(), iParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 += 0.1f;
			func_400();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 += 0.1f;
			func_400();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 += 0.1f;
			func_400();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 += 0.5f;
			func_398();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 += 0.2f;
			func_396();
			break;
	}
}

void func_376(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 += 0.1f;
			func_396();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 += 0.1f;
			func_397();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 += 0.5f;
			func_398();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 += 0.1f;
			func_399();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 += 0.15f;
			Global_40.f_11095.f_50 += 0.15f;
			Global_40.f_11095.f_51 += 0.15f;
			func_400();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 += 0.3f;
			func_538();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 += 0.1f;
			func_539();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

struct<2> /*16*/ func_377(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

bool func_378(int iParam0, bool bParam1)
{
	switch (func_540(iParam0))
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

void func_379(int iParam0)
{
	bool bVar0;

	bVar0 = func_361(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_541() < 3)
	{
		if (bVar0)
		{
			if (func_543(func_542(iParam0), iParam0))
			{
				func_410(79, func_409(func_542(iParam0)), 1);
			}
			else
			{
				func_410(78, func_409(func_542(iParam0)), 1);
			}
		}
		else
		{
			func_410(80, func_409(func_544(iParam0)), 1);
		}
	}
}

bool func_380()
{
	if (((((func_545(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_545(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_545(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_545(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_545(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_545(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_381(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_546(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_547(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_548(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_382(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_357(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_549((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_357(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_359(51, 0, 0, 0, 0, -1, 0);
			func_549((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_357(39, 0, 0, 0, 0, 0, 1, 0);
			func_359(39, 0, 0, 0, 0, -1, 0);
			func_550(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_357(41, 0, 0, 0, 0, 0, 1, 0);
			func_359(41, 0, 0, 0, 0, -1, 0);
			func_551(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_357(49, 0, 0, 0, 0, 0, 1, 0);
			func_359(49, 0, 0, 0, 0, -1, 0);
			func_552(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_357(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_553(1), 0, -1, 0);
			func_554(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_357(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_553(2), 0, -1, 0);
			func_554(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_357(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_553(4), 0, -1, 0);
			func_554(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_357(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_553(8), 0, -1, 0);
			func_554(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_357(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_553(16), 0, -1, 0);
			func_554(16);
			break;
	}
}

void func_383(int iParam0)
{
	if (func_555() == 1)
	{
		if (func_350(39))
		{
			func_334(342, 0);
		}
		else
		{
			func_334(343, 0);
			func_550(1);
		}
	}
	if (func_555() >= 30)
	{
		func_334(344, 0);
	}
	func_357(39, 0, 0, 0, 0, 0, -1, 0);
	func_359(39, 0, 0, func_555(), 30, 1, 0);
}

void func_384(int iParam0)
{
	if (func_556() == 1)
	{
		if (func_350(49))
		{
			func_334(409, 0);
		}
		else
		{
			func_334(410, 0);
			func_552(1);
		}
	}
	if (func_556() >= 10)
	{
		func_334(411, 0);
	}
	func_357(49, 0, 0, 0, 0, 0, -1, 0);
	func_359(49, 0, 0, func_556(), 10, 1, 0);
}

void func_385(int iParam0)
{
	char[] cVar0[8];

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_334(437, 0);
			func_334(440, 0);
			func_557(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &cVar0, 1, 0, 0);
			func_357(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), cVar0, 0, -1, 0);
			func_359(51, 0, 0, cVar0, func_507(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_549(1);
			func_558(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_557(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &cVar0, 1, 0, 0);
			func_357(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), cVar0, 0, -1, 0);
			func_359(51, 0, 0, cVar0, func_507(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_549(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_557(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &cVar0, 1, 0, 0);
			func_357(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), cVar0, 0, -1, 0);
			func_359(51, 0, 0, cVar0, func_507(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_549(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_557(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &cVar0, 1, 0, 0);
			func_357(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), cVar0, 0, -1, 0);
			func_359(51, 0, 0, cVar0, func_507(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_549((1 << 9));
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_334(438, 0);
			func_557(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &cVar0, 1, 0, 0);
			func_357(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), cVar0, 0, -1, 0);
			func_359(51, 0, 0, cVar0, func_507(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_549((1 << 15));
			break;
		default:
			func_334(439, 0);
			break;
	}
}

void func_386()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_387(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_242() == -1)
	{
		if (!func_350(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_334(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_334(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_334(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_334(400, 0);
			}
		}
		else if (func_361(iParam0, 412399755))
		{
			func_559(joaat("EXOTIC_STAGE_01"));
			if (func_560() == 0)
			{
				func_504(0, 10);
				iVar1 = func_561(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_562(iParam0) < func_563(iParam0))
					{
						func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_350(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_334(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_334(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_334(401, 0);
			}
		}
		else if (func_361(iParam0, 709057512))
		{
			func_559(joaat("EXOTIC_STAGE_02"));
			if (func_560() == 1)
			{
				func_504(0, 10);
				iVar1 = func_561(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_562(iParam0) < func_563(iParam0))
					{
						func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_350(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_334(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_334(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_334(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_334(398, 0);
			}
		}
		else if (func_361(iParam0, -1478961327))
		{
			func_559(joaat("EXOTIC_STAGE_03"));
			if (func_560() == 2)
			{
				func_504(0, 10);
				iVar1 = func_561(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_564(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_565(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_503(48);
					}
					if (func_562(iParam0) < func_563(iParam0))
					{
						func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_562(iParam0) < func_563(iParam0))
					{
						func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_350(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_334(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_334(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_334(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_334(406, 0);
			}
		}
		else if (func_361(iParam0, -1238404098))
		{
			func_559(joaat("EXOTIC_STAGE_04"));
			if (func_560() == 3)
			{
				func_504(0, 10);
				iVar1 = func_561(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_562(iParam0) < func_563(iParam0))
					{
						func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_350(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_334(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_334(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_334(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_334(403, 0);
			}
		}
		else if (func_361(iParam0, 1160548794))
		{
			func_559(joaat("EXOTIC_STAGE_05"));
			if (func_560() == 4)
			{
				func_504(0, 10);
				iVar1 = func_561(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_562(iParam0) < func_563(iParam0))
					{
						func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_359(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_388(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_564(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_565(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_503(48);
		}
	}
}

void func_389(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_391(func_566(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_567(iParam0, iVar0, cVar2, iParam1, bParam2);
			}
			else
			{
				func_568(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_390(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_242() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_381(0, 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_381(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_381(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_381(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_381(joaat("REWARD_BILLFOLD"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_381(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_381(joaat("REWARD_BILLSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_381(joaat("REWARD_COIN"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_381(joaat("REWARD_COINPURSE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_381(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_381(joaat("REWARD_COINS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_381(joaat("REWARD_MONEYCLIP"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_381(joaat("REWARD_MONEYSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_569())
			{
				func_381(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_381(joaat("REWARD_COINCUP_SM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_381(joaat("REWARD_COINCUP_LG"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_381(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_381(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_381(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_381(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_381(joaat("REWARD_RARE_FISH"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_381(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_381(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_381(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_381(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_381(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_381(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

bool func_391(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_340(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_360(iParam0);
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
		if (!func_570(iParam0, 1))
		{
			return false;
		}
	}
	return func_344(iParam0, 0, bParam2) >= iParam1;
}

void func_392(int iParam0)
{
	if (func_350(41))
	{
		func_334(363, 0);
	}
	else
	{
		func_334(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_01"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_02"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_03"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_04"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_05"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_06"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_07"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_08"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_09"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_10"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_11"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_12"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_13"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_504(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_571(joaat("LEGENDARY_FISH_14"));
			func_572(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_393(int iParam0, int iParam1)
{
	var uVar0;

	func_574(iParam0, iParam1, &uVar0);
}

int func_394(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_493(iParam1, 1, 0) /*5*/ };
		iParam3 = func_575(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_577(iParam1, iParam2, func_576(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_578(1, (func_242() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && iParam1 != Global_1946054.f_57[func_576(iParam3, 1) /*11*/])
			{
				func_579(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_580((1 << 15)) && iParam1 != Global_1946054.f_57[func_576(iParam3, 1) /*11*/])
			{
				func_581();
				func_579(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_579(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_582(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_579(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_583(0);
			func_584(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_579(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_395(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	bool bVar17;
	int iVar18;
	int iVar19;

	sVar3.f_9 = joaat("SLOTID_NONE");
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_534(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_534(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_585("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_586(&sVar3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(sVar3.f_4))
				{
					if (!bParam1)
					{
						if (sVar3.f_4 == iVar18 || sVar3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = sVar3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_587(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_396()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_397()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_398()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_399()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_400()
{
	func_588();
	func_589();
	func_590();
}

void func_401(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	Vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_402(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_515(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_403(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_404(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_405(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_406(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_407(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_408(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

int func_409(int iParam0)
{
	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_410(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_483(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_591(iParam0, (1 << 10)))
	{
		return;
	}
	func_485(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_411(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_483(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_591(iParam0, (1 << 10)))
	{
		return;
	}
	func_485(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_412()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_501())
	{
		return func_413();
	}
	iVar4 = (func_501() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_501())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_592(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_502(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_413()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_501());
	return func_502(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_414(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

int func_415(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	sVar0 = { func_493(iParam0, 0, 1) /*5*/ };
	sVar5 = { func_528(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_593(iParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_416(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_242() != -1)
	{
		return;
	}
	switch (func_365(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (iParam0 == joaat("KIT_BANDANA") && func_594(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_595(iParam0);
			if (func_596(iVar0))
			{
				func_597(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_579(30, iParam0, 0, 0, 0);
			}
			if (func_598() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_598() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_598() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_599(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_600(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &iVar1))
				{
					func_579(33, iVar1, 0, 0, 0);
				}
			}
			func_579(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_601(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_394(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_364(24);
		if (func_395(&iVar2, 0))
		{
			func_370(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_417(int iParam0)
{
	if (func_361(iParam0, 943695443))
	{
		func_602(0, iParam0);
	}
	else if (func_361(iParam0, -2096528786))
	{
		func_602(1, iParam0);
	}
	else if (func_361(iParam0, -1094167013))
	{
		func_602(2, iParam0);
	}
	else if (func_361(iParam0, 1936654645))
	{
		func_602(3, iParam0);
	}
	else if (func_361(iParam0, 1306489306))
	{
		func_602(4, iParam0);
	}
	else if (func_361(iParam0, 435762317))
	{
		func_602(5, iParam0);
	}
	else if (func_361(iParam0, 1259363210))
	{
		func_602(6, iParam0);
	}
	else if (func_361(iParam0, 881398259))
	{
		func_602(7, iParam0);
	}
	else if (func_361(iParam0, -541549214))
	{
		func_602(8, iParam0);
	}
	else if (func_361(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_602(-1, iParam0);
	}
}

int func_418(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_603(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_604(iParam0, &sVar4, &uVar0, iParam1);
}

struct<2> /*16*/ func_419(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_340(iParam0, 0))
	{
		return sVar0;
	}
	if (func_361(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_242() == -1)
		{
			if (func_361(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_605(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_605(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_361(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_605(joaat("MEDICINE_ITEMS"));
	}
	if (func_361(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_605(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

void func_420(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_242() == -1)
			{
				if (func_378(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_334(109, 1);
				}
			}
			break;
	}
}

void func_421(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_607(func_606(0));
	func_609(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_608(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_422(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> /*16*/ sVar7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;

	if (iParam0 == joaat("AMMO_MOONSHINEJUG"))
	{
		return;
	}
	if (!func_340(iParam0, 0))
	{
		return;
	}
	if (iParam0 == joaat("KIT_HANDHELD_CATALOG"))
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_610())
	{
		func_611(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_612(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_612(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_362(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_360(iParam0);
	iVar10 = 0;
	iVar11 = joaat("INVENTORY");
	if ((iVar6 == joaat("AMMO") && iParam0 != joaat("AMMO_HATCHET")) && iParam0 != joaat("AMMO_HATCHET_CLEAVER"))
	{
		iVar10 = joaat("AMMO_TYPES");
		iVar11 = joaat("AMMO_TYPES");
	}
	if (iVar6 == joaat("WEAPON_MOD") || iVar6 == joaat("WEAPON_DECORATION"))
	{
		sVar7.f_0 = "ITEMTYPE_UPGRADES";
		sVar7.f_1 = "itemtype_textures";
	}
	else if (!func_613(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
	{
		sVar7.f_0 = "_PLACEHOLDER";
		sVar7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(sVar7.f_0) == 121560594)
	{
		sVar7.f_0 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar7.f_0))
	{
		return;
	}
	iVar12 = joaat("COLOR_PURE_WHITE");
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = joaat("COLOR_GREYMID");
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = joaat("COLOR_RPG_SPECIAL_1");
		}
		else
		{
			iVar12 = joaat("COLOR_YELLOWDARK");
		}
	}
	sVar15 = func_614(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_409(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_361(iParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_409(iParam0));
	}
	func_609(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_423(var uParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (!func_313(iParam1))
	{
		return false;
	}
	iVar0 = uParam0->f_1984[iParam1];
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	if (ANIMSCENE::GET_ANIM_SCENE_PHASE(iVar0) < fParam2)
	{
		return false;
	}
	return true;
}

void func_424(bool bParam0)
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

bool func_425(var uParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return false;
	}
	if (!func_58(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return false;
	}
	if (uParam0->f_4)
	{
		if (PED::IS_PED_RESPONDING_TO_EVENT(uParam0->f_107[iParam1 /*113*/].f_5, joaat("EVENT_DAMAGE")))
		{
			func_51(uParam0, "Responding to Damage Event", 15, -1);
			return false;
		}
		if (func_615(uParam0, iParam1))
		{
			return true;
		}
		if (ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
		{
			if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
			{
				return true;
			}
		}
		return false;
	}
	if (func_615(uParam0, iParam1))
	{
		return true;
	}
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_107[iParam1 /*113*/].f_5, -1))
	{
		if (!func_462(uParam0->f_107[iParam1 /*113*/].f_5, joaat("SCRIPT_TASK_ANY")))
		{
			return true;
		}
	}
	return false;
}

void func_426(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;

	if (!func_54(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	if (!func_58(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	if (bParam3)
	{
		bVar0 = func_616(uParam0, iParam1);
	}
	if (bParam2)
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_1 == 1)
		{
			if (uParam0->f_107[iParam1 /*113*/].f_32.f_4 <= 0.0f)
			{
				uParam0->f_107[iParam1 /*113*/].f_32.f_4 = func_450(100.0f, 140.0f);
			}
		}
		func_53(uParam0, iParam1);
		if (bVar0 && uParam0->f_107[iParam1 /*113*/].f_32.f_4 != 0.0f)
		{
			func_60(uParam0->f_107[iParam1 /*113*/].f_1, 0, 0, 0, uParam0->f_107[iParam1 /*113*/].f_32.f_4, 1, 1, 0, 0, 1, 0);
		}
		else
		{
			func_60(uParam0->f_107[iParam1 /*113*/].f_1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
		}
	}
}

bool func_427(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return true;
	}
	if ((uParam0->f_107[iParam1 /*113*/].f_32.f_49 < 0.0f || uParam0->f_107[iParam1 /*113*/].f_32.f_50 < 0.0f) || uParam0->f_107[iParam1 /*113*/].f_32.f_51 < 0.0f)
	{
		return true;
	}
	if (!func_113(&(uParam0->f_107[iParam1 /*113*/].f_32.f_52)))
	{
		func_116(&(uParam0->f_107[iParam1 /*113*/].f_32.f_52), 0.0f);
	}
	fVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_49;
	fVar1 = uParam0->f_107[iParam1 /*113*/].f_32.f_50;
	fVar2 = uParam0->f_107[iParam1 /*113*/].f_32.f_51;
	fVar3 = func_114(&(uParam0->f_107[iParam1 /*113*/].f_32.f_52));
	if (fVar3 > fVar2)
	{
		return true;
	}
	fVar4 = (fVar0 - ((fVar3 / fVar2) * (fVar0 - fVar1)));
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_107[iParam1 /*113*/].f_5, fVar4);
	return false;
}

int func_428(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_360(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_361(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_574(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_429(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;
	struct<10> /*80*/ sVar20;
	struct<4> /*32*/ sVar34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	sVar0 = { func_617(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_619(&sVar0, func_618(0));
	}
	if (!func_620(&sVar0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	sVar20.f_9 = joaat("SLOTID_NONE");
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_586(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_529(iParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_587(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_430(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_493(iParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_621(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_528(iParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_529(iParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

void func_431(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_361(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_622(iParam0, iParam1);
		}
		if (func_361(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_361(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_389(iParam0, iParam1, 1, 0);
		}
	}
}

float func_432(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_433(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_108(iParam0))
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
	if (!func_108(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_434(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_231(iParam0, 1);
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

void func_435(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_54(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_436(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_623(iParam1);
	}
}

bool func_437(int iParam0, bool bParam1)
{
	if (func_624(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_625(5000))
		{
			return true;
		}
	}
	switch (func_626(0))
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

bool func_438()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_627(Global_35))
	{
		return true;
	}
	return false;
}

bool func_439()
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

int func_440(int iParam0)
{
	if (!func_443(iParam0))
	{
		return -1;
	}
	return func_629(func_628(iParam0));
}

bool func_441(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_442(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_443(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

float func_444(int iParam0)
{
	return Global_1327590.f_23[iParam0 /*17*/].f_10;
}

float func_445(int iParam0)
{
	return Global_1327590.f_23[iParam0 /*17*/].f_11;
}

int func_446()
{
	return Global_1327590.f_1;
}

void func_447(var uParam0)
{
	if (!func_113(uParam0))
	{
	}
	if (!func_238(uParam0))
	{
		uParam0->f_2 = (func_239() - uParam0->f_1);
		func_240(uParam0, 2);
	}
}

void func_448(var uParam0)
{
	if (!func_113(uParam0))
	{
	}
	if (func_238(uParam0))
	{
		uParam0->f_1 = (func_239() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_241(uParam0, 2);
	}
}

bool func_449(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_630(iParam0);
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

float func_450(float fParam0, float fParam1)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam0, fParam1);
}

void func_451(int iParam0)
{
	int iVar0;

	iVar0 = func_476(iParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(8, iVar0);
	}
}

int func_452()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1359489.f_361.f_84[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1359489.f_361.f_295))
	{
		iVar1++;
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1359489.f_361.f_297))
	{
		iVar1++;
	}
	return iVar1;
}

void func_453()
{
	func_631(&(Global_1359489.f_361.f_295));
	func_631(&(Global_1359489.f_361.f_297));
	if (TXD::DOES_STREAMED_TXD_EXIST(joaat("UI_PAMPHLET_SUPER_MEAL")) && TXD::HAS_STREAMED_TXD_LOADED(joaat("UI_PAMPHLET_SUPER_MEAL")))
	{
		TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(joaat("UI_PAMPHLET_SUPER_MEAL"));
	}
}

int func_454(Vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_228(vParam0))
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
		if (func_632(vParam0))
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
	func_633(iVar0, bParam8);
	return iVar0;
}

int func_455(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return 0;
	}
	iVar1 = func_634(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::IS_PED_READY_TO_RENDER(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

int func_456(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	iVar0 = -1;
	fVar1 = 250000.0f;
	iVar2 = func_635();
	iVar3 = 0;
	while (iVar3 < 27)
	{
		if (func_636(uParam0, iVar3))
		{
		}
		else if (func_21(uParam0) == 355)
		{
			if (iVar3 == 5)
			{
				if (uParam0->f_3)
				{
					if (!func_637(15))
					{
					}
					else if ((bParam1 && !func_638(iVar3)) || (!bParam1 && func_638(iVar3)))
					{
					}
					else if (!func_639(iVar3, 0, 0))
					{
					}
					else if (Global_1360165[iVar3 /*1157*/].f_62 == -289447566)
					{
					}
					else if (func_640(iVar3, func_104(uParam0->f_7), 1))
					{
					}
					else if (func_642(&iVar2, func_641(iVar3)))
					{
						iVar4 = func_248(iVar3);
						if (ENTITY::IS_ENTITY_DEAD(iVar4))
						{
							iVar0 = iVar3;
						}
						else
						{
							fVar5 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar4, true, false), uParam0->f_29);
							if (bParam2)
							{
								if (fVar5 > 400.0f)
								{
								}
								else if (!func_54(iVar0))
								{
									iVar0 = iVar3;
								}
								else if (fVar5 < fVar1)
								{
									fVar1 = fVar5;
									iVar0 = iVar3;
								}
								iVar3++;
								if (!func_54(iVar0))
								{
									return -1;
								}
								if (!func_643(iVar0, func_104(uParam0->f_7), 0, -1))
								{
									return -1;
								}
								return iVar0;
							}
						}
					}
				}
			}
		}
	}
}

bool func_457(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!func_54(iParam2))
	{
		return true;
	}
	if (func_118(iParam2))
	{
		return false;
	}
	iVar0 = func_104(uParam0->f_7);
	if (!func_263(iParam2, iVar0))
	{
		func_643(iParam2, iVar0, uParam0->f_3, -1);
		return false;
	}
	iVar1 = func_644(iParam2, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	uParam0->f_107[iParam1 /*113*/].f_5 = iVar1;
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iVar1, 1);
	func_59(iParam2, 45, 1);
	return true;
}

int func_458(int iParam0)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	if (func_138(func_137(iParam0)))
	{
		return func_252(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_295(iParam0), 0);
}

int func_459(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return 0;
	}
	if (!func_133(iParam0, 2))
	{
		return 0;
	}
	if (func_133(iParam0, 32) && !bParam1)
	{
		func_254(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_137(iParam0)));
		if (func_242() == -1)
		{
			if (func_133(iParam0, (1 << 11)))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_139(iParam0));
				func_135(iParam0, (1 << 11));
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_139(iParam0));
		}
		return 0;
	}
	if (!func_645(iParam0) && func_242() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_139(iParam0)))
	{
		func_135(iParam0, 128);
		return 1;
	}
	func_254(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_137(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_139(iParam0));
	if (func_133(iParam0, (1 << 11)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_139(iParam0));
		func_135(iParam0, (1 << 11));
	}
	return 1;
}

int func_460(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	if (!func_646(iParam0, 1))
	{
		return 0;
	}
	if (func_138(func_137(iParam0)))
	{
		iVar1 = func_139(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar1))
			{
				PERSCHAR::_REVIVE_PERSCHAR(iVar1);
			}
		}
		PERSCHAR::_0x6759BEE6762E140B(iVar1);
		iVar0 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(iVar1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_62(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 171 /*PCF_0x6868B572*/, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	func_253(iParam0, 1);
	func_647(iParam0);
	if (bParam3)
	{
		func_253(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

int func_461(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_462(int iParam0, int iParam1)
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

float func_463(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam0 - fParam1) / (fParam2 - fParam1)) * (fParam4 - fParam3)) + fParam3);
}

void func_464(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_648(iParam1))
		{
			func_649(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_650(iParam0, 0, 1);
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
			func_651(iParam0, 0);
			bVar0 = true;
		}
		func_652(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_465(int iParam0)
{
	return func_235(iParam0, 2, 1);
}

bool func_466(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (func_314(iParam0))
	{
		return false;
	}
	if (bParam1 && !func_22(iParam0))
	{
		if (PED::_0x94132D7C8D3575C4(Global_35))
		{
			return false;
		}
		if (AUDIO::_IS_PED_IN_ANY_CONVERSATION(Global_35, true))
		{
			return false;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
		{
			return false;
		}
	}
	if (PED::_GET_PED_DRUNKNESS(Global_35) >= 0.5f)
	{
		return false;
	}
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		return false;
	}
	if (func_221((1 << 20)))
	{
		return false;
	}
	if (func_653())
	{
		return false;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35);
		iVar1 = iVar0;
		if ((iVar1 != joaat("PROP_PLAYER_SEAT_CHAIR_DYNAMIC") && iVar1 != joaat("PROP_PLAYER_DYNAMIC_SEAT_CHAIR_TABLE")) && iVar1 != joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC"))
		{
			return false;
		}
	}
	if (func_654())
	{
		return false;
	}
	if (Global_1359489.f_361.f_59)
	{
		return false;
	}
	return true;
}

bool func_467(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5, struct<2> /*16*/ sParam6, var uParam8)
{
	return (((sParam3.f_0 - sParam0.f_0) * (sParam6.f_1 - sParam0.f_1)) - ((sParam3.f_1 - sParam0.f_1) * (sParam6.f_0 - sParam0.f_0))) > 0.0f;
}

void func_468(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_655(iParam0, 1);
	func_656(iParam0, 1);
	func_657(iParam0, 128);
}

int func_469(int iParam0)
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

int func_470(int iParam0)
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

float func_471(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_472(int iParam0)
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
	iVar0 = func_69(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_68(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_67(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_64(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_65(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_66(iParam0);
	if (iVar5 < 1 || iVar5 > func_70(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_473(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_4;
}

void func_474()
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

void func_475(int iParam0, float fParam1)
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

int func_476(int iParam0)
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

int func_477(int iParam0)
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

char* func_478(int iParam0)
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

Vector3 func_479(int iParam0)
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
			return func_658();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_480(int iParam0)
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

void func_481(int iParam0, int iParam1, char* sParam2)
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

void func_482(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = func_476(*uParam0);
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(8, iVar0))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(8, func_476(*uParam0), iParam1, sParam2, bParam3, bParam5, false);
		if (bParam4)
		{
			UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
			Global_1359489.f_361.f_194 = func_515("CAMP_REQUEST", "CAMP_REQUEST_DETAIL", 1997120069, MISC::GET_HASH_KEY(func_478(uParam0->f_3)), joaat("PLAYER_MENU"), "INPUT_FEED_INTERACT_GENERIC", joaat("SP_MISSIONS"), 5000, 0, 0, 0, 0, 1, 1);
		}
	}
}

void func_483(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_484(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_659(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_660(iParam0))
	{
		return false;
	}
	if (func_661(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_591(iParam0, 1)) || func_662((1 << 15)))
	{
		if (!func_591(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_663())
	{
		return false;
	}
	return true;
}

void func_485(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_486(int iParam0)
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

char* func_487(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_614(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_488(int iParam0, bool bParam1)
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
			if ((func_378(Global_1835011[59 /*74*/].f_1, 1) || func_378(Global_1347702[1 /*49*/].f_15, 1)) || func_505(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_449(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
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

bool func_489(int iParam0)
{
	return func_360(iParam0) == joaat("WEAPON");
}

bool func_490(int iParam0)
{
	var uVar0;

	if (func_242() != -1)
	{
		return false;
	}
	if (func_362(iParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_497(iParam0, &uVar0, 1, 0, 0);
	}
	return func_391(iParam0, 1, 0);
}

void func_491(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_360(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_367(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_523(iVar0))
	{
		if (func_242() == -1)
		{
			func_368(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_344(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_422(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_492(int iParam0, int iParam1)
{
	int iVar0;

	if (func_361(iParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_664(iParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

struct<5> /*40*/ func_493(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_665(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_360(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_528(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_618(bParam1) /*4*/ };
			if (bParam2 && func_666(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_526(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_526(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_527(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_667(bParam1) /*4*/ };
			switch (func_365(iParam0))
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
			if (func_668(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_528(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_668(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_528(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_669(sVar0, &sVar27, bParam1, 0))
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

int func_494(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	if (!func_369(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_670(iParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_500(bParam3), iParam0);
}

int func_495(int iParam0, bool bParam1)
{
	if (func_373(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_500(bParam1), iParam0, false);
}

bool func_496()
{
	if (func_242() != -1)
	{
		return false;
	}
	if (!func_353())
	{
		return false;
	}
	if (!func_378(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_378(Global_1835011[2 /*74*/].f_1, 1) && func_378(Global_1347702[120 /*49*/].f_15, 1)) && !func_378(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_378(Global_1835011[37 /*74*/].f_1, 1) && !func_378(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_378(Global_1835011[57 /*74*/].f_1, 1) && !func_378(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_378(Global_1835011[26 /*74*/].f_1, 1) && !func_378(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_378(Global_1835011[62 /*74*/].f_1, 1) && func_378(Global_1835011[63 /*74*/].f_1, 1)) && !func_378(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_378(Global_1835011[75 /*74*/].f_1, 1) && !func_378(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_378(Global_1835011[76 /*74*/].f_1, 1) && !func_378(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_378(Global_1835011[40 /*74*/].f_1, 1) && func_378(Global_1835011[41 /*74*/].f_1, 1)) && !func_378(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_378(Global_1835011[62 /*74*/].f_1, 1) && func_378(Global_1835011[63 /*74*/].f_1, 1)) && !func_378(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_378(Global_1835011[65 /*74*/].f_1, 1) && func_378(Global_1835011[66 /*74*/].f_1, 1)) && !func_378(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_497(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_671(&iParam0);
	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (!func_369(0))
	{
		bParam3 = true;
	}
	if (func_489(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			sVar0 = { func_618(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_526(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_527(iParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_666(iParam0, 1))
			{
				if (!func_526(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_527(iParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_672(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_494(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_670(iParam0))
	{
		iVar28 = func_673(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_500(bParam4), iParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_498(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(iParam0, &sVar0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (sVar0[iVar42 /*2*/].f_1 == iParam1)
			{
				return sVar0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_499(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_617(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_619(&sVar0, func_618(0));
	}
	if (!func_620(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_587(iVar18);
	return iVar19;
}

int func_500(bool bParam0)
{
	if (func_242() == -1)
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

int func_501()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

int func_502(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_503(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_242() != -1)
	{
		return;
	}
	iVar0 = func_674(iParam0);
	fVar1 = func_675(iParam0);
	if ((Global_1347477.f_117 || !func_363(31)) || !func_676(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_677(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_57);
	}
	else if (iVar0 == 0)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_55);
	}
	else if (iVar0 == 2)
	{
		fVar1 *= (1.0f + Global_40.f_11095.f_56);
	}
	fVar1 *= (float)Global_1347477.f_182;
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_678(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_609(MISC::VAR_STRING(6, func_679(iParam0), fVar1), "itemtype_textures", func_680(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_504(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_681(&Global_0, 8);
	}
	if (!func_353() || func_242() != -1)
	{
		return;
	}
	func_681(&Global_0, 1);
}

bool func_505(int iParam0)
{
	int iVar0;

	iVar0 = func_540(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_507(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_682(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_508(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_356() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_683(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_684(), 12);
			}
			break;
		case joaat("DINO_BONES"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_555() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_685(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_555(), 30);
			}
			break;
		case joaat("EXOTIC_ITEMS"):
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case joaat("LEGENDARY_FISH"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_686(), 13);
			}
			break;
		case joaat("ROCK_CARVINGS"):
			if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_556() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_687(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_556(), 10);
			}
			break;
		case joaat("TAXIDERMY"):
			if (iParam2 == 3)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_507(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_509(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		if (iParam1 == joaat("COL_CC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_CC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_CC_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("DINO_BONES"))
	{
		if (iParam1 == joaat("COL_DB_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_DB_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_DB_INTRO_PRE"));
			}
		}
	}
	else if (iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam1 == joaat("COL_RC_INTRO"))
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("COL_RC_INTRO_PRE")))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("COL_RC_INTRO_PRE"));
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return true;
}

bool func_510(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_511(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_512(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == joaat("CIGARETTE_CARDS"))
		{
			iVar2 = func_688(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_391(iVar2, 1, 0) || func_690(func_689(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_516(func_688(iVar0))), func_516(func_688(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_555() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_691(iVar0)), func_691(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_685() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_691(iVar0)), func_691(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_691(iVar0)), func_691(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			iVar2 = func_566(iParam3, func_692(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_562(iVar2) - iParam7) >= func_507(iParam3, func_693(iVar0));
				}
				else
				{
					bVar1 = func_562(iVar2) >= func_507(iParam3, func_693(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_562(iVar2) + iParam7) >= func_507(iParam3, func_693(iVar0));
			}
			else
			{
				bVar1 = func_562(iVar2) >= func_507(iParam3, func_693(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_694(iVar2)), func_694(iVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_695(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_696(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_556() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_697(iVar0)), func_697(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_687() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_697(iVar0)), func_697(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_697(iVar0)), func_697(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_566(iParam3, func_692(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_562(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_698(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_698(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_699(iVar2)), func_699(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;

	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("CIGARETTE_CARDS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == joaat("EXOTIC_ITEMS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == joaat("LEGENDARY_FISH"))
	{
		if (func_686() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == joaat("TAXIDERMY"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_514(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_443(func_700(0)) && ((func_626(0) == 1 || func_626(0) == 8) || func_626(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == joaat("LEGENDARY_FISH")) || iParam2 == joaat("ROCK_CARVINGS"))
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == joaat("TAXIDERMY"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

int func_515(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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
	sVar13.f_2 = sParam1;
	sVar13.f_3 = 0;
	sVar13.f_4 = iParam2;
	sVar13.f_5 = iParam3;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&sVar0, &sVar13, bParam12, bParam13);
	return iVar21;
}

char* func_516(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

int func_517(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> /*32*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam4;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam8;
	sVar13.f_7 = 1;
	sVar13.f_0 = iParam7;
	sVar13.f_1 = sParam0;
	sVar13.f_2 = sParam1;
	sVar13.f_3 = 0;
	sVar13.f_4 = iParam2;
	sVar13.f_5 = iParam3;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&sVar0, &sVar13, bParam9, bParam10);
	return iVar21;
}

bool func_518(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_520(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_521(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_701(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_702(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_702(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_702(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_703(1);
			break;
		case 34:
			func_704(1);
			break;
		case 35:
			func_705(1);
			break;
		case 36:
			break;
		case 37:
			func_706(0);
			break;
		case 38:
			func_707(0);
			break;
		case 39:
			func_708(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_334(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_334(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_334(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_353()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_517("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_334(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_242() == -1)
			{
				if (!func_601(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_709(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_306())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_391(iVar0, 1, 0))
					{
						func_415(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_394(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_242() == -1)
			{
				if (!func_391(1013902307, 1, 0))
				{
					func_415(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_242() == -1)
			{
				if (!func_391(1013902307, 1, 0))
				{
					func_415(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_391(142640135, 1, 0))
				{
					func_415(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_242() == -1)
			{
				if (!func_391(786809402, 1, 0))
				{
					func_415(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_242() == -1)
			{
				if (!func_391(786809402, 1, 0))
				{
					func_415(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_391(-518019409, 1, 0))
				{
					func_415(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_710();
			break;
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

bool func_522(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_523(int iParam0)
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

bool func_524(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

int func_525(int iParam0, int iParam1)
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
			return 981083654;
			return 1283289876;
			return -606884489;
			return -100418572;
			return 663645231;
			return 1442217033;
			return 1410986244;
			return 847409839;
			return 923926911;
			return 109995826;
			return -747412737;
			return 1114341727;
			return -539456939;
			return 45887121;
			return 913271624;
			return -1652812715;
			return -1791365775;
			return -979299941;
			return 713062001;
			return -575045963;
			return 1852965262;
			return -1398836354;
			return -1829885298;
			return -1773850357;
			return -564258009;
			return 2016532685;
			return -1070563798;
			return -1619221343;
			return -345571691;
			return 544288390;
			return 159578294;
			return -76852849;
			return 1110295244;
			return 2104563477;
			return 1947827651;
			return -933072766;
			return 2104388648;
			return -1677140601;
			return -2133097881;
			return -826678792;
			return -513522325;
			return 1970588249;
			return -2080032591;
			return 1758847745;
			return 895010282;
			return joaat("SLOTID_COMPENDIUM");
			return joaat("SLOTID_COMPENDIUM_PAGE");
			return joaat("SLOTID_COMPENDIUM_STAMP");
			return joaat("SLOTID_COUPONS");
			return joaat("SLOTID_CURRENCY");
			return joaat("SLOTID_DEFAULT_STABLE");
			return joaat("SLOTID_DEFAULT_STABLE_STALLS");
			return -1578397674;
			return joaat("SLOTID_EMOTE_ACTION");
			return joaat("SLOTID_EMOTE_GREET");
			return joaat("SLOTID_EMOTE_ITEM");
			return joaat("SLOTID_EMOTE_REACT");
			return joaat("SLOTID_EMOTE_TAUNT");
			return joaat("SLOTID_EMOTE_TWIRL_GUN");
			return joaat("SLOTID_FEES");
			return joaat("SLOTID_FME_HERBS_EXPAND");
			return joaat("SLOTID_HANDGUN_BARREL");
			return 24047176;
			return joaat("SLOTID_HANDGUN_HAMMER");
			return joaat("SLOTID_HONOR");
			return joaat("SLOTID_HORSE_BEDROLL");
			return joaat("SLOTID_HORSE_BLANKET");
			return joaat("SLOTID_HORSE_CANTLE");
			return joaat("SLOTID_HORSE_FENDER");
			return joaat("SLOTID_HORSE_HORN");
			return joaat("SLOTID_HORSE_INSURANCE");
			return joaat("SLOTID_HORSE_LANTERN");
			return joaat("SLOTID_HORSE_MANE");
			return joaat("SLOTID_HORSE_MASK");
			return joaat("SLOTID_HORSE_MOUSTACHE");
			return joaat("SLOTID_HORSE_REINS");
			return joaat("SLOTID_HORSE_SADDLE");
			return joaat("SLOTID_HORSE_SADDLE_01");
			return joaat("SLOTID_HORSE_SADDLE_02");
			return joaat("SLOTID_HORSE_SADDLE_03");
			return joaat("SLOTID_HORSE_SADDLE_04");
			return joaat("SLOTID_HORSE_SADDLE_05");
			return joaat("SLOTID_HORSE_SADDLE_06");
			return joaat("SLOTID_HORSE_SADDLE_07");
			return joaat("SLOTID_HORSE_SADDLE_08");
			return joaat("SLOTID_HORSE_SADDLE_09");
			return joaat("SLOTID_HORSE_SADDLE_10");
			return joaat("SLOTID_HORSE_SADDLEBAG");
			return joaat("SLOTID_HORSE_SATCHEL");
			return joaat("SLOTID_HORSE_SEAT");
			return joaat("SLOTID_HORSE_SEX");
			return joaat("SLOTID_HORSE_SKIRT");
			return joaat("SLOTID_HORSE_STALL_01");
			return joaat("SLOTID_HORSE_STALL_02");
			return joaat("SLOTID_HORSE_STALL_03");
			return joaat("SLOTID_HORSE_STALL_04");
			return joaat("SLOTID_HORSE_STALL_05");
			return joaat("SLOTID_HORSE_STIRRUP");
			return joaat("SLOTID_HORSE_TAIL");
			return joaat("SLOTID_HUNTING_WAGON");
			return 1132377945;
			return 739936401;
			return 1201880974;
			return 819728896;
			return 1746010219;
			return 1433393959;
			return -1287636759;
			return -706917073;
			return -2166805;
			return -1391602433;
			return 1782075221;
			return 1282544585;
			return 1732594027;
			return -1058817012;
			return joaat("SLOTID_MINIGAME");
			return joaat("SLOTID_MISSION_TIMERS");
			return -1783120823;
			return -1535745896;
			return joaat("SLOTID_MOONSHINE_COOK");
			return joaat("SLOTID_MOONSHINE_RECIPE");
			return joaat("SLOTID_MOONSHINE_STILL");
			return joaat("SLOTID_MOONSHINER_BAR_PHOTO");
			return joaat("SLOTID_MOONSHINER_CRAFT_FLAVOR");
			return joaat("SLOTID_MOONSHINER_CRAFT_INPUT");
			return 1111816631;
			return joaat("SLOTID_MOONSHINER_LOCATION");
			return joaat("SLOTID_MOONSHINER_THEME");
			return joaat("SLOTID_MOONSHINER_UPGRADE");
			return joaat("SLOTID_NOTORIETY");
			return joaat("SLOTID_OWNED_CONTENT");
			return joaat("SLOTID_PLAYER_BODY_TYPE");
			return joaat("SLOTID_PLAYER_GENDER");
			return joaat("SLOTID_PLAYER_VOICE");
			return -708312114;
			return 688823508;
			return -1622147240;
			return 830292162;
			return 226276782;
			return -678416628;
			return -1098528034;
			return -629387103;
			return 316207340;
			return -1909200748;
			return -939652363;
			return joaat("SLOTID_PROGRESSION");
			return 2011227407;
			return joaat("SLOTID_PROPERTY");
			return joaat("SLOTID_PURCHASED_CONTENT");
			return joaat("SLOTID_ROLE_ITEMS");
			return joaat("SLOTID_SAMPLE");
			return joaat("SLOTID_SATCHEL");
			return -1045471300;
			return 1617414719;
			return -787761753;
			return -490616606;
			return joaat("SLOTID_STABLE");
			return -1360128126;
			return joaat("SLOTID_UPGRADE");
			return joaat("SLOTID_VOUCHERS");
			return joaat("SLOTID_WARDROBE");
			return joaat("SLOTID_WARDROBE_AGEING");
			return joaat("SLOTID_WARDROBE_BEARD");
			return joaat("SLOTID_WARDROBE_BLUSH");
			return joaat("SLOTID_WARDROBE_COMPLEXION");
			return joaat("SLOTID_WARDROBE_COMPLEXION_2");
			return joaat("SLOTID_WARDROBE_EYEBROWS");
			return joaat("SLOTID_WARDROBE_EYELINER");
			return joaat("SLOTID_WARDROBE_EYES");
			return joaat("SLOTID_WARDROBE_EYESHADOW");
			return joaat("SLOTID_WARDROBE_EYEWEAR");
			return joaat("SLOTID_WARDROBE_FACE_PAINT");
			return -1994943603;
			return joaat("SLOTID_WARDROBE_FOOTWEAR_1");
			return joaat("SLOTID_WARDROBE_FOOTWEAR_2");
			return joaat("SLOTID_WARDROBE_FOUNDATION");
			return joaat("SLOTID_WARDROBE_FRECKLES");
			return 755611221;
			return joaat("SLOTID_WARDROBE_GLOVES");
			return joaat("SLOTID_WARDROBE_GRIME");
			return joaat("SLOTID_WARDROBE_GUNBELT");
			return joaat("SLOTID_WARDROBE_HAIR");
			return joaat("SLOTID_WARDROBE_HEAD");
			return -246340825;
			return joaat("SLOTID_WARDROBE_HEADWEAR");
			return joaat("SLOTID_WARDROBE_LIPSTICK");
			return joaat("SLOTID_WARDROBE_LOADOUT_1");
			return joaat("SLOTID_WARDROBE_LOADOUT_2");
			return joaat("SLOTID_WARDROBE_LOADOUT_3");
			return joaat("SLOTID_WARDROBE_LOADOUT_4");
			return joaat("SLOTID_WARDROBE_LOADOUT_5");
			return joaat("SLOTID_WARDROBE_LOADOUT_6");
			return joaat("SLOTID_WARDROBE_LOADOUT_7");
			return joaat("SLOTID_WARDROBE_LOADOUT_8");
			return joaat("SLOTID_WARDROBE_LOADOUT_9");
			return joaat("SLOTID_WARDROBE_LOWER_BODY");
			return joaat("SLOTID_WARDROBE_LOWER_GARB");
			return -1384685096;
			return -2026728113;
			return joaat("SLOTID_WARDROBE_MOLES");
			return joaat("SLOTID_WARDROBE_NECKWEAR_1");
			return joaat("SLOTID_WARDROBE_NECKWEAR_2");
			return joaat("SLOTID_WARDROBE_OUTFIT");
			return joaat("SLOTID_WARDROBE_SATCHEL");
			return joaat("SLOTID_WARDROBE_SCAR");
			return joaat("SLOTID_WARDROBE_SKIN_MOTTLING");
			return joaat("SLOTID_WARDROBE_SPOTS");
			return joaat("SLOTID_WARDROBE_TEETH");
			return joaat("SLOTID_WARDROBE_UPPER_BODY");
			return joaat("SLOTID_WARDROBE_UPPER_GARB");
			return -1034549620;
			return -1293064293;
			return -1540142553;
			return -1769886012;
			return -1983081126;
			return -1106117124;
			return -1873108338;
			return -2097543219;
			return 155413195;
			return joaat("SLOTID_WATCH");
			return joaat("SLOTID_WEAPON_0");
			return joaat("SLOTID_WEAPON_1");
			return joaat("SLOTID_WEAPON_2");
			return joaat("SLOTID_WEAPON_3");
			return 1570861011;
			return joaat("SLOTID_WEAPON_BOW_FRAME_TINT");
			return joaat("SLOTID_WEAPON_BOW_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_BOW_IMPROVED_GRIP");
			return joaat("SLOTID_WEAPON_BOW_TRIGGER_TINT");
			return joaat("SLOTID_WEAPON_FISHINGROD_GRIP");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_BARREL_RIFLING");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_CYLINDER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_LONGARM_FRAME_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_GRIP_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_ENGRAVING");
			return joaat("SLOTID_WEAPON_LONGARM_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_LONGARM_HAMMER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_SIGHT_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_STRAP_TINT");
			return joaat("SLOTID_WEAPON_LONGARM_TRIGGER_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_MATERIAL");
			return joaat("SLOTID_WEAPON_LONGARM_WRAP_TINT");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_MELEE_BLADE_MATERIAL");
			return joaat("SLOTID_WEAPON_MELEE_GRIP_TINT");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_M1899_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_MAUSER_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_SEMIAUTO_SIGHT");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_BARREL");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_CLIP");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_LEVER");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_TUBE");
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_WRAP1");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_GRIP");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_EVANS_WRAP");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_GRIP");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_LEVER");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_CLIP");
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_GRIP");
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
			return 763162704;
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_LEVER");
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_CLIP");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_CLIP");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_REVOLVER");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_AMMO_SHOTGUN");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_LEMAT_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_AMMO_REVOLVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_BARREL_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_GRIP_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT");
			return joaat("SLOTID_WEAPON_REVOLVER_NAVY_SIGHT_CROSSOVER");
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_BARREL");
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_CLIP");
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SCOPE");
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SIGHT");
			return -62390436;
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_BOLTACTION_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_CARCANO_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_BARREL");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_CLIP");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_STOCK");
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_ROLLINGBLOCK_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_SIGHT");
			return joaat("SLOTID_WEAPON_RIFLE_SPRINGFIELD_WRAP1");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_CLIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_GRIP");
			return joaat("SLOTID_WEAPON_RIFLE_VARMINT_WRAP1");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_BARREL_RIFLING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIP_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHORTARM_GRIPSTOCK_TINT");
			return joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL");
			return joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL");
			return joaat("SLOTID_WEAPON_SHOTGUN_BARREL_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_CYLINDER_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP_EXOTIC");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_GRIP_EXOTIC");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_FOLDING_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING");
			return joaat("SLOTID_WEAPON_SHOTGUN_FRAME_ENGRAVING_ROLE");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_CLIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMP_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_REPEATING_SIGHT");
			return -1150323212;
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWED_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_STOCK");
			return joaat("SLOTID_WEAPON_SHOTGUN_SAWEDOFF_WRAP1");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_BARREL");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_GRIP");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_SIGHT");
			return joaat("SLOTID_WEAPON_SHOTGUN_SEMIAUTO_WRAP1");
			return 1254273765;
			return -792172668;
			return 1905987493;
			return joaat("SLOTID_WEAPON_SNIPERRIFLE_ROLLINGBLOCK_GRIP");
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return joaat("SLOTID_WEB_INBOX");
			return joaat("SLOTID_WEB_INBOX_AMMO");
			return joaat("SLOTID_WEB_INBOX_CONSUMABLES");
			return joaat("SLOTID_WEB_INBOX_DOCUMENTS");
			return joaat("SLOTID_WEB_INBOX_GIFTS");
			return 1084576580;
			return joaat("SLOTID_WEB_INBOX_HORSES");
			return joaat("SLOTID_WEB_INBOX_KIT");
			return joaat("SLOTID_WEB_INBOX_OFFERS");
			return joaat("SLOTID_WEB_INBOX_WEAPONS");
			return -386012962;
			return joaat("SLOTID_CARAVAN_UPGRADE");
			return joaat("SLOTID_CARRIED_HORSE_EQUIPMENT");
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return joaat("SLOTID_TEMPORARY_HORSE");
			return -319249747;
			return -16955722;
			return joaat("SLOTID_WARDROBE_BEARD_CHIN");
			return joaat("SLOTID_WARDROBE_BEARD_CHOPS");
			return joaat("SLOTID_WARDROBE_BEARD_MUSTACHE");
			return joaat("SLOTID_WARDROBE_FOOTWEAR_3");
			return joaat("SLOTID_WARDROBE_LOADOUT");
			return joaat("SLOTID_WARDROBE_MISC");
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return joaat("SLOTID_NONE");
			return joaat("SLOTID_ANY");
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}

bool func_526(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_673(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_527(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_711(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_528(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_340(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_500(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_529(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_712(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_669(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_369(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_500(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_530(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_713(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

void func_531(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_30();
	func_31(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_532(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_714(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 -= iVar1;
		}
	}
	return iVar0;
}

bool func_533(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_534(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_535(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_363(50))
			{
				if (!func_363(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_363(51))
			{
				if (!func_363(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_536()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_537(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_340(iParam1, 0))
	{
		return false;
	}
	if (func_360(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_242() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_365(iParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_715(iParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_361(iParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_576(iVar4, 1);
		if (func_716(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_365(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_361(iParam1, -1638171711))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			if (func_717(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_718(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_718(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_365(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_361(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_719(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_538()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_539()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1.0f - fVar0));
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - fVar0));
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), (1.0f - fVar1));
}

int func_540(int iParam0)
{
	if (!func_443(iParam0))
	{
		return -1;
	}
	return func_720(iParam0);
}

int func_541()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_391(func_721(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_542(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

bool func_543(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_391(iVar0, 1, 0) && func_391(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_544(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

bool func_545(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_722(iParam0);
	if (iVar0 != -15)
	{
		func_31(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_723(iVar0, 1);
	}
	return false;
}

int func_546(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1.0f;
	if (bParam1 && func_391(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 += 0.1f;
	}
	sVar1.f_1 = 10;
	sVar1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, true, true, iParam0, &sVar1, 0);
	iVar24 = 0;
	while (iVar24 < sVar1.f_0)
	{
		if (sVar1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
		}
		else
		{
			iVar25 = sVar1.f_1[iVar24];
			if (func_340(iVar25, 0) && func_361(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_547(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_609(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_548(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
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
		if (func_724())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_609(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_725(iVar0);
			func_726(iVar0, 0, 0);
		}
		func_609(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_339(func_605(joaat("CAREER_CASH")), iVar1);
	}
}

void func_549(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_550(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_551(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_552(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_553(int iParam0)
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

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_562(iVar9);
	iVar2 = func_562(iVar10);
	iVar3 = func_562(iVar11);
	iVar5 = func_563(iVar9);
	iVar6 = func_563(iVar10);
	iVar7 = func_563(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_562(iVar12);
		iVar8 = func_563(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 += iVar5;
	}
	else
	{
		iVar0 += iVar1;
	}
	if (iVar2 >= iVar6)
	{
		iVar0 += iVar6;
	}
	else
	{
		iVar0 += iVar2;
	}
	if (iVar3 >= iVar7)
	{
		iVar0 += iVar7;
	}
	else
	{
		iVar0 += iVar3;
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 += iVar8;
		}
		else
		{
			iVar0 += iVar4;
		}
	}
	return iVar0;
}

void func_554(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_555()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_727(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_556()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_557(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam0)
	{
		case joaat("TAXIDERMY_ORDER_01"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_02"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_03"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_04"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
		case joaat("TAXIDERMY_ORDER_05"):
			if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (iParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				iVar0 = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				iVar1 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				iVar2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				iVar3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	}
	if (iParam0 == joaat("TAXIDERMY_ORDER_01"))
	{
		if (bParam3)
		{
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar1))
		{
			*sParam2++;
		}
		if (func_698(iVar0) && func_698(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar1))
		{
			*sParam2++;
		}
		if (func_698(iVar2))
		{
			*sParam2++;
		}
		if ((func_698(iVar0) && func_698(iVar1)) && func_698(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar1))
		{
			*sParam2++;
		}
		if (func_698(iVar2))
		{
			*sParam2++;
		}
		if (func_698(iVar3))
		{
			*sParam2++;
		}
		if (((func_698(iVar0) && func_698(iVar1)) && func_698(iVar2)) && func_698(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_558(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_728(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_729(joaat("WS_DOWNS_RANCH_EDITH"));
			func_729(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_729(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_729(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_728(joaat("WS_DOWNS_RANCH_EDITH"));
			func_729(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_729(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_729(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_729(joaat("WS_DOWNS_RANCH_EDITH"));
			func_728(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_729(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_729(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_729(joaat("WS_DOWNS_RANCH_EDITH"));
			func_729(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_728(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_729(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_729(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_729(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_728(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_730();
			func_728(iParam0);
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
			func_731();
			func_728(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_729(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_729(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_728(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_729(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_729(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_728(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_729(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_729(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_728(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_729(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_729(joaat("WS_RHODES_GRAVE_OPEN"));
			func_728(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_729(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_729(joaat("WS_RHODES_GRAVE_OPEN"));
			func_728(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_729(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_729(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_728(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_729(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_728(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_729(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_728(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_729(joaat("WS_UTOPIA_TREE_MISSION"));
			func_729(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_729(joaat("WS_UTOPIA_TREE_STUMP"));
			func_728(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_729(joaat("WS_UTOPIA_TREE_STANDING"));
			func_729(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_729(joaat("WS_UTOPIA_TREE_STUMP"));
			func_728(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_729(joaat("WS_UTOPIA_TREE_STANDING"));
			func_729(joaat("WS_UTOPIA_TREE_MISSION"));
			func_729(joaat("WS_UTOPIA_TREE_STUMP"));
			func_728(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_729(joaat("WS_UTOPIA_TREE_STANDING"));
			func_729(joaat("WS_UTOPIA_TREE_MISSION"));
			func_729(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_728(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_729(joaat("WS_MICAH_CAMP"));
			func_729(joaat("WS_MICAH_CAMP_POST"));
			func_728(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_729(joaat("WS_MICAH_CAMP_EMPTY"));
			func_729(joaat("WS_MICAH_CAMP_POST"));
			func_728(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_729(joaat("WS_MICAH_CAMP_EMPTY"));
			func_729(joaat("WS_MICAH_CAMP"));
			func_728(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_729(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_728(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_729(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_729(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_732(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_728(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_729(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_729(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_728(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_729(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_728(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_729(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_728(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_729(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_728(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_729(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_728(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_729(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_728(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_729(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_729(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_728(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_729(joaat("WS_NEW_COM_BANK_START"));
			func_729(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_729(joaat("WS_NEW_COM_BANK_AFTER"));
			func_729(joaat("WS_NEW_COM_BANK_POST"));
			func_728(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_729(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_729(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_729(joaat("WS_NEW_COM_BANK_AFTER"));
			func_729(joaat("WS_NEW_COM_BANK_POST"));
			func_728(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_729(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_729(joaat("WS_NEW_COM_BANK_START"));
			func_729(joaat("WS_NEW_COM_BANK_AFTER"));
			func_729(joaat("WS_NEW_COM_BANK_POST"));
			func_728(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_729(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_729(joaat("WS_NEW_COM_BANK_START"));
			func_729(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_729(joaat("WS_NEW_COM_BANK_POST"));
			func_728(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_729(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_729(joaat("WS_NEW_COM_BANK_START"));
			func_729(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_729(joaat("WS_NEW_COM_BANK_AFTER"));
			func_728(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_729(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_728(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_729(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_728(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_729(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_728(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_729(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_729(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_728(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_728(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_728(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_728(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_729(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_728(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_728(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_728(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_728(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_728(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_729(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_728(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_729(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_728(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_729(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_728(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_729(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_728(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_729(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_728(0);
			func_729(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_729(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_728(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_729(0);
			func_729(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_728(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_729(0);
			func_729(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_728(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_729(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_728(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_729(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_728(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_728(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_728(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_728(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_729(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_728(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_729(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_729(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_729(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_728(joaat("WS_SHADY_BELLE_ABANDON"));
			func_729(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_729(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_728(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_729(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_729(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_728(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_729(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_728(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_729(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_732(iParam0))
				{
					func_728(iParam0);
				}
			}
			else if (func_732(iParam0))
			{
				func_729(iParam0);
			}
			break;
	}
}

void func_559(int iParam0)
{
	if (!func_733(iParam0))
	{
		func_735(func_734(iParam0));
	}
}

int func_560()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_733(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_561(int iParam0, int iParam1, int iParam2)
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

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_562(iVar9);
	iVar2 = func_562(iVar10);
	iVar3 = func_562(iVar11);
	iVar5 = func_563(iVar9);
	iVar6 = func_563(iVar10);
	iVar7 = func_563(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_562(iVar12);
		iVar8 = func_563(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 += iVar5;
		}
		else
		{
			iVar0 += (iVar1 + iParam1);
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 += iVar5;
	}
	else
	{
		iVar0 += iVar1;
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 += iVar6;
		}
		else
		{
			iVar0 += (iVar2 + iParam1);
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 += iVar6;
	}
	else
	{
		iVar0 += iVar2;
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 += iVar7;
		}
		else
		{
			iVar0 += (iVar3 + iParam1);
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 += iVar7;
	}
	else
	{
		iVar0 += iVar3;
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 += iVar8;
			}
			else
			{
				iVar0 += (iVar4 + iParam1);
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 += iVar8;
		}
		else
		{
			iVar0 += iVar4;
		}
	}
	return iVar0;
}

int func_562(int iParam0)
{
	int iVar0;

	if (func_391(iParam0, 1, 0))
	{
		iVar0 = func_344(iParam0, 0, 0);
	}
	return iVar0;
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return 15;
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return 10;
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return 3;
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return 7;
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return 5;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return 10;
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return 5;
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return 10;
		default:
			break;
	}
	return 0;
}

int func_564(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_565(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

int func_566(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_682(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_567(int iParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_566(iParam1, 5) || iParam0 == func_566(iParam1, 6)) || iParam0 == func_566(iParam1, 7)) || iParam0 == func_566(iParam1, 8)) || iParam0 == func_566(iParam1, 9))
	{
		func_557(iParam1, iParam0, &cParam2, 0, iParam3, bParam4);
		func_357(51, 0, 0, iParam1, cParam2, 0, -1, 0);
		func_359(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_568(int iParam0, int iParam1, bool bParam2)
{
	char[] cVar0[8];

	cVar0 = 1;
	if ((((iParam0 == func_566(iParam1, 5) || iParam0 == func_566(iParam1, 6)) || iParam0 == func_566(iParam1, 7)) || iParam0 == func_566(iParam1, 8)) || iParam0 == func_566(iParam1, 9))
	{
		if (func_557(iParam1, iParam0, &cVar0, 0, 0, 0))
		{
			func_357(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, cVar0, func_507(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_357(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_359(51, 0, 0, cVar0, func_507(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_569()
{
	if (func_505(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

bool func_570(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_428(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_585("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_586(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_524(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_587(iVar1);
				return true;
			}
			iVar3++;
		}
		func_587(iVar1);
	}
	return false;
}

void func_571(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_572(int iParam0)
{
	if (!func_736(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_573(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

void func_574(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_575(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_737(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

int func_576(int iParam0, int iParam1)
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

bool func_577(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_738();
	if (iParam2 == 39)
	{
		sVar0 = { func_493(iParam0, 1, 0) /*5*/ };
		iParam2 = func_576(func_575(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_361(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_716(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_580((1 << 15)) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_739(func_737(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_740(iParam2);
	func_741(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_742(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_742(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_743(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_744(iParam0, iParam2, iParam1, func_242() != -1);
	if (bParam4)
	{
		func_745(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_745(&(Global_1946054.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946054.f_2589)
		{
			if (Global_1946054.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946054.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_746(func_737(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_578(bool bParam0, bool bParam1, bool bParam2)
{
	func_747(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_748((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_749(sVar0);
}

bool func_580(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_581()
{
	func_750(&(Global_1946054.f_2776));
	func_751((1 << 15));
	func_746(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_582(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_576(iParam0, 1);
	switch (iParam0)
	{
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/] || Global_1946054.f_1378.f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_583(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_752(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_753(sVar0);
}

void func_584(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_753(sVar0);
}

bool func_585(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_500(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_586(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_587(int iParam0)
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

float func_588()
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

	if (func_754())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_755(2);
	}
	if (Global_1347477.f_119)
	{
		return func_755(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_756();
	fVar2 = func_757();
	fVar3 = func_758();
	fVar4 = func_759();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_760());
	fVar7 = (func_755(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_761(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_762(3, fVar9, fVar9 > 100.0f);
	return func_763(fVar7, -100.0f, 100.0f);
}

float func_589()
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

	if (func_754())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_755(1);
	}
	if (Global_1347477.f_119)
	{
		return func_755(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_756();
	fVar2 = func_757();
	fVar3 = func_758();
	fVar4 = func_759();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_760());
	fVar7 = (func_755(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_761(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_762(2, fVar9, fVar9 > 100.0f);
	return func_763(fVar7, -100.0f, 100.0f);
}

float func_590()
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

	if (func_754())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_755(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_764())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_765())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_755(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_756();
	fVar2 = func_757();
	fVar3 = func_758();
	fVar4 = func_759();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_760());
	fVar7 = (func_755(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_761(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_762(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_755(0);
	}
	return func_763(fVar7, -100.0f, 100.0f);
}

bool func_591(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_592(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_593(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_340(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_497(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_369(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_500(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_594(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return Global_1946054.f_2657.f_21;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return Global_1946054.f_2657.f_23;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return Global_1946054.f_2657.f_22;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return Global_1946054.f_2657.f_24;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return Global_1946054.f_2657.f_25;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (bParam1)
			{
				return Global_1946054.f_2657.f_20;
			}
			else
			{
				return func_766();
			}
			break;
	}
	return 0;
}

int func_595(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT"):
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT"):
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT"):
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT"):
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT"):
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT"):
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT"):
			return 0;
		case joaat("CLOTHING_OUTFIT_OWNED_001"):
			return 24;
		case joaat("CLOTHING_OUTFIT_OWNED_002"):
			return 25;
		case joaat("CLOTHING_OUTFIT_OWNED_003"):
			return 26;
		case joaat("CLOTHING_OUTFIT_OWNED_005"):
			return 27;
		case joaat("CLOTHING_OUTFIT_OWNED_006"):
			return 28;
		case joaat("CLOTHING_SP_OUTFIT_SONY_001"):
			return 21;
		case joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"):
			return 22;
		case 1784889667:
			return 13;
		case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
			return 8;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_ONE"):
			return 1;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_TWO"):
			return 2;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_THREE"):
			return 3;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR"):
			return 4;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE"):
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER"):
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT"):
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM"):
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L"):
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case joaat("CLOTHING_SP_NUDE"):
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_596(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_597(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_596(iParam0))
	{
		return;
	}
	if (func_767(iParam0))
	{
		return;
	}
	if (!func_768(iParam0))
	{
		func_769(iParam0, 1, 0);
	}
	iVar0 = func_770(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_771(iParam0, (1 << 9)))
		{
			func_579(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_772() && !bParam1) && !func_262(0, 0, 1))
	{
		func_773(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_774(iParam0, 6);
	if (bParam2)
	{
		if (!func_262(0, 0, 1))
		{
			func_504(1, 4);
		}
	}
}

int func_598()
{
	return Global_1946054.f_1;
}

bool func_599(int iParam0, bool bParam1)
{
	return func_594(iParam0, 0) < func_775(iParam0, bParam1);
}

bool func_600(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_365(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_601(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_576(iParam0, 1) /*3*/] != Global_1946054.f_57[func_576(iParam0, 1) /*11*/];
}

void func_602(int iParam0, int iParam1)
{
	if (func_361(iParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_776(iParam1, 0);
	}
	else if (func_361(iParam1, 930141731))
	{
		func_776(iParam1, 1);
		func_777(iParam0);
	}
}

void func_603(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_604(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> /*112*/ sVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_778(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_779(uParam2, iParam0, sVar1);
	return 1;
}

struct<2> /*16*/ func_605(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_606(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_607(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_608(int iParam0)
{
	var uVar0;

	if (!func_780(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_609(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_781(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_610()
{
	return !Global_1911774;
}

void func_611(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = iParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;
	if (Global_1911774.f_3 < 20)
	{
		Global_1911774.f_3++;
	}
}

char* func_612(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_613(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	sVar3.f_2 = 5;
	sVar3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &sVar3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3.f_2[iVar0 /*3*/]))
			{
				Jump @227; // curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(sVar3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(sVar3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && sVar3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; // curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; // curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; // curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { sVar3.f_2[iVar0 /*3*/] /*3*/ };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_614(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_615(var uParam0, int iParam1)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2046))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ENTITY_WITH_ID_EXIST_IN_ANIM_SCENE(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
	{
		return false;
	}
	if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(uParam0->f_2046, uParam0->f_107[iParam1 /*113*/].f_4))
	{
		return true;
	}
	return false;
}

int func_616(var uParam0, int iParam1)
{
	int iVar0;

	func_782(uParam0, iParam1);
	func_783(uParam0, iParam1);
	func_784(uParam0, iParam1);
	func_785(uParam0, iParam1);
	func_57(uParam0, iParam1, 0);
	func_786(uParam0, iParam1);
	if ((uParam0->f_1696 || uParam0->f_5) || uParam0->f_1697)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 30000);
		PED::_0x15F4732C357B1D6D(uParam0->f_107[iParam1 /*113*/].f_5, PLAYER::PLAYER_ID(), 9);
		PED::_DISABLE_AMBIENT_LOOK_AT_REQUESTS(uParam0->f_107[iParam1 /*113*/].f_5, iVar0);
	}
	if (uParam0->f_5 || uParam0->f_1698)
	{
		PED::_0x633F83B301C87994(uParam0->f_107[iParam1 /*113*/].f_5, 122);
	}
	switch (uParam0->f_107[iParam1 /*113*/].f_32.f_1)
	{
		case 1:
			return func_787(uParam0, iParam1);
		case 2:
			return func_788(uParam0, iParam1);
		case 3:
			return func_789(uParam0, iParam1);
		case 4:
			return func_790(uParam0, iParam1);
		case 5:
			return func_791(uParam0, iParam1);
		default:
			break;
	}
	return 1;
}

struct<18> /*144*/ func_617(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_618(bool bParam0)
{
	int iVar0;

	iVar0 = func_500(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_528(joaat("CARRIED_WEAPONS"), func_665(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_528(joaat("CARRIED_WEAPONS"), func_665(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_528(joaat("CARRIED_WEAPONS"), func_665(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_619(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_620(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_500(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_621(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_712(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_369(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_500(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_242() == -1)
	{
		if (func_350(43))
		{
			if (func_361(iParam0, 412399755))
			{
				func_559(joaat("EXOTIC_STAGE_01"));
				if (func_560() == 0)
				{
					func_504(0, 10);
					iVar0 = func_792(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_562(iParam0) < func_563(iParam0))
						{
							func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_350(44))
		{
			if (func_361(iParam0, 709057512))
			{
				func_559(joaat("EXOTIC_STAGE_02"));
				if (func_560() == 1)
				{
					func_504(0, 10);
					iVar0 = func_792(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_562(iParam0) < func_563(iParam0))
						{
							func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_350(45))
		{
			if (func_361(iParam0, -1478961327))
			{
				func_559(joaat("EXOTIC_STAGE_03"));
				if (func_560() == 2)
				{
					func_504(0, 10);
					iVar0 = func_792(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_562(iParam0) < func_563(iParam0))
						{
							func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_350(46))
		{
			if (func_361(iParam0, -1238404098))
			{
				func_559(joaat("EXOTIC_STAGE_04"));
				if (func_560() == 3)
				{
					func_504(0, 10);
					iVar0 = func_792(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_562(iParam0) < func_563(iParam0))
						{
							func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_350(47))
		{
			if (func_361(iParam0, 1160548794))
			{
				func_559(joaat("EXOTIC_STAGE_05"));
				if (func_560() == 4)
				{
					func_504(0, 10);
					iVar0 = func_792(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_562(iParam0) < func_563(iParam0))
						{
							func_357(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_623(int iParam0)
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

bool func_624(int iParam0)
{
	return (Global_1935630 & iParam0) != 0;
}

bool func_625(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_626(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_627(int iParam0)
{
	return func_793(iParam0, 4) | func_793(iParam0, 5);
}

int func_628(int iParam0)
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

int func_629(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_630(int iParam0)
{
	int iVar0;
	int iVar1;

	func_794(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

void func_631(var uParam0)
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(*uParam0))
	{
		TASK::_DELETE_SCENARIO_POINT(*uParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_1));
	}
}

bool func_632(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

int func_633(int iParam0, bool bParam1)
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

int func_634(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;

	if (!func_108(iParam1))
	{
		return 0;
	}
	iVar0 = func_109(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !func_125(iVar0, 0)) || (bParam3 && !func_55(iParam1)))
	{
		if (bParam2)
		{
			if (func_231(iParam1, 1) != 0)
			{
				iVar0 = func_795(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_125(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		func_796(iParam1, iVar0);
		func_797(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_635()
{
	return func_641(3) | func_641(5) | func_641(2) | func_641(1) | func_641(9) | func_641(6) | func_641(17) | func_641(8) | func_641(21) | func_641(4);
}

bool func_636(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_107)
	{
		if (uParam0->f_107[iVar0 /*113*/].f_1 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_637(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_378(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_638(int iParam0)
{
	if ((((((iParam0 == 11 || iParam0 == 13) || iParam0 == 15) || iParam0 == 16) || iParam0 == 19) || iParam0 == 20) || iParam0 == 22)
	{
		return false;
	}
	return true;
}

bool func_639(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_127(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_125(func_248(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_798(iParam0, 1, 0))
	{
		return false;
	}
	if (func_127(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

bool func_640(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return false;
	}
	if (!func_799(iParam0))
	{
		return false;
	}
	if (func_263(iParam0, (1 << 31)))
	{
		return true;
	}
	if (func_263(iParam0, (1 << 30)))
	{
		return true;
	}
	iVar0 = func_800(iParam1);
	if (iVar0 < Global_1360165[iParam0 /*1157*/].f_22)
	{
		return true;
	}
	if (iVar0 == Global_1360165[iParam0 /*1157*/].f_22)
	{
		if (bParam2)
		{
			return true;
		}
		if (!func_263(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_641(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_642(int iParam0, int iParam1)
{
	return (*iParam0 & iParam1) != 0;
}

bool func_643(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_54(iParam0))
	{
		return false;
	}
	if (!bParam2)
	{
		if (func_640(iParam0, iParam1, 0))
		{
			return false;
		}
	}
	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 |= iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 |= iParam1;
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		func_31(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return true;
}

int func_644(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	Vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_54(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || (Global_1391438.f_5 & 8) != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (func_127(iParam0, 2, 1))
			{
				func_107(iParam0, 2, 1);
			}
			if (func_235(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						func_59(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						func_60(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_125(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (func_125(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						func_801(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_59(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_802(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_59(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				func_802(iParam0, 1);
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
			if (!func_127(iParam0, 44, 0))
			{
				func_59(iParam0, 44, 0);
			}
			if (func_803(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_802(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171 /*PCF_0x6868B572*/, true);
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			func_107(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130 /*PCF_DisableTalkTo*/, false);
			func_106(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_804(iParam0, 0, 0, 1);
			}
			func_107(iParam0, 33, 1);
			func_107(iParam0, 34, 1);
			func_107(iParam0, 29, 1);
			if (!func_228(vVar0) && bParam7)
			{
				func_802(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_802(iParam0, 4);
			}
			else
			{
				func_802(iParam0, 5);
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
						func_801(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_805(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, (1 << 30));
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
				func_802(iParam0, 4);
			}
			else
			{
				func_802(iParam0, 5);
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
				if (func_806(iParam0, iParam13))
				{
					if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
					{
						func_807(iParam0, iParam13, 0);
						func_808(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (func_127(iParam0, 25, 0))
						{
							func_107(iParam0, 25, 0);
						}
						func_59(iParam0, 66, 0);
						func_802(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_802(iParam0, 5);
				}
				func_59(iParam0, 28, 1);
			}
			else
			{
				func_802(iParam0, 5);
			}
			break;
		case 5:
			if (PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/]))
			{
				func_802(iParam0, 6);
			}
			break;
		case 6:
			if (func_125(Global_1360165[iParam0 /*1157*/], 0))
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
					func_809(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					func_304(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			func_802(iParam0, 7);
		case 7:
			func_106(iParam0, bParam9, bParam15, 0);
			func_122(iParam0, 4, bParam11);
			func_124(iParam0);
			if (bParam20)
			{
				if (func_303(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			func_810(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			func_802(iParam0, 0);
			func_435(iParam0, 16, 1);
			func_107(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

bool func_645(int iParam0)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	if (!func_133(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_646(int iParam0, bool bParam1)
{
	if (!func_61(iParam0))
	{
		return false;
	}
	if ((func_133(iParam0, 1) && !func_62(iParam0)) && func_134(iParam0))
	{
		return false;
	}
	if (!func_133(iParam0, 2))
	{
		return false;
	}
	if (!bParam1)
	{
		if (!func_811(iParam0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_647(int iParam0)
{
	if (!func_61(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

bool func_648(int iParam0)
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

void func_649(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_812(iParam0, iParam1))
		{
			if (func_813(iParam0, iParam1))
			{
				if (func_814(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_815(iParam0);
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

void func_650(int iParam0, int iParam1, bool bParam2)
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

void func_651(int iParam0, bool bParam1)
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

void func_652(int iParam0, int iParam1)
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

bool func_653()
{
	int iVar0;
	int iVar1;

	if (!TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		return false;
	}
	iVar0 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (!STREAMING::IS_MODEL_VALID(iVar1))
	{
		return false;
	}
	if (((iVar1 == joaat("P_MUGCOFFEE01X") || iVar1 == joaat("P_BOTTLEJD01X")) || iVar1 == joaat("P_BOTTLEBEER01A")) || iVar1 == joaat("P_BOWL04X_STEW"))
	{
		return false;
	}
	return true;
}

bool func_654()
{
	return MISC::IS_BIT_SET(Global_1357549.f_1893, 0);
}

void func_655(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_227(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_656(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_657(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

Vector3 func_658()
{
	if (func_637(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_637(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

bool func_659(int iParam0, int iParam1)
{
	if (func_242() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_660(int iParam0)
{
	if (func_242() != -1)
	{
		if (func_591(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_591(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_661(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_591(iParam0, (1 << 16)) && !func_591(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_591(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_591(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_662(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_663()
{
	return Global_1905944.f_5694;
}

int func_664(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &sVar0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = sVar0.f_1;
	return 1;
}

struct<4> /*32*/ func_665(bool bParam0)
{
	return func_528(joaat("CHARACTER"), func_816(), joaat("SLOTID_NONE"), bParam0);
}

bool func_666(int iParam0, bool bParam1)
{
	if (func_365(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_363(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_667(bool bParam0)
{
	int iVar0;

	iVar0 = func_500(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_528(joaat("EMOTE_ITEM"), func_665(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_528(joaat("EMOTE_ITEM"), func_665(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_668(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_365(iParam0);
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

bool func_669(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_500(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_670(int iParam0)
{
	if (func_817(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_671(int iParam0)
{
	if (!func_340(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_CRICKET");
			return 1;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*iParam0 = joaat("UPGRADE_FSH_BAIT_WORM");
			return 1;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			return 1;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			return 1;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_672(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_340(iParam0, 0))
	{
		return false;
	}
	sVar0 = { func_493(iParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_525((398 + iVar29), 1);
		if (func_526(iParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_527(iParam0, &sVar6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_673(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_340(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_528(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_500(bParam6), &sVar0, false);
	return iVar4;
}

int func_674(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_675(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5.0f;
		case 2:
			return 20.0f;
		case 3:
			return 10.0f;
		case 4:
			return 10.0f;
		case 5:
			return 20.0f;
		case 6:
			return 10.0f;
		case 7:
			return 15.0f;
		case 8:
			return 15.0f;
		case 9:
			return 20.0f;
		case 10:
			return 5.0f;
		case 11:
			return 5.0f;
		case 12:
			return 10.0f;
		case 13:
			return 20.0f;
		case 14:
			return 30.0f;
		case 15:
			return 5.0f;
		case 16:
			return 5.0f;
		case 17:
			return 3.0f;
		case 18:
			return 20.0f;
		case 19:
			return func_818(iParam0);
		case 20:
			return 25.0f;
		case 21:
			return 50.0f;
		case 22:
			return 100.0f;
		case 23:
			return 150.0f;
		case 24:
			return 20.0f;
		case 25:
			return 10.0f;
		case 26:
			return 20.0f;
		case 27:
			return 20.0f;
		case 28:
			return 20.0f;
		case 29:
			return 20.0f;
		case 30:
			return func_818(iParam0);
		case 31:
			return 25.0f;
		case 32:
			return 50.0f;
		case 33:
			return 100.0f;
		case 34:
			return 150.0f;
		case 35:
			return 1.0f;
		case 36:
			return 5.0f;
		case 37:
			return 1.0f;
		case 38:
			return 3.0f;
		case 39:
			return 1.0f;
		case 40:
			return 1.0f;
		case 41:
			return 1.0f;
		case 42:
			return 5.0f;
		case 43:
			return 10.0f;
		case 49:
			return 20.0f;
		case 44:
			return 5.0f;
		case 45:
			return 5.0f;
		case 46:
			return 10.0f;
		case 47:
			return 10.0f;
		case 48:
			return 5.0f;
		case 50:
			return func_818(iParam0);
		case 51:
			return 25.0f;
		case 52:
			return 50.0f;
		case 53:
			return 100.0f;
		case 54:
			return 150.0f;
		case 55:
			return 5.0f;
		default:
			break;
	}
	return 0.0f;
}

bool func_676(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_363(18);
		case 2:
			return func_363(20);
		case 1:
			return func_363(19);
		default:
			break;
	}
	return true;
}

int func_677(int iParam0)
{
	return func_819(Global_40.f_11095.f_11[iParam0]);
}

void func_678(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_242() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_363(31))
	{
		return;
	}
	iVar0 = func_677(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_677(iParam0);
	if (func_820(iParam0) & func_821(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_822(fVar1, fParam1);
			if (fParam1 > (float)func_823(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_334(func_824(iParam0), 0);
					}
					func_825(iParam0, iVar2, iVar3);
					func_826(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_679(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("ITEMTYPE_PLAYER_STAMINA");
		case 0:
			return joaat("ITEMTYPE_PLAYER_HEALTH");
		case 2:
			return joaat("ITEMTYPE_PLAYER_DEADEYE");
		default:
			break;
	}
	return 0;
}

void func_681(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_682(int iParam0, var uParam1)
{
	if (!func_827(iParam0))
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

int func_683()
{
	return func_828(Global_40.f_12019);
}

int func_684()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_506(iVar1);
		if (func_391(iVar2, 1, 0) || func_690(func_689(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_685()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_829(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_686()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_695(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_687()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_688(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
		default:
			break;
	}
	return 0;
}

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return 1;
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return (1 << 9);
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return (1 << 10);
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return (1 << 11);
		default:
			break;
	}
	return 0;
}

bool func_690(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_691(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_692(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
		case 3:
			return 8;
		case 4:
			return 9;
		default:
			break;
	}
	return 5;
}

int func_693(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		case 1:
			return 16;
		case 2:
			return 17;
		case 3:
			return 18;
		case 4:
			return 19;
		default:
			break;
	}
	return 15;
}

char* func_694(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
		case joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"):
			return "COL_RO_LADY_SLIPPER_FOUND";
		case joaat("PROVISION_RO_FLOWER_MOCCASIN"):
			return "COL_RO_MOCCASIN_FOUND";
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
		case joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"):
			return "COL_RO_ACUNAS_STAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_CIGAR"):
			return "COL_RO_CIGAR_FOUND";
		case joaat("PROVISION_RO_FLOWER_GHOST"):
			return "COL_RO_GHOST_FOUND";
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
		case joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case joaat("PROVISION_RO_FLOWER_RAT_TAIL"):
			return "COL_RO_RAT_TAIL_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPIDER"):
			return "COL_RO_SPIDER_FOUND";
		case joaat("PROVISION_RO_FLOWER_CLAMSHELL"):
			return "COL_RO_CLAMSHELL_FOUND";
		case joaat("PROVISION_RO_FLOWER_DRAGONS"):
			return "COL_RO_DRAGONS_FOUND";
		case joaat("PROVISION_RO_FLOWER_QUEENS"):
			return "COL_RO_QUEENS_FOUND";
		case joaat("PROVISION_RO_FLOWER_SPARROWS"):
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_695(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_696(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISH_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case joaat("LEGENDARY_FISH_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case joaat("LEGENDARY_FISH_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case joaat("LEGENDARY_FISH_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case joaat("LEGENDARY_FISH_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case joaat("LEGENDARY_FISH_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case joaat("LEGENDARY_FISH_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case joaat("LEGENDARY_FISH_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case joaat("LEGENDARY_FISH_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		case joaat("LEGENDARY_FISH_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_697(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_698(int iParam0)
{
	if (func_830(iParam0) && func_391(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_831(iParam0) & func_832(iParam0))
	{
		return true;
	}
	return false;
}

char* func_699(int iParam0)
{
	if (!func_340(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_409(iParam0));
}

int func_700(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_701(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}
}

void func_702(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
		if (iVar0 == Global_1954819.f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
}

void func_703(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440 /*PCF_0xDBD31C9C*/, !bParam0);
}

void func_704(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439 /*PCF_0x8519377E*/, !bParam0);
}

void func_705(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438 /*PCF_0x14013CF9*/, !bParam0);
}

void func_706(bool bParam0)
{
	int iVar0;

	iVar0 = joaat("HUD_CTX_SP_INTRO_HORSE_ITEMS_RESTRICTED");
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(iVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(iVar0);
	}
}

void func_707(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

void func_708(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

int func_709(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_576(iParam0, 1) /*3*/];
}

void func_710()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_833();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_368(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_415(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_368(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_415(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_711(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_500(0);
	*uParam1 = { func_528(iParam0, func_618(0), iParam3, 0) /*4*/ };
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

bool func_712(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_713(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_714(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_715(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_493(iParam0, 1, 0) /*5*/ };
	return func_575(sVar0.f_4);
}

int func_716(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_361(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_361(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_361(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_361(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_361(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_361(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_717(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_576(func_834(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_365(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_718(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_576(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_580((1 << 19)))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				iVar0++;
				break;
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				iVar0++;
				break;
		}
	}
	iVar0 += PED::_0x31B2E7F2E3C58B89(iParam0, joaat("BASE"), iParam2, bParam3);
	return iVar0;
}

bool func_719(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4"):
			return true;
		default:
			break;
	}
	return false;
}

int func_720(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_835(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_722(int iParam0)
{
	return func_836(iParam0, -1);
}

bool func_723(int iParam0, bool bParam1)
{
	return func_327(func_30(), iParam0, bParam1);
}

bool func_724()
{
	if (func_536())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_725(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_837((Global_40.f_4283.f_325 + iParam0));
}

void func_726(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_724())
	{
		func_609(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_609(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

bool func_727(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_728(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_838(iParam0, 1);
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

void func_729(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_838(iParam0, 1);
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

void func_730()
{
	func_729(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_729(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_729(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_729(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_729(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_729(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_729(joaat("WS_COLTER_STAGE_MP"));
}

void func_731()
{
	func_729(joaat("WS_BEECHERS_SHACK"));
	func_729(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_729(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_729(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_729(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_729(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_729(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_729(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_729(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_729(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_732(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_838(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_733(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case joaat("EXOTIC_STAGE_01"):
			return 1;
		case joaat("EXOTIC_STAGE_02"):
			return 2;
		case joaat("EXOTIC_STAGE_03"):
			return 4;
		case joaat("EXOTIC_STAGE_04"):
			return 8;
		case joaat("EXOTIC_STAGE_05"):
			return 16;
		default:
			break;
	}
	return 0;
}

void func_735(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_736(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_737(int iParam0, int iParam1)
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

void func_738()
{
	int iVar0;

	Global_1946054.f_1378 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1378.f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

void func_739(int iParam0)
{
	func_746(iParam0, 8, 6);
}

void func_740(int iParam0)
{
	func_839(&(Global_1946054.f_2589), iParam0);
}

void func_741(int iParam0, int iParam1)
{
	func_840(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_742(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_743(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_365(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_841(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_741(iVar1, iVar3);
		}
	}
	if (func_601(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_841(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_741(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case joaat("CI_CATEGORY_WARDROBE_VEST"):
			if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (uParam0->f_1[iVar1 /*3*/] == joaat("CLOTHING_HL_PLAYER_NECKTIE_004_3"))
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
			}
			func_842(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_842(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0 /*3*/].f_1 == joaat("BASE") || uParam0->f_1[iVar0 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_842(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_842(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_842(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_842(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; // curOff = 807
				if (iParam1 == Global_1946054.f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_741(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_741(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_365(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_741(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_719(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_365(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_741(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_361(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 1228
				iVar1 = 36;
				if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_719(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_361(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_741(iVar1, iVar3);
					}
				}
			}
			switch (func_365(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_365(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_741(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_365(uParam0->f_1[iVar1 /*3*/]) || func_361(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_741(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_744(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_843(0);
	if (iParam2 != 0 && func_844(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_845(iParam0, func_737(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_745(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;

	bVar6 = func_242() != -1;
	iVar7 = func_843(0);
	if (func_580((1 << 15)))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = Global_1946054.f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_737(iVar0, 1);
			if (func_846(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_846(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_718(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_847(uParam0);
				if (iVar3 > 0)
				{
					if (!func_580((1 << 19)))
					{
						func_748((1 << 19));
						iVar1 -= iVar8;
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = Global_1946054.f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_737(iVar0, 1);
							if (func_846(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_846(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_718(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_741(iVar0, iParam2);
									}
								}
								iVar1 += iVar4;
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_751((1 << 19));
				}
			}
		}
	}
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_576(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_576(iParam0, 1) /*11*/].f_10 & iParam1);
}

void func_747(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_848(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_242() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_849(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_770(0))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_770(Global_40.f_7729);
				Global_1946054.f_1378 = func_770(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_850(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_851(0, 1);
	}
}

void func_748(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_749(struct<4> /*32*/ sParam0)
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
			if (func_852(sParam0.f_0))
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
			func_853(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_748(8);
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
			if (func_852(sParam0.f_0))
			{
				return;
			}
			func_853(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_748(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_584(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_750(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_751(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

bool func_752(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_753(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_852(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_852(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_853(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_748(8);
}

bool func_754()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_755(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

float func_756()
{
	float fVar0;
	int iVar1;

	fVar0 = func_854(13);
	iVar1 = func_855(fVar0);
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

float func_757()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_758()
{
	if (func_536())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_759()
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

float func_760()
{
	return Global_1954815.f_3;
}

void func_761(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_856(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_762(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_856(iParam0, 2, 0, 0);
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

float func_763(float fParam0, float fParam1, float fParam2)
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

bool func_764()
{
	return func_854(12) <= -99.0f;
}

bool func_765()
{
	return func_854(12) >= 99.0f;
}

int func_766()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_365(iVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_857() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_767(int iParam0)
{
	if (!func_596(iParam0))
	{
		return false;
	}
	if (func_771(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_768(int iParam0)
{
	if (!func_596(iParam0))
	{
		return false;
	}
	if (func_771(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_769(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_596(iParam0))
	{
		return;
	}
	if (!func_768(iParam0))
	{
		func_774(iParam0, 2);
		if (bParam2)
		{
			if (!func_262(0, 0, 1))
			{
				func_504(1, 4);
			}
		}
		if ((!func_772() && !bParam1) && !func_262(0, 0, 1))
		{
			func_773(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_858(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT");
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT");
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT");
		case 8:
			return joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT");
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT");
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT");
		case 11:
			return 294553332;
		case 12:
			return 1788874135;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT");
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT");
		case 17:
			return 1902428294;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT");
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
		case 1:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_ONE");
		case 2:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_TWO");
		case 3:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_THREE");
		case 4:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR");
		case 5:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE");
		case 24:
			return joaat("CLOTHING_OUTFIT_OWNED_001");
		case 25:
			return joaat("CLOTHING_OUTFIT_OWNED_002");
		case 26:
			return joaat("CLOTHING_OUTFIT_OWNED_003");
		case 27:
			return joaat("CLOTHING_OUTFIT_OWNED_005");
		case 28:
			return joaat("CLOTHING_OUTFIT_OWNED_006");
		case 21:
			return joaat("CLOTHING_SP_OUTFIT_SONY_001");
		case 22:
			return joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001");
		case 23:
			return joaat("CLOTHING_SP_NUDE");
		case 66:
			return -1243402388;
		case 67:
			return 65931886;
		case 68:
			return 1371678229;
		case 69:
			return 2102263084;
		case 61:
			return -272211555;
		case 64:
			return -55563408;
		case 71:
			return -1914506115;
		case 75:
			return 802495462;
		case 77:
			return 842905332;
		case 78:
			return -1951220140;
		case 79:
			return 1511551084;
		case 81:
			return -1725704631;
		case 83:
			return 1257427489;
		case 85:
			return -659341240;
		case 87:
			return 2038771525;
		case 89:
			return -535599244;
		case 73:
			return -389591806;
		case 70:
			return joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER");
		case 93:
			return 890706995;
		case 90:
			return 1156438275;
		case 91:
			return joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT");
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER");
		case 76:
			return 1460520700;
		case 80:
			return 523337834;
		case 82:
			return -19271249;
		case 84:
			return 214175524;
		case 86:
			return -1303643297;
		case 88:
			return 411856831;
		case 72:
			return -926815459;
		case 74:
			return -1300731953;
		case 65:
			return joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM");
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L");
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
		default:
			break;
	}
	return 0;
}

bool func_771(int iParam0, int iParam1)
{
	if (!func_596(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

bool func_772()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

int func_773(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_774(int iParam0, int iParam1)
{
	if (!func_596(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_775(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			iVar0 = Global_1946054.f_2657.f_26.f_1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			iVar0 = Global_1946054.f_2657.f_26.f_2;
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = Global_1946054.f_2657.f_26;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (iVar0 > 0 && !bParam1)
			{
				iVar0--;
			}
			break;
	}
	return iVar0;
}

void func_776(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_859(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_364(50);
			}
			else
			{
				func_364(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_364(51);
			}
			else
			{
				func_364(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_860(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_396();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_396();
			}
			break;
		case 3:
			func_364(24);
			if (bParam1)
			{
				if (!func_860(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_396();
				}
			}
			break;
	}
}

void func_777(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_861(0))
			{
				iVar0++;
			}
			if (func_861(2))
			{
				iVar0++;
			}
			if (func_861(4))
			{
				iVar0++;
			}
			if (!func_862(16))
			{
				if (iVar0 == 1)
				{
					func_863();
					func_334(456, 1);
					func_864(16);
				}
			}
			if (!func_862(32))
			{
				if (iVar0 >= 3)
				{
					func_863();
					func_334(456, 1);
					func_864(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_861(1))
			{
				iVar0++;
			}
			if (func_861(3))
			{
				iVar0++;
			}
			if (func_861(7))
			{
				iVar0++;
			}
			if (!func_862(1))
			{
				if (iVar0 == 1)
				{
					func_865();
					func_334(457, 1);
					func_864(1);
				}
			}
			if (!func_862(2))
			{
				if (iVar0 >= 3)
				{
					func_865();
					func_334(457, 1);
					func_864(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_861(5))
			{
				iVar0++;
			}
			if (func_861(6))
			{
				iVar0++;
			}
			if (func_861(8))
			{
				iVar0++;
			}
			if (!func_862(4))
			{
				if (iVar0 == 1)
				{
					func_866();
					func_334(455, 1);
					func_864(4);
				}
			}
			if (!func_862(8))
			{
				if (iVar0 >= 3)
				{
					func_866();
					func_334(455, 1);
					func_864(8);
				}
			}
			break;
	}
}

void func_778(var uParam0)
{
	func_603(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_603(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_603(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_779(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_867(uParam0))
	{
		return;
	}
	if (Global_1223851 < 20)
	{
		Global_1223851++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223851.f_1[iVar0 /*21*/] = { Global_1223851.f_1[iVar0 + 1 /*21*/] /*21*/ };
			iVar0++;
		}
	}
	sVar1.f_7.f_2.f_1 = 10;
	sVar1 = { *uParam0 /*4*/ };
	sVar1.f_4 = iParam1;
	sVar1.f_6 = 1;
	sVar1.f_7 = { sParam2 /*14*/ };
	Global_1223851.f_1[(Global_1223851 - 1) /*21*/] = { sVar1 /*21*/ };
}

bool func_780(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> /*152*/ sVar3;

	sVar3.f_2 = 5;
	sVar3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &sVar3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3.f_2[iVar0 /*3*/]))
			{
				Jump @230; // curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(sVar3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(sVar3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && sVar3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @230; // curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; // curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; // curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_781(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_782(var uParam0, int iParam1)
{
	float fVar0;

	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_107[iParam1 /*113*/].f_5))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iParam1 /*113*/].f_32.f_23)))
	{
		PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(uParam0->f_107[iParam1 /*113*/].f_5, &(uParam0->f_107[iParam1 /*113*/].f_32.f_23), uParam0->f_107[iParam1 /*113*/].f_32.f_27, -1, 4);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_107[iParam1 /*113*/].f_32.f_28)))
	{
		PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(uParam0->f_107[iParam1 /*113*/].f_5, &(uParam0->f_107[iParam1 /*113*/].f_32.f_28));
	}
	fVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_35;
	if (fVar0 > 0.0f)
	{
		func_329(uParam0->f_107[iParam1 /*113*/].f_1, fVar0);
	}
}

void func_783(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	iVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_36;
	if (iVar0 < 0)
	{
		return;
	}
	sVar1 = uParam0->f_107[iParam1 /*113*/].f_32.f_37;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	uVar2 = uParam0->f_107[iParam1 /*113*/].f_5;
	uVar3 = uParam0->f_107[iVar0 /*113*/].f_5;
	iVar4 = uParam0->f_107[iParam1 /*113*/].f_32.f_38;
	func_868(sVar1, uVar2, uVar3, iVar4);
}

void func_784(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar0];
		if (iVar1 >= 0 && iVar1 < uParam0->f_1711)
		{
			iVar2 = uParam0->f_1711[iVar1 /*15*/].f_10;
			sVar3 = uParam0->f_1711[iVar1 /*15*/].f_11;
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
			{
				PED::GIVE_PED_HASH_SCENARIO_PROP(uParam0->f_107[iParam1 /*113*/].f_5, iVar2, sVar3, uParam0->f_107[iParam1 /*113*/].f_32.f_2, uParam0->f_107[iParam1 /*113*/].f_32.f_3, true);
			}
		}
		iVar0++;
	}
}

void func_785(var uParam0, int iParam1)
{
	if (uParam0->f_107[iParam1 /*113*/].f_32.f_22 != 0)
	{
		PED::_GIVE_PED_HASH_COMMAND(uParam0->f_107[iParam1 /*113*/].f_5, uParam0->f_107[iParam1 /*113*/].f_32.f_22, 10.0f);
	}
}

void func_786(var uParam0, int iParam1)
{
	if (!func_54(uParam0->f_107[iParam1 /*113*/].f_1))
	{
		return;
	}
	func_869(uParam0->f_107[iParam1 /*113*/].f_1, uParam0->f_107[iParam1 /*113*/].f_32.f_39);
}

int func_787(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	Vector3 vVar10;
	Vector3 vVar13;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;

	if (uParam0->f_107[iParam1 /*113*/].f_1 == 12)
	{
		return 0;
	}
	fVar6 = 100.0f;
	switch (func_24())
	{
		case 1:
			iVar0 = 1;
			iVar1 = 10;
			break;
		case 2:
			iVar0 = 11;
			iVar1 = 21;
			break;
		case 3:
			iVar0 = 22;
			iVar1 = 33;
			break;
		case 6:
			iVar0 = 34;
			iVar1 = 37;
			break;
		default:
			return 0;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		vVar3 = { func_870(iVar2) /*3*/ };
		iVar8 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar3, joaat("WORLD_CAMP_VIG_EXIT_TG"), 1.0f, 1, false);
		if (!TASK::DOES_SCENARIO_POINT_EXIST(iVar8))
		{
		}
		else
		{
			fVar9 = uParam0->f_107[iParam1 /*113*/].f_32.f_8;
			if (fVar9 == 0.0f)
			{
				fVar9 = ENTITY::GET_ENTITY_HEADING(uParam0->f_107[iParam1 /*113*/].f_5);
			}
			vVar10 = { func_871(fVar9) /*3*/ };
			vVar13 = { func_872(ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), vVar3, 1065353216) /*3*/ };
			fVar16 = MISC::ABSF((vVar10.x - vVar13.x));
			fVar17 = MISC::ABSF((vVar10.y - vVar13.y));
			fVar18 = (fVar16 + fVar17);
			if (fVar18 < fVar6)
			{
				fVar6 = fVar18;
				iVar7 = iVar8;
			}
		}
		iVar2++;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iVar7))
	{
		return 0;
	}
	iVar19 = 0;
	if (uParam0->f_107[iParam1 /*113*/].f_32.f_2 != 0)
	{
		iVar19 = uParam0->f_107[iParam1 /*113*/].f_32.f_2;
	}
	TASK::TASK_USE_SCENARIO_POINT(uParam0->f_107[iParam1 /*113*/].f_5, iVar7, 0, 0, true, false, iVar19, false, -1.0f, false);
	return 1;
}

int func_788(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> /*512*/ sVar1;

	iVar0 = uParam0->f_107[iParam1 /*113*/].f_5;
	sVar1 = { uParam0->f_107[iParam1 /*113*/].f_32 /*64*/ };
	if (sVar1.f_10)
	{
		if (func_228(sVar1.f_5))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar0, sVar1.f_2, 0, false, MISC::GET_HASH_KEY(sVar1.f_3), uParam0->f_107[iParam1 /*113*/].f_32.f_11, uParam0->f_107[iParam1 /*113*/].f_32.f_12);
		}
		else
		{
			if (sVar1.f_9)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(sVar1.f_5, &(sVar1.f_5.f_2), false);
			}
			TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, sVar1.f_2, sVar1.f_5, sVar1.f_8, 0, false, true, sVar1.f_3, uParam0->f_107[iParam1 /*113*/].f_32.f_11, uParam0->f_107[iParam1 /*113*/].f_32.f_12);
		}
	}
	else
	{
		if (sVar1.f_9)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(sVar1.f_5, &(sVar1.f_5.f_2), false);
		}
		TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, sVar1.f_2, sVar1.f_5, sVar1.f_8, 0, true, false, sVar1.f_3, -1.0f, false);
	}
	if (sVar1.f_14 && sVar1.f_10)
	{
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
	}
	return 1;
}

int func_789(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> /*512*/ sVar1;
	int iVar65;
	Vector3 vVar66;
	float fVar69;
	bool bVar70;
	bool bVar71;

	iVar0 = uParam0->f_107[iParam1 /*113*/].f_5;
	sVar1 = { uParam0->f_107[iParam1 /*113*/].f_32 /*64*/ };
	if (sVar1.f_15 >= 0 && sVar1.f_15 < 17)
	{
		iVar65 = uParam0->f_1711[sVar1.f_15 /*15*/].f_10;
		if (ENTITY::DOES_ENTITY_EXIST(iVar65))
		{
			vVar66 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
			fVar69 = ENTITY::GET_ENTITY_HEADING(iVar65);
			if (func_228(sVar1.f_5))
			{
				sVar1.f_5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar65, vVar66) /*3*/ };
			}
			if (sVar1.f_8 == 0.0f)
			{
				sVar1.f_8 = (ENTITY::GET_ENTITY_HEADING(iVar0) - fVar69);
			}
			uParam0->f_107[iParam1 /*113*/].f_32.f_21 = TASK::CREATE_SCENARIO_POINT_HASH_ATTACHED_TO_ENTITY(iVar65, sVar1.f_2, sVar1.f_5, sVar1.f_8, 0, 0, false);
		}
	}
	else
	{
		if (func_228(sVar1.f_5))
		{
			sVar1.f_5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
		}
		if (sVar1.f_8 == 0.0f)
		{
			sVar1.f_8 = ENTITY::GET_ENTITY_HEADING(iVar0);
		}
		if (sVar1.f_9)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(sVar1.f_5, &(sVar1.f_5.f_2), false);
		}
		uParam0->f_107[iParam1 /*113*/].f_32.f_21 = TASK::CREATE_SCENARIO_POINT_HASH(sVar1.f_2, sVar1.f_5, sVar1.f_8, 0.0f, 0.0f, false);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_32.f_21))
	{
		func_296(&(uParam0->f_107[iParam1 /*113*/].f_32.f_21), 1, uParam0->f_107[iParam1 /*113*/].f_32.f_13);
		bVar71 = sVar1.f_10;
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_12 && bVar71)
		{
			bVar70 = true;
		}
		func_873(uParam0, iParam1);
		TASK::TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_107[iParam1 /*113*/].f_32.f_21, sVar1.f_3, 0, !bVar71, bVar71, 0, false, uParam0->f_107[iParam1 /*113*/].f_32.f_11, bVar70);
		if (sVar1.f_14 && sVar1.f_10)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
		}
		return 1;
	}
	return 0;
}

int func_790(var uParam0, int iParam1)
{
	int iVar0;
	struct<64> /*512*/ sVar1;
	bool bVar65;

	iVar0 = uParam0->f_107[iParam1 /*113*/].f_5;
	sVar1 = { uParam0->f_107[iParam1 /*113*/].f_32 /*64*/ };
	if (func_228(sVar1.f_5))
	{
		sVar1.f_5 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	}
	if (sVar1.f_9)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(sVar1.f_5, &(sVar1.f_5.f_2), false);
	}
	uParam0->f_107[iParam1 /*113*/].f_32.f_21 = TASK::FIND_SCENARIO_OF_TYPE_HASH(sVar1.f_5, sVar1.f_2, 1.0f, 0, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_107[iParam1 /*113*/].f_32.f_21))
	{
		if (uParam0->f_107[iParam1 /*113*/].f_32.f_12 && sVar1.f_10)
		{
			bVar65 = true;
		}
		func_873(uParam0, iParam1);
		TASK::TASK_USE_SCENARIO_POINT(iVar0, uParam0->f_107[iParam1 /*113*/].f_32.f_21, sVar1.f_3, 0, !sVar1.f_10, sVar1.f_10, sVar1.f_2, false, uParam0->f_107[iParam1 /*113*/].f_32.f_11, bVar65);
		if (sVar1.f_14 && sVar1.f_10)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
		}
		return 1;
	}
	return 0;
}

int func_791(var uParam0, int iParam1)
{
	TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uParam0->f_107[iParam1 /*113*/].f_5, ENTITY::GET_ENTITY_COORDS(uParam0->f_107[iParam1 /*113*/].f_5, true, false), 1.5f, 0, false, false, true, false);
	return 1;
}

int func_792(int iParam0, int iParam1, int iParam2)
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

	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = joaat("PROVISION_EGRET_PLUME_LITTLE");
			iVar10 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			iVar11 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			iVar12 = joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT");
			break;
		case 2:
			iVar9 = joaat("PROVISION_HERON_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_LADY_SLIPPER");
			iVar11 = joaat("PROVISION_RO_FLOWER_MOCCASIN");
			break;
		case 4:
			iVar9 = joaat("PROVISION_GATOR_EGG");
			iVar10 = joaat("PROVISION_RO_FLOWER_ACUNAS_STAR");
			iVar11 = joaat("PROVISION_RO_FLOWER_CIGAR");
			iVar12 = joaat("PROVISION_RO_FLOWER_GHOST");
			break;
		case 8:
			iVar9 = joaat("PROVISION_SPOONBILL_FEATHER");
			iVar10 = joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED");
			iVar11 = joaat("PROVISION_RO_FLOWER_RAT_TAIL");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPIDER");
			break;
		case 16:
			iVar9 = joaat("PROVISION_RO_FLOWER_CLAMSHELL");
			iVar10 = joaat("PROVISION_RO_FLOWER_DRAGONS");
			iVar11 = joaat("PROVISION_RO_FLOWER_QUEENS");
			iVar12 = joaat("PROVISION_RO_FLOWER_SPARROWS");
			break;
	}
	iVar1 = func_562(iVar9);
	iVar2 = func_562(iVar10);
	iVar3 = func_562(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_562(iVar12);
	}
	iVar5 = func_563(iVar9);
	iVar6 = func_563(iVar10);
	iVar7 = func_563(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_563(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 += iVar5;
	}
	else
	{
		iVar0 += iVar1;
	}
	if (iVar2 >= iVar6)
	{
		iVar0 += iVar6;
	}
	else
	{
		iVar0 += iVar2;
	}
	if (iVar3 >= iVar7)
	{
		iVar0 += iVar7;
	}
	else
	{
		iVar0 += iVar3;
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 += iVar8;
		}
		else
		{
			iVar0 += iVar4;
		}
	}
	return iVar0;
}

int func_793(int iParam0, int iParam1)
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

int func_794(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_874(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_795(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	Vector3 vVar0;
	int iVar3;
	char[] cVar4[8];
	char* sVar12;

	if (!func_108(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 /*3*/ };
	iVar3 = func_233(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (func_125(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_236(iParam0, 3);
			}
			else
			{
				if (!func_875(iParam0) && func_876(iParam0, &cVar4))
				{
					PERSCHAR::_SET_PERSCHAR_SCHEDULE(func_231(iParam0, 1), &cVar4);
				}
				func_111(iParam0, 256, 0);
				func_236(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return func_877();
				}
				if (bParam2 && !func_228(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!func_878(iParam0, vVar0, iParam6, iParam10))
				{
					return func_877();
				}
				if (func_125(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					func_236(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!func_125(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_236(iParam0, 1);
				return func_877();
			}
			if (!bParam9 || PED::IS_PED_READY_TO_RENDER(Global_1360165[iParam0 /*1157*/].f_124))
			{
				func_236(iParam0, 3);
			}
			break;
		case 3:
			if (!func_125(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				func_236(iParam0, 1);
				return func_877();
			}
			if (bParam7)
			{
				if (!func_879(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return func_877();
				}
			}
			if ((bParam2 && !func_228(vVar0)) && !func_229(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_805(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, (1 << 30));
			}
			if (bParam1)
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (func_127(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_59(iParam0, 39, 1);
				func_111(iParam0, 8, 1);
				func_111(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			func_880(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = func_881(iParam0, func_306());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(func_231(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			func_107(iParam0, 40, 0);
			func_111(iParam0, 32, 0);
			func_236(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return func_877();
}

void func_796(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
		case 6:
			iVar0 = 0;
			break;
		case 3:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND(((float)iVar1 * 0.4f)), BUILTIN::ROUND(((float)iVar1 * 0.75f)));
			break;
		default:
			iVar1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_POINTS(iParam1, 16);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::ROUND(((float)iVar1 * 0.1f)), BUILTIN::ROUND(((float)iVar1 * 0.4f)));
			break;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam1, 16, iVar0);
}

void func_797(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 1) == 0)
	{
		return;
	}
	if (bParam3)
	{
		func_882(func_109(iParam0), 1.0f, 0);
	}
	if (bParam1)
	{
		func_883(iParam0);
	}
	else
	{
		func_884(iParam0);
	}
	if (bParam2)
	{
		func_885(iParam0);
	}
	else
	{
		func_886(iParam0);
	}
}

bool func_798(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	if (func_235(iParam0, 32, 1))
	{
		return false;
	}
	if (!func_235(iParam0, 2, 1))
	{
		return false;
	}
	if (!func_235(iParam0, 4, 1))
	{
		return false;
	}
	if (func_127(iParam0, 33, 1))
	{
		return false;
	}
	if (func_118(iParam0))
	{
		return false;
	}
	if (func_264(iParam0))
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

bool func_799(int iParam0)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_140 != 0 || Global_1360165[iParam0 /*1157*/].f_141 != 0)
	{
		return true;
	}
	return false;
}

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case -2147483648:
		case 2048:
		case 8192:
			return 5;
		case 1:
		case 16:
		case 32:
		case 1024:
		case 4096:
			return 4;
		case 2:
		case 64:
			return 3;
		case 4:
		case 8:
		case 128:
			return 2;
		case 512:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_801(int iParam0, bool bParam1, char* sParam2)
{
	int iVar0;

	iVar0 = func_248(iParam0);
	if (!func_54(iParam0) || ENTITY::IS_ENTITY_DEAD(iVar0))
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

void func_802(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_11 = iParam1;
}

bool func_803(int iParam0, Vector3 vParam1, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	if (!func_108(iParam0))
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
					iParam4 = func_887(iParam0, iParam9, bParam7, 1);
				}
				else if ((Global_1360165[iParam0 /*1157*/].f_4.f_2 != 0 && Global_1360165[iParam0 /*1157*/].f_4.f_2 == Global_40.f_4942[iParam0 /*60*/].f_59) && (func_888(Global_1360165[iParam0 /*1157*/].f_4.f_2) || func_505(Global_1360165[iParam0 /*1157*/].f_4.f_2)))
				{
					iParam4 = Global_1360165[iParam0 /*1157*/].f_4.f_1;
				}
				else
				{
					iParam4 = func_887(iParam0, Global_40.f_4283, bParam7, 1);
				}
				if (Global_1360165[iParam0 /*1157*/].f_63 != iParam4 && func_889(Global_1360165[iParam0 /*1157*/].f_63))
				{
					if (!func_890(iParam0, 0))
					{
						func_59(iParam0, 25, 0);
					}
				}
			}
			Global_1360165[iParam0 /*1157*/].f_4 = { func_891(iParam0, iParam4, vParam1, iParam5, bParam6, bParam8, Global_40.f_4942[iParam0 /*60*/].f_59, bParam11) /*7*/ };
			if (!bParam6)
			{
				func_107(iParam0, 44, 1);
			}
			Global_1360165[iParam0 /*1157*/].f_3 = 2;
		case 2:
			if (!func_125(func_248(iParam0), 0))
			{
				return false;
			}
			if (iParam5 & iParam10)
			{
				if (!func_125(func_109(iParam0), 0))
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

void func_804(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_892(iParam0, bParam3);
	}
	else
	{
		func_893(iParam0, bParam3);
	}
	if (bParam2)
	{
		func_894(iParam0, bParam3);
	}
	else
	{
		func_895(iParam0, bParam3);
	}
}

void func_805(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_896(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_897(iParam0))
	{
		if (func_898(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_246(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= (iParam5 & 4);
				func_805(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= (iParam5 & 4);
				func_805(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_246(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_246(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_246(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_246(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_246(iParam5, 129))
	{
		if (func_246(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_246(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_246(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_246(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_897(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_246(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_246(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

bool func_806(int iParam0, int iParam1)
{
	bool bVar0;

	if (!func_54(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_899(iParam0, iParam1);
	return bVar0;
}

void func_807(int iParam0, int iParam1, bool bParam2)
{
	if (!func_54(iParam0))
	{
		return;
	}
	if (!func_806(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_3 = iParam1;
	if (bParam2)
	{
		func_59(iParam0, 25, 1);
	}
}

void func_808(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (func_900(iParam2))
		{
			iVar0 = func_901(iParam2, -1);
			if (func_812(iParam1, iVar0))
			{
				if (func_813(iParam1, iVar0))
				{
					if (func_814(iParam1, iVar0))
					{
						PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_815(iParam1);
					}
				}
				else
				{
					PED::_EQUIP_META_PED_OUTFIT(iParam1, iVar0);
				}
			}
		}
		func_902(iParam0, iParam1, 0);
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
			func_59(iParam0, 66, 0);
		}
	}
}

void func_809(int iParam0)
{
	func_903(iParam0);
	func_904(iParam0, 0);
}

void func_810(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 11:
			if (Global_40.f_4942[iParam0 /*60*/].f_3 == -1341683964)
			{
				func_905(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE"), 0, 0, 2, 1, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
				func_905(iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN_SADIE_DUALWIELD"), 0, 0, 3, 1, 1, 1056964608, 1065353216, -1, 0, 1, 0, 0);
			}
			break;
	}
}

bool func_811(int iParam0, bool bParam1)
{
	if (func_242() != -1)
	{
		return false;
	}
	if (!func_61(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_139(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_252(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_139(iParam0));
}

bool func_812(int iParam0, int iParam1)
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

bool func_813(int iParam0, int iParam1)
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

bool func_814(int iParam0, int iParam1)
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
	if (!func_812(iParam0, iVar0))
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

void func_815(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

struct<4> /*32*/ func_816()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_817(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

float func_818(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_674(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_819(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_906(iVar6) - func_906(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_819(float fParam0)
{
	if (fParam0 <= (float)-1)
	{
		return -1;
	}
	if (fParam0 < (float)50)
	{
		return 0;
	}
	if (fParam0 < (float)100)
	{
		return 1;
	}
	if (fParam0 < (float)200)
	{
		return 2;
	}
	if (fParam0 < (float)350)
	{
		return 3;
	}
	if (fParam0 < (float)550)
	{
		return 4;
	}
	if (fParam0 < (float)800)
	{
		return 5;
	}
	if (fParam0 < (float)1100)
	{
		return 6;
	}
	return 7;
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
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
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_822(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_819(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_906(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_906(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4.0f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4.0f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_823(int iParam0)
{
	int iVar0;

	if (func_907(iParam0, &iVar0))
	{
		return func_906(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_908())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_908())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_908())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_825(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> /*48*/ sVar10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 += func_909(iParam0);
	sVar4 = func_911(func_910(iVar3, iParam2));
	sVar6 = func_912(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_913(iParam0));
	iVar8 = func_914(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_915(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_515(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_916(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_826(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_827(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_828(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 & (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_829(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_830(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
		default:
			break;
	}
	return false;
}

int func_831(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
		default:
			break;
	}
	return 0;
}

int func_832(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_917(&iVar0, 0, iVar95, &sVar1) && !func_917(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_918(iVar0, &sVar1);
			if (func_340(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_833()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_919(Global_35, &iVar0);
	sVar30 = { func_665(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_920(0);
	func_921(7);
	func_922(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_598() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_922(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_922(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_923(Global_35, &iVar0);
}

int func_834(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_575(iVar0);
}

int func_835(int iParam0)
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

int func_836(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_500(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_142(&uVar6, iVar0);
	func_143(&uVar6, iVar1);
	func_144(&uVar6, iVar2);
	func_145(&uVar6, iVar3);
	func_146(&uVar6, iVar4);
	func_147(&uVar6, iVar5);
	return uVar6;
}

void func_837(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_605(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_838(int iParam0, int iParam1)
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

void func_839(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	struct<2> /*16*/ sVar4;

	sVar2 = 39;
	sVar4 = 10;
	sVar4.f_1 = 39;
	sVar4.f_1.f_2 = 39;
	sVar4.f_1.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	sVar4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_924(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_924(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_925(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				sVar4[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] /*2*/ };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar4[iVar0 /*2*/] /*2*/ };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_840(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_926(uParam0, 1))
	{
		func_927(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_841(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_842(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if (uParam0->f_1[iVar3 /*3*/].f_1 == 1216705912 || uParam0->f_1[iVar3 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/])
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
		}
		else
		{
			uParam0->f_1[iVar3 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
			uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
		}
		if (bParam2)
		{
			func_741(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_741(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_741(iVar2, iVar0);
		}
	}
}

int func_843(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_598();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_844(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(iParam0, iParam1, bParam3))
	{
		if (PED::_0x6243635AF2F1B826(iParam0, iVar0, iParam1, bParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_845(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_846(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_576(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

int func_847(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 25;
	iVar1 = 0;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_848(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_242() == -1)
	{
		func_928(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_929(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_849(int iParam0, int iParam1)
{
	if (func_242() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26796.f_26[iParam1 /*120*/] & iParam0) != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36638.f_45.f_350.f_26[iParam1 /*120*/] & iParam0) != 0;
	}
	return false;
}

void func_850(int iParam0, bool bParam1, int iParam2)
{
	func_930(&(Global_1946054.f_1378), iParam0);
	func_931(2, iParam0, 6);
	if (bParam1)
	{
		func_851(0, 1);
	}
}

void func_851(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_932(0);
	}
	if (bParam0)
	{
		func_748(8);
		func_748((1 << 9));
	}
	else
	{
		func_748(8);
		func_748(16);
	}
}

bool func_852(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_853(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

float func_854(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_855(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

char* func_856(int iParam0, int iParam1, bool bParam2, bool bParam3)
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
						return func_612(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_612(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
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

int func_857()
{
	return Global_1946054.f_1497;
}

char* func_858(int iParam0)
{
	int iVar0;

	iVar0 = func_770(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_699(iVar0);
}

int func_859(int iParam0)
{
	int iVar0;

	if (func_933(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_934(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_935(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_936(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_860(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_391(func_937(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_861(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_391(func_938(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_862(int iParam0)
{
	return (Global_40.f_12003 & iParam0) != 0;
}

void func_863()
{
	int iVar0;

	if (func_242() != -1)
	{
		return;
	}
	func_415(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_677(1);
	func_825(1, iVar0, 0);
}

void func_864(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_865()
{
	int iVar0;

	if (func_242() != -1)
	{
		return;
	}
	func_415(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_677(2);
	func_825(2, iVar0, 0);
}

void func_866()
{
	int iVar0;

	if (func_242() != -1)
	{
		return;
	}
	func_415(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_677(0);
	func_825(0, iVar0, 0);
}

bool func_867(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_868(char* sParam0, var uParam1, var uParam2, int iParam3)
{
	strcpy_s(&(Global_1327590.f_19727), 32, sParam0);
	Global_1327590.f_19727.f_4 = uParam1;
	Global_1327590.f_19727.f_5 = uParam2;
	Global_1327590.f_19727.f_6 = Global_1899515;
	func_31(&(Global_1327590.f_19727.f_6), 0, iParam3, 0, 0, 0, 0, 0);
}

void func_869(int iParam0, int iParam1)
{
	func_939(iParam0);
	func_31(&(Global_1327590.f_19692[iParam0]), 0, iParam1, 0, 0, 0, 0, 0);
}

Vector3 func_870(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { -94.237f, 8.692f, 92.338f };
		case 2:
			return { -84.312f, -45.81f, 94.899f };
		case 3:
			return { -113.989f, -55.759f, 93.496f };
		case 4:
			return { -143.42f, -60.643f, 93.919f };
		case 5:
			return { -163.931f, -43.684f, 92.846f };
		case 6:
			return { -177.77f, -15.71f, 93.24f };
		case 7:
			return { -170.947f, -4.843f, 92.321f };
		case 8:
			return { -161.544f, -7.315f, 94.235f };
		case 9:
			return { -146.678f, 8.577f, 91.809f };
		case 10:
			return { -134.212f, 8.827f, 92.911f };
		case 11:
			return { 656.64f, -1176.682f, 44.842f };
		case 12:
			return { 673.481f, -1214.576f, 44.693f };
		case 13:
			return { 706.966f, -1217.705f, 44.392f };
		case 14:
			return { 721.689f, -1231.874f, 44.018f };
		case 15:
			return { 725.07f, -1283.583f, 40.983f };
		case 16:
			return { 682.755f, -1294.328f, 41.382f };
		case 17:
			return { 663.265f, -1294.419f, 40.818f };
		case 18:
			return { 622.825f, -1239.264f, 40.581f };
		case 19:
			return { 615.845f, -1225.746f, 40.577f };
		case 20:
			return { 619.659f, -1204.304f, 40.856f };
		case 21:
			return { 635.034f, -1200.382f, 45.856f };
		case 22:
			return { 1870.081f, -1844.099f, 41.549f };
		case 23:
			return { 1887.662f, -1830.493f, 41.753f };
		case 24:
			return { 1907.54f, -1821.734f, 40.839f };
		case 25:
			return { 1924.761f, -1866.922f, 40.691f };
		case 26:
			return { 1932.487f, -1887.342f, 40.695f };
		case 27:
			return { 1909.35f, -1902.705f, 40.716f };
		case 28:
			return { 1900.716f, -1905.509f, 41.056f };
		case 29:
			return { 1877.415f, -1893.42f, 41.828f };
		case 30:
			return { 1853.654f, -1884.278f, 40.895f };
		case 31:
			return { 1846.628f, -1874.025f, 41.24f };
		case 32:
			return { 1844.923f, -1858.723f, 41.698f };
		case 33:
			return { 1849.307f, -1849.839f, 41.6f };
		case 34:
			return { 2373.933f, 1330.852f, 105.6879f };
		case 35:
			return { 2330.508f, 1336.256f, 105.783f };
		case 36:
			return { 2352.173f, 1340.317f, 104.0373f };
		case 37:
			return { 2325.463f, 1368.067f, 103.0485f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_871(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0.0f;
}

Vector3 func_872(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	return func_940(vParam3 - vParam0) * Vector(fParam6, fParam6, fParam6);
}

void func_873(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;

	if (!uParam0->f_107[iParam1 /*113*/].f_32.f_20)
	{
		return;
	}
	iVar0 = uParam0->f_107[iParam1 /*113*/].f_32.f_21;
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = uParam0->f_107[iParam1 /*113*/].f_32.f_16[iVar1];
		if (iVar2 >= 0 && iVar2 < uParam0->f_1711)
		{
			if (!uParam0->f_1711[iVar2 /*15*/].f_7)
			{
			}
			else
			{
				iVar3 = uParam0->f_1711[iVar2 /*15*/].f_10;
				sVar4 = uParam0->f_1711[iVar2 /*15*/].f_12;
				if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					TASK::_ASSOCIATE_PROP_WITH_SCENARIO(iVar0, iVar3, sVar4, true);
				}
			}
		}
		iVar1++;
	}
}

int func_874(int iParam0, int iParam1)
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
		case joaat("CSTAG_MEALTIME"):
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
		case joaat("CSTAG_LAST"):
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
		case joaat("CSTAG_SETUP"):
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
		case joaat("CSTAG_TEST"):
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
		case joaat("CSTAG_MOOD_LAST"):
			return 255;
		case joaat("CSTAG_TEARDOWN"):
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
		case joaat("CSTAG_FLOW_FIRST"):
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
		case joaat("CSTAG_MOOD_FIRST"):
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
		case joaat("CSTAG_FLOW_LAST"):
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

bool func_875(int iParam0)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_127)
	{
		case joaat("PERSCHAR_COMP_HORSE_COMMON_2"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_3"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_1"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_4"):
		case joaat("PERSCHAR_COMP_HORSE_COMMON_5"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_876(int iParam0, char* sParam1)
{
	switch (Global_40.f_4283)
	{
		case 0:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "colter/col_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "colter/col_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "colter/col_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "colter/col_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "colter/col_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "colter/col_default_horse_john");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "colter/col_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "colter/col_default_horse_micah");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "colter/col_default_horses1");
			return true;
		case 1:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horses1");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_sadie");
					return true;
				case 8:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_sean");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "horseshoeOverlook/hso_default_horses1");
			return true;
		case 2:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_kieran");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_sadie");
					return true;
				case 8:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_sean");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "clemensPoint/clm_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "clemensPoint/clm_default_horses1");
			return true;
		case 3:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_dutch");
					return true;
				case 5:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_hosea");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_john");
					return true;
				case 10:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horses1");
					return true;
				case 9:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_lenny");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "shadyBelle/shb_default_horse_uncle");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "shadyBelle/shb_default_horses1");
			return true;
		case 5:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_dutch");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_john");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "lakay/lak_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "lakay/lak_default_horses1");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "lakay/lak_default_horses1");
			return true;
		case 6:
			switch (iParam0)
			{
				case 3:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_bill");
					return true;
				case 7:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_charles");
					return true;
				case 0:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_dutch");
					return true;
				case 2:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_javier");
					return true;
				case 1:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_john");
					return true;
				case 6:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_micah");
					return true;
				case 11:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horse_sadie");
					return true;
				case 4:
					strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horses1");
					return true;
				default:
					break;
			}
			strcpy_s(sParam1, 64, "beaverHollow/bvh_default_horses1");
			return true;
		case 8:
			strcpy_s(sParam1, 64, "beechersHope/bch_default_horses");
			return true;
	}
	return false;
}

int func_877()
{
	return -1;
}

bool func_878(int iParam0, Vector3 vParam1, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return false;
	}
	if ((!bParam5 && !Global_1359489.f_12) || (bParam5 && Global_1359489.f_13 < 8))
	{
		if (Global_1360165[iParam0 /*1157*/].f_125 <= 300)
		{
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(Global_1360165[iParam0 /*1157*/].f_126))
			{
				PERSCHAR::_REVIVE_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
			if (bParam5)
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x08FC896D2CB31FCC(Global_1360165[iParam0 /*1157*/].f_126, false);
				Global_1359489.f_13++;
			}
			else
			{
				Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126, false);
			}
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_126);
			Global_1360165[iParam0 /*1157*/].f_125++;
		}
		else
		{
			iVar0 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(func_231(iParam0, 1));
			STREAMING::REQUEST_MODEL(iVar0, false);
			if (STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				Global_1360165[iParam0 /*1157*/].f_124 = func_305(iVar0, vParam1, iParam4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(Global_1360165[iParam0 /*1157*/].f_126);
			}
		}
		if (!func_125(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			return false;
		}
		Global_1359489.f_12 = 1;
		func_111(iParam0, 256, 0);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_879(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return false;
	}
	if (func_941(iParam0, 256))
	{
		return true;
	}
	iVar0 = 0;
	if (bParam2)
	{
		iVar0 = 256;
	}
	if (!func_125(iParam1, iVar0))
	{
		return false;
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam1, func_942(iParam0));
	PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, false);
	func_111(iParam0, 256, 1);
	return true;
}

void func_880(int iParam0, int iParam1)
{
	DECORATOR::DECOR_SET_BOOL(iParam0, "HorseCompanion", true);
	func_652(iParam0, func_943(iParam1));
	if (func_941(iParam1, 8))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 412 /*PCF_BlockHorsePromptsForTargetPed*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 412 /*PCF_BlockHorsePromptsForTargetPed*/, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_248(iParam1)))
	{
		PED::SET_PED_OWNS_ANIMAL(func_248(iParam1), iParam0, false);
		PED::_0xED1C764997A86D5A(func_248(iParam1), iParam0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 367 /*PCF_0x0E3CB695*/, true);
	}
	else
	{
		func_59(iParam1, 38, 1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS_HORSES"));
	if (Global_40.f_4283 == 0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 172 /*PCF_ForceDeepSurfaceCheck*/, true);
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 324 /*PCF_0x8D1AEDEF*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 330 /*PCF_0x7C7AF264*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 331 /*PCF_0x9663C8F2*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 471 /*PCF_DisableHorseKick*/, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 442 /*PCF_0x78525B66*/, true);
	if (func_941(iParam1, (1 << 12)))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1 /*PCF_0x24B45566*/, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54 /*PCF_PreventAllMeleeTaunts*/, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121 /*PCF_ForceIgnoreMeleeActiveCombatant*/, false);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302 /*PCF_DisableMeleeKnockout*/, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 1 /*PCF_0x24B45566*/, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 54 /*PCF_PreventAllMeleeTaunts*/, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 121 /*PCF_ForceIgnoreMeleeActiveCombatant*/, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 302 /*PCF_DisableMeleeKnockout*/, true);
	}
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 2, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 3, false);
	func_797(iParam1, func_941(iParam1, (1 << 13)), func_941(iParam1, (1 << 14)), 1);
}

char* func_881(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 3:
			return "HORSE_NAME_GANG_BILL";
		case 7:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_CHARLES_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_CHARLES";
			}
			break;
		case 0:
			return "HORSE_NAME_GANG_DUTCH";
		case 5:
			return "HORSE_NAME_GANG_HOSEA";
		case 2:
			return "HORSE_NAME_GANG_JAVIER";
		case 1:
			return "HORSE_NAME_GANG_JOHN";
		case 20:
			return "HORSE_NAME_GANG_KAREN";
		case 9:
			return "HORSE_NAME_GANG_LENNY";
		case 6:
			return "HORSE_NAME_GANG_MICAH";
		case 10:
			return "HORSE_NAME_GANG_KIERAN";
		case 11:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_SADIE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_SADIE";
			}
			break;
		case 8:
			return "HORSE_NAME_GANG_SEAN";
		case 23:
			return "HORSE_NAME_GANG_TRELAWNEY";
		case 4:
			if (bParam1)
			{
				return "HORSE_NAME_GANG_UNCLE_ES";
			}
			else
			{
				return "HORSE_NAME_GANG_UNCLE";
			}
			break;
		default:
			break;
	}
	return "";
}

void func_882(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_763(fParam1, 0.0f, 1.0f);
		iVar0 = BUILTIN::FLOOR((fParam1 * (float)ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2)));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

void func_883(int iParam0)
{
	bool bVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	bVar0 = func_109(iParam0);
	func_944(bVar0);
	func_111(iParam0, (1 << 13), 1);
}

void func_884(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_945(iVar0);
	func_111(iParam0, (1 << 13), 0);
}

void func_885(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_946(iVar0);
	func_111(iParam0, (1 << 14), 1);
}

void func_886(int iParam0)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	if (func_231(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_109(iParam0);
	func_947(iVar0);
	func_111(iParam0, (1 << 14), 0);
}

int func_887(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1[5];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;

	if (!func_108(iParam0))
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
					if (func_378(Global_1835011[4 /*74*/].f_1, 1))
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
					if (func_948(iVar0, 9, 11))
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
					if (func_378(Global_1347702[63 /*49*/].f_15, 1) || func_505(Global_1347702[63 /*49*/].f_15))
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
					if (func_948(iVar0, 9, 12))
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
					if (!func_378(Global_1835011[14 /*74*/].f_1, 1))
					{
						iVar1[0] = -268604689;
						iVar1[1] = -1632589543;
						iVar7 = 2;
					}
					else if (func_235(18, (1 << 27), 1))
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
					if (func_948(iVar0, 9, 11))
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
					if (func_378(Global_1347702[134 /*49*/].f_15, 1) || func_505(Global_1347702[134 /*49*/].f_15))
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
					if (func_378(Global_1835011[38 /*74*/].f_1, 1))
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
					if (func_948(iVar0, 9, 11))
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
					if (func_449(joaat("CSTAG_FLOW_MAR8_POST"), 1) && !func_378(Global_1347702[1 /*49*/].f_15, 1))
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
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(func_248(iParam0)))
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
	if (!func_806(iParam0, iVar8))
	{
		iVar8 = Global_40.f_4942[iParam0 /*60*/].f_3;
	}
	return iVar8;
}

bool func_888(int iParam0)
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
		iVar0 = func_720(iParam0);
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

bool func_889(int iParam0)
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

bool func_890(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		if (func_118(iParam0) || func_127(iParam0, 44, 1))
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

struct<7> /*56*/ func_891(int iParam0, int iParam1, Vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, var uParam8, bool bParam9)
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

void func_892(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	bVar0 = func_248(iParam0);
	func_944(bVar0);
	func_59(iParam0, 60, 1);
	if (bParam1)
	{
		func_883(iParam0);
	}
}

void func_893(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	func_945(iVar0);
	func_107(iParam0, 60, 1);
	if (bParam1)
	{
		func_884(iParam0);
	}
}

void func_894(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	func_946(iVar0);
	if (iParam0 == 14)
	{
		func_949(iVar0);
	}
	func_59(iParam0, 61, 1);
	if (bParam1)
	{
		func_885(iParam0);
	}
}

void func_895(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_108(iParam0))
	{
		return;
	}
	iVar0 = func_248(iParam0);
	func_947(iVar0);
	func_107(iParam0, 61, 1);
	if (bParam1)
	{
		func_886(iParam0);
	}
}

int func_896(var uParam0)
{
	return uParam0;
}

bool func_897(int iParam0)
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

bool func_898(int iParam0)
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

bool func_899(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_108(iParam0))
	{
		return false;
	}
	func_950(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_65[iVar0], iVar1);
}

bool func_900(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

int func_901(int iParam0, int iParam1)
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
			iVar0 = func_951(296923297, iParam1);
			return func_952(iVar0);
		case -2040275819:
			return 464906090;
		case -1114682645:
			return 744097966;
		case -1414977761:
			return 1059434053;
		case 1237718549:
			iVar0 = func_951(1237718549, iParam1);
			return func_952(iVar0);
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

void func_902(int iParam0, int iParam1, bool bParam2)
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
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 1) > 0 && func_812(iParam1, 860729266))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 860729266);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 12)) > 0 && func_812(iParam1, 879715242))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 879715242);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 128) > 0 && func_812(iParam1, 1606325429))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1606325429);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & 256) > 0 && func_812(iParam1, 1743550585))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1743550585);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 9)) > 0 && func_812(iParam1, 1064646155))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1064646155);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 10)) > 0 && func_812(iParam1, -536694793))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -536694793);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 11)) > 0 && func_812(iParam1, -1304053509))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1304053509);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 31)) > 0 && func_812(iParam1, 718939204))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 718939204);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 16)) > 0 && func_812(iParam1, -972364774))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -972364774);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 14)) > 0 && func_812(iParam1, -1100875244))
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
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 18)) > 0 && func_812(iParam1, 1153596794))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1153596794);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 19)) > 0 && func_812(iParam1, 1016389820))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1016389820);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 20)) > 0 && func_812(iParam1, -726966617))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -726966617);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 21)) > 0 && func_812(iParam1, 1365901568))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1365901568);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 15)) > 0 && func_812(iParam1, -1658942149))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1658942149);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 17)) > 0 && func_812(iParam1, -1980913856))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1980913856);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 22)) > 0 && func_812(iParam1, 491764525))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 491764525);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 23)) > 0 && func_812(iParam1, -76015264))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -76015264);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 24)) > 0 && func_812(iParam1, 622113465))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 622113465);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 25)) > 0 && func_812(iParam1, 781533162))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 781533162);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 26)) > 0 && func_812(iParam1, -271415321))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -271415321);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 27)) > 0 && func_812(iParam1, -1683207356))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1683207356);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 28)) > 0 && func_812(iParam1, -254794762))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -254794762);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 29)) > 0 && func_812(iParam1, 609066278))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 609066278);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 30)) > 0 && func_812(iParam1, -1712783565))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, -1712783565);
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_5 & (1 << 13)) > 0 && func_812(iParam1, 1544915253))
	{
		PED::_EQUIP_META_PED_OUTFIT(iParam1, 1544915253);
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_57 = 1;
	}
}

void func_903(int iParam0)
{
	func_953(iParam0, 1);
	func_953(iParam0, 128);
	func_953(iParam0, 256);
	func_953(iParam0, (1 << 9));
	func_953(iParam0, (1 << 10));
	func_953(iParam0, (1 << 11));
	func_953(iParam0, (1 << 12));
	func_953(iParam0, (1 << 16));
	func_953(iParam0, (1 << 14));
	func_953(iParam0, (1 << 18));
	func_953(iParam0, (1 << 19));
	func_953(iParam0, (1 << 20));
	func_953(iParam0, (1 << 21));
	func_953(iParam0, (1 << 15));
	func_953(iParam0, (1 << 17));
	func_953(iParam0, (1 << 27));
	func_953(iParam0, (1 << 30));
}

void func_904(int iParam0, bool bParam1)
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

int func_905(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
					if (func_524(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_524(iVar4) && iVar4 != iVar0)
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
	if (func_242() == -1 && !func_523(iVar0))
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
				if (func_523(joaat("WEAPON_REPEATER_CARBINE")))
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
		if (iParam0 != Global_35 && func_524(iVar0))
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
		func_370(iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, joaat("ADD_REASON_DEFAULT"), 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0.0f;
		func_954(iParam0, &iVar0, &fVar25);
		iVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_533(iVar0))
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

int func_906(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

bool func_907(int iParam0, int iParam1)
{
	return false;
}

bool func_908()
{
	return false;
}

int func_909(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_500(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_500(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_500(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

struct<4> /*32*/ func_910(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	strcpy_s(&cVar0, 32, "TOAST_RPG_LEVEL_");
	StringIntConCat(&cVar0, iParam0, 32);
	strcat_s(&cVar0, 32, "_");
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_911(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_912(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

char* func_913(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_914(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_915(int iParam0)
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

int func_916(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("STATS_HEALTH");
		case 1:
			return joaat("STATS_STAMINA");
		case 2:
			return joaat("STATS_DEADEYE");
		default:
			break;
	}
	return 0;
}

bool func_917(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_955(iParam1) && !func_956(iParam1))
	{
		bVar0 = func_298(iParam1);
	}
	else
	{
		return false;
	}
	func_957(uParam3);
	iVar5 = func_958(iParam2);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar1, bVar0, iVar5, 0))
	{
		return false;
	}
	*iParam0 = sVar1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*iParam0))
	{
		return false;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*iParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*iParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*iParam0);
	return true;
}

void func_918(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_959(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_960(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_919(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::COPY_SCRIPT_STRUCT(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_524(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_920(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_340(iVar1, 0))
		{
			func_961(iVar1, 0, bParam0);
		}
		Global_1946054.f_2657[iVar0] = 0;
		iVar0 += -1;
	}
	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
}

void func_921(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_242() == -1)
	{
		func_962(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946054.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar2 = Global_1946054.f_2657[iVar0];
		if (func_365(iVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_963(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_964(iVar2, 0))
		{
			func_965(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_922(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_966(iParam0))
	{
		return;
	}
	iVar0 = func_365(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_967(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_967(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_967(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_967(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_967(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_967(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_968(0))
	{
		func_969(iParam0, 1);
		if (func_598() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_969(func_968(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_969(func_968(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_970();
	if (func_971(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_500(0), iParam0, 0);
	}
	func_965(iParam0, bParam3);
	if (bParam2)
	{
		func_851(0, 0);
	}
}

void func_923(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if ((*iParam1)[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, (*iParam1)[iVar0], 0, false))
			{
				if (func_523((*iParam1)[iVar0]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iParam0, (*iParam1)[iVar0], 0, false, false, 0, false, 0.5f, 1.0f, joaat("ADD_REASON_DEFAULT"), false, 0.0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != (*iParam1)[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, (*iParam1)[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

bool func_924(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_925(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_926(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_927(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_928(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_929(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_930(var uParam0, int iParam1)
{
	int iVar0;

	if (func_242() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_928(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_929(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_931(int iParam0, int iParam1, int iParam2)
{
	if (func_242() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26796.f_26[iParam1 /*120*/] |= iParam0;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] |= iParam0;
	}
}

void func_932(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_933(int iParam0)
{
	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (func_361(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_934(int iParam0)
{
	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (func_361(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_935(int iParam0)
{
	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (func_361(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_HOLSTER")))
	{
		return true;
	}
	return false;
}

bool func_936(int iParam0)
{
	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (func_361(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_OFFHAND")))
	{
		return true;
	}
	return false;
}

int func_937(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_972(iParam0);
		case 1:
			return func_973(iParam0);
		case 2:
			return func_974(iParam0);
		case 3:
			return func_975(iParam0);
	}
	return 0;
}

int func_938(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_976(iParam0);
		case 1:
			return func_977(iParam0);
		case 2:
			return func_978(iParam0);
		case 3:
			return func_979(iParam0);
		case 4:
			return func_980(iParam0);
		case 5:
			return func_981(iParam0);
		case 6:
			return func_982(iParam0);
		case 7:
			return func_983(iParam0);
		case 8:
			return func_984(iParam0);
	}
	return 0;
}

void func_939(int iParam0)
{
	Global_1327590.f_19692[iParam0] = func_152();
}

Vector3 func_940(Vector3 vParam0)
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

bool func_941(int iParam0, int iParam1)
{
	if (!func_108(iParam0))
	{
		return false;
	}
	return (Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1) != 0;
}

int func_942(int iParam0)
{
	return joaat("META_HORSE_SADDLE_ONLY");
}

int func_943(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 5:
		case 6:
		case 8:
		case 10:
		case 23:
			return 1;
		case 4:
		case 9:
		case 20:
			return 2;
		case 7:
			if (func_363(45))
			{
				return 1;
			}
			else
			{
				return 2;
			}
			break;
		case 11:
			if (func_363(45))
			{
				return 2;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_944(bool bParam0)
{
	if (func_985(bParam0, 0))
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

void func_945(bool bParam0)
{
	if (func_985(bParam0, 0))
	{
		return;
	}
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 179 /*PCF_0x605C7288*/, false);
	ENTITY::SET_ENTITY_PROOFS(bParam0, 0, false);
}

void func_946(bool bParam0)
{
	if (func_985(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 8229);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, false);
}

void func_947(bool bParam0)
{
	if (func_985(bParam0, 0))
	{
		return;
	}
	PED::SET_PED_CAN_RAGDOLL(bParam0, true);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(bParam0, 1048575);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(bParam0, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(bParam0, true);
}

bool func_948(int iParam0, int iParam1, int iParam2)
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

void func_949(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_118(14))
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

int func_950(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_986(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

int func_951(int iParam0, int iParam1)
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
		if (func_806(iParam1, iVar1))
		{
			iVar2 = iVar1;
		}
	}
	return iVar2;
}

int func_952(int iParam0)
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

void func_953(int iParam0, int iParam1)
{
	Global_40.f_4942[iParam0 /*60*/].f_5 -= (Global_40.f_4942[iParam0 /*60*/].f_5 & iParam1);
}

void func_954(int iParam0, int iParam1, float fParam2)
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

bool func_955(int iParam0)
{
	iParam0 = func_461(iParam0);
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

bool func_956(int iParam0)
{
	int iVar0;

	iParam0 = func_461(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_955(iParam0))
	{
		return false;
	}
	iVar0 = func_298(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_957(var uParam0)
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

int func_958(int iParam0)
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

void func_959(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			case 1:
				*uParam1 = 1;
				break;
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_960(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = iParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	bVar2 = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(iParam0, iParam1, iParam2);
	return bVar2;
}

void func_961(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_365(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_987(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_987(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_987(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_987(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_987(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_987(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_970();
	}
	if (bParam1)
	{
		func_851(0, 0);
	}
}

void func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;

	sVar2 = -1;
	sVar2.f_1 = -1;
	sVar2.f_2 = -1;
	sVar2.f_3 = -1;
	sVar2.f_4 = -1;
	sVar2.f_5 = -1;
	sVar2.f_6 = -1;
	sVar2.f_7 = -1;
	sVar2.f_8 = -1;
	sVar2.f_13 = -1;
	sVar2.f_14 = -1;
	sVar2.f_15 = -1;
	sVar2.f_16 = -1;
	sVar2.f_17 = -1;
	sVar2 = { func_617(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_620(&sVar2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
		func_587(iVar0);
	}
}

void func_963(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_988(iParam2, *uParam0);
	func_989(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_964(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_493(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_528(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_673(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_500(0), &sVar5, bParam1);
	return true;
}

void func_965(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_493(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_528(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_673(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_500(0), &sVar5, bParam1);
}

bool func_966(int iParam0)
{
	if (func_242() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == joaat("CLOTHING_WINTER_OUTFIT"))
			{
				return false;
			}
		}
	}
	return true;
}

int func_967(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	iVar1 = iParam0;
	if (Global_1946054.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_990(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_964(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_365(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_963(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_968(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_598();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_969(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_493(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_528(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_673(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_500(0), &sVar5);
	return 1;
}

void func_970()
{
	int iVar0;

	if (func_242() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_2657.f_19)
		{
			Global_26796[iVar0] = Global_1946054.f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = Global_1946054.f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
}

bool func_971(int iParam0)
{
	return func_992(func_991(iParam0));
}

int func_972(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_973(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_974(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_975(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_976(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_977(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_978(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_979(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_980(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_981(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_982(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_984(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

bool func_985(bool bParam0, bool bParam1)
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

int func_986(int iParam0, int iParam1)
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

int func_987(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_990(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_365(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_993(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_365(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_993(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_964(iParam0, 1);
	return 1;
}

void func_988(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_989(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_994(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_576(func_715(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_995(uParam0);
	}
}

bool func_990(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_991(int iParam0)
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

bool func_992(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 & iParam0) != 0;
}

void func_993(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_996(iParam1);
	func_997(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_998(&(uParam0->f_26), iVar1);
		if (func_999(uParam0->f_26, &iVar0))
		{
			func_1000(iVar0, iVar1);
		}
	}
}

void func_994(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1001(&(uParam0->f_3));
}

void func_995(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1002(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

int func_996(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_997(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_998(var uParam0, int iParam1)
{
	*uParam0--;
	func_994(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_999(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1000(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1001(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1002(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1003(func_598());
	if (*uParam0)
	{
		func_1001(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, uParam1, 0, func_242() != -1, iParam2);
	*uParam0 = 1;
}

int func_1003(int iParam0)
{
	if (func_242() == -1)
	{
		switch (iParam0)
		{
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR"):
				return 0;
			case joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"):
				return 0;
			case joaat("MPC_PLAYER_TYPE_SP_MARSTON"):
				return 0;
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
		default:
			break;
	}
	return 0;
}

