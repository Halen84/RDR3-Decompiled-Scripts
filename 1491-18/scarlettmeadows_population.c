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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	char* sLocal_35 = NULL;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	char* sLocal_40 = NULL;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	func_1();
	func_2();
	func_3();
	func_4();
	func_5(1264.878f, -402.9338f, 96.61f, "UI_LETTER_SC_REPO_T1" /* GXTEntry: "Notice of Repossession" */, "UI_LETTER_SC_REPO" /* GXTEntry: "By order of Judge Meredith Holden and the Courts of the State of Lemoyne, we do h" +
    "ereby grant repossession of this property and all items herein to the Bank of Rh" +
    "odes.~n~~n~M.Holden, Judge Holden.~n~~n~Henrietta Blackley, Clerk.~n~~n~November" +
    " 18th, 1895." */, 0, -1, Global_1347702[137 /*49*/].f_15);
	func_5(1265.229f, -411.9569f, 96.6217f, "UI_LETTER_SC_REPO_T1" /* GXTEntry: "Notice of Repossession" */, "UI_LETTER_SC_REPO" /* GXTEntry: "By order of Judge Meredith Holden and the Courts of the State of Lemoyne, we do h" +
    "ereby grant repossession of this property and all items herein to the Bank of Rh" +
    "odes.~n~~n~M.Holden, Judge Holden.~n~~n~Henrietta Blackley, Clerk.~n~~n~November" +
    " 18th, 1895." */, 0, -1, Global_1347702[137 /*49*/].f_15);
	bVar0 = true;
	while (bVar0)
	{
		BUILTIN::WAIT(0);
	}
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_6();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volBraithwaites_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1147.5f, -1930.0f, 55.0f, 0.0f, 0.0f, 0.0f, 425.0f, 225.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 997.5f, -2037.5f, 55.0f, 0.0f, 0.0f, -32.0f, 100.0f, 75.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 980.0f, -1420.0f, 55.0f, 0.0f, 0.0f, 0.0f, 185.0f, 75.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 995.0f, -1532.5f, 55.0f, 0.0f, 0.0f, 0.0f, 250.0f, 150.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1102.5f, -1525.0f, 55.0f, 0.0f, 0.0f, -58.0f, 275.0f, 100.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1110.0f, -1712.5f, 55.0f, 0.0f, 0.0f, 0.0f, 350.0f, 210.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1275.0f, -1730.0f, 55.0f, 0.0f, 0.0f, -70.0f, 225.0f, 100.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1275.0f, -1730.0f, 55.0f, 0.0f, 0.0f, -70.0f, 225.0f, 100.0f, 35.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 905.0f, -1795.0f, 52.0f, 0.0f, 0.0f, 0.0f, 60.0f, 60.0f, 20.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 895.0f, -1900.0f, 52.0f, 0.0f, 0.0f, 0.0f, 85.0f, 85.0f, 20.0f);
	func_7(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1765.0f, -1365.0f, 50.0f, 0.0f, 0.0f, 20.0f, 30.0f, 30.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1752.5f, -1332.5f, 50.0f, 0.0f, 0.0f, 7.0f, 100.0f, 150.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1850.0f, -1330.0f, 50.0f, 0.0f, 0.0f, 169.0f, 150.0f, 250.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1650.0f, -1465.0f, 50.0f, 0.0f, 0.0f, 26.0f, 150.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1647.5f, -1377.5f, 50.0f, 0.0f, 0.0f, 9.0f, 200.0f, 100.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1592.5f, -1282.5f, 50.0f, 0.0f, 0.0f, -2.0f, 100.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1660.0f, -1300.0f, 50.0f, 0.0f, 0.0f, 50.0f, 100.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1705.0f, -1532.5f, 50.0f, 0.0f, 0.0f, 53.0f, 150.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1810.0f, -1485.0f, 50.0f, 0.0f, 0.0f, 115.0f, 250.0f, 175.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1927.5f, -1447.5f, 50.0f, 0.0f, 0.0f, 146.0f, 150.0f, 175.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1975.0f, -1342.5f, 50.0f, 0.0f, 0.0f, 170.0f, 150.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1750.0f, -1582.5f, 50.0f, 0.0f, 0.0f, 86.0f, 100.0f, 75.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_15, 1977.5f, -1300.0f, 50.0f, 0.0f, 0.0f, 147.0f, 135.0f, 100.0f, 40.0f);
	func_7(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1325.0f, -2285.0f, 35.0f, 0.0f, 0.0f, 0.0f, 55.0f, 55.0f, 20.0f, "m_volCatfishJacksons_Restriction");
	func_8(iLocal_16, 1);
	iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volDairyFarm_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_17, 1415.0f, -850.5f, 61.0f, 0.0f, 0.0f, 6.0f, 115.0f, 75.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_17, 1450.0f, -897.5f, 61.0f, 0.0f, 0.0f, -50.0f, 75.0f, 60.0f, 35.0f);
	func_8(iLocal_17, 1);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1622.5f, -365.0f, 62.0f, 0.0f, 0.0f, 0.0f, 35.0f, 35.0f, 20.0f, "m_volLonniesShack_Restriction");
	func_8(iLocal_18, 1);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volPondHutCrops_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, 1055.0f, -985.0f, 55.0f, 0.0f, 0.0f, -68.0f, 100.0f, 50.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, 1112.5f, -945.0f, 55.0f, 0.0f, 0.0f, 10.0f, 100.0f, 50.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, 1160.0f, -975.0f, 55.0f, 0.0f, 0.0f, -44.0f, 100.0f, 50.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, 1110.0f, -997.5f, 55.0f, 0.0f, 0.0f, 6.0f, 130.0f, 75.0f, 35.0f);
	func_8(iLocal_19, 1);
	iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRedBarnCrops_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 990.0f, -1102.5f, 55.0f, 0.0f, 0.0f, 0.0f, 125.0f, 75.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 977.5f, -1060.0f, 55.0f, 0.0f, 0.0f, 0.0f, 100.0f, 75.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 980.0f, -1127.5f, 55.0f, 0.0f, 0.0f, -34.0f, 75.0f, 75.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 1040.0f, -1145.0f, 55.0f, 0.0f, 0.0f, 12.0f, 115.0f, 50.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 1040.0f, -1080.0f, 55.0f, 0.0f, 0.0f, -54.0f, 110.0f, 50.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 1057.5f, -1120.0f, 72.0f, 0.0f, 0.0f, -62.0f, 20.0f, 40.0f, 35.0f);
	func_8(iLocal_20, 1);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volYellowShackFarm_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_22, 1422.5f, -1605.0f, 60.0f, 0.0f, 0.0f, -25.0f, 110.0f, 40.0f, 35.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_22, 1435.0f, -1640.0f, 60.0f, 0.0f, 0.0f, -5.0f, 60.0f, 35.0f, 35.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1462.5f, -1580.0f, 55.0f, 0.0f, 0.0f, 0.0f, 35.0f, 35.0f, 25.0f);
	func_8(iLocal_22, 1);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volKudzu_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_23, 1783.37f, -403.6557f, 50.0f, 0.0f, 0.0f, 0.0f, 15.0f, 15.0f, 10.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_23, 1705.752f, -407.7098f, 50.0f, 0.0f, 0.0f, 0.0f, 8.0f, 8.0f, 10.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_23, 1743.89f, -412.7235f, 50.0f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_23, 1702.182f, -385.1766f, 50.0f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_23, 1777.543f, -470.4852f, 50.0f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_23, 1741.846f, -463.6705f, 50.0f, 0.0f, 0.0f, 0.0f, 5.0f, 5.0f, 10.0f);
	func_9(iLocal_23, 0, 0, 1);
	iLocal_21 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volRhodes_Restriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1366.531f, -1244.176f, 86.0f, 0.0f, 0.0f, 24.99999f, 35.0f, 45.0f, 20.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1446.545f, -1321.94f, 86.0f, 0.0f, 0.0f, -25.0f, 50.0f, 60.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1419.169f, -1296.982f, 86.0f, 0.0f, 0.0f, 18f, 70.0f, 75.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1431.117f, -1384.831f, 86.0f, 0.0f, 0.0f, -27.0f, 85.0f, 80.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1321.099f, -1341.149f, 86.0f, 0.0f, 0.0f, -41.5f, 290.0f, 100.0f, 40.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1341.175f, -1189.345f, 86.0f, 0.0f, 0.0f, -13f, 35.0f, 40.0f, 20.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1284.103f, -1229.042f, 86.0f, 0.0f, 0.0f, -24.0f, 50.0f, 50.0f, 20.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1310.193f, -1148.451f, 86.0f, 0.0f, 0.0f, -24.0f, 40.0f, 40.0f, 20.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1345.968f, -1315.79f, 86.0f, 0.0f, 0.0f, 30f, 100.0f, 150.0f, 40.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_21, 1394.818f, -1142.353f, 86.0f, 0.0f, 0.0f, 0.0f, 50.0f, 45.0f, 20.0f);
	func_10(iLocal_21, 0, 0, 1);
	iLocal_24 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50.0f, 0.0f, 0.0f, 71.44212f, 52.13922f, 102.3606f, 40.0f, "m_volMeatFacotryRestriction");
	func_10(iLocal_24, 0, 0, 1);
	iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volFlatIronLakeIslandRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, 237.213f, -769.7713f, 42.9804f, 0.0f, 0.0f, 0.0f, 156.4307f, 81.38799f, 25.72252f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, -401.9616f, -1012.638f, 42.9804f, 0.0f, 0.0f, -51.00734f, 240.5335f, 103.688f, 24.89919f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, 440.3216f, -1462.027f, 55.90892f, 0.0f, 0.0f, 13.40226f, 421.2939f, 982.8425f, 99.70844f);
	func_11(iLocal_25, 0, 0, 1);
	iLocal_26 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0.0f, 0.0f, -39.0f, 61.0f, 40.0f, 30.0f, "m_volShadyBelleCampRestriction");
	if (func_12() == 3)
	{
		func_13(iLocal_26, 0, 0, 1);
	}
	else
	{
		func_10(iLocal_26, 0, 0, 1);
	}
	if (func_12() == 2)
	{
		iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volClemensPointCampRestriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 676.1342f, -1244.41f, 60.0f, 0.0f, 0.0f, 0.0f, 34.0f, 40.0f, 35.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 714.5854f, -1246.16f, 60.0f, 0.0f, 0.0f, 0.0f, 25.0f, 25.0f, 35.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 665.8077f, -1253.38f, 67.0239f, 0.0f, 0.0f, -45.0f, 61.0f, 43.0f, 37.0f);
		func_13(iLocal_27, 0, 0, 1);
	}
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1134.166f, -977.606f, 70.21151f, 0.0f, 0.0f, -36.63845f, 15.33205f, 13.64743f, 11.36453f, "m_volLoveShackRestriction");
	func_13(iLocal_28, 0, 0, 1);
	iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volScarlettMeadowsHorseShop_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1199.7f, -218.2492f, 108.0f, 0.0f, 0.0f, 18.0f, 55.0f, 27.0f, 30.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1168.627f, -181.7328f, 108.0f, 0.0f, 0.0f, 12.0f, 15.0f, 22.0f, 30.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1209.28f, -192.7986f, 108.0f, 0.0f, 0.0f, 21.0f, 20.0f, 20.0f, 30.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1192.431f, -209.9298f, 108.0f, 0.0f, 0.0f, 45.0f, 38.0f, 27.0f, 30.0f);
	func_10(iLocal_29, 0, 0, 1);
}

