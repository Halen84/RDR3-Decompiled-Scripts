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
	struct<45> /*360*/ sLocal_117[1];
	int iLocal_163 = 0;
	char* sLocal_164 = NULL;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	Vector3 vScriptParam_0 = { 0.0f, 0.0f, 0.0f };
	var uScriptParam_3 = 0;
#pragma endregion

void __SCRIPT()
{
	int iVar0;
	int iVar1;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	iLocal_168 = 20000;
	iLocal_171 = vScriptParam_0.x;
	iLocal_169 = vScriptParam_0.z;
	func_1();
	func_2();
	iLocal_170 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_3())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_170)
		{
			iLocal_170 = 0;
			func_4(iLocal_171, &iLocal_169);
			switch (iLocal_169)
			{
				case 0:
					iLocal_169 = 1;
					break;
				case 1:
					func_5(iLocal_171);
					if (func_7(func_6(iLocal_171)))
					{
						func_8(func_6(iLocal_171), 4);
					}
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_9(iLocal_171));
					iVar1 = func_10(iLocal_171);
					if (iVar1 != -1)
					{
						Global_1935183.f_6[iVar1] = 1;
					}
					Global_1897950 = -1;
					iLocal_172 = (MISC::GET_GAME_TIMER() + iLocal_168);
					iLocal_169 = 2;
					break;
				case 2:
					if (func_11() || iLocal_172 < MISC::GET_GAME_TIMER())
					{
						func_12(iLocal_171);
						iLocal_172 = (MISC::GET_GAME_TIMER() + iLocal_168);
						iLocal_169 = 3;
					}
					break;
				case 3:
					if (func_13(iLocal_171) || iLocal_172 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_171);
						iLocal_172 = (iLocal_168 + MISC::GET_GAME_TIMER());
						iLocal_169 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_171) || iLocal_172 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_171);
						iLocal_172 = (iLocal_168 + MISC::GET_GAME_TIMER());
						iLocal_169 = 6;
					}
					break;
				case 6:
					if (func_7(func_6(iLocal_171)))
					{
						if (func_17(func_6(iLocal_171), 4) && !iLocal_172 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_18(iLocal_171) || iLocal_172 < MISC::GET_GAME_TIMER())
							{
								func_19(iLocal_171, 4);
								iLocal_172 = (iLocal_168 + MISC::GET_GAME_TIMER());
								iLocal_169 = 7;
							}
							Jump @785; // curOff = 456
							if (iLocal_172 < MISC::GET_GAME_TIMER() || (func_20() != 0 || Global_1051260.f_3790))
							{
								func_21(iLocal_171);
								func_22();
								if (!func_23(2057, 0))
								{
									func_24();
								}
								func_25();
								func_26();
								func_27(iLocal_171);
								func_28(iLocal_171);
								func_29();
								func_30();
								iLocal_169 = 8;
							}
							Jump @785; // curOff = 555
							func_31(iLocal_171);
							func_32();
							iLocal_169 = 9;
							Jump @785; // curOff = 572
							func_33(&Global_1898004);
							func_34(iLocal_171, &Global_1898004);
							iLocal_169 = 10;
							Jump @785; // curOff = 597
							func_35(iLocal_171);
							if (func_20() == -1)
							{
								HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_TOWN"));
							}
							func_19(iLocal_171, 8);
							if (func_36(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_37(32);
							}
							iLocal_169 = 11;
							Jump @785; // curOff = 664
							if (func_38(iLocal_171))
							{
								iLocal_170 = (1000 + MISC::GET_GAME_TIMER());
							}
							func_39(&Global_1898004, iLocal_171);
							func_40(iLocal_171);
							func_19(iLocal_171, 8);
							if (func_41())
							{
								PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_171 /*35*/].f_10);
							if (Global_1888801[iLocal_171 /*35*/].f_11 > 0.0f)
							{
								PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1888801[iLocal_171 /*35*/].f_11);
							}
							Jump @785; // curOff = 766
							func_42(iVar0);
							iVar0 = (1 + iVar0);
						}
						if (Global_1888801[iLocal_171 /*35*/].f_12 != 0)
						{
							PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1888801[iLocal_171 /*35*/].f_12);
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
	iLocal_163 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-606.3235f, -34.1014f, 89.13992f, 0.0f, 0.0f, -2.960119f, 91.8399f, 128.2035f, 27.99896f, "Painted Sky - m_volTown");
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_167 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Painted Sky - m_volRancherThreat Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -615.0529f, -8.683389f, 84.73939f, 0.0f, 0.0f, -61.07222f, 13.06188f, 14.76316f, 9.1551f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -630.0898f, -64.73701f, 84.73939f, 0.0f, 0.0f, -84.96833f, 20.24605f, 11.7424f, 9.1551f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -610.8533f, -30.41994f, 84.73939f, 0.0f, 0.0f, -69.27884f, 18.54069f, 7.558324f, 9.1551f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -607.0614f, -55.91715f, 84.36602f, 0.0f, 0.0f, -86.2037f, 1.607721f, 1.071148f, 2.286196f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -615.6726f, -33.24317f, 84.73939f, 0.0f, 0.0f, 20.71626f, 3.79069f, 17.96073f, 9.1551f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -618.952f, -32.05656f, 84.73939f, 0.0f, 0.0f, -69.27884f, 14.59728f, 1.46241f, 9.1551f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -619.0227f, -36.83093f, 84.73939f, 0.0f, 0.0f, -69.27884f, 5.661715f, 1.862059f, 9.1551f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_167, -619.5566f, -25.02375f, 84.73939f, 0.0f, 0.0f, -60.00019f, 1.92512f, 5.056171f, 9.1551f);
		iLocal_166 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Painted Sky - m_volRancherRestricted Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_166, iLocal_167);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_166, -618.1764f, -35.07673f, 84.00621f, 0.0f, 0.0f, -116.2442f, 43.7f, 24.97202f, 13.0f);
		iLocal_165 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Painted Sky - m_volRancherWarning Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_165, iLocal_166);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_165, -618.1764f, -35.07673f, 84.00621f, 0.0f, 0.0f, -116.2442f, 52.7998f, 35.21894f, 13.0f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_165, -589.9137f, -38.42014f, 87.95631f, 0.0f, 0.0f, 28.26761f, 18.40042f, 17.08066f, 7.654564f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_165, -584.0537f, -0.019895f, 87.95631f, 0.0f, 0.0f, 28.26761f, 21.42276f, 31.19608f, 7.654564f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_165, -595.9303f, -72.77682f, 87.95631f, 0.0f, 0.0f, 28.26761f, 35.98802f, 20.27966f, 7.654564f);
		sLocal_164 = "PAINTED_SKY";
		LAW::_CREATE_GUARD_ZONE(sLocal_164);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_164, iLocal_163);
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_164, iLocal_167);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_164, iLocal_166);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_164, iLocal_165);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_164, -611.6139f, -28.3574f, 86.919f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_164, iLocal_165);
	}
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
	iParam0 = iParam0;
	if (func_20() == -1)
	{
		func_46();
	}
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
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
	return func_47(iParam0, -1, -1, 0);
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
	if (func_48(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_49(5000))
		{
			return true;
		}
	}
	switch (func_50(0))
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
}

