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
	var uLocal_18 = 24;
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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	struct<45> /*360*/ sLocal_117[2];
	int iLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216 = 0;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	bool bLocal_227 = false;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	bool bLocal_233 = false;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
	var uScriptParam_3 = 0;
#pragma endregion

void __SCRIPT()
{
	int iVar0;
	int iVar1;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_208 = 1;
	iLocal_236 = 20000;
	iLocal_239 = vScriptParam_0.x;
	iLocal_237 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_238 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_238)
		{
			iLocal_238 = 0;
			func_4(iLocal_239, &iLocal_237);
			switch (iLocal_237)
			{
				case 0:
					iLocal_237 = 1;
					break;
				case 1:
					func_5(iLocal_239);
					if (func_7(func_6(iLocal_239)))
					{
						func_8(func_6(iLocal_239), 4);
					}
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_9(iLocal_239));
					iVar1 = func_10(iLocal_239);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_240 = (MISC::GET_GAME_TIMER() + iLocal_236);
					iLocal_237 = 2;
					break;
				case 2:
					if (func_11() || iLocal_240 < MISC::GET_GAME_TIMER())
					{
						func_12(iLocal_239);
						iLocal_240 = (MISC::GET_GAME_TIMER() + iLocal_236);
						iLocal_237 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_239) || iLocal_240 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_239);
						iLocal_240 = (iLocal_236 + MISC::GET_GAME_TIMER());
						iLocal_237 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_239) || iLocal_240 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_239);
						iLocal_240 = (iLocal_236 + MISC::GET_GAME_TIMER());
						iLocal_237 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_239)))
					{
						if (func_17(func_6(iLocal_239), 4) && !iLocal_240 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_18(iLocal_239) || iLocal_240 < MISC::GET_GAME_TIMER())
							{
								func_19(iLocal_239, 4);
								iLocal_240 = (iLocal_236 + MISC::GET_GAME_TIMER());
								iLocal_237 = 7;
							}
							Jump @788; // curOff = 459
							if (iLocal_240 < MISC::GET_GAME_TIMER() || (func_20() != 0 || Global_1051260.f_3790))
							{
								func_21(iLocal_239);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_239);
								func_28(iLocal_239);
								func_29();
								func_30();
								iLocal_237 = 8;
							}
							Jump @788; // curOff = 558
							func_31(iLocal_239);
							func_32();
							iLocal_237 = 9;
							Jump @788; // curOff = 575
							func_33(&Global_1898004);
							func_34(iLocal_239, &Global_1898004);
							iLocal_237 = 10;
							Jump @788; // curOff = 600
							func_35(iLocal_239);
							if (func_20() == -1)
							{
								HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_TOWN"));
							}
							func_19(iLocal_239, 8);
							if (func_36(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_37(32);
							}
							iLocal_237 = 11;
							Jump @788; // curOff = 667
							if (func_38(iLocal_239))
							{
								iLocal_238 = (1000 + MISC::GET_GAME_TIMER());
							}
							func_39(&Global_1898004, iLocal_239);
							func_40(iLocal_239);
							func_19(iLocal_239, 8);
							if (func_41())
							{
								PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_239 /*35*/].f_10);
							if (Global_1888801[iLocal_239 /*35*/].f_11 > 0.0f)
							{
								PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_239 /*35*/].f_11);
							}
							Jump @788; // curOff = 769
							func_42(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (Global_1888801[iLocal_239 /*35*/].f_12 != 0)
						{
							PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1888801[iLocal_239 /*35*/].f_12);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_42(iVar0))
						{
							iVar0 = (1 + iVar0);
							BUILTIN::WAIT(0);
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

void func_1()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_42(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_2()
{
}

bool func_3()
{
	return true;
}

void func_4(int iParam0, int iParam1)
{
	if (!func_36(16))
	{
		return;
	}
	if (Global_1894899.f_7 == 0)
	{
		func_37(16);
		return;
	}
	if (!func_43(iParam0))
	{
		Global_1894899.f_7 = 0;
		func_37(16);
		return;
	}
	if (func_44(8))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_45(8);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(2))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_45(2);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(16))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_45(16);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(4))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 6;
			return;
		}
		else if (*iParam1 != 6)
		{
			func_45(4);
			*iParam1 = 11;
			return;
		}
	}
	if (func_44(1))
	{
		if (*iParam1 == 11)
		{
			*iParam1 = 2;
			return;
		}
		else if (*iParam1 != 2)
		{
			func_45(1);
			*iParam1 = 11;
			return;
		}
	}
}

void func_5(int iParam0)
{
}

int func_6(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 29)
	{
		return 1;
	}
	else if (iParam0 <= 32)
	{
		return 2;
	}
	else if (iParam0 <= 36)
	{
		return 3;
	}
	else if (iParam0 <= 39)
	{
		return 4;
	}
	else if (iParam0 <= 49)
	{
		return 7;
	}
	else if (iParam0 <= 56)
	{
		return 6;
	}
	else if (iParam0 <= 61)
	{
		return 8;
	}
	else if (iParam0 <= 76)
	{
		return 9;
	}
	else if (iParam0 <= 92)
	{
		return 10;
	}
	else if (iParam0 <= 106)
	{
		return 11;
	}
	else if (iParam0 <= 113)
	{
		return 12;
	}
	else if (iParam0 <= 116)
	{
		return 13;
	}
	else if (iParam0 <= 119)
	{
		return 14;
	}
	else if (iParam0 <= 125)
	{
		return 15;
	}
	else if (iParam0 <= 127)
	{
		return 16;
	}
	return -1;
}

bool func_7(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_8(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] |= iParam1;
}

int func_9(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 38:
			iVar0 = joaat("BLACKWATER_RESIDENTS");
			break;
		case 82:
			iVar0 = joaat("BUTCHERCREEK_RESIDENTS");
			break;
		case 69:
			iVar0 = joaat("EMERALDRANCH_RESIDENTS");
			break;
		case 61:
			iVar0 = joaat("MANICATO_RESIDENTS");
			break;
		case 110:
			iVar0 = joaat("MANZANITAPOST_RESIDENTS");
			break;
		case 5:
			iVar0 = joaat("SAINTDENIS_RESIDENTS");
			break;
		case 35:
			iVar0 = joaat("OLDFORTWALLACE_RESIDENTS");
			break;
		case 105:
			iVar0 = joaat("RHODES_RESIDENTS");
			break;
		case 26:
			iVar0 = joaat("STRAWBERRY_RESIDENTS");
			break;
		case 76:
			iVar0 = joaat("VALENTINE_RESIDENTS");
			break;
		case 92:
			iVar0 = joaat("VANHORNPOST_RESIDENTS");
			break;
		case 56:
			iVar0 = joaat("WAPITI_RESIDENTS");
			break;
		case 78:
			iVar0 = joaat("ANNESBURG_RESIDENTS");
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_10(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 0;
		case 120:
			return 1;
		case 38:
			return 2;
		case 93:
			return 3;
		case 82:
			return 4;
		case 65:
			return 5;
		case 3:
			return 6;
		case 110:
			return 7;
		case 105:
			return 8;
		case 5:
			return 9;
		case 26:
			return 10;
		case 75:
			return 11;
		case 115:
			return 12;
		case 76:
			return 13;
		case 92:
			return 14;
		case 56:
			return 15;
		default:
			break;
	}
	return -1;
}

bool func_11()
{
	iLocal_209 = Global_1888801[115 /*35*/].f_4;
	VOLUME::_0xB469CFD9E065EB99(iLocal_209, 28);
	iLocal_211 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5507.549f, -2965.196f, -0.228844f, 0.0f, 0.0f, 14.50012f, 5.533408f, 8.440951f, 3.311345f, "Tumbleweed - m_volGunsmith");
	iLocal_213 = VOLUME::CREATE_VOLUME_BOX(-5508.212f, -2964.63f, -0.4536f, 0.0f, 0.0f, 15.48608f, 1.15206f, 1.211619f, 2.44214f);
	iLocal_214 = VOLUME::CREATE_VOLUME_BOX(-5506.212f, -2964.24f, -0.546059f, 0.0f, 0.0f, 15.38209f, 1.208323f, 1.559606f, 2.24757f);
	iLocal_212 = VOLUME::CREATE_VOLUME_BOX(-5508.861f, -2960.149f, -0.730614f, 0.0f, 0.0f, 14.06083f, 5.590748f, 1.871594f, 1.963433f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_211, 10108);
	iLocal_215 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Armadillo - m_volGeneral Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_215, -5486.887f, -2936.958f, -0.631974f, 0.0f, 0.0f, 37.50568f, 12.05108f, 6.394965f, 4.543615f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_215, -5479.758f, -2933.356f, -0.464321f, 0.0f, 0.0f, 37.59521f, 2.825781f, 2.131215f, 1.882721f);
	iLocal_216 = VOLUME::CREATE_VOLUME_BOX(-5487.416f, -2939.017f, -0.416119f, 0.0f, 0.0f, 36.36512f, 1.251111f, 3.269273f, 2.026726f);
	iLocal_218 = VOLUME::CREATE_VOLUME_BOX(-5485.543f, -2937.639f, -0.416119f, 0.0f, 0.0f, 36.36512f, 2.087f, 2.06f, 2.027f);
	iLocal_217 = VOLUME::CREATE_VOLUME_BOX(-5492.82f, -2941.371f, -0.730614f, 0.0f, 0.0f, 127.4349f, 6.522694f, 1.871594f, 1.963433f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_215, 10107);
	iLocal_210 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5514.454f, -2910.941f, 0.196263f, 0.0f, 0.0f, 28.00368f, 12.9595f, 18.61485f, 9.427321f, "Tumbleweed - m_volBartender");
	iLocal_223 = VOLUME::CREATE_VOLUME_BOX(-5507.816f, -2947.645f, -1.491075f, 0.0f, 0.0f, -17.45158f, 8.984022f, 7.283852f, 4.458558f);
	iLocal_224 = VOLUME::CREATE_VOLUME_BOX(-5507.87f, -2947.629f, -1.491075f, 0.0f, 0.0f, -17.45158f, 1.750185f, 2.572302f, 2.75889f);
	iLocal_225 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5539.533f, -3039.824f, 2.031336f, 0.0f, 0.0f, 3.990272f, 17.4913f, 32.03522f, 11.8878f, "Tumbleweed - m_volHorseShopPen");
	iLocal_222 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5602.326f, -2982.253f, 2.901444f, 0.0f, 0.0f, 141.0062f, 3.082703f, 10.21471f, 4.224741f, "Tumbleweed - m_volHomeStable");
	if (func_20() == -1)
	{
		iLocal_220 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5519.228f, -3044.427f, -1.508f, 0.0f, 0.0f, 0.0f, 14.36317f, 12.10584f, 4.473f, "Tumbleweed Horse Shop - m_volHorseShop");
		iLocal_221 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5510.71f, -3044.394f, -1.897282f, 0.0f, 0.0f, 0.0f, 4.170004f, 4.757886f, 3.852559f, "Tumbleweed Horse Shop - m_volHorseShopOutsideDoor");
		func_46(9, iLocal_221);
		VOLUME::_0xB469CFD9E065EB99(iLocal_220, 10109);
	}
	else
	{
		iLocal_220 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-5519.228f, -3044.427f, -1.40419f, 0.0f, 0.0f, 0.0f, 14.36317f, 12.10584f, 4.472662f, "Tumbleweed Horse Shop - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(iLocal_220, 10109);
	}
	iLocal_226 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Tumbleweed - JAIL");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_226, -5529.713f, -2927.539f, -1.328089f, 0.0f, 0.0f, 24.83998f, 6.747131f, 6.870256f, 6.016601f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_226, -5534.146f, -2922.72f, -1.771596f, 0.0f, 0.0f, 24.83998f, 10.62026f, 7.054735f, 6.016601f);
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_226, 5, 1);
	iLocal_234 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Tumbleweed - m_volGeneralWindowBlocking Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_234, -5493.421f, -2940.41f, 0.004f, 0.0f, 0.0f, 126.0f, 2.009f, 1.864f, 3.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_234, -5482.353f, -2931.596f, -0.675f, 0.0f, 0.0f, 126.0f, 3.034f, 1.23f, 3.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_234, -5480.939f, -2938.642f, -0.675f, 0.0f, 0.0f, -143.0f, 1.733f, 3.552f, 3.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_234, -5487.038f, -2942.457f, -0.675f, 0.0f, 0.0f, -143.0f, 1.5f, 2.219f, 3.0f);
	iLocal_235 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Tumbleweed - m_volGunsmithWindowBlocking Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_235, -5507.813f, -2960.458f, -1.20497f, 0.0f, 0.0f, 15f, 1.0f, 0.5f, 2.5f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_235, -5503.76f, -2966.969f, -0.981304f, 0.0f, 0.0f, -74.5f, 1.5f, 0.5f, 3.0f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_235, -5504.707f, -2963.481f, -0.981304f, 0.0f, 0.0f, -74.5f, 1.5f, 0.5f, 3.0f);
	return true;
}

void func_12(int iParam0)
{
	iParam0 = iParam0;
}

bool func_13(int iParam0)
{
	iParam0 = iParam0;
	return true;
}

void func_14(int iParam0)
{
	int iVar0[6];

	iParam0 = iParam0;
	if (func_20() == -1)
	{
		iVar0[0] = joaat("DOOR_TUM_02_JAIL_CELL");
		iVar0[1] = joaat("DOOR_TUM_02_JAIL_CELL");
		iVar0[2] = -1616977847;
		iVar0[3] = -1616977847;
		iVar0[4] = -1310161700;
		iVar0[5] = -1310161700;
		func_47(115, &iVar0, 6);
		func_48();
		func_49();
	}
}

bool func_15(int iParam0)
{
	if (func_20() == -1)
	{
		HUD::TEXT_BLOCK_REQUEST("SCTDAUD");
		if (!HUD::TEXT_BLOCK_IS_LOADED("SCTDAUD"))
		{
			return false;
		}
	}
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
}

bool func_17(int iParam0, int iParam1)
{
	return (Global_1897952[iParam0 /*2*/] & iParam1) != 0;
}

int func_18(int iParam0)
{
	return func_50(iParam0, -1, -1, 0);
}

void func_19(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] |= iParam1;
	}
	else
	{
		Global_1058888.f_40545[iParam0 /*11*/] |= iParam1;
	}
}

int func_20()
{
	return Global_1572887.f_12;
}

void func_21(int iParam0)
{
	iParam0 = iParam0;
}

void func_22()
{
}