void func_3()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardRestricted Agg");
		sLocal_35 = "BRAITHWAITE_MANOR";
		LAW::_CREATE_GUARD_ZONE(sLocal_35);
		iLocal_32 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardThreat Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_32, 1011.259f, -1770.558f, 54.474f, 0.0f, 0.0f, 0.0f, 32.24056f, 25.42504f, 29.43f);
		if (func_15(func_14(20), 1) && func_16(0) != func_14(26))
		{
			VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_32, 1002.569f, -1779.374f, 51.87877f, 0.0f, 0.0f, 0.0f, 110.6441f, 258.019f, 44.24617f);
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_31, iLocal_32);
		}
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1118.44f, -1929.96f, 60.68164f, 0.0f, 0.0f, 0.0f, 501.5424f, 235.4708f, 34.78567f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 875.228f, -1914.403f, 44.91368f, 0.0f, 0.0f, -3.879577f, 55.8357f, 52.57109f, 38.73902f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1211.347f, -1752.262f, 60.68164f, 0.0f, 0.0f, -0.332804f, 81.77956f, 131.7137f, 34.78567f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 905.6187f, -1799.341f, 44.9137f, 0.0f, 0.0f, 25.88957f, 55.8357f, 29.76044f, 38.73902f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 836.1697f, -1453.681f, 44.91368f, 0.0f, 0.0f, 87.68149f, 93.74749f, 154.5868f, 38.73902f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1115.395f, -1525.623f, 44.91367f, 0.0f, 0.0f, 31.3359f, 36.92995f, 80.09516f, 38.73902f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1105.269f, -1614.585f, 60.68164f, 0.0f, 0.0f, -80.0742f, 230.3989f, 96.57458f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1067.121f, -1446.755f, 60.68164f, 0.0f, 0.0f, -146.6021f, 45.74788f, 59.07155f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1263.983f, -1687.46f, 60.68164f, 0.0f, 0.0f, -42.72432f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1290.883f, -1787.478f, 60.68164f, 0.0f, 0.0f, 0.0f, 93.15845f, 74.91695f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1281.606f, -1726.193f, 60.68164f, 0.0f, 0.0f, 13.67242f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1239.49f, -1656.35f, 60.68164f, 0.0f, 0.0f, 1.90049f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 871.9549f, -1582.566f, 60.68164f, 0.0f, 0.0f, 41.59258f, 88.5479f, 214.9416f, 34.78567f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1223.278f, -1631.824f, 44.91368f, 0.0f, 0.0f, 6.249954f, 55.8357f, 29.76044f, 38.73902f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1038.417f, -2041.748f, 44.91368f, 0.0f, 0.0f, -3.879577f, 83.99915f, 48.88229f, 37.70429f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1107.553f, -2053.285f, 44.91368f, 0.0f, 0.0f, 142.329f, 83.99915f, 51.0276f, 37.70429f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1230.195f, -2047.582f, 60.68164f, 0.0f, 0.0f, 10.41206f, 112.5859f, 18.67556f, 33.75095f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1152.351f, -1732.339f, 60.68164f, 0.0f, 0.0f, -0.332802f, 230.2223f, 207.0246f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1165.905f, -1602.237f, 60.68164f, 0.0f, 0.0f, -35.1525f, 86.92022f, 64.20754f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 971.0298f, -1523.872f, 60.68164f, 0.0f, 0.0f, -1.077511f, 70.56633f, 272.1745f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 940.7705f, -1713.162f, 60.68164f, 0.0f, 0.0f, -0.332802f, 100.6058f, 412.9408f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1045.925f, -1525.847f, 60.68164f, 0.0f, 0.0f, -0.113033f, 52.12696f, 272.1745f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1010.297f, -1753.058f, 60.68164f, 0.0f, 0.0f, 0.031469f, 60.59262f, 206.084f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1046.3f, -1388.098f, 60.68164f, 0.0f, 0.0f, 3.738009f, 51.48512f, 8.848132f, 34.78567f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 976.0677f, -1386.42f, 60.68164f, 0.0f, 0.0f, -8.397814f, 64.26683f, 12.41227f, 34.78567f);
		iLocal_33 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardWarning Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_33, iLocal_31);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_33, 1011.031f, -1627.875f, 54.474f, 0.0f, 0.0f, 0.0f, 57.80508f, 84.32041f, 42.66307f);
		iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Braithwaite Manor - m_volGuardRegistration Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_30, iLocal_33);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_30, 1011.031f, -1498.073f, 54.474f, 0.0f, 0.0f, 0.0f, 57.80508f, 256.8415f, 42.66307f);
		iLocal_34 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1016.875f, -1739.898f, 44.91367f, 0.0f, 0.0f, 31.3359f, 330.0987f, 510.544f, 38.73902f, "Braithwaite Manor - m_volGuardDefensive");
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_35, iLocal_32);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_35, iLocal_30);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_35, iLocal_31);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_35, iLocal_33);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_35, 1010.927f, -1769.488f, 48.4326f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_35, iLocal_34);
	}
}

