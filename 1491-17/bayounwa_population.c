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
	char* sLocal_32 = NULL;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	func_1();
	func_2();
	func_3();
	bVar0 = true;
	while (bVar0)
	{
		BUILTIN::WAIT(0);
	}
	func_4();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		func_4();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
	iLocal_14 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volCaligaHall_Restriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1765.0f, -1365.0f, 50.0f, 0.0f, 0.0f, 20.0f, 30.0f, 30.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1752.5f, -1332.5f, 50.0f, 0.0f, 0.0f, 7.0f, 100.0f, 150.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1850.0f, -1330.0f, 50.0f, 0.0f, 0.0f, 169.0f, 150.0f, 250.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1650.0f, -1465.0f, 50.0f, 0.0f, 0.0f, 26.0f, 150.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1647.5f, -1377.5f, 50.0f, 0.0f, 0.0f, 9.0f, 200.0f, 100.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1592.5f, -1282.5f, 50.0f, 0.0f, 0.0f, -2.0f, 100.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1660.0f, -1300.0f, 50.0f, 0.0f, 0.0f, 50.0f, 100.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1705.0f, -1532.5f, 50.0f, 0.0f, 0.0f, 53.0f, 150.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1810.0f, -1485.0f, 50.0f, 0.0f, 0.0f, 115.0f, 250.0f, 175.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1927.5f, -1447.5f, 50.0f, 0.0f, 0.0f, 146.0f, 150.0f, 175.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1975.0f, -1342.5f, 50.0f, 0.0f, 0.0f, 170.0f, 150.0f, 125.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1750.0f, -1582.5f, 50.0f, 0.0f, 0.0f, 86.0f, 100.0f, 75.0f, 40.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_14, 1977.5f, -1300.0f, 50.0f, 0.0f, 0.0f, 147.0f, 135.0f, 100.0f, 40.0f);
	func_5(iLocal_14, 1);
	iLocal_15 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2090.0f, -1817.5f, 39.0f, 0.0f, 0.0f, 0.0f, 18.0f, 18.0f, 10.0f, "m_volCrawdadWilliesRestriction");
	func_5(iLocal_15, 1);
	iLocal_16 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2125.35f, -597.55f, 45.0f, 0.0f, 0.0f, 45.0f, 50.0f, 70.0f, 10.0f, "m_volLagrasRestriction");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_16, 4295, 4210688, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_16, 4295, 4210688, 0, -1, -1, 0);
	POPULATION::_0x2161278C6322F740(4295, 4210688, 0, -1, -1, iLocal_16);
	iLocal_17 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakayRestriction");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_17, 2252.5f, -762.5f, 45.0f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 10.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_17, 2288.0f, -723.0f, 45.0f, 0.0f, 0.0f, -40.0f, 12.0f, 15.0f, 10.0f);
	func_5(iLocal_17, 1);
	iLocal_18 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2011.9f, -840.7f, 44.7f, 0.0f, 0.0f, 0.0f, 98.7f, 64.1f, 10.0f, "m_volOrangePlantationRestriction");
	func_5(iLocal_18, 1);
	iLocal_19 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisFountainAquaticRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, 2331.869f, -1216.261f, 45.5096f, 0.0f, 0.0f, 0.0f, 18.0f, 9.0f, 5.0f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_19, 2401.408f, -1036.954f, 43.69143f, 0.0f, 0.0f, 0.0f, 3.15f, 3.15f, 3.297321f);
	func_6(iLocal_19, (1 << 9), 0, 1);
	iLocal_20 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisNorthShacksRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 2352.919f, -862.3568f, 45.0f, 0.0f, 0.0f, 18.0f, 7.5f, 7.5f, 30.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 2352.267f, -854.82f, 45.0f, 0.0f, 0.0f, 36.0f, 10.0f, 10.0f, 30.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_20, 2370.363f, -861.704f, 45.0f, 0.0f, 0.0f, 21.0f, 15.0f, 20.0f, 30.0f);
	func_6(iLocal_20, 0, 0, 1);
	iLocal_21 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1789.165f, -815.8882f, 51.0f, 0.0f, 0.0f, 0.0f, 12.5f, 12.5f, 15.0f, "m_volBoardedHouseRestriction");
	func_7(iLocal_21, 0, 0, 1);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volMacombsEndRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_22, 1881.904f, -773.9849f, 50.0f, 0.0f, 0.0f, 0.0f, 24.0f, 10.0f, 30.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_22, 1884.927f, -749.2661f, 50.0f, 0.0f, 0.0f, 0.0f, 30.0f, 40.0f, 30.0f);
	func_7(iLocal_22, 0, 0, 1);
	iLocal_23 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2154.009f, -1293.059f, 50.0f, 0.0f, 0.0f, 71.44212f, 52.13922f, 102.3606f, 40.0f, "m_volMeatFacotryRestriction");
	func_6(iLocal_23, 0, 0, 1);
	iLocal_24 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1892.398f, -1861.472f, 57.8087f, 0.0f, 0.0f, -39.0f, 61.0f, 40.0f, 30.0f, "m_volShadyBelleCampRestriction");
	if (func_8() == 3)
	{
		func_9(iLocal_24, 0, 0, 1);
	}
	else
	{
		func_6(iLocal_24, 0, 0, 1);
	}
	if (func_8() == 5)
	{
		iLocal_25 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volLakayCampRestriction");
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, 2253.741f, -742.7828f, 61.2578f, 0.0f, 0.0f, 66.0f, 28.0f, 43.0f, 30.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, 2240.492f, -772.2779f, 52.7971f, 0.0f, 0.0f, -1.0f, 51.0f, 60.0f, 60.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_25, 2280.981f, -762.709f, 60.5683f, 0.0f, 0.0f, -12.0f, 22.0f, 46.0f, 30.0f);
		func_9(iLocal_25, 0, 0, 1);
	}
	iLocal_26 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volStDenisRuralHouse");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_26, 2557.442f, -913.5541f, 43.8437f, 0.0f, 0.0f, 25.86927f, 21.31003f, 16.89607f, 13.63585f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_26, 2531.764f, -930.9406f, 41.67561f, 0.0f, 0.0f, 25.86927f, 19.01398f, 16.50291f, 13.63585f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_26, 2508.388f, -936.4707f, 43.20302f, 0.0f, 0.0f, 25.86927f, 10.15781f, 10.6119f, 10.52294f);
	func_9(iLocal_26, 0, 0, 1);
	iLocal_27 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volAquaticRestriction");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 2051.69f, -1716.667f, 45.47638f, 0.0f, 0.0f, -22.36101f, 43.12104f, 125.3801f, 18.72456f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 2212.785f, -513.7505f, 42.64256f, 0.0f, 0.0f, 7.584539f, 120.1986f, 73.42303f, 13.12508f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 2123.317f, -450.1633f, 42.35445f, 0.0f, 0.0f, 19.19169f, 52.02959f, 103.7867f, 11.12478f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 1774.63f, -754.3323f, 40.5518f, 0.0f, 0.0f, -48.02472f, 41.93194f, 15.1102f, 8.930059f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 2079.136f, -508.0375f, 40.54353f, 0.0f, 0.0f, 32.83384f, 30.26976f, 12.10188f, 4.106483f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_27, 2072.09f, -541.5287f, 41.15696f, 0.0f, 0.0f, -50.04893f, 49.11419f, 29.08003f, 4.101138f);
	func_10(iLocal_27, 1);
}