bool func_23(int iParam0, bool bParam1)
{
	if (func_51(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_52(5000))
		{
			return true;
		}
	}
	switch (func_53(0))
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

void func_24()
{
	Vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_54(31, &vVar0, 1);
	func_55(&vVar0, 1, 1);
}

void func_25()
{
}

void func_26()
{
	func_56(-2077467, 1);
	func_56(223504277, 1);
	func_57(0, -5514.454f, -2910.941f, 0.196263f, iLocal_210, 115);
}

void func_27(int iParam0)
{
	func_58(6, 365, iLocal_211, iParam0, iLocal_213, iLocal_214, 20, -1082130432, 0, 0);
	func_59(6, 1880285656, 0, 0);
	func_60(6, iLocal_212);
	func_61(6, -5506.172f, -2957.387f, -2.65f, 76.3147f);
	func_58(3, 353, iLocal_215, iParam0, iLocal_216, iLocal_218, 12, -1082130432, 0, 0);
	func_59(3, -460561996, 0, 0);
	func_59(3, 687453229, 0, 0);
	func_60(3, iLocal_217);
	func_61(3, -5485.011f, -2930.324f, -2.1296f, 136.731f);
	func_58(10, 352, iLocal_223, iParam0, iLocal_224, 0, 460, -1082130432, 0, 0);
	func_62(iParam0);
	VOLUME::_0xB469CFD9E065EB99(iLocal_223, 10117);
	func_58(9, 347, iLocal_220, iParam0, 0, 0, 2, -1082130432, 0, 0);
	func_63(9, 1);
	func_63(9, (1 << 14));
	func_64(9, 1);
	func_59(9, joaat("TUM_BARN_INT_DOOR_01"), 1.0f, 1);
	func_59(9, joaat("TUM_BARN_INT_DOOR_02"), -1.0f, 1);
	func_59(9, 1024322021, 0, 0);
	func_59(9, 111672606, 0, 0);
}

void func_28(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	func_65(345, iLocal_222, 1);
	func_65(346, iLocal_222, 0);
	func_65(347, iLocal_225, 1);
	func_65(375, iLocal_225, 0);
	func_65(373, iLocal_225, 0);
	func_65(374, iLocal_225, 0);
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	func_66(0.8f, 0.2f, 0.0f, 0.0f);
}

void func_32()
{
	if (!Global_1894899.f_186)
	{
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1894899.f_182, Global_1894899.f_183, Global_1894899.f_184, Global_1894899.f_185);
	}
}

void func_33(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_34(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_67(uParam1, iLocal_209, 1);
}

void func_35(int iParam0)
{
	if (!func_68(iParam0))
	{
		return;
	}
	func_69();
}

bool func_36(int iParam0)
{
	return (Global_1894899 & iParam0) != 0;
}

void func_37(int iParam0)
{
	Global_1894899 -= (Global_1894899 & iParam0);
}

bool func_38(int iParam0)
{
	bool bVar0;

	if (func_20() == -1)
	{
		func_70(115);
		func_71();
		func_72();
		func_73(94, 372, iLocal_225, 5, &iLocal_208);
		bVar0 = func_74();
		if (!bVar0)
		{
			func_75();
		}
		func_76(iLocal_234);
		func_76(iLocal_235);
	}
	return false;
}

void func_39(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0.0f, 0.0f, 0.0f) <= 5.0f || func_77(Global_1935630, (1 << 14))) || func_77(Global_1935630, (1 << 23)))
	{
		return;
	}
	if (func_78(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_79();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME((*uParam0)[iVar3 /*3*/], Global_36))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_80(uParam0[iVar3 /*3*/], 1) && func_81(iParam1)) && !func_82(iParam1, 16))
							{
								func_84(iParam1, func_83(), -1, 0, -1, 0);
								func_85(uParam0[iVar3 /*3*/], 1);
							}
							func_86(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	if (func_20() == -1)
	{
		if (func_87() != bVar0)
		{
			iVar4 = 0;
			if (bVar0)
			{
				iVar4 = 2;
			}
			else
			{
				iVar4 = 1;
			}
			func_88();
			func_89(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	func_90(bVar0);
	if (func_20() == -1)
	{
		func_92((iParam1 == func_91() && bVar0));
	}
}

int func_40(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_41()
{
	var uVar0;
	var uVar1;
	float fVar2;
	int iVar3;

	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.75f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (func_93(iVar3))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_94();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_19(iLocal_239, (1 << 11));
		if (func_7(func_83()))
		{
			func_8(func_83(), 8);
		}
		func_95(iLocal_239, 4);
		func_95(iLocal_239, 8);
		func_90(0);
		if (func_20() == -1)
		{
			func_92(0);
		}
		func_96(iLocal_239);
		func_32();
		return false;
	}
	else
	{
		func_97(iLocal_239);
		func_98(iLocal_239);
		func_99(iLocal_239);
		if (!func_100(iLocal_239, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

bool func_43(int iParam0)
{
	if (!func_68(iParam0))
	{
		return false;
	}
	return func_101(iParam0, 8);
}

bool func_44(int iParam0)
{
	return (Global_1894899.f_7 & iParam0) != 0;
}

void func_45(int iParam0)
{
	Global_1894899.f_7 -= (Global_1894899.f_7 & iParam0);
}

void func_46(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_32 = iParam1;
}

void func_47(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = func_102(iParam0, iVar1);
			if (Global_40.f_9829[iVar0 /*4*/].f_1 != 0)
			{
				if (iVar2 != 0)
				{
					PERSCHAR::_0x8BC555034A5A5E8C(iVar2, Global_40.f_9829[iVar0 /*4*/].f_1);
				}
			}
			func_103(iVar0, (*iParam1)[iVar1]);
			func_104(iVar0);
			iVar1++;
		}
		iVar0++;
	}
	iVar3 = (iParam2 - iVar1);
	if (iVar3 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_9829)
		{
			if (Global_40.f_9829[iVar0 /*4*/] == -1)
			{
				Global_40.f_9829[iVar0 /*4*/] = iParam0;
				iVar2 = func_102(iParam0, iVar1);
				func_103(iVar0, (*iParam1)[iVar1]);
				func_104(iVar0);
				iVar1++;
				iVar3--;
				if (iVar3 <= 0)
				{
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_48()
{
	func_105();
}

void func_49()
{
	if (!VOLUME::DOES_VOLUME_EXIST(iLocal_219))
	{
		iLocal_219 = VOLUME::CREATE_VOLUME_BOX(-5514.326f, -2971.64f, 2.676027f, 0.0f, 0.0f, 14.88947f, 5.532164f, 5.257469f, 2.883436f);
	}
	func_106(16, -5514.267f, -2971.194f, 1.2343f, 0.0f, iLocal_219);
}

int func_50(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_68(iParam0))
	{
		return 1;
	}
	if (func_101(iParam0, 16))
	{
		return 1;
	}
	if (func_107(iParam0) && !func_108(iParam0))
	{
	}
	if (func_109(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_110(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_110(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_107(iParam0) || func_108(iParam0)) || func_111(Global_1897950))
			{
				func_112(Global_1897950, 0);
			}
			Global_1897950++;
			iVar2++;
			if (Global_1897950 > iVar1)
			{
				Global_1897950 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_51(int iParam0)
{
	return (Global_1935630 & iParam0) != 0;
}

bool func_52(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_53(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_54(int iParam0, var uParam1, int iParam2)
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
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400.0f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f /*3*/ };
			uParam1->f_8 = 80.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300.0f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f /*3*/ };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2.0f;
			return 1;
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
			return 1;
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
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 1.0f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200.0f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f /*3*/ };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
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
				return 1;
			}
			return 0;
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
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100.0f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return 1;
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
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150.0f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f /*3*/ };
			uParam1->f_8 = -45.0f;
			uParam1->f_9 = 2.5f;
			return 1;
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
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f /*3*/ };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2.0f;
			return 1;
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
				return 1;
			}
			return 0;
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
				return 1;
			}
			return 0;
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
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f /*3*/ };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
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
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f /*3*/ };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = BUILTIN::TO_FLOAT(Global_1900325.f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f /*3*/ };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f /*3*/ };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0.0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147.0f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500.0f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f /*3*/ };
			uParam1->f_8 = 60.0f;
			uParam1->f_9 = 2.5f;
			return 1;
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
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100.0f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500.0f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f /*3*/ };
			uParam1->f_8 = 0.0f;
			uParam1->f_9 = 2.5f;
			return 1;
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
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250.0f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f /*3*/ };
			uParam1->f_8 = -63.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200.0f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f /*3*/ };
			uParam1->f_8 = 90.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250.0f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f /*3*/ };
			uParam1->f_8 = 135.0f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_55(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return -1;
	}
	if (Global_1899528.f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_113())
	{
		return -1;
	}
	if (!func_114(uParam0->f_1))
	{
		return -1;
	}
	if (func_107(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_115(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_116(&iVar2))
		{
			return -1;
		}
	}
	func_117(*uParam0, iVar2);
	bVar1 = func_118(uParam0->f_1, (1 << 17));
	func_119(uParam0->f_1);
	iVar3 = func_120(uParam0->f_1, *uParam0);
	Global_1392915[iVar2 /*12*/] = *uParam0;
	Global_1392915[iVar2 /*12*/].f_1 = uParam0->f_1;
	Global_1392915[iVar2 /*12*/].f_2 = uParam0->f_2;
	Global_1392915[iVar2 /*12*/].f_3 = uParam0->f_3;
	Global_1392915[iVar2 /*12*/].f_4 = iVar3;
	Global_1392915[iVar2 /*12*/].f_5 = uParam0->f_9;
	Global_1392915[iVar2 /*12*/].f_6 = { uParam0->f_5 /*3*/ };
	Global_1392915[iVar2 /*12*/].f_9 = uParam0->f_8;
	Global_1392915[iVar2 /*12*/].f_10 = BUILTIN::FLOOR(uParam0->f_4);
	Global_1392915[iVar2 /*12*/].f_11 = iVar2;
	Global_1392915.f_121[iVar2 /*20*/] = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_2 = bParam1;
	Global_1392915.f_121[iVar2 /*20*/].f_17 = iParam2;
	Global_1392915.f_121[iVar2 /*20*/].f_1 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_6 = 0;
	Global_1392915.f_121[iVar2 /*20*/].f_12 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_5);
	Global_1392915.f_121[iVar2 /*20*/].f_16 = 0;
	if (Global_1392915.f_121[iVar2 /*20*/].f_12 != 0)
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { INTERIOR::_GET_INTERIOR_POSITION(Global_1392915.f_121[iVar2 /*20*/].f_12) /*3*/ };
	}
	else
	{
		Global_1392915.f_121[iVar2 /*20*/].f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	if (bParam1)
	{
		func_121(uParam0->f_1, (1 << 16));
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_121(uParam0->f_1, (1 << 21));
		}
	}
	if (bVar1)
	{
		func_121(uParam0->f_1, (1 << 17));
	}
	if (func_122(iVar3) || (!func_123(iVar3) && func_124(0) != iVar3))
	{
		iVar0 = func_125(iVar3);
		if (iVar0 == -1)
		{
			func_126(iVar3);
		}
	}
	return iVar2;
}

void func_56(int iParam0, int iParam1)
{
	func_127(iParam0, 1, 0, 0, 1, 0, 0, 0);
}

void func_57(int iParam0, Vector3 vParam1, int iParam4, int iParam5)
{
	if (func_128(vParam1))
	{
		return;
	}
	func_129(iParam0);
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { vParam1 /*3*/ };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = iParam4;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = func_130(iParam5, iParam0);
}