void func_4()
{
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_17()) && !func_18(3)) && !func_19(3)) && (func_20(5) || !func_20(3)))
	{
		iLocal_36 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1793.603f, -1357.115f, 59.45f, 0.0f, 0.0f, 0.830428f, 280.5287f, 283.5385f, 120.0f, "Caliga Hall - m_volGuardRegistration Agg");
		iLocal_37 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardRestricted Agg");
		iLocal_39 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardWarning Agg");
		sLocal_40 = "CALIGA_HALL";
		LAW::_CREATE_GUARD_ZONE(sLocal_40);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 2015.545f, -1230.924f, 65.09399f, 0.0f, 0.0f, -163.3201f, 47.59768f, 35.07034f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1684.512f, -1521.571f, 65.09399f, 0.0f, 0.0f, 42.25353f, 67.10063f, 92.68093f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1896.8f, -1203.757f, 65.09399f, 0.0f, 0.0f, -117.1258f, 80.43096f, 50.7298f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1594.069f, -1221.354f, 65.09399f, 0.0f, 0.0f, -6.760809f, 29.95752f, 54.78854f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1582.798f, -1352.395f, 65.09399f, 0.0f, 0.0f, 7.267992f, 29.82035f, 66.61618f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1945.563f, -1447.912f, 65.09399f, 0.0f, 0.0f, 54.95108f, 136.3961f, 64.92802f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1995.025f, -1311.855f, 65.09399f, 0.0f, 0.0f, -97.03504f, 114.3743f, 64.92802f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1831.16f, -1538.881f, 62.20444f, 0.0f, 0.0f, 25.88949f, 158.3937f, 60.54151f, 32.91713f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1839.733f, -1217.325f, 65.09399f, 0.0f, 0.0f, -131.7009f, 11.35072f, 25.89301f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1575.994f, -1387.483f, 65.09399f, 0.0f, 0.0f, 11.55175f, 24.33344f, 36.54459f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1584.654f, -1293.978f, 65.09399f, 0.0f, 0.0f, 7.267992f, 29.82035f, 72.82359f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1623.119f, -1267.934f, 65.09399f, 0.0f, 0.0f, 33.29202f, 53.21782f, 54.42033f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1606.259f, -1475.676f, 65.3014f, 0.0f, 0.0f, 21.88873f, 24.33344f, 42.41337f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1882.439f, -1399.819f, 65.09399f, 0.0f, 0.0f, -117.8525f, 114.3743f, 36.55597f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1923.116f, -1281.776f, 65.09399f, 0.0f, 0.0f, -117.8525f, 106.4494f, 64.92802f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1758.536f, -1481.643f, 65.09399f, 0.0f, 0.0f, -69.26749f, 45.78393f, 132.3003f, 30.02518f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1820.797f, -1440.255f, 55.32394f, 0.0f, 0.0f, -69.24527f, 59.0067f, 183.1524f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1668.878f, -1456.165f, 55.32394f, 0.0f, 0.0f, -70.83253f, 89.61581f, 108.7196f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1634.383f, -1350.176f, 55.32394f, 0.0f, 0.0f, -69.24527f, 92.78974f, 103.8596f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1761.872f, -1284.766f, 55.32394f, 0.0f, 0.0f, -69.24527f, 49.45402f, 183.1524f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1867.004f, -1316.152f, 55.32394f, 0.0f, 0.0f, -69.24527f, 84.88496f, 58.36481f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1782.516f, -1361.262f, 59.55394f, 0.0f, 0.0f, 20.25882f, 138.0024f, 117.956f, 68.83923f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1732.411f, -1432.284f, 67.17402f, 0.0f, 0.0f, 10.79338f, 8.046697f, 19.96923f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1724.87f, -1402.81f, 67.17402f, 0.0f, 0.0f, 13.50131f, 7.162543f, 55.34449f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1728.568f, -1429.283f, 67.18265f, 0.0f, 0.0f, 8.192761f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1729.705f, -1434.135f, 67.18265f, 0.0f, 0.0f, 17.07415f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1714.39f, -1372.751f, 58.51695f, 0.0f, 0.0f, 21.89501f, 3.164398f, 16.97988f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1697.711f, -1337.191f, 58.51695f, 0.0f, 0.0f, 25.67494f, 5.856398f, 16.97988f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1705.336f, -1351.077f, 58.51695f, 0.0f, 0.0f, 32.16994f, 5.856398f, 16.97988f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_37, 1711.4f, -1361.832f, 58.51695f, 0.0f, 0.0f, 21.61775f, 5.856398f, 11.64093f, 70.85926f);
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_39, iLocal_37);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_39, 1693.758f, -1398.498f, 59.55394f, 0.0f, 0.0f, 20.25882f, 96.84109f, 118.6053f, 68.83923f);
		iLocal_38 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardThreat");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_38, 1774.218f, -1361.042f, 53.05487f, 0.0f, 0.0f, 19.74844f, 4.524646f, 8.63999f, 21.72494f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_38, 1753.445f, -1368.499f, 53.05487f, 0.0f, 0.0f, 19.74844f, 4.524646f, 8.63999f, 21.72494f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_38, 1763.496f, -1376.581f, 53.05487f, 0.0f, 0.0f, 19.74844f, 2.945491f, 3.407134f, 21.72494f);
		if (func_21(95))
		{
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_38, iLocal_39);
		}
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_40, iLocal_38);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_40, iLocal_36);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_40, iLocal_37);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_40, iLocal_39);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_40, 1763.708f, -1365.276f, 46.6304f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_40, iLocal_36);
	}
}