void func_3()
{
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_11()) && !func_12(3)) && !func_13(3)) && (func_14(5) || !func_14(3)))
	{
		iLocal_28 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1793.603f, -1357.115f, 59.45f, 0.0f, 0.0f, 0.830428f, 280.5287f, 283.5385f, 120.0f, "Caliga Hall - m_volGuardRegistration Agg");
		iLocal_29 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardRestricted Agg");
		iLocal_31 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardWarning Agg");
		sLocal_32 = "CALIGA_HALL";
		LAW::_CREATE_GUARD_ZONE(sLocal_32);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 2015.545f, -1230.924f, 65.09399f, 0.0f, 0.0f, -163.3201f, 47.59768f, 35.07034f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1684.512f, -1521.571f, 65.09399f, 0.0f, 0.0f, 42.25353f, 67.10063f, 92.68093f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1896.8f, -1203.757f, 65.09399f, 0.0f, 0.0f, -117.1258f, 80.43096f, 50.7298f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1594.069f, -1221.354f, 65.09399f, 0.0f, 0.0f, -6.760809f, 29.95752f, 54.78854f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1582.798f, -1352.395f, 65.09399f, 0.0f, 0.0f, 7.267992f, 29.82035f, 66.61618f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1945.563f, -1447.912f, 65.09399f, 0.0f, 0.0f, 54.95108f, 136.3961f, 64.92802f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1995.025f, -1311.855f, 65.09399f, 0.0f, 0.0f, -97.03504f, 114.3743f, 64.92802f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1831.16f, -1538.881f, 62.20444f, 0.0f, 0.0f, 25.88949f, 158.3937f, 60.54151f, 32.91713f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1839.733f, -1217.325f, 65.09399f, 0.0f, 0.0f, -131.7009f, 11.35072f, 25.89301f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1575.994f, -1387.483f, 65.09399f, 0.0f, 0.0f, 11.55175f, 24.33344f, 36.54459f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1584.654f, -1293.978f, 65.09399f, 0.0f, 0.0f, 7.267992f, 29.82035f, 72.82359f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1623.119f, -1267.934f, 65.09399f, 0.0f, 0.0f, 33.29202f, 53.21782f, 54.42033f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1606.259f, -1475.676f, 65.3014f, 0.0f, 0.0f, 21.88873f, 24.33344f, 42.41337f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1882.439f, -1399.819f, 65.09399f, 0.0f, 0.0f, -117.8525f, 114.3743f, 36.55597f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1923.116f, -1281.776f, 65.09399f, 0.0f, 0.0f, -117.8525f, 106.4494f, 64.92802f, 30.02518f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1758.536f, -1481.643f, 65.09399f, 0.0f, 0.0f, -69.26749f, 45.78393f, 132.3003f, 30.02518f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1820.797f, -1440.255f, 55.32394f, 0.0f, 0.0f, -69.24527f, 59.0067f, 183.1524f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1668.878f, -1456.165f, 55.32394f, 0.0f, 0.0f, -70.83253f, 89.61581f, 108.7196f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1634.383f, -1350.176f, 55.32394f, 0.0f, 0.0f, -69.24527f, 92.78974f, 103.8596f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1761.872f, -1284.766f, 55.32394f, 0.0f, 0.0f, -69.24527f, 49.45402f, 183.1524f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1867.004f, -1316.152f, 55.32394f, 0.0f, 0.0f, -69.24527f, 84.88496f, 58.36481f, 81.18531f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1782.516f, -1361.262f, 59.55394f, 0.0f, 0.0f, 20.25882f, 138.0024f, 117.956f, 68.83923f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1732.411f, -1432.284f, 67.17402f, 0.0f, 0.0f, 10.79338f, 8.046697f, 19.96923f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1724.87f, -1402.81f, 67.17402f, 0.0f, 0.0f, 13.50131f, 7.162543f, 55.34449f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1728.568f, -1429.283f, 67.18265f, 0.0f, 0.0f, 8.192761f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1729.705f, -1434.135f, 67.18265f, 0.0f, 0.0f, 17.07415f, 2.675812f, 5.677442f, 53.29837f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1714.39f, -1372.751f, 58.51695f, 0.0f, 0.0f, 21.89501f, 3.164398f, 16.97988f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1697.711f, -1337.191f, 58.51695f, 0.0f, 0.0f, 25.67494f, 5.856398f, 16.97988f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1705.336f, -1351.077f, 58.51695f, 0.0f, 0.0f, 32.16994f, 5.856398f, 16.97988f, 70.85926f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_29, 1711.4f, -1361.832f, 58.51695f, 0.0f, 0.0f, 21.61775f, 5.856398f, 11.64093f, 70.85926f);
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_31, iLocal_29);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_31, 1693.758f, -1398.498f, 59.55394f, 0.0f, 0.0f, 20.25882f, 96.84109f, 118.6053f, 68.83923f);
		iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Caliga Hall - m_volGuardThreat");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_30, 1774.218f, -1361.042f, 53.05487f, 0.0f, 0.0f, 19.74844f, 4.524646f, 8.63999f, 21.72494f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_30, 1753.445f, -1368.499f, 53.05487f, 0.0f, 0.0f, 19.74844f, 4.524646f, 8.63999f, 21.72494f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_30, 1763.496f, -1376.581f, 53.05487f, 0.0f, 0.0f, 19.74844f, 2.945491f, 3.407134f, 21.72494f);
		if (func_15(95))
		{
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_30, iLocal_31);
		}
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_32, iLocal_30);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_32, iLocal_28);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_32, iLocal_29);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_32, iLocal_31);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_32, 1763.708f, -1365.276f, 46.6304f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_32, iLocal_28);
	}
}