void func_25()
{
}

void func_26()
{
}

void func_27(int iParam0)
{
	iParam0 = iParam0;
}

void func_28(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_165))
	{
		func_51(885, iLocal_165, 1);
		func_51(780, iLocal_165, 0);
		func_51(781, iLocal_165, 0);
		VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_165, 3, 1);
		VOLUME::_0x53D05D60E5F5B40C(iLocal_165, 3, 1, func_52(781));
		VOLUME::_0x53D05D60E5F5B40C(iLocal_165, 3, 1, func_52(780));
		if (func_53(8))
		{
			PED::SET_PED_OWNS_ANIMAL(func_54(885), func_54(781), false);
		}
		else
		{
			PED::SET_PED_OWNS_ANIMAL(func_54(780), func_54(781), false);
		}
	}
}

void func_29()
{
}

void func_30()
{
}

void func_31(int iParam0)
{
	iParam0 = iParam0;
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
	func_55(uParam1, iLocal_163, 1);
}

void func_35(int iParam0)
{
	if (!func_56(iParam0))
	{
		return;
	}
	func_57();
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
		bVar0 = func_58();
		if (!bVar0)
		{
			func_59(&sLocal_117);
		}
	}
	return true;
}

void func_39(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if ((BUILTIN::VDIST(Global_36, 0.0f, 0.0f, 0.0f) <= 5.0f || func_60(Global_1935630, (1 << 14))) || func_60(Global_1935630, (1 << 23)))
	{
		return;
	}
	if (func_61(uParam0, 1))
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
	bVar2 = func_62();
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
							if ((!func_63(uParam0[iVar3 /*3*/], 1) && func_64(iParam1)) && !func_65(iParam1, 16))
							{
								func_67(iParam1, func_66(), -1, 0, -1, 0);
								func_68(uParam0[iVar3 /*3*/], 1);
							}
							func_69(iParam1, 0);
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
		if (func_70() != bVar0)
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
			func_71();
			func_72(Global_1310750.f_16071, 0, iVar4, 0, 0);
		}
	}
	func_73(bVar0);
	if (func_20() == -1)
	{
		func_75((iParam1 == func_74() && bVar0));
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
	if (func_76(iVar3))
	{
		return true;
	}
	return false;
}