void func_5(Vector3 vParam0, char* sParam3, char* sParam4, char* sParam5, int iParam6, var uParam7)
{
	int iVar0;

	if (func_22(vParam0))
	{
		return;
	}
	if (func_23(&iVar0, sParam3, sParam4, sParam5, iParam6, uParam7))
	{
		Global_1933981.f_13[iVar0 /*11*/] = { vParam0 /*3*/ };
	}
}

void func_6()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_35);
	LAW::_REMOVE_GUARD_ZONE(sLocal_40);
}

void func_7(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 2228479, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 2228479, (1 << 14), 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228479, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_8(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 231, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 231, (1 << 14), 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(231, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_24(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_10(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_24(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_11(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_24(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_12()
{
	return Global_40.f_4283;
}

void func_13(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_24(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_14(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

bool func_15(int iParam0, bool bParam1)
{
	switch (func_25(iParam0))
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

int func_16(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_17()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_26(16) && !func_26(21))
	{
		return true;
	}
	return false;
}

bool func_18(int iParam0)
{
	if (func_27() != -1)
	{
		return false;
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_28(Global_1347702[iParam0 /*49*/].f_15)) && !func_29(Global_1347702[iParam0 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

int func_19(int iParam0)
{
	if (func_27() != -1)
	{
		return 0;
	}
	if (!func_30(iParam0))
	{
		return 0;
	}
	return func_31(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_20(int iParam0)
{
	if (func_27() != -1)
	{
		return false;
	}
	if (!func_30(iParam0))
	{
		return false;
	}
	return func_15(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_21(int iParam0)
{
	if (!func_32(iParam0))
	{
		return false;
	}
	return func_33(iParam0, (1 << 25));
}

bool func_22(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_23(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, var uParam5)
{
	int iVar0;

	if (Global_1933981.f_10 != Global_1894899.f_2)
	{
		func_34();
		Global_1933981.f_10 = Global_1894899.f_2;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1933981.f_13[iVar0 /*11*/].f_9 == 0)
		{
			*iParam0 = iVar0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
			{
				Global_1933981.f_13[iVar0 /*11*/].f_3 = MISC::GET_HASH_KEY(sParam1);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				Global_1933981.f_13[iVar0 /*11*/].f_4 = MISC::GET_HASH_KEY(sParam2);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				Global_1933981.f_13[iVar0 /*11*/].f_5 = MISC::GET_HASH_KEY(sParam3);
			}
			Global_1933981.f_13[iVar0 /*11*/].f_6 = iParam4;
			Global_1933981.f_13[iVar0 /*11*/].f_10 = uParam5;
			func_35(&(Global_1933981.f_13[iVar0 /*11*/].f_9), 1);
			Global_1933981.f_12++;
			if (Global_1933981.f_12 > 5)
			{
				Global_1933981.f_12 = 5;
			}
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_24(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

int func_25(int iParam0)
{
	if (!func_36(iParam0))
	{
		return -1;
	}
	return func_37(iParam0);
}

bool func_26(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_15(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_27()
{
	return Global_1572887.f_12;
}

bool func_28(int iParam0)
{
	int iVar0;

	iVar0 = func_25(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_29(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_30(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_31(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_37(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_32(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_33(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

void func_34()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1933981.f_13[iVar0 /*11*/].f_3 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_4 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_5 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_6 = -1;
		Global_1933981.f_13[iVar0 /*11*/].f_10 = -1;
		func_35(&(Global_1933981.f_13[iVar0 /*11*/].f_9), 0);
		iVar0++;
	}
	Global_1933981.f_11 = 0;
	Global_1933981.f_12 = 0;
	Global_1933981.f_9 = -1;
}

void func_35(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
	}
}

bool func_36(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_37(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_38(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_38(int iParam0)
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