void func_4()
{
	LAW::_REMOVE_GUARD_ZONE(sLocal_32);
}

void func_5(int iParam0, bool bParam1)
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

void func_6(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_16(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | (1 << 12) | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_7(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_16(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 64 | 128 | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

int func_8()
{
	return Global_40.f_4283;
}

void func_9(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, 0);
	if (bParam2)
	{
		func_16(&iParam1, (1 << 13));
	}
	if (bParam3)
	{
		POPULATION::_0x2161278C6322F740(iParam1 | 224 | (1 << 12) | 2 | 4 | 1, (1 << 14), 0, -1, -1, iParam0);
	}
}

void func_10(int iParam0, bool bParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, 2228767, 0, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, 2228767, 0, 0, -1, -1, 0);
	if (bParam1)
	{
		POPULATION::_0x2161278C6322F740(2228767, 0, 0, -1, -1, iParam0);
	}
}

bool func_11()
{
	if (Global_1894899.f_187)
	{
		return true;
	}
	if (func_17(16) && !func_17(21))
	{
		return true;
	}
	return false;
}

bool func_12(int iParam0)
{
	if (func_18() != -1)
	{
		return false;
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false) && !func_19(Global_1347702[iParam0 /*49*/].f_15)) && !func_20(Global_1347702[iParam0 /*49*/].f_13, 4))
	{
		return true;
	}
	return false;
}

int func_13(int iParam0)
{
	if (func_18() != -1)
	{
		return 0;
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	return func_22(Global_1347702[iParam0 /*49*/].f_15);
}

int func_14(int iParam0)
{
	if (func_18() != -1)
	{
		return 0;
	}
	if (!func_21(iParam0))
	{
		return 0;
	}
	return func_23(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_15(int iParam0)
{
	if (!func_24(iParam0))
	{
		return false;
	}
	return func_25(iParam0, (1 << 25));
}

void func_16(int iParam0, int iParam1)
{
	*iParam0 -= (*iParam0 & iParam1);
}

bool func_17(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_23(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_18()
{
	return Global_1572887.f_12;
}

bool func_19(int iParam0)
{
	int iVar0;

	iVar0 = func_26(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_20(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_21(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_22(int iParam0)
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
		iVar0 = func_27(iParam0);
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

int func_23(int iParam0, bool bParam1)
{
	switch (func_26(iParam0))
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

bool func_24(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_25(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

int func_26(int iParam0)
{
	if (!func_28(iParam0))
	{
		return -1;
	}
	return func_27(iParam0);
}

int func_27(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_29(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_28(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_29(int iParam0)
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