bool func_42(int iParam0)
{
	if (iParam0 == 0)
	{
		func_77();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_19(iLocal_171, (1 << 11));
		if (func_7(func_66()))
		{
			func_8(func_66(), 8);
		}
		func_78(iLocal_171, 4);
		func_78(iLocal_171, 8);
		func_73(0);
		if (func_20() == -1)
		{
			func_75(0);
		}
		func_79(iLocal_171);
		func_32();
		return false;
	}
	else
	{
		func_80(iLocal_171);
		func_81(iLocal_171);
		func_82(iLocal_171);
		if (!func_83(iLocal_171, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

bool func_43(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return func_84(iParam0, 8);
}

bool func_44(int iParam0)
{
	return (Global_1894899.f_7 & iParam0) != 0;
}

void func_45(int iParam0)
{
	Global_1894899.f_7 -= (Global_1894899.f_7 & iParam0);
}

void func_46()
{
	var uVar0;

	uVar0 = 5;
	func_85(&sLocal_117, 885, &uVar0, 0, 0);
	sLocal_117[0 /*45*/].f_43 = 8868;
	sLocal_117[0 /*45*/].f_44 = 9088;
	func_88(&(sLocal_117[0 /*45*/]), (1 << 9));
}

int func_47(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return 1;
	}
	if (!func_56(iParam0))
	{
		return 1;
	}
	if (func_84(iParam0, 16))
	{
		return 1;
	}
	if (func_89(iParam0) && !func_90(iParam0))
	{
	}
	if (func_91(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_92(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_92(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1897950 < iVar0 || Global_1897950 > iVar1)
		{
			Global_1897950 = iVar0;
		}
		while (true)
		{
			if ((!func_89(iParam0) || func_90(iParam0)) || func_93(Global_1897950))
			{
				func_94(Global_1897950, 0);
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

bool func_48(int iParam0)
{
	return (Global_1935630 & iParam0) != 0;
}

bool func_49(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_50(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_51(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return 0;
	}
	if (!func_95(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = func_52(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(iParam1, iVar0, bParam2);
	return 1;
}

int func_52(int iParam0)
{
	if (!func_92(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

bool func_53(int iParam0)
{
	if (!func_96(iParam0))
	{
		return true;
	}
	return func_97(Global_1392626[iParam0 /*32*/].f_3, 1);
}

int func_54(int iParam0)
{
	int iVar0;

	iVar0 = func_52(iParam0);
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

void func_55(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_98(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_56(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_57()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_99(iVar0))
		{
			Global_1898130[iVar0] = -1;
		}
		iVar0++;
	}
}

bool func_58()
{
	return Global_1898164.f_163;
}

void func_59(var uParam0)
{
	func_100(uParam0);
}

bool func_60(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_61(var uParam0, int iParam1)
{
	return (uParam0->f_62 & iParam1) != 0;
}

bool func_62()
{
	return func_60(Global_1935630, (1 << 12));
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0->f_2 & iParam1) != 0;
}

bool func_64(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_101(iParam0));
}

bool func_65(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1888801[iParam0 /*35*/].f_21 & iParam1) != 0;
}

int func_66()
{
	return Global_1897952.f_41;
}

void func_67(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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

	if (!func_102())
	{
		return;
	}
	sVar1 = func_103(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_104(iParam4))
	{
		if (func_56(iParam0))
		{
			iParam4 = func_105(func_6(iParam0));
		}
		else
		{
			iParam4 = func_105(iParam1);
		}
	}
	if (func_104(iParam4))
	{
		iVar3 = func_106(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_108(func_107(iParam2));
	}
	else if ((func_109(iParam1, 2) || func_110(iParam4, 2)) && !Global_1894899.f_9)
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
	else if ((func_56(iParam0) && func_84(iParam0, (1 << 24))) && !Global_1894899.f_9)
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
		iVar4 = func_112(func_111());
		iVar5 = func_113(func_111());
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
				fVar7 = func_114(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_115(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, func_115(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_114(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_115(&cVar6, joaat("COLOR_PURE_WHITE")), func_115(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = func_116(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_68(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_69(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_20() == 0)
	{
		return;
	}
	if (func_117(128))
	{
		return;
	}
	if (!func_118(iParam0))
	{
		return;
	}
	if (func_84(iParam0, 32))
	{
		return;
	}
	func_19(iParam0, 32);
	func_119(&Global_1935630, (1 << 13));
	func_121(func_120(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_6(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_121(func_120(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_121(func_120(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_121(func_120(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_121(func_120(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_121(func_120(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_121(func_120(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
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

bool func_70()
{
	return ((Global_1894899 & 1) != 0 && func_122() != -1);
}

void func_71()
{
	if (!func_123(Global_1327479))
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
	func_124(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_72(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_125() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_123(iVar1) && !func_126(iVar1, iParam2)) && (!bParam3 || !func_127(iVar1))) && (!bParam4 || !func_128(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_129(iVar0);
			}
		}
		iVar0++;
	}
}

void func_73(bool bParam0)
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

int func_74()
{
	return Global_40.f_4283.f_1;
}

void func_75(bool bParam0)
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

bool func_76(int iParam0)
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

void func_77()
{
}

void func_78(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= (Global_23118[iParam0 /*11*/] & iParam1);
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= (Global_1058888.f_40545[iParam0 /*11*/] & iParam1);
}

void func_79(int iParam0)
{
	func_130(iLocal_167);
	LAW::_REMOVE_GUARD_ZONE(sLocal_164);
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_165))
	{
		VOLUME::_0x998202B206872672(iLocal_165);
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_165);
		func_130(iLocal_165);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_166))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iLocal_166);
		func_130(iLocal_166);
	}
	if (func_20() == -1)
	{
		func_131();
		if (HUD::_DOES_TEXT_BLOCK_EXIST("STRRGAU"))
		{
			if (HUD::TEXT_BLOCK_IS_LOADED("STRRGAU"))
			{
				HUD::_TEXT_BLOCK_DELETE("STRRGAU");
			}
		}
	}
}

void func_80(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_132(iVar0);
		}
		iVar0++;
	}
}

void func_81(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (Global_1914319.f_3[iVar0 /*446*/].f_9 == iParam0)
		{
			func_133(iVar0);
		}
		iVar0++;
	}
}

void func_82(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_134(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_135(Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1]);
		Global_1392240.f_1[iVar0 /*18*/].f_6[iVar1] = 0;
		iVar1++;
	}
}

bool func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_20() != -1)
	{
		return true;
	}
	if (!func_56(iParam0))
	{
		return true;
	}
	if (func_91(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1897950.f_1 < iVar0 || Global_1897950.f_1 > iVar1)
		{
			Global_1897950.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_136(Global_1897950.f_1, 16))
			{
				func_137(Global_1897950.f_1, 0);
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

bool func_84(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

void func_85(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	int iVar0;

	(uParam0[iParam3 /*45*/])->f_25 = 64.0f;
	(uParam0[iParam3 /*45*/])->f_26 = 16.0f;
	(uParam0[iParam3 /*45*/])->f_20 = iParam3;
	func_138(uParam0[iParam3 /*45*/]);
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
		func_88(uParam0[iParam3 /*45*/], 128);
	}
	if (!func_139(&((uParam0[iParam3 /*45*/])->f_34)))
	{
		func_140(&((uParam0[iParam3 /*45*/])->f_34), 1);
	}
	func_88(uParam0[iParam3 /*45*/], (1 << 15));
	func_88(uParam0[iParam3 /*45*/], (1 << 10));
	(uParam0[iParam3 /*45*/])->f_29 = 1;
	(uParam0[iParam3 /*45*/])->f_21 = -1;
}

Vector3 func_86(var uParam0)
{
	int iVar0;

	iVar0 = func_54(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return func_141("");
	}
	if (func_142(uParam0, 4))
	{
		return func_141("");
	}
	if (func_143() && func_144(70))
	{
		func_88(uParam0, 4);
		if (!func_145(26, 2, 2))
		{
			func_146(26, 2, 2);
			uParam0->f_21 = -1;
			return func_141("STRRG_RANWROB1");
		}
		else if (!func_145(26, 2, 4))
		{
			func_146(26, 2, 4);
			uParam0->f_21 = -1;
			return func_141("STRRG_RANWROB2");
		}
		else if (!func_145(26, 2, 8))
		{
			func_146(26, 2, 8);
			uParam0->f_21 = -1;
			return func_141("STRRG_RANWROB3");
		}
	}
	return func_141("");
}

char* func_87(int iParam0)
{
	switch (iParam0)
	{
		case 885:
			return "WROBEL";
		default:
			break;
	}
	return "";
}

void func_88(var uParam0, int iParam1)
{
	func_147(&(uParam0->f_19), iParam1);
}

bool func_89(int iParam0)
{
	if (!func_56(iParam0))
	{
		return false;
	}
	return func_84(iParam0, (1 << 25));
}

bool func_90(int iParam0)
{
	if (!func_56(iParam0))
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

bool func_91(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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

bool func_92(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_93(int iParam0)
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

int func_94(int iParam0, bool bParam1)
{
	if (!func_92(iParam0))
	{
		return 0;
	}
	if (!func_136(iParam0, 2))
	{
		return 0;
	}
	if (func_136(iParam0, 32) && !bParam1)
	{
		func_149(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_148(iParam0)));
		if (func_20() == -1)
		{
			if (func_136(iParam0, (1 << 11)))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_52(iParam0));
				func_150(iParam0, (1 << 11));
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_52(iParam0));
		}
		return 0;
	}
	if (!func_151(iParam0) && func_20() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_52(iParam0)))
	{
		func_150(iParam0, 128);
		return 1;
	}
	func_149(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_148(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_52(iParam0));
	if (func_136(iParam0, (1 << 11)))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_52(iParam0));
		func_150(iParam0, (1 << 11));
	}
	return 1;
}

bool func_95(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_92(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_52(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_54(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_52(iParam0));
}

bool func_96(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_97(int iParam0, bool bParam1)
{
	switch (func_152(iParam0))
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

bool func_98(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

void func_100(var uParam0)
{
	iLocal_116 = 0;
	if ((uParam0[iLocal_116 /*45*/])->f_29 == 1)
	{
		if (func_153(uParam0[iLocal_116 /*45*/], 1, 1))
		{
			func_154(uParam0[iLocal_116 /*45*/]);
		}
	}
}

bool func_101(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !func_143())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

bool func_102()
{
	if (Global_16)
	{
		return false;
	}
	if (!func_155())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1934266.f_78.f_55))
	{
		return false;
	}
	if (func_156(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_103(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, var uParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1894899.f_162)))
	{
		sVar0 = func_157(Global_1894899.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_159(func_158(Global_36));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_160(iParam0) || func_161(45))
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

bool func_104(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_105(int iParam0)
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

int func_106(int iParam0)
{
	if (!func_104(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

int func_107(int iParam0)
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

char* func_108(int iParam0)
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

bool func_109(int iParam0, int iParam1)
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

bool func_110(int iParam0, int iParam1)
{
	if (!func_104(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1) != 0;
}

int func_111()
{
	return Global_1899515;
}

int func_112(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_113(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

float func_114(float fParam0)
{
	return ((fParam0 * 1.8f) + 32.0f);
}

char* func_115(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_162(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_116(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
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

bool func_117(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

bool func_118(int iParam0)
{
	int iVar0;

	if (func_160(iParam0))
	{
		if (!func_161(45))
		{
			return false;
		}
	}
	iVar0 = func_6(iParam0);
	if (func_163())
	{
		if (!func_97(Global_1835011[3 /*74*/].f_1, 1))
		{
			return (iVar0 == 7 || iVar0 == 6);
		}
	}
	return true;
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

struct<2> /*16*/ func_120(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_121(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_122()
{
	return Global_1894899.f_2;
}

bool func_123(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_124(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_125()
{
	return Global_1310750.f_16037;
}

bool func_126(int iParam0, int iParam1)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0 /*111*/] & iParam1) != 0;
}

bool func_127(int iParam0)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	if (func_164(64) && func_165(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_128(int iParam0)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_129(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_123(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_166(iParam0);
	Global_1310750.f_16037--;
}

void func_130(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_131()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_139(&(sLocal_117[iVar0 /*45*/].f_34)))
		{
			func_167(&(sLocal_117[iVar0 /*45*/].f_34));
		}
		func_130(sLocal_117[iVar0 /*45*/].f_38);
		func_130(sLocal_117[iVar0 /*45*/].f_39);
		iVar0++;
	}
}

void func_132(int iParam0)
{
	func_168(Global_1935369.f_5[iParam0 /*11*/].f_6, 1);
	func_169(Global_1935369.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1935369.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1935369.f_5[iParam0 /*11*/].f_8);
		Global_1935369.f_5[iParam0 /*11*/].f_8 = 0;
	}
	func_170(iParam0, (1 << 13));
	func_170(iParam0, (1 << 14));
	func_170(iParam0, (1 << 15));
	func_170(iParam0, (1 << 17));
	func_170(iParam0, (1 << 24));
	func_170(iParam0, (1 << 19));
	func_170(iParam0, (1 << 20));
	Global_1935369.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1935369.f_5[Global_1935369 /*11*/].f_9 = 0;
	Global_1935369.f_5[iParam0 /*11*/] = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1935369.f_5[iParam0 /*11*/].f_7 = 0;
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_92(Global_1914319.f_3[iParam0 /*446*/].f_21) && func_171(Global_1914319.f_3[iParam0 /*446*/].f_21))
	{
		func_172(Global_1914319.f_3[iParam0 /*446*/].f_21, 0, 1, 0, 0);
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
	func_173(Global_1914319.f_3[iParam0 /*446*/].f_10, 0);
	func_174(iParam0, (1 << 29));
	iVar1 = func_175(iParam0);
	if (iVar1 >= 15)
	{
		Global_1914319.f_3[iParam0 /*446*/].f_408 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_135(Global_1914319.f_3[iParam0 /*446*/].f_317[iVar0 /*6*/]);
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
	func_176(iParam0);
	Global_1914319.f_3[iParam0 /*446*/].f_10 = -1;
	Global_1914319.f_3[iParam0 /*446*/].f_9 = -1;
	func_177(iParam0, 0);
}

int func_134(int iParam0)
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

void func_135(int iParam0)
{
	if (func_178(iParam0) && func_179())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_136(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_92(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0 /*2*/] & iParam1) != 0;
}

int func_137(int iParam0, bool bParam1)
{
	if (!func_92(iParam0))
	{
		return 0;
	}
	if (!func_136(iParam0, 2))
	{
		return 0;
	}
	if (func_148(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_52(iParam0)))
	{
		return 1;
	}
	if (func_136(iParam0, 1) && !bParam1)
	{
		func_180(iParam0, 128);
		return 1;
	}
	func_150(iParam0, 129);
	func_181(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_52(iParam0));
	func_149(iParam0, 0);
	return 1;
}

void func_138(var uParam0)
{
	uParam0->f_19 = 1;
}

bool func_139(var uParam0)
{
	return func_182(*uParam0, 1);
}

void func_140(var uParam0, bool bParam1)
{
	if (bParam1 || !func_139(uParam0))
	{
		func_183(uParam0);
	}
}

Vector3 func_141(char* sParam0)
{
	Vector3 vVar0[24];

	strcpy_s(&cVar0, 24, sParam0);
	return cVar0;
}

bool func_142(var uParam0, int iParam1)
{
	return func_184(uParam0->f_19, iParam1);
}

bool func_143()
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

bool func_144(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_97(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_185(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	return func_184(Global_23118.f_1651[iVar1], iParam2);
}

void func_146(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_185(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = (iVar0 * 10 + iParam1);
	func_147(&(Global_23118.f_1651[iVar1]), iParam2);
}

void func_147(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_148(int iParam0)
{
	if (!func_92(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

void func_149(int iParam0, int iParam1)
{
	if (!func_92(iParam0))
	{
		return;
	}
	Global_1895087[iParam0 /*3*/].f_1 = iParam1;
}

void func_150(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_92(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= (Global_24887[iParam0 /*2*/] & iParam1);
}

bool func_151(int iParam0)
{
	if (!func_92(iParam0))
	{
		return false;
	}
	if (!func_136(iParam0, 2))
	{
		return false;
	}
	return true;
}

int func_152(int iParam0)
{
	if (!func_186(iParam0))
	{
		return -1;
	}
	return func_187(iParam0);
}

bool func_153(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_20() != -1)
	{
		return false;
	}
	iVar0 = func_54(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (uParam0->f_30 == 1)
	{
		if (!func_142(uParam0, (1 << 16)) && func_188(Global_35, iVar0, 1) > 25.0f)
		{
			func_189(1, 1, 0);
		}
		if (func_190(uParam0, bParam2))
		{
			if (func_192(func_191()))
			{
				func_193(func_191());
			}
			func_194(uParam0);
			uParam0->f_30 = 0;
		}
	}
	else
	{
		if (func_142(uParam0, 64))
		{
			return false;
		}
		if (func_188(Global_35, iVar0, 1) < 49.0f)
		{
			if (func_195(uParam0, iVar0))
			{
				func_196();
				if (bParam1)
				{
					if (!func_190(uParam0, bParam2))
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

void func_154(var uParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;
	bool bVar7;

	Stack.Invoke(uParam0->f_43, uParam0);
	vVar0 = { StackVal, StackVal, StackVal /*3*/ };
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_197(&vVar0)))
	{
		return;
	}
	iVar3 = func_54(*uParam0);
	if (!func_198(iVar3, 0))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_37))
	{
		Stack.Invoke(uParam0->f_44, *uParam0);
		uParam0->f_37 = StackVal;
	}
	func_199(&uLocal_18, iVar3, uParam0->f_37, 0);
	PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar3, true);
	uParam0->f_2 = 1;
	uParam0->f_37 = 0;
	if (!func_142(uParam0, (1 << 16)))
	{
		if (uParam0->f_21 < 0)
		{
			if (func_200())
			{
				func_199(&uLocal_18, Global_35, "ARTHUR", 0);
			}
			else
			{
				func_199(&uLocal_18, Global_35, "JOHN", 0);
			}
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
			uParam0->f_28 = 1;
		}
		else if (func_142(uParam0, 128))
		{
			iVar4 = uParam0->f_21;
			iVar5 = func_54(uParam0->f_3[iVar4 /*3*/]);
			if (!func_198(iVar5, 0))
			{
				return;
			}
			Stack.Invoke(uParam0->f_44, uParam0->f_3[iVar4 /*3*/]);
			sVar6 = StackVal;
			func_199(&uLocal_18, iVar5, sVar6, 0);
			PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar5, true);
			uParam0->f_3[iVar4 /*3*/].f_2 = 1;
		}
	}
	bVar7 = func_142(uParam0, (1 << 14));
	if (func_201(&uLocal_18, vVar0, uParam0->f_40, bVar7, 0))
	{
		func_202(func_191());
		uParam0->f_30 = 1;
	}
	func_203(uParam0);
}

bool func_155()
{
	if (func_20() != 0)
	{
		return true;
	}
	return true;
}

bool func_156(int iParam0, bool bParam1, bool bParam2)
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
		if (func_204())
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
		iVar0 = func_205(Global_1898164.f_1[0 /*5*/]);
		if (func_206(iVar0) && func_207(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_186(Global_1898164.f_1[0 /*5*/]))
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

char* func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_158(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_208(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_159(int iParam0)
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

bool func_160(int iParam0)
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

bool func_161(int iParam0)
{
	if (!func_209(iParam0))
	{
		return false;
	}
	return func_210(iParam0);
}

char* func_162(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_163()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_164(int iParam0)
{
	return (Global_1310750.f_16035 & iParam0) != 0;
}

bool func_165(int iParam0)
{
	return func_126(iParam0, Global_1310750.f_16072 | 64);
}

void func_166(int iParam0)
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

void func_167(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_168(int iParam0, bool bParam1)
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

void func_169(int iParam0, bool bParam1)
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

void func_170(int iParam0, int iParam1)
{
	func_211(&(Global_1935369.f_5[iParam0 /*11*/].f_7), iParam1);
}

bool func_171(int iParam0)
{
	if (!func_92(iParam0))
	{
		return false;
	}
	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_172(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_92(iParam0))
	{
		return;
	}
	if (!func_136(iParam0, 1))
	{
		return;
	}
	if (!func_136(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_171(iParam0)) && func_212(iParam0))
	{
		return;
	}
	func_150(iParam0, 1);
	func_181(iParam0);
	if (func_213(func_148(iParam0)))
	{
		iVar0 = func_52(iParam0);
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
		func_150(iParam0, 16);
	}
	if (func_136(iParam0, 128) && !bParam3)
	{
		func_137(iParam0, 0);
	}
}

void func_173(int iParam0, bool bParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_215(iParam0, (1 << 10)))
		{
			func_216(iParam0, (1 << 10));
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_215(iParam0, (1 << 10)))
	{
		func_217(iParam0, (1 << 10));
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_218(iParam0);
}

void func_174(int iParam0, int iParam1)
{
	if (!func_219(iParam0))
	{
		return;
	}
	Global_1914319.f_3[iParam0 /*446*/].f_7 -= (Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1);
}

int func_175(int iParam0)
{
	return Global_1914319.f_3[iParam0 /*446*/].f_408;
}

void func_176(int iParam0)
{
	Global_1914319.f_3[iParam0 /*446*/].f_7 = 0;
}

void func_177(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_219(iParam0))
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

bool func_178(int iParam0)
{
	if (func_220(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_179()
{
	return true;
}

void func_180(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_92(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

void func_181(int iParam0)
{
	int iVar0;

	if (!func_92(iParam0))
	{
		return;
	}
	iVar0 = func_54(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1895087[iParam0 /*3*/].f_2 = 0;
}

bool func_182(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_183(var uParam0)
{
	func_221(uParam0, 0.0f);
}

bool func_184(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_185(int iParam0)
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

bool func_186(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_187(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_222(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

float func_188(int iParam0, int iParam1, bool bParam2)
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
	return func_223(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_189(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

bool func_190(var uParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_92(*uParam0) && !func_95(*uParam0, 0))
	{
		return false;
	}
	if (func_224(*uParam0, 0))
	{
		return false;
	}
	bVar0 = func_54(*uParam0);
	iVar1 = func_191();
	if (func_214(iVar1))
	{
		if (func_225(iVar1))
		{
			func_226(uParam0);
			return uParam0->f_30;
		}
		if (bParam1)
		{
			if (func_227(iVar1))
			{
				return uParam0->f_30;
			}
		}
		iVar2 = func_228(iVar1);
		iVar3 = func_229(iVar2);
		if (iVar3 == 2 || iVar3 == 3)
		{
			func_226(uParam0);
			return uParam0->f_30;
		}
		if (func_230(iVar2))
		{
			return false;
		}
	}
	if (Global_1914319.f_17371 | func_231(func_54(*uParam0), 1, 1, 1, 0) || PED::IS_PED_HOGTIED(func_54(*uParam0)))
	{
		func_226(uParam0);
		return uParam0->f_30;
	}
	if (((func_232(PLAYER::PLAYER_ID(), 1, 0, 1) | func_233() || LAW::_0xF46108C50A22B029()) || LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID())) || PLAYER::_0xD1F6B912785BFD35(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (Global_1914319.f_3[uParam0->f_24 /*446*/].f_411)
	{
		return false;
	}
	if (func_234(Global_35, 0))
	{
		func_226(uParam0);
		return uParam0->f_30;
	}
	if (func_235())
	{
		if (func_236(101))
		{
			return false;
		}
	}
	if (func_156(178, 1, 1))
	{
		return false;
	}
	if (!func_237(bVar0, func_142(uParam0, (1 << 11))))
	{
		return false;
	}
	if (uParam0->f_30 == 0)
	{
		if (!func_142(uParam0, (1 << 11)) && !func_142(uParam0, (1 << 15)))
		{
			if (!func_139(&(uParam0->f_34)))
			{
				func_140(&(uParam0->f_34), 1);
				return false;
			}
			else if (func_142(uParam0, (1 << 10)))
			{
				if (func_238(&(uParam0->f_34)) < 5.0f)
				{
					return false;
				}
			}
			else if (func_238(&(uParam0->f_34)) < 25.0f)
			{
				return false;
			}
		}
	}
	return true;
}

int func_191()
{
	if (func_239())
	{
		return Global_1914319.f_16855.f_1;
	}
	return -1;
}

bool func_192(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_215(iParam0, (1 << 30));
}

void func_193(int iParam0)
{
	func_217(iParam0, (1 << 30));
}

void func_194(var uParam0)
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
		if (func_92(*uParam0))
		{
			iVar0 = func_54(*uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iVar0, false);
				uParam0->f_2 = 0;
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (func_92(uParam0->f_3[iVar1 /*3*/]) && uParam0->f_3[iVar1 /*3*/].f_2)
			{
				iVar2 = func_54(uParam0->f_3[iVar1 /*3*/]);
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

bool func_195(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_142(uParam0, 128))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_54(uParam0->f_3[iVar0 /*3*/]);
			if (func_198(iVar1, 0) && func_240(iVar1, iParam1, 1, 1) <= 4.0f)
			{
				uParam0->f_21 = iVar0;
				return true;
			}
			iVar0++;
		}
	}
	if (!func_142(uParam0, (1 << 9)) && !func_142(uParam0, 256))
	{
		return true;
	}
	if (func_142(uParam0, (1 << 9)))
	{
		if (func_241(uParam0))
		{
			return true;
		}
	}
	if (func_142(uParam0, 256))
	{
		if (func_242(Global_35, uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_196()
{
	if (func_243(5))
	{
		func_244(2);
		func_244(4);
	}
	if ((((func_243(6) || func_243(14)) || func_243(26)) || func_243(9)) || func_243(21))
	{
		func_244(4);
	}
	if (((func_245(26) || func_245(27)) || func_245(28)) || func_245(29))
	{
		func_244(4);
	}
	if (((func_246(3, 61) || func_246(3, 29)) || func_246(3, 73)) || func_246(3, 43))
	{
		func_244(4);
	}
	if (func_235())
	{
		if (func_236(101) || func_236(79))
		{
			func_244(4);
		}
		if (((((func_236(88) || func_236(89)) || func_236(108)) || func_236(98)) || func_236(106)) || func_236(110))
		{
			func_244(8);
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("GENERIC_WAGON_FENCE_CORE")) > 0)
	{
		func_244(4);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[16 /*638*/].f_635, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1396257[13 /*638*/].f_635, false))
	{
		func_244(4);
	}
}

var func_197(var uParam0)
{
	return uParam0;
}

bool func_198(int iParam0, int iParam1)
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
	if (func_247(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_247(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_247(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_247(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_247(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_247(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_247(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_247(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_199(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_248(uParam0, iParam1, sParam2))
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

bool func_200()
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

bool func_201(var uParam0, Vector3 vParam1, Vector3 vParam4, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;

	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vParam1))
	{
		return true;
	}
	else if (func_249(uParam0, vParam1, iParam8, -1, 0, 0))
	{
		iVar0 = (*uParam0)[0 /*4*/];
		iVar1 = (*uParam0)[1 /*4*/];
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !func_250(iVar0, 0)) && (ENTITY::DOES_ENTITY_EXIST(iVar1) && !func_250(iVar1, 0)))
		{
			if (!func_251(vParam4))
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

void func_202(int iParam0)
{
	func_216(iParam0, (1 << 30));
}

void func_203(var uParam0)
{
	int iVar0;
	bool bVar1;

	func_140(&(uParam0->f_34), 1);
	uParam0->f_40 = { func_252() /*3*/ };
	uParam0->f_21 = -1;
	if (func_142(uParam0, (1 << 14)))
	{
		func_253(uParam0, (1 << 14));
	}
	func_253(uParam0, (1 << 15));
	func_253(uParam0, (1 << 10));
	func_167(&uLocal_15);
	if (func_142(uParam0, (1 << 12)))
	{
		iVar0 = func_254(func_122(), uParam0->f_24);
		bVar1 = func_54(*uParam0);
		if (func_227(iVar0) && func_237(bVar1, 1))
		{
			func_255(iVar0, 0);
			func_253(uParam0, (1 << 13));
			func_253(uParam0, (1 << 12));
		}
	}
}

bool func_204()
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

int func_205(int iParam0)
{
	if (!func_186(iParam0))
	{
		return -1;
	}
	return func_257(func_256(iParam0));
}

bool func_206(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_207(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_208(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;
	struct<2> /*16*/ sVar3;
	var uVar6;

	func_258(iParam3, &vVar0, &sVar3, &uVar6);
	if (func_259(vParam0, vVar0, sVar3.f_0, sVar3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_209(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_210(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_212(int iParam0)
{
	if (!func_92(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

bool func_213(int iParam0)
{
	return iParam0 != 0;
}

bool func_214(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_215(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_15614[iParam0] & iParam1) != 0;
}

void func_216(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] |= iParam1;
}

void func_217(int iParam0, int iParam1)
{
	if (!func_214(iParam0))
	{
		return;
	}
	Global_1914319.f_15614[iParam0] -= (Global_1914319.f_15614[iParam0] & iParam1);
}

void func_218(int iParam0)
{
	func_260(func_228(iParam0));
}

bool func_219(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

bool func_220(int iParam0)
{
	return iParam0 != 0;
}

void func_221(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_261() - fParam1);
	func_262(uParam0, 1);
	func_263(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_222(int iParam0)
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

float func_223(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_224(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_92(iParam0))
	{
		return false;
	}
	if (!func_171(iParam0) && bParam1)
	{
		return false;
	}
	return func_136(iParam0, 1);
}

bool func_225(int iParam0)
{
	if (!func_214(iParam0))
	{
		return false;
	}
	return func_184(Global_1914319.f_18594[iParam0], 2);
}

void func_226(var uParam0)
{
	int iVar0;

	iVar0 = func_191();
	if (!func_214(iVar0))
	{
		return;
	}
	if (func_192(iVar0) && func_264(1))
	{
		func_189(1, 0, 1);
	}
	func_88(uParam0, 64);
}

bool func_227(int iParam0)
{
	return func_215(iParam0, (1 << 26));
}

int func_228(int iParam0)
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

int func_229(int iParam0)
{
	int iVar0;

	if (!func_265(iParam0, &iVar0))
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

bool func_230(int iParam0)
{
	if (!func_219(iParam0))
	{
		return false;
	}
	return func_266(iParam0, (1 << 23));
}

int func_231(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_267(iVar0, 0)))
		{
			if (func_268(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_232(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_269(bParam1, bParam2, bParam3);
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

int func_233()
{
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35) || func_270(Global_35))
	{
		return 1;
	}
	return 0;
}

bool func_234(int iParam0, int iParam1)
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

bool func_235()
{
	return Global_1310750.f_16077 != 0;
}

bool func_236(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_48;
}

bool func_237(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) || func_250(bParam0, 0))
	{
		return false;
	}
	if (func_271(bParam0))
	{
		func_167(&uLocal_15);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (func_139(&uLocal_15))
	{
		if (func_238(&uLocal_15) < 2.0f)
		{
			return false;
		}
	}
	else
	{
		func_140(&uLocal_15, 0);
		return false;
	}
	return true;
}

float func_238(var uParam0)
{
	if (!func_139(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_272(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_261() - uParam0->f_1);
}

bool func_239()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

float func_240(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_241(var uParam0)
{
	int iVar0;

	iVar0 = func_54(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (func_188(Global_35, iVar0, 1) < 9.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_242(int iParam0, var uParam1)
{
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_38))
	{
		if (func_273(iParam0, uParam1->f_38, 1, 0))
		{
			return true;
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam1->f_39))
	{
		if (func_273(iParam0, uParam1->f_39, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_243(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_274(Global_1835011[iParam0 /*74*/].f_1);
}

void func_244(int iParam0)
{
	func_147(&uLocal_14, iParam0);
}

bool func_245(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_206(iParam0))
	{
		return false;
	}
	return func_274(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_246(int iParam0, int iParam1)
{
	if (!func_219(iParam0))
	{
		return false;
	}
	if (func_275(iParam1))
	{
		return false;
	}
	return func_215(Global_1914319.f_3[iParam0 /*446*/].f_10, (1 << 10));
}

bool func_247(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_248(var uParam0, int iParam1, char* sParam2)
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

bool func_249(var uParam0, Vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
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
		func_276(vParam1, uParam0);
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

bool func_250(int iParam0, bool bParam1)
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

bool func_251(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

Vector3 func_252()
{
	return { 0.0f, 0.0f, 0.0f };
}

void func_253(var uParam0, int iParam1)
{
	func_211(&(uParam0->f_19), iParam1);
}

int func_254(int iParam0, int iParam1)
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

void func_255(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_227(iParam0))
		{
			func_216(iParam0, (1 << 26));
		}
	}
	else if (func_227(iParam0))
	{
		func_217(iParam0, (1 << 26));
	}
}

int func_256(int iParam0)
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

int func_257(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

void func_258(int iParam0, var uParam1, var uParam2, var uParam3)
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

bool func_259(Vector3 vParam0, Vector3 vParam3, float fParam6, float fParam7, float fParam8)
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

void func_260(int iParam0)
{
	Global_1914319.f_15923 = iParam0;
}

float func_261()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_262(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_263(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_264(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_265(int iParam0, var uParam1)
{
	if (!func_219(iParam0))
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

bool func_266(int iParam0, int iParam1)
{
	if (!func_219(iParam0))
	{
		return false;
	}
	return (Global_1914319.f_3[iParam0 /*446*/].f_7 & iParam1) != 0;
}

var func_267(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_268(Vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_269(bool bParam0, bool bParam1, bool bParam2)
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

bool func_270(int iParam0)
{
	return func_277(iParam0, 4) | func_277(iParam0, 5);
}

bool func_271(bool bParam0)
{
	if (((func_264(1) || AUDIO::_0x2B101AD9F651243A()) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(bParam0)) || AUDIO::IS_ANY_SPEECH_PLAYING(bParam0))
	{
		return true;
	}
	return false;
}

bool func_272(var uParam0)
{
	return func_182(*uParam0, 2);
}

bool func_273(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_274(int iParam0)
{
	int iVar0;

	iVar0 = func_152(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_275(int iParam0)
{
	bool bVar0;

	bVar0 = func_215(iParam0, 256);
	return bVar0;
}

void func_276(var uParam0, var uParam1, var uParam2, var uParam3)
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

int func_277(int iParam0, int iParam1)
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