void func_58(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	if (iParam0 == 11)
	{
		return;
	}
	iVar0 = func_131(iParam3, iParam0);
	vVar1 = { func_132(iVar0) /*3*/ };
	vVar4 = { func_133(iVar0) /*3*/ };
	if (func_128(vVar1))
	{
		return;
	}
	if (!func_134(19, (1 << 14)))
	{
		if (!func_110(iParam1))
		{
			return;
		}
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_135(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 /*3*/ };
	if (func_128(vVar4))
	{
		Global_1914319.f_3[iParam0 /*446*/].f_11 = { vVar1 /*3*/ };
	}
	else
	{
		Global_1914319.f_15936[iVar0 /*6*/].f_2 = { vVar4 /*3*/ };
	}
	Global_1914319.f_3[iParam0 /*446*/].f_10 = iVar0;
	Global_1914319.f_3[iParam0 /*446*/].f_25 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_26 = iParam4;
	Global_1914319.f_3[iParam0 /*446*/].f_28 = iParam5;
	Global_1914319.f_3[iParam0 /*446*/].f_29 = iParam9;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_409 = iParam8;
	if (func_136(iVar0) | func_137(iVar0, iParam0))
	{
		switch (iVar0)
		{
			case 29:
				iVar7 = joaat("SHOP_RHO_GUNSMITH");
				break;
			case 61:
				iVar7 = joaat("SHOP_STR_GENERAL_STORE");
				break;
			case 73:
				iVar7 = joaat("SHOP_VAL_DOCTOR");
				break;
			case 43:
				iVar7 = joaat("SHOP_SDN_GUNSMITH");
				break;
			case 41:
				iVar7 = joaat("SHOP_SDN_FENCE");
				break;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_20 = func_138(5, Global_1914319.f_3[iParam0 /*446*/].f_10, 2, iVar7);
	}
	Global_1393529.f_114[iParam0 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1393529.f_220[iParam0] = 0.0f;
	Global_1393529.f_569[iParam0] = 0;
	strcpy_s(&(Global_1393529.f_288[iParam0 /*8*/]), 64, "");
	if (fParam7 <= 0.0f)
	{
		fParam7 = func_139(iParam0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_19 = fParam7;
	Global_1914319.f_3[iParam0 /*446*/].f_8 = iParam6;
	if (!func_140(iParam0, iParam1))
	{
	}
	switch (iParam0)
	{
		case 1:
		case 2:
			func_141(iParam3);
			break;
		case 10:
			func_62(iParam3);
			break;
		case 18:
			func_142();
			break;
		case 9:
			func_143();
			break;
		case 22:
			func_144();
			break;
	}
	func_145(Global_1914319.f_3[iParam0 /*446*/].f_10);
	func_146(iParam0, 16);
	func_147(iParam0, 4);
	VOLUME::_0x748C5F51A18CB8F0(1);
}

void func_59(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_148(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = iParam2;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = iParam3;
	Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1914319.f_3[iParam0 /*446*/].f_408++;
}

void func_60(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_30 = iParam1;
}

void func_61(int iParam0, Vector3 vParam1, float fParam4)
{
	Global_1393529.f_114[iParam0 /*3*/] = { vParam1 /*3*/ };
	Global_1393529.f_220[iParam0] = fParam4;
}

void func_62(int iParam0)
{
	if (iParam0 == 76)
	{
		strcpy_s(&(Global_1393529.f_288[10 /*8*/]), 64, "1025_U_M_M_ValButcher_01");
	}
	else if (iParam0 == 115)
	{
		strcpy_s(&(Global_1393529.f_288[10 /*8*/]), 64, "1086_U_M_M_TumButcher_01");
	}
	else
	{
		switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
		{
			case 0:
			case 3:
				strcpy_s(&(Global_1393529.f_288[10 /*8*/]), 64, "0842_S_M_M_UniButchers_01_WHITE_01");
				break;
			case 1:
			case 4:
				strcpy_s(&(Global_1393529.f_288[10 /*8*/]), 64, "0843_S_M_M_UniButchers_01_WHITE_02");
				break;
			case 2:
			case 5:
				strcpy_s(&(Global_1393529.f_288[10 /*8*/]), 64, "0844_S_M_M_UniButchers_01_WHITE_03");
				break;
		}
	}
}

void func_63(int iParam0, int iParam1)
{
	func_149(&(Global_1914319.f_3[iParam0 /*446*/].f_5), iParam1);
}

void func_64(int iParam0, int iParam1)
{
	func_149(&(Global_1914319.f_3[iParam0 /*446*/].f_6), iParam1);
}

int func_65(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_150(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(iParam1, iVar0, bParam2);
	return 1;
}

void func_66(float fParam0, float fParam1, float fParam2, float fParam3)
{
	Global_1894899.f_182 = fParam0;
	Global_1894899.f_183 = fParam1;
	Global_1894899.f_184 = fParam2;
	Global_1894899.f_185 = fParam3;
}

void func_67(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_152(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_68(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_69()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_153(iVar0))
		{
			Global_1898130[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_70(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_20() != -1)
	{
		return;
	}
	if (Global_1396116.f_139)
	{
		Global_1396116.f_140 = 1;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_9829)
	{
		if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
		{
			iVar2 = func_154(iParam0, iVar1);
			iVar3 = func_155(iVar2);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if (!func_156(iVar0, 2))
				{
					PED::SET_PED_CONFIG_FLAG(iVar3, 146 /*PCF_0x861831C4*/, true);
					func_157(iVar0, 2);
					func_158(iVar0, iVar1, iParam0);
				}
			}
			else
			{
				func_159(iVar0, 2);
				if (BUILTIN::VDIST(func_160(iVar2), Global_36) < 45.0f)
				{
					if (!Global_1396116.f_140)
					{
						if (func_161(iVar2, 0, 0, 0, 0, 0))
						{
							return;
						}
					}
				}
				else
				{
					Global_1396116.f_140 = 0;
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_71()
{
	if (!func_162(&uLocal_230))
	{
		func_163(&uLocal_230);
	}
	if (func_164(&uLocal_230, 0.25f))
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iLocal_228))
		{
			iLocal_228 = func_151(348);
			iLocal_229 = 0;
			bLocal_227 = false;
		}
		else if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iLocal_228))
		{
			iLocal_229 = 0;
			bLocal_227 = false;
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(iLocal_229))
		{
			iLocal_229 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iLocal_228);
			bLocal_227 = false;
		}
		else if (ENTITY::IS_ENTITY_DEAD(iLocal_229))
		{
			iLocal_229 = 0;
			bLocal_227 = false;
		}
		else if (!bLocal_227)
		{
			PED::_0xE1B3BE07D3AADDED(iLocal_229, 4, true);
			bLocal_227 = true;
		}
	}
}

void func_72()
{
	int iVar0;
	int iVar1;

	if ((MISC::GET_FRAME_COUNT() % 20) != 0)
	{
		return;
	}
	iVar0 = 354;
	iVar1 = func_155(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (bLocal_233)
		{
			bLocal_233 = false;
		}
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (((!bLocal_233 && !func_165(iVar0, 0)) && AUDIO::_0xBE28DB99556FF8D9(iVar1) != 0) && PED::IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
		{
			AUDIO::_0x8E901B65206C2D3E(iVar1);
			AUDIO::_0xB93A769B8B726950(iVar1, -1044357807);
			AUDIO::_0xC4CFCE4C656EF480(iVar1);
			bLocal_233 = true;
		}
		else if (bLocal_233 && !PED::IS_PED_USING_SCENARIO_HASH(iVar1, joaat("PROP_HUMAN_PIANO")))
		{
			bLocal_233 = false;
		}
	}
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return;
	}
	if (func_20() != -1)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	if (!func_110(iParam1))
	{
		return;
	}
	iVar0 = func_155(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (*iParam4)
		{
			iVar3 = ITEMSET::CREATE_ITEMSET(true);
			iVar1 = ENTITY::GET_MATCHING_ENTITIES(iParam2, iVar3, 1, 1, 0, 0);
			iVar4 = 0;
			while (iVar4 < iVar1)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar3);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				if (!func_166(iVar6))
				{
				}
				else if (func_167(iVar6))
				{
				}
				else if (func_168(iVar6))
				{
				}
				else
				{
					func_169(iVar6, iParam0);
					iVar2++;
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar3);
			if (iVar2 < iParam3)
			{
				*iParam4 = 1;
			}
			else
			{
				*iParam4 = 0;
			}
		}
	}
	else
	{
		*iParam4 = 1;
	}
}

bool func_74()
{
	return Global_1898164.f_163;
}

void func_75()
{
	func_170(&sLocal_117);
}

void func_76(int iParam0)
{
	if (func_171(iParam0, Global_36))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 2 /*PRF_0x38E08B64*/, true);
			PED::SET_PED_RESET_FLAG(Global_35, 21 /*PRF_DisableAutoVaulting*/, true);
			PED::SET_PED_RESET_FLAG(Global_35, 168 /*PRF_DisablePlayerClimbing*/, true);
		}
	}
}

bool func_77(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_78(var uParam0, int iParam1)
{
	return (uParam0->f_62 & iParam1) != 0;
}

bool func_79()
{
	return func_77(Global_1935630, (1 << 12));
}

bool func_80(var uParam0, int iParam1)
{
	return (uParam0->f_2 & iParam1) != 0;
}

bool func_81(int iParam0)
{
	if (!func_68(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_172(iParam0));
}

bool func_82(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1888801[iParam0 /*35*/].f_21 & iParam1) != 0;
}

int func_83()
{
	return Global_1897952.f_41;
}

void func_84(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_173())
	{
		return;
	}
	sVar1 = func_174(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_175(iParam4))
	{
		if (func_68(iParam0))
		{
			iParam4 = func_176(func_6(iParam0));
		}
		else
		{
			iParam4 = func_176(iParam1);
		}
	}
	if (func_175(iParam4))
	{
		iVar3 = func_177(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_179(func_178(iParam2));
	}
	else if ((func_180(iParam1, 2) || func_181(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((func_68(iParam0) && func_101(iParam0, (1 << 24))) && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = func_183(func_182());
		iVar5 = func_184(func_182());
		if (iVar5 < 10)
		{
			strcat_s(&cVar6, 8, "0");
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 -= 12;
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_185(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_186(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_186(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_185(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_186(&cVar6, joaat("COLOR_PURE_WHITE")), func_186(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = func_187(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_85(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_86(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_20() == 0)
	{
		return;
	}
	if (func_188(128))
	{
		return;
	}
	if (!func_189(iParam0))
	{
		return;
	}
	if (func_101(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_190(&Global_1935630, (1 << 13));
	func_192(func_191(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_192(func_191(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_192(func_191(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_192(func_191(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_192(func_191(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_192(func_191(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_192(func_191(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(1822876181);
			break;
		case 1:
			MAP::_MAP_DISCOVER_REGION(1092217275);
			break;
		case 2:
			MAP::_MAP_DISCOVER_REGION(1855549007);
			MAP::_MAP_DISCOVER_REGION(1542246539);
			break;
		case 6:
			MAP::_MAP_DISCOVER_REGION(-237206861);
			break;
		case 7:
			MAP::_MAP_DISCOVER_REGION(276890716);
			break;
		case 9:
			MAP::_MAP_DISCOVER_REGION(-353968602);
			break;
		case 10:
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			MAP::_MAP_DISCOVER_REGION(-1354901649);
			break;
		case 11:
			MAP::_MAP_DISCOVER_REGION(-496244122);
			break;
		case 12:
			MAP::_MAP_DISCOVER_REGION(-678676588);
			break;
		case 15:
			MAP::_MAP_DISCOVER_REGION(-732274047);
			break;
		case 16:
			MAP::_MAP_DISCOVER_REGION(-12216052);
			break;
		case 17:
			MAP::_MAP_DISCOVER_REGION(-1456731677);
			break;
		case 21:
			MAP::_MAP_DISCOVER_REGION(-2086563810);
			break;
		case 22:
			MAP::_MAP_DISCOVER_REGION(221661572);
			break;
		case 24:
			MAP::_MAP_DISCOVER_REGION(222265732);
			break;
		case 25:
			MAP::_MAP_DISCOVER_REGION(-1484929764);
			break;
		case 26:
			MAP::_MAP_DISCOVER_REGION(1104975149);
			break;
		case 27:
			MAP::_MAP_DISCOVER_REGION(235472255);
			break;
		case 28:
			MAP::_MAP_DISCOVER_REGION(-1337880478);
			break;
		case 29:
			MAP::_MAP_DISCOVER_REGION(-1813267128);
			break;
		case 30:
			MAP::_MAP_DISCOVER_REGION(-1941572412);
			break;
		case 31:
			MAP::_MAP_DISCOVER_REGION(1006072805);
			break;
		case 121:
			MAP::_MAP_DISCOVER_REGION(929640770);
			break;
		case 122:
			MAP::_MAP_DISCOVER_REGION(1603579970);
			break;
		case 124:
			MAP::_MAP_DISCOVER_REGION(-1332669948);
			break;
		case 123:
			MAP::_MAP_DISCOVER_REGION(-1807212021);
			break;
		case 34:
			MAP::_MAP_DISCOVER_REGION(-1347759053);
			break;
		case 36:
			MAP::_MAP_DISCOVER_REGION(-918096609);
			break;
		case 114:
			MAP::_MAP_DISCOVER_REGION(1728445882);
			break;
		case 37:
			MAP::_MAP_DISCOVER_REGION(-507075109);
			break;
		case 40:
			MAP::_MAP_DISCOVER_REGION(462373845);
			break;
		case 42:
			MAP::_MAP_DISCOVER_REGION(-1727895786);
			break;
		case 43:
			MAP::_MAP_DISCOVER_REGION(1826504111);
			break;
		case 44:
			MAP::_MAP_DISCOVER_REGION(1714554710);
			break;
		case 45:
			MAP::_MAP_DISCOVER_REGION(-91026072);
			break;
		case 54:
			MAP::_MAP_DISCOVER_REGION(893855320);
			break;
		case 55:
			MAP::_MAP_DISCOVER_REGION(326709244);
			break;
		case 49:
			MAP::_MAP_DISCOVER_REGION(653799702);
			break;
		case 62:
			MAP::_MAP_DISCOVER_REGION(415864829);
			break;
		case 64:
			MAP::_MAP_DISCOVER_REGION(-1836330842);
			break;
		case 65:
			MAP::_MAP_DISCOVER_REGION(648073069);
			break;
		case 66:
			MAP::_MAP_DISCOVER_REGION(770074951);
			break;
		case 68:
			MAP::_MAP_DISCOVER_REGION(-1276637644);
			break;
		case 71:
			MAP::_MAP_DISCOVER_REGION(-431488293);
			break;
		case 72:
			MAP::_MAP_DISCOVER_REGION(-1101810198);
			break;
		case 74:
			MAP::_MAP_DISCOVER_REGION(-1344767066);
			break;
		case 77:
			MAP::_MAP_DISCOVER_REGION(1472232821);
			break;
		case 79:
			MAP::_MAP_DISCOVER_REGION(-1368676121);
			break;
		case 63:
			MAP::_MAP_DISCOVER_REGION(-33677540);
			break;
		case 80:
			MAP::_MAP_DISCOVER_REGION(1602161184);
			MAP::_MAP_DISCOVER_REGION(-443207523);
			MAP::_MAP_DISCOVER_REGION(-683043834);
			break;
		case 82:
			MAP::_MAP_DISCOVER_REGION(147256338);
			MAP::_MAP_DISCOVER_REGION(-134804027);
			MAP::_MAP_DISCOVER_REGION(2027689141);
			break;
		case 83:
			MAP::_MAP_DISCOVER_REGION(-161135375);
			break;
		case 85:
			MAP::_MAP_DISCOVER_REGION(1625008147);
			break;
		case 86:
			MAP::_MAP_DISCOVER_REGION(121074776);
			break;
		case 87:
			MAP::_MAP_DISCOVER_REGION(1876184276);
			break;
		case 89:
			MAP::_MAP_DISCOVER_REGION(458479023);
			break;
		case 91:
			MAP::_MAP_DISCOVER_REGION(85299473);
			break;
		case 96:
			MAP::_MAP_DISCOVER_REGION(-1150244084);
			break;
		case 98:
			MAP::_MAP_DISCOVER_REGION(759314201);
			break;
		case 99:
			MAP::_MAP_DISCOVER_REGION(2063457042);
			break;
		case 100:
			MAP::_MAP_DISCOVER_REGION(1877776161);
			break;
		case 102:
			MAP::_MAP_DISCOVER_REGION(2143316225);
			break;
		case 104:
			MAP::_MAP_DISCOVER_REGION(-1623232489);
			MAP::_MAP_DISCOVER_REGION(-1393093729);
			break;
		case 106:
			MAP::_MAP_DISCOVER_REGION(1354284392);
			break;
		case 107:
			MAP::_MAP_DISCOVER_REGION(-1430883057);
			break;
		case 109:
			MAP::_MAP_DISCOVER_REGION(820139809);
			break;
		case 112:
			MAP::_MAP_DISCOVER_REGION(1561007383);
			MAP::_MAP_DISCOVER_REGION(-960425936);
			break;
	}
	if (bParam1)
	{
		func_19(iParam0, 64);
	}
}

bool func_87()
{
	return ((Global_1894899 & 1) != 0 && func_113() != -1);
}

void func_88()
{
	if (!func_193(Global_1327479))
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
	func_194(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_89(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_195() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_193(iVar1) && !func_196(iVar1, iParam2)) && (!bParam3 || !func_197(iVar1))) && (!bParam4 || !func_198(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_199(iVar0);
			}
		}
		iVar0++;
	}
}

void func_90(bool bParam0)
{
	bool bVar0;

	bVar0 = (Global_1894899 & 1) != false;
	if (bVar0 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		Global_1894899 |= 1;
		STATS::_0xDA26263C07CCE9C2(1);
	}
	else
	{
		Global_1894899 -= (Global_1894899 & 1);
		STATS::_0xDA26263C07CCE9C2(0);
	}
}

int func_91()
{
	return Global_40.f_4283.f_1;
}

void func_92(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 2;
	}
	else
	{
		Global_1894899 -= (Global_1894899 & 2);
	}
}

bool func_93(int iParam0)
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

void func_94()
{
}

void func_95(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= (Global_23118[iParam0 /*11*/] & iParam1);
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= (Global_1058888.f_40545[iParam0 /*11*/] & iParam1);
}

void func_96(int iParam0)
{
	func_66(0.775f, 0.2f, 0.025f, 0.0f);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_219))
	{
		VOLUME::DELETE_VOLUME(iLocal_219);
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("SCTDAUD"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("SCTDAUD"))
		{
			HUD::_TEXT_BLOCK_DELETE("SCTDAUD");
		}
	}
	func_200();
}

void func_97(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_129(iVar0);
		}
		iVar0++;
	}
}

void func_98(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319.f_3[iVar0 /*446*/].f_9 == iParam0)
		{
			func_135(iVar0);
		}
		iVar0++;
	}
}

void func_99(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_201(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_202(Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1]);
		Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_100(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return true;
	}
	if (!func_68(iParam0))
	{
		return true;
	}
	if (func_109(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950.f_1 < iVar0 || Global_1897950.f_1 > iVar1)
		{
			Global_1897950.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_203(Global_1897950.f_1, 16))
			{
				func_204(Global_1897950.f_1, 0);
			}
			Global_1897950.f_1++;
			iVar2++;
			if (Global_1897950.f_1 > iVar1)
			{
				Global_1897950.f_1 = -1;
				return true;
			}
			if (iVar2 >= 20 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_101(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

int func_102(int iParam0, int iParam1)
{
	return func_205(func_154(iParam0, iParam1));
}

void func_103(int iParam0, var uParam1)
{
	Global_1396116.f_98[iParam0 /*2*/] = uParam1;
}

void func_104(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 20)
	{
		return;
	}
	Global_1396116.f_98[iParam0 /*2*/].f_1 = func_182();
}

void func_105()
{
	var uVar0;
	var uVar6;

	uVar0 = 5;
	func_206(&sLocal_117, 365, &uVar0, 0, 0);
	sLocal_117[0 /*45*/].f_43 = 34276;
	sLocal_117[0 /*45*/].f_44 = 34555;
	func_209(&(sLocal_117[0 /*45*/]), (1 << 9));
	uVar6 = 5;
	func_206(&sLocal_117, 353, &uVar6, 1, 0);
	sLocal_117[1 /*45*/].f_43 = 34619;
	sLocal_117[1 /*45*/].f_44 = 34555;
	func_209(&(sLocal_117[1 /*45*/]), (1 << 9));
}

void func_106(int iParam0, Vector3 vParam1, float fParam4, int iParam5)
{
	if (!func_211(iParam0))
	{
		return;
	}
	if (func_128(vParam1))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/].f_15 = { vParam1 /*3*/ };
	Global_1395601.f_5[iParam0 /*28*/].f_18 = fParam4;
	Global_1395601.f_5[iParam0 /*28*/].f_23 = iParam5;
	if (VOLUME::DOES_VOLUME_EXIST(iParam5))
	{
	}
	if (!func_212(242, 1, 1))
	{
		func_213(iParam0, 1);
	}
	func_214(iParam0);
	func_215(iParam0, 1);
	Global_40.f_9384[iParam0 /*2*/].f_1 = func_182();
}

bool func_107(int iParam0)
{
	if (!func_68(iParam0))
	{
		return false;
	}
	return func_101(iParam0, (1 << 25));
}

bool func_108(int iParam0)
{
	if (!func_68(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 32:
			return true;
		case 35:
			return true;
		case 65:
			return true;
		case 95:
			return true;
	}
	return false;
}

bool func_109(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_20() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
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
			*iParam1 = 69;
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
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
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
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
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
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
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
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_110(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_111(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_112(int iParam0, bool bParam1)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	if (!func_203(iParam0, 2))
	{
		return 0;
	}
	if (func_203(iParam0, 32) && !bParam1)
	{
		func_216(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_205(iParam0)));
		if (func_20() == -1)
		{
			if (func_203(iParam0, (1 << 11)))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_151(iParam0));
				func_217(iParam0, (1 << 11));
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_151(iParam0));
		}
		return 0;
	}
	if (!func_218(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_151(iParam0)))
	{
		func_217(iParam0, 128);
		return 1;
	}
	func_216(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_205(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_151(iParam0));
	if (func_203(iParam0, (1 << 11)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_151(iParam0));
		func_217(iParam0, (1 << 11));
	}
	return 1;
}

int func_113()
{
	return Global_1894899.f_2;
}

bool func_114(int iParam0)
{
	if (!func_219(iParam0))
	{
		return false;
	}
	return (!func_220() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

int func_115(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

bool func_116(int iParam0)
{
	int iVar0;

	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1392915)
	{
		if (func_221(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_117(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528.f_11[iParam0] = iParam1;
}

bool func_118(int iParam0, int iParam1)
{
	return (Global_1899528.f_3[iParam0] & iParam1) != 0;
}

void func_119(int iParam0)
{
	Global_1899528.f_3[iParam0] = 0;
}

int func_120(int iParam0, int iParam1)
{
	return func_138(iParam0, iParam1, 4, MISC::GET_HASH_KEY(func_222(iParam1)));
}

void func_121(int iParam0, int iParam1)
{
	if (!func_118(iParam0, iParam1))
	{
	}
	Global_1899528.f_3[iParam0] |= iParam1;
}

bool func_122(int iParam0)
{
	return func_223(iParam0) == 0;
}

bool func_123(int iParam0)
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
		iVar0 = func_224(iParam0);
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

int func_124(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_125(int iParam0)
{
	int iVar0;

	if (Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> /*48*/ sVar3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_122(iParam0))
	{
		return -1;
	}
	if (func_20() != -1)
	{
		iVar2 = func_125(iParam0);
		if (iVar2 >= 0)
		{
			func_225(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { sVar3 /*6*/ };
			func_226(iVar1, 1);
			func_225(iParam0, 1);
			Global_1898329++;
			if (Global_1898329 > 15)
			{
				Global_1898329 = 15;
			}
			return iVar1;
		}
	}
	else
	{
		iVar2 = func_125(iParam0);
		if (iVar2 >= 0)
		{
			func_225(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_227(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { sVar3 /*6*/ };
					func_226(iVar0, 1);
					func_225(iParam0, 1);
					Global_1898329++;
					if (Global_1898329 > 15)
					{
						Global_1898329 = 15;
					}
					return iVar0;
				}
				iVar0++;
			}
		}
	}
	return -1;
}

void func_127(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_228(iParam0, 0, 0);
	if (func_229(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_230(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_231(iParam0, 1);
			}
			else
			{
				func_232(iParam0, 1);
			}
		}
		else
		{
			func_233(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_234())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_128(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_129(int iParam0)
{
	func_235(Global_1935369.f_5[iParam0 /*11*/].f_6, 1);
	func_236(Global_1935369.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1935369.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1935369.f_5[iParam0 /*11*/].f_8);
		Global_1935369.f_5[iParam0 /*11*/].f_8 = 0;
	}
	func_237(iParam0, (1 << 13));
	func_237(iParam0, (1 << 14));
	func_237(iParam0, (1 << 15));
	func_237(iParam0, (1 << 17));
	func_237(iParam0, (1 << 24));
	func_237(iParam0, (1 << 19));
	func_237(iParam0, (1 << 20));
	Global_1935369.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1935369.f_5[Global_1935369 /*11*/].f_9 = 0;
	Global_1935369.f_5[iParam0 /*11*/] = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_7 = 0;
}

int func_130(int iParam0, int iParam1)
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

int func_131(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 101;
	}
	else if (iParam1 == 32)
	{
		return 126;
	}
	else if (iParam1 == 34)
	{
		return 127;
	}
	switch (iParam0)
	{
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
				case 6:
					return 130;
				case 27:
					return 131;
				case 26:
					return 129;
				case 19:
					return 59;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 15:
					return 6;
				case 33:
					return 11;
				case 29:
					return 106;
				case 30:
					return 107;
				case 3:
					return 7;
				case 8:
					return 9;
				case 10:
					return 10;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 31:
					return 108;
				case 22:
					return 16;
				case 7:
					return 17;
				case 21:
					return 12;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
				case 6:
					return 134;
				case 27:
					return 135;
				case 26:
					return 133;
				case 19:
					return 57;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 4:
					return 18;
				case 3:
					return 19;
				case 2:
					return 20;
				case 1:
					return 21;
				case 31:
					return 105;
				default:
					break;
			}
			break;
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
				case 6:
					return 139;
				case 27:
					return 140;
				case 26:
					return 138;
				case 19:
					return 56;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
				case 6:
					return 143;
				case 27:
					return 144;
				case 26:
					return 142;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 15:
					return 36;
				case 8:
					return 37;
				case 33:
					return 52;
				case 29:
					return 109;
				case 10:
					return 38;
				case 30:
					return 110;
				case 0:
					return 39;
				case 4:
					return 41;
				case 3:
					return 42;
				case 6:
					return 43;
				case 9:
					return 44;
				case 2:
					return 45;
				case 1:
					return 46;
				case 31:
					return 111;
				case 22:
					return 51;
				case 7:
					return 47;
				case 12:
					return 48;
				case 13:
					return 49;
				case 14:
					return 50;
				case 18:
					return 55;
				case 21:
					return 54;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 15:
					return 25;
				case 33:
					return 33;
				case 29:
					return 112;
				case 10:
					return 26;
				case 4:
					return 27;
				case 3:
					return 28;
				case 6:
					return 29;
				case 2:
					return 30;
				case 31:
					return 113;
				case 22:
					return 32;
				case 1:
					return 31;
				default:
					break;
			}
			break;
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
				case 26:
					return 146;
				case 6:
					return 147;
				case 27:
					return 148;
				case 19:
					return 58;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 29:
					return 114;
				case 33:
					return 66;
				case 10:
					return 60;
				case 3:
					return 61;
				case 20:
					return 62;
				case 9:
					return 63;
				case 31:
					return 115;
				case 22:
					return 64;
				case 2:
					return 65;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 15:
					return 68;
				case 8:
					return 69;
				case 33:
					return 70;
				case 29:
					return 102;
				case 10:
					return 72;
				case 30:
					return 103;
				case 0:
					return 73;
				case 3:
					return 74;
				case 6:
					return 75;
				case 9:
					return 76;
				case 2:
					return 77;
				case 31:
					return 104;
				case 1:
					return 78;
				case 22:
					return 80;
				case 20:
					return 79;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 30:
					return 116;
				case 4:
					return 82;
				case 2:
					return 86;
				case 1:
					return 85;
				case 31:
					return 117;
				case 9:
					return 84;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 29:
					return 120;
				case 6:
					return 0;
				case 2:
					return 2;
				case 31:
					return 121;
				case 22:
					return 1;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 90:
		case 128:
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 89;
				case 1:
					return 88;
				case 3:
					return 87;
				default:
					break;
			}
			break;
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			break;
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			break;
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 33:
					return 93;
				case 3:
					return 90;
				case 6:
					return 91;
				case 9:
					return 94;
				case 10:
					return 92;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			break;
		case 117:
			switch (iParam1)
			{
				case 31:
					return 123;
				case 2:
					return 99;
				case 1:
					return 100;
				default:
					break;
			}
			break;
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			break;
	}
	return -1;
}

Vector3 func_132(int iParam0)
{
	if (!func_238(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	switch (iParam0)
	{
		case 0:
			return { 2947.055f, 1320.15f, 43.8203f };
		case 2:
			return { 2939.063f, 1287.116f, 43.6529f };
		case 3:
			return { 2932.97f, 1282.56f, 43.67f };
		case 1:
			return { 2947.64f, 1344.901f, 43.899f };
		case 99:
			return { -5227.357f, -3470.067f, -20.49293f };
		case 100:
			return { -5228.75f, -3468.28f, -21.57f };
		case 7:
			return { -784.49f, -1321.95f, 42.88f };
		case 10:
			return { -753.4219f, -1284.24f, 43.20049f };
		case 9:
			return { -814.4116f, -1367.243f, 43.7509f };
		case 13:
			return { -868.3356f, -1366.207f, 44.75311f };
		case 14:
			return { -875.03f, -1327.09f, 42.97f };
		case 15:
			return { -875.02f, -1326.71f, 42.97f };
		case 17:
			return { -762.0716f, -1293.549f, 42.8355f };
		case 12:
			return { -813.6f, -1373.8f, 44.2f };
		case 16:
			return { -805.72f, -1330.5f, 42.67f };
		case 18:
			return { 1417.288f, 273.5687f, 88.4881f };
		case 20:
			return { 1521.91f, 441.15f, 89.68f };
		case 21:
			return { 1523.63f, 442.65f, 89.68f };
		case 22:
			return { 2161.5f, -618.5f, 43.0f };
		case 23:
			return { -1092.88f, -575.69f, 81.41f };
		case 24:
			return { -1094.35f, -577.48f, 81.41f };
		case 25:
			return { 1294.084f, -1303.102f, 76.0418f };
		case 26:
			return { 1297.423f, -1278.412f, 75.65752f };
		case 27:
			return { 1319.43f, -1142.08f, 81.41f };
		case 28:
			return { 1329.755f, -1294.218f, 76.0092f };
		case 29:
			return { 1323.734f, -1321.775f, 77.8924f };
		case 30:
			return { 1226.71f, -1295.08f, 75.9f };
		case 31:
			return { 1230.34f, -1298.578f, 75.9027f };
		case 32:
			return { 1332.55f, -1298.679f, 75.35602f };
		case 35:
			return { 1209.053f, -193.1814f, 101.9785f };
		case 36:
			return { 2644.188f, -1292.507f, 51.2496f };
		case 37:
			return { 2657.466f, -1180.96f, 53.2785f };
		case 38:
			return { 2819.495f, -1331.29f, 45.514f };
		case 39:
			return { 2721.24f, -1231.66f, 49.37f };
		case 41:
			return { 2859.51f, -1202.16f, 48.59f };
		case 42:
			return { 2825.607f, -1318.207f, 45.7557f };
		case 43:
			return { 2718.0f, -1287.0f, 49.6f };
		case 44:
			return { 2508.212f, -1449.654f, 48.41523f };
		case 45:
			return { 2748.811f, -1398.277f, 45.18309f };
		case 46:
			return { 2747.824f, -1396.384f, 45.18309f };
		case 47:
			return { 2555.09f, -1166.97f, 52.68f };
		case 48:
			return { 2842.45f, -1227.66f, 46.66f };
		case 49:
			return { 2817.64f, -1325.011f, 47.00512f };
		case 50:
			return { 2836.992f, -1305.805f, 45.6964f };
		case 55:
			return { 2832.02f, -1225.563f, 46.6422f };
		case 54:
			return { 2734.174f, -1119.755f, 50.10792f };
		case 51:
			return { 2683.84f, -1399.642f, 45.37881f };
		case 60:
			return { -1753.404f, -392.557f, 155.2576f };
		case 61:
			return { -1790.0f, -388.27f, 159.33f };
		case 62:
			return { -1818.99f, -370.94f, 162.3f };
		case 63:
			return { -1819.88f, -561.8194f, 157.2323f };
		case 65:
			return { -1763.78f, -385.1118f, 156.7401f };
		case 64:
			return { -1773.314f, -393.9122f, 155.5647f };
		case 68:
			return { -307.9643f, 773.6048f, 117.7031f };
		case 69:
			return { -306.3f, 815.08f, 117.98f };
		case 70:
			return { 0.0f, 0.0f, 0.0f };
		case 72:
			return { -338.8647f, 767.4334f, 115.5628f };
		case 73:
			return { -287.9538f, 804.0544f, 118.3859f };
		case 74:
			return { -324.0f, 803.72f, 116.88f };
		case 75:
			return { -281.82f, 778.97f, 118.5f };
		case 76:
			return { -369.4457f, 786.6935f, 115.9904f };
		case 77:
			return { -178.0316f, 628.0621f, 113.0896f };
		case 78:
			return { -175.0377f, 631.7999f, 113.0896f };
		case 80:
			return { -272.7182f, 785.6115f, 117.4202f };
		case 79:
			return { -325.532f, 773.6285f, 117.5038f };
		case 82:
			return { 3025.786f, 562.7253f, 43.7167f };
		case 86:
			return { 2986.224f, 569.9468f, 43.62284f };
		case 85:
			return { 2986.94f, 574.9f, 43.64f };
		case 84:
			return { 2967.273f, 796.7416f, 52.5948f };
		case 87:
			return { -1302.951f, 394.6608f, 94.3817f };
		case 89:
			return { -1300.83f, 399.7599f, 94.38248f };
		case 88:
			return { -1299.891f, 401.3615f, 94.38248f };
		case 93:
			return { -5518.071f, -2906.217f, -2.7513f };
		case 90:
			return { -5487.197f, -2939.038f, -1.3872f };
		case 91:
			return { -5507.993f, -2964.844f, -1.6215f };
		case 92:
			return { -5509.019f, -2947.435f, -2.8934f };
		case 94:
			return { -5520.701f, -3044.427f, -1.40419f };
		case 95:
			return { -3687.3f, -2623.39f, -14.44f };
		case 4:
			return { -2842.211f, 137.3398f, 183.8268f };
		case 5:
			return { -1005.934f, -540.8262f, 97.9502f };
		case 34:
			return { 2076.835f, 1000.829f, 111.4973f };
		case 67:
			return { -2251.034f, -1916.911f, 115.9488f };
		case 56:
			return { -142.072f, -23.5242f, 95.0883f };
		case 57:
			return { 675.3091f, -1251.233f, 43.0152f };
		case 58:
			return { 1875.2f, -1859.182f, 41.8f };
		case 59:
			return { 2366.084f, 1347.122f, 105.1305f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_133(int iParam0)
{
	if (!func_238(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	switch (iParam0)
	{
		case 0:
			return { 2941.929f, 1320.927f, 46.2401f };
		case 2:
			return { 2936.9f, 1281.7f, 43.6529f };
		case 3:
			return { 2931.596f, 1282.839f, 44.6783f };
		case 99:
			return { -5227.45f, -3468.19f, -20.49293f };
		case 100:
			return { -5228.75f, -3468.28f, -21.57f };
		case 10:
			return { -753.4219f, -1285.01f, 43.20049f };
		case 7:
			return { -785.1682f, -1324.179f, 46.3505f };
		case 9:
			return { -814.4116f, -1367.243f, 43.7509f };
		case 13:
			return { -868.3356f, -1366.207f, 44.75311f };
		case 14:
			return { -875.0186f, -1328.058f, 44.00846f };
		case 17:
			return { -764.2743f, -1292.576f, 44.3442f };
		case 12:
			return { -813.7f, -1374.1f, 44.2f };
		case 18:
			return { 1417.288f, 273.5687f, 88.4881f };
		case 20:
			return { 1522.305f, 442.8598f, 89.6785f };
		case 21:
			return { 1525.407f, 442.7721f, 90.6467f };
		case 22:
			return { 2161.5f, -618.5f, 43.0f };
		case 23:
			return { -1092.88f, -575.69f, 81.41f };
		case 24:
			return { -1094.41f, -577.51f, 81.41f };
		case 25:
			return { 1294.084f, -1303.102f, 76.0418f };
		case 26:
			return { 1297.423f, -1278.412f, 75.65752f };
		case 27:
			return { 1319.43f, -1142.08f, 81.41f };
		case 28:
			return { 1327.036f, -1292.386f, 77.2488f };
		case 29:
			return { 1326.268f, -1323.129f, 78.1929f };
		case 30:
			return { 1228.508f, -1296.796f, 77.6347f };
		case 31:
			return { 1232.206f, -1300.197f, 77.8496f };
		case 35:
			return { 1209.053f, -193.1814f, 101.9785f };
		case 37:
			return { 2657.466f, -1180.96f, 53.2785f };
		case 38:
			return { 2819.495f, -1331.29f, 45.514f };
		case 39:
			return { 2721.24f, -1231.66f, 49.37f };
		case 41:
			return { 2851.2f, -1202.3f, 49.046f };
		case 42:
			return { 2828.087f, -1315.179f, 47.4196f };
		case 43:
			return { 2714.586f, -1286.893f, 50.3211f };
		case 44:
			return { 2508.212f, -1449.654f, 48.41523f };
		case 45:
			return { 2747.906f, -1397.089f, 47.1107f };
		case 46:
			return { 2746.599f, -1394.278f, 46.918f };
		case 47:
			return { 2554.144f, -1166.025f, 54.3474f };
		case 48:
			return { 2842.45f, -1227.66f, 46.66f };
		case 49:
			return { 2817.64f, -1325.011f, 47.00512f };
		case 50:
			return { 2836.992f, -1305.805f, 45.6964f };
		case 55:
			return { 2832.02f, -1225.563f, 46.6422f };
		case 54:
			return { 2734.174f, -1119.755f, 50.10792f };
		case 60:
			return { -1753.404f, -392.557f, 155.2576f };
		case 61:
			return { -1792.444f, -385.412f, 160.6924f };
		case 62:
			return { -1812.343f, -370.618f, 161.8814f };
		case 63:
			return { -1819.88f, -561.8194f, 157.2323f };
		case 65:
			return { -1763.78f, -385.1118f, 156.7401f };
		case 68:
			return { -307.9643f, 773.6048f, 117.7031f };
		case 69:
			return { -308.18f, 812.19f, 117.99f };
		case 70:
			return { 0.0f, 0.0f, 0.0f };
		case 72:
			return { -338.8647f, 767.4334f, 115.5628f };
		case 73:
			return { -286.9307f, 809.6714f, 120.6565f };
		case 74:
			return { -323.5066f, 799.6924f, 118.973f };
		case 75:
			return { -279.273f, 781.7448f, 118.7954f };
		case 76:
			return { -369.4457f, 786.6935f, 115.9904f };
		case 77:
			return { -176.3f, 630.1f, 115.331f };
		case 78:
			return { -174.0662f, 633.9207f, 115.109f };
		case 80:
			return { -272.7182f, 785.6115f, 117.4202f };
		case 79:
			return { -326.1232f, 771.9214f, 116.436f };
		case 1:
			return { 2947.64f, 1344.901f, 43.899f };
		case 51:
			return { 2683.84f, -1399.642f, 45.37881f };
		case 16:
			return { -805.72f, -1330.5f, 42.67f };
		case 64:
			return { -1773.314f, -393.9122f, 155.5647f };
		case 32:
			return { 1332.55f, -1298.679f, 75.35602f };
		case 82:
			return { 3023.859f, 561.206f, 46.7352f };
		case 86:
			return { 2986.003f, 567.9055f, 45.337f };
		case 84:
			return { 2967.273f, 796.7416f, 52.5948f };
		case 87:
			return { -1302.951f, 394.6608f, 94.3817f };
		case 89:
			return { -1300.283f, 400.4247f, 94.3817f };
		case 88:
			return { -1299.608f, 401.5503f, 94.97269f };
		case 93:
			return { -5518.071f, -2906.217f, -2.7513f };
		case 90:
			return { -5488.293f, -2937.662f, 0.6299f };
		case 91:
			return { -5506.691f, -2968.343f, -1.2586f };
		case 92:
			return { -5509.019f, -2947.435f, -2.8934f };
		case 94:
			return { -5520.701f, -3044.427f, -1.40419f };
		case 95:
			return { -3684.342f, -2626.877f, -12.5497f };
		case 4:
			return { -2842.211f, 137.3398f, 183.8268f };
		case 5:
			return { -1005.934f, -540.8262f, 97.9502f };
		case 34:
			return { 2076.835f, 1000.829f, 111.4973f };
		case 67:
			return { -2251.034f, -1916.911f, 115.9488f };
		case 56:
			return { -142.072f, -23.5242f, 95.0883f };
		case 57:
			return { 675.3091f, -1251.233f, 43.0152f };
		case 58:
			return { 1875.2f, -1859.182f, 41.8f };
		case 59:
			return { 2366.084f, 1347.122f, 105.1305f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_134(int iParam0, int iParam1)
{
	return func_239(Global_1914319.f_3[iParam0 /*446*/].f_5, iParam1);
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_110(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_240(Global_1914319.f_3[iParam0 /*446*/].f_21))
	{
		func_241(Global_1914319.f_3[iParam0 /*446*/].f_21, 0, 1, 0, 0);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_11 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1914319.f_3[iParam0 /*446*/].f_21 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_22 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_17 = 0;
	Global_1914319.f_3[iParam0 /*446*/].f_1 = 0;
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1914319.f_3[iParam0 /*446*/].f_34))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1914319.f_3[iParam0 /*446*/].f_34, false);
	}
	func_242(Global_1914319.f_3[iParam0 /*446*/].f_10, 0);
	func_146(iParam0, (1 << 29));
	iVar1 = func_148(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_202(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/]);
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/] = 0;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_4 = 0.0f;
			Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	if (Global_1914319.f_3[iParam0 /*446*/].f_440 != 0)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1914319.f_3[iParam0 /*446*/].f_440, false);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_23 = 0;
	func_243(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_244(iParam0, 0);
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 43:
		case 61:
		case 73:
			return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)
{
	if (iParam1 > 25)
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1:
		case 1:
		case 2:
		case 5:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
			return 0;
		case 4:
			if (iParam0 == 41)
			{
				return 1;
			}
			return 0;
		default:
			break;
	}
	return 1;
}

int func_138(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_245())
	{
		iVar2 = func_245();
	}
	iVar5 = func_246(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_247(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_247(iVar6) == 0)
			{
				return func_248(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_247(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_247(iVar6) == 0)
			{
				return func_248(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_248(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

float func_139(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 75.0f;
		case 9:
			return 25.0f;
		case 10:
			return 25.0f;
		case 22:
			return 55.0f;
	}
	return 12.5f;
}

bool func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_134(iParam0, (1 << 14)) && !func_249(iParam0, 1))
	{
		return true;
	}
	if (!func_110(iParam1))
	{
		return false;
	}
	iVar0 = func_155(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_25);
			}
		}
		func_65(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_25, 1, 1);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_28);
			}
		}
		func_65(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_28, 0, 1);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_21 = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_23 = iVar0;
	return true;
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 92:
			strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0507_U_M_M_VhtStationClerk_01");
			strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0507_U_M_M_VhtStationClerk_01");
			return;
		case 38:
			strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0078_U_M_M_BlWTrainStationWorker_01");
			strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0078_U_M_M_BlWTrainStationWorker_01");
			return;
		case 26:
			strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0442_U_M_M_StrFreightStationOwner_01");
			strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0442_U_M_M_StrFreightStationOwner_01");
			return;
		case 105:
			strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0406_U_M_M_RhdTrainStationWorker_01");
			strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0406_U_M_M_RhdTrainStationWorker_01");
			return;
		case 76:
			if (!func_250(29))
			{
				if (func_251(29) && func_252() <= func_253(29))
				{
					strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0834_S_M_M_TrainStationWorker_01_WHITE_03");
					strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0834_S_M_M_TrainStationWorker_01_WHITE_03");
					return;
				}
			}
			if (!func_250(3))
			{
				if (func_251(3) && func_252() <= func_253(3))
				{
					strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0834_S_M_M_TrainStationWorker_01_WHITE_03");
					strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0834_S_M_M_TrainStationWorker_01_WHITE_03");
					return;
				}
			}
			if (!func_250(25))
			{
				if (func_251(25) && func_252() <= func_253(25))
				{
					strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0833_S_M_M_TrainStationWorker_01_WHITE_02");
					strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0833_S_M_M_TrainStationWorker_01_WHITE_02");
					return;
				}
			}
			break;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0833_S_M_M_TrainStationWorker_01_WHITE_02");
		strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0833_S_M_M_TrainStationWorker_01_WHITE_02");
	}
	else if (iVar1 < 40)
	{
		strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0834_S_M_M_TrainStationWorker_01_WHITE_03");
		strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0834_S_M_M_TrainStationWorker_01_WHITE_03");
	}
	else
	{
		strcpy_s(&(Global_1393529.f_288[2 /*8*/]), 64, "0832_S_M_M_TrainStationWorker_01_WHITE_01");
		strcpy_s(&(Global_1393529.f_288[1 /*8*/]), 64, "0832_S_M_M_TrainStationWorker_01_WHITE_01");
	}
}

void func_142()
{
	strcpy_s(&(Global_1393529.f_288[18 /*8*/]), 64, "1035_U_M_M_SDCUSTOMVENDOR_01");
}

void func_143()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(100, 200);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
	if (iVar1 > 80)
	{
		strcpy_s(&(Global_1393529.f_288[9 /*8*/]), 64, "0825_S_M_M_LiveryWorker_01_WHITE_01");
	}
	else if (iVar1 < 40)
	{
		strcpy_s(&(Global_1393529.f_288[9 /*8*/]), 64, "0826_S_M_M_LiveryWorker_01_WHITE_02");
	}
	else
	{
		strcpy_s(&(Global_1393529.f_288[9 /*8*/]), 64, "0827_S_M_M_LiveryWorker_01_WHITE_03");
	}
}

void func_144()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
		case 3:
			strcpy_s(&(Global_1393529.f_288[22 /*8*/]), 64, "0829_S_M_Y_NewspaperBoy_01_WHITE_01");
			break;
		case 1:
		case 4:
			strcpy_s(&(Global_1393529.f_288[22 /*8*/]), 64, "0830_S_M_Y_NewspaperBoy_01_WHITE_02");
			break;
		case 2:
		case 5:
			strcpy_s(&(Global_1393529.f_288[22 /*8*/]), 64, "0831_S_M_Y_NewspaperBoy_01_WHITE_03");
			break;
	}
}

void func_145(int iParam0)
{
	if (!func_238(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 4:
		case 5:
		case 18:
		case 22:
		case 27:
		case 34:
		case 38:
		case 55:
		case 60:
		case 67:
		case 72:
		case 92:
			if (!func_254(iParam0, 2))
			{
				func_255(iParam0, 2);
			}
			break;
	}
}

void func_146(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 -= (Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1);
}

void func_147(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 |= iParam1;
}

int func_148(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_149(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_150(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_110(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_151(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_155(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_151(iParam0));
}

int func_151(int iParam0)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_152(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_153(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = -1;
	switch (iParam0)
	{
		case 76:
			switch (iParam1)
			{
				case 0:
					iVar0 = 25;
					break;
				case 1:
					iVar0 = 26;
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 0:
					iVar0 = 499;
					break;
				case 1:
					iVar0 = 500;
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 0:
					iVar0 = 127;
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 0:
					iVar0 = 430;
					break;
				case 1:
					iVar0 = 431;
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					iVar0 = 281;
					break;
				case 1:
					iVar0 = 282;
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 0:
					iVar0 = 511;
					break;
				case 1:
					iVar0 = (1 << 9);
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 0:
					iVar0 = 364;
					break;
				case 1:
					iVar0 = 363;
					break;
				case 2:
					iVar0 = 362;
					break;
				case 3:
					iVar0 = 361;
					break;
				case 4:
					iVar0 = 360;
					break;
				case 5:
					iVar0 = 359;
					break;
			}
			break;
	}
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

int func_155(int iParam0)
{
	int iVar0;

	iVar0 = func_151(iParam0);
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

bool func_156(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return false;
	}
	return func_239(Global_40.f_9829[iParam0 /*4*/].f_2, iParam1);
}

void func_157(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_149(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

void func_158(int iParam0, int iParam1, int iParam2)
{
	struct<10> /*80*/ sVar0;
	struct<16> /*128*/ sVar10;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar10 = { sVar0 /*10*/ };
	strcpy_s(&(sVar10.f_10), 32, func_257(iParam0, iParam1));
	sVar10.f_14 = (1 << 10);
	sVar10.f_15 = 1;
	func_258(sVar10, 0);
}

void func_159(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	func_259(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

Vector3 func_160(int iParam0)
{
	if (!func_110(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_151(iParam0)))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return PERSCHAR::_0x5EE6FCCC9C832CA2(func_151(iParam0));
}

bool func_161(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Vector3 vVar0;
	int iVar3;

	if (!func_110(iParam0))
	{
		return false;
	}
	if (!func_260(func_205(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_151(iParam0)))
	{
		func_112(iParam0, 0);
		return false;
	}
	vVar0 = { iParam2, iParam3, iParam4 /*3*/ };
	if (!func_150(iParam0, 0))
	{
		if (bParam1)
		{
			if (!func_261(iParam0))
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	if (!func_128(vVar0))
	{
		PERSCHAR::_0x59C7AD6FEA2AC449(func_151(iParam0), vVar0);
	}
	if (bParam5)
	{
		iVar3 = PERSCHAR::_0x08FC896D2CB31FCC(func_151(iParam0), false);
	}
	else
	{
		iVar3 = PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_151(iParam0), false);
	}
	if (!func_128(vVar0))
	{
		PERSCHAR::_0xBB68908CD11AEBDC(func_151(iParam0));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return true;
	}
	return false;
}

bool func_162(var uParam0)
{
	return func_262(*uParam0, 1);
}

void func_163(var uParam0)
{
	func_263(uParam0, 0.0f);
}

bool func_164(var uParam0, float fParam1)
{
	if (func_264(uParam0, fParam1))
	{
		func_265(uParam0);
		return true;
	}
	return false;
}

bool func_165(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_110(iParam0))
	{
		return false;
	}
	if (!func_240(iParam0) && bParam1)
	{
		return false;
	}
	return func_203(iParam0, 1);
}

bool func_166(int iParam0)
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

bool func_167(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_266(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_168(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

void func_169(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

void func_170(var uParam0)
{
	if ((uParam0[iLocal_116 /*45*/])->f_29 == 1)
	{
		if (func_267(uParam0[iLocal_116 /*45*/], 1, 1))
		{
			func_268(uParam0[iLocal_116 /*45*/]);
		}
	}
	iLocal_116++;
	if (iLocal_116 >= 2)
	{
		iLocal_116 = 0;
	}
}

bool func_171(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

bool func_172(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_269())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_173()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_270())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (func_212(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_174(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = func_271(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_273(func_272(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_274(iParam0) || func_275(45))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 29:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 30:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 31:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 32:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 120:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 121:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 124:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 123:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 125:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 33:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 34:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 35:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 36:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 114:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 116:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 115:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 37:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 38:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 39:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 40:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 50:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 43:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 41:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 45:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 48:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 54:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 56:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 49:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 57:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 59:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 60:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 61:
					sVar0 = "TOWN_MANICATO";
					break;
				case 126:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 127:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 62:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 64:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 65:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 66:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 67:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 68:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 69:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 70:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 72:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 74:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 75:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 76:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 77:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 78:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 79:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 82:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 80:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 81:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 83:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 86:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 87:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 88:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 89:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 92:
					sVar0 = "TOWN_VANHORN";
					break;
				case 117:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 118:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 119:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 93:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 94:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 95:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 96:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 98:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 99:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 100:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 102:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 104:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 105:
					sVar0 = "TOWN_RHODES";
					break;
				case 108:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 110:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 111:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 112:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 128:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*uParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*uParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*uParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*uParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*uParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*uParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*uParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*uParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*uParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*uParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*uParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*uParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*uParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*uParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*uParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*uParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*uParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*uParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*uParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*uParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_175(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_176(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_177(int iParam0)
{
	if (!func_175(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_178(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_179(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_180(int iParam0, int iParam1)
{
	if (!func_7(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] & iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] & iParam1) != 0;
}

bool func_181(int iParam0, int iParam1)
{
	if (!func_175(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1) != 0;
}

int func_182()
{
	return Global_1899515;
}

int func_183(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_184(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

float func_185(float fParam0)
{
	return ((fParam0 * 1.8f) + 32.0f);
}

char* func_186(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_276(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_187(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	Vector3 vVar13;
	int iVar16;

	sVar0 = -2;
	sVar0.f_0 = iParam2;
	sVar0.f_1 = iParam3;
	sVar0.f_2 = iParam4;
	sVar0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	iVar16 = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&sVar0, &vVar13, bParam6, bParam7);
	return iVar16;
}

bool func_188(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_189(int iParam0)
{
	int iVar0;

	if (func_274(iParam0))
	{
		if (!func_275(45))
		{
			return false;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_220())
	{
		if (!func_277(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_190(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

struct<2> /*16*/ func_191(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_192(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_193(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_194(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_195()
{
	return Global_1310750.f_16037;
}

bool func_196(int iParam0, int iParam1)
{
	if (!func_193(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_197(int iParam0)
{
	if (!func_193(iParam0))
	{
		return false;
	}
	if (func_278(64) && func_279(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_198(int iParam0)
{
	if (!func_193(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_199(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_193(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_280(iParam0);
	Global_1310750.f_16037--;
}

void func_200()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_162(&(sLocal_117[iVar0 /*45*/].f_34)))
		{
			func_265(&(sLocal_117[iVar0 /*45*/].f_34));
		}
		func_281(sLocal_117[iVar0 /*45*/].f_38);
		func_281(sLocal_117[iVar0 /*45*/].f_39);
		iVar0++;
	}
	Global_1935183.f_29 = 4;
}

int func_201(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_1392240.f_1[iVar0 /*18*/].f_4 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_202(int iParam0)
{
	if (func_229(iParam0) && func_282())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_203(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_110(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

int func_204(int iParam0, bool bParam1)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	if (!func_203(iParam0, 2))
	{
		return 0;
	}
	if (func_205(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_151(iParam0)))
	{
		return 1;
	}
	if (func_203(iParam0, 1) && !bParam1)
	{
		func_283(iParam0, 128);
		return 1;
	}
	func_217(iParam0, 129);
	func_284(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_151(iParam0));
	func_216(iParam0, 0);
	return 1;
}

int func_205(int iParam0)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_206(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	(uParam0[iParam3 /*45*/])->f_25 = 64.0f;
	(uParam0[iParam3 /*45*/])->f_26 = 16.0f;
	(uParam0[iParam3 /*45*/])->f_20 = iParam3;
	func_285(uParam0[iParam3 /*45*/]);
	(*uParam0)[iParam3 /*45*/] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(uParam0[iParam3 /*45*/])->f_3[iVar0 /*3*/] = (*uParam2)[iVar0];
			iVar0++;
		}
		func_209(uParam0[iParam3 /*45*/], 128);
	}
	if (!func_162(&((uParam0[iParam3 /*45*/])->f_34)))
	{
		func_286(&((uParam0[iParam3 /*45*/])->f_34), 1);
	}
	func_209(uParam0[iParam3 /*45*/], (1 << 15));
	func_209(uParam0[iParam3 /*45*/], (1 << 10));
	(uParam0[iParam3 /*45*/])->f_29 = 1;
	(uParam0[iParam3 /*45*/])->f_21 = -1;
}

Vector3 func_207(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_287(uParam0, 4))
	{
		return func_288("");
	}
	iVar0 = func_155(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_288("");
	}
	iVar1 = 1;
	if (func_289(uParam0, 115, iVar1, 2, 4))
	{
		return func_288("TWDRG_GUN_MUD1");
	}
	if (func_289(uParam0, 115, iVar1, 4, 13))
	{
		return func_288("TWDRG_GUN_SEN1");
	}
	if (func_290(uParam0, 115, iVar1, 8, 87))
	{
		return func_288("TWDRG_GUN_GUN4");
	}
	if (func_291(90, 1, 0) && func_292(115, iVar1, 16, 1))
	{
		return func_288("TWDRG_GUN_SRGEN");
	}
	if (func_291(91, 1, 0) && func_292(115, iVar1, 32, 1))
	{
		return func_288("TWDRG_GUN_SRRGN");
	}
	if (func_293(uParam0, iVar1))
	{
		return func_288("STDRG_SHOSICK");
	}
	if (uParam0->f_21 < 0)
	{
		return func_288("");
	}
	return func_288("");
}

char* func_208(int iParam0)
{
	switch (iParam0)
	{
		case 353:
			return "TUM_General_Store";
		case 365:
			return "TUM_Gunsmith";
		default:
			break;
	}
	return "";
}

void func_209(var uParam0, int iParam1)
{
	func_149(&(uParam0->f_19), iParam1);
}

Vector3 func_210(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_287(uParam0, 4))
	{
		return func_288("");
	}
	iVar0 = func_155(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_288("");
	}
	iVar1 = 0;
	if (func_289(uParam0, 115, iVar1, 2, 69))
	{
		return func_288("TWDRG_GEN_SAD2");
	}
	if (func_289(uParam0, 115, iVar1, 4, 71))
	{
		return func_288("TWDRG_GEN_SAD4");
	}
	if (func_290(uParam0, 115, iVar1, 8, 87))
	{
		return func_288("TWDRG_GEN_GUN4");
	}
	if (func_291(90, 1, 0) && func_292(115, iVar1, 16, 1))
	{
		return func_288("TWDRG_GEN_SRGEN");
	}
	if (uParam0->f_21 < 0)
	{
		return func_288("");
	}
	return func_288("");
}

bool func_211(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_212(int iParam0, bool bParam1, bool bParam2)
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
		if (func_294())
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
		iVar0 = func_295(Global_1898164.f_1[0 /*5*/]);
		if (func_296(iVar0) && func_297(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_227(Global_1898164.f_1[0 /*5*/]))
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

void func_213(int iParam0, bool bParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1395601.f_5[iParam0 /*28*/].f_23) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_1395601.f_5[iParam0 /*28*/].f_23, true, 0))
	{
		return;
	}
	if (func_212(242, 1, 1))
	{
		bParam1 = false;
	}
	switch (iParam0)
	{
		case 8:
			func_298(238680582, bParam1);
			break;
		case 9:
			func_298(1555588463, bParam1);
			func_298(1275780106, bParam1);
			func_298(-833560428, bParam1);
			func_298(-1601174253, bParam1);
			func_298(-1295111793, bParam1);
			break;
		case 11:
			func_298(-1482639045, bParam1);
			break;
		case 10:
			func_298(254520182, bParam1);
			break;
		case 12:
			func_298(1997650502, bParam1);
			break;
		case 13:
			func_298(1335986638, bParam1);
			break;
		case 14:
			func_298(joaat("DOOR_STR_WHORE_INT_2"), bParam1);
			break;
		case 16:
			func_298(-1335647241, bParam1);
			break;
		case 15:
			func_298(1731691513, !func_251(70));
			break;
	}
}

void func_214(int iParam0)
{
	if (!func_211(iParam0))
	{
		return;
	}
	Global_40.f_9384[iParam0 /*2*/] = 0;
}

void func_215(int iParam0, int iParam1)
{
	if (!func_211(iParam0))
	{
		return;
	}
	Global_1395601.f_5[iParam0 /*28*/].f_20 = iParam1;
}

void func_216(int iParam0, int iParam1)
{
	if (!func_110(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

void func_217(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_110(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= (Global_24887[iParam0 /*2*/] & iParam1);
}

bool func_218(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	if (!func_203(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_219(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_220()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_221(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

char* func_222(int iParam0)
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

int func_223(int iParam0)
{
	if (!func_227(iParam0))
	{
		return -1;
	}
	return func_224(iParam0);
}

int func_224(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_299(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_225(int iParam0, bool bParam1)
{
	if (!func_227(iParam0))
	{
		return;
	}
	if (!func_122(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_300(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_300(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_301(iParam0), func_295(iParam0), func_302(iParam0), func_300(iParam0), Global_36);
		}
	}
	func_303(iParam0, 1);
	bParam1 = bParam1;
}

void func_226(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_247(Global_1898330[iParam0]);
		func_304(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

bool func_227(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_228(int iParam0, bool bParam1, bool bParam2)
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

bool func_229(int iParam0)
{
	if (func_305(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

void func_230(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_229(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_231(int iParam0, bool bParam1)
{
	if (func_229(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_232(int iParam0, bool bParam1)
{
	if (func_229(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_233(int iParam0, bool bParam1)
{
	if (func_229(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_234()
{
	return true;
}

void func_235(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_236(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_237(int iParam0, int iParam1)
{
	func_259(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
}

bool func_238(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_239(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_240(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_241(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_110(iParam0))
	{
		return;
	}
	if (!func_203(iParam0, 1))
	{
		return;
	}
	if (!func_203(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_240(iParam0)) && func_306(iParam0))
	{
		return;
	}
	func_217(iParam0, 1);
	func_284(iParam0);
	if (func_260(func_205(iParam0)))
	{
		iVar0 = func_151(iParam0);
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
		func_217(iParam0, 16);
	}
	if (func_203(iParam0, 128) && !bParam3)
	{
		func_204(iParam0, 0);
	}
}

void func_242(int iParam0, bool bParam1)
{
	if (!func_238(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_254(iParam0, (1 << 10)))
		{
			func_255(iParam0, (1 << 10));
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_254(iParam0, (1 << 10)))
	{
		func_307(iParam0, (1 << 10));
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_308(iParam0);
}

void func_243(int iParam0)
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
}

void func_244(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_256(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1914319.f_15924[iVar1]), iVar2);
	}
}

int func_245()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_246(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_247(int iParam0)
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

int func_248(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_309(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_245())
	{
		return -1;
	}
	iVar0 = func_246(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_310(iVar1, 0);
	func_311(iVar1, 0);
	func_312(iVar1, 0);
	func_313(iVar1, 0);
	func_314(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_315(iVar1, iParam4);
	}
	return iVar1;
}

bool func_249(int iParam0, int iParam1)
{
	return func_239(Global_1914319.f_3[iParam0 /*446*/].f_6, iParam1);
}

bool func_250(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_316(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_251(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_277(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_252()
{
	if (!func_277(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_277(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_277(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_277(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_277(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_277(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_277(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_253(int iParam0)
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

bool func_254(int iParam0, int iParam1)
{
	if (!func_238(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] & iParam1) != 0;
}

void func_255(int iParam0, int iParam1)
{
	if (!func_238(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] |= iParam1;
}

bool func_256(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

char* func_257(int iParam0, int iParam1)
{
	if (Global_40.f_9829[iParam0 /*4*/].f_1 != 0)
	{
		switch (Global_40.f_9829[iParam0 /*4*/])
		{
			case 76:
				return "prisoner_val_1";
			case 105:
				return "prisoner_rhd_1";
			case 5:
				return "prisoner_std_1";
			case 26:
				return "prisoner_str_1";
			case 38:
				if (iParam1 == 0)
				{
					return "prisoner_blw_1";
				}
				break;
			case 115:
				return "prisoner_twd_1";
		}
	}
	return "prisoner";
}

void func_258(struct<16> /*128*/ sParam0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(sParam0.f_10)))
	{
		return;
	}
	if (Global_1934603.f_161 >= 10)
	{
		return;
	}
	if (!func_317(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(sParam0.f_10))) > 0 || func_318(&(sParam0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iVar0 /*16*/].f_10)))
		{
			Global_1934603[iVar0 /*16*/] = { sParam0 /*16*/ };
			Global_1934603.f_161++;
			func_319(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_259(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_260(int iParam0)
{
	return iParam0 != 0;
}

bool func_261(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_151(iParam0)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_151(iParam0));
		if (!ENTITY::DOES_ENTITY_EXIST(PERSCHAR::_FORCE_SPAWN_PERSCHAR(func_151(iParam0), false)))
		{
			return false;
		}
	}
	return true;
}

bool func_262(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_263(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_320() - fParam1);
	func_321(uParam0, 1);
	func_322(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_264(var uParam0, float fParam1)
{
	if (!func_162(uParam0))
	{
		return false;
	}
	if (func_323(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_265(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

int func_266(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_267(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = func_155(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!func_287(uParam0, (1 << 16)) && func_324(Global_35, iVar0, 1) > 25.0f)
		{
			func_325(1, 1, 0);
		}
		if (func_326(uParam0, bParam2))
		{
			if (func_328(func_327()))
			{
				func_329(func_327());
			}
			func_330(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_287(uParam0, 64))
		{
			return false;
		}
		if (func_324(Global_35, iVar0, 1) < 49.0f)
		{
			if (func_331(uParam0, iVar0))
			{
				func_332();
				if (bParam1)
				{
					if (!func_326(uParam0, bParam2))
					{
						return false;
					}
				}
				return true;
			}
		}
	}
	return false;
}

void func_268(var uParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;

	Stack.Invoke(uParam0->f_43, uParam0);
	vVar0 = { StackVal, StackVal, StackVal /*3*/ };
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_333(&vVar0)))
	{
		return;
	}
	iVar3 = func_155(*uParam0);
	if (!func_334(iVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Invoke(uParam0->f_44, *uParam0);
		uParam0->f_37 = StackVal;
	}
	func_335(&uLocal_18, iVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!func_287(uParam0, (1 << 16)))
	{
		if (uParam0->f_21 < 0)
		{
			if (func_336())
			{
				func_335(&uLocal_18, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_335(&uLocal_18, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (func_287(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = func_155(uParam0->f_3[iVar4 /*3*/]);
			if (!func_334(iVar5, 0))
			{
				return;
			}
			Stack.Invoke(uParam0->f_44, uParam0->f_3[iVar4 /*3*/]);
			sVar6 = StackVal;
			func_335(&uLocal_18, iVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar5, true);
			uParam0->f_3[iVar4 /*3*/].f_2 = 1;
		}
	}
	bVar7 = func_287(uParam0, (1 << 14));
	if (func_337(&uLocal_18, vVar0, uParam0->f_40, bVar7, 0))
	{
		func_338(func_327());
		uParam0->f_30 = 1;
	}
	func_339(uParam0);
}

bool func_269()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_270()
{
	if (func_20() != 0)
	{
		return true;
	}
	return true;
}

char* func_271(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_272(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_340(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_274(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 63:
			return true;
	}
	return false;
}

bool func_275(int iParam0)
{
	if (!func_341(iParam0))
	{
		return false;
	}
	return func_342(iParam0);
}

char* func_276(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_277(int iParam0, bool bParam1)
{
	switch (func_223(iParam0))
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

bool func_278(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_279(int iParam0)
{
	return func_196(iParam0, Global_1310750.f_16072 | 64);
}

void func_280(int iParam0)
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

void func_281(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_282()
{
	return true;
}

void func_283(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_110(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_284(int iParam0)
{
	int iVar0;

	if (!func_110(iParam0))
	{
		return;
	}
	iVar0 = func_155(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

void func_285(var uParam0)
{
	uParam0->f_19 = 1;
}

void func_286(var uParam0, bool bParam1)
{
	if (bParam1 || !func_162(uParam0))
	{
		func_163(uParam0);
	}
}

bool func_287(var uParam0, int iParam1)
{
	return func_239(uParam0->f_19, iParam1);
}

Vector3 func_288(char* sParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, sParam0);
	return cVar0;
}

bool func_289(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_343(iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (func_344(iParam4))
	{
		if (func_292(iParam1, iParam2, iParam3, 1))
		{
			func_209(uParam0, 4);
			return true;
		}
	}
	return false;
}

bool func_290(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (func_343(iParam1, iParam2, iParam3))
	{
		return false;
	}
	iVar0 = func_345(iParam4);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_346(iParam4))
	{
		if (func_347(iParam4) && func_252() <= iVar0)
		{
			if (func_292(iParam1, iParam2, iParam3, 1))
			{
				func_209(uParam0, 4);
				return true;
			}
		}
	}
	return false;
}

bool func_291(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_238(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	if (bParam1)
	{
		if (func_348(iParam0, (1 << 15)))
		{
			iVar0 = 1;
		}
	}
	if (bParam2)
	{
		if (func_348(iParam0, (1 << 10)))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_292(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_343(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			func_349(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

bool func_293(var uParam0, int iParam1)
{
	int iVar0;

	if (!func_336())
	{
		return false;
	}
	iVar0 = func_113();
	switch (iVar0)
	{
		case 23:
		case 117:
			iVar0 = 26;
			break;
		case 97:
			iVar0 = 105;
			break;
	}
	if (!func_343(iVar0, iParam1, (1 << 10)))
	{
		if (func_350(uParam0) && func_351(0))
		{
			func_349(iVar0, iParam1, (1 << 10));
			uParam0->f_21 = -1;
			return true;
		}
	}
	return false;
}

bool func_294()
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

int func_295(int iParam0)
{
	if (!func_227(iParam0))
	{
		return -1;
	}
	return func_352(func_247(iParam0));
}

bool func_296(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_297(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_298(int iParam0, bool bParam1)
{
	if (func_305(iParam0))
	{
		if (bParam1)
		{
			if (!func_353(iParam0))
			{
				func_127(iParam0, 1, 0.0f, 0, 0, 1.0f, 0, 0);
			}
		}
		else if (func_353(iParam0))
		{
			func_354(iParam0, 1);
		}
	}
}

int func_299(int iParam0)
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

int func_300(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_301(int iParam0)
{
	if (!func_227(iParam0))
	{
		return 0;
	}
	return func_355(func_247(iParam0));
}

int func_302(int iParam0)
{
	if (!func_227(iParam0))
	{
		return -1;
	}
	return func_356(func_247(iParam0));
}

void func_303(int iParam0, int iParam1)
{
	if (!func_227(iParam0))
	{
		return;
	}
	func_310(iParam0, iParam1);
}

void func_304(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_355(iParam0);
	*uParam1 = func_352(iParam0);
	*uParam2 = func_356(iParam0);
}

bool func_305(int iParam0)
{
	return iParam0 != 0;
}

bool func_306(int iParam0)
{
	if (!func_110(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_307(int iParam0, int iParam1)
{
	if (!func_238(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] -= (Global_1914319.f_15614[iParam0] & iParam1);
}

void func_308(int iParam0)
{
	func_358(func_357(iParam0));
}

bool func_309(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_310(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_359(iParam0);
	}
	else
	{
		func_360(iParam0, iParam1);
	}
	func_361();
}

void func_311(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_312(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_313(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_314(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_315(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

bool func_316(int iParam0)
{
	int iVar0;

	iVar0 = func_223(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_317(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_318(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1934603[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_319(int iParam0)
{
	if (func_317(iParam0, 1))
	{
		func_362(1);
	}
}

float func_320()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_321(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_322(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

float func_323(var uParam0)
{
	if (!func_162(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_363(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_320() - uParam0->f_1);
}

float func_324(int iParam0, int iParam1, bool bParam2)
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
	return func_364(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_325(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

bool func_326(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_110(*uParam0) && !func_150(*uParam0, 0))
	{
		return false;
	}
	if (func_165(*uParam0, 0))
	{
		return false;
	}
	bVar0 = func_155(*uParam0);
	iVar1 = func_327();
	if (func_238(iVar1))
	{
		if (func_365(iVar1))
		{
			func_366(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (func_367(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = func_357(iVar1);
		iVar3 = func_368(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_366(uParam0);
			return uParam0->f_30;
		}
		if (func_369(iVar2))
		{
			return false;
		}
	}
	if (Global_1914319.f_17371 | func_370(func_155(*uParam0), 1, 1, 1, 0) || PED::IS_PED_HOGTIED(func_155(*uParam0)))
	{
		func_366(uParam0);
		return uParam0->f_30;
	}
	if (((func_371(PLAYER::PLAYER_ID(), 1, 0, 1) | func_372() || LAW::_0xF46108C50A22B029()) || LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID())) || PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (Global_1914319.f_3[uParam0->f_24 /*446*/].f_411)
	{
		return false;
	}
	if (func_373(Global_35, 0))
	{
		func_366(uParam0);
		return uParam0->f_30;
	}
	if (func_374())
	{
		if (func_375(101))
		{
			return false;
		}
	}
	if (func_212(178, 1, 1))
	{
		return false;
	}
	if (!func_376(bVar0, func_287(uParam0, (1 << 11))))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!func_287(uParam0, (1 << 11)) && !func_287(uParam0, (1 << 15)))
		{
			if (!func_162(&(uParam0->f_34)))
			{
				func_286(&(uParam0->f_34), 1);
				return false;
			}
			else if (func_287(uParam0, (1 << 10)))
			{
				if (func_323(&(uParam0->f_34)) < 5.0f)
				{
					return false;
				}
			}
			else if (func_323(&(uParam0->f_34)) < 25.0f)
			{
				return false;
			}
		}
	}
	return true;
}

int func_327()
{
	if (func_377())
	{
		return Global_1914319.f_16855.f_1;
	}
	return -1;
}

bool func_328(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_254(iParam0, (1 << 30));
}

void func_329(int iParam0)
{
	func_307(iParam0, (1 << 30));
}

void func_330(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_28)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
			uParam0->f_28 = 0;
		}
	}
	if (uParam0->f_2)
	{
		if (func_110(*uParam0))
		{
			iVar0 = func_155(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_110(uParam0->f_3[iVar1 /*3*/]) && uParam0->f_3[iVar1 /*3*/].f_2)
			{
				iVar2 = func_155(uParam0->f_3[iVar1 /*3*/]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar2, false);
					uParam0->f_3[iVar1 /*3*/].f_2 = 0;
				}
			}
			iVar1++;
		}
	}
}

bool func_331(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_287(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_155(uParam0->f_3[iVar0 /*3*/]);
			if (func_334(iVar1, 0) && func_378(iVar1, iParam1, 1, 1) <= 4.0f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!func_287(uParam0, (1 << 9)) && !func_287(uParam0, 256))
	{
		return true;
	}
	if (func_287(uParam0, (1 << 9)))
	{
		if (func_350(uParam0))
		{
			return true;
		}
	}
	if (func_287(uParam0, 256))
	{
		if (func_379(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_332()
{
	if (func_250(5))
	{
		func_380(2);
		func_380(4);
	}
	if ((((func_250(6) || func_250(14)) || func_250(26)) || func_250(9)) || func_250(21))
	{
		func_380(4);
	}
	if (((func_346(26) || func_346(27)) || func_346(28)) || func_346(29))
	{
		func_380(4);
	}
	if (((func_381(3, 61) || func_381(3, 29)) || func_381(3, 73)) || func_381(3, 43))
	{
		func_380(4);
	}
	if (func_374())
	{
		if (func_375(101) || func_375(79))
		{
			func_380(4);
		}
		if (((((func_375(88) || func_375(89)) || func_375(108)) || func_375(98)) || func_375(106)) || func_375(110))
		{
			func_380(8);
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("GENERIC_WAGON_FENCE_CORE")) > 0)
	{
		func_380(4);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[16 /*638*/].f_635, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[13 /*638*/].f_635, false))
	{
		func_380(4);
	}
}

var func_333(var uParam0)
{
	return uParam0;
}

bool func_334(int iParam0, int iParam1)
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
	if (func_382(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_382(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_382(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_382(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_382(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_382(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_382(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_382(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_335(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_383(uParam0, iParam1, sParam2))
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

bool func_336()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_337(var uParam0, Vector3 vParam1, Vector3 vParam4, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vParam1))
	{
		return true;
	}
	else if (func_384(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = (*uParam0)[0 /*4*/];
		iVar1 = (*uParam0)[1 /*4*/];
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !func_385(iVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(iVar1) && !func_385(iVar1, 0)))
		{
			if (!func_128(vParam4))
			{
				TASK::TASK_LOOK_AT_COORD(iVar0, vParam4, 8000, 0, 51, 0);
				TASK::TASK_LOOK_AT_COORD(iVar1, vParam4, 8000, 0, 51, 0);
			}
			else if (bParam7)
			{
				PED::SET_PED_SHOULD_PLAY_EMOTIONAL_SCENARIO_EXIT(iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1, false);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, Global_35, 4000, -1.0f, -1.0f, -1.0f);
			}
		}
		return true;
	}
	return false;
}

void func_338(int iParam0)
{
	func_255(iParam0, (1 << 30));
}

void func_339(var uParam0)
{
	int iVar0;
	bool bVar1;

	func_286(&(uParam0->f_34), 1);
	uParam0->f_40 = { func_386() /*3*/ };
	uParam0->f_21 = -1;
	if (func_287(uParam0, (1 << 14)))
	{
		func_387(uParam0, (1 << 14));
	}
	func_387(uParam0, (1 << 15));
	func_387(uParam0, (1 << 10));
	func_265(&uLocal_15);
	if (func_287(uParam0, (1 << 12)))
	{
		iVar0 = func_131(func_113(), uParam0->f_24);
		bVar1 = func_155(*uParam0);
		if (func_367(iVar0) && func_376(bVar1, 1))
		{
			func_388(iVar0, 0);
			func_387(uParam0, (1 << 13));
			func_387(uParam0, (1 << 12));
		}
	}
}

bool func_340(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;
	struct<2> /*16*/ sVar3;
	var uVar6;

	func_389(iParam3, &vVar0, &sVar3, &uVar6);
	if (func_390(vParam0, vVar0, sVar3.f_0, sVar3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_341(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

bool func_343(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_391(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_239(Global_23118.f_1651[iVar1], iParam2);
}

bool func_344(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_253(iParam0);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!func_250(iParam0) && func_251(iParam0))
	{
		if (func_252() <= iVar0)
		{
			return true;
		}
	}
	return false;
}

int func_345(int iParam0)
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

bool func_346(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_296(iParam0))
	{
		return false;
	}
	return func_316(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_347(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_296(iParam0))
	{
		return false;
	}
	return func_277(Global_1347702[iParam0 /*49*/].f_15, 1);
}

bool func_348(int iParam0, int iParam1)
{
	return (Global_20710.f_2092[iParam0] & iParam1) != 0;
}

void func_349(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_391(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_149(&(Global_23118.f_1651[iVar1]), iParam2);
}

bool func_350(var uParam0)
{
	int iVar0;

	iVar0 = func_155(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_324(Global_35, iVar0, 1) < 9.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_351(int iParam0)
{
	if (func_269())
	{
		return false;
	}
	return func_277(Global_1347702[58 /*49*/].f_15, 1);
}

int func_352(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_353(int iParam0)
{
	func_228(iParam0, 0, 0);
	if (func_229(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

void func_354(int iParam0, int iParam1)
{
	func_127(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_355(int iParam0)
{
	return (iParam0 & 31);
}

int func_356(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

int func_357(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 153))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 126:
			return 32;
		case 22:
			return 17;
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
		case 17:
		case 47:
			return 7;
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
		case 9:
		case 37:
		case 69:
			return 8;
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
		case 136:
			return 5;
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
		case 48:
			return 12;
		case 49:
			return 13;
		case 50:
			return 14;
		case 62:
		case 79:
			return 20;
		case 101:
			return 11;
		case 149:
			return 23;
		case 150:
			return 24;
		case 151:
			return 25;
		case 12:
		case 54:
			return 21;
		case 127:
			return 34;
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
		case 152:
			return 24;
		default:
			break;
	}
	return -1;
}

void func_358(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

int func_359(int iParam0)
{
	int iVar0;

	iVar0 = func_299(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_392(iVar0);
}

int func_360(int iParam0, int iParam1)
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
			func_393(iVar2);
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

void func_361()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

void func_362(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_363(var uParam0)
{
	return func_262(*uParam0, 2);
}

float func_364(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_365(int iParam0)
{
	if (!func_238(iParam0))
	{
		return false;
	}
	return func_239(Global_1914319.f_18594[iParam0], 2);
}

void func_366(var uParam0)
{
	int iVar0;

	iVar0 = func_327();
	if (!func_238(iVar0))
	{
		return;
	}
	if (func_328(iVar0) && func_394(1))
	{
		func_325(1, 0, 1);
	}
	func_209(uParam0, 64);
}

bool func_367(int iParam0)
{
	return func_254(iParam0, (1 << 26));
}

int func_368(int iParam0)
{
	int iVar0;

	if (!func_395(iParam0, &iVar0))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		Global_1914319.f_18905[iParam0] = PED::_GET_PED_ATTITUDE(iVar0, PLAYER::PLAYER_ID());
		return Global_1914319.f_18905[iParam0];
	}
	return 0;
}

bool func_369(int iParam0)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return func_396(iParam0, (1 << 23));
}

int func_370(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return 1;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_397(iVar0, 0)))
		{
			if (func_398(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_371(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_399(bParam1, bParam2, bParam3);
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

int func_372()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_400(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_373(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_IN_COMBAT(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_374()
{
	return Global_1310750.f_16077 != 0;
}

bool func_375(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_376(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || func_385(bParam0, 0))
	{
		return false;
	}
	if (func_401(bParam0))
	{
		func_265(&uLocal_15);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (func_162(&uLocal_15))
	{
		if (func_323(&uLocal_15) < 2.0f)
		{
			return false;
		}
	}
	else
	{
		func_286(&uLocal_15, 0);
		return false;
	}
	return true;
}

bool func_377()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

float func_378(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_379(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_38))
	{
		if (func_402(iParam0, uParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_39))
	{
		if (func_402(iParam0, uParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

void func_380(int iParam0)
{
	func_149(&uLocal_14, iParam0);
}

bool func_381(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	if (func_403(iParam1))
	{
		return false;
	}
	return func_254(Global_1914319.f_3[iParam0 /*446*/].f_10, (1 << 10));
}

bool func_382(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_383(var uParam0, int iParam1, char* sParam2)
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

bool func_384(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_404(vParam1, uParam0);
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

bool func_385(int iParam0, bool bParam1)
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

Vector3 func_386()
{
	return { 0.0f, 0.0f, 0.0f };
}

void func_387(var uParam0, int iParam1)
{
	func_259(&(uParam0->f_19), iParam1);
}

void func_388(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_367(iParam0))
		{
			func_255(iParam0, (1 << 26));
		}
	}
	else if (func_367(iParam0))
	{
		func_307(iParam0, (1 << 26));
	}
}

void func_389(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1616.769f, 1260.714f, 205.33f /*3*/ };
			*uParam2 = { 150.0f, 150.0f, 184.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 1:
			*uParam1 = { -5837.918f, -3738.832f, -20.6f /*3*/ };
			*uParam2 = { 40.0f, 35.0f, 70.0f /*3*/ };
			*uParam3 = 45.0f;
			break;
		case 2:
			*uParam1 = { -4160.689f, -2836.915f, -13.674f /*3*/ };
			*uParam2 = { 43.0f, 197.0f, 70.0f /*3*/ };
			*uParam3 = 38.0f;
			break;
		case 3:
			*uParam1 = { -4359.861f, -3083.375f, -13.674f /*3*/ };
			*uParam2 = { 30.0f, 30.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 4:
			*uParam1 = { -4446.777f, -2689.265f, -13.674f /*3*/ };
			*uParam2 = { 30.0f, 30.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 5:
			*uParam1 = { -4415.84f, -2199.774f, 22.356f /*3*/ };
			*uParam2 = { 13.0f, 21.0f, 47.0f /*3*/ };
			*uParam3 = 34.0f;
			break;
		case 6:
			*uParam1 = { -5554.764f, -2395.945f, 7.172f /*3*/ };
			*uParam2 = { 21.0f, 21.0f, 47.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 7:
			*uParam1 = { -3447.267f, -2257.723f, 7.172f /*3*/ };
			*uParam2 = { 40.0f, 23.0f, 47.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 8:
			*uParam1 = { -1425.852f, -2676.848f, 73.224f /*3*/ };
			*uParam2 = { 40.0f, 25.0f, 47.0f /*3*/ };
			*uParam3 = 26.0f;
			break;
		case 9:
			*uParam1 = { -3829.438f, -3009.26f, -13.674f /*3*/ };
			*uParam2 = { 39.0f, 54.0f, 70.0f /*3*/ };
			*uParam3 = -46.0f;
			break;
		case 10:
			*uParam1 = { -4696.308f, -3302.809f, -13.674f /*3*/ };
			*uParam2 = { 104.0f, 57.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 11:
			*uParam1 = { -5064.707f, -3139.862f, -13.674f /*3*/ };
			*uParam2 = { 23.0f, 26.0f, 70.0f /*3*/ };
			*uParam3 = 43.0f;
			break;
		case 12:
			*uParam1 = { -1631.875f, -2856.089f, -1.645f /*3*/ };
			*uParam2 = { 149.0f, 65.0f, 154.0f /*3*/ };
			*uParam3 = 39.0f;
			break;
		case 13:
			*uParam1 = { -347.889f, -131.72f, -1.645f /*3*/ };
			*uParam2 = { 52.0f, 40.0f, 154.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 14:
			*uParam1 = { -2126.5f, 88.317f, 139.179f /*3*/ };
			*uParam2 = { 334.0f, 171.0f, 277.0f /*3*/ };
			*uParam3 = -45.0f;
			break;
		case 15:
			*uParam1 = { 1574.061f, 1121.954f, 201.6f /*3*/ };
			*uParam2 = { 147.0f, 194.0f, 201.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 16:
			*uParam1 = { -2741.641f, -2375.761f, 31.492f /*3*/ };
			*uParam2 = { 86.0f, 61.0f, 50.0f /*3*/ };
			*uParam3 = 11.0f;
			break;
		case 17:
			*uParam1 = { 1773.323f, -5976.334f, 71.662f /*3*/ };
			*uParam2 = { 34.0f, 34.0f, 100.0f /*3*/ };
			*uParam3 = -124.0f;
			break;
		case 18:
			*uParam1 = { -2022.258f, -3039.913f, 25.0f /*3*/ };
			*uParam2 = { 25.0f, 25.0f, 45.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 19:
			*uParam1 = { 1394.172f, -647.735f, 72.455f /*3*/ };
			*uParam2 = { 19.0f, 18.0f, 100.0f /*3*/ };
			*uParam3 = 40.0f;
			break;
		case 20:
			*uParam1 = { -242.336f, 1624.373f, 212.894f /*3*/ };
			*uParam2 = { 98.0f, 52.0f, 120.0f /*3*/ };
			*uParam3 = 51.0f;
			break;
		case 21:
			*uParam1 = { -3543.512f, -3032.038f, -13.674f /*3*/ };
			*uParam2 = { 40.0f, 40.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 22:
			*uParam1 = { -4348.655f, -2427.582f, -13.674f /*3*/ };
			*uParam2 = { 40.0f, 40.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 23:
			*uParam1 = { -391.586f, 922.337f, 137.604f /*3*/ };
			*uParam2 = { 31.0f, 30.0f, 40.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 24:
			*uParam1 = { -2656.999f, 153.667f, 189.043f /*3*/ };
			*uParam2 = { 177.0f, 126.0f, 102.0f /*3*/ };
			*uParam3 = 52.0f;
			break;
		case 25:
			*uParam1 = { 156.109f, 425.799f, 120.0f /*3*/ };
			*uParam2 = { 249.0f, 112.0f, 120.0f /*3*/ };
			*uParam3 = -36.0f;
			break;
		case 26:
			*uParam1 = { -5868.5f, -2752.441f, -13.674f /*3*/ };
			*uParam2 = { 40.0f, 40.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 27:
			*uParam1 = { 898.505f, -335.252f, 48.403f /*3*/ };
			*uParam2 = { 56.0f, 152.0f, 70.0f /*3*/ };
			*uParam3 = -36.0f;
			break;
		case 28:
			*uParam1 = { -889.947f, -171.356f, 90.537f /*3*/ };
			*uParam2 = { 180.0f, 95.0f, 100.0f /*3*/ };
			*uParam3 = 29.0f;
			break;
		case 29:
			*uParam1 = { 571.454f, 1968.615f, 122.93f /*3*/ };
			*uParam2 = { 32.0f, 49.0f, 140.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 30:
			*uParam1 = { -2769.681f, -3210.99f, 25.0f /*3*/ };
			*uParam2 = { 25.0f, 25.0f, 45.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 31:
			*uParam1 = { -5409.034f, -3657.266f, -14.496f /*3*/ };
			*uParam2 = { 36.0f, 30.0f, 30.0f /*3*/ };
			*uParam3 = -24.0f;
			break;
		case 32:
			*uParam1 = { 2453.293f, 290.68f, 69.615f /*3*/ };
			*uParam2 = { 35.0f, 42.0f, 19.0f /*3*/ };
			*uParam3 = -4.0f;
			break;
		case 33:
			*uParam1 = { -643.042f, 278.359f, 95.5f /*3*/ };
			*uParam2 = { 70.0f, 67.0f, 65.0f /*3*/ };
			*uParam3 = -109.0f;
			break;
		case 34:
			*uParam1 = { -118.339f, -24.853f, 96.907f /*3*/ };
			*uParam2 = { 84.0f, 69.0f, 37.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 35:
			*uParam1 = { -2863.456f, -2723.259f, 93.195f /*3*/ };
			*uParam2 = { 196.0f, 157.0f, 85.0f /*3*/ };
			*uParam3 = -18.0f;
			break;
		case 36:
			*uParam1 = { -3484.814f, -3466.383f, -0.849f /*3*/ };
			*uParam2 = { 12.0f, 12.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 37:
			*uParam1 = { -3620.875f, -3575.926f, -0.849f /*3*/ };
			*uParam2 = { 126.0f, 86.0f, 70.0f /*3*/ };
			*uParam3 = -6.0f;
			break;
		case 38:
			*uParam1 = { -1382.32f, -1400.969f, 56.092f /*3*/ };
			*uParam2 = { 22.0f, 32.0f, 86.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 39:
			*uParam1 = { -713.105f, -538.091f, 59.42f /*3*/ };
			*uParam2 = { 160.0f, 22.0f, 100.0f /*3*/ };
			*uParam3 = 26.0f;
			break;
		case 40:
			*uParam1 = { 1083.588f, -693.478f, 48.403f /*3*/ };
			*uParam2 = { 45.0f, 46.0f, 70.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 41:
			*uParam1 = { -956.489f, 2175.227f, 307.401f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 42:
			*uParam1 = { 1457.354f, -1576.261f, 95.401f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 43:
			*uParam1 = { 348.488f, -669.098f, 95.0f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 44:
			*uParam1 = { 2008.052f, 617.155f, 95.0f /*3*/ };
			*uParam2 = { 28.0f, 23.0f, 100.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 45:
			*uParam1 = { 2099.835f, -283.012f, 42.0f /*3*/ };
			*uParam2 = { 21.0f, 29.0f, 49.0f /*3*/ };
			*uParam3 = 52.0f;
			break;
		case 46:
			*uParam1 = { -1759.31f, -224.369f, 168.0f /*3*/ };
			*uParam2 = { 21.0f, 29.0f, 116.0f /*3*/ };
			*uParam3 = 56.0f;
			break;
		case 47:
			*uParam1 = { 2142.39f, -1284.068f, 85.0f /*3*/ };
			*uParam2 = { 40.0f, 71.0f, 116.0f /*3*/ };
			*uParam3 = 70.0f;
			break;
		case 48:
			*uParam1 = { 2309.119f, -343.031f, 85.0f /*3*/ };
			*uParam2 = { 15.0f, 15.0f, 116.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 49:
			*uParam1 = { -1815.147f, -2405.116f, 71.0f /*3*/ };
			*uParam2 = { 25.0f, 25.0f, 50.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
		case 50:
			*uParam1 = { -2269.232f, -1145.787f, 214.0f /*3*/ };
			*uParam2 = { 37.0f, 33.0f, 68.0f /*3*/ };
			*uParam3 = 0.0f;
			break;
	}
}

bool func_390(Vector3 vParam0, Vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	Vector3 vVar0;
	struct<2> /*16*/ sVar3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 /*3*/ };
	sVar3.f_0 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	sVar3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((sVar3.f_0 * sVar3.f_0) / (fParam6 * fParam6)) + ((sVar3.f_1 * sVar3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1.0f;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 76:
			return 0;
		case 105:
			return 1;
		case 5:
			return 2;
		case 120:
			return 3;
		case 26:
			return 4;
		case 38:
			return 5;
		case 69:
			return 6;
		case 28:
			return 7;
		case 115:
			return 8;
		case 92:
			return 9;
		case 78:
			return 10;
		default:
			break;
	}
	return -1;
}

int func_392(int iParam0)
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

int func_393(int iParam0)
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

bool func_394(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_395(int iParam0, var uParam1)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	if (func_20() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051260.f_48[iParam0 /*78*/].f_19))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051260.f_48[iParam0 /*78*/].f_19);
		}
		else
		{
			return false;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1914319.f_3[iParam0 /*446*/].f_23);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_396(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1) != 0;
}

var func_397(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_398(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_399(bool bParam0, bool bParam1, bool bParam2)
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

bool func_400(int iParam0)
{
	return func_405(iParam0, 4) | func_405(iParam0, 5);
}

bool func_401(bool bParam0)
{
	if (((func_394(1) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam0)) || AUDIO::IS_ANY_SPEECH_PLAYING(bParam0))
	{
		return true;
	}
	return false;
}

bool func_402(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_403(int iParam0)
{
	bool bVar0;

	bVar0 = func_254(iParam0, 256);
	return bVar0;
}

void func_404(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_405(int iParam0, int iParam1)
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

