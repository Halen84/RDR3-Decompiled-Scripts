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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = -1;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	int iLocal_24 = 0;
	char* sLocal_25 = NULL;
	char* sLocal_26 = NULL;
	char* sLocal_27 = NULL;
	char* sLocal_28 = NULL;
	var uLocal_29 = 0;
	struct<33> /*264*/ sLocal_30 = { 0, 1092616192, 1106247680, 1109393408, 1084227584, 1061158912, 0, 1065353216, 0, 1065353216, 15, 30, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_76 = 1097859072;
	var uLocal_77 = 0;
#pragma endregion

void __EntryFunction__()
{
	struct<7> /*56*/ sVar0[34];
	int iVar239;
	bool bVar240;
	int iVar241;
	int iVar242;
	int iVar243;
	float fVar244;
	int iVar245;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_23 = "beat_gang_camp_reminder";
	iLocal_24 = 23;
	sLocal_25 = "mech_skin@BUCK_BUTCHER";
	sLocal_26 = "PBL_BASE";
	sLocal_27 = "PBL_DUMP";
	sLocal_28 = "PBL_DROP_IN";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1(8);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_2(&(sVar0[0 /*7*/]));
	func_3(&(sVar0[15 /*7*/]));
	func_4(&(sVar0[20 /*7*/]));
	func_5(&(sVar0[26 /*7*/]));
	func_6(&(sVar0[1 /*7*/]));
	func_7(&(sVar0[2 /*7*/]));
	func_8(&(sVar0[3 /*7*/]));
	func_9(&(sVar0[4 /*7*/]));
	func_10(&(sVar0[5 /*7*/]));
	func_11(&(sVar0[6 /*7*/]));
	func_12(&(sVar0[7 /*7*/]));
	func_13(&(sVar0[8 /*7*/]));
	func_14(&(sVar0[9 /*7*/]));
	func_15(&(sVar0[10 /*7*/]));
	func_16(&(sVar0[13 /*7*/]));
	func_17(&(sVar0[11 /*7*/]));
	func_18(&(sVar0[17 /*7*/]));
	func_19(&(sVar0[12 /*7*/]));
	func_20(&(sVar0[14 /*7*/]));
	func_21(&(sVar0[16 /*7*/]));
	func_22(&(sVar0[18 /*7*/]));
	func_23(&(sVar0[21 /*7*/]));
	func_24(&(sVar0[22 /*7*/]));
	func_25(&(sVar0[23 /*7*/]));
	func_26(&(sVar0[24 /*7*/]));
	func_27(&(sVar0[25 /*7*/]));
	func_28(&(sVar0[19 /*7*/]));
	func_29(&(sVar0[27 /*7*/]));
	func_30(&(sVar0[28 /*7*/]));
	func_31(&(sVar0[29 /*7*/]));
	func_32(&(sVar0[30 /*7*/]));
	func_33(&(sVar0[31 /*7*/]));
	func_34(&(sVar0[32 /*7*/]));
	func_35(&(sVar0[33 /*7*/]));
	func_36();
	func_37();
	while (!func_38(256))
	{
		BUILTIN::WAIT(0);
	}
	while (!func_38(128))
	{
		BUILTIN::WAIT(0);
	}
	while (!func_38(256) && Global_40)
	{
		BUILTIN::WAIT(0);
	}
	iVar239 = 0;
	while (iVar239 < sVar0.f_0)
	{
		if (sVar0[iVar239 /*7*/].f_6 & 2 != 0)
		{
			Stack.Invoke(sVar0[iVar239 /*7*/]);
			func_39(&(sVar0[iVar239 /*7*/].f_6), 1);
		}
		else
		{
			func_40(&(sVar0[iVar239 /*7*/].f_6), 1);
		}
		iVar239++;
	}
	func_41(8);
	while (Global_1572887.f_8)
	{
		BUILTIN::WAIT(0);
	}
	while (!func_38(256))
	{
		BUILTIN::WAIT(0);
	}
	func_41(1);
	bVar240 = false;
	iVar241 = 34;
	iVar242 = 0;
	iVar243 = 0;
	iVar239 = 0;
	while (!bVar240)
	{
		bVar240 = SCRIPTS::IS_THREAD_EXIT_REQUESTED();
		fVar244 = func_42();
		if (fVar244 <= 0.0f)
		{
			fVar244 = 24.0f;
		}
		iVar242 = BUILTIN::ROUND(((float)iVar241 / fVar244));
		if (iVar242 <= 0)
		{
			iVar242 = 1;
		}
		iVar243 = 0;
		Global_1430242.f_9 = 0;
		iVar243 = 0;
		while (iVar243 < iVar242)
		{
			if (sVar0[iVar239 /*7*/].f_6 & 1 != 0)
			{
				Stack.Invoke(sVar0[iVar239 /*7*/].f_1);
			}
			iVar239 = (1 + iVar239);
			if (iVar239 >= iVar241)
			{
				iVar239 = 0;
			}
			iVar243++;
		}
		if (func_43(4))
		{
			func_44();
			func_45();
			iVar245 = func_46();
			if (func_47(iVar245))
			{
				func_48(iVar245, iVar245, 0);
			}
			func_49(4);
		}
		BUILTIN::WAIT(0);
	}
	func_50(&sVar0);
	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(10))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	Global_21 -= Global_21 & iParam0;
}

void func_2(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 4691;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "PLAYER(L)");
	uParam0->f_6 = 2;
}

void func_3(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5095;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "RPG(L)");
	uParam0->f_6 = 2;
}

void func_4(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5147;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "LAW(L)");
	uParam0->f_6 = 2;
}

void func_5(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 2565;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "DEED MANAGER");
	uParam0->f_6 = 2;
}

void func_6(var uParam0)
{
	*uParam0 = 5247;
	uParam0->f_1 = 5259;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "BEAT MANAGER");
	uParam0->f_6 = 2;
}

void func_7(var uParam0)
{
	*uParam0 = 5317;
	uParam0->f_1 = 5354;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "BT VALIDATOR A");
	uParam0->f_6 = 2;
}

void func_8(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5375;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "TUTORIAL");
	uParam0->f_6 = 2;
}

void func_9(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5793;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "COMPANION TRUST");
	uParam0->f_6 = 2;
}

void func_10(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 5894;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "LOANSHARKING");
	uParam0->f_6 = 2;
}

void func_11(var uParam0)
{
	*uParam0 = 6382;
	uParam0->f_1 = 6489;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "BANK ROBBERY");
	uParam0->f_6 = 2;
}

void func_12(var uParam0)
{
	*uParam0 = 7032;
	uParam0->f_1 = 7166;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "EVENT AREA");
	uParam0->f_6 = 2;
}

void func_13(var uParam0)
{
	*uParam0 = 8453;
	uParam0->f_1 = 8466;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "VEHICLE ROBBERY");
	uParam0->f_6 = 2;
}

void func_14(var uParam0)
{
	*uParam0 = 8492;
	uParam0->f_1 = 8511;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "TRAIN ROBBERY");
	uParam0->f_6 = 2;
}

void func_15(var uParam0)
{
	*uParam0 = 8717;
	uParam0->f_1 = 8836;
	uParam0->f_2 = 9118;
	strcpy_s(&(uParam0->f_3), 24, "HOME ROBBERY");
	uParam0->f_6 = 2;
}

void func_16(var uParam0)
{
	*uParam0 = 9130;
	uParam0->f_1 = 9276;
	uParam0->f_2 = 9424;
	strcpy_s(&(uParam0->f_3), 24, "COMPANIONS");
	uParam0->f_6 = 2;
}

void func_17(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 9452;
	uParam0->f_2 = 9475;
	strcpy_s(&(uParam0->f_3), 24, "USE CONTEXT");
	uParam0->f_6 = 2;
}

void func_18(var uParam0)
{
	*uParam0 = 9679;
	uParam0->f_1 = 9687;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "CARAVAN");
	uParam0->f_6 = 2;
}

void func_19(var uParam0)
{
	*uParam0 = 9719;
	uParam0->f_1 = 9741;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "CARAVAN EVENT");
	uParam0->f_6 = 2;
}

void func_20(var uParam0)
{
	*uParam0 = 9910;
	uParam0->f_1 = 9918;
	uParam0->f_2 = 9962;
	strcpy_s(&(uParam0->f_3), 24, "UNDERTAKER");
	uParam0->f_6 = 2;
}

void func_21(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 9998;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "SATCHEL ITEMS");
	uParam0->f_6 = 2;
}

void func_22(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 10014;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "GAME PERCENT");
	uParam0->f_6 = 2;
}

void func_23(var uParam0)
{
	*uParam0 = 12766;
	uParam0->f_1 = 12814;
	uParam0->f_2 = 12830;
	strcpy_s(&(uParam0->f_3), 24, "Campfires");
	uParam0->f_6 = 2;
}

void func_24(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 12954;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "Drunk Manager");
	uParam0->f_6 = 2;
}

void func_25(var uParam0)
{
	*uParam0 = 13631;
	uParam0->f_1 = 13644;
	uParam0->f_2 = 13813;
	strcpy_s(&(uParam0->f_3), 24, "WS Manager");
	uParam0->f_6 = 2;
}

void func_26(var uParam0)
{
	*uParam0 = 13821;
	uParam0->f_1 = 13877;
	uParam0->f_2 = 14359;
	strcpy_s(&(uParam0->f_3), 24, "Minigame Mger");
	uParam0->f_6 = 2;
}

void func_27(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 14375;
	uParam0->f_2 = 15535;
	strcpy_s(&(uParam0->f_3), 24, "CompAct Deeds");
	uParam0->f_6 = 2;
}

void func_28(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 15697;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "BLIP MANAGER LONG");
	uParam0->f_6 = 2;
}

void func_29(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 15749;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "GUAMA LAW");
	uParam0->f_6 = 2;
}

void func_30(var uParam0)
{
	*uParam0 = 15757;
	uParam0->f_1 = 15782;
	uParam0->f_2 = 16702;
	strcpy_s(&(uParam0->f_3), 24, "AMBVIG LONG");
	uParam0->f_6 = 2;
}

void func_31(var uParam0)
{
	*uParam0 = 16723;
	uParam0->f_1 = 16731;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "COLLECTABLES");
	uParam0->f_6 = 2;
}

void func_32(var uParam0)
{
	*uParam0 = 16927;
	uParam0->f_1 = 16990;
	uParam0->f_2 = 17026;
	strcpy_s(&(uParam0->f_3), 24, "FishingAmbient");
	uParam0->f_6 = 2;
}

void func_33(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17064;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "RichPresenceMgr");
	uParam0->f_6 = 2;
}

void func_34(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17123;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "AUTOSAVE");
	uParam0->f_6 = 2;
}

void func_35(var uParam0)
{
	*uParam0 = 4683;
	uParam0->f_1 = 17317;
	uParam0->f_2 = 4683;
	strcpy_s(&(uParam0->f_3), 24, "CONTENT_PASSED");
	uParam0->f_6 = 2;
}

void func_36()
{
	if (func_112() != -1)
	{
		return;
	}
	Global_40.f_9074 = 0;
	Global_40.f_9074.f_1 = 0;
}

void func_37()
{
	int iVar0;

	iVar0 = func_113();
	if (iVar0 != 9)
	{
	}
	else
	{
		STREAMING::REMOVE_IPL_HASH(809554858);
	}
}

bool func_38(int iParam0)
{
	return Global_21 & iParam0 != 0;
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_41(int iParam0)
{
	Global_21 |= iParam0;
}

float func_42()
{
	return Global_1954815.f_3;
}

bool func_43(int iParam0)
{
	return Global_1898164 & iParam0 != 0;
}

void func_44()
{
	Global_1898164.f_163 = func_114(0, 0, 0);
}

void func_45()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	var uVar8[10];
	int iVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	int iVar28;

	iVar0 = func_112();
	if (iVar0 != -1 && iVar0 != 0)
	{
		return;
	}
	if (iVar0 == -1)
	{
		func_115();
	}
	if (iVar0 == -1)
	{
		if (func_114((1 << 12), func_43(4), !func_43(4)))
		{
			func_116();
			func_117();
			return;
		}
		if (func_118(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			if (!func_119() || !func_120(6144))
			{
				func_121(0, 1, 0, 0);
				func_122();
			}
			else if (Global_1935630.f_18)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			return;
		}
	}
	if (iVar0 == -1)
	{
		Global_1430242.f_9 = 1;
	}
	if (iVar0 == -1)
	{
		iVar7 = Global_40.f_4283.f_1;
		if (func_47(iVar7) && func_123(iVar7))
		{
			bVar5 = true;
			bVar6 = func_124(iVar7);
		}
	}
	bVar20 = ENTITY::IS_ENTITY_DEAD(Global_35);
	if (iVar0 == -1)
	{
		iVar21 = func_125();
	}
	bVar22 = func_126();
	iVar3 = 0;
	while (iVar3 < Global_1898329)
	{
		if (!func_127(Global_1898330[iVar3]))
		{
		}
		else
		{
			iVar23 = func_128(Global_1898330[iVar3]);
			if (iVar23 == 3 || iVar23 == 4)
			{
			}
			else if (iVar23 != 1 && iVar23 != 2)
			{
				func_129(Global_1898330[iVar3]);
			}
			else
			{
				func_130(iVar3, 0);
				switch (Global_1898346[iVar3 /*6*/].f_3)
				{
					case 1:
						iVar24 = Global_1898346[iVar3 /*6*/].f_4;
						if (func_131(iVar24))
						{
							func_132(iVar24, iVar3, bVar22, iVar0, 0, bVar20);
							if (iVar0 == -1)
							{
								if (func_133(iVar24, bVar5, iVar7))
								{
									iVar4++;
									if (iVar19 < 10)
									{
										uVar8[iVar19] = Global_1898330[iVar3];
										iVar19++;
									}
								}
								Global_1430242.f_1++;
								if (func_134(iVar3, 64))
								{
									Global_1430242++;
								}
							}
						}
						break;
					case 4:
						if (iVar0 == -1)
						{
							func_135(Global_1898330[iVar3], iVar21, Global_1898346[iVar3 /*6*/].f_4, Global_1898346[iVar3 /*6*/].f_5);
							Global_1430242.f_4++;
						}
						break;
					case 2:
						iVar1 = Global_1898346[iVar3 /*6*/].f_4;
						switch (iVar1)
						{
							case 1:
								if (iVar0 == -1)
								{
									func_136(iVar3);
								}
								break;
							case 3:
								if (iVar0 == -1)
								{
									func_137(iVar3);
								}
								break;
							case 6:
								if (iVar0 == -1)
								{
									func_138(iVar3);
								}
								break;
							case 2:
								if (iVar0 == -1)
								{
									func_139(iVar3);
								}
								break;
						}
						if (iVar0 == -1)
						{
							Global_1430242.f_5++;
						}
						break;
					case 5:
						if (iVar0 == -1)
						{
							Global_1430242.f_6++;
						}
						break;
					case 6:
						iVar2 = Global_1898346[iVar3 /*6*/].f_4;
						if (iVar2 == 0)
						{
							if (iVar0 == -1)
							{
								func_140(iVar3);
							}
						}
						if (iVar0 == -1)
						{
							Global_1430242.f_7++;
						}
						break;
					case 8:
						if (iVar0 == -1)
						{
							iVar25 = Global_1898346[iVar3 /*6*/].f_4;
							if (func_141(iVar25))
							{
								if (func_142(Global_1347702[iVar25 /*49*/].f_13, 64))
								{
									Global_1430242.f_2++;
								}
								func_143(iVar25);
							}
						}
						break;
					case 10:
						break;
					case 11:
						func_144(Global_1898330[iVar3], iVar3);
						if (iVar0 == -1)
						{
							Global_1430242.f_8++;
						}
						break;
					case 12:
						break;
					default:
						break;
				}
			}
		}
		iVar3++;
	}
	if (iVar0 == -1)
	{
		iVar26 = 0;
		while (iVar26 < Global_40.f_450)
		{
			if (Global_40.f_450[iVar26] > -1 && Global_40.f_450[iVar26] < 200)
			{
				if (Global_1347702[Global_40.f_450[iVar26] /*49*/].f_12 & 1 != 0)
				{
					Global_1430242.f_3++;
					if (func_145(Global_40.f_450[iVar26], bVar5, iVar7))
					{
						iVar4++;
						if (iVar19 < 10)
						{
							uVar8[iVar19] = Global_1347702[Global_40.f_450[iVar26] /*49*/].f_15;
							iVar19++;
						}
					}
				}
			}
		else
		{
			}
			else
			{
				iVar26++;
			}
		}
		if (Global_1357549.f_1709 != iVar4)
		{
			bVar27 = true;
		}
		Global_1357549.f_1709 = iVar4;
		iVar28 = 0;
		while (iVar28 < iVar4)
		{
			func_146(uVar8[iVar28], bVar6, bVar5, iVar7);
			iVar28++;
		}
		if (!func_147(bVar6, bVar27, bVar5))
		{
			func_148();
		}
	}
}

int func_46()
{
	return Global_1894899.f_2;
}

bool func_47(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = Global_1888801[iParam0 /*35*/].f_20;
	bVar1 = func_149(iParam0, 32);
	if (iVar0 == 8)
	{
		return;
	}
	if ((!bVar1 && iVar0 != 3) && iVar0 != 4)
	{
		return;
	}
	bVar2 = false;
	if (Global_1572887.f_12 == -1 && iParam0 == func_113())
	{
		if (((((((iParam0 != 58 || func_150()) && !func_151(4)) && !func_152(67)) && !func_153(67)) && !(func_154(43) && !func_154(44))) && !(func_154(59) && !func_154(60))) && !func_156(func_155(iParam0), (1 << 13)))
		{
			bVar2 = true;
			iVar3 = 52;
			if (func_154(70))
			{
				iVar3 = 46;
			}
			else
			{
				iVar3 = 52;
			}
		}
	}
	else
	{
		switch (Global_1888801[iParam0 /*35*/].f_20)
		{
			case 3:
				bVar2 = false;
				break;
			case 4:
				if (Global_1888801[iParam0 /*35*/].f_13 != -1)
				{
					func_157(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
					Global_1888801[iParam0 /*35*/].f_13 = -1;
				}
				break;
			case 6:
				break;
		}
	}
	if (bVar2)
	{
	}
	if (bVar2 && !bParam2)
	{
		if (Global_1888801[iParam0 /*35*/].f_13 == -1)
		{
			Global_1888801[iParam0 /*35*/].f_14 = iVar3;
			Global_1888801[iParam0 /*35*/].f_13 = func_158(iParam0, iVar3, Global_1888801[iParam0 /*35*/].f_15, -1);
			func_159(iParam0, iVar3, Global_1888801[iParam0 /*35*/].f_15, &(Global_1888801[iParam0 /*35*/].f_22));
			if (iParam0 == 9)
			{
				if (MAP::DOES_BLIP_EXIST(Global_36308[Global_1888801[iParam0 /*35*/].f_13]))
				{
					MAP::SET_BLIP_COORDS(Global_36308[Global_1888801[iParam0 /*35*/].f_13], Global_1888801[iParam0 /*35*/].f_15);
					MAP::BLIP_ADD_MODIFIER(Global_36308[Global_1888801[iParam0 /*35*/].f_13], joaat("BLIP_MODIFIER_SHOW_HEIGHT"));
				}
			}
			if (Global_1572887.f_12 == -1)
			{
				if (iVar3 == 52 && Global_1357549.f_1708)
				{
					func_160(Global_1888801[iParam0 /*35*/].f_13, joaat("BLIP_STYLE_CAMP_HIDDEN"));
				}
			}
		}
		else if (Global_1888801[iParam0 /*35*/].f_14 != iVar3 || Global_1888801[iParam0 /*35*/].f_18)
		{
			func_157(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
			Global_1888801[iParam0 /*35*/].f_13 = -1;
			func_161(iParam0, (1 << 10));
			Global_1888801[iParam0 /*35*/].f_18 = 0;
		}
	}
	else if (Global_1888801[iParam0 /*35*/].f_13 != -1)
	{
		func_157(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 1);
		Global_1888801[iParam0 /*35*/].f_13 = -1;
		func_161(iParam0, (1 << 10));
	}
	if (func_149(iParam0, 64))
	{
		func_161(iParam0, 64);
		func_162(iParam0);
	}
	if (bVar4)
	{
		if (!func_149(iParam0, (1 << 10)))
		{
			if (func_163(iParam0, iVar3, joaat("BLIP_MODIFIER_HIDEOUT_ABANDONED")))
			{
				func_164(iParam0, (1 << 10));
			}
		}
	}
	else if (func_149(iParam0, (1 << 10)))
	{
		if (func_165(iParam0, iVar3, joaat("BLIP_MODIFIER_HIDEOUT_ABANDONED")))
		{
			func_161(iParam0, (1 << 10));
		}
	}
}

void func_49(int iParam0)
{
	Global_1898164 -= Global_1898164 & iParam0;
}

void func_50(int iParam0)
{
	if (func_112() == -1)
	{
		func_166(0);
		func_167(1);
	}
	func_168(iParam0);
}

void func_51()
{
}

void func_52()
{
	if (!Global_1935630.f_12)
	{
		func_169();
		func_170();
		if (!func_154(3))
		{
			func_171(-1336.415f, 2442.417f, 307.4014f, 0.0f, 0.0f, 0.0f, 165.0f, 165.0f, 100.0f, -1336.415f, 2442.417f, 307.4014f, 0.0f, 0.0f, 0.0f, 165.0f, 165.0f, 100.0f, 7);
		}
		else if (func_154(38) && !func_154(43))
		{
			func_171(2064.727f, -7778.147f, 50.0f, 0.0f, 0.0f, 30.0f, 1550.0f, 1900.0f, 890.0f, 2064.727f, -7778.147f, 50.0f, 0.0f, 0.0f, 30.0f, 1600.0f, 1900.0f, 890.0f, 8);
		}
		else
		{
			func_172();
		}
		func_173();
		if (Global_1935630.f_47)
		{
			func_174();
			Global_1935630.f_47 = 0;
		}
		func_175();
		func_176();
		func_177();
		func_178();
		func_179();
		func_180();
		func_181();
		func_182();
		func_183();
		if (func_112() == -1)
		{
			if (!func_184())
			{
				Global_1935630.f_54 = MISC::GET_GAME_TIMER();
			}
		}
		if (((!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()) && CAM::IS_SCREEN_FADED_IN()) && !CAM::IS_GAMEPLAY_CAM_RENDERING()) && !func_185(128))
		{
			MAP::SET_MINIMAP_FOW_REVEAL_COORDINATE(Global_36, 911509858);
		}
		if (!Global_40.f_9421)
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0) && MISC::GET_GAME_TIMER() < Global_1430258 + 2000)
			{
				Global_40.f_9421 = 1;
			}
		}
	}
}

void func_53()
{
	Global_36616 = 0;
	if (func_112() != -1)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	func_186();
	func_187();
	func_188();
	func_189();
}

void func_54()
{
	bool bVar0;
	bool bVar1;

	bVar1 = func_190(PLAYER::PLAYER_ID(), 1, 0, 1);
	if (func_112() == -1)
	{
		bVar0 = func_191();
		func_192(bVar0);
		func_193(bVar0);
		func_194();
		func_195(bVar0);
		func_196();
	}
	if (!Global_1934266.f_61 == 1)
	{
		func_197(bVar1);
		if (func_112() == -1)
		{
			func_198(bVar0, bVar1);
			func_199(bVar0);
		}
	}
}

void func_55()
{
	func_200();
}

void func_56()
{
	if (func_112() != -1)
	{
		return;
	}
	func_201();
	if (func_202() == 0)
	{
		if (func_203(128))
		{
			func_200();
			func_204(128);
		}
	}
	func_205();
	func_206();
}

void func_57()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		Global_1326862.f_3 = 0;
	}
	else
	{
		Global_1326862 = 0;
		Global_1326862.f_3 = 1;
	}
}

void func_58()
{
	if (Global_1326862.f_3)
	{
		func_207();
	}
}

void func_59()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	bVar0 = Global_1905944.f_5696;
	Global_1905944.f_5696 = 0;
	func_208();
	if (func_185((1 << 15)))
	{
		return;
	}
	if (!func_209(0))
	{
		return;
	}
	if (func_119() && !func_114(0, 0, 1))
	{
		return;
	}
	func_210(&iVar1, &iVar2, 0, 1);
	if (iVar1 == -1 || iVar2 == -1)
	{
		return;
	}
	iVar3 = func_211(iVar1, iVar2);
	bVar4 = true;
	if (!func_212(iVar3, &bVar4, bVar0))
	{
		if (!func_213(iVar3, 64) || !bVar4)
		{
			func_214(iVar1, iVar2);
		}
		else
		{
			iVar5 = func_215(iVar3);
			func_210(&iVar1, &iVar2, iVar5 + 1, 0);
			if (iVar1 != -1 && iVar2 != -1)
			{
				func_216(func_211(iVar1, iVar2));
			}
		}
		return;
	}
	if (func_213(iVar3, 8))
	{
		func_217(iVar3);
	}
	bVar6 = func_213(iVar3, (1 << 10));
	iVar7 = Global_1905944.f_22[iVar3 /*9*/];
	iVar9 = func_218(iVar3);
	if (iVar9 == 0)
	{
		iVar9 = -2;
	}
	if (iVar7 != 0)
	{
		if (bVar6)
		{
			Global_1905944.f_22[iVar3 /*9*/].f_1 = func_219(iVar7, iVar3, iVar9, iVar8);
		}
		else
		{
			Global_1905944.f_22[iVar3 /*9*/].f_1 = func_220(MISC::VAR_STRING(0, iVar7), iVar9, 0, 0, iVar8, 1);
		}
		func_221();
		if (func_222(iVar3))
		{
			func_216(func_223(iVar3));
		}
	}
	func_214(iVar1, iVar2);
	if (bVar6 && Global_1905944.f_22[iVar3 /*9*/].f_1 == 0)
	{
		return;
	}
	func_224(&iVar1, &iVar2);
}

void func_60()
{
	if (func_225() == 0)
	{
		if (func_226(Global_1391411.f_1, 1))
		{
			func_227(&(Global_1391411.f_1), 1);
		}
		return;
	}
	if (func_228())
	{
		return;
	}
	if (func_226(Global_1391411.f_1, 1))
	{
		func_229(Global_1391411, 1);
		Global_1391411 = -1;
		func_227(&(Global_1391411.f_1), 1);
		return;
	}
	func_230(1);
}

void func_61()
{
	int iVar0;
	bool bVar1;

	if (Global_1879534)
	{
		return;
	}
	else if (func_114(0, 0, 1))
	{
		if (func_120(0))
		{
			func_231();
			func_232();
		}
		return;
	}
	else if (Global_43891)
	{
		func_231();
		func_232();
		return;
	}
	else if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	else if (func_118(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_233((1 << 14));
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!func_234(iVar0))
		{
		}
		else if (!MISC::IS_BIT_SET(Global_40.f_9052, iVar0))
		{
		}
		else if (func_235(iVar0))
		{
			func_236(iVar0);
		}
		else if (func_237(Global_1392626[iVar0 /*32*/].f_9, 8))
		{
			if (Global_1392626[iVar0 /*32*/].f_10 & 2 != 0)
			{
				func_238(iVar0);
				func_239(iVar0);
			}
		}
		else if (!func_240(iVar0))
		{
			if (Global_1392626[iVar0 /*32*/].f_10 & 2 != 0)
			{
				func_238(iVar0);
				func_239(iVar0);
			}
			bVar1 = Global_1392626[iVar0 /*32*/].f_9 & (1 << 12) == false;
			func_241(iVar0, 0, bVar1);
		}
		else
		{
			if (Global_1392626[iVar0 /*32*/].f_9 & (1 << 12) != 0)
			{
				func_242(iVar0);
			}
			func_243(iVar0);
			func_244(iVar0);
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
			{
				if (func_245(iVar0, Global_1392626[iVar0 /*32*/].f_5))
				{
					if (!func_246(Global_1392626[iVar0 /*32*/].f_3))
					{
						func_247(Global_1392626[iVar0 /*32*/].f_3, 0);
						func_248(Global_1392626[iVar0 /*32*/].f_3);
					}
				}
				else if (func_246(Global_1392626[iVar0 /*32*/].f_3))
				{
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
					{
						func_129(Global_1392626[iVar0 /*32*/].f_3);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_62()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9079[iVar0] = 0;
		iVar0++;
	}
	switch (func_112())
	{
		case -1:
			func_250(0, 5, func_249(0), 0);
			func_250(1, 105, func_249(1), 0);
			func_250(2, 76, func_249(2), 0);
			func_250(3, 38, func_249(3), 0);
			break;
	}
}

void func_63()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (func_112() != -1)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	if (func_114(0, 0, 1))
	{
		if (func_114(4220662, 0, 1))
		{
			bVar0 = true;
			bVar1 = true;
		}
	}
	if (func_251((1 << 30)))
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (func_252(iVar2))
		{
			if (!bVar1)
			{
				if (!func_253(iVar2))
				{
					if (func_254(iVar2))
					{
						if (func_255(iVar2))
						{
							if (!func_251(16))
							{
								if (Global_1934182[iVar2 /*18*/].f_16 == 0)
								{
									if (VOLUME::DOES_VOLUME_EXIST(Global_1934182[iVar2 /*18*/].f_7))
									{
										POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1934182[iVar2 /*18*/].f_7, 26592, 0, 0, -1, joaat("SHOP_PEDS_RHODES"), 0);
										POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1934182[iVar2 /*18*/].f_7, 0, 26592, 0, -1, joaat("SHOP_PEDS_RHODES"), 0);
									}
									Global_1934182[iVar2 /*18*/].f_16 = 1;
								}
								if (!func_256(iVar2) && func_257(iVar2))
								{
									func_258(iVar2, 1);
									func_259(32);
									func_260(16);
								}
							}
						}
						else if (!func_251(32))
						{
							if (VOLUME::DOES_VOLUME_EXIST(Global_1934182[iVar2 /*18*/].f_7))
							{
								POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1934182[iVar2 /*18*/].f_7);
								POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1934182[iVar2 /*18*/].f_7);
							}
							Global_1934182[iVar2 /*18*/].f_16 = 0;
							if (func_257(iVar2))
							{
								func_261(iVar2);
								func_259(16);
								func_260(32);
							}
						}
					}
				}
			}
			if ((func_149(Global_1934182[iVar2 /*18*/], (1 << 21)) || func_251(2)) || bVar0)
			{
				func_262(iVar2);
				if (func_246(Global_1934182[iVar2 /*18*/].f_5))
				{
					func_129(Global_1934182[iVar2 /*18*/].f_5);
				}
			}
			else if (func_263(iVar2))
			{
				if (func_264(iVar2))
				{
				}
				else if (!func_246(Global_1934182[iVar2 /*18*/].f_5) && func_266(func_265(iVar2), 0))
				{
					func_267(iVar2);
				}
			}
			else
			{
				fVar3 = BUILTIN::VDIST2(Global_1934182[iVar2 /*18*/].f_1, Global_36);
				func_268(iVar2, fVar3);
			}
		}
		iVar2++;
	}
}

void func_64()
{
	func_269();
	func_270(Global_1888801[11 /*35*/].f_3, "ea_logCampRestrict", 1, 0, 0, 0, -1082130432);
	func_270(Global_1888801[15 /*35*/].f_3, "ea_indReservRestrict", 1, 0, 0, 0, -1082130432);
	func_271();
	Global_1898092.f_2 = func_272();
	Global_1898092.f_26.f_6 = 0;
	Global_1898092.f_26.f_4 = 0;
	Global_1898092.f_26 = 0;
	Global_1898092.f_26.f_1 = -1;
	Global_1898092.f_26.f_2 = -1;
	Global_1898092.f_26.f_3 = -1;
}

void func_65()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	Vector3 vVar8;
	var uVar11;
	int iVar12;
	int iVar13;
	Vector3 vVar14;

	iVar0 = Global_1898092.f_2;
	func_274(iVar0, func_273());
	func_275();
	switch (Global_1898092)
	{
		case 0:
			iVar5 = func_276(iVar0);
			func_277(&iVar0, &iVar5);
			func_278(iVar0, iVar5);
			if (func_279(iVar0, iVar5))
			{
				func_280(iVar0, (1 << 30));
				func_280(iVar0, (1 << 28));
			}
			if ((!func_281(1) && !func_281(2)) && (func_282(iVar0) || func_283(iVar0, (1 << 30))))
			{
				Global_1898092.f_36 = iVar5;
				if (Global_40.f_9096[iVar0 /*12*/].f_2 >= 0)
				{
					if (func_284(iVar0) && !func_285(iVar0, (1 << 23)))
					{
						if (func_286(iVar0, iVar5))
						{
							if (Global_40.f_9096[iVar0 /*12*/].f_1 == -1)
							{
								if (iVar5 < func_287(iVar0))
								{
									Global_1898092.f_36 = iVar5 + 1;
								}
								else
								{
									Global_1898092.f_36 = func_287(iVar0);
								}
								func_288(iVar0, &(Global_1898092.f_36));
							}
							else
							{
								Global_1898092.f_36 = Global_40.f_9096[iVar0 /*12*/].f_1;
								func_288(iVar0, &(Global_1898092.f_36));
							}
							func_289(iVar0);
							func_290(4);
							func_291(1);
						}
					}
					else
					{
						func_292(iVar0, &uVar4, &uVar3, &uVar2, &uVar1);
					}
					if (func_283(iVar0, (1 << 30)) && (((func_283(iVar0, (1 << 28)) || func_283(iVar0, (1 << 22))) || func_283(iVar0, (1 << 31))) || !func_284(iVar0)))
					{
						if (func_286(iVar0, iVar5))
						{
							func_290(4);
							func_291(1);
						}
					}
				}
				else if (func_283(iVar0, (1 << 30)) && (((func_283(iVar0, (1 << 28)) || func_283(iVar0, (1 << 22))) || func_283(iVar0, (1 << 31))) || !func_284(iVar0)))
				{
					if (func_286(iVar0, iVar5))
					{
						func_290(4);
						func_291(1);
					}
				}
			}
			if (func_281(1))
			{
				func_291(5);
			}
			else if (func_281(2))
			{
				CAM::DO_SCREEN_FADE_OUT(500);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				func_291(4);
			}
			else if (!func_281(4))
			{
				uVar6 = Global_1898092.f_2;
				Global_1898092.f_2++;
				if (Global_1898092.f_2 >= 4)
				{
					Global_1898092.f_2 = 0;
				}
			}
			if (func_283(1, 2))
			{
				func_293();
			}
			break;
		case 1:
		case 2:
			if (func_283(1, 2))
			{
				func_293();
			}
			break;
		case 3:
			iVar0 = Global_1898092.f_2;
			Global_40.f_9096[iVar0 /*12*/].f_1 = -1;
			if (Global_1898092.f_36 > 0)
			{
				func_288(iVar0, &(Global_1898092.f_36));
				Global_40.f_9096[iVar0 /*12*/] = Global_1898092.f_36;
				Global_40.f_9096[iVar0 /*12*/].f_2 = -1;
				func_294(iVar0, Global_1898092.f_36);
			}
			func_291(0);
			func_295(iVar0, (1 << 30));
			if (func_283(1, 2))
			{
				func_293();
			}
			break;
		case 4:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_291(5);
			}
			else if (!CAM::IS_SCREEN_FADING_OUT())
			{
				func_291(5);
			}
			break;
		case 5:
			if (Global_1898092.f_36 <= 0 || func_296(Global_1898092.f_35, Global_1898092.f_36, 1, 0, 0))
			{
				if (Global_1898092.f_36 > 0)
				{
					func_288(Global_1898092.f_35, &(Global_1898092.f_36));
					Global_40.f_9096[Global_1898092.f_35 /*12*/] = Global_1898092.f_36;
					Global_40.f_9096[Global_1898092.f_35 /*12*/].f_2 = -1;
					Global_40.f_9096[Global_1898092.f_35 /*12*/].f_1 = -1;
					func_294(Global_1898092.f_35, Global_1898092.f_36);
				}
				iVar7 = func_297(Global_1898092.f_35);
				if (func_47(iVar7))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_35))
					{
						if (!Global_1935630.f_12)
						{
							iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
							iVar13 = func_276(Global_1898092.f_35);
							func_298(Global_1898092.f_35, &vVar8, &uVar11, iVar12, iVar13);
							func_299(Global_35, vVar8, uVar11, 4, (1 << 30));
						}
					}
				}
				func_295(iVar0, (1 << 30));
				func_291(6);
			}
			break;
		case 6:
			func_300(1, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			func_291(7);
			break;
		case 7:
			vVar14 = { func_301(Global_1898092.f_35, func_276(Global_1898092.f_35)) /*3*/ };
			func_302(vVar14, 110.0f, 0);
			func_303(vVar14, 110.0f, 0);
			func_304(vVar14, 110.0f, 0, 0, 1, 1, 0);
			func_305(1);
			func_305(2);
			func_295(iVar0, (1 << 30));
			Global_1898092.f_35 = -1;
			Global_1898092.f_36 = -1;
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_291(0);
			break;
	}
}

void func_66()
{
	func_306(-1);
}

void func_67()
{
	if (func_307())
	{
		func_308();
		return;
	}
	func_309();
}

void func_68()
{
	if (func_112() != -1)
	{
		return;
	}
}

void func_69()
{
	int iVar0;
	float fVar1;
	var uVar2;

	if (!func_310())
	{
		return;
	}
	if (!func_127(Global_1392581.f_1))
	{
		Global_1392581.f_1 = func_311(2, 0, 2, 561818960);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
	{
		func_312(Global_1392581.f_1, 1, 2);
		if (func_226(Global_1392581.f_3, 16))
		{
			iVar0 = 14;
		}
		else
		{
			iVar0 = func_313(Global_36, 1);
		}
		if (func_226(Global_1392581.f_3, 16) || (func_314(iVar0) && !func_315(iVar0, 2)))
		{
			fVar1 = 200.0f;
			if (func_226(Global_1392581.f_3, 16) || func_316(iVar0, &uVar2, fVar1, -1))
			{
				func_248(Global_1392581.f_1);
			}
		}
	}
}

void func_70()
{
	func_317();
	if (func_112() != -1)
	{
		return;
	}
	func_319(0, 77, func_318(0));
	func_319(1, 64, func_318(1));
	func_319(2, 96, func_318(2));
	func_319(3, 42, func_318(3));
	func_319(4, 102, func_318(4));
	func_319(5, 91, func_318(5));
	func_319(6, 89, func_318(6));
	func_319(7, 29, func_318(7));
}

void func_71()
{
	int iVar0;
	bool bVar1;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392240, false))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_320(Global_1392240.f_1[iVar0 /*18*/].f_4, iVar0))
		{
			if (func_246(Global_1392240.f_1[iVar0 /*18*/].f_13))
			{
				func_129(Global_1392240.f_1[iVar0 /*18*/].f_13);
			}
			func_321(iVar0, 1);
		}
		else if (!func_322(iVar0))
		{
			switch (iVar0)
			{
				case 6:
					if (func_323(1, 1))
					{
						func_324(6, 0);
					}
					break;
				case 7:
					if (BUILTIN::VDIST(Global_36, Global_1392240.f_1[iVar0 /*18*/]) < 200.0f)
					{
						func_324(7, 0);
					}
					break;
			}
		}
		else
		{
			bVar1 = func_325(iVar0);
			func_326(iVar0, bVar1);
			if (bVar1)
			{
				func_327(iVar0);
				func_328(iVar0);
				func_329(iVar0);
			}
			else
			{
				func_330(iVar0);
				if (func_246(Global_1392240.f_1[iVar0 /*18*/].f_13))
				{
					func_129(Global_1392240.f_1[iVar0 /*18*/].f_13);
				}
			}
		}
		iVar0++;
	}
}

void func_72()
{
	func_331();
}

void func_73()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1359489[iVar0] = -1;
		iVar0++;
	}
	Global_1359489.f_15 = 0;
	Global_1359489.f_16 = 0;
	Global_1359489.f_18 = 0;
	Global_1359453 = 0;
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("DEF_COMP_BRAIN"));
	Global_1359489.f_38 = Global_40.f_4283.f_5;
	func_332(&(Global_1359489.f_25), 1, 1);
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] == 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/] = func_333(iVar1);
		}
		iVar1++;
	}
}

void func_74()
{
	func_334();
	if (!func_335(Global_35, 0))
	{
		return;
	}
	if (func_336((1 << 17)))
	{
		if (!func_126())
		{
			if (PED::DOES_GROUP_EXIST(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX())))
			{
				COMPANION::_0x0F1CD8CA9E65D5F6(PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX()), 234527101);
			}
			func_337((1 << 17));
		}
		func_338();
	}
	else if (func_126())
	{
		func_339((1 << 17));
	}
	func_340(&(Global_1391438.f_7[0 /*99*/]), 0);
	func_340(&(Global_1391438.f_7[1 /*99*/]), 1);
	func_341();
	func_342();
	func_343();
}

void func_75()
{
	Global_1357549.f_1497.f_8 |= 1;
}

void func_76()
{
	if (!func_344())
	{
		return;
	}
	func_345();
}

void func_77()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
		{
			HUD::_UI_PROMPT_DELETE(Global_1945188[iVar0 /*18*/].f_3);
		}
		Global_1945188[iVar0 /*18*/].f_3 = 0;
		Global_1945188[iVar0 /*18*/].f_4 = 0;
		Global_1945188[iVar0 /*18*/] = 1;
		Global_1945188[iVar0 /*18*/].f_16 = 0;
		Global_1945188[iVar0 /*18*/].f_1 = 0;
		Global_1945188[iVar0 /*18*/].f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
		Global_1945188[iVar0 /*18*/].f_9 = 0.0f;
		Global_1945188[iVar0 /*18*/].f_10 = 0;
		Global_1945188[iVar0 /*18*/].f_11 = 0;
		Global_1945188[iVar0 /*18*/].f_5 = -1;
		Global_1945188[iVar0 /*18*/].f_2 = 1;
		Global_1945188[iVar0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
		iVar0++;
	}
	Global_1945188.f_865 = 0;
}

void func_78()
{
}

void func_79()
{
	if (func_112() == -1)
	{
		func_346();
		func_347();
		func_348();
		func_349();
	}
}

void func_80()
{
	Global_1327490.f_91 = -1;
	Global_1327490.f_89 = -1;
}

void func_81()
{
	if (func_114(8, 1, 1))
	{
		func_350();
		return;
	}
	if ((!func_351(func_113()) && !func_352(Global_1327490.f_91)) && !func_352(Global_1327490.f_89))
	{
		func_350();
		return;
	}
	if (func_352(Global_1327490.f_91))
	{
		if (Global_1327490.f_89 != Global_1327490.f_91)
		{
			if (func_352(Global_1327490.f_89))
			{
				func_350();
			}
			if (!func_353(Global_1327490.f_91))
			{
				return;
			}
		}
	}
	func_354();
	if (func_355())
	{
		if (!func_352(Global_1327490.f_89))
		{
			func_356();
		}
	}
}

void func_82()
{
}

void func_83()
{
	if (func_112() != -1)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
	}
	if (func_357())
	{
		func_358();
	}
}

void func_84()
{
	func_359();
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
		SCRIPTS::TERMINATE_THREAD(Global_1425351.f_19);
	}
}

void func_85()
{
	func_360();
	func_361();
}

void func_86()
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	struct<2> /*16*/ sVar6;
	float fVar8;
	int iVar9[50];
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;

	if (!func_362(Global_1935630, (1 << 13)))
	{
		return;
	}
	if (func_185((1 << 15)))
	{
		return;
	}
	func_363(&Global_1935630, (1 << 13));
	fVar0 = 0.0f;
	fVar0 += (0.9259259f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP1"))));
	fVar0 += (0.2525252f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP2"))));
	fVar0 += (0.2923976f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP3"))));
	fVar0 += (0.462963f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP4"))));
	fVar0 += (0.9259259f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP5"))));
	fVar0 += (0.308642f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP6"))));
	fVar0 += (5.555555f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP7"))));
	fVar0 += (0.6944444f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP8"))));
	fVar0 += (0.3703704f * BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("MISSIONS_CHP9"))));
	fVar0 += (0.5f * func_365(10.0f, BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("RC_STRANDS")))));
	fVar0 += (0.6f * func_365(5.0f, BUILTIN::TO_FLOAT(func_364(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")))));
	fVar0 += (0.2f * func_365(25.0f, BUILTIN::TO_FLOAT(func_366(joaat("UNIQUE_BEATS_COMPLETED")))));
	fVar0 += (2.0f * func_365(1.0f, BUILTIN::TO_FLOAT(func_366(joaat("GANG_AMBUSH_ENCOUNTERED")))));
	fVar0 += (0.3333333f * func_365(6.0f, BUILTIN::TO_FLOAT(func_366(joaat("GANG_HIDEOUT_COMPLETED")))));
	fVar0 += (3.0f * func_365(1.0f, BUILTIN::TO_FLOAT(func_366(joaat("DISCOVERABLE_FOUND")))));
	iVar1 = func_367();
	fVar0 += (0.1111111f * func_365(9.0f, BUILTIN::TO_FLOAT(iVar1)));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES"))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS")))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES")))));
	fVar0 += func_365(1.0f, fVar2);
	fVar0 += (0.05f * func_365(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_369())));
	if (func_370(40))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_370(42))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_370(48))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_370(50))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_370(52))
	{
		fVar0 += (1.0f * 1.0f);
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = func_368(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 += (1.0f * func_365(1.0f, fVar2));
	fVar0 += (0.2f * func_365(5.0f, BUILTIN::TO_FLOAT(func_366(joaat("SHACK_FOUND")))));
	fVar0 += (0.2f * func_365(5.0f, BUILTIN::TO_FLOAT(func_364(joaat("KILLS"), joaat("LEGENDARY_ANIMALS")))));
	fVar0 += (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50));
	fVar0 += (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS"));
	fVar0 += (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20));
	fVar0 += (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += (BUILTIN::TO_FLOAT(func_371(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48));
	func_372(&iVar3, &iVar4);
	fVar0 += (2.0f * func_365((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1.0f));
	fVar0 += (2.0f * func_365(1.0f, BUILTIN::TO_FLOAT(func_373(joaat("HORSES_REACHED_MAX_BOND")))));
	fVar5 = BUILTIN::TO_FLOAT(func_374());
	fVar0 += ((3.0f * fVar5) / BUILTIN::TO_FLOAT(9));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ATTEMPTS"), joaat("BLACKJACK")))));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ATTEMPTS"), joaat("DOMINOES_HAND")))));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ATTEMPTS"), joaat("FIVE_FINGER")))));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ATTEMPTS"), joaat("POKER_HAND")))));
	fVar0 += (0.2f * func_365(5.0f, BUILTIN::TO_FLOAT(func_366(joaat("SPECIAL_PED_INTERACTION")))));
	fVar0 += (0.5f * func_365(1.0f, BUILTIN::TO_FLOAT(func_366(joaat("BATHS_TAKEN")))));
	fVar0 += (0.5f * func_365(1.0f, BUILTIN::TO_FLOAT(func_366(joaat("SHOWS_SEEN")))));
	fVar0 += (0.5f * func_365(1.0f, BUILTIN::TO_FLOAT(func_366(joaat("THEATRE_VISITS")))));
	fVar0 += ((0.5f / 6.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")))));
	fVar0 += ((0.5f / 6.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")))));
	fVar0 += ((0.5f / 6.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")))));
	fVar0 += ((0.5f / 6.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")))));
	fVar0 += ((0.5f / 6.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")))));
	fVar0 += ((0.5f / 6.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")))));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ROB_COMPLETED"), joaat("COACH")))));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ROB_COMPLETED"), joaat("HOME")))));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ROB_COMPLETED"), joaat("SHOP")))));
	fVar0 += ((1.0f / 4.0f) * func_365(1.0f, BUILTIN::TO_FLOAT(func_364(joaat("ROB_COMPLETED"), joaat("TRAIN")))));
	sVar6 = { func_375(joaat("TOTAL_PROGRESS_MADE")) /*2*/ };
	fVar8 = func_376(sVar6);
	STATS::_0xE141F6B40B1E3683(&sVar6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_127(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!func_127(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_128(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_129(Global_1898330[iVar61]);
				}
				else
				{
					func_130(iVar61, 0);
					if (func_377(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_378(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (Global_40.f_450[iVar63] > -1 && Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_378(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(func_378(Global_1898437), &iVar9);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_87()
{
	if (Global_1393237.f_4 <= 0)
	{
		Global_1393237.f_4 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 40000);
	}
	func_379();
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
}

void func_88()
{
	func_380();
	func_381();
}

void func_89()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar0 /*30*/].f_22))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iVar0 /*30*/].f_22, false);
			Global_1393237.f_11[iVar0 /*30*/].f_22 = 0;
		}
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar0 /*30*/].f_23))
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iVar0 /*30*/].f_23, false);
			Global_1393237.f_11[iVar0 /*30*/].f_23 = 0;
		}
		iVar0++;
	}
}

void func_90()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	var uVar3;

	Global_1935436.f_10 = func_382(25);
	if (Global_1935436.f_1 != -1)
	{
		func_383();
	}
	if (Global_1935436 >= 1)
	{
		if (func_384())
		{
			func_385(1);
		}
	}
	if (Global_1935436 == Global_1935436.f_1)
	{
		Global_1935436.f_1 = -1;
	}
	if (Global_1935436.f_11)
	{
		if (func_382(25))
		{
			func_386(25);
		}
		Global_1935436.f_11 = 0;
	}
	switch (Global_1935436)
	{
		case 0:
			if (Global_1935436.f_9 >= 0.5f)
			{
				Global_1935436 = 1;
				func_387();
				PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 0);
				PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 1);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
				{
					bVar0 = func_388();
					if (Global_1935436.f_6 < 0)
					{
						if (bVar0)
						{
							Global_1935436.f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						}
						else
						{
							Global_1935436.f_6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
						}
					}
					if (bVar0)
					{
						if (Global_1935436.f_6 > 1)
						{
							Global_1935436.f_6 = 0;
						}
					}
					Global_1935436.f_7 = 0;
					Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 50000));
				}
				else
				{
					Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + 9999999);
				}
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_5)
			{
				if (func_388())
				{
					iVar1 = 2;
				}
				else
				{
					iVar1 = 4;
				}
				if (Global_1935436.f_7 < iVar1)
				{
					if (func_389(&uVar2, &uVar3, 1))
					{
						func_390(Global_35, 0, "PLAYER_DRUNK_MERRY_SINGING", "", -1.0f, Global_1935436.f_6 + 1, 0, 0, 1, 1, 1, joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL"), 1, 1, 0, 0);
						Global_1935436.f_6++;
						if (Global_1935436.f_6 >= iVar1)
						{
							Global_1935436.f_6 = 0;
						}
						Global_1935436.f_7++;
						Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(30000, 120000));
					}
					else
					{
						Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 23000));
					}
				}
			}
			if (Global_1935436.f_9 >= 0.75f)
			{
				Global_1935436 = 2;
				func_387();
			}
			else if (Global_1935436.f_9 < 0.5f && Global_1935436.f_12.f_1 == 0.0f)
			{
				func_385(0);
				Global_1935436 = 0;
			}
			break;
		case 2:
			if ((func_391(Global_35) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || Global_1357549.f_1495 & (1 << 9) != 0)
			{
				func_392(1);
			}
			if (Global_1935436.f_9 < 0.75f)
			{
				Global_1935436.f_5 = (MISC::GET_GAME_TIMER() + 9999999);
				Global_1935436 = 1;
			}
			break;
	}
	if (Global_1935436 >= 1)
	{
		func_393();
	}
	if (func_394() && func_395())
	{
		func_396();
	}
}

void func_91()
{
	func_397(0);
}

void func_92()
{
	int iVar0;
	bool bVar1;

	if (func_398())
	{
		return;
	}
	if (Global_1934765.f_273)
	{
		return;
	}
	iVar0 = func_46();
	if (func_47(iVar0))
	{
		if (Global_1888801[iVar0 /*35*/].f_20 == 3)
		{
			if (func_400(func_399(iVar0)))
			{
				if (func_401(iVar0, 0))
				{
					func_402(func_399(iVar0), 0, 0);
				}
			}
		}
	}
	func_403();
	bVar1 = func_404();
	if (Global_1934765.f_272)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_405(0, 0))
		{
			func_406();
			Global_1934765.f_272 = 0;
			Global_1934765.f_274 = 0;
			Global_1934765 = 0;
		}
	}
	func_407();
	func_408();
	func_409();
}

void func_93()
{
}

void func_94()
{
	int iVar0;

	func_410();
	func_411(&Global_1899778);
	iVar0 = 0;
	while (iVar0 < Global_1899528.f_45)
	{
		Global_1899528.f_45[iVar0] = -15;
		iVar0++;
	}
}

void func_95()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_412(&Global_1899778);
	Global_1899528.f_214 = func_273();
	Global_1899528.f_215 = func_413(2057, 0);
	Global_1899528.f_209 = MISC::IS_MINIGAME_IN_PROGRESS();
	Global_1899528.f_218 = func_414(PLAYER::PLAYER_PED_ID());
	Global_1899528.f_221 = func_415(1);
	if (Global_1899528.f_217)
	{
		func_416();
	}
	if (Global_1899528.f_216 != Global_1899528.f_214)
	{
		if (Global_1899528.f_214)
		{
			func_417(0);
		}
		else
		{
			func_418(0);
		}
		Global_1899528.f_216 = Global_1899528.f_214;
	}
	if (func_419())
	{
		Global_1899528.f_207 = MISC::GET_FRAME_COUNT();
		PED::SET_PED_RESET_FLAG(Global_35, 219, true);
		if (!func_420(5))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DYNAMIC_SCENARIO"), false);
		}
	}
	if (MISC::GET_FRAME_COUNT() < Global_1899528.f_206 + 60 || MISC::GET_FRAME_COUNT() < Global_1899528.f_207 + 60)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_BLOCK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_STAND_SWITCH"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_MOUNT_SWITCH"), false);
	}
	if (func_112() != -1)
	{
		return;
	}
	if (func_191())
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		Global_1899528.f_219++;
		if (Global_1899528.f_219 >= 10)
		{
			Global_1899528.f_219 = 0;
		}
		if (!func_421(Global_1899528.f_219))
		{
			iVar0 = func_422(Global_1899528.f_219);
			if (Global_1894899.f_2 != func_423(Global_1899528.f_219) && !func_424(iVar0))
			{
				func_425(Global_1899528.f_219);
				func_426(Global_1899528.f_219);
				return;
			}
			if (!Global_1899528.f_214)
			{
				if (func_428(func_427(Global_1899528.f_219)) && func_429(iVar0))
				{
					iVar1 = func_430(iVar0);
					if (iVar1 == -1)
					{
						func_248(iVar0);
					}
				}
			}
		}
		iVar2++;
	}
}

void func_96()
{
	func_431(&Global_1899778);
}

void func_97()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (func_432(&(Global_1391438.f_5), 8))
	{
		if (func_433(&(Global_1391438.f_414), Global_1572864.f_8, Global_1572864.f_9))
		{
			func_434(&(Global_1391438.f_5), 8, 0);
		}
		return;
	}
	if (Global_1391438.f_491 != -589165916)
	{
		if (func_435(Global_1391438.f_491, 0))
		{
			Global_1391438.f_491 = -589165916;
		}
		return;
	}
	if (func_432(&(Global_1391438.f_5), 64))
	{
		if (func_436(&(Global_1391438.f_209)))
		{
			func_434(&(Global_1391438.f_5), 64, 0);
			func_437(&(Global_1391438.f_209));
		}
		else
		{
			return;
		}
	}
	if (func_438() || func_185(32))
	{
		return;
	}
	iVar2 = func_439();
	switch (iVar2)
	{
		case 1:
			if (func_440(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (func_440(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (func_114(256, 0, 1) && !bVar1)
	{
		return;
	}
	switch (Global_1391438.f_4)
	{
		case 0:
			if (func_441(Global_1391438.f_594))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(Global_1391438.f_594) && !STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(Global_1391438.f_594, Global_36))
				{
					STREAMING::REMOVE_IPL_HASH(Global_1391438.f_594);
					Global_1391438.f_594 = func_442();
				}
			}
			if (bVar1)
			{
				if (!func_443(5000))
				{
					iVar3 = func_445(0, func_444(func_439()));
					if (!func_246(iVar3))
					{
						func_248(iVar3);
					}
					if (!func_446(iVar3) && !func_447(iVar3, 1))
					{
						if (BUILTIN::VDIST2(Global_36, func_448(func_439())) < 62500.0f)
						{
							func_450(func_449(func_439()), 0);
						}
					}
				}
			}
			if (!func_451(1))
			{
				return;
			}
			if (func_452())
			{
				Global_1391438.f_2 = CLOCK::GET_CLOCK_HOURS();
				Global_1391438.f_4 = 1;
			}
			else
			{
				Global_1391438.f_4 = 3;
				func_453(1, 3);
			}
			break;
		case 1:
			if (!func_413(256, 0))
			{
				func_454(&(Global_1391438.f_414));
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Global_1391438.f_7[iVar0 /*99*/].f_9 == -589165916)
				{
					func_437(&(Global_1391438.f_7[iVar0 /*99*/]));
					if (func_455(&(Global_1391438.f_7[iVar0 /*99*/])))
					{
						Global_1391438.f_7[iVar0 /*99*/].f_12 = iVar0;
						if (!func_246(Global_1391438.f_7[iVar0 /*99*/].f_10) && !func_446(Global_1391438.f_7[iVar0 /*99*/].f_10))
						{
							func_248(Global_1391438.f_7[iVar0 /*99*/].f_10);
						}
						func_453(1, 1);
					}
					else
					{
						func_453(1, 2);
					}
				}
				iVar0++;
			}
			Global_1391438.f_4 = 3;
			break;
		case 3:
			if (!func_456(&(Global_1391438.f_595)))
			{
				func_457(&(Global_1391438.f_595), 1);
			}
			else if (func_458(&(Global_1391438.f_595)) > 5.0f)
			{
				Global_1391438.f_4 = 4;
				return;
			}
			if (func_459())
			{
				if (!func_114(0, 0, 1) && func_46() == func_113())
				{
					if (func_460(func_439()))
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[0], false))
						{
							if (func_461(0))
							{
								if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_POKER_LIGHT")))
								{
									SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_POKER_LIGHT"));
									return;
								}
								else
								{
									Global_1391438.f_598[0] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_POKER_LIGHT"), (1 << 10));
								}
							}
						}
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[1], false))
						{
							if (func_461(1))
							{
								if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_DOMINOES_LIGHT")))
								{
									SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_DOMINOES_LIGHT"));
									return;
								}
								else
								{
									Global_1391438.f_598[1] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_DOMINOES_LIGHT"), (1 << 10));
								}
							}
						}
					}
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_598[2], false))
					{
						if (func_461(2))
						{
							if (!SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_FFF_LIGHT")))
							{
								SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_FFF_LIGHT"));
								return;
							}
							else
							{
								Global_1391438.f_598[2] = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH(joaat("ACT_CAMP_FFF_LIGHT"), (1 << 10));
							}
						}
					}
				}
				Global_1391438.f_4 = 4;
			}
			break;
		case 4:
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_POKER_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_poker_light");
			}
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_DOMINOES_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_dominoes_light");
			}
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_FFF_LIGHT")))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_fff_light");
			}
			func_462(&(Global_1391438.f_595));
			Global_1391438.f_4 = 0;
			break;
	}
}

void func_98()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[0], false))
	{
		func_437(&(Global_1391438.f_7[0 /*99*/]));
	}
	else
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1391438.f_206[0]);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[1], false))
	{
		func_437(&(Global_1391438.f_7[1 /*99*/]));
	}
	else
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1391438.f_206[1]);
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_POKER_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_poker_light");
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_DOMINOES_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_dominoes_light");
	}
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(joaat("ACT_CAMP_FFF_LIGHT")))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("act_camp_fff_light");
	}
}

void func_99()
{
	func_463();
	func_464();
	func_465();
	func_466();
	func_467();
	func_468();
	func_469();
	func_470();
	func_471();
	func_472();
	func_473();
}

void func_100()
{
}

void func_101()
{
	Global_1415419.f_9720 = 0;
	func_474();
	func_475();
}

void func_102()
{
	int iVar0;
	struct<16> /*128*/ sVar1;
	bool bVar17;
	int iVar18;
	struct<13> /*104*/ sVar19;

	func_476();
	if (((func_273() || CAM::IS_SCREEN_FADED_OUT()) && !Global_1415419.f_6) && (!func_226(Global_1415419.f_3, 1) || func_362(Global_1935630, (1 << 21))))
	{
		if (Global_1415419.f_9720 > 0)
		{
			func_477(0);
			func_478();
		}
		return;
	}
	switch (Global_1415419.f_2)
	{
		case 0:
			if (Global_1415419.f_9756 != func_479())
			{
				if (func_480(func_479()))
				{
					func_474();
					Global_1415419.f_9756 = func_479();
					func_481("ambient_vignette_manager_loader", 523);
					sVar1.f_14 = (1 << 10);
					strcpy_s(&(sVar1.f_10), 32, "ambient_vignette_manager_loader");
					func_482(sVar1, 2);
				}
				return;
			}
			if (func_483(0, 0))
			{
				iVar0 = func_484();
				if (iVar0 != -1)
				{
					bVar17 = func_485();
					if (Global_1415419.f_16 != -1)
					{
						iVar18 = 0;
						if (bVar17 || func_486(Global_1415419.f_16, &iVar18, 1, 1, 0) != -1)
						{
							Global_1415419.f_17 = iVar0;
							Global_1415419.f_9721[iVar0 /*8*/] = Global_1415419.f_16;
							Global_1415419.f_9721[iVar0 /*8*/].f_2 = 1;
							Global_1415419.f_9720++;
							func_227(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 2);
							SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
							Global_1415419.f_9718 = !Global_1415419.f_9718;
							Global_1415419.f_2 = 1;
						}
						else
						{
							func_227(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 2);
							func_227(&(Global_1415419.f_19[Global_1415419.f_16 /*12*/].f_11), 1);
							Global_1415419.f_9718 = !Global_1415419.f_9718;
						}
						return;
					}
				}
				Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
			}
			Global_1415419.f_9718 = !Global_1415419.f_9718;
			break;
		case 1:
			if (func_487(Global_1415419.f_16))
			{
				SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
				if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]))
				{
					func_488(Global_1415419.f_16);
					sVar19 = -1;
					sVar19.f_11 = -1;
					sVar19.f_0 = Global_1415419.f_16;
					sVar19.f_1 = { Global_1415419.f_9 /*3*/ };
					sVar19.f_4 = { Global_1415419.f_12 /*3*/ };
					sVar19.f_7 = Global_1415419.f_15;
					sVar19.f_11 = Global_1415419.f_17;
					sVar19.f_12 = Global_1415419.f_18;
					if (!ENTITY::IS_ENTITY_DEAD(Global_1415419.f_9758))
					{
						sVar19.f_8 = Global_1415419.f_9758;
						sVar19.f_10 = 1;
						Global_1415419.f_9758 = 0;
					}
					if (!ENTITY::IS_ENTITY_DEAD(Global_1415419.f_9759))
					{
						sVar19.f_9 = Global_1415419.f_9759;
						sVar19.f_10 = 1;
						Global_1415419.f_9759 = 0;
					}
					Global_1415419.f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
					Global_1415419.f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
					Global_1415419.f_15 = 0;
					Global_1415419.f_18 = 0;
					Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Global_1415419.f_19[Global_1415419.f_16 /*12*/], &sVar19, 13, (1 << 10));
					Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_3 = Global_1415419.f_6;
					SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
					Global_1415419.f_16 = -1;
					Global_1415419.f_17 = -1;
					Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
					Global_1415419.f_6 = 0;
					Global_1415419.f_2 = 0;
				}
			}
			else
			{
				Global_1415419.f_9721[Global_1415419.f_17 /*8*/].f_2 = 0;
				Global_1415419.f_16 = -1;
				Global_1415419.f_17 = -1;
				Global_1415419.f_9719 = MISC::GET_GAME_TIMER();
				Global_1415419.f_2 = 0;
			}
			break;
	}
}

void func_103()
{
	func_477(1);
	func_478();
	func_474();
}

void func_104()
{
}

void func_105()
{
	if (func_112() == -1)
	{
		func_489();
		func_490();
		func_491();
		func_492();
		func_493();
		if (Global_40.f_9045.f_5)
		{
			if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_BAND_ROOT")) >= 1)
			{
				Global_40.f_9045.f_5 = 0;
			}
		}
		if (func_370(43))
		{
			if (func_370(47))
			{
				if (!func_370(48))
				{
					func_494();
				}
			}
			else if (func_370(46))
			{
				if (!func_370(47))
				{
					func_494();
				}
			}
			else if (func_370(45))
			{
				if (!func_370(46))
				{
					func_494();
				}
			}
			else if (func_370(44))
			{
				if (!func_370(45))
				{
					func_494();
				}
			}
			else if (!func_370(44))
			{
				func_494();
			}
		}
	}
}

void func_106()
{
	int iVar0;

	STREAMING::REQUEST_PTFX_ASSET();
	sLocal_30.f_12 = "MGFSH_Insect_Sounds";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		sLocal_30.f_13[iVar0 /*9*/].f_8 = AUDIO::GET_SOUND_ID();
		iVar0++;
	}
	func_495(&(sLocal_30.f_32));
}

void func_107()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	func_496(&(sLocal_30.f_32));
	func_497(&sLocal_30);
}

void func_108()
{
	func_498(&sLocal_30);
	STREAMING::REMOVE_PTFX_ASSET();
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_30.f_12))
	{
		AUDIO::_RELEASE_SOUNDSET(sLocal_30.f_12);
	}
}

void func_109()
{
	switch (Global_1898077.f_1)
	{
		case 0:
			func_499();
			break;
		case 3:
			func_499();
			break;
		case 4:
			func_499();
			break;
	}
}

void func_110()
{
	func_500();
	if (!func_501())
	{
		func_502(&Global_0);
		return;
	}
	if (func_112() == -1)
	{
		if (((float)(MISC::GET_GAME_TIMER() - Global_0.f_6) + (func_503(Global_36, Global_0.f_3) * 1000.0f)) > 300000.0f)
		{
			if (!func_119() && !func_504(&Global_0, 3))
			{
				func_505(0, -1);
			}
		}
		if (func_504(&Global_0, (1 << 10)))
		{
			func_506(0, 0);
			Global_0.f_6 = MISC::GET_GAME_TIMER();
			Global_0.f_3 = { Global_36 /*3*/ };
			func_507(&Global_0, (1 << 10));
		}
	}
	if (func_504(&Global_0, 3))
	{
		func_508();
	}
	else if (func_504(&Global_0, 8))
	{
		func_509();
	}
}

void func_111()
{
	switch (Global_1879514)
	{
		case 0:
			if (!func_127(Global_1879514.f_1))
			{
				return;
			}
			if (func_510(Global_1879514.f_6, 16))
			{
				func_511(&(Global_1879514.f_6), 16);
				return;
			}
			if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
			{
				return;
			}
			if (func_185((1 << 15)))
			{
				return;
			}
			if (!func_38(64))
			{
				return;
			}
			if ((Global_1879514.f_13 && !func_119()) && func_512())
			{
				return;
			}
			if (func_443(1000))
			{
				return;
			}
			if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) || CAM::IS_SCREEN_FADING_IN())
			{
				return;
			}
			if (HUD::_0x7EC0D68233E391AC(10) == 2 || HUD::_0x7EC0D68233E391AC(10) == 4)
			{
				return;
			}
			if (func_513())
			{
				Global_1879514.f_7 = MISC::GET_GAME_TIMER();
				return;
			}
			if (func_119() && Global_1879514.f_1 != func_514(76))
			{
				func_516(func_515(Global_1879514.f_1));
				func_517(2);
				return;
			}
			if (func_518(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(6)))
			{
				return;
			}
			if (Global_1879514.f_18 && (!CAM::IS_SCREEN_FADED_IN() || func_438()))
			{
				return;
			}
			if (Global_1879514.f_1 == func_514(76) && (!func_447(func_514(77), 1) || func_443(5000)))
			{
				return;
			}
			if (func_377(Global_1879514.f_1) == 8 && !func_520(Global_1347702[func_519(Global_1879514.f_1) /*49*/].f_12, (1 << 18)))
			{
				func_517(2);
			}
			else
			{
				if (func_521())
				{
					Global_1879514.f_10 = 1;
				}
				if (Global_1879514.f_18)
				{
					func_505(0, -1);
				}
				func_522();
				if (!Global_1879514.f_18 && Global_1879514.f_1 == func_514(58))
				{
					func_523(func_514(58), 600000, 1, 1.0f, 1, 0, 0, 1);
				}
				func_517(1);
			}
			break;
		case 1:
			if (MISC::GET_GAME_TIMER() >= Global_1879514.f_7 + 1000)
			{
				if ((UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("PLAYER_MENU")) || !func_524(Global_1879514.f_17)) || MISC::GET_GAME_TIMER() >= Global_1879514.f_7 + 30000)
				{
					func_517(2);
				}
			}
			break;
		case 2:
			if (Global_1879514.f_9)
			{
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
			}
			if (Global_1879514.f_17 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(Global_1879514.f_17) != 6)
			{
				UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
			func_525();
			func_517(0);
			break;
	}
}

int func_112()
{
	return Global_1572887.f_12;
}

int func_113()
{
	return Global_40.f_4283.f_1;
}

bool func_114(int iParam0, bool bParam1, bool bParam2)
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
		if (func_526())
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
		iVar0 = func_519(Global_1898164.f_1[0 /*5*/]);
		if (func_141(iVar0) && func_520(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_127(Global_1898164.f_1[0 /*5*/]))
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

void func_115()
{
	var uVar0;

	MISC::_COPY_MEMORY(&Global_1430242, &uVar0, 10);
}

void func_116()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	int iVar6;

	bVar5 = ENTITY::IS_ENTITY_DEAD(Global_35);
	iVar4 = 0;
	while (iVar4 < Global_1898330)
	{
		if (!func_127(Global_1898330[iVar4]))
		{
		}
		else
		{
			func_130(iVar4, 0);
			if (func_127(Global_1898330[iVar4]))
			{
				switch (func_377(Global_1898330[iVar4]))
				{
					case 1:
						if (!bVar0)
						{
							bVar1 = func_126();
							bVar0 = true;
						}
						if (!bVar2)
						{
							bVar3 = func_114(0, 1, 1);
							bVar2 = true;
						}
						iVar6 = Global_1898346[iVar4 /*6*/].f_4;
						func_132(iVar6, iVar4, bVar1, func_112(), bVar3, bVar5);
						break;
				}
			}
		}
		iVar4++;
	}
}

void func_117()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	bVar0 = func_185(4112);
	bVar1 = func_362(Global_1935630, (1 << 11));
	iVar2 = 0;
	while (iVar2 < Global_1898330)
	{
		if (func_127(Global_1898330[iVar2]))
		{
			switch (func_377(Global_1898330[iVar2]))
			{
				case 8:
					iVar3 = func_519(Global_1898330[iVar2]);
					if (func_141(iVar3))
					{
						if (func_142(Global_1347702[iVar3 /*49*/].f_13, 256) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iVar3 /*49*/].f_42, false))
						{
							func_527(iVar3);
							func_143(iVar3);
							func_528(Global_1898330[iVar2], bVar0, bVar1);
						}
					}
					break;
			}
		}
		iVar2++;
	}
}

bool func_118(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_190(iParam0, bParam1, bParam2, bParam3))
	{
		return true;
	}
	if (bParam1)
	{
		if (LAW::_ARE_WITNESSES_PENDING(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

bool func_119()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_529())
	{
		return false;
	}
	if (!func_447(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[2 /*74*/].f_1, 1) && func_447(Global_1347702[120 /*49*/].f_15, 1)) && !func_447(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[37 /*74*/].f_1, 1) && !func_447(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[57 /*74*/].f_1, 1) && !func_447(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[26 /*74*/].f_1, 1) && !func_447(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[62 /*74*/].f_1, 1) && func_447(Global_1835011[63 /*74*/].f_1, 1)) && !func_447(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[75 /*74*/].f_1, 1) && !func_447(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_447(Global_1835011[76 /*74*/].f_1, 1) && !func_447(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[40 /*74*/].f_1, 1) && func_447(Global_1835011[41 /*74*/].f_1, 1)) && !func_447(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[62 /*74*/].f_1, 1) && func_447(Global_1835011[63 /*74*/].f_1, 1)) && !func_447(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_447(Global_1835011[65 /*74*/].f_1, 1) && func_447(Global_1835011[66 /*74*/].f_1, 1)) && !func_447(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_120(int iParam0)
{
	return Global_1935630 & (-1 - iParam0) & 40959 != 0;
}

int func_121(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar4 = func_112() == -1;
	if (bVar4)
	{
		bVar3 = bParam1;
	}
	else
	{
		bVar3 = func_190(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1);
	}
	if (!func_530(Global_1898439, (1 << 10)))
	{
		func_531();
		func_532(&Global_1898439, (1 << 10));
		if (bParam3)
		{
			return 0;
		}
	}
	iVar2 = (Global_1898329 - 1);
	while (iVar2 >= 0)
	{
		if (func_127(Global_1898330[iVar2]) && func_246(Global_1898330[iVar2]))
		{
			if (Global_1898330[iVar2] == Global_1392581.f_1)
			{
				Jump @578; // curOff = 140
			}
			else if (!func_134(iVar2, (1 << 10)))
			{
				func_130(iVar2, 0);
				switch (Global_1898346[iVar2 /*6*/].f_3)
				{
					case 1:
						if (!Global_1835011[iVar0 /*74*/].f_71)
						{
							iVar0 = Global_1898346[iVar2 /*6*/].f_4;
							if (func_131(iVar0))
							{
								if (!bParam1)
								{
									func_533(iVar0, 0);
								}
								func_534(iVar0, -1, bVar3, 1, 1, 0, 0);
								func_535(iVar0);
								if (bVar3 && !func_536(&(Global_1835011[iVar0 /*74*/]), (1 << 15)))
								{
									func_537(&(Global_1835011[iVar0 /*74*/]), (1 << 15));
									if ((iVar0 == 7 || iVar0 == 17) && Global_1894899.f_2 == Global_1835011[iVar0 /*74*/].f_21)
									{
										Global_1835011[iVar0 /*74*/].f_64 = func_538();
									}
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 6:
						iVar5 = Global_1898346[iVar2 /*6*/].f_4;
						if (iVar5 == 0 && func_112() == -1)
						{
							iVar6 = Global_1898346[iVar2 /*6*/].f_5;
							if (Global_1392626[iVar6 /*32*/].f_3 != func_539(0))
							{
								if (bVar3)
								{
									func_540(iVar6, 0, 0);
								}
								else
								{
									func_540(iVar6, 1, 0);
								}
								if (func_246(Global_1392626[iVar6 /*32*/].f_3))
								{
									func_129(Global_1392626[iVar6 /*32*/].f_3);
								}
								if (bParam3)
								{
									return 0;
								}
							}
						}
						break;
					case 2:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
					default:
						if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
						{
							MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
						}
						break;
				}
			}
		}
		iVar2 += -1;
	}
	if (bVar4)
	{
		if (!func_530(Global_1898439, (1 << 13)))
		{
			if (bVar3 && !Global_43891)
			{
				func_233((1 << 14));
			}
			else
			{
				func_231();
			}
			func_532(&Global_1898439, (1 << 13));
		}
		iVar7 = 0;
		while (iVar7 < Global_40.f_450)
		{
			iVar1 = Global_40.f_450[iVar7];
			if (func_141(iVar1) && Global_1347702[iVar1 /*49*/] != 45)
			{
				if (func_142(Global_1347702[iVar1 /*49*/].f_13, 256))
				{
				}
				else if (Global_1347702[iVar1 /*49*/].f_15 != func_539(0))
				{
					if (func_541(0) == 1 || func_541(0) == 8)
					{
						func_542(iVar1, 1, 0, 1, 32);
					}
					else
					{
						func_543(iVar1, 0);
					}
					if (func_246(Global_1347702[iVar1 /*49*/].f_15))
					{
						func_129(Global_1347702[iVar1 /*49*/].f_15);
					}
				}
				func_544(&(Global_1347702[iVar1 /*49*/].f_13), 2);
			}
			iVar7++;
		}
	}
	func_148();
	if (bParam2)
	{
		func_545();
	}
	func_44();
	func_546();
	return 1;
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (func_127(Global_1898330[iVar0]))
		{
			if (!func_127(Global_1898330[iVar0]))
			{
			}
			else
			{
				iVar2 = func_128(Global_1898330[iVar0]);
				if (iVar2 == 3 || iVar2 == 4)
				{
				}
				else if (iVar2 != 1 && iVar2 != 2)
				{
					func_129(Global_1898330[iVar0]);
				}
				else
				{
					switch (func_377(Global_1898330[iVar0]))
					{
						case 2:
							iVar1 = Global_1898346[iVar0 /*6*/].f_4;
							if (func_547(iVar1) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
							{
								if (iVar1 == 2)
								{
									if (func_112() == -1)
									{
										func_139(iVar0);
										func_548(iVar0);
									}
								}
							}
							break;
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_123(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_549(Global_1888801[iParam0 /*35*/].f_13))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (Global_1395601.f_5[iVar1 /*28*/] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if ((iVar0 > -1 && iVar0 < 17) && Global_40.f_9384[iVar0 /*2*/] & (1 << 13) != 0)
	{
		return true;
	}
	return false;
}

bool func_124(int iParam0)
{
	if (!func_550(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_551(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_552(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_552(iParam0), false) <= func_553();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_553();
	}
	return func_554();
}

int func_125()
{
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (func_273())
	{
		return 1;
	}
	if (func_154(43) && !func_154(44))
	{
		return 2;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		return 4;
	}
	if (func_555())
	{
		return 4;
	}
	if (PED::IS_PED_IN_COVER(Global_35, false, false))
	{
		return 4;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return 4;
	}
	if (PED::IS_PED_LASSOED(Global_35) || !ENTITY::IS_ENTITY_DEAD(PED::_GET_LASSO_TARGET(Global_35)))
	{
		return 4;
	}
	if (PED::IS_PED_HOGTIED(Global_35) || PED::IS_PED_HOGTYING(Global_35))
	{
		return 4;
	}
	if (func_556())
	{
		return 4;
	}
	if ((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT())
	{
		return 4;
	}
	return 0;
}

bool func_126()
{
	if (func_112() != -1)
	{
		return false;
	}
	return func_557(1) > 0;
}

bool func_127(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_128(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_558(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> /*48*/ sVar2;

	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!func_127(iParam0))
	{
		return;
	}
	if (func_246(iParam0))
	{
		func_312(iParam0, 0, 2);
	}
	iVar0 = func_430(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (Global_1898329 > 1)
	{
		Global_1898330[iVar1] = Global_1898330[(Global_1898329 - 1)];
		Global_1898346[iVar1 /*6*/] = { Global_1898346[(Global_1898329 - 1) /*6*/] /*6*/ };
		Global_1898330[(Global_1898329 - 1)] = -1;
		Global_1898346[(Global_1898329 - 1) /*6*/] = { sVar2 /*6*/ };
	}
	else
	{
		Global_1898330[iVar1] = -1;
		Global_1898346[iVar1 /*6*/] = { sVar2 /*6*/ };
	}
	Global_1898329--;
	if (Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_130(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_559(Global_1898330[iParam0]);
		func_560(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

bool func_131(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_132(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;

	if (!Global_1835011[iParam0 /*74*/].f_71)
	{
		if (iParam3 == -1)
		{
			if (func_561(iParam0))
			{
				return;
			}
			if (bParam2)
			{
				func_534(iParam0, iParam1, 0, 1, 0, 0, bParam2);
				return;
			}
			if (iParam0 == 14 || iParam0 == 34)
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
				{
					if ((Global_1898346[iParam1 /*6*/].f_1 & (1 << 22) == 0 && func_562(iParam0)) || (Global_1898346[iParam1 /*6*/].f_1 & (1 << 22) != 0 && !func_562(iParam0)))
					{
						func_534(iParam0, -1, 0, 1, 0, 0, 0);
					}
				}
			}
			if (bParam4)
			{
				return;
			}
		}
		if (Global_1898346[iParam1 /*6*/].f_1 & (1 << 21) != 0)
		{
			func_563(iParam1, (1 << 21));
			func_534(iParam0, -1, 0, 1, 0, 0, 0);
			return;
		}
	}
	else if (!bParam4 && !Global_16)
	{
		Global_1835011[iParam0 /*74*/].f_71 = 0;
		func_565(iParam0, BUILTIN::VDIST2(func_564(iParam0), Global_36), iParam1, 0, 0);
	}
	if (iParam3 == -1)
	{
		if (iParam0 == 14)
		{
			if (!func_370(62))
			{
				return;
			}
			if (Global_1898346[iParam1 /*6*/].f_1 & 1 == 0)
			{
				if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
				{
					Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
					GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, func_566(iParam0), 1.0f);
				}
				else if (CAM::IS_SCREEN_FADED_IN() && GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72))
				{
					return;
				}
			}
		}
		if ((func_154(37) && !func_154(43)) && func_567(iParam0))
		{
			return;
		}
	}
	func_568(iParam0, iParam1, iParam3, bParam5);
	if (iParam3 == -1)
	{
		if (iParam0 == 2)
		{
			if (!func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 13)))
			{
				if (!func_512())
				{
					if ((func_114(0, 1, 1) || Global_1572864.f_8 != -1) || func_370(120))
					{
						func_570(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 13));
					}
					else if ((((MAP::DOES_BLIP_EXIST(Global_1835011[2 /*74*/].f_27) && MAP::DOES_BLIP_EXIST(Global_1347702[120 /*49*/].f_37)) && !func_571()) && HUD::_0x7EC0D68233E391AC(5) != 2) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_220(MISC::VAR_STRING(2, "WNT_FIRST", Global_1835011[2 /*74*/].f_27, Global_1347702[120 /*49*/].f_37), 10000, 0, 0, 0, 1);
						func_570(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 13));
					}
				}
			}
		}
	}
	if ((func_572(iParam0, iParam3) && !Global_1835011[iParam0 /*74*/].f_70) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		if (iParam0 == 14 && func_562(iParam0))
		{
			return;
		}
		fVar0 = BUILTIN::VDIST2(func_573(iParam0), Global_36);
		if (fVar0 <= (func_574(iParam0) * func_574(iParam0)) || Global_1898346[iParam1 /*6*/].f_1 & (1 << 20) != 0)
		{
			if (ITEMSET::IS_ITEMSET_VALID(Global_1835011[iParam0 /*74*/].f_60))
			{
				iVar1 = ITEMSET::GET_ITEMSET_SIZE(Global_1835011[iParam0 /*74*/].f_60);
				if (iVar1 > 0)
				{
					iVar3 = 0;
					while (iVar3 < iVar1)
					{
						iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1835011[iParam0 /*74*/].f_60);
						iVar6 = iVar5;
						if (ENTITY::DOES_ENTITY_EXIST(iVar6) && ENTITY::IS_ENTITY_A_PED(iVar6))
						{
							iVar2++;
							iVar7 = iVar6;
							if (ENTITY::IS_ENTITY_DEAD(iVar7))
							{
							}
							else
							{
								if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar7))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar7);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar7))
								{
								}
								else
								{
									bVar4 = true;
								}
								else
								{
									iVar3++;
								}
								if (iVar2 > 0)
								{
									if (!bVar4 && Global_1898346[iParam1 /*6*/].f_1 & (1 << 20) == 0)
									{
										return;
									}
								}
								iVar3 = 0;
								while (iVar3 < iVar1)
								{
									iVar8 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, Global_1835011[iParam0 /*74*/].f_60);
									iVar9 = iVar8;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar9) && ENTITY::IS_ENTITY_A_PED(iVar9)) && !ENTITY::IS_ENTITY_DEAD(iVar9)) && PED::_IS_PED_VISIBILITY_TRACKED(iVar9))
									{
										PED::RELEASE_PED_VISIBILITY_TRACKING(iVar9);
									}
									iVar3++;
								}
								Global_1835011[iParam0 /*74*/].f_70 = 1;
								func_563(iParam1, (1 << 20));
								MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
								MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
								func_565(iParam0, fVar0, iParam1, 0, 1);
								Jump @1220; // curOff = 1160
								if ((!func_575(596) && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && MAP::IS_BLIP_ON_MINIMAP(Global_1835011[iParam0 /*74*/].f_27))
								{
									func_576(596, 0);
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_133(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 18)
	{
		return false;
	}
	if (iParam0 == 71)
	{
		return false;
	}
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27)) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0, int iParam1)
{
	return (func_577(iParam0) && Global_1898346[iParam0 /*6*/].f_1 & iParam1 != 0);
}

void func_135(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	iVar0 = uParam2;
	if (!func_578(iVar0))
	{
		return;
	}
	iVar1 = uParam3;
	if (func_579(iVar1))
	{
		return;
	}
	iVar2 = func_580(iVar1);
	if (iVar2 == -1)
	{
		return;
	}
	Global_1392915.f_121[iVar2 /*20*/].f_18 = 1;
	if (iVar0 == 3)
	{
		Global_1392915[iVar2 /*12*/].f_10 = Global_1900325.f_24;
	}
	iVar3 = func_423(iVar2);
	switch (iParam1)
	{
		case 1:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_581(iVar1, 0);
			return;
		case 2:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_581(iVar1, 1);
			return;
		case 3:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_425(iVar2);
			func_426(iVar2);
			return;
		case 4:
			Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
			func_582(iVar2);
			return;
		default:
			break;
	}
	if (Global_1894899.f_2 != iVar3 && !func_424(iParam0))
	{
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		func_583(iVar1, 1);
		return;
	}
	if (!func_428(iVar0))
	{
		if (func_581(iVar1, 1))
		{
		}
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		return;
	}
	if (func_149(iVar3, (1 << 22)))
	{
		if (func_581(iVar1, 1))
		{
		}
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
		return;
	}
	if (func_584(iVar1))
	{
		Global_1392915.f_121[iVar2 /*20*/].f_18 = 0;
	}
}

void func_136(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;
	Vector3 vVar6;

	iVar0 = func_585(Global_1898330[iParam0]);
	iVar1 = func_265(iVar0);
	if (!func_586(iVar1))
	{
		return;
	}
	vVar2 = { Global_1934182[iVar0 /*18*/].f_1 /*3*/ };
	if (func_587(vVar2))
	{
		return;
	}
	if (!func_588(iVar0))
	{
		return;
	}
	if (BUILTIN::VDIST2(vVar2, Global_36) > 2025.0f)
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1934182.f_73, false))
	{
		return;
	}
	if (!func_266(iVar1, 0))
	{
		return;
	}
	iVar5 = func_589(iVar1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) /*3*/ };
			if (BUILTIN::VDIST2(vVar6, vVar2) > 225.0f)
			{
				return;
			}
		}
		else
		{
			return;
		}
	}
	else
	{
		return;
	}
	func_590(iParam0);
}

void func_137(int iParam0)
{
	int iVar0;
	char cVar1[16];

	iVar0 = func_585(Global_1898330[iParam0]);
	if (func_591(iVar0) || !func_592(iVar0))
	{
		return;
	}
	if (func_593(iVar0) && !Global_40.f_9146.f_94[iVar0])
	{
		if (func_594(iVar0) && !UILOG::_UILOG_IS_ENTRY_REGISTERED(4, func_595(iVar0)))
		{
			func_596(iVar0);
			strcpy_s(&cVar1, 16, "READNOTE_");
			strcat_s(&cVar1, 16, func_597(iVar0));
			func_598(iVar0, &cVar1, &cVar1, -1082130432);
		}
		return;
	}
	func_599(iVar0, 1);
}

void func_138(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = func_585(Global_1898330[iParam0]);
	if (!func_325(iVar0) || !func_600(iVar0))
	{
		func_601(iParam0, iVar0);
		return;
	}
	fVar1 = BUILTIN::VDIST(Global_36, Global_1392240.f_1[iVar0 /*18*/]);
	if (fVar1 > 200.0f)
	{
		func_601(iParam0, iVar0);
		return;
	}
	if (!func_602(iVar0, 8))
	{
		if (func_603(iVar0))
		{
			return;
		}
	}
	if (func_602(iVar0, 4))
	{
		return;
	}
	func_604(iParam0);
}

void func_139(int iParam0)
{
}

void func_140(int iParam0)
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar0 = func_585(Global_1898330[iParam0]);
	if (!func_234(iVar0))
	{
		return;
	}
	func_605(iVar0);
}

bool func_141(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_142(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_143(int iParam0)
{
	Vector3 vVar0;
	float fVar3;

	if (!func_246(Global_1347702[iParam0 /*49*/].f_15))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 == 0)
	{
		func_608(iParam0, CAM::IS_SCREEN_FADED_OUT(), func_606(), func_607());
		vVar0 = { func_609(iParam0) /*3*/ };
		fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
		func_610(iParam0, func_609(iParam0), fVar3);
	}
}

void func_144(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;

	if (func_432(&(Global_1391438.f_5), 8))
	{
		return;
	}
	if (iParam0 == Global_1391438.f_493.f_10)
	{
		return;
	}
	if (iParam0 == func_445(0, func_444(func_439())))
	{
		return;
	}
	if (!func_611(iParam0, &iVar0))
	{
		func_612(iParam0);
		return;
	}
	uVar2 = Global_1391438.f_7[iVar0 /*99*/].f_31;
	if (func_613(&(Global_1391438.f_7[iVar0 /*99*/]), &bVar1, 1, 1, 1, 0))
	{
		func_563(iParam1, 16);
		func_563(iParam1, 32);
		func_563(iParam1, 64);
		func_614(&uVar2, 256, 0);
		if (!bVar1)
		{
			func_612(iParam0);
		}
		if (!bVar1 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar0], false))
		{
			func_437(&(Global_1391438.f_7[iVar0 /*99*/]));
		}
		return;
	}
	sVar3 = func_615(&(Global_1391438.f_7[iVar0 /*99*/].f_42));
	sVar4 = func_615(&(Global_1391438.f_7[iVar0 /*99*/].f_58));
	sVar5 = func_615(&(Global_1391438.f_7[iVar0 /*99*/].f_50));
	if (!func_134(iParam1, 64))
	{
		if (!func_134(iParam1, 16))
		{
			if (!func_616(&uVar2, 256))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar4))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar3);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar5))
				{
					SCRIPTS::REQUEST_SCRIPT(sVar5);
				}
				func_614(&uVar2, 256, 1);
			}
			func_617(iParam1, 16);
		}
		else if (!func_134(iParam1, 32))
		{
			if (SCRIPTS::HAS_SCRIPT_LOADED(sVar4))
			{
				func_617(iParam1, 32);
			}
		}
	}
}

bool func_145(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

void func_146(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_127(iParam0))
	{
		return;
	}
	switch (func_377(iParam0))
	{
		case 1:
			iVar0 = func_519(iParam0);
			if (func_618(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_572(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				}
				else
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_HIDDEN");
				}
			}
			else if ((func_572(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && Global_1835011[iVar0 /*74*/].f_63 & 2 == 0)
			{
				iVar2 = joaat("BLIP_STYLE_MISSION_RADIUS");
			}
			else
			{
				iVar2 = joaat("BLIP_STYLE_MISSION");
			}
			if (Global_1835011[iVar0 /*74*/].f_28 != iVar2)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[iVar0 /*74*/].f_27, iVar2);
				if (!func_619(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
				}
				if (func_536(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_519(iParam0);
			if (func_620(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_621(iVar1))
				{
					case joaat("BLIP_STYLE_RCM"):
						iVar2 = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
					case joaat("BLIP_STYLE_RCM_TRACKED"):
						iVar2 = joaat("BLIP_STYLE_RCM_TRACKED_HIDDEN");
						break;
					case joaat("BLIP_STYLE_RCM_BOUNTY"):
						iVar2 = joaat("BLIP_STYLE_RCM_BOUNTY_HIDDEN");
						break;
					case joaat("BLIP_STYLE_MISSION"):
						iVar2 = joaat("BLIP_STYLE_MISSION_HIDDEN");
						break;
					default:
						iVar2 = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				}
			}
			else
			{
				iVar2 = func_621(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_622(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

bool func_147(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_114(0, 0, 1))
	{
		return false;
	}
	if (func_185(62))
	{
		return false;
	}
	iVar0 = func_623(Global_40.f_4283);
	if (!func_47(iVar0))
	{
		return false;
	}
	if (iVar0 == 58)
	{
		return false;
	}
	if (!bParam2)
	{
		return false;
	}
	if (bParam0 || Global_1357549.f_1709 <= 1)
	{
		func_148();
	}
	else
	{
		Global_1357549.f_1708 = 1;
		if (!MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
		{
			Global_1357549.f_1711 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION_RADAR_ONLY"), Global_1888801[iVar0 /*35*/].f_15);
			MAP::SET_BLIP_SPRITE(Global_1357549.f_1711, joaat("BLIP_CAMP"), true);
			bParam1 = false;
			MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_KEY_MISSION"));
			if (func_549(Global_1888801[iVar0 /*35*/].f_13))
			{
				func_624(Global_1888801[iVar0 /*35*/].f_13, joaat("BLIP_MODIFIER_HIDDEN"));
				func_160(Global_1888801[iVar0 /*35*/].f_13, joaat("BLIP_STYLE_CAMP_HIDDEN"));
			}
		}
		if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
		{
			if (bParam1)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_URGENT_ALERT"));
				Global_1357549.f_1712 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - Global_1357549.f_1712) >= 5000 && Global_1357549.f_1712 != 0)
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_URGENT_ALERT"));
				Global_1357549.f_1712 = 0;
			}
			if (Global_1357549.f_1709 >= 5 && Global_1357549.f_1710 != 5)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_5"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_4"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_3"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_2"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_1"));
				Global_1357549.f_1710 = 5;
			}
			else if (Global_1357549.f_1709 == 4 && Global_1357549.f_1710 != 4)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_4"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_5"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_3"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_2"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_1"));
			}
			else if (Global_1357549.f_1709 == 3 && Global_1357549.f_1710 != 3)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_3"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_4"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_5"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_2"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_1"));
			}
			else if (Global_1357549.f_1709 == 2 && Global_1357549.f_1710 != 2)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_2"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_4"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_3"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_5"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_1"));
			}
			else if (Global_1357549.f_1709 == 1 && Global_1357549.f_1710 != 1)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_1"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_4"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_3"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_2"));
				MAP::BLIP_REMOVE_MODIFIER(Global_1357549.f_1711, joaat("BLIP_MODIFIER_OVERLAY_5"));
			}
			Global_1357549.f_1710 = Global_1357549.f_1709;
			if (!func_575(570))
			{
				func_625(570, Global_1357549.f_1711, 0);
			}
		}
	}
	return true;
}

void func_148()
{
	int iVar0;

	if (func_112() != -1)
	{
		return;
	}
	Global_1357549.f_1708 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1357549.f_1711))
	{
		MAP::REMOVE_BLIP(&(Global_1357549.f_1711));
		iVar0 = func_623(Global_40.f_4283);
		if (func_47(iVar0) && func_549(Global_1888801[iVar0 /*35*/].f_13))
		{
			func_160(Global_1888801[iVar0 /*35*/].f_13, joaat("BLIP_STYLE_CAMP"));
		}
		Global_1357549.f_1710 = 0;
	}
}

bool func_149(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

bool func_150()
{
	if (!func_154(39))
	{
		return false;
	}
	if (func_154(43))
	{
		return false;
	}
	return true;
}

bool func_151(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_246(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_152(int iParam0)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_141(iParam0))
	{
		return false;
	}
	return func_446(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_153(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_446(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_154(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_447(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 7;
		case 79:
			return 0;
		case 43:
			return 1;
		case 98:
			return 2;
		case 58:
			return 3;
		case 71:
			return 4;
		case 4:
			return 5;
		case 76:
			return 8;
		case 9:
			return 6;
		case 5:
			return 9;
		case 38:
			return 10;
		case 105:
			return 11;
		case 92:
			return 12;
		case 78:
			return 13;
		case 26:
			return 14;
		case 37:
			return 15;
		case 115:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_156(int iParam0, int iParam1)
{
	if (!func_626(iParam0))
	{
		return false;
	}
	return Global_40.f_9384[iParam0 /*2*/] & iParam1 != 0;
}

void func_157(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0 && func_628(iVar0) == iParam1)
		{
			func_629(iVar0, -1);
			func_630(iVar0, 0);
			func_631(iVar0, 0);
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

int func_158(int iParam0, int iParam1, Vector3 vParam2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 0)
	{
		return -1;
	}
	if (func_587(vParam2))
	{
		return -1;
	}
	iVar1 = -1;
	iVar2 = func_632(vParam2);
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_628(iVar0) == 0 && iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		else if ((func_628(iVar0) == iParam1 && func_627(iVar0) == iParam0) && iVar2 == func_633(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 250)
	{
		func_629(iVar1, iParam0);
		func_630(iVar1, iParam1);
		func_631(iVar1, iVar2);
		func_634(iVar1, iParam5);
		func_635(iVar1);
		MAP::SET_BLIP_FLASH_TIMER(Global_36308[iVar1], iParam1, 0);
		return iVar1;
	}
	return -1;
}

void func_159(int iParam0, int iParam1, Vector3 vParam2, char* sParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = func_632(vParam2);
	iVar1 = 0;
	while (iVar1 < Global_36308)
	{
		if ((func_627(iVar1) == iParam0 && func_628(iVar1) == iParam1) && func_633(iVar1) == iVar0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar1]))
			{
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_36308[iVar1], sParam5);
			}
			return;
		}
		iVar1++;
	}
}

void func_160(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::_BLIP_ADD_STYLE(Global_36308[iParam0], iParam1);
		}
	}
}

void func_161(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/] -= Global_23118[iParam0 /*11*/] & iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/] -= Global_1058888.f_40545[iParam0 /*11*/] & iParam1;
}

void func_162(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], joaat("BLIP_MODIFIER_URGENT_ALERT"));
			}
			return;
		}
		iVar0++;
	}
}

bool func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0 && func_628(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_164(int iParam0, int iParam1)
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

bool func_165(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_627(iVar0) == iParam0 && func_628(iVar0) == iParam1)
		{
			if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				return MAP::BLIP_REMOVE_MODIFIER(Global_36308[iVar0], iParam2);
			}
			return false;
		}
		iVar0++;
	}
	return false;
}

void func_166(bool bParam0)
{
	func_636(bParam0);
	func_637(bParam0);
	func_638(bParam0);
	func_639(bParam0);
	func_640(bParam0);
	func_641(bParam0);
	func_642(bParam0);
	func_643(bParam0);
}

void func_167(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < func_644())
	{
		if (func_559(iVar0) != 0)
		{
			if (!func_429(iVar0))
			{
				func_312(iVar0, bParam0, 2);
			}
		}
		iVar0++;
	}
}

void func_168(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		Stack.Invoke((iParam0[iVar0 /*7*/])->f_2);
		iVar0++;
	}
}

void func_169()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	func_645("player_newWeaponType", "player_newWeaponTime");
	func_645("player_newPistolWeaponType", "player_newPistolWeaponTime");
	func_645("player_newRevolverWeaponType", "player_newRevolverWeaponTime");
	func_645("player_newRifleWeaponType", "player_newRifleWeaponTime");
	func_645("player_newShotgunWeaponType", "player_newShotgunWeaponTime");
}

void func_170()
{
	int iVar0;
	int iVar1;

	iVar0 = func_646(Global_36);
	if (iVar0 != -1)
	{
		iVar1 = Global_1888801[iVar0 /*35*/].f_4;
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			PERSISTENCE::_PERSISTENCE_REFRESH_TOWN_VOLUME(iVar1);
		}
	}
}

void func_171(Vector3 vParam0, Vector3 vParam3, Vector3 vParam6, Vector3 vParam9, Vector3 vParam12, Vector3 vParam15, int iParam18)
{
	struct<16> /*128*/ sVar0;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_1897952.f_40)
	{
		return;
	}
	if ((Global_1879534 || Global_1879534.f_1) || !func_38(64))
	{
		func_172();
		return;
	}
	if (func_529() && CAM::IS_SCREEN_FADED_IN())
	{
		if (!Global_1935630.f_4)
		{
			if ((!func_114(0, 0, 1) && !func_362(Global_1935630, (1 << 11))) && !func_438())
			{
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_38))
				{
					Global_1897952.f_38 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam9, vParam3, vParam15, "Intro Volume");
				}
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_39))
				{
					Global_1897952.f_39 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam12, vParam6, "Intro Warn Volume");
				}
				if (!func_647(Global_1897952.f_39, Global_36))
				{
					if (!func_647(Global_1897952.f_38, Global_36))
					{
						Global_1897952.f_40 = 1;
						strcpy_s(&(sVar0.f_10), 32, "Grizzlies_Abandon");
						sVar0.f_14 = (1 << 9);
						sVar0.f_15 = 1;
						sVar0.f_0 = iParam18;
						func_482(sVar0, 0);
					}
				}
			}
			else
			{
				func_172();
			}
		}
		else
		{
			func_172();
		}
	}
	else
	{
		func_172();
	}
}

void func_172()
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_38))
	{
		VOLUME::DELETE_VOLUME(Global_1897952.f_38);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1897952.f_39))
	{
		VOLUME::DELETE_VOLUME(Global_1897952.f_39);
	}
	Global_1897952.f_40 = 0;
}

void func_173()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && PED::GET_PED_IS_BEING_GRAPPLED(Global_35))
	{
		iVar1 = PED::_GET_PED_GRAPPLER(Global_35);
		if (func_112() == -1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("A_C_BEAR_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("A_C_BEARBLACK_01"))
				{
					Global_1347477.f_202 = iVar1;
				}
			}
		}
		if (!PED::IS_PED_INJURED(iVar1) && PED::IS_PED_HUMAN(iVar1))
		{
			if (!func_575(145))
			{
				func_576(145, 0);
			}
			else if (!DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_tutorial_played"))
			{
				if (!DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_start_time"))
				{
					DECORATOR::DECOR_SET_INT(Global_35, "grapple_start_time", iVar0);
					iVar2 = iVar0;
				}
				else
				{
					iVar2 = DECORATOR::DECOR_GET_INT(Global_35, "grapple_start_time");
				}
				if ((iVar0 - iVar2) > 5000)
				{
					func_576(145, 1);
					DECORATOR::DECOR_SET_BOOL(Global_35, "grapple_tutorial_played", true);
				}
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_start_time"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "grapple_start_time");
		}
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "grapple_tutorial_played"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "grapple_tutorial_played");
		}
	}
	if (!PED::IS_PED_INJURED(Global_35))
	{
		iVar3 = PED::_GET_LASSO_TARGET(Global_35);
		if (iVar3 != 0)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_HUMAN(iVar3))
			{
				func_576(142, 0);
			}
		}
		if (PED::IS_PED_IN_ANY_BOAT(Global_35))
		{
			if (!VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(Global_35, false), joaat("RCBOAT")))
			{
				func_576(113, 0);
			}
		}
		if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
		{
			func_576(196, 0);
		}
		else
		{
			func_648(196);
		}
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (!func_575(598))
			{
				if ((HUD::IS_RADAR_PREFERENCE_SWITCHED_ON() && !HUD::IS_RADAR_HIDDEN()) && !UITUTORIAL::_UITUTORIAL_GET_IS_THREAT_INDICATOR_CAPABLE_RADAR_SHOWN())
				{
					func_576(598, 0);
				}
			}
			if (!func_575(599))
			{
				if (!HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
				{
					func_576(599, 0);
				}
			}
		}
		if (!func_575(607))
		{
			if (PLAYER::_0xAAED694CE814817F(PLAYER::PLAYER_ID()))
			{
				if (!func_649() && func_154(4))
				{
					if (MISC::GET_GAME_TIMER() >= Global_36614)
					{
						Global_40.f_11955++;
						if (!func_650() && !func_651())
						{
							if (Global_40.f_11955 >= 2)
							{
								func_576(607, 0);
							}
						}
						Global_36614 = (MISC::GET_GAME_TIMER() + 60000);
					}
				}
			}
		}
		iVar4 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Global_35, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar4) && func_652(ENTITY::GET_ENTITY_MODEL(iVar4)))
			{
				iVar5 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar4);
				if (WEAPON::GET_WEAPON_DEGRADATION(iVar5) > 0.75f && !DECORATOR::DECOR_EXIST_ON(iVar5, "worn_tutorial"))
				{
					func_576(150, 1);
					DECORATOR::DECOR_SET_BOOL(iVar5, "worn_tutorial", true);
				}
				if (!func_575(481))
				{
					if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
					{
						WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar6, true, 0, false);
						if (WEAPON::IS_WEAPON_A_GUN(iVar6) && !WEAPON::_IS_WEAPON_SNIPER(iVar6))
						{
							if ((WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, joaat("COMPONENT_RIFLE_SCOPE02")) || WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, joaat("COMPONENT_RIFLE_SCOPE03"))) || WEAPON::HAS_WEAPON_GOT_WEAPON_COMPONENT(iVar5, joaat("COMPONENT_RIFLE_SCOPE04")))
							{
								func_576(481, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_174()
{
	if (Global_40.f_7860)
	{
		return;
	}
	func_653(3, 25, 0, 0);
	Global_40.f_7860 = 1;
}

void func_175()
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			if (iVar0 != Global_1935630.f_5)
			{
				if (func_654(&(Global_1935630.f_6), INTERIOR::_GET_INTERIOR_MINIMAP_HASH(iVar0)))
				{
					Global_1935630.f_5 = iVar0;
				}
			}
			if (func_655(iVar0) | func_656(iVar0))
			{
				Global_1935630.f_11 = 0;
			}
			else
			{
				Global_1935630.f_11 = 1;
			}
		}
		else
		{
			Global_1935630.f_11 = 0;
			if (INTERIOR::IS_VALID_INTERIOR(Global_1935630.f_5))
			{
				Global_1935630.f_5 = 0;
			}
		}
	}
	if ((Global_1430242 + Global_1430242.f_2) >= 3 && func_657())
	{
		func_658(1);
	}
	else
	{
		func_658(0);
	}
}

void func_176()
{
	if (func_112() != -1)
	{
		return;
	}
}

void func_177()
{
	int iVar0;

	if (func_112() == 0)
	{
		return;
	}
	if (Global_1935630.f_53 < 10)
	{
		Global_1935630.f_53++;
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_659(Global_40.f_7731[iVar0 /*5*/]);
		iVar0++;
	}
	Global_1935630.f_53 = 0;
	func_660("chinLong");
	func_660("chinShort");
	func_660("chopsLong");
	func_660("chopsShort");
	func_660("stacheLong");
	func_660("stacheShort");
	func_660("hairLong");
	func_660("hairShort");
}

void func_178()
{
	if (func_398())
	{
		return;
	}
	if (Global_1572887.f_8)
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	switch (func_46())
	{
		case 3:
		case 61:
		case 82:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_RURAL"), 1500);
			break;
		case 5:
		case 38:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_URBAN"), 1500);
			break;
		case 96:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_CATFISH_JACKSON"), 1500);
			break;
	}
	switch (func_479())
	{
		case 9:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_HEARTLAND"), 1500);
			break;
		case 11:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_SCARLETT_MEADOWS"), 1500);
			break;
		case 1:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_BIG_VALLEY"), 1500);
			break;
		case 15:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_CHOLLA_SPRINGS"), 1500);
			break;
		case 3:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_CUMBERLAND_FOREST"), 1500);
			break;
		case 0:
			MISC::_0xDE2C3B74D2B3705C(-348060143, 1500);
			break;
		case 4:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_GREAT_PLAINS"), 1500);
			break;
		case 6:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_GRIZZLIES_EAST"), 1500);
			break;
		case 7:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_GRIZZLIES_WEST"), 1500);
			break;
		case 10:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_ROANOKE_RIDGE"), 1500);
			break;
		case 12:
			MISC::_0xDE2C3B74D2B3705C(joaat("ARS_TALL_TREES"), 1500);
			break;
	}
}

void func_179()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;

	if (func_112() != -1)
	{
		return;
	}
	if (!func_661(joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 6))
	{
		if (Global_17 && !func_662())
		{
			if (func_663(24) && !Global_43891)
			{
				if (!PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HOLSTERS_LEFT")))
				{
					func_664(17, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 2, 0, 0);
				}
				if (PED::_IS_METAPED_USING_COMPONENT(Global_35, joaat("HOLSTERS_LEFT")))
				{
					Global_17 = 0;
					WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 3, true);
				}
			}
			else
			{
				Global_17 = 0;
			}
		}
	}
	if (Global_43891)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || !PED::IS_PED_READY_TO_RENDER(Global_35))
	{
		return;
	}
	if (func_665((1 << 19)))
	{
		if (Global_1347698.f_1 != 0)
		{
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_SHOTGUNS"), 0, false);
			Global_1347698.f_1 = 0;
			bVar2 = true;
		}
		if (Global_1347698.f_2 != 0)
		{
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_RIFLES"), 0, false);
			Global_1347698.f_2 = 0;
			bVar2 = true;
		}
		if (Global_1347698 != 0)
		{
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_PISTOLS"), 0, false);
			Global_1347698 = 0;
			bVar2 = true;
		}
		if (bVar2)
		{
			PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
		}
		return;
	}
	iVar6 = 25;
	if (Global_1946054.f_1497.f_1[iVar6 /*3*/] != Global_1946054.f_57[iVar6 /*11*/] && !func_661(joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1))
	{
		if ((func_666(Global_1935630.f_44) && WEAPON::_IS_WEAPON_TWO_HANDED(Global_1935630.f_44)) || WEAPON::IS_WEAPON_SHOTGUN(Global_1935630.f_44))
		{
			bVar7 = Global_1935630.f_44;
		}
		else
		{
			bVar7 = func_667(Global_35, 9, 0, 0);
			if (!func_666(bVar7))
			{
				bVar7 = func_667(Global_35, 1, 0, 0);
				if ((func_666(bVar7) && WEAPON::_IS_WEAPON_ONE_HANDED(bVar7)) && !WEAPON::IS_WEAPON_SHOTGUN(bVar7))
				{
					bVar7 = false;
				}
			}
		}
		iVar1 = func_668(bVar7, 5, 0);
		if (iVar1 != 0)
		{
			bVar5 = true;
			iVar0 = Global_1347698.f_1;
			if (WEAPON::IS_WEAPON_SHOTGUN(bVar7))
			{
				bVar5 = false;
				iVar0 = Global_1347698.f_2;
			}
			if (((iVar1 != iVar0 || func_665((1 << 18))) || (bVar5 && Global_1347698.f_1 == 0)) || (!bVar5 && Global_1347698.f_2 == 0))
			{
				Global_1935630.f_49 = 1;
				bVar2 = true;
				if (bVar5)
				{
					PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_SHOTGUNS"), 0, false);
					Global_1347698.f_2 = 0;
					Global_1347698.f_1 = iVar1;
				}
				else
				{
					PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_RIFLES"), 0, false);
					Global_1347698.f_1 = 0;
					Global_1347698.f_2 = iVar1;
				}
				PED::_APPLY_SHOP_ITEM_TO_PED(Global_35, func_669(bVar5), false, false, false);
				if (iVar1 != joaat("BASE"))
				{
					PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(Global_35, func_669(bVar5), iVar1, 0, false, 1);
				}
			}
		}
	}
	else if (Global_1935630.f_49)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_SHOTGUNS"), 0, false);
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_RIFLES"), 0, false);
		bVar2 = true;
		Global_1935630.f_49 = 0;
		Global_1347698.f_1 = 0;
		Global_1347698.f_2 = 0;
	}
	iVar6 = 26;
	bVar3 = Global_40.f_7729 == 7;
	bVar4 = (Global_1946054.f_1497.f_1[iVar6 /*3*/] != Global_1946054.f_57[iVar6 /*11*/] && !bVar3);
	if ((bVar4 || bVar3) && !func_661(joaat("MP_COMPONENT_TYPE_LOADOUT_2"), 1))
	{
		if ((func_666(Global_1935630.f_44) && WEAPON::_IS_WEAPON_ONE_HANDED(Global_1935630.f_44)) && !WEAPON::IS_WEAPON_SHOTGUN(Global_1935630.f_44))
		{
			bVar8 = Global_1935630.f_44;
		}
		else
		{
			bVar8 = func_667(Global_35, 2, 0, 0);
		}
		iVar1 = func_668(bVar8, 5, bVar3);
		if (iVar1 != 0)
		{
			if (Global_1347698 != iVar1 || func_665((1 << 18)))
			{
				Global_1347698 = iVar1;
				Global_1935630.f_48 = 1;
				bVar2 = true;
				PED::_APPLY_SHOP_ITEM_TO_PED(Global_35, 600894672, false, false, false);
				if (iVar1 != joaat("BASE"))
				{
					PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(Global_35, 600894672, iVar1, 0, false, 1);
				}
			}
		}
	}
	else if (Global_1935630.f_48)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(Global_35, joaat("AMMO_PISTOLS"), 0, false);
		bVar2 = true;
		Global_1935630.f_48 = 0;
		Global_1347698 = 0;
	}
	if (bVar2)
	{
		func_670((1 << 18));
		PED::_UPDATE_PED_VARIATION(Global_35, false, true, true, true, false);
	}
}

void func_180()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_112() != -1)
	{
		return;
	}
	iVar0 = PED::_GET_PED_LAST_DROPPED_HAT(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PED::_GET_SHOP_PED_HAT_COMPONENT(iVar0, 0, false);
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, false, false)) > 250.0f)
	{
		iVar2 = 10;
		if ((Global_1946054.f_1497.f_1[iVar2 /*3*/] == Global_1946054.f_57[iVar2 /*11*/] && !func_671(Global_35, joaat("HATS"), 0)) && !Global_36619)
		{
			if (func_672(iVar1))
			{
				func_576(69, 0);
			}
			else
			{
				func_576(70, 0);
			}
		}
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, false);
		OBJECT::DELETE_OBJECT(&iVar0);
	}
}

void func_181()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_673(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Global_43894[iVar0], true, 0))
			{
				iVar1 = iVar0;
			}
			else
			{
				iVar0++;
			}
			if (iVar1 != -1)
			{
				if (Global_43894.f_12 == -1)
				{
					Global_43894.f_12 = iVar1;
				}
			}
			else if (Global_43894.f_12 != -1)
			{
				Global_43894.f_12 = -1;
			}
		}
	}
}

void func_182()
{
	int iVar0;
	int iVar1;

	if (Global_40.f_11095.f_38 < 5)
	{
		iVar0 = Global_40.f_11095.f_38 + 1 * 10000;
		iVar1 = func_674(func_479());
		if (func_675(iVar1) && iVar1 != 5)
		{
			if (func_676(iVar1) >= iVar0)
			{
				func_677(3, 0, 0, 0, 0, 0, 1065353216, 0);
				Global_40.f_11095.f_38++;
			}
		}
	}
}

void func_183()
{
	if ((ENTITY::IS_ENTITY_IN_AREA(Global_35, -6726.518f, -3810.308f, -11.33721f, -6684.747f, -3794.389f, -6.22488f, false, true, 0) && CAM::IS_SCREEN_FADED_IN()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_678(Global_35, 0, 0);
	}
}

bool func_184()
{
	bool bVar0;
	var uVar1;
	struct<16> /*128*/ sVar2;

	if (func_679())
	{
		return false;
	}
	if (!func_389(&bVar0, &uVar1, 0))
	{
		return !bVar0;
	}
	if (AUDIO::_IS_ANY_CONVERSATION_PLAYING(false))
	{
		return false;
	}
	if (Global_1935630.f_56)
	{
		return false;
	}
	if (!func_680())
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) > 0)
		{
			return false;
		}
	}
	if ((Global_1935630.f_54 + 90000) < MISC::GET_GAME_TIMER() || func_680())
	{
		Global_1935630.f_56 = 1;
		strcpy_s(&(sVar2.f_10), 32, "singing");
		sVar2.f_14 = (1 << 9);
		sVar2.f_15 = 0;
		func_482(sVar2, 0);
	}
	return true;
}

bool func_185(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

void func_186()
{
	bool bVar0;

	if (func_112() != -1 || !func_663(15))
	{
		return;
	}
	if (func_681(Global_1347343.f_11, (1 << 30)))
	{
		return;
	}
	if (!Global_1347477.f_6)
	{
		switch (Global_1347477.f_7)
		{
			case 0:
				func_682();
				break;
			case 1:
				if (!func_683((1 << 23)))
				{
					bVar0 = func_684(Global_35);
				}
				if ((((PED::GET_PED_CONFIG_FLAG(Global_35, 227, true) || PED::IS_PED_SITTING(Global_35)) || func_685(Global_35)) || bVar0) || func_686())
				{
					if (bVar0)
					{
						func_687(14, 1);
					}
					else
					{
						if (!func_688() && !func_689())
						{
							if (Global_1347477.f_122 > func_690(0))
							{
								func_691(1.0f, 0, 0, 1);
							}
						}
						if (Global_1347477.f_123 > func_690(2))
						{
							func_692(1.0f, 0, 0, 1);
						}
						if (Global_1347477.f_124 > func_690(1))
						{
							func_693(1.0f, 0, 0, 1);
						}
						if (!Global_1347477.f_119)
						{
							TELEMETRY::_0x7E002A36AEFCFB55();
						}
					}
					Global_1347477.f_119 = 1;
				}
				else
				{
					Global_1347477.f_119 = 0;
				}
				break;
			case 2:
				if (func_694(18))
				{
					func_696(0, func_695(), 0);
					func_697();
				}
				break;
			case 3:
				if (func_694(19))
				{
					func_696(1, func_698(), 0);
				}
				break;
			case 4:
				if (func_694(20))
				{
					func_696(2, func_699(), 0);
				}
				break;
			case 5:
				if (!Global_16)
				{
					func_701(13, func_700());
					func_702(0);
					func_703();
					func_704();
				}
				break;
			case 6:
				if (!Global_16)
				{
					Global_40.f_11095.f_11[16] = func_705(ATTRIBUTE::GET_ATTRIBUTE_POINTS(Global_35, 16));
					func_706();
				}
				break;
		}
		Global_1347477.f_7++;
		if (Global_1347477.f_7 >= 7)
		{
			Global_1347477.f_7 = 0;
		}
	}
}

void func_187()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (func_112() != -1)
	{
		return;
	}
	if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_35, Global_36, 200.0f, 0) > 0)
	{
		Global_1347477.f_135 = 1;
	}
	else if (Global_1347477.f_135)
	{
		if (float)ENTITY::GET_ENTITY_HEALTH(Global_35) < (50.0f * 0.5f)
		{
			func_707(24);
		}
		Global_1347477.f_135 = 0;
	}
	if (PED::IS_PED_JUMPING(Global_35))
	{
		if (!Global_1347477.f_132)
		{
			Global_1347477.f_131++;
			if ((Global_1347477.f_131 % 50) == 0)
			{
				func_707(1);
			}
			Global_1347477.f_132 = 1;
		}
	}
	else
	{
		Global_1347477.f_132 = 0;
	}
	fVar0 = func_708(joaat("DIST"), joaat("SPRINTING"));
	fVar1 = func_708(joaat("TIME"), joaat("SWIMMING_NOT_DROWNING"));
	fVar2 = func_708(joaat("DIST_DRIVING_TYPE"), joaat("ROWINGBOAT"));
	fVar3 = func_708(joaat("DIST_DRIVING_TYPE"), joaat("CANOE"));
	if (fVar0 > (Global_1347477.f_127 + 100.0f))
	{
		func_707(27);
		Global_1347477.f_127 = fVar0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_BOAT(Global_35))
	{
		if (fVar1 > (Global_1347477.f_128 + 15000.0f))
		{
			func_707(28);
			Global_1347477.f_128 = fVar1;
		}
	}
	else
	{
		Global_1347477.f_128 = fVar1;
	}
	if (fVar2 + fVar3) > (Global_1347477.f_129 + 1000.0f)
	{
		func_707(2);
		Global_1347477.f_129 = (fVar2 + fVar3);
	}
	PED::_0x6B67320E0D57856A(Global_35, &iVar4, 2, false);
	if (ENTITY::IS_ENTITY_A_PED(iVar4))
	{
		if (func_709(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4)))
		{
			func_710();
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && PED::GET_SEAT_PED_IS_USING(Global_35) == -1)
	{
		if (!Global_36604)
		{
			iVar6 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6, false, false) && VEHICLE::_IS_THIS_MODEL_A_DRAFT_VEHICLE(ENTITY::GET_ENTITY_MODEL(iVar6))) && !DECORATOR::DECOR_EXIST_ON(iVar6, "wagon_block_honor")) && (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar6) || func_711(iVar6)))
			{
				VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar6, &iVar7, &iVar8);
				if (iVar7 == 0 || iVar8 > 0)
				{
					func_677(0, joaat("HONOR_EVENT_STEAL_WAGON"), 0, 0, 0, 0, 1065353216, 0);
					iVar9 = 0;
					while (iVar9 < 6)
					{
						iVar10 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar6, iVar9);
						if (!PED::IS_PED_INJURED(iVar10))
						{
							DECORATOR::DECOR_SET_BOOL(iVar10, "bHorseHasBeenStolen", true);
						}
						iVar9++;
					}
				}
			}
			DECORATOR::DECOR_SET_BOOL(iVar6, "wagon_block_honor", true);
			Global_36604 = 1;
		}
	}
	else if (Global_36604)
	{
		Global_36604 = 0;
	}
}

void func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1911859[iVar0 /*3*/].f_2)
		{
			if ((MISC::GET_GAME_TIMER() - Global_1911859[iVar0 /*3*/]) >= Global_1911859[iVar0 /*3*/].f_1)
			{
				Global_1911859[iVar0 /*3*/].f_2 = 0;
				switch (iVar0)
				{
					case 0:
						func_576(581, 1);
						PED::_SET_PED_SCENT(Global_35, 1.0f);
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_189()
{
}

int func_190(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_712(bParam1, bParam2, bParam3);
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

bool func_191()
{
	if (func_112() == -1)
	{
		if (func_513() || func_713())
		{
			return true;
		}
	}
	else if (func_714(1, 255))
	{
		return true;
	}
	return false;
}

void func_192(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_46();
	iVar1 = Global_1934266.f_57;
	iVar2 = 5;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1++;
		if (iVar1 >= 130)
		{
			iVar1 = 0;
		}
		if (iVar1 == iVar0)
		{
		}
		else
		{
			if (!bParam0)
			{
				if (func_715(iVar1))
				{
					if (func_717(func_716(iVar1)) >= 4320 || func_720(func_719(func_718(iVar1, 1, 1))) <= 0)
					{
						func_721(iVar1, 0);
					}
				}
				if (func_722(iVar1))
				{
					if (func_723(iVar1))
					{
						if (!func_724(iVar1))
						{
							if (func_725(iVar1))
							{
								func_726(iVar1, 0, 350);
							}
						}
					}
					else if (func_724(iVar1))
					{
						func_726(iVar1, 1, 350);
					}
				}
			}
			Global_1934266.f_57 = iVar1;
		}
		iVar3++;
	}
}

void func_193(bool bParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return;
	}
	iVar0 = func_479();
	if ((((((!func_190(PLAYER::PLAYER_ID(), 0, 0, 1) || iVar0 == 8) && func_727()) && func_728()) && !func_657()) && !PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID())) && !func_114(0, 0, 1))
	{
		if (iVar0 != 8)
		{
			if (!Global_1934266)
			{
				if ((func_729(2, 0) && func_729(3, 0)) || (func_729(4, 0) && (iVar0 == 12 || iVar0 == 4)))
				{
					if (iVar0 == 12 || (iVar0 == 4 && !func_663(45)))
					{
						if ((!func_153(13) && !Global_1934266.f_56) && !PED::_0xDC88D06719070C39(Global_35))
						{
							func_730(4, func_46());
						}
					}
					else if (Global_1934266.f_1 + Global_1934266.f_2) < MISC::GET_GAME_TIMER()
					{
						fVar1 = 200.0f;
						iVar2 = 5;
						iVar3 = ITEMSET::CREATE_ITEMSET(true);
						LAW::_0x0C392DB374655176(Global_36, fVar1, iVar3);
						iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar3);
						ITEMSET::DESTROY_ITEMSET(iVar3);
						if (iVar4 > iVar2)
						{
							return;
						}
						if ((MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f) < 0.75f && func_731() >= 4) && func_732())
						{
							func_730(3, func_46());
						}
						else
						{
							func_730(2, func_46());
						}
					}
				}
			}
		}
		else if (iVar0 == 8)
		{
			if (((func_729(9, 0) && !func_413(1, 0)) && !func_413(8, 0)) && func_46() != 59)
			{
				func_730(9, func_46());
			}
		}
	}
	else
	{
		Global_1934266.f_1 = MISC::GET_GAME_TIMER();
		if (iVar0 == 12 || iVar0 == 4)
		{
			Global_1934266.f_2 = 1000;
		}
		else
		{
			Global_1934266.f_2 = 15000;
		}
	}
}

void func_194()
{
}

void func_195(bool bParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	iVar1 = func_46();
	bVar2 = func_722(iVar1);
	if (func_47(iVar1) && (bVar2 || func_724(iVar1)))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!func_149(iVar1, (1 << 25)))
		{
			if (!func_724(iVar1) && bVar2)
			{
				if ((!bParam0 && !PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID())) && !func_413(2049, 0))
				{
					if (func_733(iVar1))
					{
						func_726(iVar1, 1, 350);
					}
				}
			}
		}
		else if (!func_724(iVar1) || !bVar2)
		{
			if (func_725(iVar1))
			{
				func_726(iVar1, 0, 350);
			}
		}
	}
}

void func_196()
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	bool bVar3;

	if (!func_530(Global_1934266.f_154, 2))
	{
		if (func_154(13))
		{
			func_532(&(Global_1934266.f_154), 2);
			return;
		}
		if (MISC::GET_GAME_TIMER() >= Global_1934266.f_155)
		{
			if (func_734(13))
			{
				func_532(&(Global_1934266.f_154), 1);
			}
			else
			{
				func_735(&(Global_1934266.f_154), 1);
			}
			Global_1934266.f_155 = MISC::GET_GAME_TIMER() + 10000;
		}
		bVar0 = false;
		sVar1 = "pre_sean1_law";
		if (func_530(Global_1934266.f_154, 1))
		{
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(sVar1)) <= 0)
			{
				iVar2 = func_541(0);
				if (!VOLUME::DOES_VOLUME_EXIST(Global_1934266.f_153))
				{
					Global_1934266.f_153 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1409.0f, -958.0f, 68.0f, 0.0f, 0.0f, 29.0f, 1000.0f, 500.0f, 100.0f, "pre_sean1_law");
				}
				bVar3 = (func_736(Global_35, Global_1934266.f_153, 1, 0) || func_479() == 4);
				if (!bVar3)
				{
					func_532(&(Global_1934266.f_154), 8);
				}
				if (((bVar3 && func_530(Global_1934266.f_154, 8)) && iVar2 != 1) && iVar2 != 8)
				{
					if (!func_530(Global_1934266.f_154, 4))
					{
						SCRIPTS::REQUEST_SCRIPT(sVar1);
						func_532(&(Global_1934266.f_154), 4);
					}
					if (SCRIPTS::HAS_SCRIPT_LOADED(sVar1))
					{
						func_735(&(Global_1934266.f_154), 8);
						SCRIPTS::START_NEW_SCRIPT(sVar1, (1 << 9));
						VOLUME::DELETE_VOLUME(Global_1934266.f_153);
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (func_530(Global_1934266.f_154, 4))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar1);
				func_735(&(Global_1934266.f_154), 4);
			}
		}
	}
	else if (MISC::GET_GAME_TIMER() >= Global_1934266.f_155)
	{
		if (!func_154(13))
		{
			func_735(&(Global_1934266.f_154), 2);
		}
		Global_1934266.f_155 = MISC::GET_GAME_TIMER() + 10000;
	}
}

void func_197(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_479() != 8)
	{
		if (!func_575(546))
		{
			if (!func_724(func_46()) && func_723(func_46()))
			{
				func_576(546, 0);
			}
		}
		else if (!func_575(547) && func_723(func_46()))
		{
			func_576(547, 0);
		}
	}
	if (!bParam0)
	{
		if (!func_737(1))
		{
			return;
		}
		if (func_112() == -1)
		{
			if (!func_663(28))
			{
				func_738(28);
			}
		}
		if (!func_575(282))
		{
			if (!func_651() && !func_650())
			{
				iVar0 = (MISC::GET_GAME_TIMER() - LAW::_0x7FC667F6DDFBCDCC(PLAYER::PLAYER_ID()));
				if (iVar0 > 2000 && iVar0 < 10000)
				{
					func_576(282, 0);
				}
			}
		}
		else if (!func_575(283))
		{
			if (func_740(func_739(), 4))
			{
				func_576(283, 0);
			}
		}
		else if (!func_575(281))
		{
			func_576(281, 0);
		}
		return;
	}
	else
	{
		if (!Global_1935630.f_13)
		{
			if (!func_575(263))
			{
				if (((Global_1935630.f_17 > 0 && !Global_1935630.f_16) && !func_651()) && !func_650())
				{
					if (func_479() == 8)
					{
						func_576(265, 0);
					}
					else
					{
						func_576(263, 0);
					}
					return;
				}
			}
			else if (!func_575(264))
			{
				if (LAW::_0x7FC667F6DDFBCDCC(PLAYER::PLAYER_ID()) > 30000)
				{
					if (func_479() == 8)
					{
						func_576(266, 0);
					}
					else
					{
						func_576(264, 0);
					}
				}
			}
		}
		if (!func_575(269))
		{
			if (Global_1935630.f_20 == 0)
			{
				if (!func_651() && !func_650())
				{
					LAW::_0x6ABC50979655BEE7(PLAYER::PLAYER_ID(), &iVar1, 1);
					if (iVar1 == joaat("CRIME_LOITERING"))
					{
						func_576(269, 0);
					}
				}
			}
		}
		if (Global_1935630.f_15 == joaat("LAW_BOUNTY_HUNTERS") || Global_1935630.f_15 == joaat("LAW_BOUNTY_HUNTERS_CSI"))
		{
			if (LAW::_0x9945A3E2528A02E8(PLAYER::GET_PLAYER_INDEX()))
			{
				if (!func_575(273))
				{
					func_576(273, 0);
				}
			}
		}
		if (!func_575(268))
		{
			if (!func_651() && !func_650())
			{
				if (PLAYER::_0xB15CD2F9932C9AB5(PLAYER::PLAYER_ID()) > 0)
				{
					func_576(268, 0);
				}
			}
		}
		else if (func_741(268))
		{
			if (PLAYER::_0xB15CD2F9932C9AB5(PLAYER::PLAYER_ID()) <= 0)
			{
				func_648(268);
			}
		}
	}
}

void func_198(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return;
	}
	func_742(func_739(), bParam1);
}

void func_199(bool bParam0)
{
	if (func_114(0, 1, 1) || bParam0)
	{
		func_743();
		return;
	}
	if (Global_1934266.f_76)
	{
		return;
	}
	if (!func_456(&(Global_1934266.f_70)))
	{
		if (func_127(Global_1879514.f_1))
		{
			func_457(&(Global_1934266.f_70), 0);
			if (func_554())
			{
				Global_1934266.f_76 = 1;
				return;
			}
			if (func_377(Global_1879514.f_1) == 8)
			{
				if (Global_1879514.f_1 == Global_1347702[63 /*49*/].f_15 || Global_1879514.f_1 == Global_1347702[65 /*49*/].f_15)
				{
					if (!func_575(541))
					{
						func_576(541, 0);
					}
					if (Global_1879514.f_1 == Global_1347702[63 /*49*/].f_15)
					{
						Global_1934266.f_73 = { -45.0f, 1227.0f, 172.0f /*3*/ };
					}
					if (Global_1879514.f_1 == Global_1347702[65 /*49*/].f_15)
					{
						Global_1934266.f_73 = { -2197.0f, 711.0f, 122.0f /*3*/ };
					}
				}
			}
			else if (func_377(Global_1879514.f_1) == 1)
			{
				if (((Global_1879514.f_1 == Global_1835011[13 /*74*/].f_1 || Global_1879514.f_1 == Global_1835011[12 /*74*/].f_1) || Global_1879514.f_1 == Global_1835011[53 /*74*/].f_1) || Global_1879514.f_1 == Global_1835011[56 /*74*/].f_1)
				{
					if (!func_575(541))
					{
						func_576(541, 0);
					}
					if (Global_1879514.f_1 == Global_1835011[13 /*74*/].f_1)
					{
						Global_1934266.f_73 = { -1502.0f, -774.0f, 105.0f /*3*/ };
					}
					if (Global_1879514.f_1 == Global_1835011[12 /*74*/].f_1)
					{
						Global_1934266.f_73 = { -1176.0f, -8.0f, 42.0f /*3*/ };
					}
					if (Global_1879514.f_1 == Global_1835011[53 /*74*/].f_1)
					{
						Global_1934266.f_73 = { 1168.0f, -620.0f, 80.0f /*3*/ };
					}
					if (Global_1879514.f_1 == Global_1835011[56 /*74*/].f_1)
					{
						Global_1934266.f_73 = { 566.0f, 1697.0f, 187.0f /*3*/ };
					}
				}
			}
		}
	}
	else if ((func_458(&(Global_1934266.f_70)) >= func_744() && !func_587(Global_1934266.f_73)) && func_745(Global_35, Global_1934266.f_73, 1) <= 60.0f)
	{
		if (func_554())
		{
			Global_1934266.f_76 = 1;
			return;
		}
		func_746(1);
		func_747(0);
		LAW::_0x07E8B8B20570271C(PLAYER::PLAYER_ID());
		LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), joaat("CRIME_MURDER"), 0, 0, false);
		func_743();
		Global_1934266.f_76 = 1;
	}
}

void func_200()
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	float fVar6;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		iVar2 = Global_17504.f_2084[iVar0 /*5*/].f_3;
		if (iVar2 != -1)
		{
			vVar3 = { Global_17504.f_2084[iVar0 /*5*/] /*3*/ };
			if (!func_587(vVar3))
			{
				if (func_748(iVar2, 1) && !func_748(iVar2, 34))
				{
					fVar6 = 30.0f;
					if (!VOLUME::_0x769BB7626B8CDB06(vVar3, 1.0f, 0, 16, 0))
					{
						Global_1310750.f_16078[iVar0] = VOLUME::_CREATE_VOLUME_LOCK(vVar3, fVar6, iVar1, 16);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_201()
{
	float fVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	float fVar6;

	if (!func_456(&(Global_1310750.f_16040)))
	{
		func_457(&(Global_1310750.f_16040), 0);
	}
	fVar0 = 7.0f;
	if (func_657())
	{
		fVar0 = (7.0f / 2.0f);
	}
	if (func_749(&(Global_1310750.f_16040), fVar0) && !PED::IS_PED_INJURED(Global_35))
	{
		iVar1 = Global_1310750.f_16068;
		iVar2 = func_750(iVar1 + 1 >= 8, 0, iVar1 + 1);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) /*3*/ };
		fVar6 = ENTITY::GET_ENTITY_HEADING(Global_35);
		vVar3 = { vVar3 - Vector(3.0f, 3.0f, 3.0f) * Vector(0.0f, BUILTIN::COS(fVar6), -BUILTIN::SIN(fVar6)) /*3*/ };
		Global_1310750.f_16043[iVar1 /*3*/] = { vVar3 /*3*/ };
		Global_1310750.f_16068 = iVar2;
		func_751(&(Global_1310750.f_16040));
	}
}

int func_202()
{
	return Global_1310750.f_16037;
}

bool func_203(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

void func_204(int iParam0)
{
	Global_1310750.f_16035 -= Global_1310750.f_16035 & iParam0;
}

void func_205()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		iVar1 = Global_17504.f_2084[iVar0 /*5*/].f_3;
		if (iVar1 != -1)
		{
			Global_17504.f_2084[iVar0 /*5*/].f_4--;
			if (Global_17504.f_2084[iVar0 /*5*/].f_4 <= 0)
			{
				func_752(Global_17504.f_2084[iVar0 /*5*/], 30.0f);
			}
		}
		iVar0++;
	}
}

void func_206()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_753(Global_1310750.f_13321[iVar0 /*9*/]))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_13321[iVar0 /*9*/].f_5, false))
			{
				if (Global_1310750.f_13321[iVar0 /*9*/].f_5 == Global_1310750.f_16077)
				{
					func_754(Global_1310750.f_13321[iVar0 /*9*/]);
				}
				Global_1310750[Global_1310750.f_13321[iVar0 /*9*/] /*111*/].f_48 = 0;
				func_755(iVar0);
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (Global_1310750.f_16077 != 0)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_16077, false))
		{
			func_754(Global_1310750.f_16071);
		}
	}
	Global_1310750.f_16037 = iVar1;
	if (func_756())
	{
		iVar0 = (iVar1 - 1);
		while (iVar0 >= 0)
		{
			if (func_753(Global_1310750.f_13321[iVar0 /*9*/]))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(Global_1310750.f_13321[iVar0 /*9*/].f_5, false) && Global_1310750.f_13321[iVar0 /*9*/].f_5 != Global_1310750.f_16077)
				{
					func_757(iVar0);
				}
				else
				{
					iVar0 += -1;
				}
			}
		}
	}
}

void func_207()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	Global_1326862.f_4 = 0;
	if (!func_758(&iVar1, &iVar2))
	{
		return;
	}
	if (((!CAM::IS_SCREEN_FADED_IN() || PED::IS_PED_INJURED(Global_35)) || func_759()) || !func_480(func_479()))
	{
		return;
	}
	if (!func_203(256) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, (1 << 9)) > 0)
	{
		func_760();
		func_761(Global_1310750.f_16071, 0, 0, 0, 0);
		return;
	}
	bVar5 = func_273();
	if (Global_1326862 <= iVar1)
	{
		Global_1326862 = iVar1;
		func_762();
		Global_1310750.f_16111 = MISC::GET_GAME_TIMER();
	}
	iVar6 = 0;
	MISC::_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL();
	iVar3 = Global_1326862;
	while (iVar3 <= iVar2)
	{
		iVar0 = Global_1326862.f_11[iVar3];
		if (!bVar5 || func_763(iVar0))
		{
			Global_1310750[iVar0 /*111*/].f_45 = func_764(iVar0, 1);
			if (Global_1310750[iVar0 /*111*/].f_45)
			{
				if (func_765(iVar0, 8) && !Global_1327479.f_9)
				{
					Global_1327479.f_7 = ((Global_1327479.f_4 - MISC::GET_GAME_TIMER()) / 1000);
					func_766(iVar0, 1, 0.0f, 0.0f, 0.0f, -1, 0, 0);
				}
				bVar4 = false;
				if (Global_1310750[iVar0 /*111*/].f_110 & 15 != 0)
				{
					func_767(iVar0);
					bVar4 = true;
				}
				if (Global_1310750[iVar0 /*111*/].f_110 & 16 != 0)
				{
					func_768(iVar0);
					bVar4 = true;
				}
				if (Global_1310750[iVar0 /*111*/].f_110 & 32 != 0 || Global_1326862.f_5)
				{
					func_769(iVar0);
					bVar4 = true;
				}
				if (bVar4)
				{
					func_770(iVar0, 1);
				}
				Global_1310750[iVar0 /*111*/].f_110 = 0;
			}
		}
		else
		{
			Global_1310750[iVar0 /*111*/].f_45 = 0;
		}
		iVar6 += MISC::_GET_NUMBER_OF_MICROSECONDS_SINCE_LAST_CALL();
		if (iVar6 > 50)
		{
			Global_1326862 = iVar3 + 1;
			return;
		}
		iVar3++;
	}
	Global_1326862 = iVar1;
	Global_1326862.f_4 = 1;
	Global_1326862.f_5 = 0;
}

void func_208()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = Global_1905944.f_5697;
	iVar2 = iVar1 + 9;
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (iVar0 >= 630)
		{
			Global_1905944.f_5697 = 0;
			return;
		}
		Global_1905944.f_5697++;
		iVar3 = iVar0;
		if (iVar3 == -1 || iVar3 == 630)
		{
		}
		else if (Global_1905944.f_22[iVar3 /*9*/].f_3[0 /*2*/].f_1 != 3)
		{
		}
		else if (func_741(iVar3))
		{
		}
		else if (func_771(iVar3))
		{
		}
		else if (!func_213(iVar3, (1 << 14)))
		{
		}
		else
		{
			iVar4 = Global_1905944.f_22[iVar3 /*9*/].f_3[0 /*2*/];
			if (MAP::DOES_BLIP_EXIST(iVar4))
			{
				MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
				MAP::REMOVE_BLIP(&iVar4);
			}
		}
		iVar0++;
	}
}

bool func_209(bool bParam0)
{
	if (func_571())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(5) == 2)
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_651())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_772())
	{
		return false;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return false;
	}
	if (func_773())
	{
		return false;
	}
	return true;
}

void func_210(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_774() && bParam3)
	{
		func_775(Global_1905944.f_5693, iParam0, iParam1);
		return;
	}
	*iParam0 = 0;
	while (*iParam0 < 21)
	{
		*iParam1 = 0;
		while (*iParam1 < 31)
		{
			if (MISC::IS_BIT_SET(Global_1905944[*iParam0], *iParam1))
			{
				if (iVar0 == iParam2)
				{
					return;
				}
				iVar0++;
			}
			*iParam1++;
		}
		*iParam0++;
	}
	*iParam0 = -1;
	*iParam1 = -1;
}

int func_211(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0 * 31;
	iVar0 += iParam1;
	return iVar0;
}

bool func_212(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!PED::IS_PED_INJURED(Global_35))
	{
		if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_35, 0) > 0 && !func_213(iParam0, (1 << 9)))
		{
			return false;
		}
	}
	if (!func_776(iParam0))
	{
		return false;
	}
	if (!func_213(iParam0, 1) && func_114(0, 0, 1))
	{
		if (!func_213(iParam0, (1 << 18)) || !bParam2)
		{
			return false;
		}
	}
	if (func_213(iParam0, 32) && func_657())
	{
		return false;
	}
	if (func_213(iParam0, 16))
	{
		if (!func_777(iParam0))
		{
			return false;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		iVar1 = Global_1905944.f_22[iParam0 /*9*/].f_3[iVar0 /*2*/].f_1;
		if (iVar1 == 3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1905944.f_22[iParam0 /*9*/].f_3[iVar0 /*2*/]))
			{
				*iParam1 = 0;
				return false;
			}
		}
		iVar0++;
	}
	if (func_778() && !func_779(Global_1914319.f_16855.f_1))
	{
		if (!func_213(iParam0, 128))
		{
			return false;
		}
	}
	if (func_213(iParam0, 98304))
	{
		bVar2 = func_780(iParam0);
		if (!bVar2)
		{
			*iParam1 = 0;
			return false;
		}
	}
	return true;
}

bool func_213(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

void func_214(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 21)
	{
		iVar2 = 0;
		while (iVar2 < 31)
		{
			if (MISC::IS_BIT_SET(Global_1905944[iVar1], iVar2))
			{
				if (func_211(iVar1, iVar2) == iParam0)
				{
					return iVar0;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	return -1;
}

void func_216(int iParam0)
{
	Global_1905944.f_5693 = iParam0;
}

void func_217(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 <= -1 || iParam0 >= 630)
	{
		return;
	}
	if (func_213(iParam0, 8))
	{
		sVar0 = "JOURNAL_WRITE";
		sVar1 = "HUD_FRONTEND_DEFAULT_SOUNDSET";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FRONTEND(sVar0, sVar1, true, 0);
}

int func_218(int iParam0)
{
	if (func_213(iParam0, (1 << 13)))
	{
		return 10000;
	}
	else if (func_213(iParam0, (1 << 12)))
	{
		return 7000;
	}
	else if (func_213(iParam0, (1 << 11)))
	{
		return 5000;
	}
	return 0;
}

int func_219(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = Global_1905944.f_22[iParam1 /*9*/].f_3[0 /*2*/];
	iVar1 = Global_1905944.f_22[iParam1 /*9*/].f_3[1 /*2*/];
	iVar2 = Global_1905944.f_22[iParam1 /*9*/].f_3[0 /*2*/].f_1;
	iVar3 = Global_1905944.f_22[iParam1 /*9*/].f_3[1 /*2*/].f_1;
	if (iVar3 != 0)
	{
		switch (iVar3)
		{
			case 1:
			case 3:
				switch (iVar2)
				{
					case 1:
						return func_220(MISC::VAR_STRING(0, sParam0, sVar0, iVar1), iParam2, 0, 0, iParam3, 1);
					case 3:
						if (MAP::DOES_BLIP_EXIST(sVar0))
						{
							Global_1905944.f_5698 = sVar0;
							return func_220(MISC::VAR_STRING(0, sParam0, sVar0, iVar1), iParam2, 0, 0, iParam3, 1);
						}
						break;
					case 2:
						return func_220(MISC::VAR_STRING(8, sParam0, MISC::VAR_STRING(0, sVar0), iVar1), iParam2, 0, 0, iParam3, 1);
				}
				break;
			case 2:
				switch (iVar2)
				{
					case 1:
						return func_220(MISC::VAR_STRING(32, sParam0, sVar0, MISC::VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
					case 3:
						if (MAP::DOES_BLIP_EXIST(sVar0))
						{
							Global_1905944.f_5698 = sVar0;
							return func_220(MISC::VAR_STRING(32, sParam0, sVar0, MISC::VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
						}
						break;
					case 2:
						return func_220(MISC::VAR_STRING(40, sParam0, MISC::VAR_STRING(0, sVar0), MISC::VAR_STRING(0, iVar1)), iParam2, 0, 0, iParam3, 1);
				}
				break;
			case 4:
				func_677(sVar0, 0, iVar1 == 1, 0, 0, 0, 1065353216, 0);
				return func_220(MISC::VAR_STRING(0, sParam0), iParam2, 0, 0, iParam3, 1);
		}
	}
	else
	{
		switch (iVar2)
		{
			case 1:
				return func_220(MISC::VAR_STRING(0, sParam0, sVar0), iParam2, 0, 0, iParam3, 1);
			case 5:
				return func_220(MISC::VAR_STRING(0, sVar0), iParam2, 0, 0, iParam3, 1);
			case 2:
				return func_220(MISC::VAR_STRING(8, sParam0, MISC::VAR_STRING(0, sVar0)), iParam2, 0, 0, iParam3, 1);
			case 3:
				if (MAP::DOES_BLIP_EXIST(sVar0))
				{
					Global_1905944.f_5698 = sVar0;
					return func_220(MISC::VAR_STRING(0, sParam0, sVar0), iParam2, 0, 0, iParam3, 1);
				}
				break;
		}
	}
	return 0;
}

int func_220(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar15;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = cParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&sVar0, &sVar13, bParam5);
	return iVar15;
}

void func_221()
{
	Global_1905944.f_5693 = -1;
}

bool func_222(int iParam0)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_8 != -1;
}

int func_223(int iParam0)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_8;
}

void func_224(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;

	if (func_112() != -1)
	{
		uVar0 = Global_36638.f_1444[*iParam0];
		MISC::SET_BIT(&uVar0, *iParam1);
		Global_36638.f_1444[*iParam0] = uVar0;
		return;
	}
	uVar1 = Global_40.f_7832[*iParam0];
	MISC::SET_BIT(&uVar1, *iParam1);
	Global_40.f_7832[*iParam0] = uVar1;
}

int func_225()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (Global_1391411.f_2[iVar1 /*2*/].f_1 != 234527101)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_226(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_227(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_228()
{
	return func_518(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(3));
}

void func_229(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1391411.f_2[iVar0 /*2*/].f_1 != 234527101)
		{
			iVar2 = func_781(iParam0, iVar0);
			if (iVar2 == 1)
			{
				iVar1 += 5;
			}
			else if (iVar2 == 2)
			{
				iVar1 += 2;
			}
			else if (iVar2 == 3)
			{
				iVar1 -= 3;
			}
		}
		iVar0++;
	}
	func_782(iParam0, iVar1, bParam1);
	func_783();
}

void func_230(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_784();
	if (iVar0 == -1)
	{
		func_783();
		return;
	}
	iVar3 = 234527101;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (iVar3 == 234527101)
		{
			iVar2 = iVar1;
			iVar3 = Global_1391411.f_2[iVar1 /*2*/].f_1;
		}
		iVar1++;
	}
	if (iVar3 == 234527101)
	{
		return;
	}
	iVar4 = func_781(iVar0, iVar3);
	iVar5 = 0;
	if (iVar4 == 1)
	{
		iVar5 += 5;
	}
	else if (iVar4 == 2)
	{
		iVar5 += 2;
	}
	else if (iVar4 == 3)
	{
		iVar5 -= 3;
	}
	func_782(iVar0, iVar5, bParam0);
	Global_1391411.f_2[iVar2 /*2*/].f_1 = 234527101;
}

void func_231()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (func_234(iVar0))
		{
			func_785(iVar0);
		}
		iVar0++;
	}
}

void func_232()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (func_234(iVar0))
		{
			if (MISC::IS_BIT_SET(Global_40.f_9052, iVar0) && !SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iVar0 /*32*/].f_21, false))
			{
				func_786(&(Global_1392626[iVar0 /*32*/].f_8), 1);
			}
		}
		iVar0++;
	}
}

void func_233(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1392626)
	{
		if (func_234(iVar0) && MISC::IS_BIT_SET(Global_40.f_9052, iVar0))
		{
			if (Global_1392626[iVar0 /*32*/].f_10 & iParam0 == 0)
			{
				func_787(iVar0, iParam0);
			}
			func_238(iVar0);
		}
		iVar0++;
	}
}

bool func_234(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 9);
}

bool func_235(int iParam0)
{
	if (!func_234(iParam0))
	{
		return true;
	}
	return func_447(Global_1392626[iParam0 /*32*/].f_3, 1);
}

void func_236(int iParam0)
{
	if (func_246(Global_1392626[iParam0 /*32*/].f_3))
	{
		func_129(Global_1392626[iParam0 /*32*/].f_3);
	}
	func_241(iParam0, 1, 1);
	if (MISC::IS_BIT_SET(Global_40.f_9052, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_40.f_9052), iParam0);
	}
}

bool func_237(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_238(int iParam0)
{
	bool bVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_788(iParam0, 4))
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]);
	}
	else
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1);
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & (1 << 12) != 0)
	{
		if (bVar0)
		{
			return;
		}
	}
	if (func_788(iParam0, 4))
	{
		if (!bVar0)
		{
			func_789(iParam0, &(Global_1392626[iParam0 /*32*/]), Global_1392626[iParam0 /*32*/].f_24);
		}
		MAP::BLIP_ADD_MODIFIER(Global_1392626[iParam0 /*32*/], joaat("BLIP_MODIFIER_LOCKED"));
	}
	else
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bVar0)
		{
			MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
		}
		func_789(iParam0, &(Global_1392626[iParam0 /*32*/].f_1), Global_1392626[iParam0 /*32*/].f_27);
		MAP::BLIP_ADD_MODIFIER(Global_1392626[iParam0 /*32*/].f_1, joaat("BLIP_MODIFIER_LOCKED"));
	}
	func_790(&(Global_1392626[iParam0 /*32*/].f_9), (1 << 12));
}

void func_239(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	char* sVar3;

	if (func_788(iParam0, 4))
	{
		iVar0 = Global_1392626[iParam0 /*32*/];
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	else
	{
		iVar0 = Global_1392626[iParam0 /*32*/].f_1;
		if (!MAP::DOES_BLIP_EXIST(iVar0))
		{
			return;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & (1 << 12) == 0)
	{
		return;
	}
	if (func_788(iParam0, 4))
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_24);
	}
	else
	{
		fVar1 = BUILTIN::VDIST2(Global_36, Global_1392626[iParam0 /*32*/].f_27);
	}
	if (Global_1392626[iParam0 /*32*/].f_9 & (1 << 13) != 0)
	{
		if (fVar1 > 45.0f)
		{
			iVar2 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
			if (iVar2 != Global_1392626[iParam0 /*32*/].f_23)
			{
				UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1392626[iParam0 /*32*/].f_23, false);
			}
			func_791(&(Global_1392626[iParam0 /*32*/].f_9), (1 << 13));
		}
	}
	else if (fVar1 <= 25.0f)
	{
		if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 10) != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_ANTAGONIZE", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 12) != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_MEMORY", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 11) != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 14) != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		else if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 13) != 0)
		{
			sVar3 = MISC::VAR_STRING(2, "MISSION_COMBAT", iVar0);
			Global_1392626[iParam0 /*32*/].f_23 = func_220(sVar3, 10000, 0, 0, 0, 1);
		}
		func_790(&(Global_1392626[iParam0 /*32*/].f_9), (1 << 13));
	}
}

bool func_240(int iParam0)
{
	if (iParam0 == func_792(Global_1572864.f_8))
	{
		return true;
	}
	if (Global_40.f_9052.f_1[iParam0] != -15)
	{
		if (!func_793(Global_40.f_9052.f_1[iParam0], 1))
		{
			return false;
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		return true;
	}
	if (func_794(iParam0))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (func_723(26))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 11) == 0)
			{
				func_787(iParam0, (1 << 11));
			}
			return false;
		}
		else if (func_715(26))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 11) == 0)
			{
				func_787(iParam0, (1 << 11));
			}
			return false;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_12 != -1)
	{
		if (func_723(Global_1392626[iParam0 /*32*/].f_12))
		{
			if (Global_1392626[iParam0 /*32*/].f_10 & (1 << 11) == 0)
			{
				func_787(iParam0, (1 << 11));
			}
			return false;
		}
	}
	if (Global_1392626[iParam0 /*32*/].f_22 != -1)
	{
		if (!func_795(Global_1392626[iParam0 /*32*/].f_22))
		{
			return false;
		}
	}
	if (func_796(Global_1392626[iParam0 /*32*/].f_8, 1))
	{
		if (!func_797() && func_245(iParam0, Global_1392626[iParam0 /*32*/].f_6))
		{
			return false;
		}
		else if (!CAM::IS_SPHERE_VISIBLE(Global_1392626[iParam0 /*32*/].f_24, Global_1392626[iParam0 /*32*/].f_5))
		{
			func_798(&(Global_1392626[iParam0 /*32*/].f_8), 1);
		}
	}
	return true;
}

void func_241(int iParam0, int iParam1, bool bParam2)
{
	if (!func_234(iParam0))
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1392626[iParam0 /*32*/].f_21, 523);
	}
	func_540(iParam0, bParam2, iParam1);
}

void func_242(int iParam0)
{
	bool bVar0;

	if (!func_234(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (func_788(iParam0, 4))
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]);
	}
	else
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1);
	}
	func_799(&(Global_1392626[iParam0 /*32*/].f_10));
	func_798(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	func_791(&(Global_1392626[iParam0 /*32*/].f_9), (1 << 12));
	if (bVar0)
	{
		if (!func_788(iParam0, 4))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
			if (!func_788(iParam0, 8))
			{
				func_800(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
			}
			else
			{
				func_801(iParam0);
			}
			MAP::BLIP_REMOVE_MODIFIER(Global_1392626[iParam0 /*32*/].f_1, joaat("BLIP_MODIFIER_LOCKED"));
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1392626[iParam0 /*32*/], joaat("BLIP_MODIFIER_LOCKED"));
		}
	}
}

void func_243(int iParam0)
{
	if ((Global_1879534 || HUD::IS_RADAR_HIDDEN_BY_SCRIPT()) || CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (func_788(iParam0, 4))
	{
		func_802(&(Global_1392626[iParam0 /*32*/].f_1));
		if (!MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
		{
			func_789(iParam0, &(Global_1392626[iParam0 /*32*/]), Global_1392626[iParam0 /*32*/].f_24);
		}
	}
	else if (!func_788(iParam0, 8))
	{
		func_800(iParam0, Global_1392626[iParam0 /*32*/].f_27, Global_1392626[iParam0 /*32*/].f_4);
	}
	else
	{
		func_801(iParam0);
	}
}

void func_244(int iParam0)
{
	float fVar0;
	Vector3 vVar1;
	float fVar4;
	Vector3 vVar5;
	char cVar8[32];

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		fVar0 = 25.0f;
		vVar1 = { Global_1392626[iParam0 /*32*/].f_24 /*3*/ };
		if (!func_788(iParam0, 4) && Global_1392626[iParam0 /*32*/].f_4 > 0.0f)
		{
			fVar0 = (Global_1392626[iParam0 /*32*/].f_4 + 5.0f);
			vVar1 = { Global_1392626[iParam0 /*32*/].f_27 /*3*/ };
		}
		else if (func_803(iParam0))
		{
			fVar0 = 15.0f;
		}
		Global_1392626[iParam0 /*32*/].f_30 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar1, 0.0f, 0.0f, 0.0f, fVar0, fVar0, fVar0, func_804(iParam0));
		func_270(Global_1392626[iParam0 /*32*/].f_30, func_804(iParam0), 1, 0, 0, 0, -1082130432);
	}
	if ((iParam0 == 1 || iParam0 == 4) || iParam0 == 5)
	{
		if (iParam0 == 1)
		{
			fVar4 = 100.0f;
		}
		else if (iParam0 == 4)
		{
			fVar4 = 200.0f;
			func_805(1411.856f, 1166.743f, 184.1507f, 200.0f, 0, 0, 5);
		}
		else if (iParam0 == 5)
		{
			fVar4 = 100.0f;
		}
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
		{
			vVar5 = { Global_1392626[iParam0 /*32*/].f_24 /*3*/ };
			strcpy_s(&cVar8, 32, func_804(iParam0));
			strcat_s(&cVar8, 32, "Extra");
			Global_1392626[iParam0 /*32*/].f_31 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0.0f, 0.0f, 0.0f, fVar4, fVar4, fVar4, &cVar8);
			func_270(Global_1392626[iParam0 /*32*/].f_31, &cVar8, 1, 0, 0, 0, -1082130432);
		}
	}
}

bool func_245(int iParam0, float fParam1)
{
	if (BUILTIN::VDIST2(Global_1392626[iParam0 /*32*/].f_24, Global_36) > (fParam1 * fParam1) && iParam0 != func_792(Global_1572864.f_8))
	{
		return false;
	}
	return true;
}

bool func_246(int iParam0)
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
		iVar0 = func_128(iParam0);
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

void func_247(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_806(iParam0, iParam1);
}

int func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> /*48*/ sVar3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_429(iParam0))
	{
		return -1;
	}
	if (func_112() != -1)
	{
		iVar2 = func_430(iParam0);
		if (iVar2 >= 0)
		{
			func_807(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { sVar3 /*6*/ };
			func_130(iVar1, 1);
			func_807(iParam0, 1);
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
		iVar2 = func_430(iParam0);
		if (iVar2 >= 0)
		{
			func_807(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_127(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { sVar3 /*6*/ };
					func_130(iVar0, 1);
					func_807(iParam0, 1);
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

Vector3 func_249(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 2638.87f, -1289.67f, 51.32f };
		case 1:
			return { 1289.142f, -1305.846f, 77.34f };
		case 2:
			return { -307.3165f, 776.0316f, 118.7f };
		case 3:
			return { -813.4f, -1275.6f, 44.8f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_250(int iParam0, int iParam1, Vector3 vParam2, bool bParam5)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_587(vParam2))
	{
		return;
	}
	if (!func_47(iParam1))
	{
		return;
	}
	Global_1934182[iParam0 /*18*/].f_1 = { vParam2 /*3*/ };
	Global_1934182[iParam0 /*18*/].f_5 = func_311(1, iParam0, 2, func_808(iParam0));
	Global_1934182[iParam0 /*18*/] = iParam1;
	if (bParam5)
	{
		Global_1934182[iParam0 /*18*/].f_7 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_809(iParam0), func_810(iParam0), func_811(iParam0), func_812(iParam0));
		VOLUME::_0x128FC3A893BF853A(Global_1934182[iParam0 /*18*/].f_7);
	}
	switch (iParam0)
	{
		case 2:
			func_813(170);
			break;
	}
}

bool func_251(int iParam0)
{
	return Global_1934182.f_74 & iParam0 != 0;
}

bool func_252(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_587(Global_1934182[iParam0 /*18*/].f_1))
	{
		return false;
	}
	if (!func_127(Global_1934182[iParam0 /*18*/].f_5))
	{
		return false;
	}
	return true;
}

bool func_253(int iParam0)
{
	return Global_1934182[iParam0 /*18*/].f_15;
}

bool func_254(int iParam0)
{
	if (func_46() != Global_1934182[iParam0 /*18*/])
	{
		return false;
	}
	return true;
}

bool func_255(int iParam0)
{
	int iVar0;

	if (Global_1934182[iParam0 /*18*/].f_14)
	{
		return false;
	}
	switch (iParam0)
	{
		case 3:
			iVar0 = 519;
			break;
		case 0:
			iVar0 = 208;
			break;
		case 1:
			iVar0 = 76;
			break;
		case 2:
			iVar0 = 12;
			break;
	}
	if (!func_266(iVar0, 0))
	{
		return true;
	}
	if (!func_814())
	{
		return true;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!VOLUME::DOES_VOLUME_EXIST(Global_1934182[iParam0 /*18*/].f_7))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		iVar2 = ENTITY::_GET_ENTITIES_IN_VOLUME(Global_1934182[iParam0 /*18*/].f_7, iVar1, 1);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar1) <= 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar1);
			return false;
		}
		switch (iParam0)
		{
			case 3:
				iVar4 = 519;
				break;
			case 0:
				iVar4 = 208;
				break;
			case 1:
				iVar4 = 76;
				break;
			case 2:
				iVar4 = 12;
				break;
		}
		iVar0 = 0;
		while (iVar0 < iVar2)
		{
			iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar0, iVar1);
			if (MISC::_GET_ITEM_TYPE(iVar3) == 9)
			{
				iVar5 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && PED::IS_PED_HUMAN(iVar5))
				{
					if (iVar5 != func_815(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar5))
					{
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return false;
}

bool func_257(int iParam0)
{
	if (iParam0 != 2)
	{
		return true;
	}
	if (CAM::IS_SPHERE_VISIBLE(-308.1361f, 780.5737f, 118.7622f, 2.0f))
	{
		return false;
	}
	return true;
}

void func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1934182[iParam0 /*18*/].f_1);
	if (!INTERIOR::IS_INTERIOR_READY(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_816(iParam0, 0);
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (func_817(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
		{
			if (!func_818(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
			{
				if (!func_819(Global_1934182[iParam0 /*18*/].f_8[iVar1]))
				{
					func_820(Global_1934182[iParam0 /*18*/].f_8[iVar1], 1, 0.0f, 0, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
	}
}

void func_259(int iParam0)
{
	Global_1934182.f_74 -= Global_1934182.f_74 & iParam0;
}

void func_260(int iParam0)
{
	Global_1934182.f_74 |= iParam0;
}

void func_261(int iParam0)
{
	int iVar0;

	func_816(iParam0, 1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_817(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
		{
			if (!func_821(Global_1934182[iParam0 /*18*/].f_8[iVar0]))
			{
				func_820(Global_1934182[iParam0 /*18*/].f_8[iVar0], 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_262(int iParam0)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_46() != 76)
	{
		if (Global_1934182[iParam0 /*18*/].f_4 != -1)
		{
			func_157(func_822(iParam0), 15, Global_1934182[iParam0 /*18*/].f_1, 0);
			Global_1934182[iParam0 /*18*/].f_4 = -1;
		}
	}
}

bool func_263(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return Global_40.f_9079[iParam0] & 1 != 0;
}

bool func_264(int iParam0)
{
	int iVar0;

	if (!func_588(iParam0))
	{
		return false;
	}
	iVar0 = Global_40.f_9079.f_10[iParam0];
	if (iVar0 == -15 || iVar0 == 0)
	{
		return false;
	}
	func_823(&iVar0, 0, 0, 0, 1, 0, 0, 0);
	return !func_793(iVar0, 1);
}

int func_265(int iParam0)
{
	if (!func_588(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 208;
		case 1:
			return 76;
		case 2:
			return 12;
		case 3:
			return 519;
	}
	return -1;
}

bool func_266(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_586(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_824(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_815(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_824(iParam0));
}

void func_267(int iParam0)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_446(Global_1934182[iParam0 /*18*/].f_5))
	{
		return;
	}
	if (func_246(Global_1934182[iParam0 /*18*/].f_5))
	{
		return;
	}
	Global_40.f_9079.f_5[iParam0] = 1;
	func_248(Global_1934182[iParam0 /*18*/].f_5);
}

void func_268(int iParam0, float fParam1)
{
	if (fParam1 < 400.0f)
	{
		if (!func_263(iParam0))
		{
			func_825(iParam0);
		}
	}
}

void func_269()
{
	func_288(0, &(Global_40.f_9096[0 /*12*/]));
	func_280(0, (1 << 30));
	func_280(0, (1 << 28));
	Global_1392194[0 /*10*/].f_9 = MISC::GET_FRAME_COUNT();
	func_288(3, &(Global_40.f_9096[3 /*12*/]));
	func_280(3, (1 << 30));
	func_280(3, (1 << 28));
	Global_1392194[3 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 360;
	func_288(1, &(Global_40.f_9096[1 /*12*/]));
	func_280(1, (1 << 30));
	func_280(1, (1 << 28));
	Global_1392194[1 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 720;
	func_288(2, &(Global_40.f_9096[2 /*12*/]));
	func_280(2, (1 << 30));
	func_280(2, (1 << 28));
	Global_1392194[2 /*10*/].f_9 = MISC::GET_FRAME_COUNT() + 1080;
	func_826();
}

int func_270(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
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
	iVar6 = func_827(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_271()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_828(iVar0, -1);
		iVar0++;
	}
}

int func_272()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	fVar2 = func_829(func_301(iVar0, func_276(iVar0)), 0);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == iVar0)
		{
		}
		else
		{
			fVar3 = func_829(func_301(iVar1, func_276(iVar1)), 0);
			if (fVar3 < fVar2)
			{
				fVar2 = fVar3;
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	Global_1898092.f_4 = fVar2;
	return iVar0;
}

bool func_273()
{
	return Global_1898164.f_163;
}

void func_274(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!func_283(iParam0, (1 << 27)))
	{
		return;
	}
	if (Global_1898092.f_26.f_2 == iParam0)
	{
		bVar1 = true;
	}
	if (func_283(iParam0, 1))
	{
		bVar0 = true;
	}
	if (func_283(iParam0, (1 << 27)))
	{
		bVar2 = true;
	}
	bVar3 = true;
	if ((!bVar1 && !bVar0) && !bVar2)
	{
		bVar3 = false;
	}
	if (func_830(Global_36, iParam0))
	{
		func_295(iParam0, (1 << 27));
		if (iParam0 == 3)
		{
			func_280(iParam0, (1 << 16));
		}
		bVar3 = false;
	}
	if (func_283(iParam0, (1 << 16)) && Global_1898092.f_26.f_2 != iParam0)
	{
		bVar3 = false;
	}
	if (func_283(iParam0, (1 << 20)))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		iVar4 = func_831(iParam0);
	}
	if (bVar3 && !bParam1)
	{
		if (Global_1392194[iParam0 /*10*/].f_2 == -1)
		{
			Global_1392194[iParam0 /*10*/].f_3 = iVar4;
			Global_1392194[iParam0 /*10*/].f_2 = func_158(func_297(iParam0), iVar4, func_301(iParam0, func_276(iParam0)), -1);
			func_159(func_297(iParam0), iVar4, func_301(iParam0, func_276(iParam0)), func_832(iParam0));
		}
		else if (Global_1392194[iParam0 /*10*/].f_3 != iVar4)
		{
			func_157(func_297(iParam0), Global_1392194[iParam0 /*10*/].f_3, func_301(iParam0, func_276(iParam0)), 0);
			Global_1392194[iParam0 /*10*/].f_2 = -1;
		}
	}
	else if (Global_1392194[iParam0 /*10*/].f_2 != -1)
	{
		func_157(func_297(iParam0), Global_1392194[iParam0 /*10*/].f_3, func_301(iParam0, func_276(iParam0)), 0);
		Global_1392194[iParam0 /*10*/].f_2 = -1;
	}
}

void func_275()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1898092.f_3;
	Global_1898092.f_3 = func_272();
	if (iVar0 != Global_1898092.f_3)
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			iVar1 = (64 * func_750(iVar2 == 0, 1, (2 * iVar2)));
			func_833(&(Global_1898092.f_5[iVar2 /*6*/]), iVar1, 1);
			iVar2++;
		}
	}
}

int func_276(int iParam0)
{
	if (!func_834(iParam0))
	{
		return -1;
	}
	return Global_40.f_9096[iParam0 /*12*/];
}

void func_277(int iParam0, int iParam1)
{
	if (func_835(iParam0, iParam1))
	{
		*iParam1 = func_287(*iParam0);
		func_836(*iParam0, *iParam1);
		func_837(*iParam0, 0);
		if (func_283(*iParam0, (1 << 22)))
		{
			func_295(*iParam0, (1 << 22));
		}
		if (func_283(*iParam0, (1 << 23)))
		{
			func_295(*iParam0, (1 << 23));
		}
		func_838(*iParam0);
		func_280(*iParam0, (1 << 31));
		func_280(*iParam0, (1 << 30));
	}
}

void func_278(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0)
	{
		iVar0 = iParam1;
		switch (iVar0)
		{
			case 1:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					if (func_283(1, 2))
					{
						func_840(iParam0, 1, 0);
					}
					else
					{
						func_840(iParam0, 2, 0);
					}
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 4, 0);
				}
				break;
			case 3:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 14, 0);
				}
				break;
			case 4:
				break;
			case 5:
				break;
		}
	}
	else if (iParam0 == 1)
	{
		iVar1 = iParam1;
		switch (iVar1)
		{
			case 1:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 5, 0);
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 5, 0);
				}
				break;
			case 3:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					if (!func_283(iParam0, 128))
					{
						func_840(iParam0, 15, 0);
					}
					else
					{
						func_840(iParam0, 2, 0);
					}
				}
				break;
			case 4:
				if (func_285(iParam0, 128) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 0, 0);
				}
				break;
		}
	}
	else if (iParam0 == 3)
	{
		iVar2 = iParam1;
		switch (iVar2)
		{
			case 1:
				if ((func_285(iParam0, 4) && !func_285(iParam0, (1 << 17))) && !func_283(iParam0, 32))
				{
					func_839(iParam0, (1 << 17));
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
				}
				break;
		}
	}
	else if (iParam0 == 2)
	{
		iVar3 = iParam1;
		switch (iVar3)
		{
			case 1:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 2, 0);
				}
				break;
			case 2:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 12, 0);
				}
				break;
			case 3:
				if (func_285(iParam0, 4) && !func_285(iParam0, (1 << 17)))
				{
					func_839(iParam0, (1 << 17));
					func_840(iParam0, 4, 0);
				}
				break;
			case 4:
				break;
		}
	}
	func_841(iParam0);
}

bool func_279(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	if ((MISC::GET_FRAME_COUNT() - Global_1392194[iParam0 /*10*/].f_9) > 1800)
	{
		Global_1392194[iParam0 /*10*/].f_9 = MISC::GET_FRAME_COUNT();
		if (!func_842(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

void func_280(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return;
	}
	if (func_283(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 |= iParam1;
}

bool func_281(int iParam0)
{
	return Global_1898092.f_1 & iParam0 != 0;
}

bool func_282(int iParam0)
{
	if ((!func_285(iParam0, (1 << 19)) && !func_285(iParam0, (1 << 20))) && !func_285(iParam0, (1 << 21)))
	{
		return true;
	}
	if ((func_843(Global_36, iParam0) || func_149(func_297(iParam0), 8)) || func_226(Global_1392194[iParam0 /*10*/].f_1, 1))
	{
		return false;
	}
	if (Global_40.f_9096[iParam0 /*12*/].f_11 < 0)
	{
		if (Global_40.f_9096[iParam0 /*12*/].f_8 >= 3 && func_283(iParam0, (1 << 21)))
		{
			if (!func_283(iParam0, (1 << 22)))
			{
				func_280(iParam0, (1 << 22));
				func_280(iParam0, (1 << 30));
				func_839(iParam0, (1 << 23));
				func_844(iParam0);
				return false;
			}
			else if (!func_283(iParam0, (1 << 23)))
			{
				func_280(iParam0, (1 << 23));
				func_280(iParam0, (1 << 30));
				return false;
			}
		}
		else
		{
			func_838(iParam0);
			func_845(iParam0, 3);
			return true;
		}
	}
	if (func_846(iParam0))
	{
		if (Global_40.f_9096[iParam0 /*12*/].f_8 >= 3 && func_283(iParam0, (1 << 21)))
		{
			if (!func_283(iParam0, (1 << 22)))
			{
				func_280(iParam0, (1 << 22));
				func_280(iParam0, (1 << 30));
				func_839(iParam0, (1 << 23));
				func_844(iParam0);
				return false;
			}
			else if (!func_283(iParam0, (1 << 23)))
			{
				func_280(iParam0, (1 << 23));
				func_280(iParam0, (1 << 30));
				return false;
			}
		}
		else
		{
			func_838(iParam0);
		}
		return false;
	}
	return false;
}

bool func_283(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_5 & iParam1 != 0;
}

bool func_284(int iParam0)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_2;
}

bool func_285(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_4 & iParam1 != 0;
}

bool func_286(int iParam0, int iParam1)
{
	int iVar0;

	if (func_283(iParam0, (1 << 28)))
	{
		return true;
	}
	if (func_281(2) || func_281(1))
	{
		return true;
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		func_290(8);
		return false;
	}
	if (func_273())
	{
		func_290(8);
		return false;
	}
	if (func_226(Global_1392194[iParam0 /*10*/].f_1, 1))
	{
		func_290(8);
		return false;
	}
	if (BUILTIN::VDIST2(func_301(iParam0, iParam1), Global_36) <= 90000.0f)
	{
		func_839(iParam0, (1 << 11));
		return false;
	}
	iVar0 = func_297(iParam0);
	if (iParam0 != 1 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
	{
		func_839(iParam0, (1 << 11));
		return false;
	}
	if (func_847(iParam0, iParam1))
	{
		func_290(8);
		return false;
	}
	return true;
}

int func_287(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_288(int iParam0, var uParam1)
{
	if (func_848(iParam0, *uParam1))
	{
		return;
	}
	if (func_663(45))
	{
		*uParam1 = func_287(iParam0);
		return;
	}
	*uParam1 = func_849(iParam0);
}

void func_289(int iParam0)
{
	if (!func_834(iParam0))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 = 0;
}

void func_290(int iParam0)
{
	Global_1898092.f_1 |= iParam0;
}

void func_291(int iParam0)
{
	Global_1898092 = iParam0;
}

void func_292(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_834(iParam0))
	{
		return;
	}
	func_850(iParam0, Global_40.f_9096[iParam0 /*12*/].f_2, iParam1, iParam2, iParam3, iParam4);
}

void func_293()
{
	int iVar0;

	if (!Global_1935630.f_12)
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !func_283(1, (1 << 13))) && !(PED::IS_PED_IN_COMBAT(Global_35, 0) || func_851()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
			if (func_852(&iVar0))
			{
				if (!DECORATOR::DECOR_EXIST_ON(Global_35, "bGPSEnabled"))
				{
					DECORATOR::DECOR_SET_BOOL(Global_35, "bGPSEnabled", true);
					if (!MAP::DOES_BLIP_EXIST(Global_1392194[1 /*10*/].f_4))
					{
						func_854(func_853(), &(Global_1392194[1 /*10*/].f_4), joaat("BLIP_STYLE_NEUTRAL_OBJECTIVE"), 0, func_832(1), 0);
					}
					func_576(458, (MISC::GET_FRAME_COUNT() - Global_1392194[1 /*10*/].f_8) > 2700);
				}
			}
		}
		else if (DECORATOR::DECOR_EXIST_ON(Global_35, "bGPSEnabled"))
		{
			DECORATOR::DECOR_REMOVE(Global_35, "bGPSEnabled");
			func_802(&(Global_1392194[1 /*10*/].f_4));
			Global_1392194[1 /*10*/].f_8 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_294(int iParam0, int iParam1)
{
	if (iParam1 < func_855(iParam0))
	{
		func_295(iParam0, (1 << 16));
	}
	switch (iParam0)
	{
		case 0:
			Global_40.f_9096[0 /*12*/].f_6 = 0;
			if (iParam1 == 2)
			{
				func_840(iParam0, 10, 0);
			}
			else if (iParam1 == 3)
			{
				if (!func_285(iParam0, 128))
				{
					if (!func_285(iParam0, (1 << 23)))
					{
						func_839(iParam0, (1 << 23));
					}
				}
				else if (func_285(iParam0, (1 << 23)) && !func_283(iParam0, (1 << 22)))
				{
					func_856(iParam0, (1 << 23));
				}
			}
			else if (iParam1 == 4)
			{
				func_839(iParam0, (1 << 23));
			}
			else if (iParam1 == 5)
			{
				func_839(iParam0, (1 << 23));
			}
			break;
		case 1:
			if (iParam1 == 2)
			{
				if (!func_285(iParam0, 4))
				{
					if (!func_285(iParam0, (1 << 23)))
					{
						func_839(iParam0, (1 << 23));
					}
				}
				else if (func_285(iParam0, (1 << 23)) && !func_283(iParam0, (1 << 22)))
				{
					func_856(iParam0, (1 << 23));
				}
			}
			else if (iParam1 == 4)
			{
				func_840(iParam0, 30, 0);
				if (func_285(iParam0, (1 << 23)) && !func_283(iParam0, (1 << 22)))
				{
					func_856(iParam0, (1 << 23));
				}
			}
			else if (iParam1 == 5)
			{
				if (!func_285(iParam0, (1 << 23)))
				{
					func_839(iParam0, (1 << 23));
				}
			}
			break;
		case 3:
			if (iParam1 == 1)
			{
			}
			else if (iParam1 == 2)
			{
			}
			break;
		case 2:
			if (iParam1 == 2)
			{
				if (!func_285(iParam0, 128))
				{
					if (!func_285(iParam0, (1 << 23)))
					{
						func_839(iParam0, (1 << 23));
					}
				}
				else if (func_285(iParam0, (1 << 23)) && !func_283(iParam0, (1 << 22)))
				{
					func_856(iParam0, (1 << 23));
				}
			}
			else if (iParam1 == 4)
			{
				if (!func_285(iParam0, 256))
				{
					func_839(iParam0, 256);
				}
			}
			break;
	}
	func_856(iParam0, (1 << 17));
}

void func_295(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return;
	}
	if (!func_283(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_5 -= Global_40.f_9096[iParam0 /*12*/].f_5 & iParam1;
}

bool func_296(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!func_834(iParam0))
	{
		func_290(8);
		return false;
	}
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		func_290(8);
		return false;
	}
	if (func_281(2) || func_281(1))
	{
		bParam2 = true;
	}
	if (func_283(iParam0, (1 << 28)))
	{
		bParam2 = true;
		bParam4 = false;
	}
	iVar0 = func_297(iParam0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (!func_281(32))
	{
		func_290(32);
	}
	switch (iParam0)
	{
		case 0:
			iVar1 = 14;
			switch (iParam1)
			{
				case 1:
					bVar2 = func_285(0, 128);
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, bVar2, bParam4, func_858(0), func_283(0, (1 << 22)), iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_860(iParam1);
							func_861(0, iParam1);
							if (!func_858(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					bVar2 = func_283(0, (1 << 9));
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, func_858(0), func_283(0, (1 << 22)), iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_860(iParam1);
							func_861(0, iParam1);
							if (!func_858(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, func_858(0), func_283(0, (1 << 22)), iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_860(iParam1);
							func_861(0, iParam1);
							if (!func_858(0))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							func_280(iParam0, (1 << 20));
							func_860(iParam1);
							func_861(0, iParam1);
							AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_04", true, true);
							MISC::_0xCC3EDC5614B03F61(0);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_857(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_859(iParam1, 0, bParam4, 0, 0, iVar1))
						{
							func_280(iParam0, (1 << 20));
							func_860(iParam1);
							func_402(joaat("WS_ORCHIDS_APPLESEED"), 1, 0);
							func_861(0, iParam1);
							AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_05", true, true);
							MISC::_0xCC3EDC5614B03F61(0);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 1:
			iVar1 = 4;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, func_283(1, (1 << 22)), func_283(1, (1 << 23)), bParam4, func_858(1), iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, func_283(1, (1 << 22)), func_283(1, (1 << 23)), bParam4, func_858(1), iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, func_283(1, 128), func_283(1, (1 << 22)), func_283(1, (1 << 23)), bParam4, func_858(1), iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_861(1, iParam1);
							if (!func_858(1))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_04", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 5:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_863(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_864(iParam1, 0, 0, 0, bParam4, 0, iVar1))
						{
							func_280(iParam0, (1 << 20));
							func_861(1, iParam1);
							MISC::_0xCC3EDC5614B03F61(1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 3:
			iVar1 = 2;
			iVar3 = iParam1;
			switch (iVar3)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_865(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_866(iParam1, bParam4, iVar1))
						{
							func_861(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_865(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_866(iParam1, bParam4, iVar1))
						{
							func_861(3, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
		case 2:
			iVar1 = 13;
			switch (iParam1)
			{
				case 1:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 2.0f))
						{
							func_290(8);
							return false;
						}
						if (!bParam2 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							func_290(8);
							return false;
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						bVar2 = func_872(iParam1);
						if (func_873(iParam1, bVar2, bParam4, func_283(2, (1 << 22)), iVar1))
						{
							if (bVar2)
							{
								func_839(2, (1 << 27));
							}
							func_295(iParam0, (1 << 20));
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::RESET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false);
								VOLUME::DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 2244.843f, 721.3605f, 95.94753f, 0.0f, 0.0f, 0.0f, 40.0f, 40.0f, 30.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 2122.792f, 1063.288f, 129.0717f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							PATHFIND::SET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false, false, false);
							func_861(2, iParam1);
							if (!func_858(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_01", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 2:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 1.5f))
						{
							func_290(8);
							return false;
						}
						if (!bParam2 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							func_290(8);
							return false;
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						bVar2 = func_872(iParam1);
						if (func_873(iParam1, bVar2, bParam4, func_283(2, (1 << 22)), iVar1))
						{
							if (bVar2)
							{
								func_839(2, (1 << 27));
							}
							func_295(iParam0, (1 << 20));
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::RESET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false);
								VOLUME::DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 2122.792f, 1063.288f, 129.0717f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							PATHFIND::SET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false, false, false);
							func_861(2, iParam1);
							if (!func_858(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_02", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 3:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!bParam3 && !func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 1065353216))
						{
							func_290(8);
							return false;
						}
						if (!bParam2 && func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
						{
							func_290(8);
							return false;
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_873(iParam1, 0, bParam4, func_283(2, (1 << 22)), iVar1))
						{
							func_295(iParam0, (1 << 20));
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::RESET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false);
								VOLUME::DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							Global_1392194[2 /*10*/].f_7 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("EA Central Union - volRoadBlock");
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1892.675f, 997.9972f, 125.5401f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1821.172f, 936.1248f, 120.5233f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Global_1392194[2 /*10*/].f_7, 1817.783f, 855.9667f, 117.5885f, 0.0f, 0.0f, 0.0f, 10.0f, 10.0f, 10.0f);
							PATHFIND::SET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false, false, false);
							func_861(2, iParam1);
							if (!func_858(2))
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_03", true, true);
							}
							else
							{
								AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", true, true);
							}
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
				case 4:
					if (!bParam4 || Global_1898092 == 1)
					{
						if (!func_870(func_867(iParam1), func_868(iParam1), func_869(iParam1), bParam2, iParam1, 1065353216))
						{
							func_290(8);
							return false;
						}
						if (!bParam2)
						{
							if (func_736(Global_35, Global_1888801[iVar0 /*35*/].f_3, 1, 0))
							{
								func_290(8);
								return false;
							}
							if (CAM::IS_SPHERE_VISIBLE(1846.298f, 887.8817f, 113.5422f, 115.0f) || func_829(1846.298f, 887.8817f, 113.5422f, 1) < 200.0f)
							{
								func_290(8);
								return false;
							}
						}
						if (!func_871(bParam4, iVar1))
						{
							return false;
						}
						else if (bParam4)
						{
							func_862(iParam0, 1);
							func_291(2);
							func_290(8);
							return false;
						}
					}
					if (!bParam4 || Global_1898092 == 2)
					{
						if (func_873(iParam1, bVar2, bParam4, 0, iVar1))
						{
							func_280(iParam0, (1 << 20));
							func_874(iParam1);
							if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[2 /*10*/].f_7))
							{
								PATHFIND::RESET_ROADS_IN_VOLUME(Global_1392194[2 /*10*/].f_7, false);
								VOLUME::DELETE_VOLUME(Global_1392194[2 /*10*/].f_7);
							}
							func_280(iParam0, (1 << 16));
							func_875(iVar0);
							func_876(4, 1);
							func_877("railroad_stage4");
							func_861(2, iParam1);
						}
					}
					if (bParam4 && Global_1898092.f_25 < iVar1)
					{
						return false;
					}
					break;
			}
			break;
	}
	func_295(iParam0, (1 << 28));
	func_305(32);
	return true;
}

int func_297(int iParam0)
{
	if (!func_834(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 11;
		case 1:
			return 76;
		case 3:
			return 15;
		case 2:
			return 128;
		default:
			break;
	}
	return -1;
}

void func_298(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -1261.231f, -310.1417f, 100.7263f /*3*/ };
					*uParam2 = 71.3469f;
					return;
				case 1:
					*uParam1 = { -1474.719f, -79.4687f, 109.0108f /*3*/ };
					*uParam2 = 211.465f;
					return;
				case 2:
					*uParam1 = { -1376.806f, -60.8017f, 79.2619f /*3*/ };
					*uParam2 = 168.8738f;
					return;
				case 3:
					*uParam1 = { -1497.011f, -363.2157f, 134.0955f /*3*/ };
					*uParam2 = 331.0784f;
					return;
			}
			break;
		case 1:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -570.3791f, 416.2931f, 87.4048f /*3*/ };
					*uParam2 = 300.6946f;
					return;
				case 1:
					*uParam1 = { -311.3359f, 560.101f, 98.8341f /*3*/ };
					*uParam2 = 113.9066f;
					return;
				case 2:
					*uParam1 = { -418.9164f, 668.0876f, 114.5171f /*3*/ };
					*uParam2 = 177.6395f;
					return;
				case 3:
					*uParam1 = { -308.2228f, 510.0672f, 91.1515f /*3*/ };
					*uParam2 = 89.967f;
					return;
			}
			break;
		case 2:
			switch (iParam4)
			{
				case 1:
				case default:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2248.901f, 535.688f, 74.7152f /*3*/ };
							*uParam2 = 22.0801f;
							return;
						case 1:
							*uParam1 = { 2223.725f, 798.5815f, 107.6169f /*3*/ };
							*uParam2 = 159.1932f;
							return;
						case 2:
							*uParam1 = { 2340.829f, 736.3986f, 73.1578f /*3*/ };
							*uParam2 = 127.9038f;
							return;
						case 3:
							*uParam1 = { 2119.933f, 649.0927f, 133.1353f /*3*/ };
							*uParam2 = 274.3134f;
							return;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2249.599f, 667.4967f, 87.6821f /*3*/ };
							*uParam2 = 24.2233f;
							return;
						case 1:
							*uParam1 = { 2112.95f, 995.3058f, 110.7093f /*3*/ };
							*uParam2 = 204.0536f;
							return;
						case 2:
							*uParam1 = { 2328.921f, 724.4437f, 75.8784f /*3*/ };
							*uParam2 = 55.6839f;
							return;
						case 3:
							*uParam1 = { 2156.616f, 672.2913f, 121.7241f /*3*/ };
							*uParam2 = 325.4661f;
							return;
					}
					break;
				case 3:
					switch (iParam3)
					{
						case 0:
						case default:
							*uParam1 = { 2122.964f, 965.6495f, 114.3117f /*3*/ };
							*uParam2 = 101.8466f;
							return;
						case 1:
							*uParam1 = { 1824.587f, 886.397f, 110.226f /*3*/ };
							*uParam2 = 294.963f;
							return;
						case 2:
							*uParam1 = { 1896.055f, 994.3648f, 119.4357f /*3*/ };
							*uParam2 = 237.7192f;
							return;
						case 3:
							*uParam1 = { 1885.696f, 832.0124f, 123.1121f /*3*/ };
							*uParam2 = 343.0453f;
							return;
					}
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
				case default:
					*uParam1 = { -1647.109f, -1045.513f, 71.1557f /*3*/ };
					*uParam2 = 315.9918f;
					return;
				case 1:
					*uParam1 = { -1700.649f, -807.9653f, 101.8737f /*3*/ };
					*uParam2 = 236.2661f;
					return;
				case 2:
					*uParam1 = { -1417.209f, -817.977f, 99.2119f /*3*/ };
					*uParam2 = 130.1669f;
					return;
				case 3:
					*uParam1 = { -1486.81f, -905.7153f, 85.2737f /*3*/ };
					*uParam2 = 82.6837f;
					return;
			}
			break;
	}
}

void func_299(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_878(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_879(iParam0))
	{
		if (func_880(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_530(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= iParam5 & 4;
				func_299(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= iParam5 & 4;
				func_299(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_530(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_530(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_530(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_530(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_530(iParam5, 129))
	{
		if (func_530(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_530(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_530(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_530(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_879(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_530(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_530(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

void func_300(bool bParam0, int iParam1)
{
	bool bVar0;

	if (func_881())
	{
		if (func_882(255))
		{
			if (!func_714(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_47(Global_1894899.f_2) && func_351(Global_1894899.f_2))
		{
			func_883(Global_1894899.f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899.f_7 = iParam1;
				func_884(16);
			}
		}
		else if (func_47(Global_1894899.f_2) && !func_149(Global_1894899.f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
		}
		Global_1894899.f_7 = 0;
		func_885(16);
		func_886();
		if (bVar0)
		{
			func_885(1);
		}
	}
}

Vector3 func_301(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return { -1410.538f, -223.0142f, 100.0121f };
		case 1:
			return { -439.4129f, 498.0963f, 97.94115f };
		case 3:
			return { -1577.892f, -915.5556f, 82.73499f };
		case 2:
			switch (iParam1)
			{
				case 1:
					return { 2226.756f, 666.0685f, 94.00805f };
				case 2:
					return { 2195.606f, 794.7285f, 106.9675f };
				case 3:
					return { 1951.033f, 934.2983f, 116.3355f };
				default:
					break;
			}
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_302(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_303(Vector3 vParam0, float fParam3, int iParam4)
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

void func_304(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= (1 << 17);
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

void func_305(int iParam0)
{
	Global_1898092.f_1 -= Global_1898092.f_1 & iParam0;
}

void func_306(int iParam0)
{
	if (func_594(iParam0))
	{
		if (func_887(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_40.f_9146.f_1 = -1;
			}
			else
			{
				Global_40.f_9146.f_1 = iParam0 + 1;
			}
		}
		else if (func_888(iParam0))
		{
			if (iParam0 == 3)
			{
				Global_40.f_9146.f_2 = -1;
			}
			else
			{
				Global_40.f_9146.f_2 = iParam0 + 1;
			}
		}
	}
	func_889(Global_40.f_9146.f_2);
	func_889(Global_40.f_9146.f_1);
}

bool func_307()
{
	if (func_273())
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
		{
			return true;
		}
	}
	return false;
}

void func_308()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_10))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_10));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_11))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_11));
		}
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar0 /*13*/].f_12))
		{
			MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar0 /*13*/].f_12));
		}
		if (func_890(Global_1392388.f_10[iVar0 /*13*/].f_5))
		{
			func_891(Global_1392388.f_10[iVar0 /*13*/].f_5, 0);
		}
		iVar0++;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388, false))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies");
	}
}

void func_309()
{
	struct<4> /*32*/ sVar0;
	bool bVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;

	bVar5 = false;
	if (Global_40.f_9146.f_3 == -1)
	{
		iVar6 = 0;
		while (iVar6 < 14)
		{
			if (!func_591(iVar6))
			{
				if (func_892(iVar6))
				{
					if (!MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar6 /*13*/].f_12))
					{
						if (func_893(iVar6))
						{
							Global_1392388.f_10[iVar6 /*13*/].f_12 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_PROC_MISSION"), Global_1392388.f_10[iVar6 /*13*/].f_2);
							MAP::SET_BLIP_SPRITE(Global_1392388.f_10[iVar6 /*13*/].f_12, joaat("BLIP_AMBIENT_COACH"), true);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392388.f_10[iVar6 /*13*/].f_12, "PROC_BLIP_CRTIP");
						}
					}
					if (func_894(iVar6))
					{
						if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
						{
							bVar5 = true;
							SCRIPTS::REQUEST_SCRIPT("coachrobberies_intro");
							if (SCRIPTS::HAS_SCRIPT_LOADED("coachrobberies_intro"))
							{
								sVar0.f_2 = Global_1392388.f_10[iVar6 /*13*/].f_12;
								sVar0.f_0 = iVar6;
								sVar0.f_3 = 0;
								sVar0.f_1 = Global_1392388.f_10[iVar6 /*13*/];
								Global_1392388 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("coachrobberies_intro", &sVar0, 5, (1 << 10));
								SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
							}
						}
					}
				}
			}
			iVar6++;
		}
	}
	else
	{
		iVar7 = Global_40.f_9146.f_3;
		if (func_592(iVar7) || func_895(iVar7))
		{
			if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_12))
			{
				MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_12));
			}
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
			{
				if (BUILTIN::VDIST(Global_36, func_896(iVar7)) < func_897(iVar7))
				{
					if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_10))
					{
						MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_10));
					}
					if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar7 /*13*/].f_11))
					{
						MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar7 /*13*/].f_11));
					}
				}
			}
			else if (func_592(iVar7))
			{
				if (!func_898(iVar7))
				{
					func_248(Global_1392388.f_10[iVar7 /*13*/].f_8);
				}
			}
			if (iVar7 != 13)
			{
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392388.f_1, false))
				{
					if (func_793(Global_40.f_9146.f_79[iVar7], 1))
					{
						if (func_594(iVar7))
						{
							func_899(iVar7);
						}
						func_900(iVar7, 1);
						func_220("PROC_H_CROB_EXP", 10000, 0, 0, 0, 1);
						func_901();
						if (func_887(iVar7))
						{
							func_902((1 << 10));
						}
						else if (func_888(iVar7))
						{
							func_902((1 << 11));
						}
						return;
					}
				}
			}
		}
	}
	bVar8 = false;
	if ((((Global_40.f_9146.f_3 != -1 || func_273()) || func_903(128, 0)) || !func_904(2, -1)) || func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		bVar8 = true;
	}
	iVar9 = 0;
	while (iVar9 < 7)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iVar9 /*13*/].f_12))
		{
			if (((bVar8 || (func_47(Global_1392388.f_10[iVar9 /*13*/].f_1) && func_149(Global_1392388.f_10[iVar9 /*13*/].f_1, (1 << 25)))) || (func_586(Global_1392388.f_10[iVar9 /*13*/]) && !func_266(Global_1392388.f_10[iVar9 /*13*/], 0))) || (func_351(Global_1392388.f_10[iVar9 /*13*/].f_1) && func_905(iVar9)))
			{
				MAP::REMOVE_BLIP(&(Global_1392388.f_10[iVar9 /*13*/].f_12));
			}
		}
		iVar9++;
	}
	if (!bVar5)
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("coachrobberies_intro");
	}
}

bool func_310()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_154(4) && func_529())
	{
		return false;
	}
	if (func_114(144, 0, 1) || func_362(Global_1935630, (1 << 11)))
	{
		return false;
	}
	return true;
}

int func_311(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_644())
	{
		iVar2 = func_644();
	}
	iVar5 = func_906(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_559(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_559(iVar6) == 0)
			{
				return func_907(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_559(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_559(iVar6) == 0)
			{
				return func_907(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_907(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_312(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_127(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_446(iParam0) && !func_246(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_378(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_446(iParam0))
	{
		iParam2 = -1;
	}
	if (func_128(iParam0) == 3 || (func_128(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_378(iParam0))))
	{
		func_908(func_377(iParam0), func_378(iParam0), iParam2);
		if ((!func_127(Global_1572864.f_8) && !func_114(0, 1, 0)) && !func_362(Global_1935630, (1 << 15)))
		{
			iVar0 = func_909(iParam0);
			if (iVar0 != -1)
			{
				func_910(0);
			}
			else if (func_377(iParam0) == 8)
			{
				iVar0 = func_911();
				if (iVar0 != -1)
				{
					func_910(0);
				}
			}
		}
	}
	func_247(iParam0, 0);
	if (func_539(0) == iParam0)
	{
		func_746(1);
		func_912(0);
		func_913(1);
	}
	func_914(iParam0, 1);
	func_915(iParam0);
}

int func_313(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_314(iVar0))
		{
			fVar3 = func_916(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_314(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
	}
	return false;
}

bool func_315(int iParam0, int iParam1)
{
	if (!func_917(iParam0))
	{
		return false;
	}
	return Global_40.f_11029[iParam0 /*5*/] & iParam1 != 0;
}

bool func_316(int iParam0, var uParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_918(iParam0) && iParam0 != 14)
	{
		return false;
	}
	if (iParam0 != 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (func_919(Global_35, VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), 1) < (fParam2 * fParam2))
			{
				return true;
			}
			*uParam1 = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iParam0 /*373*/].f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (func_920(Global_35, *uParam1, 1) < (fParam2 * fParam2))
		{
			return true;
		}
		if (iParam3 < 0)
		{
			iVar0 = VEHICLE::_GET_TRAIN_CAR(*uParam1);
		}
		else
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iParam3);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (func_920(Global_35, iVar0, 1) < (fParam2 * fParam2))
			{
				return true;
			}
		}
		iVar1 = VEHICLE::_GET_TRAIN_CARRIAGE_TRAILER_NUMBER(*uParam1);
		if (iVar1 > 3)
		{
			iVar1 /= 2;
			iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_920(Global_35, iVar2, 1) < (fParam2 * fParam2))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_317()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_921(iVar0);
		iVar0++;
	}
}

Vector3 func_318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 1789.0f, -81.2f, 56.8f };
		case 1:
			return { 777.0469f, 848.3318f, 117.9097f };
		case 2:
			return { 1319.072f, -2281.907f, 51.31572f };
		case 3:
			return { -415.0638f, 1752.658f, 217.6675f };
		case 4:
			return { 1623.045f, -364.0234f, 75.39715f };
		case 5:
			return { 2820.866f, 275.3142f, 51.84647f };
		case 6:
			return { 2990.484f, 2188.289f, 165.7838f };
		case 7:
			return { -1817.371f, 657.6644f, 130.8627f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_319(int iParam0, int iParam1, Vector3 vParam2)
{
	Global_1392240.f_1[iParam0 /*18*/] = { vParam2 /*3*/ };
	Global_1392240.f_1[iParam0 /*18*/].f_4 = iParam1;
	Global_1392240.f_1[iParam0 /*18*/].f_13 = func_311(6, iParam0, 2, MISC::GET_HASH_KEY(func_922(iParam0)));
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_923(iParam0) == 0)
		{
			func_924(iParam0, -15, 1, 2, 0);
		}
	}
}

bool func_320(int iParam0, int iParam1)
{
	if (func_114(0, 0, 1) && !func_925(iParam1, 1))
	{
		return false;
	}
	if (!func_926() || func_149(iParam0, (1 << 21)))
	{
		return false;
	}
	return true;
}

void func_321(int iParam0, bool bParam1)
{
	if (!func_927(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
	{
		MAP::REMOVE_BLIP(&(Global_1392240.f_1[iParam0 /*18*/].f_5));
	}
	if (bParam1)
	{
		func_928(iParam0);
	}
}

bool func_322(int iParam0)
{
	return func_929(iParam0, 1);
}

bool func_323(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_930(6, 8))
		{
			return false;
		}
	}
	if (!func_370(58))
	{
		return false;
	}
	if (bParam0)
	{
		if (func_930(6, 1))
		{
			if (func_679() && !func_930(6, 8))
			{
				return true;
			}
			else if (!func_679())
			{
				return false;
			}
		}
	}
	return true;
}

void func_324(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return;
	}
	if (!bParam1)
	{
		func_931(iParam0);
	}
	func_932(iParam0);
	Global_1392240.f_146 = 0;
	func_933(iParam0, (1 << 9));
}

bool func_325(int iParam0)
{
	if (!func_926())
	{
		return false;
	}
	if (!func_927(iParam0))
	{
		return false;
	}
	if (func_587(Global_1392240.f_1[iParam0 /*18*/]))
	{
		return false;
	}
	if (func_930(iParam0, 2))
	{
		func_934(iParam0);
		func_935(iParam0);
		return false;
	}
	if (func_149(Global_1392240.f_1[iParam0 /*18*/].f_4, (1 << 21)))
	{
		return false;
	}
	if (!func_936(iParam0))
	{
		return false;
	}
	if (func_937())
	{
		return false;
	}
	if (!func_602(iParam0, 8))
	{
		if (func_603(iParam0))
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 2:
			if (func_938(2))
			{
				return false;
			}
			break;
		case 4:
			if (!func_929(4, (1 << 13)) && func_829(func_318(4), 1) < 20.0f)
			{
				func_939(4, (1 << 13));
			}
			if (func_940() || (func_930(4, 8) && !func_941()))
			{
				return false;
			}
			break;
		case 6:
			if (!func_323(1, 1))
			{
				return false;
			}
			break;
		case 3:
			if (func_388())
			{
				if (func_930(3, (1 << 27)) && func_942() != 565221344)
				{
					return false;
				}
			}
			else
			{
				if (func_930(3, 16))
				{
					return false;
				}
				if (func_930(3, (1 << 27)))
				{
					return false;
				}
			}
			break;
		case 5:
			if (func_930(3, 16) && !func_388())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_326(int iParam0, bool bParam1)
{
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (func_930(0, 2) || (func_679() && func_930(0, 16)))
			{
				func_943(216214729);
			}
			else
			{
				func_944(216214729);
			}
			func_945(iParam0, (1 << 18));
			break;
		case 2:
			if (func_946(iParam0, (1 << 18)))
			{
				return;
			}
			if (func_930(2, 2))
			{
				func_943(-1532653291);
			}
			else
			{
				func_944(-1532653291);
			}
			func_945(iParam0, (1 << 18));
			break;
		case 1:
			if (func_946(iParam0, (1 << 18)))
			{
				return;
			}
			func_944(-389510791);
			func_945(iParam0, (1 << 18));
			break;
		case 4:
			if (func_925(iParam0, (1 << 9)) || bParam1)
			{
				if ((func_940() || func_941()) || bParam1)
				{
					func_944(1401474740);
					func_945(iParam0, (1 << 18));
				}
				else if (((!func_940() && !func_370(95)) && !func_941()) || func_930(4, 8))
				{
					func_943(1401474740);
					func_947(iParam0, (1 << 18));
				}
			}
			else if (func_946(iParam0, (1 << 18)))
			{
				func_943(1401474740);
				func_947(iParam0, (1 << 18));
			}
			break;
		case 6:
			if ((func_323(1, 1) && !func_929(6, (1 << 14))) && !func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				func_944(585407854);
			}
			else
			{
				func_943(585407854);
			}
			break;
		case 5:
			if (func_946(iParam0, (1 << 18)))
			{
				return;
			}
			if (func_936(5))
			{
				func_944(-2035177903);
			}
			else
			{
				func_943(-2035177903);
			}
			func_945(iParam0, (1 << 18));
			break;
		case 7:
			if (func_946(iParam0, (1 << 18)))
			{
				return;
			}
			if ((func_929(iParam0, (1 << 22)) || func_929(iParam0, (1 << 23))) || (((func_929(iParam0, (1 << 11)) && func_930(7, 16)) && func_679()) && func_929(iParam0, (1 << 21))))
			{
				func_943(-622475043);
				func_945(iParam0, (1 << 18));
			}
			else
			{
				func_944(-622475043);
				func_945(iParam0, (1 << 18));
			}
			break;
		default:
			if (func_925(iParam0, (1 << 9)))
			{
				func_945(iParam0, (1 << 18));
			}
			break;
	}
}

void func_327(int iParam0)
{
	if (func_246(Global_1392240.f_1[iParam0 /*18*/].f_13))
	{
		return;
	}
	if (!func_429(Global_1392240.f_1[iParam0 /*18*/].f_13))
	{
		func_247(Global_1392240.f_1[iParam0 /*18*/].f_13, 0);
	}
	func_248(Global_1392240.f_1[iParam0 /*18*/].f_13);
}

void func_328(int iParam0)
{
	if (func_925(iParam0, (1 << 10)))
	{
		func_928(iParam0);
		return;
	}
	if (func_602(iParam0, 4))
	{
		return;
	}
	if (!func_929(iParam0, 8))
	{
		func_948(iParam0, 0);
		func_939(iParam0, 8);
	}
	else
	{
		func_948(iParam0, 0);
	}
}

void func_329(int iParam0)
{
	float fVar0;

	if (!func_925(iParam0, 1))
	{
		return;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392240, false))
	{
		return;
	}
	fVar0 = BUILTIN::VDIST(Global_36, Global_1392240.f_1[iParam0 /*18*/]);
	if (fVar0 > 200.0f)
	{
		return;
	}
	func_949(iParam0);
}

void func_330(int iParam0)
{
	int iVar0;

	if (iParam0 == 2)
	{
		if (func_938(2))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_817(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]))
		{
			if (!func_821(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]))
			{
				func_820(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0], 0, 0, 0, 1, 0, 0, 0);
			}
		}
		iVar0++;
	}
}

void func_331()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_950(iVar0, 0);
		switch (iVar0)
		{
			case 0:
				func_857(0, 1);
				func_951();
				break;
			case 1:
				func_863(0, 1);
				func_952();
				break;
			case 3:
				func_865(0, 1);
				break;
			case 2:
				func_871(0, 1);
				func_944(2077623691);
				func_870(func_867(1), func_868(1), func_869(1), 1, 1, 2.0f);
				func_953();
				func_954();
				break;
		}
		iVar0++;
	}
}

void func_332(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= *uParam0 & iParam1;
	}
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_2");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_3");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_COMMON_4");
	}
	return 0;
}

void func_334()
{
	int iVar0;

	iVar0 = Global_1359489.f_10;
	if (!func_955(iVar0))
	{
		return;
	}
	switch (Global_40.f_4942[iVar0 /*60*/].f_49)
	{
		case 4:
			if (func_956(func_538(), Global_40.f_4942[iVar0 /*60*/].f_46, 1))
			{
				if (func_957(iVar0, 1, 1))
				{
					WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(func_958(iVar0), func_959(iVar0));
				}
				func_960(iVar0, func_113(), 0);
				Global_40.f_4942[iVar0 /*60*/].f_46 = -15;
				Global_40.f_4942[iVar0 /*60*/].f_49 = 0;
			}
			break;
	}
}

bool func_335(int iParam0, int iParam1)
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
	if (func_530(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_530(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_530(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_530(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_336(int iParam0)
{
	return Global_1359489.f_16 & iParam0 != 0;
}

void func_337(int iParam0)
{
	Global_1359489.f_16 -= Global_1359489.f_16 & iParam0;
}

void func_338()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_961(&(Global_1359489.f_63[iVar0 /*24*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_962(&(Global_1359489.f_63.f_242[iVar0 /*18*/]), iVar0);
		iVar0++;
	}
}

void func_339(int iParam0)
{
	Global_1359489.f_16 |= iParam0;
}

void func_340(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	char cVar2[64];
	int iVar10;

	bVar0 = MAP::DOES_BLIP_EXIST(Global_1391438.f_308[iParam1]);
	bVar1 = true;
	if (uParam0->f_9 == -589165916)
	{
		bVar1 = false;
	}
	if (func_335(uParam0->f_1, 0))
	{
		if (!(PED::IS_PED_USING_THIS_SCENARIO(uParam0->f_1, uParam0->f_33) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uParam0->f_1, 0)) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(uParam0->f_1, -1))
		{
			bVar1 = false;
		}
	}
	if (func_273())
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		if (!bVar0 && !Global_1391438.f_311[uParam0->f_12])
		{
			Global_1391438.f_308[iParam1] = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), uParam0->f_14);
			MAP::SET_BLIP_SPRITE(Global_1391438.f_308[iParam1], func_963(uParam0->f_8), true);
			strcpy_s(&cVar2, 64, MISC::VAR_STRING(2, func_964(uParam0->f_8)));
			strcat_s(&cVar2, 64, " - ");
			strcat_s(&cVar2, 64, MISC::VAR_STRING(2, func_965(*uParam0, 0)));
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1391438.f_308[iParam1], &cVar2);
			iVar10 = func_966(uParam0->f_8);
			if (iVar10 != 0)
			{
				MAP::SET_BLIP_FLASH_TIMER(Global_1391438.f_308[iParam1], iVar10, uParam0->f_9);
			}
			if (func_967(*uParam0) != 0)
			{
				MAP::BLIP_ADD_MODIFIER(Global_1391438.f_308[iParam1], func_967(*uParam0));
			}
		}
		if (Global_1391438.f_311[iParam1])
		{
			MAP::BLIP_ADD_MODIFIER(Global_1391438.f_308[iParam1], joaat("BLIP_MODIFIER_LOCKED"));
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1391438.f_308[iParam1], joaat("BLIP_MODIFIER_LOCKED"));
		}
	}
	else if (bVar0)
	{
		MAP::REMOVE_BLIP(&(Global_1391438.f_308[iParam1]));
	}
}

void func_341()
{
	float fVar0;

	if (func_968((1 << 19)) || func_443(5000))
	{
		func_462(&(Global_1359489.f_52));
		func_969((1 << 19));
	}
	if (func_968((1 << 15)))
	{
		if (!func_456(&(Global_1359489.f_52)))
		{
			Global_1357549.f_1485 = func_970(&(Global_1359489.f_55));
			func_462(&(Global_1359489.f_55));
			func_457(&(Global_1359489.f_52), 0);
		}
		else if (func_114(0, 0, 1) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_971(&(Global_1359489.f_52)))
			{
				func_972(&(Global_1359489.f_52));
			}
		}
		else if (func_971(&(Global_1359489.f_52)))
		{
			func_973(&(Global_1359489.f_52));
		}
		if (func_458(&(Global_1359489.f_52)) > 60.0f)
		{
			if (func_440(joaat("CSTAG_PLAYER_AWAY"), 1))
			{
				func_974(joaat("CSTAG_PLAYER_AWAY"), 1, 0);
			}
		}
		fVar0 = func_975(func_439());
		if (func_458(&(Global_1359489.f_52)) > fVar0)
		{
			if (func_458(&(Global_1359489.f_52)) < 1920.0f)
			{
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 1);
				if (!func_440(joaat("CSTAG_LOITERING"), 1))
				{
					func_976(joaat("CSTAG_LOITERING"), joaat("CSTP_NEXT_VISIT"), -469960592, 4, 1, 1, 0);
				}
			}
			else
			{
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
			}
		}
	}
	else if (func_456(&(Global_1359489.f_52)))
	{
		if (!func_971(&(Global_1359489.f_52)))
		{
			func_972(&(Global_1359489.f_52));
		}
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_977(func_113()), true, 0))
		{
			if (!func_456(&(Global_1359489.f_55)))
			{
				Global_1357549.f_1485 = 0.0f;
				func_751(&(Global_1359489.f_55));
			}
			if (func_458(&(Global_1359489.f_55)) > 20.0f)
			{
				func_462(&(Global_1359489.f_52));
				func_978();
				PLAYER::_0xCB61A63AA53D7D22(PLAYER::GET_PLAYER_INDEX(), 0);
			}
		}
	}
}

void func_342()
{
	int iVar0;

	if (((!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, func_977(func_113()), true, 0) && !func_273()) && !func_190(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1)) && !LAW::_0xF46108C50A22B029())
	{
		if (!func_456(&(Global_1359489.f_55)))
		{
			func_457(&(Global_1359489.f_55), 0);
			Global_1359489.f_58 = Global_1899515;
			if (func_679())
			{
				func_823(&(Global_1359489.f_58), 0, 0, 0, 5, 0, 0, 0);
			}
			else
			{
				func_823(&(Global_1359489.f_58), 0, 0, 0, 2, 0, 0, 0);
			}
		}
		if (func_679())
		{
			iVar0 = 9000;
		}
		else
		{
			iVar0 = 4500;
		}
		if (func_458(&(Global_1359489.f_55)) > (float)iVar0 || (Global_1359489.f_58 != -15 && func_979(Global_1359489.f_58)))
		{
			if (!func_440(joaat("CSTAG_PLAYER_AWAY"), 1))
			{
				func_976(joaat("CSTAG_PLAYER_AWAY"), joaat("CSTP_NEXT_VISIT"), -1235532919, -1, 1, 1, 0);
			}
		}
	}
	else if (Global_1359489.f_31 == 0)
	{
		if (Global_1359489.f_32 == 1)
		{
			Global_1359489.f_32 = 0;
		}
		if (func_456(&(Global_1359489.f_55)))
		{
			Global_1357549.f_1485 = func_970(&(Global_1359489.f_55));
			func_462(&(Global_1359489.f_55));
		}
	}
	else
	{
		Global_1359489.f_31 = 4;
		if (func_456(&(Global_1359489.f_55)))
		{
			Global_1357549.f_1485 = func_970(&(Global_1359489.f_55));
			Global_1359489.f_58 = -15;
			func_462(&(Global_1359489.f_55));
		}
	}
}

void func_343()
{
	if (func_336(2))
	{
		if (!func_554())
		{
			func_337(2);
		}
	}
	else if (func_554())
	{
		func_339(2);
		func_980();
	}
}

bool func_344()
{
	if (Global_1945188.f_865 & 2 != 0)
	{
		return false;
	}
	if (Global_16)
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!func_981(255))
		{
			return false;
		}
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return false;
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return false;
		}
		if (Global_1935630.f_12)
		{
			return false;
		}
	}
	return true;
}

void func_345()
{
	int iVar0;
	float fVar1;
	Vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < Global_1945188)
	{
		fVar1 = 0.0f;
		vVar2 = { 0.0f, 0.0f, 0.0f /*3*/ };
		if (func_982(iVar0))
		{
			if (func_983(iVar0, &fVar1, &vVar2))
			{
				func_984(iVar0);
			}
		}
		iVar0++;
	}
}

void func_346()
{
	switch (Global_1357549)
	{
		case 0:
			if (func_968(1))
			{
				if ((!Global_1879534 && func_985()) && !STREAMING::IS_LOAD_SCENE_ACTIVE())
				{
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
					func_986();
					func_987();
					func_988(func_439(), 0, 0);
					func_989();
					Global_1357549.f_1 = 0;
					Global_1357549 = 1;
				}
			}
			break;
		case 1:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				if (Global_1357549.f_1 != func_439())
				{
					func_988(Global_1357549.f_1, 0, 0);
				}
				if (Global_1357549.f_1 == 8)
				{
					Global_1357549 = 2;
				}
				else
				{
					Global_1357549.f_1++;
				}
			}
			break;
		case 2:
			func_969(1);
			Global_1357549.f_1 = -1;
			Global_1357549 = 0;
			break;
	}
	func_990();
}

void func_347()
{
	if (!func_991(func_439()))
	{
		return;
	}
	if (func_992())
	{
		return;
	}
	if (Global_40.f_4283.f_331 == -15)
	{
		func_993(&(Global_40.f_4283.f_331));
	}
	if (func_994(Global_40.f_4283.f_331) && func_979(Global_40.f_4283.f_331))
	{
		func_995();
		func_993(&(Global_40.f_4283.f_331));
	}
}

void func_348()
{
	if (Global_40.f_4283.f_329 == -15)
	{
		func_996(&(Global_40.f_4283.f_329));
	}
	if (func_994(Global_40.f_4283.f_329) && func_979(Global_40.f_4283.f_329))
	{
		func_997();
		func_996(&(Global_40.f_4283.f_329));
	}
}

void func_349()
{
	bool bVar0;

	if (!func_998(456315479))
	{
		bVar0 = true;
		if (!func_998(1486898918))
		{
			if (func_999(12, 0) > 1)
			{
				func_1000(1486898918);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_998(1500419820))
		{
			if (func_999(3, 0) > 2)
			{
				func_1000(1500419820);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_998(-1642438278))
		{
			if (func_999(4, 0) > 2)
			{
				func_1000(-1642438278);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (!func_998(-1784068921))
		{
			if (func_1001())
			{
				func_1000(-1784068921);
			}
			else
			{
				bVar0 = false;
			}
		}
		if (bVar0)
		{
			func_1000(456315479);
		}
	}
}

void func_350()
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1327490.f_89.f_1, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1327490.f_89.f_1, 1);
		Global_1327490.f_89.f_1 = 0;
	}
}

bool func_351(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_149(iParam0, 8);
}

bool func_352(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 6);
}

bool func_353(int iParam0)
{
	Global_1327490.f_89 = iParam0;
	func_1002(iParam0, 1);
	return true;
}

int func_354()
{
	Vector3 vVar0;
	int iVar6;
	int iVar7;

	vVar0.f_2 = 3;
	iVar6 = Global_1327490.f_89;
	if (func_352(iVar6))
	{
		switch (Global_1327490[iVar6 /*11*/].f_1)
		{
			case 1:
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1327490[iVar6 /*11*/].f_5)))
				{
					SCRIPTS::REQUEST_SCRIPT(&(Global_1327490[iVar6 /*11*/].f_5));
					func_1002(iVar6, 2);
				}
				break;
			case 2:
				if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1327490[iVar6 /*11*/].f_5)))
				{
					vVar0.x = iVar6;
					if (func_1003(iVar6, 128))
					{
						vVar0.f_2[0] = Global_1327490[iVar6 /*11*/].f_10;
					}
					iVar7 = (1 << 10);
					if (func_1004(iVar6, 2))
					{
						Global_1327490.f_89.f_1 = SCRIPTS::START_NEW_SCRIPT(&(Global_1327490[iVar6 /*11*/].f_5), (1 << 10));
					}
					else
					{
						Global_1327490.f_89.f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1327490[iVar6 /*11*/].f_5), &vVar0, 6, iVar7);
					}
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1327490[iVar6 /*11*/].f_5));
					if (iVar6 == Global_1327490.f_91)
					{
						Global_1327490.f_91 = -1;
					}
					func_1002(iVar6, 3);
				}
				break;
			case 3:
				if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1327490.f_89.f_1, false))
				{
					Global_1327490.f_89 = -1;
					func_1002(iVar6, 0);
				}
				break;
			case 0:
				break;
		}
	}
	return 1;
}

bool func_355()
{
	if (func_1005() + Global_1327490.f_92) > MISC::GET_GAME_TIMER()
	{
		return false;
	}
	else
	{
		Global_1327490.f_92 = 0;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (MISC::GET_GAME_TIMER() < Global_1327490.f_96)
	{
		return false;
	}
	return true;
}

void func_356()
{
	int iVar0;

	if (!func_1006())
	{
		return;
	}
	iVar0 = func_1007();
	if (!func_352(iVar0))
	{
		return;
	}
	if (!func_353(iVar0))
	{
		return;
	}
}

bool func_357()
{
	if (!func_1008(1))
	{
		return false;
	}
	if (Global_1425351.f_18 != func_46())
	{
		func_359();
		Global_1425351.f_18 = -1;
		return false;
	}
	return true;
}

void func_358()
{
	bool bVar0;
	int iVar1;
	var uVar2;

	bVar0 = false;
	iVar1 = func_1009();
	if (iVar1 == 0)
	{
		return;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425351.f_19, false))
	{
		SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
		if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
		{
			Global_1425351.f_19 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar2, 10, (1 << 10));
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
	}
}

void func_359()
{
	Global_1425351.f_17 = 0;
}

void func_360()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	char cVar3[32];

	if (Global_1914296.f_21 == 0)
	{
		return;
	}
	if (Global_1935689.f_1 || Global_1914319.f_17369)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_1914296[iVar1 /*5*/] != 0)
		{
			bVar2 = func_1010(Global_1914296[iVar1 /*5*/]);
			if (Global_1914296[iVar1 /*5*/].f_1 > 0)
			{
				if (Global_1914296[iVar1 /*5*/].f_1 > 1)
				{
					func_1011(MISC::VAR_STRING(2, "ITEM_GET_MULT", bVar2, Global_1914296[iVar1 /*5*/].f_1), -2, 0, 0, 0, 1);
				}
				else
				{
					func_1011(MISC::VAR_STRING(10, "ITEM_GET", MISC::VAR_STRING(0, bVar2)), -2, 0, 0, 0, 1);
				}
				if (!bVar0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("ITEM_TICKER_GENERIC", "HUD_REWARD_SOUNDSET", true, 0);
					bVar0 = true;
				}
			}
			else
			{
				if (Global_1914296[iVar1 /*5*/].f_3)
				{
					strcpy_s(&cVar3, 32, "ITEM_SELL");
				}
				else if (Global_1914296[iVar1 /*5*/].f_4)
				{
					strcpy_s(&cVar3, 32, "ITEM_GIVEN");
				}
				else if (func_1012(Global_1914296[iVar1 /*5*/], (1 << 21)))
				{
					strcpy_s(&cVar3, 32, func_1013(Global_1914296[iVar1 /*5*/].f_2, "ITEM_READ", "ITEM_LOST"));
				}
				else
				{
					strcpy_s(&cVar3, 32, func_1013(Global_1914296[iVar1 /*5*/].f_2, "ITEM_USED", "ITEM_LOST"));
				}
				if (Global_1914296[iVar1 /*5*/].f_1 < -1)
				{
					strcat_s(&cVar3, 32, "_MULT");
					func_1011(MISC::VAR_STRING(10, &cVar3, MISC::VAR_STRING(0, bVar2), MISC::ABSI(Global_1914296[iVar1 /*5*/].f_1)), -2, 0, 0, 0, 1);
				}
				else
				{
					func_1011(MISC::VAR_STRING(10, &cVar3, MISC::VAR_STRING(0, bVar2)), -2, 0, 0, 0, 1);
				}
			}
			Global_1914296[iVar1 /*5*/] = 0;
			Global_1914296[iVar1 /*5*/].f_1 = 0;
			Global_1914296[iVar1 /*5*/].f_2 = 0;
			Global_1914296.f_21--;
			return;
		}
		iVar1++;
	}
}

void func_361()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_1955825 != 2)
	{
		return;
	}
	if (Global_1955825.f_4)
	{
		return;
	}
	if (!func_38(64))
	{
		return;
	}
	else if (func_362(Global_1935630, (1 << 17)))
	{
		return;
	}
	else if ((func_114(0, 0, 1) || func_438()) || func_119())
	{
		return;
	}
	iVar0 = func_911();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_1014(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_1015(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_1015(MISC::VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1016(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_505(0, -1);
	}
	if (iVar2 > 0)
	{
		func_220("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1017(1, 0);
	Global_1955825.f_4 = 1;
}

bool func_362(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_363(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

var func_364(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_1018(iParam0, iParam1) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

float func_365(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_366(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_375(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

int func_367()
{
	int iVar0;

	if (func_530(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_530(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_368(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_369()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1019(iVar0);
		if (func_530(func_1020(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_370(int iParam0)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_141(iParam0))
	{
		return false;
	}
	return func_447(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_371(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_372(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*uParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*uParam0 += ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1);
	*uParam0 += ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2);
	*uParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*uParam1 += ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1);
	*uParam1 += ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2);
	*uParam1 += 6;
	iVar0 = func_1021(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = func_1021(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = func_1021(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*uParam0 += ((iVar0 + iVar1) + iVar2);
}

var func_373(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_1022(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

int func_374()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1023(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

struct<2> /*16*/ func_375(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

var func_376(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

int func_377(int iParam0)
{
	if (!func_127(iParam0))
	{
		return 0;
	}
	return func_1024(func_559(iParam0));
}

int func_378(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

void func_379()
{
	func_1025(0, 4);
	func_1025(2, 3);
	func_1025(3, 2);
	func_1025(1, 2);
}

void func_380()
{
	var uVar0;
	int iVar1;
	bool bVar2;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;

	if (Global_1393237.f_208)
	{
		if ((Global_1935630.f_12 || func_114(0, 0, 1)) || func_203(1))
		{
			Global_1393237.f_208 = !Global_1393237.f_208;
			return;
		}
		iVar1 = func_1026(func_479(), &(Global_1393237.f_205));
		if (func_1027(iVar1) > 0)
		{
			func_1028(iVar1, &uVar0);
			if (Global_1393237.f_204 >= func_1027(iVar1))
			{
				Global_1393237.f_204 = 0;
				Global_1393237.f_205++;
			}
			Stack.Invoke(uVar0, Global_1393237.f_204);
			vVar3 = { StackVal, StackVal, StackVal /*3*/ };
			if ((func_1029(iVar1, Global_1393237.f_204) && !func_1030(vVar3)) && !func_1031(vVar3))
			{
				fVar6 = func_1032(Global_36, vVar3);
				if (fVar6 > 562500.0f && fVar6 < 2250000.0f)
				{
					bVar2 = false;
					iVar7 = func_1033(vVar3, &bVar2, 0);
					if (bVar2)
					{
						if (func_795((1 << 13)))
						{
							iVar8 = (2 - 1);
						}
						else
						{
							iVar8 = 2;
						}
						if (iVar7 != -1 && iVar7 < iVar8)
						{
							if (func_1034(0, vVar3, -1, -1))
							{
								if ((func_1035(vVar3, Global_35) && !func_1036(vVar3, 0, 0, 0)) && !func_1037(vVar3))
								{
									func_1038(iVar7, 128, 0);
									Global_1393237.f_11[iVar7 /*30*/].f_3 = { vVar3 /*3*/ };
									Global_1393237.f_11[iVar7 /*30*/].f_2 = 1;
									Global_1393237.f_11[iVar7 /*30*/].f_11 = -10;
									iVar9 = func_538();
									func_1039(&iVar9, 0, 0, 20, 0, 0, 0);
									Global_1393237.f_11[iVar7 /*30*/] = iVar9;
									Global_1393237.f_11[iVar7 /*30*/].f_1 = MISC::GET_GAME_TIMER();
									func_1040(vVar3);
									Global_1393237.f_11[iVar7 /*30*/].f_21 = func_827(vVar3, func_1041(vVar3, -1), "DIST_CAMP", 1, 0, 1, 0, -1082130432);
								}
							}
						}
					}
				}
			}
		}
		Global_1393237.f_204++;
	}
	else
	{
		func_1042();
		iVar10 = Global_1393237.f_206;
		bVar11 = false;
		bVar12 = false;
		if (func_1043(iVar10))
		{
			if (!func_1044(iVar10, (1 << 16)))
			{
				bVar12 = true;
			}
			bVar11 = true;
		}
		if (bVar11)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar10 /*30*/].f_22))
			{
				func_1045(iVar10);
			}
		}
		else
		{
			func_1046(iVar10);
		}
		if (bVar12)
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iVar10 /*30*/].f_23))
			{
				func_1047(iVar10);
			}
		}
		else
		{
			func_1048(iVar10);
		}
		Global_1393237.f_206++;
		if (Global_1393237.f_206 > 5)
		{
			Global_1393237.f_206 = 0;
		}
	}
	Global_1393237.f_208 = !Global_1393237.f_208;
}

void func_381()
{
	if (Global_1357522.f_10[0] || Global_1357522.f_10[1])
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED("CAMP"))
		{
			HUD::TEXT_BLOCK_REQUEST("CAMP");
		}
		Global_1357522.f_26 = (MISC::GET_GAME_TIMER() - Global_1357522.f_25);
	}
	if (Global_1357522.f_10[0])
	{
		func_1049(0);
	}
	else
	{
		func_1050(0);
		func_1051(0);
		MAP::REMOVE_BLIP(&(Global_1357522.f_16[0]));
	}
	if (Global_1357522.f_10[1])
	{
		func_1049(1);
	}
	else
	{
		func_1050(1);
		func_1051(1);
		MAP::REMOVE_BLIP(&(Global_1357522.f_16[1]));
	}
	if (((func_114(0, 1, 1) && !func_1052(1)) || Global_1357522.f_26 >= 300000) || func_226(Global_1396257[25 /*638*/].f_626, (1 << 15)))
	{
		Global_1357522.f_10[0] = 0;
		Global_1357522.f_10[1] = 0;
		if (!(func_114(0, 1, 1) && !func_1052(1)))
		{
			if (Global_1357522.f_10[0])
			{
				func_220("CAMP_FIRE_FULL_OUT", 10000, 0, 0, 0, 1);
			}
			if (Global_1357522.f_10[1])
			{
				func_220("CAMP_FIRE_OUT", 10000, 0, 0, 0, 1);
			}
		}
	}
}

bool func_382(int iParam0)
{
	return func_1053(&Global_1425247, iParam0, 2);
}

void func_383()
{
	if (!func_382(25))
	{
		return;
	}
	func_386(25);
}

bool func_384()
{
	if ((((!ENTITY::DOES_ENTITY_EXIST(Global_35) || func_1054(Global_35, 0)) || (func_684(Global_35) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || (PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))) || !func_394())
	{
		return true;
	}
	return false;
}

void func_385(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436.f_9 = 0.0f;
	}
	Global_1935436.f_8 = 0.0f;
	Global_1935436.f_12.f_1 = 0.0f;
	Global_1935436.f_12 = 0.0f;
	Global_1935436.f_12.f_3 = 0.0f;
	Global_1935436.f_12.f_2 = 0.0f;
	Global_1935436.f_12.f_4 = 0;
	PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 1);
	PLAYER::_0x8F44EBB3BA8F6D44(PLAYER::GET_PLAYER_INDEX(), 0);
	PED::_SET_PED_MOTIVATION(Global_35, 10, 0.0f, 0);
	AUDIO::SET_PED_IS_DRUNK(Global_35, false);
	PED::_SET_PED_DRUNKNESS(Global_35, false, 0.0f);
	func_1055(0.0f);
	Global_1935436.f_11 = 1;
	if (func_388())
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_1056();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_386(int iParam0)
{
	if (func_1057(iParam0))
	{
		func_1058(13);
		return;
	}
	func_1059(iParam0);
	func_1060(iParam0, 5);
}

void func_387()
{
	Global_1935436.f_4 = (MISC::GET_GAME_TIMER() + 90000);
}

bool func_388()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_389(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	iVar0 = 1;
	*uParam0 = 0;
	*uParam1 = 1;
	if (func_1061(0))
	{
		iVar0 = 0;
	}
	if (!bParam2)
	{
		if (func_1062())
		{
			iVar0 = 0;
		}
	}
	if ((func_273() || func_759()) || func_1063(&Global_1393447, 16))
	{
		*uParam0 = 1;
		*uParam1 = 0;
		iVar0 = 0;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (!bParam2)
		{
			if (!PED::IS_PED_IN_ANY_BOAT(Global_35))
			{
				Global_1935630.f_55 = MISC::GET_GAME_TIMER();
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (TASK::IS_PED_SPRINTING(iVar1) || func_1064(iVar1))
			{
				iVar0 = 0;
			}
		}
		if (PED::IS_PED_FALLING(iVar1))
		{
			iVar0 = 0;
			*uParam0 = 1;
			*uParam1 = 0;
		}
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		iVar0 = 0;
		*uParam0 = 1;
		*uParam1 = 0;
	}
	if (!bParam2)
	{
		if (Global_1935630.f_55 + 30000 > MISC::GET_GAME_TIMER())
		{
			iVar0 = 0;
		}
	}
	if (func_557(1) > 0)
	{
		iVar0 = 0;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &uVar2, true, true))
	{
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (!bParam2)
	{
		if (!func_1065(func_607()))
		{
			iVar0 = 0;
		}
		if (func_795(128))
		{
			iVar0 = 0;
		}
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		*uParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (Global_1935630.f_28 + 30000 > MISC::GET_GAME_TIMER())
	{
		*uParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (PED::TIME_SINCE_PED_LAST_SHOT(Global_35) + 30000.0f) > (float)MISC::GET_GAME_TIMER()
	{
		*uParam0 = 1;
		iVar0 = 0;
		*uParam1 = 0;
	}
	if (bParam2)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1))
		{
			*uParam0 = 1;
			iVar0 = 0;
			*uParam1 = 1;
		}
	}
	if (!bParam2)
	{
		if (func_46() != -1)
		{
			if (func_1066(func_46()))
			{
				*uParam0 = 1;
			}
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_390(bool bParam0, bool bParam1, char* sParam2, char* sParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	bool bVar0;
	float fVar1;
	int iVar2;
	struct<8> /*64*/ sVar3;

	iParam5 = iParam5;
	bParam1 = bParam1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(bParam0, bParam1, 17))
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
		if (func_657())
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
		if (bParam0 != Global_35 && bParam1 != Global_35)
		{
			if (!ENTITY::IS_ENTITY_DEAD(bParam0))
			{
				if (func_1067(bParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (bParam0 == bParam1 || bParam1 == 0);
	if ((!ENTITY::IS_ENTITY_DEAD(bParam0) || iParam11 == joaat("SPEECH_PARAMS_BEAT_SPOKEN_NORMAL_ALLOWPLAYAFTERDEATH")) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_1068(bParam0, bParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_751(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!ENTITY::IS_ENTITY_DEAD(bParam1))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam0, bParam1, 7500, 0, 51, 0);
				}
				if (func_1069(bParam0, bParam1, fVar1, bParam13))
				{
					TASK::TASK_LOOK_AT_ENTITY(bParam1, bParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				sVar3.f_5 = 1;
				sVar3.f_6 = 1;
				sVar3.f_0 = sParam2;
				sVar3.f_3 = iParam11;
				sVar3.f_4 = bParam1;
				sVar3.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
				sVar3.f_6 = iParam15;
				sVar3.f_2 = iParam5;
				if (bParam14)
				{
					MISC::SET_BIT(&(sVar3.f_7), 3);
					MISC::SET_BIT(&(sVar3.f_7), 2);
				}
				iVar2 = AUDIO::_0x72E4D1C4639BC465(bParam0, &sVar3);
				if (iVar2 >= 0)
				{
					AUDIO::_0xB18FEC133C7C6C69(iVar2);
				}
			}
			else
			{
				iVar2 = func_750(func_1070(bParam0, sParam2, iParam11, bParam1, NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

bool func_391(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

void func_392(int iParam0)
{
	if (iParam0 >= Global_1935436)
	{
		return;
	}
	Global_1935436.f_1 = iParam0;
}

void func_393()
{
	float fVar0;

	fVar0 = ((Global_1935436.f_12.f_1 * 200.0f) - 100.0f);
	func_1055(fVar0);
	if (!Global_1935436.f_12.f_4)
	{
		if (Global_1935436 == 2)
		{
			Global_1935436.f_12.f_4 = 1;
			if (func_388())
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR_WASTED");
			}
			else
			{
				AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER_WASTED");
			}
		}
	}
	else if (Global_1935436 != 2)
	{
		Global_1935436.f_12.f_4 = 0;
		if (func_388())
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "ARTHUR");
		}
		else
		{
			AUDIO::SET_AMBIENT_VOICE_NAME(Global_35, "JOHN_PLAYER");
		}
	}
}

bool func_394()
{
	if (func_114(0, 0, 1))
	{
		switch (func_541(0))
		{
			case 1:
			case 6:
			case 8:
			case 10:
				return false;
			default:
				break;
		}
		if (func_112() == -1)
		{
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("HOMEINVASION")) > 0)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_395()
{
	if (Global_1935436.f_18.f_1)
	{
		return true;
	}
	if ((Global_1935436.f_8 >= 10.0f && func_1071()) && func_394())
	{
		func_1072();
		return true;
	}
	return false;
}

void func_396()
{
	bool bVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		func_385(1);
		func_1073();
	}
	func_1074();
	switch (Global_1935436.f_18.f_11)
	{
		case 0:
			func_1075(1);
			Global_1935436.f_18.f_4 = 0;
			break;
		case 1:
			if (!Global_1935436.f_18.f_4)
			{
				STREAMING::REQUEST_ANIM_DICT(func_1076());
				Global_1935436.f_18.f_4 = 1;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_1076()))
			{
				func_1075(2);
			}
			break;
		case 2:
			GRAPHICS::ANIMPOSTFX_PLAY("PlayerDrunk01_PassOut");
			Global_1935436.f_18.f_7 = MISC::GET_GAME_TIMER();
			func_1075(3);
			break;
		case 3:
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_18.f_7 + 3400)
			{
				if (TASK::IS_PED_WALKING(Global_35) || TASK::IS_PED_RUNNING(Global_35))
				{
					bVar0 = true;
				}
				if (func_414(Global_35))
				{
					bVar0 = false;
				}
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_35) == joaat("WORLD_PLAYER_DYNAMIC_KNEEL"))
				{
					bVar0 = false;
				}
				if (bVar0 && !Global_1935436.f_18)
				{
					TASK::TASK_PLAY_ANIM(Global_35, func_1076(), func_1077(), 4.0f, -2.0f, 5000, 0, 0.0f, false, 0, false, 0, false);
					Global_1935436.f_18 = 1;
				}
				if (Global_1935436.f_18.f_4)
				{
					STREAMING::REMOVE_ANIM_DICT(func_1076());
					Global_1935436.f_18.f_4 = 0;
				}
				func_1075(4);
			}
			break;
		case 4:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (MISC::GET_GAME_TIMER() >= Global_1935436.f_18.f_7 + 5500)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_1935436.f_18.f_6, true, false))
				{
					bVar4 = func_992();
					iVar1 = func_538();
					func_823(&iVar1, 0, 0, 8, 0, 0, 0, 0);
					func_1078(iVar1);
					if (bVar4)
					{
						func_1079(1, 0, 0);
					}
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, true, true);
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_35, false);
					Global_1935436.f_18.f_8 = { func_1080(PLAYER::GET_PLAYER_INDEX()) /*3*/ };
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Global_1935436.f_18.f_8, &uVar2, false))
					{
						Global_1935436.f_18.f_8 = { Global_1935436.f_18.f_8, Global_1935436.f_18.f_8.f_1, uVar2 /*3*/ };
					}
					Global_1935436.f_18.f_2 = 0;
					Global_1935436.f_18.f_5 = 0;
					func_1075(5);
				}
			}
			break;
		case 5:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (Global_43891)
			{
				Global_1935436.f_18.f_12.f_3 = { 1421.257f, -7328.976f, 80.5118f /*3*/ };
				Global_1935436.f_18.f_12.f_6 = { 0.0f, 0.0f, 240.0f /*3*/ };
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1935436.f_18.f_6, Global_1935436.f_18.f_12.f_3, Global_1935436.f_18.f_12.f_6, 2);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1935436.f_18.f_6, "player_zero", Global_35, 0);
				func_1075(6);
			}
			else if (func_1081(Global_1935436.f_18.f_8, &(Global_1935436.f_18.f_12), &(Global_1935436.f_18.f_2), 1, 1, 1127481344, 1101004800, -0.01f, 40.0f, 0))
			{
				if (!func_1082(Global_1935436.f_18.f_8, 1103626240) && !func_1083(Global_1935436.f_18.f_8, 1103626240))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1935436.f_18.f_6, Global_1935436.f_18.f_12.f_3, Global_1935436.f_18.f_12.f_6, 2);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1935436.f_18.f_6, "player_zero", Global_35, 0);
					func_1075(6);
				}
				else
				{
					func_1075(8);
				}
			}
			else if (Global_1935436.f_18.f_2)
			{
				if (Global_1935436.f_18.f_5 < 3)
				{
					Global_1935436.f_18.f_2 = 0;
					Global_1935436.f_18.f_5++;
					func_1084(&(Global_1935436.f_18.f_12), 1, 0);
				}
				else
				{
					func_1075(8);
				}
			}
			break;
		case 6:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_1935436.f_18.f_6, false))
			{
				if (!func_190(PLAYER::GET_PLAYER_INDEX(), 1, 0, 1))
				{
					CAM::DO_SCREEN_FADE_IN(0);
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerWakeUpDrunk");
					func_385(1);
					ANIMSCENE::START_ANIM_SCENE(Global_1935436.f_18.f_6);
					func_1075(7);
				}
				else
				{
					func_385(1);
					func_1073();
					ANIMSCENE::RESET_ANIM_SCENE(Global_1935436.f_18.f_6, 0);
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1935436.f_18.f_6))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(Global_1935436.f_18.f_6);
					}
					func_1084(&(Global_1935436.f_18.f_12), 1, 0);
					Global_1934266.f_59 = 1;
					func_1085();
					func_1086(2);
				}
			}
			break;
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(Global_1935436.f_18.f_6, false))
			{
				func_1075(8);
			}
			break;
		case 8:
			if (func_992())
			{
				iVar3 = func_1087(func_1080(PLAYER::GET_PLAYER_INDEX()), 15.0f, -1);
				bVar5 = func_958(iVar3);
				if (ENTITY::DOES_ENTITY_EXIST(bVar5) && !ENTITY::IS_ENTITY_DEAD(bVar5))
				{
					func_1070(bVar5, "POST_PASSOUT_COMMENT", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
				}
			}
			func_1084(&(Global_1935436.f_18.f_12), 1, 0);
			if (!CAM::IS_SCREEN_FADING_IN())
			{
				CAM::DO_SCREEN_FADE_IN(3000);
			}
			func_385(1);
			func_1073();
			ANIMSCENE::RESET_ANIM_SCENE(Global_1935436.f_18.f_6, 0);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1935436.f_18.f_6))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Global_1935436.f_18.f_6);
			}
			break;
	}
}

void func_397(bool bParam0)
{
	Global_1934765.f_20 = 0;
	Global_1934765 = 0;
	Global_1934765.f_287 = 0;
	while (!func_405(1, bParam0))
	{
	}
	func_406();
	Global_1934765 = 0;
}

bool func_398()
{
	return false;
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 79:
			return joaat("WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE");
		case 16:
			return joaat("WS_HIDEOUT_HANGING_DOG_INACTIVE");
		case 9:
			return joaat("WS_HIDEOUT_SHADY_BELLE_INACTIVE");
		case 36:
			return joaat("WS_HIDEOUT_SIX_POINT_INACTIVE");
		case 127:
			return joaat("WS_HIDEOUT_THIEVES_LANDING_INACTIVE");
		case 125:
			return joaat("WS_HIDEOUT_TWIN_ROCKS_INACTIVE");
		case 118:
			return joaat("WS_HIDEOUT_FORT_MERCER_INACTIVE");
		case 129:
			return 1672143046;
		case 114:
			return 1804403874;
		default:
			break;
	}
	return -1;
}

bool func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1088(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_401(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_1089(iParam0))
	{
		return false;
	}
	if (func_112() == -1)
	{
		if (func_114(6206, 1, 1))
		{
			iVar0 = func_539(0);
			iVar1 = func_377(iVar0);
			return false;
		}
		if (bParam1)
		{
			if (func_113() == iParam0)
			{
				return false;
			}
			switch (iParam0)
			{
				case 36:
					if (!func_370(63))
					{
						return false;
					}
					if (func_154(76) || func_679())
					{
						return false;
					}
					break;
				case 125:
					if (!func_1090())
					{
						return false;
					}
					break;
				case 129:
					if (!func_1091())
					{
						return false;
					}
					if (func_903(19, 0))
					{
						return false;
					}
					break;
				case 114:
					if (!func_1091())
					{
						return false;
					}
					if (func_903(20, 0))
					{
						return false;
					}
					break;
				case 9:
					break;
			}
		}
	}
	else if (func_112() == 0)
	{
		return false;
	}
	else
	{
		return false;
	}
	if (func_149(iParam0, 256))
	{
		return false;
	}
	if (bParam1)
	{
		iVar2 = func_1092(iParam0);
		if (!func_127(iVar2))
		{
			return false;
		}
		iVar3 = func_1093(iVar2);
		if (func_994(iVar3))
		{
			func_823(&iVar3, 0, 0, 0, 5, 0, 0, 0);
			if (!func_793(iVar3, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_402(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_1094(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1095(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1095(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1095(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_1095(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1094(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1095(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1095(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_1095(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1095(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1094(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1095(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_1095(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_1095(joaat("WS_DOWNS_RANCH_EDITH"));
			func_1095(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_1094(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_1095(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_1095(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_1095(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_1094(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_1096();
			func_1094(iParam0);
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
			func_1097();
			func_1094(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_1095(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_1095(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_1094(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_1095(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_1095(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_1094(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_1095(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_1095(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_1094(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_1095(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_1095(joaat("WS_RHODES_GRAVE_OPEN"));
			func_1094(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_1095(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_1095(joaat("WS_RHODES_GRAVE_OPEN"));
			func_1094(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_1095(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_1095(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_1094(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_1095(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_1094(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_1095(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_1094(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_1095(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1095(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1095(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1094(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_1095(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1095(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1095(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1094(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_1095(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1095(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1095(joaat("WS_UTOPIA_TREE_STUMP"));
			func_1094(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_1095(joaat("WS_UTOPIA_TREE_STANDING"));
			func_1095(joaat("WS_UTOPIA_TREE_MISSION"));
			func_1095(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_1094(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_1095(joaat("WS_MICAH_CAMP"));
			func_1095(joaat("WS_MICAH_CAMP_POST"));
			func_1094(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_1095(joaat("WS_MICAH_CAMP_EMPTY"));
			func_1095(joaat("WS_MICAH_CAMP_POST"));
			func_1094(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_1095(joaat("WS_MICAH_CAMP_EMPTY"));
			func_1095(joaat("WS_MICAH_CAMP"));
			func_1094(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_1095(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_1094(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_1095(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_1095(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_400(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_1094(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_1095(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_1095(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_1094(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_1095(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_1094(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_1095(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1094(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_1095(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1094(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_1095(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1094(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_1095(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_1094(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_1095(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_1095(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_1094(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_1095(joaat("WS_NEW_COM_BANK_START"));
			func_1095(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1095(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1095(joaat("WS_NEW_COM_BANK_POST"));
			func_1094(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_1095(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1095(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1095(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1095(joaat("WS_NEW_COM_BANK_POST"));
			func_1094(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_1095(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1095(joaat("WS_NEW_COM_BANK_START"));
			func_1095(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1095(joaat("WS_NEW_COM_BANK_POST"));
			func_1094(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_1095(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1095(joaat("WS_NEW_COM_BANK_START"));
			func_1095(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1095(joaat("WS_NEW_COM_BANK_POST"));
			func_1094(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_1095(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_1095(joaat("WS_NEW_COM_BANK_START"));
			func_1095(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_1095(joaat("WS_NEW_COM_BANK_AFTER"));
			func_1094(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_1095(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1094(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_1095(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1094(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_1095(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_1094(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_1095(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_1095(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_1094(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_1094(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1094(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1094(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_1095(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_1094(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_1094(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_1094(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_1094(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_1094(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_1095(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_1094(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_1095(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_1094(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_1095(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_1094(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_1095(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_1094(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_1095(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_1094(0);
			func_1095(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_1095(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_1094(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_1095(0);
			func_1095(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_1094(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_1095(0);
			func_1095(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_1094(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_1095(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_1094(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_1095(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_1094(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_1094(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_1094(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_1094(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_1095(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_1094(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_1095(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_1095(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1095(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_1094(joaat("WS_SHADY_BELLE_ABANDON"));
			func_1095(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1095(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_1094(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_1095(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_1095(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_1094(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_1095(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_1094(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_1095(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_400(iParam0))
				{
					func_1094(iParam0);
				}
			}
			else if (func_400(iParam0))
			{
				func_1095(iParam0);
			}
			break;
	}
}

void func_403()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_1098(iVar0);
		if (iVar1 == -1)
		{
			return;
		}
		if (func_1099(iVar1))
		{
			if (func_1100(iVar1))
			{
				func_1095(iVar1);
				func_1101(iVar0);
			}
		}
		iVar0++;
	}
}

int func_404()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			if (Global_1934765.f_39[iVar0] != Global_40.f_283[iVar0])
			{
				return 1;
			}
		}
		else if (Global_1934765.f_39[iVar0] != Global_1058888.f_40497[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_405(bool bParam0, bool bParam1)
{
	int iVar0;
	char cVar1[64];

	if (!bParam0)
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			return false;
		}
		if (func_1102())
		{
			return false;
		}
		if (!Global_1934765.f_274 && !func_185((1 << 15)))
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				return false;
			}
		}
	}
	switch (Global_1934765)
	{
		case 0:
			func_944(666617953);
			func_944(1733948592);
			func_944(1700234797);
			func_944(1305074360);
			func_944(-436566493);
			func_944(-1995815064);
			func_944(-483649675);
			func_944(212587871);
			func_944(joaat("TAX_SHUTTERS_CLOSED"));
			func_944(1190076410);
			func_944(350100475);
			func_944(2033090463);
			func_944(-688011628);
			func_944(-787042507);
			func_944(joaat("ARM_01_CHOLERA"));
			func_944(joaat("ARM_02_CHOLERA"));
			func_944(joaat("ARM_03_CHOLERA"));
			func_944(joaat("ARM_04_CHOLERA"));
			func_944(joaat("ARM_05_CHOLERA"));
			if (func_1091())
			{
				func_944(-693659956);
				func_944(joaat("SPPACK_A1SUP_OBELISK"));
				func_944(-400238535);
				func_944(1416512144);
			}
			func_944(joaat("SPPACK_A4SUP_AQUADUCT"));
			func_944(-846479900);
			func_944(-866774384);
			if (!Global_1934765.f_288)
			{
				func_813(229);
			}
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1176.011f, -32.44423f, 38.0f, -1186.829f, -18.19722f, 45.0f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1177.246f, -19.60884f, 38.0f, -1170.786f, -12.71267f, 42.0f, 6, 1);
			PATHFIND::_0x6C3F12ECEB6D2E2A(-1174.544f, -4.74933f, 38.0f, -1163.424f, -13.43965f, 42.0f, 6, 1);
			func_1103();
			func_1104();
			func_1105();
			return false;
		case 1:
			func_1106();
			func_1105();
			return false;
		case 2:
			func_1107();
			func_1105();
			return false;
		case 3:
			break;
	}
	if (!func_400(joaat("WS_STRAWBERRY_IGNORE_NEM_HOUSE")))
	{
		func_944(1892122519);
	}
	if (func_400(joaat("WS_NO_ANIMALS_GRIZZLIES")))
	{
		if (!func_226(Global_1934765.f_20, 1))
		{
			func_1108(5, 1);
			func_1108(7, 1);
			func_1108(6, 1);
			func_1108(1, 1);
			func_1109(&(Global_1934765.f_20), 1);
		}
	}
	else if (func_226(Global_1934765.f_20, 1))
	{
		func_1108(5, 2);
		func_1108(1, 2);
		func_227(&(Global_1934765.f_20), 1);
	}
	if (func_400(joaat("WS_CARMODY_DELL_ABANDONED")))
	{
		func_943(382484708);
		func_944(-910880980);
	}
	else
	{
		func_943(-910880980);
		func_944(382484708);
	}
	if (func_400(joaat("WS_TAXIDERMY_NOTICES")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_NOTICE", false);
	}
	if (func_400(joaat("WS_TAXIDERMY_MARITAL")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL", false);
	}
	if (func_400(joaat("WS_ORCHIDS_APPLESEED")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("RARE_ORCHIDS_APPLESEED", false);
	}
	if (func_400(joaat("WS_RARE_FISH_CABIN_END")))
	{
		func_1110(203);
		func_813(204);
	}
	else
	{
		func_1110(204);
		func_813(203);
	}
	func_1111(joaat("WS_HIDEOUT_BEAVER_HOLLOW_INACTIVE"), 79, 2, (1 << 12));
	func_1111(joaat("WS_HIDEOUT_SHADY_BELLE_INACTIVE"), 9, 32, (1 << 12));
	func_1111(joaat("WS_HIDEOUT_SIX_POINT_INACTIVE"), 36, 64, (1 << 12));
	if (func_400(joaat("WS_GUARMA_EXISTS")))
	{
		if (WATER::_GET_WORLD_WATER_TYPE() != 1)
		{
			WATER::_SET_WORLD_WATER_TYPE(1);
		}
		if (!Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(true);
			MAP::_SET_MINIMAP_ZONE(joaat("GUARMA"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(true);
		MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(false, 0);
		Global_43891 = 1;
	}
	else
	{
		if (func_400(657241756))
		{
			if (WATER::_GET_WORLD_WATER_TYPE() != 1)
			{
				WATER::_SET_WORLD_WATER_TYPE(1);
			}
		}
		else if (WATER::_GET_WORLD_WATER_TYPE() != 0)
		{
			WATER::_SET_WORLD_WATER_TYPE(0);
		}
		if (Global_43891)
		{
			STREAMING::_SET_GUARMA_WORLDHORIZON_ACTIVE(false);
			MAP::_SET_MINIMAP_ZONE(joaat("WORLD"));
		}
		MAP::SET_MINIMAP_HIDE_FOW(false);
		if (!func_185(128))
		{
			MAP::_SET_FOW_UPDATE_PLAYER_OVERRIDE(true, 0);
		}
		Global_43891 = 0;
	}
	if (func_400(joaat("WS_CLAY_EXIST")))
	{
		if (func_112() == -1)
		{
		}
	}
	else if (func_112() == -1)
	{
	}
	if (func_400(joaat("WS_SADIE_BEDROLL")))
	{
		func_944(-1786365097);
		func_813(178);
	}
	else
	{
		func_943(-1786365097);
		func_1110(178);
	}
	if (!func_400(joaat("WS_STRAWBERRY_JAIL_IGNORE")))
	{
		func_943(1934919499);
		func_943(993595204);
		func_943(-515396642);
		func_943(1291083725);
		func_943(joaat("DES_STR_JAIL"));
		if (func_400(joaat("WS_STRAWBERRY_JAIL_INTACT")))
		{
			func_944(joaat("DES_STR_JAIL"));
			func_813(193);
		}
		else
		{
			iVar0 = func_1112(func_514(11));
			if (func_530(iVar0, 1))
			{
				func_944(joaat("DES_STR_JAIL"));
				func_813(193);
			}
			else
			{
				func_1110(193);
				if (func_530(iVar0, 2))
				{
					func_944(1291083725);
				}
				else if (func_530(iVar0, 4))
				{
					func_944(993595204);
				}
			}
		}
	}
	if (func_400(joaat("WS_DOWNS_RANCH_DOWNS")))
	{
		if (func_112() == -1)
		{
			func_161(68, 16);
			func_1113(557, 32);
			func_1113(563, 32);
			func_1113(560, 32);
			func_1113(561, 32);
			func_1113(562, 32);
			func_1114(565, 32);
			func_1115(565, 0);
			func_1114(564, 32);
			func_1115(564, 0);
			func_1114(554, 32);
			func_1115(554, 0);
			func_1114(555, 32);
			func_1115(555, 0);
			func_1114(556, 32);
			func_1115(556, 0);
		}
		func_1110(199);
		func_813(198);
	}
	else if (func_400(joaat("WS_DOWNS_RANCH_EDITH")))
	{
		if (func_112() == -1)
		{
			func_161(68, 16);
			func_1113(557, 32);
			func_1113(563, 32);
			func_1114(560, 32);
			func_1115(560, 0);
			func_1114(561, 32);
			func_1115(561, 0);
			func_1114(562, 32);
			func_1115(562, 0);
			func_1114(554, 32);
			func_1115(554, 0);
			func_1114(555, 32);
			func_1115(555, 0);
			func_1114(556, 32);
			func_1115(556, 0);
			func_1114(565, 32);
			func_1115(565, 0);
			func_1114(564, 32);
			func_1115(564, 0);
		}
		func_1110(199);
		func_1110(198);
	}
	else if (func_400(joaat("WS_DOWNS_RANCH_EMPTY")))
	{
		if (func_112() == -1)
		{
			func_164(68, 16);
			func_1115(554, 0);
			func_1115(555, 0);
			func_1115(556, 0);
			func_1115(557, 0);
			func_1115(563, 0);
			func_1115(560, 0);
			func_1115(561, 0);
			func_1115(562, 0);
			func_1115(565, 0);
			func_1115(564, 0);
		}
		func_1110(199);
		func_813(198);
	}
	else if (func_400(joaat("WS_DOWNS_RANCH_REPOPULATED")))
	{
		if (func_112() == -1)
		{
			func_161(68, 16);
			func_1114(554, 32);
			func_1114(555, 32);
			func_1114(556, 32);
			func_1114(557, 32);
			func_1114(563, 32);
			func_1115(554, 0);
			func_1115(555, 0);
			func_1115(556, 0);
			func_1115(557, 0);
			func_1115(563, 0);
			func_1113(565, 32);
			func_1113(564, 32);
			func_1113(560, 32);
			func_1113(561, 32);
			func_1113(562, 32);
		}
		func_1110(198);
		func_813(199);
	}
	if (func_400(joaat("WS_DROUGHT_ENDED")))
	{
		func_943(376665102);
	}
	else
	{
		func_944(376665102);
	}
	if (func_400(joaat("WS_ROCKY_SEVEN_ENDLESS")))
	{
		if (func_112() == -1)
		{
			func_1113(800, 32);
		}
	}
	else if (func_112() == -1)
	{
		func_1114(800, 32);
		func_1115(800, 0);
	}
	func_1116();
	if (func_400(0))
	{
		func_944(1149195254);
		func_944(2016081133);
		func_944(363257921);
		func_944(58066174);
		func_944(-1521525254);
		func_944(-761186147);
		func_944(-1872939092);
		func_944(-964156415);
		func_1117(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_AFTER_BRAITHWAITES_3"), false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_STABLE_HAND_1"), true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", false, true);
		func_1118(-434746250, 1);
		if (func_400(joaat("WS_BRAITHWAITES_3_ACTIVE")))
		{
			func_944(-2137633069);
			func_813(121);
			func_813(123);
			func_813(125);
			if (func_112() == -1)
			{
				func_164(93, 16);
				func_1119(93);
			}
			if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1) && !bParam1)
			{
				Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
			}
		}
		else
		{
			func_944(1944013855);
			func_813(120);
			func_813(122);
			func_813(124);
			func_161(93, 16);
			if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1))
			{
				PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
				Global_1934765.f_1 = 0;
			}
		}
	}
	else if (func_400(joaat("WS_BRAITHWAITE_MANSION_BURNED")))
	{
		func_944(-1643869063);
		func_944(-1108618313);
		func_944(-787678727);
		func_1117(0);
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_AFTER_BRAITHWAITES_3"), true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_STABLE_HAND_1"), true);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_1118(-434746250, 1);
		if (func_400(joaat("WS_BRAITHWAITES_3_ACTIVE")))
		{
			func_877("bra_man_burned_bra3");
		}
		else
		{
			func_877("bra_man_burned");
		}
		func_161(93, 16);
		if (func_112() == -1)
		{
			func_1113(621, 32);
			func_1113(622, 32);
			func_1113(623, 32);
			func_1113(624, 32);
			func_1114(909, 32);
			func_1115(909, 0);
			func_1114(910, 32);
			func_1115(910, 0);
			func_1114(911, 32);
			func_1115(911, 0);
			func_1114(912, 32);
			func_1115(912, 0);
			func_1114(913, 32);
			func_1115(913, 0);
			func_1114(914, 32);
			func_1115(914, 0);
			func_1114(617, 32);
			func_1115(617, 0);
			func_1114(618, 32);
			func_1115(618, 0);
			func_1114(619, 32);
			func_1115(619, 0);
			func_1114(620, 32);
			func_1115(620, 0);
			func_1114(915, 32);
			func_1115(915, 0);
			func_1114(916, 32);
			func_1115(916, 0);
			func_1114(917, 32);
			func_1115(917, 0);
			func_1114(625, 32);
			func_1115(625, 0);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_1, false);
			Global_1934765.f_1 = 0;
		}
	}
	else if (func_400(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER")))
	{
		func_944(-1643869063);
		func_944(622597018);
		func_944(1649275138);
		func_1117(1);
		func_877("bra_man_endsum");
		TASK::SET_SCENARIO_GROUP_ENABLED("BRA_MANOR_UNTIL_BRAITHWAITES_3", false);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_AFTER_BRAITHWAITES_3"), true);
		TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("BRA_MANOR_STABLE_HAND_1"), false);
		AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_braithwaite_manor_burnt", true, true);
		func_1120(-434746250, 1);
		func_164(93, 16);
		if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_1) && !bParam1)
		{
			Global_1934765.f_1 = PED::ADD_SCENARIO_BLOCKING_AREA(989.8797f, -1787.977f, 44.5697f, 1034.25f, -1752.225f, 59.7424f, false, 15);
		}
	}
	if (!func_400(joaat("WS_NEW_MRK_04_HIDEFORIND3")))
	{
		func_944(1355914142);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			Global_1934765.f_16 = VOLUME::CREATE_VOLUME_CYLINDER(2846.517f, -1300.918f, 45.457f, 0.0f, 0.0f, -42.0f, 4.584f, 3.041f, 10.079f);
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_16, 7);
		}
	}
	else
	{
		func_943(1355914142);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_16))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_16);
			VOLUME::DELETE_VOLUME(Global_1934765.f_16);
		}
	}
	if (func_400(joaat("WS_GUARMA_RUIN1_FLOOR_INTACT")))
	{
		func_943(joaat("LAC_01_LOOTERS_2"));
		func_944(joaat("LAC_01_LOOTERS_1"));
	}
	else
	{
		func_943(joaat("LAC_01_LOOTERS_1"));
		func_944(joaat("LAC_01_LOOTERS_2"));
	}
	if (func_400(joaat("WS_OLDFORTWALLACE_WALL_INTACT")))
	{
		func_943(-1052023588);
		func_943(-745087561);
		func_1121("old_nav_wall_hole");
		func_1121("old_nav_nts3_start");
		func_1121("old_nav_nts3_end");
		func_944(944314155);
		func_877("old_nav_wall_fill");
	}
	else if (func_400(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3")))
	{
		func_943(-1052023588);
		func_1121("old_nav_wall_fill");
		func_1121("old_nav_wall_hole");
		func_1121("old_nav_nts3_end");
		func_944(944314155);
		func_944(-745087561);
		func_877("old_nav_nts3_start");
	}
	else if (func_400(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3")))
	{
		func_943(944314155);
		func_1121("old_nav_wall_fill");
		func_1121("old_nav_nts3_start");
		func_1121("old_nav_wall_hole");
		func_944(-1052023588);
		func_944(-745087561);
		func_877("old_nav_nts3_end");
	}
	else if (func_400(joaat("WS_OLDFORTWALLACE_WALL_BROKEN")))
	{
		func_943(944314155);
		func_943(-745087561);
		func_1121("old_nav_wall_fill");
		func_1121("old_nav_nts3_start");
		func_1121("old_nav_nts3_end");
		func_944(-1052023588);
		func_877("old_nav_wall_hole");
	}
	if (func_400(joaat("WS_CRASHED_BOAT")))
	{
		func_944(joaat("VAN_02_HORSEBOAT"));
	}
	else
	{
		func_943(joaat("VAN_02_HORSEBOAT"));
	}
	if (func_400(joaat("WS_NEW_COM_BANK_BEFORE")))
	{
		func_943(-920505696);
		func_943(281772765);
		func_943(-516683274);
		func_1110(135);
		func_1110(136);
		func_1110(137);
		func_1110(138);
		func_1121("nav_std_bank_start");
		func_1121("nav_std_bank_shootout");
		func_1121("nav_std_bank_dest");
		func_813(134);
		func_944(1017355491);
		func_944(-1004522372);
	}
	else if (func_400(joaat("WS_NEW_COM_BANK_START")))
	{
		func_943(-920505696);
		func_943(-516683274);
		func_1110(135);
		func_1110(136);
		func_1110(137);
		func_1110(138);
		func_1121("nav_std_bank_shootout");
		func_1121("nav_std_bank_dest");
		func_944(-1004522372);
		func_813(134);
		func_944(1017355491);
		func_944(281772765);
		func_877("nav_std_bank_start");
	}
	else if (func_400(joaat("WS_NEW_COM_BANK_SHOOTOUT")))
	{
		func_943(-920505696);
		func_943(-516683274);
		func_1110(134);
		func_1110(137);
		func_1121("nav_std_bank_start");
		func_1121("nav_std_bank_dest");
		func_944(-1004522372);
		func_813(135);
		func_813(136);
		func_813(138);
		func_944(1017355491);
		func_944(281772765);
		func_877("nav_std_bank_shootout");
	}
	else if (func_400(joaat("WS_NEW_COM_BANK_AFTER")))
	{
		func_943(1017355491);
		func_943(281772765);
		func_943(-1004522372);
		func_1110(134);
		func_1110(135);
		func_813(137);
		func_813(138);
		func_1121("nav_std_bank_start");
		func_1121("nav_std_bank_shootout");
		func_944(-516683274);
		func_944(-920505696);
		func_877("nav_std_bank_dest");
	}
	else if (func_400(joaat("WS_NEW_COM_BANK_POST")))
	{
		func_943(1017355491);
		func_943(-516683274);
		func_943(281772765);
		func_1110(134);
		func_1110(135);
		func_1110(136);
		func_1110(138);
		func_944(-1004522372);
		func_813(137);
	}
	if (func_400(joaat("WS_NEW_COM_BANK_VAULT_RF")))
	{
		func_1110(140);
		func_813(139);
	}
	else
	{
		func_1110(139);
		func_813(140);
	}
	if (func_400(joaat("WS_POST_CARAVAN_HORSESHOE")))
	{
		func_944(140744122);
		func_944(-1795618779);
		func_877("hso_post_caravan");
	}
	else
	{
		func_943(140744122);
		func_943(-1795618779);
		func_1121("hso_post_caravan");
	}
	if (func_400(joaat("WS_POST_CARAVAN_CLEMENS")))
	{
		func_944(1691578074);
		func_944(-1936937394);
		func_877("dewclm_post_caravan");
	}
	else
	{
		func_943(1691578074);
		func_943(-1936937394);
		func_1121("dewclm_post_caravan");
	}
	if (func_400(joaat("WS_POST_CARAVAN_SHADY")))
	{
		func_944(-1130111983);
		func_944(-1015786727);
	}
	else
	{
		func_943(-1130111983);
		func_943(-1015786727);
	}
	if (func_400(joaat("WS_POST_CARAVAN_BEAVERHOLLOW")))
	{
		func_944(560821199);
	}
	else
	{
		func_943(560821199);
	}
	if (func_400(joaat("WS_CINCO_TORRES_DOOR_INTACT")))
	{
		func_943(-313831898);
		func_943(634920011);
		func_944(1694736240);
		func_944(2035758463);
	}
	else
	{
		func_943(1694736240);
		func_943(2035758463);
		func_944(-313831898);
		func_944(634920011);
	}
	func_1122();
	func_1123();
	if (func_400(joaat("WS_COLTER_STAGE_MP")))
	{
		func_944(474287981);
		func_944(-338553155);
		func_944(-1636879249);
		func_944(205214733);
		func_943(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		func_813(186);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		func_1095(joaat("WS_COLTER_STAGE_FIRES_LIT"));
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
		}
	}
	else if (func_400(joaat("WS_COLTER_STAGE_MUDTOWN1")))
	{
		func_944(867231253);
		func_944(-323126593);
		func_944(-1316886711);
		func_944(205214733);
		func_943(joaat("WEATHERVOL_CHPT1_SNOWSTORM"));
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		GRAPHICS::_SET_SNOW_COVERAGE_TYPE(0);
	}
	else if (func_400(joaat("WS_COLTER_STAGE_THAWED_SNOW")))
	{
		func_944(867231253);
		func_944(-1670453688);
		func_944(-323126593);
		func_944(-1316886711);
		func_944(205214733);
		func_877("col_nav_wint_end");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(joaat("WS_COLTER_STAGE_MEDIUM_SNOW")))
	{
		func_944(1248111234);
		func_944(-1670453688);
		func_944(-323126593);
		func_944(-1316886711);
		func_944(205214733);
		func_877("col_nav_wint2_post");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", false);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(joaat("WS_COLTER_STAGE_CABIN_BURNING")))
	{
		func_944(474287981);
		func_944(-1670453688);
		func_944(-1636879249);
		func_944(-338553155);
		func_813(186);
		func_877("col_nav_wint1_cabin_duringfire");
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_944(474287981);
		func_944(-1670453688);
		func_944(-338553155);
		func_944(-1636879249);
		func_877("col_nav_wint1_cabin_prefire");
		func_813(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	else if (func_400(joaat("WS_COLTER_STAGE_WINTER1_INTRO")))
	{
		func_944(joaat("WIN1_INTRO_CUTSCENE"));
		func_944(474287981);
		func_944(-717025835);
		func_944(-338553155);
		func_944(-1636879249);
		func_813(186);
		TASK::SET_SCENARIO_GROUP_ENABLED("ADL_LEVDES", true);
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Win_Intro", true);
		func_1095(joaat("WS_COLTER_STAGE_FIRES_LIT"));
		STREAMING::SET_MAPDATACULLBOX_ENABLED("Main_World", false);
		if (func_529())
		{
			GRAPHICS::_SET_SNOW_COVERAGE_TYPE(1);
		}
	}
	if (func_400(joaat("WS_COLTER_STAGE_FIRES_LIT")))
	{
		func_944(-1306375743);
		func_944(-743781837);
		func_944(2114706334);
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			Global_1934765.f_15 = VOLUME::CREATE_VOLUME_CYLINDER(-1353.573f, 2424.476f, 306.385f, 0.0f, 0.0f, 0.0f, 0.4f, 0.4f, 1.0f);
			PATHFIND::_ADD_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_15, 7);
		}
		func_813(149);
		func_813(150);
		func_813(151);
		func_813(152);
	}
	else
	{
		func_943(-1306375743);
		func_943(-743781837);
		func_943(2114706334);
		if (VOLUME::DOES_VOLUME_EXIST(Global_1934765.f_15))
		{
			PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1934765.f_15);
			VOLUME::DELETE_VOLUME(Global_1934765.f_15);
		}
		func_1110(149);
		func_1110(150);
		func_1110(151);
		func_1110(152);
	}
	func_1124();
	if (func_400(joaat("WS_FUSSAR2_NOCLIMB")))
	{
		func_944(-1055748784);
	}
	else
	{
		func_943(-1055748784);
	}
	if (func_400(joaat("WS_COLTER_STAGE_SCHOOL_INTERIOR")))
	{
		func_813(147);
		func_1110(148);
	}
	else
	{
		func_1110(147);
		func_813(148);
	}
	if (func_400(joaat("WS_BEAVER_HOLLOW_HIDEOUT")))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", true);
		}
	}
	else if (TASK::DOES_SCENARIO_GROUP_EXIST("BVH_GANG_hideout"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BVH_GANG_hideout", false);
	}
	if (func_400(joaat("WS_SHADY_BELLE_SHUTTERS_CLOSED")))
	{
		func_944(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
		func_943(joaat("SHA_EXT_SHUTTERS_NORMAL"));
	}
	else
	{
		func_944(joaat("SHA_EXT_SHUTTERS_NORMAL"));
		func_943(joaat("SHA_EXT_SHUTTERS_ODRISCOLLS4"));
	}
	if (func_400(joaat("WS_SHADY_BELLE_HIDEOUT")))
	{
		func_944(809554858);
		func_944(1810083187);
		func_943(159921796);
		func_943(-1739900853);
		func_944(2113454609);
		func_944(-520163372);
		func_943(-90228526);
		func_1110(17);
		func_1110(2);
		func_1110(4);
		func_813(1);
		func_813(5);
		func_820(931206119, 1, 0, 0, 0, 0, 0, 0);
		func_820(1783003505, 1, 0, 0, 0, 0, 0, 0);
		func_944(-646014955);
		func_1121("shb_nav_camp_running");
		func_1121("shb_nav_camp_teardown");
		func_943(1265596420);
		func_1121("shb_nav_camp_01");
		func_877("shb_nav_camp_00");
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", true);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	else
	{
		func_1121("shb_nav_camp_00");
		func_1121("shb_nav_camp_01");
		func_943(809554858);
		func_943(1265596420);
		func_943(1810083187);
		func_820(931206119, 0, 0, 0, 1, 0, 0, 0);
		func_820(1783003505, 0, 0, 0, 1, 0, 0, 0);
		func_943(-646014955);
		if (func_400(joaat("WS_SHADY_BELLE_ABANDON")))
		{
			func_1110(5);
			func_1110(17);
			func_1110(1);
			func_1110(2);
			func_813(4);
			func_943(-520163372);
			func_944(-90228526);
			func_944(159921796);
			func_943(-1739900853);
			func_943(2113454609);
		}
		else if (func_400(joaat("WS_SHADY_BELLE_GANG_0_2")))
		{
			func_1110(5);
			func_1110(4);
			func_1110(1);
			func_1110(2);
			func_813(17);
			func_943(-520163372);
			func_944(-90228526);
			func_944(159921796);
			func_944(-1739900853);
			func_943(2113454609);
		}
		else
		{
			func_943(-90228526);
			func_943(159921796);
			func_943(-1739900853);
			func_944(2113454609);
		}
		func_1110(1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SHB_HIDEOUT_CONFEDERATES"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SHB_HIDEOUT_CONFEDERATES", false);
		}
		if (TASK::DOES_SCENARIO_GROUP_EXIST("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("HIDEOUT_SHADYBELLE_NOT_IN_COMBAT", false);
		}
	}
	if (func_400(joaat("WS_HIDEOUT_HANGING_DOG_ENDLESS")))
	{
		func_943(1929440211);
		func_943(2126897368);
		func_944(-833857740);
		func_944(-825836321);
		if (func_400(joaat("WS_HIDEOUT_HANGING_DOG_MARSTON4")))
		{
			func_944(-1718055184);
			func_1121("han_nav_endless_summer");
			func_877("han_nav_endless_summer_marston4");
		}
		else
		{
			func_943(-1718055184);
			func_1121("han_nav_endless_summer_marston4");
			func_877("han_nav_endless_summer");
		}
	}
	else
	{
		func_943(-833857740);
		func_943(-825836321);
		func_943(-1718055184);
		func_1121("han_nav_endless_summer");
		func_1121("han_nav_endless_summer_marston4");
		func_944(1929440211);
	}
	if (func_400(joaat("WS_HIDEOUT_BEAVER_HOLLOW_ENDLESS")))
	{
		func_813(164);
		func_877("bvh_nav_endless_summer");
	}
	else
	{
		func_1110(164);
		func_1121("bvh_nav_endless_summer");
	}
	if (func_400(joaat("WS_HIDEOUT_SIX_POINT_TABLE")))
	{
		func_813(20);
	}
	else
	{
		func_1110(20);
	}
	if (func_400(joaat("WS_HIDEOUT_SIX_POINT_LIGHTS")))
	{
		STREAMING::REQUEST_IPL_HASH(joaat("SIX_POINT_LIGHTS_ON"));
		func_1110(22);
		func_1110(24);
		func_813(21);
		func_813(23);
	}
	else
	{
		STREAMING::REMOVE_IPL_HASH(joaat("SIX_POINT_LIGHTS_ON"));
		func_1110(21);
		func_1110(23);
		func_813(22);
		func_813(24);
	}
	if (func_400(joaat("WS_SWA_CHAIRS_REGULAR")))
	{
		func_813(200);
	}
	else
	{
		func_1110(200);
	}
	if (func_400(joaat("WS_SWA_CHAIRS_CINEMATIC")))
	{
		func_813(201);
	}
	else
	{
		func_1110(201);
	}
	if (func_112() == -1)
	{
		if (func_400(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_1125((1 << 16), 1);
		}
		else
		{
			func_1125((1 << 16), 0);
		}
	}
	func_1126();
	if (func_400(joaat("WS_RHODES_SADIE3_COVER_ON")))
	{
		func_944(1343484786);
		func_944(1989074279);
		func_877("sad3_nav_rhodes_shootout_00");
	}
	else if (func_400(joaat("WS_RHODES_GRAVE_NORMAL")))
	{
		if (func_400(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_944(1871051363);
			func_944(-2144587490);
			func_944(1033721560);
			func_877("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_944(1343484786);
			func_944(-1671953459);
			func_944(1871051363);
			func_944(-2144587490);
			func_877("rho_nav_grave_norm_gry3_off");
		}
	}
	else if (func_400(joaat("WS_RHODES_GRAVE_FRESHLY_DUG")))
	{
		if (func_400(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_944(-2144587490);
			func_944(1033721560);
			func_877("rho_nav_grave_dug_gry3_on");
		}
		else
		{
			func_944(1343484786);
			func_944(-1671953459);
			func_944(-2144587490);
			func_877("rho_nav_grave_dug_gry3_off");
		}
	}
	else if (func_400(joaat("WS_RHODES_GRAVE_OPEN")))
	{
		if (func_400(joaat("WS_RHODES_GRAYS3_COVER_ON")))
		{
			func_944(146746575);
			func_944(1033721560);
			func_877("rho_nav_grave_norm_gry3_on");
		}
		else
		{
			func_944(1343484786);
			func_944(-1671953459);
			func_944(146746575);
			func_877("rho_nav_grave_norm_gry3_off");
		}
	}
	if (func_400(joaat("WS_RHODES_FENCE_OPEN")))
	{
		func_943(1882605165);
		func_944(869642051);
	}
	else
	{
		func_943(869642051);
		func_944(1882605165);
	}
	if (func_400(joaat("WS_RHODES_TRELAWNY_WAGON_ABANDONED")))
	{
		func_943(-184821200);
		func_944(-490818122);
		func_944(1412515639);
		func_944(-1377139506);
	}
	else
	{
		func_944(-184821200);
		func_943(-490818122);
		func_943(1412515639);
		func_943(-1377139506);
	}
	if (func_400(joaat("WS_RHODES_SALOON_POST_BRAITHWAITES")))
	{
		func_1110(130);
		func_813(131);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12) && !bParam1)
		{
			Global_1934765.f_12 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(1351.383f, -1380.619f, 84.314f, 1.5f, 3.0f, 1.5f, 347.0f, false, 7);
		}
	}
	else
	{
		func_1110(131);
		func_813(130);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_12))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_12));
		}
	}
	if (func_400(joaat("WS_RHODES_SALOON_TABLE_UP")))
	{
		func_1110(133);
		func_813(132);
	}
	else if (func_400(joaat("WS_RHODES_SALOON_TABLE_DOWN")))
	{
		func_1110(132);
		func_813(133);
	}
	if (func_400(joaat("WS_RHODES_JAIL_INTACT")))
	{
		func_943(1603294144);
		func_944(349486662);
		func_1110(144);
		func_813(143);
	}
	else
	{
		func_943(349486662);
		func_944(1603294144);
		func_1110(143);
		func_813(144);
	}
	if (func_400(joaat("WS_VALENTINE_JAIL_INTACT")))
	{
		func_943(897455211);
		func_943(774477221);
		func_944(1136898294);
		func_944(1097534152);
		func_1110(146);
		func_813(145);
	}
	else
	{
		func_943(1136898294);
		func_943(1097534152);
		func_944(897455211);
		func_944(774477221);
		func_1110(145);
		func_813(146);
	}
	if (func_400(joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED")))
	{
		func_1110(170);
		func_813(169);
	}
	else
	{
		func_1110(169);
		func_813(170);
	}
	if (func_400(joaat("WS_VALENTINE_GENSTORE_LIGHTS_OFF")))
	{
		func_813(180);
	}
	else
	{
		func_1110(180);
	}
	if (func_400(joaat("WS_VALENTINE_AUCTION_GATES_OPEN")))
	{
		func_944(724436573);
		func_943(-1475403379);
	}
	else
	{
		func_944(-1475403379);
		func_943(724436573);
	}
	if (func_400(joaat("WS_RHODES_BANK_LIGHTS_OFF")))
	{
		func_1110(179);
	}
	else
	{
		func_813(179);
	}
	if (func_400(joaat("WS_RHODES_SHERIFF_LOCKED")))
	{
		if (func_112() == -1)
		{
			if (!func_1127(70, 32))
			{
				func_1114(70, 32);
				func_1128(70);
			}
		}
	}
	else if (func_112() == -1)
	{
		if (func_1127(70, 32))
		{
			func_1113(70, 32);
			func_1129(70);
		}
	}
	if (func_400(joaat("WS_WATSON_GRAVE")))
	{
		func_944(1138093977);
		func_877("wat_nav_grave");
	}
	else
	{
		func_943(1138093977);
		func_1121("wat_nav_grave");
	}
	if (func_400(joaat("WS_MICAH_CAMP_POST")))
	{
		func_943(1849913721);
		func_944(573576705);
	}
	else if (func_400(joaat("WS_MICAH_CAMP")))
	{
		func_944(1849913721);
		func_943(573576705);
	}
	else if (func_400(joaat("WS_MICAH_CAMP_EMPTY")))
	{
		func_943(1849913721);
		func_943(573576705);
	}
	if (func_400(joaat("WS_UTOPIA_TREE_STANDING")))
	{
		func_943(-848315456);
		func_943(105426297);
		func_943(2095421392);
		func_943(-1614141377);
		func_943(45121961);
		func_943(-7594117);
		func_943(1388161943);
		func_944(-642132908);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38.0f, -1170.786f, -12.71267f, 42.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1.0f, 1.0f, 6.0f, 0.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		func_1121("utp2_nav_tree_fallen");
	}
	else if (func_400(joaat("WS_UTOPIA_TREE_MISSION")))
	{
		func_943(-642132908);
		func_943(105426297);
		func_943(-1614141377);
		func_943(45121961);
		func_943(-7594117);
		func_943(1388161943);
		func_944(2095421392);
		func_944(-848315456);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38.0f, -1186.829f, -18.19722f, 45.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 42.664f, 1.0f, 13.0f, 1.0f, 15.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1.0f, 1.0f, 9.0f, -7.41f, false, 7);
		}
		func_1121("utp2_nav_tree_fallen");
	}
	else if (func_400(joaat("WS_UTOPIA_TREE_FALLEN")))
	{
		func_943(-642132908);
		func_943(2095421392);
		func_943(105426297);
		func_943(-7594117);
		func_944(45121961);
		func_944(-1614141377);
		func_944(-848315456);
		func_944(1388161943);
		PATHFIND::_0xAFE2AE66F6251C66(-1176.011f, -32.44423f, 38.0f, -1186.829f, -18.19722f, 45.0f, 6, 1);
		PATHFIND::_0xAFE2AE66F6251C66(-1174.544f, -4.74933f, 38.0f, -1163.424f, -13.43965f, 42.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1179.545f, -25.3265f, 41.664f, 1.0f, 13.0f, 3.0f, 15.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]) && !bParam1)
		{
			Global_1934765.f_5[1] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1161.862f, -27.8574f, 40.3872f, 1.0f, 1.0f, 9.0f, -7.41f, false, 7);
		}
		func_877("utp2_nav_tree_fallen");
	}
	else if (func_400(joaat("WS_UTOPIA_TREE_STUMP")))
	{
		func_943(-642132908);
		func_943(-848315456);
		func_943(-1614141377);
		func_943(45121961);
		func_943(2095421392);
		func_943(-7594117);
		func_943(1388161943);
		func_944(105426297);
		PATHFIND::_0xAFE2AE66F6251C66(-1177.246f, -19.60884f, 38.0f, -1170.786f, -12.71267f, 42.0f, 6, 1);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[0]));
		}
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[0]) && !bParam1)
		{
			Global_1934765.f_5[0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1182.66f, -30.405f, 44.453f, 1.0f, 1.0f, 6.0f, 0.0f, false, 7);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[1]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[1]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[2]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[2]));
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_5[3]))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_5[3]));
		}
		func_1121("utp2_nav_tree_fallen");
	}
	if (!func_153(51))
	{
		if (func_400(joaat("WS_NATIVE_SON2_TREE_FALLEN")))
		{
			func_943(1672215059);
			func_943(-1177027698);
			func_943(23211744);
			func_943(604668055);
			func_943(joaat("DES_NTVS2_TREEFALL"));
			func_944(1708195603);
			func_877("nts2_fallen_tree_ridge");
		}
		else
		{
			func_943(23211744);
			func_943(604668055);
			func_943(1708195603);
			func_944(joaat("DES_NTVS2_TREEFALL"));
			func_944(1672215059);
			func_944(-1177027698);
			func_1121("nts2_fallen_tree_ridge");
		}
	}
	if (func_112() == -1)
	{
		if (func_400(joaat("WS_STRAWBERRY_TOURISTS_ENDLESS_SUMMER")))
		{
			if (func_1127(497, 32))
			{
				func_1113(497, 32);
				func_1129(497);
			}
			if (func_1127(498, 32))
			{
				func_1113(498, 32);
				func_1129(498);
			}
		}
		else
		{
			if (!func_1127(497, 32))
			{
				func_1114(497, 32);
				func_1128(497);
			}
			if (!func_1127(498, 32))
			{
				func_1114(498, 32);
				func_1128(498);
			}
		}
	}
	if (func_400(joaat("WS_UTP1_COVER01")))
	{
		func_943(-1403908542);
		func_943(1598834669);
		func_943(1299817544);
		func_943(1204787444);
		func_943(66523468);
		func_943(2040259178);
		func_943(1947806010);
		func_1121("str_nav_construction_stage_0");
		func_1121("str_nav_construction_stage_1");
		func_1121("str_nav_construction_stage_2");
		func_1121("str_nav_construction_stage_3");
		func_944(1924458218);
		func_877("utp1_bridge_cover");
	}
	else
	{
		func_943(1924458218);
		func_1121("utp1_bridge_cover");
		if (func_400(joaat("WS_STRAWBERRY_HOUSE_STAGE_0")))
		{
			func_943(1299817544);
			func_943(1204787444);
			func_943(66523468);
			func_943(2040259178);
			func_943(1947806010);
			func_1121("str_nav_construction_stage_1");
			func_1121("str_nav_construction_stage_2");
			func_1121("str_nav_construction_stage_3");
			func_944(-1403908542);
			func_944(1598834669);
			func_877("str_nav_construction_stage_0");
			if (func_112() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", true);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", false);
		}
		else if (func_400(joaat("WS_STRAWBERRY_HOUSE_STAGE_1")))
		{
			func_943(-1403908542);
			func_943(1598834669);
			func_943(1204787444);
			func_943(66523468);
			func_943(2040259178);
			func_943(1947806010);
			func_1121("str_nav_construction_stage_0");
			func_1121("str_nav_construction_stage_2");
			func_1121("str_nav_construction_stage_3");
			func_944(1299817544);
			func_877("str_nav_construction_stage_1");
			if (func_112() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_400(joaat("WS_STRAWBERRY_HOUSE_STAGE_2")))
		{
			func_943(-1403908542);
			func_943(1598834669);
			func_943(1299817544);
			func_943(66523468);
			func_943(2040259178);
			func_943(1947806010);
			func_1121("str_nav_construction_stage_0");
			func_1121("str_nav_construction_stage_1");
			func_1121("str_nav_construction_stage_3");
			func_944(1204787444);
			func_877("str_nav_construction_stage_2");
			if (func_112() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
		else if (func_400(joaat("WS_STRAWBERRY_HOUSE_STAGE_3")))
		{
			func_943(-1403908542);
			func_943(1598834669);
			func_943(1299817544);
			func_943(1204787444);
			func_1121("str_nav_construction_stage_0");
			func_1121("str_nav_construction_stage_1");
			func_1121("str_nav_construction_stage_2");
			func_944(66523468);
			func_944(2040259178);
			func_944(1947806010);
			func_877("str_nav_construction_stage_3");
			if (func_112() == -1)
			{
				PERSCHAR::_SET_PERSCHAR_SCHEDULE(joaat("STR_WOOD_CHOP_WIFE"), "Strawberry/Construction_House_Active/Str_Wood_Chop_Wife");
			}
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_INACTIVE", false);
			TASK::SET_SCENARIO_GROUP_ENABLED("STR_CONSTRUCTION_HOUSE_ACTIVE", true);
		}
	}
	if (func_400(joaat("WS_SERIAL_KILLER_CABIN_OPEN")))
	{
		func_943(73781828);
		func_944(-391567710);
	}
	else
	{
		func_943(-391567710);
		func_944(73781828);
	}
	if (func_400(joaat("WS_RIDE_THE_LIGHTNING_CHAIR")))
	{
	}
	else if (func_400(joaat("WS_RIDE_THE_LIGHTNING_BARRELS")))
	{
	}
	if (func_400(joaat("WS_FOR_MY_ART_NOBARPROPS")))
	{
		func_1110(168);
	}
	else
	{
		func_813(168);
	}
	if (func_400(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
	{
		func_944(-205116461);
		func_944(-1490034522);
		func_943(-1473336090);
		func_943(-1013403664);
		if (!Global_1934765.f_289)
		{
			Global_1934765.f_401 = -1;
			Global_1934765.f_289 = 1;
		}
		func_1110(158);
		if (!func_153(47))
		{
			func_813(159);
		}
		else
		{
			func_1110(159);
		}
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_14));
		}
		if (func_400(joaat("WS_NBX_ART_EXHIBIT_CANCELLED")))
		{
			func_813(155);
			func_1110(154);
			func_813(157);
			func_1110(156);
		}
		else
		{
			func_813(156);
			func_1130(156);
			func_813(154);
			func_1110(155);
			func_1110(157);
		}
	}
	else
	{
		func_944(-1473336090);
		func_944(-1013403664);
		func_943(-205116461);
		func_943(-1490034522);
		Global_1934765.f_289 = 0;
		func_1110(154);
		func_1110(155);
		func_1110(157);
		func_1110(156);
		func_1110(159);
		func_813(158);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_14) && !bParam1)
		{
			Global_1934765.f_14 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2698.198f, -1187.154f, 51.26f, 3.878f, 0.326f, 3.352f, func_1131(-179.0f), false, 7);
		}
	}
	if (func_400(joaat("WS_NBX_BUILDING_FUNDED")) && func_679())
	{
		func_943(432272547);
		func_944(204868257);
		func_877("nav_sdn_fundraiser");
	}
	else
	{
		func_943(204868257);
		func_944(432272547);
		func_1121("nav_sdn_fundraiser");
	}
	if (func_400(joaat("WS_STD_GALA_BALCONY_HIGH_MEM")))
	{
		func_943(206289712);
		func_944(-1225383143);
	}
	else
	{
		func_943(-1225383143);
		func_944(206289712);
	}
	if (func_400(joaat("WS_STD_DOCTORS_OFFICE")))
	{
		func_943(-473077489);
		func_944(619024057);
		func_944(-836433697);
		func_1118(586229709, 1);
	}
	else
	{
		func_943(-836433697);
		func_943(619024057);
		func_944(-473077489);
		func_1120(586229709, 1);
	}
	if (func_400(joaat("WS_STD_GAMBLING_DEN")))
	{
		func_943(1821956151);
		func_944(-704461521);
	}
	else
	{
		func_943(-704461521);
		func_944(1821956151);
	}
	if (func_400(joaat("WS_FLAG_BRONTE_ADD_MP_DRESSING")))
	{
		func_813(166);
	}
	else
	{
		func_1110(166);
	}
	if (func_400(joaat("WS_FLAG_BRONTE_ADD_SP_DRESSING")))
	{
		func_813(167);
	}
	else
	{
		func_1110(167);
	}
	if (func_400(joaat("WS_BRONTE_MANSION_CLOSE_SHUTTERS")))
	{
		func_813(161);
		func_813(163);
		func_1110(160);
		func_1110(162);
	}
	else
	{
		func_813(160);
		func_813(162);
		func_1110(161);
		func_1110(163);
	}
	if (func_400(joaat("WS_INDUSTRY3_POKER_TABLES")))
	{
		func_813(142);
		func_1110(141);
	}
	else
	{
		func_1110(141);
		func_1110(142);
	}
	if (func_400(joaat("WS_MICAH_HIDEOUT")))
	{
		func_944(-1499162505);
		func_944(joaat("AMB_CAMP_GRZ_FINALE2"));
		if (func_400(joaat("WS_MICAH_HIDEOUT_ABANDON")))
		{
			func_943(-1832103801);
			func_1110(230);
			func_1121("fin2_micah_hideout");
			func_877("fin2_micah_hideout_abandon");
		}
		else
		{
			func_944(-1832103801);
			func_813(230);
			func_1121("fin2_micah_hideout_abandon");
			func_877("fin2_micah_hideout");
		}
	}
	else
	{
		func_943(-1499162505);
		func_943(joaat("AMB_CAMP_GRZ_FINALE2"));
		func_943(-1832103801);
		func_1110(230);
		func_1121("fin2_micah_hideout");
		func_1121("fin2_micah_hideout_abandon");
	}
	if (func_400(joaat("WS_FIN2_EXT_P19_FRAMES")))
	{
		func_943(-468702164);
		func_1110(192);
		func_944(-1436188587);
		func_813(191);
	}
	else
	{
		func_943(-1436188587);
		func_1110(191);
		func_944(-468702164);
		func_813(192);
	}
	if (func_400(joaat("WS_VALENTINE_GENSTORE_ACTIVE")))
	{
		func_944(1573766063);
	}
	else
	{
		func_943(1573766063);
	}
	if (func_400(joaat("WS_VALENTINE_BUTCHER_ACTIVE")))
	{
		func_944(-892659042);
	}
	else
	{
		func_943(-892659042);
	}
	if (func_400(joaat("WS_VALENTINE_BANK_WINDOWS")))
	{
		func_813(194);
		func_1110(195);
	}
	else
	{
		func_813(195);
		func_1110(194);
	}
	if (func_400(joaat("WS_VALENTINE_SALOON_WINDOWS")))
	{
		func_813(196);
	}
	else
	{
		func_1110(196);
	}
	if (func_400(joaat("WS_NBX_ART_RC_MASON_PASSED")))
	{
		func_813(19);
		func_1110(18);
	}
	else
	{
		func_813(18);
		func_1110(19);
	}
	if (func_400(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF")))
	{
	}
	else if (func_400(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON")))
	{
	}
	if (func_400(joaat("WS_WAR_VETERAN_FISH_TROPHY_ON")))
	{
		func_813(176);
	}
	else
	{
		func_1110(176);
	}
	if (func_400(joaat("WS_WAR_VETERAN_WOLF_TROPHY_ON")))
	{
		func_813(177);
	}
	else
	{
		func_1110(177);
	}
	if (func_400(joaat("WS_HERE_KITTY_WAGONS_GONE")))
	{
		func_943(943998860);
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Part_Fixed");
		func_1121("HKK_Camp_Only");
		func_1132(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(joaat("WS_HERE_KITTY_WAGONS_TRASHED")))
	{
		func_943(943998860);
		func_944(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_944(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_944(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_1121("HKK_Part_Fixed");
		func_1121("HKK_Camp_Only");
		func_877("HKK_Trashed_Wagons");
		func_1133(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED")))
	{
		func_944(943998860);
		func_944(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Camp_Only");
		func_877("HKK_Part_Fixed");
		func_1133(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP")))
	{
		func_944(943998860);
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Part_Fixed");
		func_877("HKK_Camp_Only");
		func_1133(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	else if (func_400(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP")))
	{
		func_943(943998860);
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON02"));
		func_943(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON03"));
		func_1121("HKK_Trashed_Wagons");
		func_1121("HKK_Part_Fixed");
		func_1121("HKK_Camp_Only");
		func_1132(joaat("CARNI_NBD_KITTYKITTY_BROKEWAGON01"));
	}
	if (func_400(joaat("WS_RIDE_THE_LIGHTNING_WAGON")))
	{
		func_944(2015532863);
	}
	else
	{
		func_943(2015532863);
	}
	if (func_400(joaat("WS_NBX_MAUSOLEUM_PLUNDERED")))
	{
		func_943(-800942395);
		func_944(-741366935);
	}
	else
	{
		func_943(-741366935);
		func_944(-800942395);
	}
	if (func_400(joaat("WS_VALENTINE_WAGON")))
	{
		func_944(-1579403437);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10) && !bParam1)
		{
			Global_1934765.f_10 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-304.439f, 783.08f, 117.11f, 1.909f, 4.17f, 3.0f, 9.6f, false, 7);
		}
	}
	else
	{
		func_943(-1579403437);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_10))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_10));
		}
	}
	if (func_400(joaat("WS_SHOWS_SD_VAUD_01")))
	{
		func_944(808576710);
		func_943(-775951892);
		func_943(1547403545);
		func_943(1431947993);
		func_943(137316925);
		func_943(-660075384);
	}
	else if (func_400(joaat("WS_SHOWS_SD_VAUD_02")))
	{
		func_944(1547403545);
		func_943(-775951892);
		func_943(808576710);
		func_943(1431947993);
		func_943(137316925);
		func_943(-660075384);
	}
	else if (func_400(joaat("WS_SHOWS_SD_VAUD_03")))
	{
		func_944(-660075384);
		func_943(-775951892);
		func_943(1547403545);
		func_943(808576710);
		func_943(1431947993);
		func_943(137316925);
	}
	else if (func_400(joaat("WS_SHOWS_SD_VAUD_04")))
	{
		func_944(137316925);
		func_943(-775951892);
		func_943(1547403545);
		func_943(808576710);
		func_943(1431947993);
		func_943(-660075384);
	}
	else
	{
		func_944(-775951892);
		func_943(1547403545);
		func_943(808576710);
		func_943(1431947993);
		func_943(137316925);
		func_943(-660075384);
	}
	if (func_400(joaat("WS_SHOWS_VAL_MAG_01")))
	{
		func_944(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(1879779330);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(joaat("WS_SHOWS_VAL_MAG_02")))
	{
		func_944(-2142987163);
		func_943(1104143966);
		func_943(1027093524);
		func_943(1879779330);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(joaat("WS_SHOWS_VAL_MAG_03")))
	{
		func_944(1027093524);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1879779330);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(joaat("WS_SHOWS_VAL_MAG_04")))
	{
		func_944(1879779330);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(-1617847332);
		func_943(317070801);
	}
	else if (func_400(joaat("WS_SHOWS_VAL_MAG_05")))
	{
		func_944(-1617847332);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(1879779330);
		func_943(317070801);
	}
	else
	{
		func_944(317070801);
		func_943(1104143966);
		func_943(-2142987163);
		func_943(1027093524);
		func_943(1879779330);
		func_943(-1617847332);
	}
	if (func_663(45))
	{
		if (func_400(joaat("WS_SHOWS_SD_MOV_02")))
		{
			func_944(-771786794);
			func_943(-1267247536);
			func_943(-468635897);
			func_943(535384482);
			func_943(1088045886);
			func_943(-1678761663);
			func_943(1724413302);
			func_943(-626641013);
		}
		else if (func_400(joaat("WS_SHOWS_SD_MOV_05")))
		{
			func_944(-1267247536);
			func_943(-468635897);
			func_943(-771786794);
			func_943(535384482);
			func_943(1088045886);
			func_943(-1678761663);
			func_943(1724413302);
			func_943(-626641013);
		}
		else
		{
			func_944(-468635897);
			func_943(-771786794);
			func_943(-1267247536);
			func_943(535384482);
			func_943(1088045886);
			func_943(-1678761663);
			func_943(1724413302);
			func_943(-626641013);
		}
	}
	else if (func_400(joaat("WS_SHOWS_SD_MAG_02")))
	{
		func_944(1088045886);
		func_943(-1678761663);
		func_943(1724413302);
		func_943(-626641013);
		func_943(535384482);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else if (func_400(joaat("WS_SHOWS_SD_MAG_03")))
	{
		func_944(-1678761663);
		func_943(1724413302);
		func_943(-626641013);
		func_943(535384482);
		func_943(1088045886);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else if (func_400(joaat("WS_SHOWS_SD_MAG_04")))
	{
		func_944(1724413302);
		func_943(-626641013);
		func_943(535384482);
		func_943(1088045886);
		func_943(-1678761663);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else if (func_400(joaat("WS_SHOWS_SD_MAG_05")))
	{
		func_944(-626641013);
		func_943(535384482);
		func_943(1088045886);
		func_943(-1678761663);
		func_943(1724413302);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	else
	{
		func_944(535384482);
		func_943(1088045886);
		func_943(-1678761663);
		func_943(1724413302);
		func_943(-626641013);
		func_943(-771786794);
		func_943(-1267247536);
		func_943(-468635897);
	}
	if (func_400(joaat("WS_DISCO_LOVE_MESSAGE_HEARTLAND")))
	{
		func_943(-205505701);
		func_944(-51262018);
	}
	else
	{
		func_943(-51262018);
		func_944(-205505701);
	}
	if (func_400(joaat("WB_DISCO_ALCHEMIST_HOUSE")))
	{
		func_943(874022542);
		func_943(joaat("DES_DIS_ALCHEMIST"));
		func_944(552030279);
		func_877("disco_nav_alchemist_house_burnt");
	}
	else
	{
		func_943(552030279);
		func_1121("disco_nav_alchemist_house_burnt");
		func_944(874022542);
		func_944(joaat("DES_DIS_ALCHEMIST"));
	}
	if (func_400(joaat("WS_DISCO_DEAD_SNAKE")))
	{
		func_944(joaat("DIS_SCM_DEADSNAKE"));
	}
	else
	{
		func_943(joaat("DIS_SCM_DEADSNAKE"));
	}
	func_944(-791673850);
	func_944(-395621323);
	func_944(-1799943886);
	func_944(-1436313374);
	func_944(1473078398);
	func_943(-2116659774);
	func_944(-953275122);
	func_944(-893624314);
	func_944(1193359531);
	func_944(1145227353);
	func_944(1915867459);
	func_944(98482444);
	func_944(26932594);
	func_944(-1930879809);
	func_944(46370274);
	func_944(-1279036865);
	func_944(781058494);
	func_944(1467466015);
	func_944(-363626454);
	func_944(-1314125880);
	func_944(1763246099);
	func_944(-593457329);
	func_944(274045919);
	func_944(-1047394327);
	func_944(-1535282356);
	func_944(-1816233372);
	func_944(-551038153);
	func_944(-1022426685);
	func_944(-262759679);
	func_944(976641588);
	func_944(1601053042);
	func_943(453346329);
	func_944(-1233192626);
	func_943(-620856989);
	func_944(1262164851);
	func_944(joaat("DIS_TAL_CIRCUS_IPL"));
	func_1121("disco_nav_circus_wagon_off");
	func_944(658964321);
	if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_13) && !bParam1)
	{
		Global_1934765.f_13 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2813.128f, 991.613f, 54.6f, 9.375f, 3.243f, 7.954f, 30.906f, false, 7);
	}
	func_813(202);
	func_813(231);
	if (func_400(joaat("WS_VALENTINE_MAGIC_LANTERN_DOOR")))
	{
		func_943(317070801);
		func_944(-763477089);
	}
	else
	{
		func_943(-763477089);
		func_944(317070801);
	}
	if (func_400(joaat("WS_VALENTINE_POKER_LESS_CHAIRS")))
	{
		func_1110(175);
		func_813(174);
	}
	else
	{
		func_1110(174);
		func_813(175);
	}
	if (func_400(joaat("WS_VALENTINE_SALOON_BED_BLOODY")))
	{
		func_1110(197);
	}
	else
	{
		func_813(197);
	}
	if (func_400(joaat("WS_VALENTINE_HOTEL_CURTAINS_MUD3")))
	{
		func_1110(173);
		func_813(171);
		func_813(172);
	}
	else
	{
		func_813(173);
		func_1110(171);
		func_1110(172);
	}
	if (func_400(joaat("WS_VALENTINE_BURIAL_DRUNK")))
	{
		func_943(1886602884);
		func_943(-1640200357);
		func_944(-1280884206);
	}
	else if (func_400(joaat("WS_VALENTINE_BURIAL_POST_DRUNK")))
	{
		func_943(-1280884206);
		func_944(1886602884);
		func_944(-1640200357);
	}
	else
	{
		func_943(-1280884206);
		func_943(-1640200357);
		func_944(1886602884);
	}
	if (func_400(joaat("WS_VALENTINE_BURIAL_MURDER")))
	{
		func_943(-2127665186);
		func_943(-451832572);
		func_943(-689352221);
		func_943(1854980771);
		func_943(325677491);
		func_943(-391187090);
		func_943(1513363974);
		func_943(-1349539327);
		func_943(1963724330);
		func_944(-1902184438);
		func_944(1236921921);
		func_944(740012805);
	}
	else if (func_400(joaat("WS_VALENTINE_BURIAL_POST_MURDER")))
	{
		func_943(-1902184438);
		func_943(-689352221);
		func_943(1236921921);
		func_943(-391187090);
		func_943(740012805);
		func_943(1963724330);
		func_944(-2127665186);
		func_944(-451832572);
		func_944(1854980771);
		func_944(325677491);
		func_944(1513363974);
		func_944(-1349539327);
	}
	else
	{
		func_943(-1902184438);
		func_943(-451832572);
		func_943(1236921921);
		func_943(325677491);
		func_943(740012805);
		func_943(-1349539327);
		func_944(-2127665186);
		func_944(-689352221);
		func_944(1854980771);
		func_944(-391187090);
		func_944(1513363974);
		func_944(1963724330);
	}
	if (func_400(joaat("WS_RHODES_BURIAL")))
	{
		func_943(-1366431554);
		func_944(-960136064);
	}
	else
	{
		func_943(-960136064);
		func_944(-1366431554);
	}
	if (func_400(joaat("WS_BLACKWATER_BURIAL")))
	{
		func_943(-2122914678);
		func_944(-518004776);
	}
	else
	{
		func_943(-518004776);
		func_944(-2122914678);
	}
	if (func_400(joaat("WS_CLEMENS_POINT_BARREL")))
	{
		func_944(1210820782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3) && !bParam1)
		{
			Global_1934765.f_3 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(665.03f, -1252.61f, 42.82f, 0.55f, 0.55f, 1.0f, 0.0f, false, 7);
		}
	}
	else
	{
		func_943(1210820782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_3))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_3));
		}
	}
	if (func_400(joaat("WS_HORSESHOE_BARREL")))
	{
		func_944(-520400509);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4) && !bParam1)
		{
			Global_1934765.f_4 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-112.01f, -36.73f, 95.65f, 0.5f, 0.5f, 0.75f, 0.0f, false, 7);
		}
	}
	else
	{
		func_943(-520400509);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_4))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_4));
		}
	}
	if (func_400(1216784232))
	{
		func_944(-1813544782);
		if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11) && !bParam1)
		{
			Global_1934765.f_11 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1593.796f, -181.753f, 138.934f, 6.212f, 2.801f, 5.068f, 220.2273f, false, 7);
		}
	}
	else
	{
		func_943(-1813544782);
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1934765.f_11))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1934765.f_11));
		}
	}
	if (func_400(joaat("WS_HUNTING_2_ABANDONED_CAMP")))
	{
		func_944(joaat("REG_HRT_HUNTING02"));
		func_1133(joaat("REG_HRT_HUNTING02"));
	}
	else
	{
		func_943(joaat("REG_HRT_HUNTING02"));
		func_1132(joaat("REG_HRT_HUNTING02"));
	}
	if (func_400(joaat("WS_PRONGHORN_RANCH_EXIST")))
	{
		if (func_1134((1 << 29)) == 0)
		{
			func_1135((1 << 29));
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"), -2550.0f, 400.0f, 0.0f, 0);
		}
		func_943(1221694281);
		func_943(-1552951782);
		func_943(-1142569437);
		func_943(474113610);
		func_943(-297340751);
		func_943(1802934313);
		func_943(2108112010);
		func_943(1208537422);
		func_943(361734047);
		func_943(446554495);
		func_943(-118700196);
		func_943(-735136865);
		func_943(636278554);
		func_1121("pro_empty_nav");
		func_1121("pro_fence_fixed_nav");
		func_1121("pro_burned_nav");
		func_944(1423681694);
		func_944(775893260);
		func_944(joaat("PRO_MANSION_INT_MILO"));
		func_944(joaat("PRO_BARN_INT_MILO"));
		func_944(1031662866);
		func_944(-1041976064);
		func_944(joaat("PRO_ES_01_WORKERHOUSE"));
		func_944(-436084091);
		func_944(-868830916);
		func_944(joaat("PRO_WRKSHP_INT_MILO"));
		func_944(-262959893);
		func_944(1049886174);
		func_944(-1042390616);
		func_944(2038589758);
		func_877("pro_fence_broken_nav");
		if (func_112() == -1)
		{
			func_161(22, 16);
			func_1136(22);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_400(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED")))
	{
		if (func_1134((1 << 29)) == 0)
		{
			func_1135((1 << 29));
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"), -2550.0f, 400.0f, 0.0f, 0);
		}
		func_943(-436084091);
		func_943(-1552951782);
		func_943(-1142569437);
		func_943(474113610);
		func_943(-297340751);
		func_943(1802934313);
		func_943(2108112010);
		func_943(1208537422);
		func_943(361734047);
		func_943(446554495);
		func_943(-118700196);
		func_943(-735136865);
		func_943(636278554);
		func_1121("pro_empty_nav");
		func_1121("pro_fence_broken_nav");
		func_1121("pro_burned_nav");
		func_944(1423681694);
		func_944(775893260);
		func_944(-329355129);
		func_944(2117211184);
		func_944(joaat("PRO_MANSION_INT_MILO"));
		func_944(joaat("PRO_BARN_INT_MILO"));
		func_944(1031662866);
		func_944(-1041976064);
		func_944(joaat("PRO_ES_01_WORKERHOUSE"));
		func_944(1221694281);
		func_944(-868830916);
		func_944(joaat("PRO_WRKSHP_INT_MILO"));
		func_944(-262959893);
		func_944(1049886174);
		func_944(-1042390616);
		func_944(2038589758);
		func_877("pro_fence_fixed_nav");
		if (func_112() == -1)
		{
			func_161(22, 16);
			func_1136(22);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else if (func_400(joaat("WS_PRONGHORN_RANCH_BURNED")))
	{
		if (func_1134((1 << 29)) == 0)
		{
			func_1135((1 << 29));
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"), -2550.0f, 400.0f, 0.0f, 0);
		}
		func_943(-436084091);
		func_943(-1552951782);
		func_943(-1142569437);
		func_943(474113610);
		func_943(-297340751);
		func_943(1802934313);
		func_943(2108112010);
		func_943(1208537422);
		func_943(361734047);
		func_943(446554495);
		func_943(-1042390616);
		func_1121("pro_empty_nav");
		func_1121("pro_fence_broken_nav");
		func_1121("pro_fence_fixed_nav");
		func_944(1423681694);
		func_944(joaat("PRO_MANSION_INT_MILO"));
		func_944(joaat("PRO_BARN_INT_MILO"));
		func_944(1031662866);
		func_944(-1041976064);
		func_944(joaat("PRO_ES_01_WORKERHOUSE"));
		func_944(1221694281);
		func_944(-868830916);
		func_944(joaat("PRO_WRKSHP_INT_MILO"));
		func_944(-262959893);
		func_944(1049886174);
		func_944(-118700196);
		func_944(-735136865);
		func_944(636278554);
		func_944(2038589758);
		func_877("pro_burned_nav");
		if (func_112() == -1)
		{
			func_161(22, 16);
			func_1136(22);
		}
		if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2))
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1934765.f_2, false);
			Global_1934765.f_2 = 0;
		}
	}
	else
	{
		if (func_1134((1 << 29)))
		{
			func_1137((1 << 29));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_PRONGHORNRANCH"));
		}
		func_943(1423681694);
		func_943(joaat("PRO_MANSION_INT_MILO"));
		func_943(joaat("PRO_BARN_INT_MILO"));
		func_943(1031662866);
		func_943(-1041976064);
		func_943(joaat("PRO_ES_01_WORKERHOUSE"));
		func_943(1221694281);
		func_943(-436084091);
		func_943(joaat("PRO_WRKSHP_INT_MILO"));
		func_943(-262959893);
		func_943(1049886174);
		func_943(-1042390616);
		func_943(-118700196);
		func_943(-735136865);
		func_943(636278554);
		func_943(2038589758);
		func_943(775893260);
		func_1121("pro_fence_broken_nav");
		func_1121("pro_fence_fixed_nav");
		func_1121("pro_burned_nav");
		func_944(-1552951782);
		func_944(-1142569437);
		func_944(474113610);
		func_944(-297340751);
		func_944(-868830916);
		func_944(1802934313);
		func_944(2108112010);
		func_944(1208537422);
		func_944(361734047);
		func_944(446554495);
		func_877("pro_empty_nav");
		if (func_112() == -1)
		{
			func_164(22, 16);
			func_1138(22);
		}
		if (!PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1934765.f_2) && !bParam1)
		{
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[22 /*35*/].f_3))
			{
				Global_1934765.f_2 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(Global_1888801[22 /*35*/].f_4, false, 15);
			}
		}
	}
	if (func_400(joaat("WS_GUARMA3_TOWER_NORMAL")))
	{
		func_943(-217646849);
		func_943(-694809996);
		func_943(-2053475031);
		func_944(-279703229);
		func_944(-623091266);
	}
	else if (func_400(joaat("WS_GUARMA3_TOWER_FRAG")))
	{
		func_943(-279703229);
		func_943(-2053475031);
		func_944(-217646849);
		func_944(-694809996);
		func_944(-623091266);
	}
	else if (func_400(joaat("WS_GUARMA3_TOWER_DESTROYED")))
	{
		func_943(-279703229);
		func_943(-217646849);
		func_943(-623091266);
		func_944(-694809996);
		func_944(-2053475031);
	}
	if (func_400(joaat("WS_GUARMA3_GUARDS_DISABLED")))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", false);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("GUA_GUARD_CHAINS", true);
	}
	if (func_400(joaat("WS_GUARMA3_ARTILLERY_01_DESTROYED")))
	{
		func_943(-961488528);
		func_944(-1569624057);
	}
	else
	{
		func_943(-1569624057);
		func_944(-961488528);
	}
	if (func_400(joaat("WS_MP_STRAWBERRY_DR_MILO")))
	{
		func_944(131323483);
		func_943(-134556459);
	}
	else
	{
		func_943(131323483);
		func_944(-134556459);
	}
	if (func_663(45))
	{
		func_943(joaat("WAP_RAINSFALLS_BASE"));
		func_943(661576070);
		func_943(795060201);
		func_943(1003623269);
		func_943(-395621323);
		func_943(-924329535);
		func_944(739805687);
		func_944(-243627670);
		func_944(-198004806);
		func_877("nav_wapiti_es");
	}
	else
	{
		func_943(739805687);
		func_943(-243627670);
		func_943(-198004806);
		func_1121("nav_wapiti_es");
		func_944(1003623269);
		func_944(-924329535);
		func_944(-395621323);
		if (func_400(joaat("WS_WAPITI_TENT_OPEN")))
		{
			func_943(661576070);
			func_944(joaat("WAP_RAINSFALLS_BASE"));
			func_944(795060201);
		}
		else
		{
			func_943(795060201);
			func_944(joaat("WAP_RAINSFALLS_BASE"));
			func_944(661576070);
		}
	}
	if (func_400(joaat("WS_GRZ_WEST_CAMP_SITE")))
	{
		func_944(1489268640);
	}
	else
	{
		func_943(1489268640);
	}
	func_1139();
	if (func_400(joaat("WS_PHONOGRAPH_BOAT_FOUND")))
	{
		if (!Global_1934765.f_297)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_HOUSEBOAT"), 2300.0f, -330.0f, 0.0f, 0);
			Global_1934765.f_297 = 1;
		}
	}
	else if (Global_1934765.f_297)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_HOUSEBOAT"));
		Global_1934765.f_297 = 0;
	}
	if (func_400(joaat("WS_VANHORN_BOATS_FOUND")))
	{
		if (!Global_1934765.f_298)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_VANHORNBOAT"), 3012.5f, 507.5f, 0.0f, 0);
			Global_1934765.f_298 = 1;
		}
	}
	else if (Global_1934765.f_298)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_VANHORNBOAT"));
		Global_1934765.f_298 = 0;
	}
	if (func_400(joaat("WS_SAINT_DENIS_BOATS_FOUND")))
	{
		if (!Global_1934765.f_299)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_STDENISBOAT"), 2700.0f, -1600.0f, 0.0f, 0);
			Global_1934765.f_299 = 1;
		}
	}
	else if (Global_1934765.f_299)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_STDENISBOAT"));
		Global_1934765.f_299 = 0;
	}
	if (!func_400(joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER")))
	{
		func_944(joaat("SER_01_GRANDKOR"));
		func_944(joaat("SER_01_GRANDKOR2"));
		func_944(joaat("SER_01_GRANDKOR3"));
		if (func_400(joaat("WS_GRAND_KORRIGAN_LOW_RAILING")))
		{
			func_944(-1716205818);
			func_943(-276259505);
		}
		else
		{
			func_944(-276259505);
			func_943(-1716205818);
		}
		if (!Global_1934765.f_295 && func_1140(5))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOAT"), 3290.0f, -1310.0f, 0.0f, 0);
			Global_1934765.f_295 = 1;
			MAP::_MAP_DISCOVER_REGION(1944800674);
		}
	}
	else
	{
		func_943(joaat("SER_01_GRANDKOR"));
		func_943(joaat("SER_01_GRANDKOR2"));
		func_943(joaat("SER_01_GRANDKOR3"));
		func_943(-276259505);
		func_943(-1716205818);
		if (Global_1934765.f_295)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOAT"));
			Global_1934765.f_295 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(1944800674);
		}
	}
	if (func_400(joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED")))
	{
		func_944(1056170594);
		func_944(-873881483);
		func_944(146172383);
		if (func_400(joaat("WS_GRAND_KORRIGAN_DOCKED_INTERIOR")))
		{
			func_944(joaat("NEW_BOATS_01_GRANDKOR3"));
			func_943(1157695860);
		}
		else
		{
			func_944(1157695860);
			func_943(joaat("NEW_BOATS_01_GRANDKOR3"));
		}
		if (!Global_1934765.f_294 && func_1140(5))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"), 2870.0f, -1400.0f, 0.0f, 0);
			Global_1934765.f_294 = 1;
			MAP::_MAP_DISCOVER_REGION(-296815465);
		}
	}
	else
	{
		func_943(1056170594);
		func_943(-873881483);
		func_943(joaat("NEW_BOATS_01_GRANDKOR3"));
		func_943(1157695860);
		func_943(146172383);
		if (Global_1934765.f_294)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_GRANDKORRIGANBOATDOCKED"));
			Global_1934765.f_294 = 0;
			MAP::_MAP_DISCOVERY_SET_ENABLED(-296815465);
		}
	}
	func_1141();
	strcpy_s(&cVar1, 64, "nav_sdn_docks_");
	if (func_400(joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED")))
	{
		strcat_s(&cVar1, 64, "korrigan_");
	}
	if (func_400(joaat("WS_ANTENOR_DOCKED")))
	{
		strcat_s(&cVar1, 64, "antenor_");
		func_944(-445068262);
		func_944(-1688366042);
		if (TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED"), false);
		}
	}
	else
	{
		func_943(-445068262);
		func_943(-1688366042);
		if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SDN_ANTENOR_NOT_DOCKED"), true);
		}
	}
	if (func_400(joaat("WS_SAINT_DENIS_DOCK_TRAINS")))
	{
		func_944(1048677741);
		func_944(-2035101386);
		func_944(1284188544);
		func_944(1520435387);
		func_944(876228895);
		strcat_s(&cVar1, 64, "trains_");
	}
	else
	{
		func_943(1048677741);
		func_943(-2035101386);
		func_943(1284188544);
		func_943(1520435387);
		func_943(876228895);
	}
	if (!func_663(45))
	{
		func_943(-274080837);
		func_943(-1036688493);
		func_943(-1512794226);
		func_943(913995529);
		func_944(481139295);
		func_944(165972019);
		func_944(1679182807);
		func_944(-1986089134);
		strcat_s(&cVar1, 64, "pre_es");
	}
	else
	{
		func_943(481139295);
		func_943(165972019);
		func_943(1679182807);
		func_943(-1986089134);
		func_944(-274080837);
		func_944(-1036688493);
		func_944(-1512794226);
		func_944(913995529);
		strcat_s(&cVar1, 64, "es");
	}
	func_877(&cVar1);
	if (func_400(joaat("WS_ROANOKE_BOOBY_TRAP_HOLES")))
	{
		func_943(-890900091);
		func_944(-1758697759);
	}
	else
	{
		func_943(-1758697759);
		func_944(-890900091);
	}
	if (func_400(joaat("WS_CRN1_BURNT_BARN")))
	{
		func_943(joaat("COM_MULESHED"));
		func_943(1926336063);
		func_943(-800534102);
		func_1121("nav_crn1_barn");
		func_944(-886310806);
		func_877("nav_crn1_barn_burnt");
	}
	else
	{
		func_943(-886310806);
		func_1121("nav_crn1_barn_burnt");
		func_944(joaat("COM_MULESHED"));
		func_944(1926336063);
		func_944(-800534102);
		func_877("nav_crn1_barn");
	}
	if (func_400(joaat("WS_FIN1_BURNT_LADDER")))
	{
		func_1110(190);
		func_813(189);
	}
	else
	{
		func_1110(189);
		func_813(190);
	}
	if (func_400(joaat("WS_MFR_CHIMNEY_OFF")))
	{
		func_943(1736386364);
	}
	else
	{
		func_944(1736386364);
	}
	if (func_400(joaat("WS_MAC_CHIMNEY_OFF")))
	{
		func_943(516817794);
	}
	else
	{
		func_944(516817794);
	}
	if (func_400(joaat("WS_RID_CHIMNEY_OFF")))
	{
		func_943(-262371610);
	}
	else
	{
		func_944(-262371610);
	}
	if (func_400(joaat("WS_CRD_CHIMNEY_OFF")))
	{
		func_943(-389510791);
	}
	else
	{
		func_944(-389510791);
	}
	if (func_400(joaat("WS_PAI_CHIMNEY_OFF")))
	{
		func_943(71064384);
	}
	else
	{
		func_944(71064384);
	}
	func_944(579127040);
	func_944(-2011620387);
	if (func_400(joaat("WS_GRAVE_EAGLE_FLIES")))
	{
		func_944(joaat("DIS_BGV_00_EAGLE_GRAVE"));
	}
	else
	{
		func_943(joaat("DIS_BGV_00_EAGLE_GRAVE"));
	}
	if (func_400(joaat("WS_GRAVE_KIERAN")))
	{
		func_944(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	else
	{
		func_943(joaat("DIS_SCM_00_KIERAN_GRAVE"));
	}
	if (func_400(joaat("WS_GRAVE_SEAN")))
	{
		func_944(joaat("DIS_BAY_00_SEAN_GRAVE"));
	}
	else
	{
		func_943(joaat("DIS_BAY_00_SEAN_GRAVE"));
	}
	if (func_400(joaat("WS_GRAVE_LENNY")))
	{
		func_944(joaat("DIS_BAY_00_LENNY_GRAVE"));
	}
	else
	{
		func_943(joaat("DIS_BAY_00_LENNY_GRAVE"));
	}
	if (func_400(joaat("WS_GRAVE_HOSEA")))
	{
		func_944(joaat("DIS_BAY_00_HOSEA_GRAVE"));
	}
	else
	{
		func_943(joaat("DIS_BAY_00_HOSEA_GRAVE"));
	}
	if (func_400(joaat("WS_GRAVE_ARTHUR_GOOD")))
	{
		func_944(-1754541271);
		func_944(-1363999915);
		func_944(-1116430120);
	}
	else
	{
		func_943(-1754541271);
		func_943(-1363999915);
		func_943(-1116430120);
	}
	if (func_400(joaat("WS_GRAVE_ARTHUR_BAD")))
	{
		func_944(-163883900);
	}
	else
	{
		func_943(-163883900);
	}
	if (func_400(joaat("WS_GRAVE_SUSAN")))
	{
		func_944(-1010679388);
	}
	else
	{
		func_943(-1010679388);
	}
	if (func_400(joaat("WS_THOMAS_DOWNES")))
	{
		func_944(1033367448);
	}
	else
	{
		func_943(1033367448);
	}
	if (func_400(joaat("WS_COOTS_GRAVE_FILLED_IN")))
	{
		func_943(391022529);
		func_943(-1560636071);
		func_943(1870870569);
		func_943(-904833761);
		func_943(1713084298);
		func_943(928528900);
		func_944(-2118853492);
		func_944(-597126658);
	}
	else
	{
		func_943(-2118853492);
		func_943(-597126658);
		if (func_400(joaat("WS_COOTS_GRAVE_1_DUG")))
		{
			func_943(391022529);
			func_943(-1560636071);
			func_944(1713084298);
		}
		else
		{
			func_943(1713084298);
			func_944(391022529);
			func_944(-1560636071);
		}
		if (func_400(joaat("WS_COOTS_GRAVE_2_DUG")))
		{
			func_943(1870870569);
			func_943(-904833761);
			func_944(928528900);
		}
		else
		{
			func_943(928528900);
			func_944(1870870569);
			func_944(-904833761);
		}
	}
	if (func_400(-1556423728))
	{
		func_944(-1023331176);
	}
	else
	{
		func_943(-1023331176);
	}
	if (func_400(-144653976))
	{
		func_944(-1809571159);
	}
	else
	{
		func_943(-1809571159);
	}
	if (func_400(-351362068))
	{
		func_944(-2071756699);
	}
	else
	{
		func_943(-2071756699);
	}
	if (func_400(-939114198))
	{
		func_944(-1625703283);
	}
	else
	{
		func_943(-1625703283);
	}
	if (func_400(-1318987693))
	{
		func_944(-1696865897);
	}
	else
	{
		func_943(-1696865897);
	}
	if (func_400(joaat("WS_BGV_SHACK_LADDER_DOWN")))
	{
		func_943(-1950049852);
		func_944(-724913398);
	}
	else
	{
		func_943(-724913398);
		func_944(-1950049852);
	}
	func_1121("railroad_stageMP");
	if (func_400(joaat("WS_FAST_TRAVEL_MARKERS")))
	{
		func_944(1858796535);
		func_944(945532872);
		func_944(-2043326480);
		func_944(992791293);
		func_944(-1815023148);
		func_944(731209239);
		func_944(1531008020);
		func_944(-952533419);
		func_944(582879672);
		func_944(1750312025);
		func_944(-759698431);
		func_944(59954835);
		func_944(-1461922204);
		func_944(2079207010);
		func_944(-1360840312);
		func_944(-816857367);
	}
	else
	{
		func_943(1858796535);
		func_943(945532872);
		func_943(-2043326480);
		func_943(992791293);
		func_943(-1815023148);
		func_943(731209239);
		func_943(1531008020);
		func_943(-952533419);
		func_943(582879672);
		func_943(1750312025);
		func_943(-759698431);
		func_943(59954835);
		func_943(-1461922204);
		func_943(2079207010);
		func_943(-1360840312);
		func_943(-816857367);
	}
	if (func_400(joaat("WS_TANNERSREACH_BURNT")))
	{
		func_944(-715865581);
		func_943(-1387511711);
		func_943(1901132483);
		func_943(-2082345587);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", true);
		func_1121("rmllr_cabin_normal");
		func_877("rmllr_cabin_burnt");
	}
	else
	{
		func_944(-1387511711);
		func_944(1901132483);
		func_943(-2082345587);
		func_943(-715865581);
		TASK::SET_SCENARIO_GROUP_ENABLED("TAN_BIRDS", false);
		func_1121("rmllr_cabin_burnt");
		func_877("rmllr_cabin_normal");
	}
	if (func_400(joaat("WS_RE_MUC_TREE_SCENE")))
	{
		func_944(joaat("CVB_MURDERTREE"));
	}
	else
	{
		func_943(joaat("CVB_MURDERTREE"));
	}
	if (func_400(joaat("WS_RE_MUC_ROCK_SCENE")))
	{
		func_944(joaat("M_07_P_MURDERROCK"));
	}
	else
	{
		func_943(joaat("M_07_P_MURDERROCK"));
	}
	if (func_400(joaat("WS_RE_MUC_KNIFE_SCENE")))
	{
		func_944(joaat("M_09_P_CAMPFIREMURDER"));
	}
	else
	{
		func_943(joaat("M_09_P_CAMPFIREMURDER"));
	}
	if (func_400(joaat("WS_NBD1_ABANDONED_BUILDING_INTERIOR")))
	{
		func_944(1628286919);
		func_943(joaat("NEW_COM_07_NOHOTEL"));
		func_943(joaat("NEW_COM_07_WIN"));
	}
	else
	{
		func_944(joaat("NEW_COM_07_NOHOTEL"));
		func_944(joaat("NEW_COM_07_WIN"));
		func_943(1628286919);
	}
	if (func_400(joaat("WS_LAK_BUNKHOUSE_SHOOT_THROUGH")))
	{
		func_943(1928252407);
		func_944(-98843293);
	}
	else
	{
		func_943(-98843293);
		func_944(1928252407);
	}
	if (func_400(joaat("WS_RE_SP_SAVAGEWARNING_01")))
	{
		func_944(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	else
	{
		func_943(joaat("RE_SP_SAVAGEWARNING_01"));
	}
	if (func_400(joaat("WS_RE_SP_SAVAGEWARNING_02")))
	{
		func_944(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	else
	{
		func_943(joaat("RE_SP_SAVAGEWARNING_02"));
	}
	if (func_400(joaat("WS_VALENTINE_SHOOTOUT")))
	{
		func_943(-892659042);
		func_943(30201771);
		func_944(517553365);
		func_877("mud4_saloon_fight");
	}
	else if (func_400(joaat("WS_VALENTINE_SHOOTOUT_START")))
	{
		func_1121("mud4_saloon_fight");
		func_943(30201771);
		func_944(-2083943324);
		func_944(517553365);
		func_877("mud4_saloon_fight_start");
	}
	else
	{
		func_1121("mud4_saloon_fight_start");
		func_1121("mud4_saloon_fight");
		func_943(517553365);
		func_943(-2083943324);
		func_944(30201771);
	}
	if (func_400(joaat("WS_CHELONIAN_CAMP")))
	{
		if (func_663(45))
		{
			func_943(joaat("K_11_P_MARY1_CAMP"));
			func_1121("MS_MARY1_CAMP");
			func_944(joaat("K_11_P_CHELONIAN_CAMP"));
			func_877("MS_CHELONIAN_CAMP");
		}
		else
		{
			func_943(joaat("K_11_P_CHELONIAN_CAMP"));
			func_1121("MS_CHELONIAN_CAMP");
			func_944(joaat("K_11_P_MARY1_CAMP"));
			func_877("MS_MARY1_CAMP");
		}
		func_1142(&(Global_1934765.f_17), 928.2264f, 1345.357f, 194.5221f, 4.5f);
		func_1142(&(Global_1934765.f_18), 922.5641f, 1346.623f, 194.7151f, 3.0f);
		func_1142(&(Global_1934765.f_19), 920.8331f, 1340.152f, 194.182f, 3.5f);
	}
	else
	{
		func_943(joaat("K_11_P_MARY1_CAMP"));
		func_943(joaat("K_11_P_CHELONIAN_CAMP"));
		func_1143(&(Global_1934765.f_17), 1);
		func_1143(&(Global_1934765.f_18), 1);
		func_1143(&(Global_1934765.f_19), 1);
	}
	if (func_400(joaat("WS_ANNES_SETTLERS_CLOSED_OFF")))
	{
		func_944(-1417469821);
	}
	else
	{
		func_943(-1417469821);
	}
	if (func_400(joaat("WS_SAINTDENIS_BOAT")))
	{
	}
	else
	{
		func_943(146172383);
	}
	if (func_400(joaat("WS_BOOBY_TRAP_GUAMA_01_END")))
	{
		func_943(joaat("C_13_NOTRAP_01"));
		func_943(765343099);
		func_944(-909306169);
	}
	else if (func_400(joaat("WS_BOOBY_TRAP_GUAMA_01")))
	{
		func_943(joaat("C_13_NOTRAP_01"));
		func_943(-909306169);
		func_944(765343099);
	}
	else
	{
		func_943(765343099);
		func_943(-909306169);
		func_944(joaat("C_13_NOTRAP_01"));
	}
	if (func_400(joaat("WS_BOOBY_TRAP_ROANOKE_01_END")))
	{
		func_943(-890900091);
		func_943(-1758697759);
		func_944(591001924);
	}
	else if (func_400(joaat("WS_BOOBY_TRAP_ROANOKE_01")))
	{
		func_943(-890900091);
		func_943(591001924);
		func_944(-1758697759);
	}
	else
	{
		func_943(-1758697759);
		func_943(591001924);
		func_944(-890900091);
	}
	if (func_400(joaat("WS_BOOBY_TRAP_ROANOKE_02_END")))
	{
		func_943(-2092712551);
		func_944(-1307469679);
	}
	else if (func_400(joaat("WS_BOOBY_TRAP_ROANOKE_02")))
	{
		func_943(-1307469679);
		func_944(-2092712551);
	}
	else
	{
		func_943(-2092712551);
		func_943(-1307469679);
	}
	func_1144(joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_01"), joaat("GANG_SKINAFTERMATH_LOC01_01"));
	func_1144(joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_02"), joaat("GANG_SKINAFTERMATH_LOC02_01"));
	func_1144(joaat("WS_SAVAGE_AFTERMATH_LAST_WORDS_03"), joaat("GANG_SKINAFTERMATH_LOC03_01"));
	func_1144(joaat("WS_SAVAGE_AFTERMATH_WEEPING_01"), joaat("GANG_SKINAFTERMATH_LOC01_02"));
	func_1144(joaat("WS_SAVAGE_AFTERMATH_WEEPING_02"), joaat("GANG_SKINAFTERMATH_LOC02_02"));
	func_1144(joaat("WS_SAVAGE_AFTERMATH_WEEPING_03"), joaat("GANG_SKINAFTERMATH_LOC03_02"));
	if (func_400(joaat("WS_THIEVES_LANDING_BOAT")))
	{
		func_944(1111220101);
		func_944(1372565859);
		func_944(1644962309);
		if (!Global_1934765.f_296 && func_1140(127))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_THIEVESLANDINGBOAT"), -1350.0f, -2300.0f, 0.0f, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else
	{
		func_943(1111220101);
		func_943(1372565859);
		func_943(1644962309);
		if (Global_1934765.f_296)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_THIEVESLANDINGBOAT"));
			Global_1934765.f_296 = 0;
		}
	}
	if (func_400(joaat("WS_SAINTDENIS_MAGIC_LANTERN_ES")))
	{
		func_943(1137646647);
		func_944(-898081380);
	}
	else
	{
		func_943(-898081380);
		func_944(1137646647);
	}
	if (func_400(joaat("WS_FIN1_DISABLE_VANHORN_FIRE")))
	{
		func_943(1584946069);
	}
	else
	{
		func_944(1584946069);
	}
	if (func_400(joaat("WS_SHADY_BELLE_DOMINO_SEATS")))
	{
		func_943(-1828030290);
		func_944(827269092);
	}
	else
	{
		func_944(-1828030290);
		func_943(827269092);
	}
	if (func_400(joaat("WS_VALENTINE_RES_CURTAINS_CLOSED")))
	{
		func_813(165);
	}
	else
	{
		func_1110(165);
	}
	if (func_400(joaat("WS_BACCHUS_BRIDGE_DESTROYED")))
	{
		func_943(1364392658);
		func_944(-794503195);
		func_877("nts3_no_bridge");
		if (!Global_1934765.f_293)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BRIDGEDESTROYED"), 512.0f, 1756.0f, 0.0f, 0);
			Global_1934765.f_293 = 1;
		}
	}
	else
	{
		func_943(-794503195);
		func_944(1364392658);
		func_1121("nts3_no_bridge");
		if (Global_1934765.f_293)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BRIDGEDESTROYED"));
			Global_1934765.f_293 = 0;
		}
	}
	if (func_400(joaat("WS_LONE_MULE_CELLAR_DOORS_OPEN")))
	{
		func_943(-1192199739);
		func_944(-65072454);
	}
	else
	{
		func_943(-65072454);
		func_944(-1192199739);
	}
	if (func_400(joaat("WS_CLM_DOMINOES_LANTERN")))
	{
		func_944(1692451176);
	}
	else
	{
		func_943(1692451176);
	}
	if (func_400(joaat("WS_HSO_DOMINOES_LANTERN")))
	{
		func_944(-102951407);
	}
	else
	{
		func_943(-102951407);
	}
	if (func_400(joaat("WS_SHB_DOMINOES_LANTERN")))
	{
		func_944(1833824812);
	}
	else
	{
		func_943(1833824812);
	}
	if (func_439() == 2)
	{
		if (func_400(joaat("WS_DEWCLM_DOMINOES_SEATS")))
		{
			func_943(1734859244);
			func_944(719147410);
		}
		else
		{
			func_944(1734859244);
			func_943(719147410);
		}
	}
	if (!func_153(4))
	{
		if (func_439() == 1 && func_1145() == 1)
		{
			if (func_400(joaat("WS_HSO_DOMINOES_SEATS")))
			{
				func_943(1948051928);
				func_944(1453569688);
			}
			else
			{
				func_944(1948051928);
				func_943(1453569688);
			}
		}
		else
		{
			func_943(1453569688);
			func_943(1948051928);
		}
	}
	if (func_400(joaat("WS_SEAN_1_TENT")))
	{
		func_944(joaat("MISSION_SEAN_1"));
		func_1133(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20.0f, 0, 1);
	}
	else
	{
		func_943(joaat("MISSION_SEAN_1"));
		func_1132(joaat("MISSION_SEAN_1"));
		PATHFIND::_0x4BDEBEA5702B97A9(-1363.724f, -839.4881f, 65.44287f, 20.0f, 1, 1);
	}
	if (func_400(joaat("WS_SEAN_1_CAMP")))
	{
		func_943(1759143160);
		func_944(398639187);
		func_1121("reservation_abandoned");
		func_877("nav_sean1_camp");
	}
	else
	{
		func_943(398639187);
		func_944(1759143160);
	}
	if (func_400(joaat("WS_MOB3_TROLLEY_DAMAGE")))
	{
		func_943(1136457806);
		func_944(1255880931);
	}
	else
	{
		func_944(1136457806);
		func_943(1255880931);
	}
	if (func_400(joaat("WS_NATIVE1_COH_DESTROYED")))
	{
		func_943(-753844687);
		func_944(joaat("NAT_NATIVE1_COH_02"));
		func_877("ntv1_cohutta");
	}
	else
	{
		func_944(-753844687);
		func_943(joaat("NAT_NATIVE1_COH_02"));
		func_1121("ntv1_cohutta");
	}
	if (func_400(joaat("WS_NATIVE1_ARMY_CAMP")))
	{
		func_944(joaat("NAT_NATIVE1_ARMY_01"));
		func_877("ntv1_armycamp");
		if (!Global_1934765.f_287)
		{
			func_827(798.2925f, 1509.681f, 203.7047f, 21.0f, "native1_camp", 1, 0, 0, 0, -1082130432);
			Global_1934765.f_287 = 1;
		}
	}
	else
	{
		func_943(joaat("NAT_NATIVE1_ARMY_01"));
		func_1121("ntv1_armycamp");
		if (Global_1934765.f_287)
		{
			func_891(798.2925f, 1509.681f, 203.7047f, 0);
			Global_1934765.f_287 = 0;
		}
	}
	if (func_400(joaat("WS_POISONED_WELL_BLOCKED_ENTRY")))
	{
		func_944(-1835067413);
		func_943(-1392150519);
		func_813(226);
	}
	else
	{
		func_944(-1392150519);
		func_943(-1835067413);
		func_1110(226);
	}
	if (func_400(joaat("WS_MP_SDS_WELL_COVER")))
	{
		func_944(joaat("SDS_WELL_COVER"));
	}
	else
	{
		func_943(joaat("SDS_WELL_COVER"));
	}
	if (func_400(joaat("WS_FEUD1_WATER_TOWER_UP")))
	{
		func_943(joaat("N_1114_WATERTOWER01_FEUD1"));
		func_944(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	else
	{
		func_944(joaat("N_1114_WATERTOWER01_FEUD1"));
		func_943(joaat("N_1114_WATERTOWER01_DEFAULT"));
	}
	if (func_400(joaat("WS_TRAINROB1_SHOOTOUT")))
	{
		func_944(-1085363933);
		func_944(-537740003);
		func_877("trn1_nav_ann_shootout_00");
	}
	else
	{
		func_943(-1085363933);
		func_943(-537740003);
		func_1121("trn1_nav_ann_shootout_00");
	}
	if (func_400(joaat("WS_SISIKA_WINDOW_COVER")))
	{
		func_944(728046625);
	}
	else
	{
		func_943(728046625);
	}
	if (func_400(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE")))
	{
		func_813(228);
	}
	else
	{
		func_1110(228);
	}
	if (func_400(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE")))
	{
		func_813(227);
	}
	else
	{
		func_1110(227);
	}
	if (func_400(joaat("WS_SAINT_DENIS_DOCK_BOATS")))
	{
		func_944(-929277449);
		func_944(-723094901);
		func_944(-801609437);
	}
	else
	{
		func_943(-929277449);
		func_943(-723094901);
		func_943(-801609437);
	}
	if (func_400(1446719356))
	{
		func_944(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	else
	{
		func_943(joaat("P_12P_BLACKWHITE_CAMP"));
	}
	if (func_400(171107021))
	{
		func_944(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	else
	{
		func_943(joaat("N_11P_BLACKWHITE_SETUPCAMP"));
	}
	return true;
}

void func_406()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887.f_12 == -1)
		{
			Global_1934765.f_39[iVar0] = Global_40.f_283[iVar0];
		}
		else
		{
			Global_1934765.f_39[iVar0] = Global_1058888.f_40497[iVar0];
		}
		iVar0++;
	}
}

void func_407()
{
	var uVar0;
	int iVar1;

	if (func_112() != -1)
	{
		return;
	}
	if (((((CAM::IS_SCREEN_FADED_OUT() || Global_1879534.f_1) || Global_1879534) || func_513()) || func_119()) || func_185(128))
	{
		return;
	}
	if (func_1146(8))
	{
		MISC::_GET_FORCED_WEATHER(&uVar0, &iVar1);
		if (iVar1 == 0)
		{
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			func_1147(8);
			if (func_1146(16))
			{
				MISC::SET_RANDOM_WEATHER_TYPE(true, true);
				func_1147(16);
			}
		}
	}
	func_1148();
	func_1149();
	func_1150();
	func_1151();
	func_1152();
	func_1153();
	func_1154();
}

void func_408()
{
	if (func_185(256))
	{
		func_1155(256);
		return;
	}
	if (func_185(128))
	{
		return;
	}
	func_1156(&(Global_1934765.f_402));
	func_1157(&(Global_1934765.f_402));
	func_1158(&(Global_1934765.f_402));
	func_1159();
}

void func_409()
{
	int iVar0;
	bool bVar1;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1934765.f_275[iVar0 /*2*/].f_1 > 0 && !SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[iVar0 /*2*/], false))
		{
			Global_1934765.f_286 += Global_1934765.f_275[iVar0 /*2*/].f_1;
			Global_1934765.f_275[iVar0 /*2*/].f_1 = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (STREAMING::GET_POPULATION_BUDGET_MULTIPLIER() != func_1160())
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		func_1161();
	}
}

void func_410()
{
	Global_1899528.f_202 = 0;
	Global_1899528.f_203 = 0;
}

void func_411(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_412(var uParam0)
{
	int iVar0;

	if (func_112() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		func_1162(uParam0, iVar0);
		iVar0++;
	}
}

bool func_413(int iParam0, bool bParam1)
{
	if (func_1163(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_443(5000))
		{
			return true;
		}
	}
	switch (func_541(0))
	{
		case 0:
			return false;
		case 1:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 6:
			if (iParam0 & 4 != 0)
			{
				return true;
			}
			break;
		case 2:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 9:
			if (iParam0 & 64 != 0)
			{
				return true;
			}
			break;
		case 8:
			if (iParam0 & 8 != 0)
			{
				return true;
			}
			break;
		case 10:
			if (iParam0 & (1 << 9) != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 128 != 0)
			{
				return true;
			}
			break;
		case 11:
			if (iParam0 & 256 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_414(int iParam0)
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
	fVar13 = func_1164(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	vVar0[0 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 6884, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[1 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 43312, 0.0f, 0.0f, 0.0f) /*3*/ };
	vVar0[2 /*3*/] = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0.0f, 0.0f, 0.0f) /*3*/ };
	fVar13 = func_1164(vVar0[2 /*3*/] - vVar0[1 /*3*/], vVar0[1 /*3*/] - vVar0[0 /*3*/]);
	if (fVar13 < -0.173648f && fVar13 > 0.173648f)
	{
		return false;
	}
	return true;
}

int func_415(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_416()
{
	func_300(0, 8);
	Global_1899528.f_217 = 0;
}

void func_417(int iParam0)
{
	int iVar0;

	if (Global_1899528.f_213 == 0 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_1165(func_628(iVar0)))
		{
			if (!func_627(iVar0) == -1)
			{
				if (func_633(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
					{
						if (MAP::BLIP_ADD_MODIFIER(Global_36308[iVar0], joaat("BLIP_MODIFIER_HIDDEN")))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528.f_213 = 0;
}

void func_418(int iParam0)
{
	int iVar0;

	if (Global_1899528.f_213 && iParam0 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (func_1165(func_628(iVar0)))
		{
			if (!func_627(iVar0) == -1)
			{
				if (func_633(iVar0) != 0)
				{
					if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
					{
						if (MAP::BLIP_REMOVE_MODIFIER(Global_36308[iVar0], joaat("BLIP_MODIFIER_HIDDEN")))
						{
						}
					}
				}
			}
		}
		iVar0++;
	}
	Global_1899528.f_213 = 1;
}

bool func_419()
{
	int iVar0;

	if (func_112() == -1)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(5))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (Global_1392915[iVar0 /*12*/].f_1 != -1)
				{
					if (func_446(Global_1392915[iVar0 /*12*/].f_4))
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

bool func_420(int iParam0)
{
	int iVar0;

	if (func_112() == -1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_1392915[iVar0 /*12*/].f_1 == iParam0)
			{
				if (func_446(Global_1392915[iVar0 /*12*/].f_4))
				{
					return true;
				}
			}
			iVar0++;
		}
		return false;
	}
	return false;
}

bool func_421(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1 == -1;
}

int func_422(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_4;
}

int func_423(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_2;
}

bool func_424(int iParam0)
{
	return func_1166(iParam0) == 2;
}

void func_425(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = Global_1392915[iParam0 /*12*/];
	if (func_421(iParam0))
	{
		return;
	}
	if (func_127(Global_1392915[iParam0 /*12*/].f_4))
	{
		func_312(Global_1392915[iParam0 /*12*/].f_4, 1, 2);
	}
	Global_1392915[iParam0 /*12*/].f_1 = -1;
	func_1167(iVar0, -1);
}

void func_426(int iParam0)
{
	func_1168(&(Global_1392915[iParam0 /*12*/]));
	func_1169(&(Global_1392915.f_121[iParam0 /*20*/]));
}

int func_427(int iParam0)
{
	return Global_1392915[iParam0 /*12*/].f_1;
}

bool func_428(int iParam0)
{
	if (!func_578(iParam0))
	{
		return false;
	}
	return (!func_529() || MISC::IS_BIT_SET(Global_40.f_7854, iParam0));
}

bool func_429(int iParam0)
{
	return func_1166(iParam0) == 0;
}

int func_430(int iParam0)
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

void func_431(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_34)
	{
		if (func_549(uParam0->f_34[iVar0]))
		{
			func_1170(&(uParam0->f_34[iVar0]), 0);
		}
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

bool func_432(var uParam0, int iParam1)
{
	if (*uParam0 & iParam1 != 0)
	{
		return true;
	}
	return false;
}

bool func_433(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_127(iParam1))
	{
		return true;
	}
	switch (Global_1391438.f_413)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (func_246(Global_1391438.f_7[iVar0 /*99*/].f_10))
				{
					func_312(Global_1391438.f_7[iVar0 /*99*/].f_10, 0, 2);
				}
				iVar0++;
			}
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
			{
				SCRIPTS::_REQUEST_THREAD_EXIT(Global_1391438.f_490);
			}
			func_454(uParam0);
			func_1171();
			iVar1 = func_1172(func_585(iParam1), 1);
			func_1173(&uVar2, &(Global_1391438.f_314), iVar1);
			func_1174(uParam0, &(Global_1391438.f_314));
			if (!func_246(uParam0->f_5) && !func_446(uParam0->f_5))
			{
				func_248(uParam0->f_5);
			}
			if (!func_446(uParam0->f_5))
			{
				func_1175(uParam0->f_5, 1, 0);
			}
			uParam0->f_7 = uParam2;
			func_1176(&(uParam0->f_9), 128, 1);
			Global_1391438.f_413 = 1;
			break;
		case 1:
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1391438.f_314.f_42)))
			{
				SCRIPTS::REQUEST_SCRIPT(&(Global_1391438.f_314.f_42));
			}
			Global_1391438.f_413 = 2;
			break;
		case 2:
			if (!SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1391438.f_314.f_42)))
			{
				return false;
			}
			else
			{
				Global_1391438.f_413 = 3;
			}
			break;
		case 3:
			Global_1391438.f_490 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(Global_1391438.f_314.f_42)), uParam0, 76, Global_1391438.f_314.f_66);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1391438.f_314.f_42));
			Global_1391438.f_413 = 4;
			break;
		case 4:
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_434(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= *uParam0 & iParam1;
	}
}

bool func_435(int iParam0, bool bParam1)
{
	struct<2> /*16*/ sVar0;
	struct<20> /*160*/ sVar5;

	switch (Global_1391438.f_492)
	{
		case 0:
			if (func_351(func_113()))
			{
				if (bParam1)
				{
					if (func_1177(0))
					{
						func_437(&(Global_1391438.f_493));
						Global_1391438.f_492 = 1;
					}
				}
				else
				{
					func_437(&(Global_1391438.f_493));
					Global_1391438.f_492 = 1;
				}
			}
			break;
		case 1:
			sVar0.f_0 = Global_1359489.f_21;
			if (iParam0 == -589165916)
			{
				Global_1391438.f_492 = 6;
				return true;
			}
			sVar5.f_11 = 1;
			func_1178(&sVar5, iParam0);
			sVar0.f_1 = 0;
			func_1173(&sVar0, &(Global_1391438.f_493), iParam0);
			if (func_1179(Global_1391438.f_493, 2) == 0)
			{
				func_1180(Global_1391438.f_493, 2, 0, -1);
			}
			func_1180(Global_1391438.f_493, (1 << 31), 1, -1);
			Global_1391438.f_493.f_12 = 0;
			Global_1391438.f_493.f_78 = { sVar5 /*20*/ };
			Global_1391438.f_493.f_78.f_15 = 1;
			Global_1391438.f_492 = 2;
			break;
		case 2:
			SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58)));
			Global_1391438.f_492 = 3;
		case 3:
			if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58))))
			{
				Global_1391438.f_492 = 4;
			}
			break;
		case 4:
			if (!func_246(Global_1391438.f_493.f_10) && !func_446(Global_1391438.f_493.f_10))
			{
				func_248(Global_1391438.f_493.f_10);
			}
			Global_1391438.f_592 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(Global_1391438.f_493.f_58)), &(Global_1391438.f_493), 99, 6003);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1391438.f_493.f_58));
			if (func_432(&(Global_1391438.f_5), (1 << 12)))
			{
				Global_1391438.f_492 = 5;
			}
			else
			{
				Global_1391438.f_492 = 6;
			}
			break;
		case 5:
			Global_1359489.f_672 = 1;
			Global_1391438.f_492 = 6;
			break;
		case 6:
			Global_1391438.f_492 = 0;
			return true;
	}
	return false;
}

bool func_436(var uParam0)
{
	struct<76> /*608*/ sVar0;

	if (!func_616(&(uParam0->f_31), (1 << 9)))
	{
		SCRIPTS::REQUEST_SCRIPT(&(uParam0->f_42));
		func_614(&(uParam0->f_31), (1 << 9), 1);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_42)))
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(uParam0->f_42)))
		{
			return false;
		}
		else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(uParam0->f_42))) > 0)
		{
			SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(uParam0->f_42)));
			return false;
		}
		else
		{
			sVar0.f_41 = 1101004800;
			func_1174(&sVar0, uParam0);
			Global_1391438.f_490 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(MISC::GET_HASH_KEY(&(uParam0->f_42)), &sVar0, 76, uParam0->f_66);
			Global_1391438.f_414 = { sVar0 /*76*/ };
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(uParam0->f_42));
		}
	}
	return true;
}

void func_437(int* iParam0)
{
	struct<79> /*632*/ sVar0;

	sVar0.f_9 = -589165916;
	sVar0.f_78.f_11 = 1;
	MISC::_COPY_MEMORY(iParam0, &sVar0, 99);
}

bool func_438()
{
	return (func_362(Global_1935630, (1 << 12)) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RESPAWN_DUMP_BODY")) > 0);
}

int func_439()
{
	return Global_40.f_4283;
}

bool func_440(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		return func_1181(iParam0);
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

bool func_441(int iParam0)
{
	return iParam0 != 0;
}

int func_442()
{
	return 0;
}

bool func_443(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1898438;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2061320468;
		case 2:
			return -709866131;
		case 3:
			return -1348173149;
		default:
			break;
	}
	return -589165916;
}

int func_445(int iParam0, int iParam1)
{
	if (iParam1 == joaat("HAI_BANK_ROBBERY_01"))
	{
		return func_311(0, func_1182(iParam1, 1), 11, joaat("CABR01"));
	}
	return func_311(0, func_1182(iParam1, 1), 11, iParam1);
}

bool func_446(int iParam0)
{
	int iVar0;

	iVar0 = func_1166(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_447(int iParam0, bool bParam1)
{
	switch (func_1166(iParam0))
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

Vector3 func_448(int iParam0)
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
			return func_1183();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 14;
		case 3:
			return 15;
		default:
			break;
	}
	return -1;
}

void func_450(int iParam0, int iParam1)
{
	if (func_1184())
	{
		return;
	}
	if (func_1185())
	{
		return;
	}
	Global_1327590.f_9 = iParam0;
	Global_1327590.f_10.f_11 = iParam1;
	Global_1327590.f_10.f_1 = { func_1186(Global_1327590.f_9) /*8*/ };
	SCRIPTS::REQUEST_SCRIPT(&(Global_1327590.f_10.f_1));
}

bool func_451(int iParam0)
{
	if (Global_1359453 != 8)
	{
		return false;
	}
	return func_1187() == iParam0;
}

bool func_452()
{
	bool bVar0;
	int iVar1;

	if (((func_440(joaat("CSTAG_FLOW_BRT3_PRE"), 1) && func_439() == 2) || func_440(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) || func_440(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		return false;
	}
	switch (func_439())
	{
		case 3:
			if (!func_154(28))
			{
				return false;
			}
			break;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false) || SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_592, false))
	{
		Global_1391438.f_6 = 6;
		return false;
	}
	if (!func_335(Global_35, 0))
	{
		Global_1391438.f_6 = 7;
		return false;
	}
	if (PED::_IS_PED_DRUNK(Global_35))
	{
		Global_1391438.f_6 = 12;
		return false;
	}
	if (func_432(&(Global_1391438.f_5), 32))
	{
		Global_1391438.f_2 = -1;
		func_434(&(Global_1391438.f_5), 32, 0);
		Global_1391438.f_6 = 2;
		return true;
	}
	if (func_114(258, 0, 1))
	{
		Global_1391438.f_6 = 9;
		return false;
	}
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar1], false))
		{
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		Global_1391438.f_6 = 11;
		return false;
	}
	Global_1391438.f_6 = 1;
	return true;
}

void func_453(int iParam0, int iParam1)
{
	if (func_451(iParam0))
	{
		Global_1359453.f_15 = iParam1;
	}
}

void func_454(var uParam0)
{
	*uParam0 = 234527101;
	uParam0->f_1 = -589165916;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_6 = -1;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_13 = 0;
	strcpy_s(&(uParam0->f_18), 64, "");
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_37 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_41 = 20.0f;
	uParam0->f_43 = 0;
	strcpy_s(&(uParam0->f_52), 64, "");
	strcpy_s(&(uParam0->f_60), 64, "");
	uParam0->f_12 = 0;
	if (func_1188(uParam0->f_44))
	{
		func_1189(&(uParam0->f_44), 1, 1);
	}
	if (func_456(&(uParam0->f_45)))
	{
		func_462(&(uParam0->f_45));
	}
}

bool func_455(int* iParam0)
{
	int iVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	int iVar19;

	func_1190("Attemping to find a valid activity to launch....", 1, 1);
	iVar11 = 0;
	iVar12 = 0;
	while (iVar12 < Global_40.f_6563.f_273)
	{
		if (func_1191(&(Global_40.f_6563.f_274[iVar12 /*20*/])))
		{
			iVar0[iVar11] = iVar12;
			iVar11++;
		}
		Global_40.f_6563.f_274[iVar12 /*20*/].f_18 = func_1192(&(Global_40.f_6563.f_274[iVar12 /*20*/]));
		iVar12++;
	}
	if (iVar11 <= 0)
	{
		func_1190("--------------------------------------------------------", 1, 1);
		return false;
	}
	iVar13 = iVar0[0];
	func_1190("Found ", 0, 1);
	func_1190(func_1193(iVar11), 1, 0);
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		if (Global_40.f_6563.f_274[iVar0[iVar12] /*20*/].f_18 > Global_40.f_6563.f_274[iVar13 /*20*/].f_18)
		{
			iVar13 = iVar0[iVar12];
		}
		iVar12++;
	}
	func_1173(&uVar14, iParam0, Global_40.f_6563.f_274[iVar13 /*20*/].f_1);
	iParam0->f_78 = { Global_40.f_6563.f_274[iVar13 /*20*/] /*20*/ };
	iParam0->f_13 = iVar13;
	Global_40.f_6563.f_274[iVar13 /*20*/].f_19++;
	iVar19 = func_1194(iParam0->f_8);
	Global_40.f_7039[func_1195(iVar19, 1) /*2*/].f_1 = 1;
	func_1180(Global_40.f_6563.f_274[iVar13 /*20*/].f_2, 2, 0, -1);
	func_1190("Launching ", 0, 1);
	func_1190("--------------------------------------------------------", 1, 1);
	Global_40.f_6563.f_274[iVar13 /*20*/].f_14 = 0;
	return true;
}

bool func_456(var uParam0)
{
	return func_1196(*uParam0, 1);
}

void func_457(var uParam0, bool bParam1)
{
	if (bParam1 || !func_456(uParam0))
	{
		func_751(uParam0);
	}
}

float func_458(var uParam0)
{
	if (!func_456(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_971(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1197() - uParam0->f_1);
}

bool func_459()
{
	if (Global_1391438.f_7[0 /*99*/].f_9 != -589165916 && !(func_246(Global_1391438.f_7[0 /*99*/].f_10) || func_446(Global_1391438.f_7[0 /*99*/].f_10)))
	{
		return false;
	}
	if (Global_1391438.f_7[1 /*99*/].f_9 != -589165916 && !(func_246(Global_1391438.f_7[1 /*99*/].f_10) || func_446(Global_1391438.f_7[1 /*99*/].f_10)))
	{
		return false;
	}
	return true;
}

bool func_460(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
			return true;
		default:
			break;
	}
	return false;
}

bool func_461(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_1199(func_1198(iParam0, func_439()), 6.0f, 4, 1))
	{
		return false;
	}
	if (func_432(&(Global_1391438.f_5), (1 << 11)))
	{
		return false;
	}
	if (func_1200(iParam0) == 0)
	{
		return false;
	}
	iVar0 = func_439();
	if (iVar0 == 3 && !func_154(28))
	{
		return false;
	}
	switch (iVar0)
	{
		case 1:
			if (func_440(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (func_440(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (bVar1)
	{
		return false;
	}
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (iVar2 >= 17 && iVar2 < 21)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (func_432(&(Global_1391438.f_5), 256))
			{
				return false;
			}
			if (!func_1201(-1341684320))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 10))
			{
				return false;
			}
			if (func_1202(-1341684320))
			{
				return false;
			}
			break;
		case 1:
			if (func_1203(joaat("HAI_DOMINOES_01")) == 0 && func_439() == 2)
			{
				return false;
			}
			if (func_432(&(Global_1391438.f_5), (1 << 9)))
			{
				return false;
			}
			if (func_440(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
			{
				return false;
			}
			if (!func_1201(-1567081107))
			{
				return false;
			}
			if (!(iVar2 > 6 && iVar2 < 20))
			{
				return false;
			}
			if (func_1202(-1567081107))
			{
				return false;
			}
			break;
		case 2:
			if (!(func_1203(joaat("HAI_FIVE_FINGER_FILLET_01")) || func_1203(joaat("HAI_FIVE_FINGER_FILLET_02"))) && func_439() < 2)
			{
				return false;
			}
			if (func_432(&(Global_1391438.f_5), (1 << 10)))
			{
				return false;
			}
			if (!func_1201(-1511391406))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 20))
			{
				return false;
			}
			if (func_1202(-1511391406))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_462(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_463()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 11)
	{
		iVar0 = func_1204(iVar1);
		if (func_1140(iVar0) && !func_1205(iVar1, iVar0))
		{
		}
		iVar1++;
	}
}

void func_464()
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_549(Global_1934051.f_33))
	{
		iVar0 = func_627(Global_1934051.f_33);
		if (iVar0 != func_113())
		{
			func_1207(Global_1934051.f_33, func_1206(iVar0));
			func_1170(&(Global_1934051.f_33), 0);
		}
	}
	if (!func_549(Global_1934051.f_33))
	{
		iVar1 = func_113();
		if (func_47(iVar1))
		{
			vVar2 = { func_448(func_439()) /*3*/ };
			Global_1934051.f_33 = func_158(iVar1, 62, vVar2, -1);
			func_624(Global_1934051.f_33, joaat("BLIP_MODIFIER_HIDDEN"));
			func_624(Global_1934051.f_33, func_1206(iVar1));
		}
	}
}

void func_465()
{
	if (Global_1572887.f_8)
	{
		return;
	}
	if (func_398())
	{
		return;
	}
	func_1208();
	func_1209();
}

void func_466()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;

	iVar2 = 2;
	Global_1934051.f_110 = 0;
	iVar3 = Global_1934051.f_114;
	while (iVar3 <= (9 - 1))
	{
		if (Global_1934051.f_110 >= iVar2)
		{
		}
		else
		{
			iVar0 = iVar3;
			if (iVar0 == -1)
			{
			}
			else
			{
				iVar1 = func_1210(iVar0);
				if (!func_1140(iVar1))
				{
				}
				else
				{
					vVar4 = { func_1211(iVar0) /*3*/ };
					if (func_587(vVar4))
					{
					}
					else
					{
						if (!func_549(Global_1934051.f_23[iVar3]) && Global_1934051.f_94[iVar3])
						{
							Global_1934051.f_94[iVar3] = 0;
						}
						if (!Global_1934051.f_94[iVar3])
						{
							Global_1934051.f_23[iVar3] = func_158(func_46(), 27, vVar4, -1);
							func_160(Global_1934051.f_23[iVar3], joaat("BLIP_STYLE_SHOP"));
							func_1212(Global_1934051.f_23[iVar3], joaat("BLIP_SALOON"));
							func_1213(Global_1934051.f_23[iVar3], iVar1);
							Global_1934051.f_94[iVar3] = 1;
						}
						else
						{
							if (iVar1 == func_46())
							{
							}
							else
							{
								if (!func_1215(iVar1, 1, func_1214(iVar0)))
								{
									func_1207(Global_1934051.f_23[iVar3], joaat("BLIP_MODIFIER_LOCKED"));
								}
								else
								{
									func_624(Global_1934051.f_23[iVar3], joaat("BLIP_MODIFIER_LOCKED"));
								}
								Global_1934051.f_110++;
							}
							iVar3++;
							Global_1934051.f_114 = iVar3;
							if (Global_1934051.f_114 >= 9)
							{
								Global_1934051.f_114 = 0;
							}
						}
					}
				}
			}
		}
	}
}

void func_467()
{
	struct<6> /*48*/ sVar0;
	int iVar10;
	int iVar11;
	int iVar12;

	sVar0 = -1;
	sVar0.f_1 = -1;
	sVar0.f_2 = -1;
	iVar11 = 1;
	Global_1934051.f_110 = 0;
	iVar12 = Global_1934051.f_112;
	while (iVar12 <= (33 - 1))
	{
		if (Global_1934051.f_110 >= iVar11)
		{
		}
		else
		{
			iVar10 = iVar12;
			if (iVar10 == -1)
			{
			}
			else if (!func_1140(sVar0.f_2))
			{
			}
			else
			{
				if (func_1216(iVar10, &sVar0, 0))
				{
					if (func_1217(&sVar0))
					{
						if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_34[iVar10]))
						{
							Global_1934051.f_34[iVar10] = MAP::BLIP_ADD_FOR_COORDS(func_1219(func_1218(sVar0.f_1, sVar0.f_2)), sVar0.f_5);
							if (MAP::DOES_BLIP_EXIST(Global_1934051.f_34[iVar10]))
							{
								MAP::SET_BLIP_SPRITE(Global_1934051.f_34[iVar10], func_1220(func_1218(sVar0.f_1, sVar0.f_2)), true);
								MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_34[iVar10], func_1218(sVar0.f_1, sVar0.f_2), -1);
								func_1221(Global_1934051.f_34[iVar10], sVar0.f_2);
							}
						}
					}
				}
				Global_1934051.f_110++;
			}
			iVar12++;
		}
	}
	Global_1934051.f_112 = iVar12;
	if (Global_1934051.f_112 > 33)
	{
		Global_1934051.f_112 = 0;
	}
}

void func_468()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 1;
	Global_1934051.f_110 = 0;
	iVar2 = Global_1934051.f_113;
	while (iVar2 <= 6)
	{
		if (Global_1934051.f_110 >= iVar1)
		{
		}
		else
		{
			iVar0 = iVar2;
			if (iVar0 == 0 && !func_1222(iVar0))
			{
			}
			else
			{
				iVar3 = func_1223(iVar0);
				if (!func_1140(iVar3))
				{
				}
				else
				{
					if (func_1224(iVar3, -1, 1) && func_1225(iVar3, iVar0))
					{
						if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
						{
							Global_1934051.f_68[iVar0] = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_PROC_MISSION"), func_1226(iVar0));
							if (MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
							{
								MAP::SET_BLIP_SPRITE(Global_1934051.f_68[iVar0], joaat("BLIP_PROC_BOUNTY_POSTER"), true);
								MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_68[iVar0], 16, -1);
								func_1221(Global_1934051.f_68[iVar0], iVar3);
							}
						}
					}
					else if (MAP::DOES_BLIP_EXIST(Global_1934051.f_68[iVar0]))
					{
						MAP::REMOVE_BLIP(&(Global_1934051.f_68[iVar0]));
					}
					Global_1934051.f_110++;
				}
			}
			iVar2++;
		}
	}
	Global_1934051.f_113 = iVar2;
	if (Global_1934051.f_113 >= 7)
	{
		Global_1934051.f_113 = 1;
	}
}

void func_469()
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	Vector3 vVar5;

	iVar4 = 0;
	while (iVar4 < 11)
	{
		iVar1 = iVar4;
		iVar2 = func_1227(iVar1);
		bVar3 = func_1228(iVar2, &uVar0, -1.0f);
		if (func_1229(iVar2))
		{
			vVar5 = { func_1230(iVar2) /*3*/ };
			if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
			{
				Global_1934051.f_82[iVar4] = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_SHOP"), vVar5);
				MAP::SET_BLIP_SPRITE(Global_1934051.f_82[iVar4], joaat("BLIP_AMBIENT_WARP"), true);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1934051.f_82[iVar4], "STAGE_COACH_BLIP");
				MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_82[iVar4], 50, -1);
			}
			if (MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
			{
				if (bVar3)
				{
					if (MAP::BLIP_REMOVE_MODIFIER(Global_1934051.f_82[iVar4], joaat("BLIP_MODIFIER_LOCKED")))
					{
					}
				}
				else if (MAP::BLIP_ADD_MODIFIER(Global_1934051.f_82[iVar4], joaat("BLIP_MODIFIER_LOCKED")))
				{
				}
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1934051.f_82[iVar4]))
		{
			MAP::REMOVE_BLIP(&(Global_1934051.f_82[iVar4]));
		}
		iVar4++;
	}
}

void func_470()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_388())
	{
		if (MAP::DOES_BLIP_EXIST(Global_1394141.f_1279[4 /*8*/].f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1394141.f_1279[4 /*8*/].f_1));
		}
	}
	iVar0 = Global_1934051.f_111;
	bVar1 = false;
	if (iVar0 != -1)
	{
		iVar2 = func_1232(func_1231(iVar0), 1);
		if (func_1140(iVar2))
		{
			if (iVar2 == 5)
			{
				if (func_663(45))
				{
					if (iVar0 == 0 || iVar0 == 2)
					{
						bVar1 = true;
					}
				}
				else if (iVar0 == 0 || iVar0 == 1)
				{
					bVar1 = true;
				}
			}
			else if (iVar2 == 38)
			{
				if (func_679() && iVar0 == 4)
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(Global_1934051.f_76[iVar0]))
				{
					Global_1934051.f_76[iVar0] = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_SHOP"), func_1231(iVar0));
					if (MAP::DOES_BLIP_EXIST(Global_1934051.f_76[iVar0]))
					{
						MAP::SET_BLIP_SPRITE(Global_1934051.f_76[iVar0], func_1220(func_1233(iVar0)), true);
						MAP::SET_BLIP_FLASH_TIMER(Global_1934051.f_76[iVar0], func_1233(iVar0), -1);
						func_1221(Global_1934051.f_76[iVar0], iVar2);
						if (!Global_1394141.f_1279[iVar0 /*8*/].f_4)
						{
							MAP::BLIP_ADD_MODIFIER(Global_1934051.f_76[iVar0], joaat("BLIP_MODIFIER_SHOP_UNAVAILABLE"));
							Global_1934051.f_104[iVar0] = 1;
						}
					}
				}
				else if (Global_1394141.f_1279[iVar0 /*8*/].f_4 && !Global_1394141.f_1279[iVar0 /*8*/].f_5)
				{
					if (Global_1934051.f_104[iVar0])
					{
						MAP::BLIP_REMOVE_MODIFIER(Global_1934051.f_76[iVar0], joaat("BLIP_MODIFIER_SHOP_UNAVAILABLE"));
						Global_1934051.f_104[iVar0] = 0;
					}
				}
				else if (!Global_1934051.f_104[iVar0])
				{
					MAP::BLIP_ADD_MODIFIER(Global_1934051.f_76[iVar0], joaat("BLIP_MODIFIER_SHOP_UNAVAILABLE"));
					Global_1934051.f_104[iVar0] = 1;
				}
			}
		}
	}
	Global_1934051.f_111++;
	if (Global_1934051.f_111 >= 5)
	{
		Global_1934051.f_111 = 0;
	}
}

void func_471()
{
	if (Global_1955864.f_5)
	{
		if (func_575(127))
		{
			Global_1955864.f_5 = 0;
			return;
		}
		if (!func_1234())
		{
			return;
		}
		if (func_651())
		{
			return;
		}
		if (func_571())
		{
			return;
		}
		func_576(127, 0);
		Global_1955864.f_6 = MISC::GET_GAME_TIMER();
		Global_1955864.f_5 = 0;
	}
	if (Global_1955864.f_6 > 0 && (MISC::GET_GAME_TIMER() - Global_1955864.f_6) > 40000)
	{
		Global_1955864.f_6 = 0;
	}
	if (func_1235(1) || Global_1955864.f_6 > 0)
	{
		if (!func_549(Global_1955864))
		{
			Global_1955864 = func_158(97, 38, func_1236(), -1);
			Global_1955864.f_1 = 0;
		}
		if (!Global_1955864.f_1)
		{
			if (!func_1235(0))
			{
				func_163(97, 38, joaat("BLIP_MODIFIER_LOCKED"));
				Global_1955864.f_1 = 1;
			}
		}
		else if (func_1235(0))
		{
			func_165(97, 38, joaat("BLIP_MODIFIER_LOCKED"));
			Global_1955864.f_1 = 0;
		}
	}
	else if (func_549(Global_1955864))
	{
		func_1170(&Global_1955864, 0);
	}
}

void func_472()
{
	if (Global_1415412.f_5)
	{
		if (func_575(121))
		{
			Global_1415412.f_5 = 0;
			return;
		}
		if (!func_1234())
		{
			return;
		}
		if (func_651())
		{
			return;
		}
		if (func_571())
		{
			return;
		}
		func_576(121, 0);
		func_576(131, 1);
		Global_1415412.f_6 = MISC::GET_GAME_TIMER();
		Global_1415412.f_5 = 0;
	}
	if (Global_1415412.f_6 > 0 && (MISC::GET_GAME_TIMER() - Global_1415412.f_6) > 40000)
	{
		Global_1415412.f_6 = 0;
	}
	if (func_1237(1) || Global_1415412.f_6 > 0)
	{
		if (!func_549(Global_1415412.f_3))
		{
			Global_1415412.f_3 = func_158(69, 24, func_1238(), -1);
			Global_1415412.f_4 = 0;
			if (Global_1415412.f_6 == 0)
			{
				func_576(122, 0);
			}
		}
		if (!Global_1415412.f_4)
		{
			if (!func_1237(0))
			{
				func_163(69, 24, joaat("BLIP_MODIFIER_LOCKED"));
				Global_1415412.f_4 = 1;
			}
		}
		else if (func_1237(0))
		{
			func_165(69, 24, joaat("BLIP_MODIFIER_LOCKED"));
			Global_1415412.f_4 = 0;
		}
	}
	else if (func_549(Global_1415412.f_3))
	{
		func_1170(&(Global_1415412.f_3), 0);
	}
}

void func_473()
{
	if (Global_1934051.f_118)
	{
		if (func_575(Global_1934051.f_115))
		{
			Global_1934051.f_118 = 0;
			return;
		}
		if (!func_1234())
		{
			return;
		}
		if (func_651())
		{
			return;
		}
		if (func_571())
		{
			return;
		}
		Global_1934051.f_117 += MISC::GET_GAME_TIMER();
		Global_1934051.f_118 = 0;
		func_576(Global_1934051.f_115, 0);
		func_1240(Global_1934051.f_116, func_1239(Global_1934051.f_116));
	}
	else if (Global_1934051.f_116 != -1 && func_549(Global_1914319.f_15936[Global_1934051.f_116 /*6*/]))
	{
		if ((MISC::GET_GAME_TIMER() - Global_1934051.f_117) > 0)
		{
			func_165(func_1239(Global_1934051.f_116), func_1242(func_1241(Global_1934051.f_116)), joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_165(func_1239(Global_1934051.f_116), func_1242(func_1241(Global_1934051.f_116)), joaat("BLIP_MODIFIER_RADAR_EDGE_ALWAYS"));
			Global_1934051.f_116 = -1;
			Global_1934051.f_117 = 0;
		}
	}
}

void func_474()
{
	int iVar0;

	Global_1415419.f_9717 = 0;
	iVar0 = 0;
	while (iVar0 < 248)
	{
		Global_1415419.f_19[iVar0 /*12*/].f_8 = -1;
		Global_1415419.f_19[iVar0 /*12*/].f_9 = -1;
		func_227(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 2);
		func_227(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 1);
		func_1109(&(Global_1415419.f_19[iVar0 /*12*/].f_11), 8);
		iVar0++;
	}
}

int func_475()
{
	struct<4> /*32*/ sVar0;
	var uVar5;
	var uVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;

	sVar0.f_0 = Global_1415419;
	sVar0.f_2 = 217083545;
	iVar12 = func_479();
	Global_1415419.f_9756 = iVar12;
	Global_1415419.f_9717 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		uVar5 = sVar0.f_1;
		iVar10 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar0.f_0, sVar0.f_1);
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			sVar0.f_2 = 1275853848;
			sVar0.f_3 = iVar9;
			if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
			{
				uVar6 = sVar0.f_1;
				sVar0.f_2 = -713081767;
				iVar7 = 0;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar7, &sVar0))
				{
					iVar8 = func_1243(iVar7);
					if (func_487(iVar8))
					{
						Global_1415419.f_19[iVar8 /*12*/].f_10 = uVar6;
						sVar0.f_2 = -1341709093;
						if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar11, &sVar0))
						{
							Global_1415419.f_19[iVar8 /*12*/].f_7 = uVar11;
						}
						if (iVar12 != -1)
						{
							func_1245(iVar8, &sVar0, &(Global_1415419.f_9717), func_1244(iVar12));
							sVar0.f_1 = uVar6;
						}
					}
				}
			}
			sVar0.f_1 = uVar5;
			iVar9++;
		}
	}
	return 1;
}

void func_476()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2)
		{
			if (Global_1415419.f_9721[iVar0 /*8*/] != -1)
			{
				if (Global_1415419.f_16 != Global_1415419.f_9721[iVar0 /*8*/])
				{
					if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1415419.f_9721[iVar0 /*8*/].f_1, false))
					{
						Global_1415419.f_9720--;
						Global_1415419.f_9721[iVar0 /*8*/].f_2 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_1 = 0;
						Global_1415419.f_9721[iVar0 /*8*/] = -1;
						Global_1415419.f_9721[iVar0 /*8*/].f_3 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_7 = 0;
						Global_1415419.f_9721[iVar0 /*8*/].f_4 = { 0.0f, 0.0f, 0.0f /*3*/ };
					}
				}
			}
		}
		iVar0++;
	}
}

void func_477(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1415419.f_9721[iVar0 /*8*/].f_2 && (!Global_1415419.f_9721[iVar0 /*8*/].f_3 || bParam0))
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1415419.f_9721[iVar0 /*8*/].f_1, false))
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1415419.f_9721[iVar0 /*8*/].f_1, 523);
			}
		}
		iVar0++;
	}
}

void func_478()
{
	if (Global_1415419.f_16 != -1)
	{
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[Global_1415419.f_16 /*12*/]);
		Global_1415419.f_16 = -1;
		Global_1415419.f_17 = -1;
		Global_1415419.f_2 = 0;
		Global_1415419.f_18 = 0;
		Global_1415419.f_9758 = 0;
		Global_1415419.f_9759 = 0;
		Global_1415419.f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
		Global_1415419.f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
}

int func_479()
{
	return Global_1897952.f_41;
}

bool func_480(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_481(char* sParam0, int iParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	func_1246(MISC::GET_HASH_KEY(sParam0), iParam1);
}

void func_482(struct<16> /*128*/ sParam0, int iParam16)
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
	if (!func_1247(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(sParam0.f_10))) > 0 || func_1248(&(sParam0.f_10)))
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
			func_1249(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_483(bool bParam0, bool bParam1)
{
	if (Global_1879534)
	{
		return false;
	}
	if (Global_1415419.f_6)
	{
		return true;
	}
	if (!Global_1415419.f_4)
	{
		return false;
	}
	if (bParam0)
	{
		if ((MISC::GET_GAME_TIMER() - Global_1415419.f_9719) <= 5000)
		{
			return false;
		}
	}
	if (bParam1)
	{
		if (MISC::GET_GAME_TIMER() < Global_1415419.f_7 && MISC::GET_GAME_TIMER() < Global_1415419.f_8)
		{
			return false;
		}
	}
	else if (Global_1415419.f_9718)
	{
		if (func_226(Global_1415419.f_3, 16))
		{
			return false;
		}
		if (MISC::GET_GAME_TIMER() < Global_1415419.f_8)
		{
			return false;
		}
	}
	else
	{
		if (func_226(Global_1415419.f_3, 8))
		{
			return false;
		}
		if (MISC::GET_GAME_TIMER() < Global_1415419.f_7)
		{
			return false;
		}
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	return true;
}

int func_484()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 3;
	if (!Global_1415419.f_6)
	{
		if (Global_1415419.f_9718)
		{
			if (!func_1250())
			{
				iVar0 = 0;
				iVar1 = 1;
			}
			else
			{
				iVar0 = 0;
				iVar1 = func_1252(func_1251(func_46()));
			}
		}
		else if (!func_1250())
		{
			iVar0 = 2;
			iVar1 = 3;
		}
		else
		{
			iVar0 = func_1252(func_1251(func_46()));
			iVar1 = ((func_1252(func_1251(func_46())) + func_1253(func_1251(func_46()))) - 1);
		}
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (!Global_1415419.f_9721[iVar2 /*8*/].f_2)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_485()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3[15];
	int iVar19;
	int iVar20;
	int iVar21;

	fVar2 = -1.0f;
	if (Global_1415419.f_5 != -1)
	{
		if (Global_1415419.f_6 | func_1254(Global_1415419.f_5, 0, 1))
		{
			Global_1415419.f_16 = Global_1415419.f_5;
			Global_1415419.f_5 = -1;
			return 1;
		}
		else
		{
			Global_1415419.f_9758 = 0;
			Global_1415419.f_9759 = 0;
			Global_1415419.f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
			Global_1415419.f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
			Global_1415419.f_15 = 0;
		}
		Global_1415419.f_5 = -1;
		return 0;
	}
	if (func_1255())
	{
		if (func_1256(&iVar3, func_46()))
		{
			iVar19 = 0;
			while (iVar19 < iVar3)
			{
				if (iVar3[iVar19] != -1)
				{
					if (func_226(Global_1415419.f_19[iVar3[iVar19] /*12*/].f_11, 2))
					{
						if (Global_1415419.f_19[iVar3[iVar19] /*12*/].f_3 > fVar2)
						{
							if (func_226(Global_1415419.f_19[iVar3[iVar19] /*12*/].f_11, 1))
							{
								fVar2 = Global_1415419.f_19[iVar3[iVar19] /*12*/].f_3;
								iVar1 = iVar3[iVar19];
							}
						}
					}
				}
				iVar19++;
			}
			if (fVar2 != -1.0f)
			{
				Global_1415419.f_16 = iVar1;
			}
			return 0;
		}
	}
	if (Global_1415419.f_9718)
	{
		iVar20 = 75;
		iVar21 = 247;
	}
	else
	{
		if (func_657())
		{
			iVar20 = 0;
		}
		else
		{
			iVar20 = 34;
		}
		iVar21 = 74;
	}
	iVar0 = iVar20;
	while (iVar0 <= iVar21)
	{
		if (func_226(Global_1415419.f_19[iVar0 /*12*/].f_11, 2))
		{
			if (Global_1415419.f_19[iVar0 /*12*/].f_3 > fVar2)
			{
				if (func_226(Global_1415419.f_19[iVar0 /*12*/].f_11, 1))
				{
					fVar2 = Global_1415419.f_19[iVar0 /*12*/].f_3;
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 != -1.0f)
	{
		Global_1415419.f_16 = iVar1;
	}
	else
	{
		Global_1415419.f_16 = -1;
	}
	return 0;
}

int func_486(bool bParam0, int iParam1, bool bParam2, bool bParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	float fVar6;

	iVar1 = -1;
	fVar2 = 1E+09f;
	if ((Global_1415419.f_19[bParam0 /*12*/].f_8 != -1 && Global_1415419.f_19[bParam0 /*12*/].f_9 < 960) && Global_1415419.f_19[bParam0 /*12*/].f_9 >= Global_1415419.f_19[bParam0 /*12*/].f_8)
	{
		bVar3 = func_1257(bParam0);
		bVar3 *= bVar3;
		bVar4 = func_1258(bParam0);
		bVar4 *= bVar4;
		iVar0 = Global_1415419.f_19[bParam0 /*12*/].f_8;
		while (iVar0 <= Global_1415419.f_19[bParam0 /*12*/].f_9)
		{
			*iParam1++;
			if (!func_1259(bParam0, Global_1415419.f_2996[iVar0 /*7*/]))
			{
			}
			else
			{
				fVar6 = BUILTIN::VDIST2(Global_36, Global_1415419.f_2996[iVar0 /*7*/]);
				if (bParam2 && bParam0 != 34)
				{
					iVar5 = func_1260(Global_35, Global_1415419.f_2996[iVar0 /*7*/], 1060437492);
					if (iVar5 == 1)
					{
					}
					else if (fVar6 < fVar2)
					{
						if (func_1261(Global_1415419.f_2996[iVar0 /*7*/], fVar6, (bParam0 <= 33 || bParam0 == 72), fParam4, bVar3, bVar4, bParam0))
						{
							iVar1 = iVar0;
							fVar2 = fVar6;
							if (bParam3)
							{
							}
							else
							{
								iVar0++;
							}
							return iVar1;
						}
					}
				}
			}
		}
	}
}

bool func_487(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_488(int iParam0)
{
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = func_1262();
	if (iParam0 <= 74)
	{
		Global_1415419.f_7 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1415419.f_8 = MISC::GET_GAME_TIMER();
	}
	func_823(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 12, 0, 0, 0, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_1++;
	Global_32074.f_2697++;
}

void func_489()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 14)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar3, -940661134, 0);
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar3, 1995362678, 0);
		bVar2 = func_1263(iVar1, 5);
		if (func_1264(bVar2))
		{
			if (!(func_529() && func_911() == 0))
			{
				if (!func_1265(iVar1))
				{
					if (func_1266(iVar0))
					{
						if (func_1267(bVar2, 1, 0))
						{
							MAP::_MAP_DISCOVERY_SET_ENABLED(func_1268(iVar0));
							MAP::_MAP_DISCOVER_REGION(func_1269(iVar0));
						}
						else
						{
							MAP::_MAP_DISCOVERY_SET_ENABLED(func_1269(iVar0));
							MAP::_MAP_DISCOVER_REGION(func_1268(iVar0));
						}
					}
				}
			}
		}
		iVar3++;
	}
}

void func_490()
{
	if (!Global_40.f_9045)
	{
		if (func_1270(4))
		{
			if (!func_903(40, 0) && !func_370(40))
			{
				func_1271(40, 1);
			}
			Global_40.f_9045 = func_1270(4);
		}
	}
	if (!Global_40.f_9045.f_1)
	{
		if (func_1272(8))
		{
			if ((!func_903(42, 0) && !func_370(42)) && func_679())
			{
				func_402(joaat("WS_RARE_FISH_CABIN_END"), 1, 0);
				func_1271(42, 1);
			}
			Global_40.f_9045.f_1 = func_1272(8);
		}
	}
	if (!Global_40.f_9045.f_2)
	{
		if (func_1273(4))
		{
			if (!func_903(50, 0) && !func_370(50))
			{
				func_1271(50, 1);
			}
			Global_40.f_9045.f_2 = func_1273(4);
		}
	}
	if (!Global_40.f_9045.f_3)
	{
		if (func_1274(2))
		{
			if (!func_903(51, 0) && !func_370(51))
			{
				func_1271(51, 1);
			}
			Global_40.f_9045.f_3 = func_1274(2);
		}
	}
}

void func_491()
{
	int iVar0;

	if (!Global_40.f_9045.f_4)
	{
		if (func_1275(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CAROLINA_PARAKEETS"), 0)) >= 25)
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("A_C_CAROLINAPARAKEET_01"), true);
			Global_40.f_9045.f_4 = func_1275(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CAROLINA_PARAKEETS"), 0)) >= 25;
		}
	}
}

void func_492()
{
	if ((UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_CHAL_LEGENDARY_PANTHER")) && !Global_40.f_9319[13 /*4*/].f_1) && !VOLUME::DOES_VOLUME_EXIST(Global_1425228))
	{
		Global_1425228 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1686.575f, -1973.868f, 45.094f, 0.0f, 0.0f, 0.0f, 100.0f, 100.0f, 100.0f, "Tracking Zones - volLegendaryPantherRestriction");
		func_270(Global_1425228, "Legendary Panther Restriction", 0, 0, (1 << 12), 0, -1082130432);
	}
	else if (Global_40.f_9319[13 /*4*/].f_1 && VOLUME::DOES_VOLUME_EXIST(Global_1425228))
	{
		func_1276(Global_1425228);
		VOLUME::DELETE_VOLUME(Global_1425228);
	}
	if ((func_154(15) && !Global_40.f_9319[1 /*4*/].f_1) && !VOLUME::DOES_VOLUME_EXIST(Global_1425228.f_1))
	{
		Global_1425228.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2430.609f, 515.414f, 73.861f, 0.0f, 0.0f, 0.0f, 140.0f, 140.0f, 140.0f, "Tracking Zones - volLegendaryBeaverRestriction");
		func_270(Global_1425228.f_1, "Legendary Beaver Restriction", 0, 0, (1 << 12), 0, -1082130432);
	}
	else if (Global_40.f_9319[1 /*4*/].f_1 && VOLUME::DOES_VOLUME_EXIST(Global_1425228.f_1))
	{
		func_1276(Global_1425228.f_1);
		VOLUME::DELETE_VOLUME(Global_1425228.f_1);
	}
}

void func_493()
{
	int iVar0;

	iVar0 = func_1277();
	if (iVar0 > 0 && iVar0 < 24)
	{
		if (iVar0 > Global_40.f_12019.f_45.f_1)
		{
			func_1278(7);
			Global_40.f_12019.f_45.f_1 = iVar0;
		}
		else if (func_1279(Global_40.f_12019.f_45))
		{
			if (func_793(Global_40.f_12019.f_45, 0))
			{
				func_576(340, 1);
				func_1278(30);
			}
		}
	}
}

void func_494()
{
	Global_1901328.f_90 = func_1280();
	if (func_1282(func_1281(Global_1901328.f_90)))
	{
		if (func_1284(func_1283(Global_1901328.f_90)))
		{
			if (!func_903(func_1285(Global_1901328.f_90), 0) && !func_370(func_1285(Global_1901328.f_90)))
			{
				func_1271(func_1285(Global_1901328.f_90), 0);
			}
			func_576(358, 1);
			func_1286(func_1281(Global_1901328.f_90));
		}
		else
		{
			func_1286(func_1281(Global_1901328.f_90));
		}
	}
}

void func_495(var uParam0)
{
	uParam0->f_1 = TASK::_0xE1C105E6BBA48270();
	uParam0->f_11 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_10 = 0;
	*uParam0 = 0;
	uParam0->f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_2 = 0;
}

void func_496(var uParam0)
{
	int iVar0;

	func_1287();
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, joaat("WEAPON_FISHINGROD"), 0, false))
	{
		return;
	}
	func_1288(uParam0);
	iVar0 = func_1289(0);
	if (Global_1900073.f_17 == 1)
	{
		if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(iVar0, joaat("WEAPON_FISHINGROD"), false))
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar0, joaat("WEAPON_FISHINGROD"));
		}
	}
	else if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(iVar0, joaat("WEAPON_FISHINGROD"), false))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(iVar0, joaat("WEAPON_FISHINGROD"), -1323131777);
	}
}

void func_497(var uParam0)
{
	int iVar0;
	Vector3 vVar1;

	if (((((Global_1900073.f_17 == 0 || func_273()) || func_657()) || func_554()) || !CAM::IS_SCREEN_FADED_IN()) || !STREAMING::HAS_PTFX_ASSET_LOADED())
	{
		func_498(uParam0);
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_587(uParam0->f_13[iVar0 /*9*/].f_1))
		{
			if (func_970(&(uParam0->f_13[iVar0 /*9*/].f_5)) > (float)uParam0->f_13[iVar0 /*9*/].f_4 || func_503(Global_36, uParam0->f_13[iVar0 /*9*/].f_1) > uParam0->f_3)
			{
				func_1290(&(uParam0->f_13[iVar0 /*9*/]));
			}
		}
		iVar0++;
	}
	*uParam0 = func_1291(uParam0);
	if (*uParam0 == -1)
	{
		return;
	}
	if (!AUDIO::PREPARE_SOUNDSET(uParam0->f_12, true))
	{
		return;
	}
	vVar1 = { func_1292(uParam0) /*3*/ };
	if (func_587(vVar1))
	{
		return;
	}
	vVar1 = { func_1293(vVar1) /*3*/ };
	if (func_587(vVar1))
	{
		return;
	}
	vVar1.f_2 = (vVar1.z + uParam0->f_5);
	func_1294(uParam0, vVar1);
}

void func_498(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_1290(&(uParam0->f_13[iVar0 /*9*/]));
		iVar0++;
	}
	*uParam0 = 0;
}

void func_499()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1295(Global_1897952.f_41);
	iVar1 = func_1296(Global_1894899.f_2);
	iVar2 = func_1297(Global_1894899.f_3);
	if (func_1298(Global_1894899.f_2) && !func_663(45))
	{
		iVar1 = 0;
	}
	if (func_1299(Global_1894899.f_3) && !func_663(45))
	{
		iVar2 = -1;
	}
	iVar3 = 0;
	if (func_112() != -1)
	{
		iVar3 = 1;
	}
	if ((((iVar1 == Global_1898077.f_9 && iVar2 == Global_1898077.f_10) && iVar0 == Global_1898077.f_11) && iVar3 == Global_1898077.f_7) && !Global_1898077)
	{
		return;
	}
	Global_1898077.f_11 = iVar0;
	Global_1898077.f_10 = iVar2;
	Global_1898077.f_9 = iVar1;
	Global_1898077.f_7 = iVar3;
	Global_1898077 = 0;
	if (Global_1898077.f_1 == 4)
	{
		func_1300(Global_1898077.f_7, Global_1898077.f_12);
	}
	else if (Global_1898077.f_1 == 2)
	{
		func_1301(Global_1898077.f_7, Global_1898077.f_3);
	}
	else if (Global_1898077.f_1 == 1)
	{
		func_1302(Global_1898077.f_6);
	}
	else if (Global_1898077.f_1 == 5)
	{
		func_1303(Global_1898077.f_7, Global_1898077.f_4);
	}
	else if (Global_1898077.f_10 != -1)
	{
		func_1304(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_10);
	}
	else if (Global_1898077.f_9 != -1 && iVar1 != 0)
	{
		func_1304(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	else if (Global_1898077.f_11 != -1)
	{
		func_1304(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_11);
	}
}

void func_500()
{
	struct<4> /*32*/ sVar0;

	if (func_1305() >= 1 && func_1305() < 6)
	{
		POPULATION::_0xF45E46DEECF7DF6E((1 << 12), 0, 0, -1, -1);
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	switch (func_1305())
	{
		case 0:
			if (func_1306())
			{
				if (!func_456(&(Global_0.f_9)))
				{
					func_457(&(Global_0.f_9), 0);
				}
			}
			else if (func_456(&(Global_0.f_9)))
			{
				func_462(&(Global_0.f_9));
			}
			if (func_456(&(Global_0.f_9)))
			{
				if (func_458(&(Global_0.f_9)) >= 10.0f)
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					func_1307(1);
				}
			}
			break;
		case 1:
			if (CAM::IS_SCREEN_FADED_OUT() && !ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				PLAYER::FORCE_CLEANUP(2);
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
				HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				Global_0.f_12 = PED::GET_MOUNT(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
				}
				else
				{
					Global_0.f_12 = PED::_GET_LAST_MOUNT(Global_35);
					if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
					{
						if (BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(Global_0.f_12, true, false)) > 50.0f)
						{
							Global_0.f_12 = 0;
						}
						else
						{
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, true);
						}
					}
				}
				Global_0.f_13 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					PED::DETACH_CARRIABLE_ENTITY(Global_0.f_13, false, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, true);
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, 797.0328f, 1780.719f, 279.8931f, 6.2684f, true, false, true);
				func_505(0, -1);
				Global_0.f_8 = ANIMSCENE::_CREATE_ANIM_SCENE("script@story@fin3@arthurs_grave", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(Global_0.f_8);
				UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ARTHURS_GRAVE_SCENE"), true);
				func_1307(2);
			}
			break;
		case 2:
			if (!func_504(&Global_0, 3) || func_458(&(Global_0.f_9)) >= 15.0f)
			{
				func_1307(3);
			}
			break;
		case 3:
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_0.f_8, true, false))
			{
				if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(Global_0.f_8, "JOHN", &sVar0, false, 0, 2))
				{
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), sVar0, sVar0.f_3.f_2, true, true, true, false);
					func_1307(4);
				}
				else
				{
					ANIMSCENE::GET_ANIM_SCENE_ORIGIN(Global_0.f_8, &sVar0, &(sVar0.f_9), 2);
					PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), sVar0, sVar0.f_3.f_2, true, true, true, false);
					func_1307(4);
				}
			}
			break;
		case 4:
			if ((!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::UPDATE_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX())) || func_458(&(Global_0.f_9)) >= 15.0f)
			{
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_12))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_12, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_12, 806.1718f, 1780.41f, 280.762f, 27.8989f, true, false, true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_0.f_12, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Global_0.f_13))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Global_0.f_13, false);
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_0.f_13, 804.3274f, 1779.618f, 280.7979f, 29.0898f, true, false, true);
					ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_0.f_13, false);
				}
				CAM::DO_SCREEN_FADE_IN(1000);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_0.f_8, "JOHN", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(Global_0.f_8);
				func_1307(5);
			}
			break;
		case 5:
			if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(Global_0.f_8, false))
			{
				PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
				HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
				if (func_400(joaat("WS_GRAVE_ARTHUR_GOOD")))
				{
					func_1308(joaat("JOURNAL_ENTRY_100_PERCENT_HIGH"), 0);
				}
				else
				{
					func_1308(joaat("JOURNAL_ENTRY_100_PERCENT_LOW"), 0);
				}
				func_1309(0);
				func_1307(6);
			}
			break;
		case 6:
			break;
	}
}

bool func_501()
{
	if (Global_1572887.f_12 == -1)
	{
		if (!func_529())
		{
			return false;
		}
		else if (!func_154(0))
		{
			return false;
		}
		else if (func_1310())
		{
			return false;
		}
	}
	if (!Global_21 & 64 != 0)
	{
		return false;
	}
	if (func_185(32898))
	{
		return false;
	}
	if (func_127(Global_1572864.f_8))
	{
		return false;
	}
	if (Global_1572864.f_21 != 0)
	{
		return false;
	}
	if (func_504(&Global_0, 32))
	{
		if (func_504(&Global_0, 2))
		{
			return true;
		}
		if (func_504(&Global_0, 64))
		{
			return true;
		}
	}
	if (func_114(0, 1, 1))
	{
		return false;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 0))
	{
		return false;
	}
	if (DLC::GET_IS_LOADING_SCREEN_ACTIVE())
	{
		return false;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return false;
	}
	if (func_1311() != 2 && func_1311() != 3)
	{
		return false;
	}
	if (func_438())
	{
		return false;
	}
	return true;
}

void func_502(var uParam0)
{
	uParam0->f_2 = 0;
}

float func_503(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_504(var uParam0, int iParam1)
{
	return uParam0->f_2 & iParam1 != 0;
}

void func_505(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1312(&Global_0, 8);
	}
	if (!func_529() || func_112() != -1)
	{
		return;
	}
	func_1312(&Global_0, 1);
}

void func_506(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_185((1 << 15)))
	{
		return;
	}
	if (!func_185((1 << 15)))
	{
		func_1313(1, bParam1);
	}
	MISC::_QUEUE_SAVEGAME_OPERATION(iParam0);
	MISC::_COPY_MEMORY(&(Global_2621440[iParam0 /*12066*/]), &Global_40, 12066);
	MISC::_COPY_MEMORY(&(Global_2645573[iParam0 /*5398*/]), &Global_12106, 5398);
	MISC::_COPY_MEMORY(&(Global_2656370[iParam0 /*3206*/]), &Global_17504, 3206);
	MISC::_COPY_MEMORY(&(Global_2662783[iParam0 /*2408*/]), &Global_20710, 2408);
	MISC::_COPY_MEMORY(&(Global_2667600[iParam0 /*1769*/]), &Global_23118, 1769);
	MISC::_COPY_MEMORY(&(Global_2671139[iParam0 /*1909*/]), &Global_24887, 1909);
	MISC::_COPY_MEMORY(&(Global_2674958[iParam0 /*777*/]), &Global_26796, 777);
	MISC::_COPY_MEMORY(&(Global_2676513[iParam0 /*4501*/]), &Global_27573, 4501);
	MISC::_COPY_MEMORY(&(Global_2685516[iParam0 /*4234*/]), &Global_32074, 4234);
	if (func_185((1 << 15)))
	{
		Global_2621440[iParam0 /*12066*/].f_9.f_14 = func_538();
	}
}

void func_507(var uParam0, int iParam1)
{
	uParam0->f_2 -= uParam0->f_2 & iParam1;
}

int func_508()
{
	if (!func_504(&Global_0, 2))
	{
		if (Global_1572887.f_10)
		{
			func_507(&Global_0, 1);
			return 0;
		}
		if (!func_529())
		{
			func_507(&Global_0, 1);
			return 0;
		}
		if (func_127(func_539(0)))
		{
			return 0;
		}
		if (Global_1879534)
		{
			return 0;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_362(Global_1935630, (1 << 11)) || func_185(38))
		{
			return 0;
		}
		if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
		{
			return 0;
		}
		if (SAVE::SAVEGAME_IS_SAVE_PENDING())
		{
			return 0;
		}
		if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39))
		{
			return 0;
		}
		if (Global_40.f_7729 != Global_1905941)
		{
			return 0;
		}
		if (func_504(&Global_0, 16))
		{
			func_507(&Global_0, 16);
			return 0;
		}
		if (Global_1914319.f_18941.f_17)
		{
			return 0;
		}
		if (STREAMING::_0x99F92061EFE908BA())
		{
			return 0;
		}
		func_1314(0);
	}
	if (SAVE::SAVEGAME_IS_SAVE_PENDING())
	{
		return 0;
	}
	if (MISC::_GET_STATUS_OF_SAVEGAME_OPERATION(0) == 1)
	{
		return 0;
	}
	func_506(0, 0);
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 /*3*/ };
	Global_0.f_14 = 0;
	func_1312(&Global_0, 4);
	func_507(&Global_0, 2);
	func_507(&Global_0, 32);
	func_507(&Global_0, 64);
	return 1;
}

void func_509()
{
	if (AUDIO::AUDIO_IS_MUSIC_PLAYING())
	{
		Global_0.f_1 = -1;
		return;
	}
	func_507(&Global_0, 8);
	Global_0.f_1 = -1;
}

bool func_510(int iParam0, int iParam1)
{
	return iParam0 & iParam1 > 0;
}

void func_511(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_512()
{
	int iVar0;

	if (func_127(Global_1898437) && func_377(Global_1898437) == 1)
	{
		iVar0 = func_519(Global_1898437);
		if ((func_131(iVar0) && SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[iVar0 /*74*/].f_22))) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_22))) > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_513()
{
	return func_362(Global_1935630, (1 << 12));
}

int func_514(int iParam0)
{
	if (!func_131(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

char[] func_515(int iParam0)
{
	char[] cVar0[8];

	if (!func_127(iParam0))
	{
		return cVar0;
	}
	switch (func_377(iParam0))
	{
		case 1:
			cVar0 = Global_1835011[func_1315(iParam0) /*74*/].f_8;
			break;
		case 8:
			cVar0 = Global_1347702[func_519(iParam0) /*49*/].f_3;
			break;
		case 11:
			if (iParam0 == func_311(0, 10, 11, joaat("CABR01")))
			{
				strcpy_s(&cVar0, 8, "CABR01");
			}
			break;
	}
	return cVar0;
}

void func_516(char[4] cParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1879514.f_11)
	{
		iVar0 = func_1316();
		iVar1 = MISC::GET_HASH_KEY(&cParam0);
		if (MISSIONDATA::MISSIONDATA_GET_RATING(iVar1) != 5 && iVar0 == 5)
		{
			if (func_377(Global_1879514.f_1) == 1)
			{
				func_1317(5, 1);
			}
			else if (func_377(Global_1879514.f_1) == 8 && (func_520(Global_1347702[func_519(Global_1879514.f_1) /*49*/].f_12, 1) || func_520(Global_1347702[func_519(Global_1879514.f_1) /*49*/].f_12, (1 << 25))))
			{
				func_1317(5, 1);
			}
		}
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&cParam0), iVar0);
	}
	else
	{
		MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(MISC::GET_HASH_KEY(&cParam0), 3);
	}
}

void func_517(int iParam0)
{
	Global_1879514 = iParam0;
}

bool func_518(int iParam0)
{
	return iParam0 != 0;
}

int func_519(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_1318(func_559(iParam0));
}

bool func_520(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_521()
{
	int iVar0;

	if ((func_377(Global_1879514.f_1) != 8 && func_377(Global_1879514.f_1) != 1) && (func_377(Global_1879514.f_1) == 11 && Global_1879514.f_1 != func_311(0, 10, 11, joaat("CABR01"))))
	{
		return false;
	}
	iVar0 = func_1319(Global_1879514.f_1);
	if (func_1320(iVar0))
	{
		return true;
	}
	return false;
}

void func_522()
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];
	int iVar3;
	char cVar4[64];

	if (!Global_1879514.f_11)
	{
		iVar1 = func_1316();
	}
	else
	{
		iVar1 = 3;
	}
	switch (iVar1)
	{
		case 5:
			if (Global_1879514.f_12)
			{
				iVar0 = 2037639424;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -1124518777;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -1124518777;
			}
			else
			{
				iVar0 = joaat("TOAST_MEDAL_GOLD");
			}
			break;
		case 4:
			if (Global_1879514.f_12)
			{
				iVar0 = 1343627222;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -2060979717;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -2060979717;
			}
			else
			{
				iVar0 = joaat("TOAST_MEDAL_SILVER");
			}
			break;
		case 0:
			if (Global_1879514.f_12)
			{
				iVar0 = 68997297;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = -1523540536;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = -1523540536;
			}
			else
			{
				iVar0 = 1249997984;
			}
			break;
		default:
			if (Global_1879514.f_12)
			{
				iVar0 = -1241747389;
			}
			else if (Global_1879514.f_14)
			{
				iVar0 = 562132112;
			}
			else if (Global_1879514.f_15)
			{
				iVar0 = 562132112;
			}
			else
			{
				iVar0 = joaat("TOAST_MEDAL_BRONZE");
			}
			break;
	}
	cVar2 = func_515(Global_1879514.f_1);
	iVar3 = MISC::GET_HASH_KEY(&cVar2);
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar3);
	func_516(cVar2);
	strcpy_s(&cVar4, 64, "MISSION_COMPLETE_DETAILS");
	if (Global_1879514.f_1 == func_514(1))
	{
		strcpy_s(&cVar4, 64, "MISSION_COMPLETE_DETAILS_WNT1");
	}
	Global_1879514.f_17 = func_1321("MISSION_COMPLETE", &cVar2, joaat("HUD_TOASTS"), iVar0, joaat("PLAYER_MENU"), &cVar4, joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
	Global_1879514.f_7 = MISC::GET_GAME_TIMER();
}

void func_523(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_185((1 << 15)))
	{
		return;
	}
	func_1322(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, joaat("ADD_REASON_DEFAULT"));
	if (bParam2)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER")))
		{
			Global_1879514.f_12 = 1;
		}
		else
		{
			Global_1879514.f_12 = 0;
		}
		func_1323(iParam0, iParam1, fParam3, iParam4);
	}
}

bool func_524(int iParam0)
{
	int iVar0;

	if (func_518(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

void func_525()
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = -1;
	MISC::_COPY_MEMORY(&Global_1879514, &sVar0, 20);
}

bool func_526()
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

void func_527(int iParam0)
{
	VOLUME::_0x748C5F51A18CB8F0(0);
	func_1324(iParam0);
	func_1325(iParam0);
	func_1326(iParam0);
	VOLUME::_0x748C5F51A18CB8F0(1);
	if (iParam0 == 4)
	{
		func_1327();
	}
	else if (iParam0 == 22)
	{
		func_1328();
	}
	else if (iParam0 == 27)
	{
		if (!func_1329(26, 64))
		{
			func_1330(26, 64);
			func_1331(26, 0);
			func_1332(26);
		}
	}
	else if (iParam0 == 28)
	{
		if (!func_400(joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER")))
		{
			func_1094(joaat("WS_GRAND_KORRIGAN_HIDE_ON_WATER"));
		}
		if (!func_400(joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED")))
		{
			func_1094(joaat("WS_GRAND_KORRIGAN_SHOW_DOCKED"));
		}
	}
	else if (iParam0 == 43)
	{
		func_1333();
	}
	else if (iParam0 == 96)
	{
		if (iParam0 == func_606())
		{
		}
		else
		{
			func_1334();
		}
	}
	else if (iParam0 == 97)
	{
		func_1335(0);
	}
	else if (iParam0 == 112)
	{
		func_1336(0);
	}
}

int func_528(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_519(iParam0);
	if (!func_141(iVar0))
	{
		return 0;
	}
	if (!func_1337(iVar0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (Global_1310720.f_6 == 0)
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 0;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		func_1338(iVar0);
		func_1339(iVar0);
	}
	if (func_1340(iVar0))
	{
		if (func_1341(iVar0))
		{
			func_1342(iVar0);
			return 1;
		}
	}
	return 0;
}

bool func_529()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_530(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_531()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = 0;
	bVar3 = func_112() == -1;
	iVar1 = 0;
	while (iVar1 < Global_1898329)
	{
		if (func_127(Global_1898330[iVar1]) && func_246(Global_1898330[iVar1]))
		{
			if (Global_1898346[iVar1 /*6*/].f_3 == 4)
			{
				if (bVar3)
				{
					iVar0 = Global_1898346[iVar1 /*6*/].f_5;
					if (func_581(iVar0, 0))
					{
						iVar2++;
					}
				}
			}
		}
		iVar1++;
	}
	if (iVar2 > 0)
	{
	}
}

void func_532(var uParam0, int iParam1)
{
	func_1343(uParam0, iParam1);
}

void func_533(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_131(iParam0))
	{
		return;
	}
	if (func_536(&(Global_1835011[iParam0 /*74*/]), (1 << 13)))
	{
		bVar0 = true;
	}
	Global_1835011[iParam0 /*74*/].f_63 = 0;
	if (!bParam1 && bVar0)
	{
		Global_1835011[iParam0 /*74*/].f_63 |= 2;
		Global_1835011[iParam0 /*74*/].f_63 |= (1 << 13);
	}
}

void func_534(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	if (!func_577(iParam1))
	{
		iParam1 = func_430(func_514(iParam0));
		if (!func_577(iParam1))
		{
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		if ((bParam2 || bParam6) && (!func_572(iParam0, -1) || Global_1835011[iParam0 /*74*/].f_70))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
		}
		else
		{
			if (func_650())
			{
				if (MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
				{
					if (Global_1835011[iParam0 /*74*/].f_27 == Global_1905944.f_5698)
					{
						func_1344(1);
					}
				}
			}
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1835011[iParam0 /*74*/].f_27));
			if (func_572(iParam0, -1) && func_561(iParam0))
			{
				func_565(iParam0, fParam5, iParam1, bParam2, 1);
				func_537(&(Global_1835011[iParam0 /*74*/]), 2);
			}
		}
	}
	else if ((bParam2 && !func_567(iParam0)) && !Global_43891)
	{
		func_565(iParam0, fParam5, iParam1, bParam2, 1);
	}
	if (func_134(iParam1, 48))
	{
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1835011[iParam0 /*74*/].f_12));
	}
	if ((SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false) && !func_153(iParam0)) && !func_134(iParam1, (1 << 10)))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
	}
	if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
	{
		GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
	}
	if (bParam4)
	{
		func_129(Global_1835011[iParam0 /*74*/].f_1);
	}
	else
	{
		func_563(iParam1, 3831);
	}
	Global_1835011[iParam0 /*74*/].f_73 = 0;
}

void func_535(int iParam0)
{
	var uVar0;

	MemCopy(&uVar0, {Global_1835011[iParam0 /*74*/].f_3}, 3);
	if ((func_112() != -1 && !MISC::IS_STRING_NULL_OR_EMPTY(&uVar0)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_7, false))
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(Global_1835011[iParam0 /*74*/].f_7);
	}
}

bool func_536(var uParam0, int iParam1)
{
	return uParam0->f_63 & iParam1 != 0;
}

void func_537(var uParam0, int iParam1)
{
	uParam0->f_63 |= iParam1;
}

int func_538()
{
	return Global_1899515;
}

int func_539(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_540(int iParam0, bool bParam1, int iParam2)
{
	if (func_446(Global_1392626[iParam0 /*32*/].f_3))
	{
		return;
	}
	if (bParam1)
	{
		func_785(iParam0);
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		if (iParam2 == 1)
		{
			func_1345(iParam0);
		}
		func_1346(&(Global_1392626[iParam0 /*32*/].f_11), 1, 0, 1);
		Global_1392626[iParam0 /*32*/].f_11 = 0;
	}
	func_791(&(Global_1392626[iParam0 /*32*/].f_9), 1);
	if (!func_796(Global_1392626[iParam0 /*32*/].f_8, 1))
	{
		func_786(&(Global_1392626[iParam0 /*32*/].f_8), 1);
	}
	func_791(&(Global_1392626[iParam0 /*32*/].f_9), 2);
}

int func_541(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_542(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_141(iParam0))
	{
		return;
	}
	if (iParam2 == 1)
	{
		func_1347(iParam0);
	}
	if (func_142(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		func_544(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	if (func_520(Global_1347702[iParam0 /*49*/].f_12, (1 << 10)))
	{
		func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 10));
	}
	if (iParam1 == 1)
	{
		func_543(iParam0, 0);
	}
	func_1349(iParam0);
	if (iParam3 == 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1347702[iParam0 /*49*/].f_42, iParam4);
		}
		else
		{
			Global_1347702[iParam0 /*49*/].f_43 = 0;
		}
	}
}

void func_543(int iParam0, bool bParam1)
{
	if (!func_141(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		func_1350(&(Global_1347702[iParam0 /*49*/].f_14));
		func_544(&(Global_1347702[iParam0 /*49*/].f_13), 16);
		func_1351(iParam0);
		if ((!func_118(PLAYER::PLAYER_ID(), 1, 0, 1) || Global_43891) || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1347702[iParam0 /*49*/].f_40, false);
			func_544(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 12));
			func_802(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		else
		{
			func_1352(iParam0, (1 << 14));
			func_1353(iParam0, 1, func_609(iParam0));
		}
	}
}

void func_544(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_545()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case joaat("FLOW_DO_MISSION_AT_BLIP"):
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2;
						if (func_131(iVar1))
						{
							func_533(iVar1, 0);
							func_534(iVar1, -1, 0, 1, 0, 0, 0);
							if (MAP::DOES_BLIP_EXIST(Global_1835011[iVar1 /*74*/].f_27))
							{
								MAP::REMOVE_BLIP(&(Global_1835011[iVar1 /*74*/].f_27));
							}
						}
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_546()
{
	Global_1898164.f_164 = func_114(0, 1, 0);
}

bool func_547(int iParam0)
{
	if (iParam0 <= -1 || iParam0 > 54)
	{
		return false;
	}
	return true;
}

int func_548(int iParam0)
{
	Vector3 vVar0;

	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392581, false))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT("trainrobbery_ambient");
	if (SCRIPTS::HAS_SCRIPT_LOADED("trainrobbery_ambient"))
	{
		if (func_226(Global_1392581.f_3, 16))
		{
			vVar0.x = 14;
		}
		else
		{
			vVar0.x = func_313(Global_36, 1);
		}
		vVar0.f_1 = Global_1898330[iParam0];
		if (ENTITY::DOES_ENTITY_EXIST(Global_1392581.f_44))
		{
			vVar0.f_2 = Global_1392581.f_44;
		}
		Global_1392581 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS("trainrobbery_ambient", &vVar0, 3, 2300);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED("trainrobbery_ambient");
		func_129(vVar0.y);
		return 1;
	}
	return 0;
}

bool func_549(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_550(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}
	return true;
}

bool func_551(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_552(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return { -2578.509f, 389.3037f, 148.3825f };
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_553()
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70.0f;
	}
	return 25.0f;
}

bool func_554()
{
	return Global_1894899 & 2 != 0;
}

bool func_555()
{
	return SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("DOC_PLAYER_JOURNAL")) > 0;
}

bool func_556()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
	{
		return true;
	}
	return false;
}

int func_557(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		return func_1354(Global_1359489.f_4);
	}
	PED::GET_GROUP_SIZE(func_1355(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = PED::GET_PED_AS_GROUP_MEMBER(func_1355(), iVar3);
		if (func_1356(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

int func_558(int iParam0)
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

int func_559(int iParam0)
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

void func_560(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_1024(iParam0);
	*uParam1 = func_1318(iParam0);
	*uParam2 = func_1357(iParam0);
}

bool func_561(int iParam0)
{
	return Global_1835011[iParam0 /*74*/].f_63 & 64512 != 0;
}

bool func_562(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1358(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

void func_563(int iParam0, int iParam1)
{
	if (!func_577(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 -= Global_1898346[iParam0 /*6*/].f_1 & iParam1;
}

Vector3 func_564(int iParam0)
{
	if (func_562(iParam0))
	{
		return func_1359(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_565(int iParam0, float fParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_185((1 << 15)))
	{
		return false;
	}
	iVar0 = func_112();
	if ((bParam4 && func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 9))) && !func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 10)))
	{
		if (func_650())
		{
			return false;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return false;
	}
	if (!func_1360(iParam0))
	{
		return false;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_447(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_1005()) <= 2000)
			{
				return false;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_447(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_1005()) <= 2000)
			{
				return false;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_447(Global_1347702[62 /*49*/].f_15, 1))
			{
				return false;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		bVar3 = Global_1835011[iParam0 /*74*/].f_70;
		if (func_572(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_536(&(Global_1835011[iParam0 /*74*/]), 2))
			{
				if (func_562(iParam0))
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_1359(iParam0));
					bVar2 = true;
				}
				else
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_564(iParam0));
				}
			}
			else if (func_562(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(joaat("BLIP_STYLE_MISSION"), func_1359(iParam0), func_1361(iParam0), func_1362(iParam0));
				bVar2 = true;
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION"), func_1363(iParam0), func_1364(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_562(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_573(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_1359(iParam0));
				bVar2 = true;
			}
		}
		else if (func_619(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), func_564(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_564(iParam0));
			}
		}
		else
		{
			Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_564(iParam0));
		}
		Global_1835011[iParam0 /*74*/].f_28 = joaat("BLIP_STYLE_MISSION");
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_562(iParam0))
			{
				func_617(iParam2, (1 << 22));
			}
			else
			{
				func_563(iParam2, (1 << 22));
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*74*/].f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		return false;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*74*/].f_27, Global_1835011[iParam0 /*74*/].f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME_FROM_PLAYER_STRING(Global_1835011[iParam0 /*74*/].f_27, &(Global_1835011[iParam0 /*74*/].f_39));
		}
		if (!func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 10)) && !func_619(iParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_570(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 10));
		}
	}
	if (iVar0 != -1)
	{
		return true;
	}
	if (!func_619(iParam0))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
	}
	if (bParam3 || func_536(&(Global_1835011[iParam0 /*74*/]), 2))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	}
	iVar4 = func_623(Global_40.f_4283);
	if (func_47(iVar4) && func_549(Global_1888801[iVar4 /*35*/].f_13))
	{
		bVar5 = true;
		bVar6 = func_124(iVar4);
	}
	if (func_133(iParam0, bVar5, iVar4))
	{
		func_146(Global_1835011[iParam0 /*74*/].f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_575(579))
	{
		func_625(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return true;
	}
	if (((((((func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 12)) && !func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 13))) && (float)func_1005() >= 10.0f) && !Global_1935630.f_12) && !Global_16) && !func_1365(Global_35, joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!func_572(iParam0, iVar0) || (fParam1 >= (func_574(iParam0) * func_574(iParam0)) && !Global_1835011[iParam0 /*74*/].f_70))
		{
			MemCopy(&cVar7, {Global_1835011[iParam0 /*74*/].f_8}, 2);
			strcat_s(&cVar7, 16, "_FIRST");
			func_220(&cVar7, 10000, 0, 0, 0, 1);
			func_570(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 13));
		}
	}
	return true;
}

Vector3 func_566(int iParam0)
{
	return func_564(iParam0);
}

bool func_567(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

void func_568(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	struct<4> /*32*/ sVar3;
	bool bVar7;
	bool bVar8;
	struct<2> /*16*/ sVar9;
	bool bVar12;
	int iVar13;
	int iVar14;
	Vector3 vVar16;

	if (Global_12106[Global_1835011[iParam0 /*74*/].f_1 /*7*/].f_1 == 2)
	{
		return;
	}
	bVar0 = false;
	if (Global_1898346[iParam1 /*6*/].f_1 & 1 != 0)
	{
		bVar1 = true;
	}
	fVar2 = BUILTIN::VDIST2(func_564(iParam0), Global_36);
	if (!Global_1835011[iParam0 /*74*/].f_71)
	{
		if (!bVar1)
		{
			if (func_1366(iParam0, fVar2, bVar0))
			{
				if (func_565(iParam0, fVar2, iParam1, 0, 1))
				{
					func_617(iParam1, 1);
				}
			}
			else if (!bVar0 && (iParam0 == 18 || iParam0 == 44))
			{
				if (fVar2 >= (Global_1835011[iParam0 /*74*/].f_67 * Global_1835011[iParam0 /*74*/].f_67))
				{
					func_617(iParam1, 1);
				}
			}
			else if (bVar0)
			{
				if (func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 11)) || func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 15)))
				{
					func_617(iParam1, 1);
				}
			}
		}
		else if (!bVar0)
		{
			if (((iParam0 == 18 && func_370(21)) || (iParam0 == 44 && func_370(83))) && !MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
			{
				func_565(iParam0, fVar2, iParam1, 0, 1);
			}
		}
	}
	else
	{
		if (Global_1898346[iParam1 /*6*/].f_1 & 1 == 0)
		{
			func_617(iParam1, 1);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iParam1 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iParam1 /*6*/]));
		}
	}
	sVar3 = { Global_1835011[iParam0 /*74*/].f_12 /*4*/ };
	if (!bVar1)
	{
		return;
	}
	if (!bVar0)
	{
		if (Global_1835011[iParam0 /*74*/].f_17 && func_529())
		{
			bVar7 = SCRIPTS::DOES_THREAD_EXIST(Global_1835011[iParam0 /*74*/].f_16);
			if (bVar7)
			{
				if (fVar2 > (Global_1835011[iParam0 /*74*/].f_66 * Global_1835011[iParam0 /*74*/].f_66) && Global_1898346[iParam1 /*6*/].f_1 & 256 == 0)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1835011[iParam0 /*74*/].f_16, 1);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&sVar3);
					func_563(iParam1, 212);
				}
			}
			else if (!bParam3)
			{
				if (Global_1898346[iParam1 /*6*/].f_1 & 16 != 0)
				{
					bVar8 = true;
				}
				if ((bVar8 || fVar2 < (Global_1835011[iParam0 /*74*/].f_65 * Global_1835011[iParam0 /*74*/].f_65)) || Global_1898346[iParam1 /*6*/].f_1 & 256 != 0)
				{
					if (!bVar8)
					{
						SCRIPTS::REQUEST_SCRIPT(&sVar3);
						func_617(iParam1, 16);
					}
					if (SCRIPTS::HAS_SCRIPT_LOADED(&sVar3))
					{
						sVar9.f_1 = -1;
						sVar9.f_0 = iParam0;
						Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&sVar3, &sVar9, 3, 6000);
						SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&sVar3);
						func_563(iParam1, 16);
					}
				}
			}
		}
		return;
	}
	if (Global_1835011[iParam0 /*74*/].f_17)
	{
		if (Global_1898346[iParam1 /*6*/].f_1 & 64 != 0)
		{
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1835011[iParam0 /*74*/].f_16))
			{
				func_563(iParam1, 196);
			}
		}
		else if (Global_1898346[iParam1 /*6*/].f_1 & 32 != 0)
		{
			if (!SCRIPTS::HAS_SCRIPT_LOADED(&sVar3))
			{
				func_563(iParam1, 32);
				return;
			}
			bVar12 = func_1367(iParam0);
			if ((fVar2 < (Global_1835011[iParam0 /*74*/].f_65 * Global_1835011[iParam0 /*74*/].f_65) || func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 15))) || bVar12)
			{
				iVar13 = 0;
				if (func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 17)))
				{
					SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
					iVar13 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
					while (iVar13 != 0)
					{
						if (SCRIPTS::_GET_HASH_OF_THREAD(iVar13) == joaat("MP_INTRO"))
						{
						}
						else
						{
							iVar13 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
						}
					}
				}
				if (SCRIPTS::DOES_THREAD_EXIST(iVar13) && SCRIPTS::IS_THREAD_ACTIVE(iVar13, false))
				{
					Global_1835011[iParam0 /*74*/].f_16 = iVar13;
				}
				else if (func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 16)))
				{
					iVar14 = iParam0;
					Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&sVar3, &iVar14, 2, 63250);
				}
				else
				{
					vVar16.f_1 = -1;
					vVar16.x = iParam0;
					if (bVar12)
					{
						func_1368(&(vVar16.f_2), 0);
					}
					Global_1835011[iParam0 /*74*/].f_16 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&sVar3, &vVar16, 3, 6000);
				}
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&sVar3);
				func_617(iParam1, 64);
				func_563(iParam1, 32);
			}
		}
		else
		{
			SCRIPTS::REQUEST_SCRIPT(&sVar3);
			func_617(iParam1, 16);
			if (SCRIPTS::HAS_SCRIPT_LOADED(&sVar3))
			{
				func_617(iParam1, 32);
				func_563(iParam1, 16);
			}
		}
	}
}

bool func_569(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = *uParam0 & iParam1;
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_570(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_571()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_572(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_562(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}
	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}
	return false;
}

Vector3 func_573(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return { 880.67f, 1267.78f, 233.66f };
		default:
			break;
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_574(int iParam0)
{
	return (func_1364(iParam0) / 2.0f);
}

bool func_575(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_112() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_576(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_775(iParam0, &iVar0, &iVar1);
	if (!func_1369(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1370(iVar0, iVar1);
}

bool func_577(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

bool func_578(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_579(int iParam0)
{
	int iVar0;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_446(func_422(iVar0)))
	{
		return true;
	}
	return false;
}

int func_580(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return Global_1899528.f_11[iParam0];
}

bool func_581(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_427(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	if (func_1371(iParam0))
	{
		return true;
	}
	func_1372(iParam0);
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_7))
	{
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_7);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		VOLUME::DELETE_VOLUME(Global_1392915.f_121[iVar0 /*20*/].f_8);
	}
	Global_1392915.f_121[iVar0 /*20*/].f_1 = 0;
	func_582(iVar0);
	iVar2 = func_430(Global_1392915[iVar0 /*12*/].f_4);
	if (iVar2 != -1)
	{
		if (iParam1 == 1)
		{
			func_129(Global_1392915[iVar0 /*12*/].f_4);
		}
		if (MAP::DOES_BLIP_EXIST(Global_1898346[iVar2 /*6*/]))
		{
			MAP::REMOVE_BLIP(&(Global_1898346[iVar2 /*6*/]));
		}
		func_617(iVar2, 0);
		return true;
	}
	return false;
}

int func_582(int iParam0)
{
	if (func_1188(Global_1392915.f_121[iParam0 /*20*/].f_3))
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_PROMPT_MONEY"));
		func_1189(&(Global_1392915.f_121[iParam0 /*20*/].f_3), 1, 0);
		Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
		return 1;
	}
	Global_1392915.f_121[iParam0 /*20*/].f_3 = 0;
	return 0;
}

int func_583(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_581(iParam0, 1);
	func_425(iVar0);
	if (bParam1)
	{
		func_1373(&Global_1899778, iVar0);
	}
	func_426(iVar0);
	return 1;
}

bool func_584(int iParam0)
{
	int iVar0;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1392915.f_121[iVar0 /*20*/].f_8))
	{
		return false;
	}
	return PED::_0xA1FBAC56D38563E2(Global_1392915.f_121[iVar0 /*20*/].f_8);
}

int func_585(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_1357(func_559(iParam0));
}

bool func_586(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_587(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_588(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 4);
}

int func_589(int iParam0)
{
	if (!func_586(iParam0))
	{
		return 0;
	}
	if (!func_1127(iParam0, 2))
	{
		return 0;
	}
	if (func_1375(func_1374(iParam0)))
	{
		return func_815(iParam0);
	}
	return PED::_0xE76687023D8C8505(func_1376(iParam0), 0);
}

void func_590(int iParam0)
{
	int iVar0;

	iVar0 = func_585(Global_1898330[iParam0]);
}

bool func_591(int iParam0)
{
	if (!func_1377(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 3;
}

bool func_592(int iParam0)
{
	if (!func_1377(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 1;
}

bool func_593(int iParam0)
{
	if (((((iParam0 == 4 || iParam0 == 5) || iParam0 == 6) || iParam0 == 0) || iParam0 == 1) || iParam0 == 2)
	{
		return true;
	}
	return false;
}

bool func_594(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

int func_595(int iParam0)
{
	char[] cVar0[8];

	strcpy_s(&cVar0, 8, func_597(iParam0));
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_596(int iParam0)
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar8 = joaat("BLIP_ROBBERY_COACH");
	iVar9 = iVar8;
	iVar10 = MISC::GET_HASH_KEY("CR_COACH_TO");
	strcpy_s(&cVar0, 64, func_597(iParam0));
	strcat_s(&cVar0, 64, "_DESC");
	iVar11 = 4;
	UILOG::_UILOG_ADD_ENTRY_HASH(iVar11, func_595(iParam0), func_1378(iParam0), iVar10, MISC::GET_HASH_KEY(&cVar0), 0);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar11, func_595(iParam0), iVar9, MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(iVar11, func_595(iParam0), MISC::GET_HASH_KEY("MISSION_COACH_ROBBERY"), MISC::GET_HASH_KEY("SP_MISSIONS_4"));
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar11, func_595(iParam0)))
	{
	}
}

char* func_597(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "CRRH1";
		case 5:
			return "CRRH2";
		case 6:
			return "CRRH3";
		case 0:
			return "CRST1";
		case 1:
			return "CRST2";
		case 2:
			return "CRST3";
		default:
			break;
	}
	return "PRCCH";
}

void func_598(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	int iVar0;

	iVar0 = 4;
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_595(iParam0)))
	{
		return;
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(iVar0, func_595(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_599(int iParam0, bool bParam1)
{
	Vector3 vVar0;

	if (!MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		vVar0 = { func_896(iParam0) /*3*/ };
		if (func_587(vVar0))
		{
			return;
		}
		func_827(Global_1392388.f_10[iParam0 /*13*/].f_5, 125.0f, "CoachRob", 0, 0, 0, 0, -1082130432);
		func_805(Global_1392388.f_10[iParam0 /*13*/].f_5, 125.0f, 0, 0, 5);
		Global_1392388.f_10[iParam0 /*13*/].f_10 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION_RADIUS"), vVar0, func_897(iParam0));
		Global_1392388.f_10[iParam0 /*13*/].f_11 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), vVar0);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392388.f_10[iParam0 /*13*/].f_11, "PROC_BLIP_CHROB");
		MAP::SET_BLIP_SPRITE(Global_1392388.f_10[iParam0 /*13*/].f_11, joaat("BLIP_AMBIENT_COACH"), false);
		if (iParam0 == 13)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1392388.f_10[iParam0 /*13*/].f_11, joaat("BLIP_MODIFIER_HIDDEN"));
		}
		if (bParam1)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1392388.f_10[iParam0 /*13*/].f_11, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		}
		func_1379(Global_1392388.f_10[iParam0 /*13*/].f_10, bParam1);
		if (func_594(iParam0))
		{
			if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(4, func_595(iParam0)))
			{
				func_596(iParam0);
			}
			func_598(iParam0, "CR_O_GOAMBUSH", "CR_O_GOAMBUSH", -1082130432);
		}
	}
}

bool func_600(int iParam0)
{
	if (iParam0 == 1)
	{
		return false;
	}
	return true;
}

void func_601(int iParam0, int iParam1)
{
	if (func_1380(iParam1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1898346[iParam0 /*6*/]))
	{
		Global_1898346[iParam0 /*6*/] = 0;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam1 /*18*/].f_5))
	{
		func_321(iParam1, 0);
	}
}

bool func_602(int iParam0, int iParam1)
{
	return Global_1392240.f_1[iParam0 /*18*/].f_16 & iParam1 != 0;
}

bool func_603(int iParam0)
{
	if (Global_1879534)
	{
		return true;
	}
	if (Global_1879534.f_1)
	{
		return true;
	}
	return false;
}

void func_604(int iParam0)
{
	int iVar0;

	iVar0 = func_585(Global_1898330[iParam0]);
	if (!func_1380(iVar0))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iVar0 /*18*/].f_5))
	{
		func_948(iVar0, 0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1898346[iParam0 /*6*/]))
	{
		Global_1898346[iParam0 /*6*/] = Global_1392240.f_1[iVar0 /*18*/].f_5;
	}
}

void func_605(int iParam0)
{
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392626[iParam0 /*32*/].f_21, false))
	{
		return;
	}
	func_790(&(Global_1392626[iParam0 /*32*/].f_9), 2);
}

int func_606()
{
	return func_1382(func_1381());
}

int func_607()
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

void func_608(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	Vector3 vVar0;
	float fVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;

	if (iParam0 != iParam2)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 13) == 0)
		{
			if (func_1383(iParam0))
			{
				func_1384(iParam0, 0, 1, 1, 1);
				if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 14) == 0)
				{
					func_1385(iParam0, 1);
					func_1386(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 14));
				}
				return;
			}
			else if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 14) != 0)
			{
				func_1385(iParam0, 0);
				func_544(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 14));
			}
		}
	}
	func_527(iParam0);
	vVar0 = { func_609(iParam0) /*3*/ };
	fVar3 = BUILTIN::VDIST2(Global_36, vVar0);
	bVar4 = MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37);
	if (iParam0 != iParam2 && Global_1347702[iParam0 /*49*/].f_13 & (1 << 13) == 0)
	{
		if (func_447(Global_1347702[iParam0 /*49*/].f_15, 1))
		{
			func_1384(iParam0, 1, 1, 1, 1);
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
		{
			func_1353(iParam0, bVar4, vVar0);
			func_1387(iParam0, bVar4, fVar3);
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
		{
			return;
		}
		if (func_1388(iParam0))
		{
			func_1389(iParam0);
		}
		else
		{
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 23) != 0)
		{
			iVar5 = func_1390(iParam0);
			if (iVar5 != -1)
			{
				if (func_723(iVar5))
				{
					if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 9) != 0)
					{
						if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 15) == 0)
						{
							func_1352(iParam0, (1 << 15));
							func_1353(iParam0, bVar4, vVar0);
						}
					}
					func_1384(iParam0, 0, 0, 0, 0);
					return;
				}
				else if (func_715(iVar5))
				{
					if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 9) != 0)
					{
						if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 15) == 0)
						{
							func_1352(iParam0, (1 << 15));
							func_1353(iParam0, bVar4, vVar0);
						}
					}
					func_1384(iParam0, 0, 0, 0, 0);
					return;
				}
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_45 != -1)
		{
			if (func_723(Global_1347702[iParam0 /*49*/].f_45))
			{
				if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 11) == 0)
				{
					func_1352(iParam0, (1 << 11));
					func_1353(iParam0, bVar4, vVar0);
				}
				func_1384(iParam0, 0, 0, 0, 0);
				return;
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_46 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 28) == 0)
			{
				if (!func_1391(iParam3, Global_1347702[iParam0 /*49*/].f_46))
				{
					func_1384(iParam0, 0, 1, 0, 0);
					return;
				}
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 16) == 0 && !func_1392(iParam0))
		{
			func_1393(iParam0);
			func_1384(iParam0, 0, 0, 0, 0);
			return;
		}
		else if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			fVar6 = func_1394(iParam0);
			if (iParam0 == 155)
			{
				fVar6 = Global_1347702[iParam0 /*49*/].f_19;
			}
			if (fVar3 > (fVar6 * fVar6) || !func_1395(iParam0, bParam1))
			{
				func_544(&(Global_1347702[iParam0 /*49*/].f_13), 16);
				if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					func_1396(iParam0, vVar0, 1, 0);
				}
				else
				{
					func_1397(iParam0);
				}
			}
			else
			{
				return;
			}
		}
		if (!bParam1)
		{
			if (!func_1398(iParam0, 0, 1, 1, 1))
			{
				if (Global_1347702[iParam0 /*49*/].f_14 & 2 == 0)
				{
					func_1384(iParam0, 0, 1, 0, 1);
				}
				return;
			}
		}
		if (func_1395(iParam0, bParam1))
		{
			if (iParam0 == 24 && func_1399(Global_1347702[24 /*49*/].f_15) == 1)
			{
				if (fVar3 >= (250.0f * 250.0f))
				{
					func_1400(Global_1347702[24 /*49*/].f_15, 0);
				}
				else
				{
					fVar6 = 250.0f;
				}
			}
			else if (iParam0 == 134 && func_1112(Global_1347702[134 /*49*/].f_15) == 1)
			{
				if (fVar3 >= (350.0f * 350.0f))
				{
					func_1401(Global_1347702[134 /*49*/].f_15, 0);
				}
				else
				{
					fVar6 = 350.0f;
				}
			}
			else
			{
				fVar6 = func_1394(iParam0);
			}
			if (fVar3 < (fVar6 * fVar6))
			{
				iVar7 = 1;
				if (func_142(Global_1347702[iParam0 /*49*/].f_13, 32) || func_142(Global_1347702[iParam0 /*49*/].f_13, (1 << 12)))
				{
					iVar7 = 0;
				}
				func_1384(iParam0, 0, iVar7, 0, 0);
				return;
			}
			else
			{
				if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 14) != 0)
				{
					func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 14));
				}
				if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
				{
					func_1402(iParam0, !bVar4, 1);
				}
			}
		}
		else
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 14) != 0)
			{
				func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 14));
			}
			if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
			{
				func_1402(iParam0, !bVar4, 1);
			}
		}
	}
	else if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
	{
		return;
	}
	fVar8 = func_1403(iParam0);
	if ((fVar3 < (fVar8 * fVar8) || Global_1347702[iParam0 /*49*/].f_12 & 32 != 0) || iParam0 == iParam2)
	{
		if (!func_246(Global_1347702[iParam0 /*49*/].f_15))
		{
			func_248(Global_1347702[iParam0 /*49*/].f_15);
			if (func_1404(iParam0, &iVar10, &iVar9))
			{
				func_1405(iVar10, iVar9, 1, 977356591, -1);
			}
		}
		else if (func_1406(Global_1347702[iParam0 /*49*/].f_14, 2))
		{
		}
		else if (!bVar4)
		{
			func_1396(iParam0, vVar0, 1, 0);
		}
	}
	else
	{
		if (func_246(Global_1347702[iParam0 /*49*/].f_15))
		{
			if (fVar3 > (Global_1347702[iParam0 /*49*/].f_17 * Global_1347702[iParam0 /*49*/].f_17))
			{
				func_129(Global_1347702[iParam0 /*49*/].f_15);
				func_542(iParam0, 0, 1, 1, 32);
			}
		}
		if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
		{
			func_1402(iParam0, bVar4, 1);
			bVar4 = true;
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
		{
			if (!bVar4)
			{
				func_1396(iParam0, vVar0, 1, 0);
			}
		}
		else if (bVar4)
		{
			func_543(iParam0, 0);
		}
		if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 10) != 0)
		{
			func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 10));
		}
	}
}

Vector3 func_609(int iParam0)
{
	Vector3 vVar0;

	if (!func_141(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	if (func_1407(iParam0, &vVar0))
	{
		Global_1347702[iParam0 /*49*/].f_24 = { vVar0 /*3*/ };
	}
	return Global_1347702[iParam0 /*49*/].f_24;
}

void func_610(int iParam0, Vector3 vParam1, float fParam4)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 20) == 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 11) != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_18 < 0.0f)
	{
		func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 20));
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	if (func_1408(iParam0, fParam4))
	{
		func_1386(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 11));
		func_544(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		func_543(iParam0, 0);
		func_1396(iParam0, vParam1, 1, 0);
	}
}

bool func_611(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1409(iParam0);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (Global_1391438.f_7[iVar1 /*99*/].f_9 == iVar0)
		{
			*uParam1 = iVar1;
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_612(int iParam0)
{
	if (func_246(iParam0))
	{
		func_312(iParam0, 0, 2);
	}
}

bool func_613(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (Global_1391438.f_1)
	{
		return true;
	}
	uParam0->f_98++;
	if (uParam0->f_98 < 10)
	{
		return false;
	}
	uParam0->f_98 = 0;
	if (func_114(0, 1, 1) && !func_446(uParam0->f_10))
	{
		return true;
	}
	if (bParam4)
	{
		if ((func_1410(*uParam0) && !func_1411(*uParam0, Global_1391438.f_206[0], 0)) && !func_1411(*uParam0, Global_1391438.f_206[1], 0))
		{
			return true;
		}
	}
	if (func_1145() != 1)
	{
		return true;
	}
	if (func_1412(*uParam0, 29, 1))
	{
		return true;
	}
	if (!func_335(Global_35, 0))
	{
		return true;
	}
	if (bParam2)
	{
		if (!func_335(func_958(*uParam0), 0))
		{
			*uParam1 = 1;
		}
	}
	if (uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_01") || uParam0->f_9 == joaat("HAI_FIVE_FINGER_FILLET_02"))
	{
		if (func_415(1) < 10)
		{
			return true;
		}
	}
	if (func_335(uParam0->f_1, 0) && PED::_GET_IS_PED_IN_DISPUTE_WITH_PED(uParam0->f_1, Global_35))
	{
		return true;
	}
	if (func_1413())
	{
		return true;
	}
	if (bParam3)
	{
		if (func_46() != func_113())
		{
			*uParam1 = 1;
		}
		if (!func_587(uParam0->f_14) && MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_14, true) > 200.0f)
		{
			*uParam1 = 1;
		}
	}
	if (((!func_1414(&(uParam0->f_78)) && !uParam0->f_78.f_15) && !func_440(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) && !func_440(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		func_1190("Time window expired for ", 0, 1);
		func_1190(" - Cancelling launch.", 1, 0);
		*uParam1 = 0;
		return true;
	}
	if (bParam5)
	{
		if (!func_587(uParam0->f_14))
		{
			if (func_1199(uParam0->f_14, 6.0f, 4, 1))
			{
				func_1190("A lock volume now blocks ", 0, 1);
				func_1190(" - Cancelling launch.", 1, 0);
				*uParam1 = 0;
				return true;
			}
		}
	}
	if (*uParam1)
	{
		return true;
	}
	return false;
}

void func_614(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= *uParam0 & iParam1;
	}
}

char* func_615(char* sParam0)
{
	return sParam0;
}

bool func_616(var uParam0, int iParam1)
{
	if (*uParam0 & iParam1 != 0)
	{
		return true;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	if (!func_577(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 |= iParam1;
}

bool func_618(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_133(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_619(int iParam0)
{
	return func_567(iParam0);
}

bool func_620(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_145(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_621(int iParam0)
{
	int iVar0;

	iVar0 = joaat("BLIP_STYLE_RCM");
	if (!func_141(iParam0))
	{
		return iVar0;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		iVar0 = joaat("BLIP_STYLE_MISSION");
	}
	else if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 9) != 0)
	{
		if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
		{
			iVar0 = joaat("BLIP_STYLE_RCM_TRACKED");
		}
		else
		{
			iVar0 = joaat("BLIP_STYLE_RCM");
		}
	}
	else if (Global_40.f_1093 == Global_1347702[iParam0 /*49*/])
	{
		iVar0 = joaat("BLIP_STYLE_RCM_TRACKED");
	}
	else
	{
		iVar0 = joaat("BLIP_STYLE_RCM");
	}
	return iVar0;
}

void func_622(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
		switch (iParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}
}

int func_623(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 5:
			return 4;
		case 6:
			return 79;
		case 0:
			return 43;
		case 2:
			return 98;
		case 4:
			return 58;
		case 1:
			return 71;
		case 3:
			return 9;
		case 7:
			return 22;
		case 8:
			return 37;
		default:
			break;
	}
	if (iParam0 != -1)
	{
	}
	return -1;
}

void func_624(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		MAP::BLIP_ADD_MODIFIER(Global_36308[iParam0], iParam1);
	}
}

void func_625(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_775(iParam0, &iVar0, &iVar1);
	if (!func_1369(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_213(iParam0, (1 << 10)))
	{
		return;
	}
	func_1370(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

bool func_626(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_627(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/];
	}
	return Global_42606[iParam0 /*4*/];
}

int func_628(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_1;
	}
	return Global_42606[iParam0 /*4*/].f_1;
}

void func_629(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/] = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/] = iParam1;
	return;
}

void func_630(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_1 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_1 = iParam1;
	return;
}

void func_631(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_2 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_2 = iParam1;
	return;
}

int func_632(struct<2> /*16*/ sParam0, var uParam2)
{
	int iVar0;

	iVar0 = BUILTIN::ROUND(MISC::ABSF(sParam0.f_0)) & 32767 | BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(sParam0.f_1)) & 32767, 15);
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

int func_633(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_7862[iParam0 /*4*/].f_2;
	}
	return Global_42606[iParam0 /*4*/].f_2;
}

void func_634(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_40.f_7862[iParam0 /*4*/].f_3 = iParam1;
		return;
	}
	Global_42606[iParam0 /*4*/].f_3 = iParam1;
	return;
}

void func_635(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_1415(func_633(iParam0)) /*3*/ };
	Global_36308[iParam0] = MAP::BLIP_ADD_FOR_COORDS(func_1219(func_628(iParam0)), vVar0);
	MAP::SET_BLIP_SPRITE(Global_36308[iParam0], func_1220(func_628(iParam0)), true);
	MAP::SET_BLIP_FLASH_TIMER(Global_36308[iParam0], func_628(iParam0), iParam0);
}

void func_636(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319.f_15936[iVar0 /*6*/].f_5)
		{
			Global_1914319.f_15936[iVar0 /*6*/].f_5 = 0;
		}
		func_1170(&(Global_1914319.f_15936[iVar0 /*6*/]), bParam0);
		iVar0++;
	}
}

void func_637(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1170(&(Global_1934051.f_23[iVar0]), bParam0);
		iVar0++;
	}
}

void func_638(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1170(&(Global_1899778.f_34[iVar0]), bParam0);
		Global_1899778[iVar0] = 0;
		iVar0++;
	}
}

void func_639(bool bParam0)
{
	func_1170(&Global_1955864, bParam0);
}

void func_640(bool bParam0)
{
	func_1170(&(Global_1415412.f_3), bParam0);
}

void func_641(bool bParam0)
{
	if (func_549(Global_1934051.f_33))
	{
		func_1207(Global_1934051.f_33, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
	}
	func_1170(&(Global_1934051.f_33), bParam0);
}

void func_642(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1206(func_1204(iVar0));
		if (iVar1 != 0)
		{
			func_1207(Global_1934051[iVar0 /*2*/], iVar1);
		}
		if (Global_1934051[iVar0 /*2*/].f_1)
		{
			Global_1934051[iVar0 /*2*/].f_1 = 0;
		}
		func_1170(&(Global_1934051[iVar0 /*2*/]), bParam0);
		iVar0++;
	}
}

void func_643(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_629(iVar0, -1);
		func_630(iVar0, 0);
		func_631(iVar0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
		{
			if (bParam0)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[iVar0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[iVar0]));
		}
		iVar0++;
	}
}

int func_644()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

void func_645(char* sParam0, char* sParam1)
{
	bool bVar0;
	int iVar1;

	if (DECORATOR::DECOR_EXIST_ON(Global_35, sParam0))
	{
		bVar0 = DECORATOR::DECOR_GET_INT(Global_35, sParam0);
		if (!func_666(bVar0))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
			DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			return;
		}
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bVar0, 0, true))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
			DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			return;
		}
		iVar1 = DECORATOR::DECOR_GET_INT(Global_35, sParam1);
		if (func_1279(iVar1))
		{
			if (func_793(iVar1, 0))
			{
				DECORATOR::DECOR_REMOVE(Global_35, sParam0);
				DECORATOR::DECOR_REMOVE(Global_35, sParam1);
			}
		}
	}
}

int func_646(Vector3 vParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	iVar0 = -1;
	fVar1 = 999999.9f;
	if (func_587(vParam0))
	{
		return -1;
	}
	iVar3 = 0;
	while (iVar3 < Global_1894899.f_161)
	{
		iVar2 = Global_1894899.f_10[iVar3];
		fVar4 = BUILTIN::VDIST2(vParam0, Global_1888801[iVar2 /*35*/].f_6);
		if (fVar4 < fVar1)
		{
			iVar0 = iVar2;
			fVar1 = fVar4;
		}
		iVar3++;
	}
	if (func_47(iVar0))
	{
	}
	else
	{
		iVar0 = -1;
	}
	return iVar0;
}

bool func_647(int iParam0, Vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

void func_648(int iParam0)
{
	if (!func_741(iParam0))
	{
		return;
	}
	func_1416(1);
}

bool func_649()
{
	return (Global_1935630.f_44 == joaat("WEAPON_KIT_BINOCULARS") && CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE());
}

bool func_650()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_651()
{
	int iVar0;

	if (func_774())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (Global_1905944[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_652(int iParam0)
{
	switch (iParam0)
	{
		case joaat("W_SP_BOWARROW_CHARLES"):
		case joaat("W_MELEE_HATCHET04"):
		case joaat("W_REPEATER_CARBINE01"):
		case joaat("W_MELEE_TOMAHAWK02"):
		case joaat("W_MELEE_KNIFE08"):
		case joaat("W_MELEE_KNIFE20"):
		case joaat("W_MELEE_HATCHET05"):
		case joaat("W_MELEE_LASSO03"):
		case joaat("W_MELEE_KNIFE10"):
		case joaat("W_MELEE_KNIFE09"):
		case joaat("W_MELEE_KNIFE17"):
		case joaat("W_MELEE_HATCHET02"):
		case joaat("W_MELEE_HATCHET03"):
		case joaat("W_REVOLVER_SCHOFIELD01"):
		case joaat("W_MELEE_LASSO01"):
		case joaat("W_SHOTGUN_REPEATING01"):
		case joaat("W_REPEATER_WINCHESTER01"):
		case joaat("W_MELEE_TOMAHAWK01"):
		case joaat("W_PISTOL_MAUSER01"):
		case joaat("W_REVOLVER_CATTLEMAN01"):
		case joaat("W_MELEE_KNIFE16"):
		case joaat("W_SHOTGUN_SEMIAUTO01"):
		case joaat("W_MELEE_KNIFE15"):
		case joaat("W_MELEE_KNIFE03"):
		case joaat("W_MELEE_BROKENSWORD01"):
		case joaat("W_SHOTGUN_PUMPACTION01"):
		case joaat("W_MELEE_KNIFE01"):
		case joaat("W_MELEE_KNIFE02"):
		case joaat("W_MELEE_KNIFE04"):
		case joaat("W_PISTOL_VOLCANIC01"):
		case joaat("W_MELEE_KNIFE19"):
		case joaat("W_PISTOL_SEMIAUTO01"):
		case joaat("W_RIFLE_BOLTACTION01"):
		case joaat("W_MELEE_KNIFE18"):
		case joaat("W_REVOLVER_DOUBLEACTION06"):
		case joaat("W_MELEE_KNIFE06"):
		case joaat("W_RIFLE_CARCANO01"):
		case joaat("W_REVOLVER_SCHOFIELD02"):
		case joaat("W_REPEATER_PUMPACTION01"):
		case joaat("W_MELEE_KNIFE07"):
		case joaat("W_REVOLVER_SCHOFIELD03"):
		case joaat("W_REVOLVER_CATTLEMAN02"):
		case joaat("W_RIFLE_ROLLINGBLOCK01"):
		case joaat("W_REVOLVER_DOUBLEACTION03"):
		case joaat("W_REVOLVER_SCHOFIELD04"):
		case joaat("W_PISTOL_MAUSER02"):
		case joaat("W_MELEE_HATCHET06"):
		case joaat("W_MELEE_KNIFE05"):
		case joaat("W_REPEATER_HENRY01"):
		case joaat("W_REVOLVER_CATTLEMAN03"):
		case joaat("W_REVOLVER_DOUBLEACTION02"):
		case joaat("W_MELEE_KNIFE12"):
		case joaat("W_SHOTGUN_DOUBLEBARREL01"):
		case joaat("W_MELEE_KNIFE14"):
		case joaat("W_MELEE_HATCHET07"):
		case joaat("W_MELEE_KNIFE11"):
		case joaat("W_REVOLVER_DOUBLEACTION01"):
		case joaat("W_MELEE_KNIFE13"):
		case joaat("W_RIFLE_SPRINGFIELD01"):
			return true;
		default:
			break;
	}
	return false;
}

void func_653(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_1417(Global_1310750[iVar0 /*111*/], iParam0))
		{
			if (!func_1418(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == (1 << 24))
			{
				if (func_1419(iVar0) < func_1420(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_1421(iVar0, iParam1, 1.0f, iVar1 | iParam2, bParam3);
		}
		iVar0++;
	}
}

bool func_654(int* iParam0, int iParam1)
{
	bool bVar0;
	Vector3 vVar1[24];
	bool bVar4;
	int iVar5;
	int iVar6;
	char[] cVar7[8];
	bool bVar15;
	int iVar16;
	var uVar17;
	var uVar18;

	if (iParam1 == 0)
	{
		return false;
	}
	strcpy_s(&cVar1, 24, "int_object_flags");
	bVar0 = DATAFILE::PARSEDDATA_IS_FILE_VALID(*iParam0);
	if (!bVar0)
	{
		*iParam0 = DATAFILE::_0xD97D8D905F1562F2(MISC::GET_HASH_KEY(&cVar1));
	}
	bVar4 = DATAFILE::PARSEDDATA_IS_FILE_LOADED(*iParam0);
	if (!bVar4)
	{
		return false;
	}
	func_1422(iParam0);
	iVar5 = func_1423(iParam0, 1);
	if (iVar5 <= 0)
	{
		return false;
	}
	iVar16 = 0;
	uVar17 = iParam0->f_1;
	iVar6 = 0;
	while (iVar6 <= (iVar5 - 1))
	{
		iParam0->f_1 = uVar17;
		iParam0->f_3 = iVar6;
		if (func_1424(iParam0, 0))
		{
			if (func_1425(iParam0, 2, &cVar7))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar7) && MISC::GET_HASH_KEY(&cVar7) == iParam1)
				{
					if (func_1426(iParam0, 3, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 2;
						}
					}
					if (func_1426(iParam0, 4, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 1;
						}
					}
					if (func_1426(iParam0, 5, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 4;
						}
					}
					if (func_1426(iParam0, 6, &bVar15))
					{
						if (bVar15)
						{
							iVar16 |= 8;
						}
					}
					iVar6 = iVar5;
					INVENTORY::_0x9E58207B194488AC(Global_35, iVar16);
				}
			}
		}
		iVar6++;
	}
	DATAFILE::_PARSEDDATA_UNLOAD_FILE(*iParam0);
	MISC::_COPY_MEMORY(iParam0, &uVar18, 5);
	return true;
}

int func_655(int iParam0)
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

int func_656(int iParam0)
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

bool func_657()
{
	return (Global_1894899 & 1 != 0 && func_46() != -1);
}

void func_658(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= (1 << 9);
	}
	else
	{
		Global_1894899 -= Global_1894899 & (1 << 9);
	}
}

void func_659(int iParam0)
{
	if (iParam0 >= 7)
	{
		func_576(489, 0);
	}
	if ((iParam0 >= 4 && Global_1897952.f_41 != 8) && func_447(Global_1835011[4 /*74*/].f_1, 1))
	{
		func_576(493, 0);
	}
}

void func_660(char* sParam0)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(Global_35, sParam0))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(Global_35, sParam0);
	if (func_1279(iVar0))
	{
		if (func_793(iVar0, 0))
		{
			DECORATOR::DECOR_REMOVE(Global_35, sParam0);
		}
	}
}

bool func_661(bool bParam0, int iParam1)
{
	return Global_1946054.f_57[func_1427(bParam0, 1) /*11*/].f_10 & iParam1 != 0;
}

bool func_662()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_663(int iParam0)
{
	if (!func_1428(iParam0))
	{
		return false;
	}
	return func_1429(iParam0);
}

void func_664(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_1430((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = bParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_1431(sVar0);
}

bool func_665(int iParam0)
{
	return Global_1946054 & iParam0 != 0;
}

bool func_666(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != joaat("WEAPON_UNARMED"));
}

int func_667(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_668(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	bVar0 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	if (!func_1432(bVar0))
	{
		return 0;
	}
	iVar2 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar0);
	if (!WEAPON::GET_MAX_AMMO(Global_35, &iVar1, bParam0))
	{
		return 0;
	}
	iVar3 = BUILTIN::CEIL(((((BUILTIN::TO_FLOAT(iVar2) / BUILTIN::TO_FLOAT(iVar1)) - 1.0f) * (float)iParam1) * -1.0f));
	if (bParam2)
	{
		return func_1433(iVar3);
	}
	return func_1434(iVar3);
}

int func_669(bool bParam0)
{
	if (bParam0)
	{
		return 852806853;
	}
	return 495489215;
}

void func_670(int iParam0)
{
	Global_1946054 -= Global_1946054 & iParam0;
}

bool func_671(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_METAPED_USING_COMPONENT(iParam0, iParam1);
}

bool func_672(int iParam0)
{
	var uVar0;

	return func_1435(iParam0, &uVar0);
}

bool func_673(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 5)
	{
		return VOLUME::DOES_VOLUME_EXIST(Global_43894[iParam0]);
	}
	return false;
}

int func_674(int iParam0)
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

bool func_675(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_676(int iParam0)
{
	return func_720(iParam0);
}

void func_677(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_36616 & func_1436(iParam1) != 0)
	{
		return;
	}
	iVar0 = func_1437(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_1438(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (Global_1347477.f_155[iVar2 /*6*/] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_1439(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_1438(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_678(int iParam0, bool bParam1, bool bParam2)
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

bool func_679()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_680()
{
	return false;
}

bool func_681(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_682()
{
	bool bVar0;
	bool bVar1;
	float fVar2;

	if (Global_1347477.f_180)
	{
		func_701(12, -100.0f);
	}
	else if (Global_1347477.f_179)
	{
		func_701(12, 100.0f);
	}
	else
	{
		if ((!func_663(16) || ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0)) || func_1440())
		{
			func_701(12, 0.0f);
			return;
		}
		func_1441(&bVar0, &bVar1);
		if (bVar1)
		{
			if (!func_1442())
			{
				fVar2 = 100.0f;
				func_576(81, 0);
			}
		}
		else if (bVar0)
		{
			if (!func_1443())
			{
				fVar2 = -100.0f;
				func_576(82, 0);
			}
		}
		func_701(12, fVar2);
	}
}

bool func_683(int iParam0)
{
	return Global_1392040 & iParam0 != 0;
}

bool func_684(int iParam0)
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

bool func_685(int iParam0)
{
	if (PAD::GET_CONTROL_HOW_LONG_AGO(0) > 480000 && PED::IS_PED_ON_MOUNT(iParam0))
	{
		return true;
	}
	return false;
}

bool func_686()
{
	if (!func_683((1 << 23)))
	{
		return false;
	}
	if (((PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return true;
	}
	return false;
}

void func_687(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = BUILTIN::TO_FLOAT(iParam0);
	if (Global_1347477.f_4 + 60000) > MISC::GET_GAME_TIMER()
	{
		fVar0 = (BUILTIN::TO_FLOAT(iParam0) - Global_1347477.f_5);
	}
	if (fVar0 > 0.0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(PLAYER::PLAYER_ID(), fVar0, 0, 0, 0);
		Global_1347477.f_5 = BUILTIN::TO_FLOAT(iParam0);
		func_1444(2, 7000);
	}
	Global_1347477.f_4 = MISC::GET_GAME_TIMER();
	func_1445(0);
	if (bParam1)
	{
		func_1446(100.0f);
	}
}

bool func_688()
{
	return func_1447(12) >= 99.0f;
}

bool func_689()
{
	return func_1447(12) <= -99.0f;
}

float func_690(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

void func_691(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_112() == 0)
	{
		func_1448(0, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_690(0);
	if (bParam1)
	{
		func_1449(fVar0);
	}
	if (fVar0 >= (100.0f - 1.0f))
	{
		func_1450();
	}
	if (bParam2)
	{
		fParam0 = func_1451(0, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_696(0, func_1452(fParam0, -100.0f, 100.0f), bParam1);
}

void func_692(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_112() == 0)
	{
		func_1448(2, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_690(2);
	if (bParam1)
	{
		func_1449(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1451(2, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_696(2, func_1452(fParam0, -100.0f, 100.0f), bParam1);
}

void func_693(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;

	if (func_112() == 0)
	{
		func_1448(1, (fParam0 / 2.0f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_690(1);
	if (bParam1)
	{
		func_1449(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1451(1, fParam0, bParam3);
	}
	fParam0 += fVar0;
	func_696(1, func_1452(fParam0, -100.0f, 100.0f), bParam1);
}

bool func_694(int iParam0)
{
	if (Global_16 || Global_18)
	{
		return false;
	}
	if (!func_663(iParam0))
	{
		return false;
	}
	if (func_554())
	{
		return false;
	}
	return true;
}

float func_695()
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

	if (func_1453())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_690(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_689())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_688())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_690(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1454();
	fVar2 = func_1455();
	fVar3 = func_1456();
	fVar4 = func_1457();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_42());
	fVar7 = (func_690(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1458(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1459(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_690(0);
	}
	return func_1452(fVar7, -100.0f, 100.0f);
}

void func_696(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;

	if (func_112() != -1)
	{
		return;
	}
	if (!func_663(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_1460(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, func_1461(iParam0), iVar0);
	func_1463(func_1462(iParam0), (100.0f * (BUILTIN::TO_FLOAT(iVar0) / 100.0f)), 0);
	if (((fParam1 <= func_705(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_576(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_576(func_1464(iParam0), 1);
	}
	sVar1 = func_1465(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

void func_697()
{
	if (Global_40.f_11095.f_42 > 0)
	{
		Global_40.f_11095.f_42 -= 7;
		if (Global_40.f_11095.f_42 == 0)
		{
			Global_40.f_11095.f_11[14] = 0.0f;
			ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 50);
		}
	}
	else if (Global_40.f_11095.f_42 < 0)
	{
		Global_40.f_11095.f_11[14] = 0.0f;
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 50);
		Global_40.f_11095.f_42 = 0;
	}
}

float func_698()
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

	if (func_1453())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_690(1);
	}
	if (Global_1347477.f_119)
	{
		return func_690(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1454();
	fVar2 = func_1455();
	fVar3 = func_1456();
	fVar4 = func_1457();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_42());
	fVar7 = (func_690(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1458(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1459(2, fVar9, fVar9 > 100.0f);
	return func_1452(fVar7, -100.0f, 100.0f);
}

float func_699()
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

	if (func_1453())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_690(2);
	}
	if (Global_1347477.f_119)
	{
		return func_690(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_1454();
	fVar2 = func_1455();
	fVar3 = func_1456();
	fVar4 = func_1457();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_42());
	fVar7 = (func_690(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_1458(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_1459(3, fVar9, fVar9 > 100.0f);
	return func_1452(fVar7, -100.0f, 100.0f);
}

float func_700()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!func_1466() || !func_663(17))
	{
		return func_1447(13);
	}
	fVar0 = ((float)Global_1347477.f_181 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar0 *= (Global_40.f_11095.f_52 + 1.0f);
	fVar1 = (200.0f / fVar0);
	fVar1 *= (30.0f / func_42());
	fVar2 = (func_1447(13) - fVar1);
	func_1467(&fVar3, &fVar4);
	return func_1452(fVar2, fVar3, fVar4);
}

void func_701(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0.0f;
		sVar2 = func_1013(fParam1 < 0.0f, "rpg_cold", "rpg_hot");
		func_1468(1, bVar1, 1, sVar2);
		func_1469(!bVar1, fParam1 < 0.0f, bVar1);
		iVar0 = func_1460(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_1470();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_1460(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_1460(BUILTIN::CEIL(Global_40.f_11095.f_11[iParam0]));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

void func_702(bool bParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;

	if (func_273() && !bParam0)
	{
		return;
	}
	iVar0 = Global_1347477.f_196;
	if (Global_1347477.f_183 == iVar0)
	{
		return;
	}
	Global_1347477.f_183 = iVar0;
	fVar1 = (((BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(10)) * 7.5f) / 100.0f);
	Global_40.f_11095.f_45 = -fVar1;
	Global_40.f_11095.f_62 = fVar1;
	fVar2 = func_1454();
	bVar3 = true;
	bVar4 = false;
	if (fVar2 == 0.0f)
	{
		bVar3 = false;
	}
	else if (fVar2 < 0.0f)
	{
		bVar4 = true;
	}
	func_1471(1, bVar3, bVar4);
	func_1471(2, bVar3, bVar4);
	func_1471(3, bVar3, bVar4);
	func_1472(iVar0);
	func_1470();
	func_1473();
	func_1474();
}

void func_703()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (func_679())
	{
		return;
	}
	bVar1 = false;
	if (func_1475())
	{
		switch (Global_40.f_11095.f_67)
		{
			case 0:
				iVar0 = -1150250535;
				break;
			case 1:
				iVar0 = -813319677;
				break;
			case 2:
				iVar0 = 398379636;
				break;
			case 3:
				iVar0 = 703229643;
				break;
			case 4:
				iVar0 = -119829330;
				break;
			case 5:
				iVar0 = 1526616306;
				break;
			case 6:
				iVar0 = 1862039790;
				break;
			case 7:
				iVar0 = 1112121225;
				break;
			case 8:
				iVar0 = 1142989623;
				break;
			case 9:
				iVar0 = -1782069628;
				break;
			case 10:
				iVar0 = 1697015990;
				break;
		}
		if (Global_1347477.f_187 != 0)
		{
			bVar1 = Global_1347477.f_187;
		}
		else if (Global_40.f_11095.f_67 < 9)
		{
			if (func_154(43))
			{
				bVar1 = -1061007984;
			}
		}
		else if (func_154(58))
		{
			bVar1 = -354696817;
		}
		else
		{
			bVar1 = -1061007984;
		}
		if (PED::IS_PED_READY_TO_RENDER(Global_35))
		{
			PED::_EQUIP_META_PED_OUTFIT(Global_35, iVar0);
			if (bVar1 != 0)
			{
				func_1476(bVar1);
				if (!Global_43891 && Global_1347477.f_185 != bVar1)
				{
					func_1477(Global_35, bVar1, 0);
				}
			}
			PED::_UPDATE_PED_VARIATION(Global_35, true, true, true, true, false);
			Global_1347477.f_184 = Global_40.f_11095.f_67;
			Global_1347477.f_190 = iVar0;
			bVar2 = Global_1347477.f_184 >= 8;
			func_1478(1, bVar2, 1);
			func_1478(2, bVar2, 1);
			func_1478(3, bVar2, 1);
			Global_1347477.f_188 = 0;
		}
	}
}

void func_704()
{
	if (Global_40.f_11095.f_43)
	{
		if (func_554())
		{
			func_1445(0);
		}
	}
}

float func_705(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100.0f);
	return ((fVar0 * 200.0f) - 100.0f);
}

void func_706()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = ((float)ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 16) / 100.0f);
	fVar1 = 0.5f;
	fVar2 = 1.5f;
	fVar3 = (((1.0f - fVar0) * fVar2) + (fVar1 * fVar0));
	PED::_0xFD8E853F0BC2E942(Global_35, fVar3);
}

void func_707(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_112() != -1)
	{
		return;
	}
	iVar0 = func_1479(iParam0);
	fVar1 = func_1480(iParam0);
	if ((Global_1347477.f_117 || !func_663(31)) || !func_1481(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_1482(iVar0) >= 7)
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
	func_1483(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_1486(MISC::VAR_STRING(6, func_1484(iParam0), fVar1), "itemtype_textures", func_1485(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

var func_708(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_1018(iParam0, iParam1) /*2*/ };
	STATS::STAT_ID_GET_FLOAT(&sVar1, &uVar0);
	return uVar0;
}

bool func_709(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	if (iVar0 == joaat("REL_WILD_ANIMAL") || iVar0 == joaat("REL_WILD_ANIMAL_PREDATOR"))
	{
		return true;
	}
	return false;
}

void func_710()
{
	Global_1347477.f_139 = 0;
	Global_1347477.f_140 = 0;
}

bool func_711(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "lose_honor_steal_vehicle");
	}
	return false;
}

int func_712(bool bParam0, bool bParam1, bool bParam2)
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

bool func_713()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_35, true)) || UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return true;
	}
	return false;
}

bool func_714(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1053(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_1487())
	{
		return func_1053(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_1053(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_715(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_149(iParam0, (1 << 26));
}

int func_716(int iParam0)
{
	if (!func_47(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_2;
	}
	return Global_1058888.f_40545[iParam0 /*11*/].f_2;
}

int func_717(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_1279(iParam0))
	{
		return 0;
	}
	func_1488(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 60.0f) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 60.0f)) + ((BUILTIN::TO_FLOAT(iVar3) * 24.0f) * 60.0f)) + (((BUILTIN::TO_FLOAT(iVar4) * 30.4375f) * 24.0f) * 60.0f)) + (((BUILTIN::TO_FLOAT(iVar5) * 365.25f) * 24.0f) * 60.0f));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

int func_718(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_723(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_723(iParam0))
			{
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_RHODES");
			}
			break;
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
		case 61:
			return joaat("LAW_REGION_MANICATO");
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
		case 38:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_663(45))
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			else
			{
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			}
			break;
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
		case 65:
			return joaat("LAW_REGION_CORNWALL");
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
		case 3:
			return joaat("LAW_REGION_LAGRAS");
		case 32:
			return joaat("LAW_REGION_SISIKA");
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
		case 56:
			return joaat("LAW_REGION_WAPITI");
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
		case 127:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_663(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_447(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_447(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_663(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			break;
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (iParam0 == func_113())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_663(45))
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			else
			{
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			}
			break;
	}
	if (bParam2)
	{
		iVar0 = func_1489(iParam0);
		if (iVar0 != -1)
		{
			return func_1490(iVar0, bParam1);
		}
	}
	return 0;
}

int func_719(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

int func_720(int iParam0)
{
	if (!func_675(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

void func_721(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_47(iParam0))
	{
		return;
	}
	bVar0 = func_149(iParam0, (1 << 26));
	if (bParam1)
	{
		if (((!bVar0 && func_1491(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_1492(iParam0, func_538());
			func_164(iParam0, (1 << 26));
		}
	}
	else if (bVar0)
	{
		func_161(iParam0, (1 << 26));
		func_1492(iParam0, -15);
	}
	func_1493(iParam0);
}

bool func_722(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 32:
		case 35:
		case 38:
		case 57:
		case 61:
		case 76:
		case 78:
		case 93:
		case 95:
		case 105:
		case 115:
			return true;
	}
	return false;
}

bool func_723(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_149(iParam0, (1 << 25));
}

bool func_724(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return func_149(iParam0, (1 << 24));
}

bool func_725(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_47(iParam0))
	{
		return false;
	}
	if (func_733(iParam0))
	{
		return false;
	}
	if (func_1494(iParam0) == -15)
	{
		return true;
	}
	iVar0 = func_1495(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 > 0)
	{
		return false;
	}
	if (iParam0 == func_46())
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
		{
			if (func_736(Global_35, Global_1888801[iParam0 /*35*/].f_5, 1, 0))
			{
				return false;
			}
		}
		iVar1 = ITEMSET::CREATE_ITEMSET(true);
		LAW::_0x0C392DB374655176(Global_36, 30.0f, iVar1);
		iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
		ITEMSET::DESTROY_ITEMSET(iVar1);
		if (iVar2 > 0)
		{
			return false;
		}
	}
	return true;
}

void func_726(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_47(iParam0))
	{
		return;
	}
	if (func_724(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam0 /*35*/].f_5))
	{
		iVar0 = Global_1888801[iParam0 /*35*/].f_5;
	}
	else
	{
		iVar0 = func_977(iParam0);
	}
	bVar1 = func_149(iParam0, (1 << 25));
	if (bParam1)
	{
		iVar2 = func_1495(iParam0);
		if (iParam2 > iVar2 || !func_1279(func_1494(iParam0)))
		{
			func_1496(iParam0, func_538());
			func_1497(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_164(iParam0, (1 << 25));
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 38)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_161(iParam0, (1 << 25));
		func_1496(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_1498(iParam0);
}

bool func_727()
{
	if (Global_1934266.f_56)
	{
		return false;
	}
	return true;
}

bool func_728()
{
	if (func_1499(func_739(), 1))
	{
		return true;
	}
	if (func_1500(func_479(), 1))
	{
		return true;
	}
	if (func_723(func_46()))
	{
		return true;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1934266.f_151))
	{
		if (func_1501())
		{
			return true;
		}
	}
	return false;
}

bool func_729(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (func_554())
	{
		return false;
	}
	if (func_759())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL(func_1502(iParam0)))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_190(PLAYER::PLAYER_ID(), 0, 0, 1))
		{
			return false;
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1415402, false))
	{
		return false;
	}
	return true;
}

void func_730(int iParam0, int iParam1)
{
	SCRIPTS::REQUEST_SCRIPT(func_1502(iParam0));
	if (SCRIPTS::HAS_SCRIPT_LOADED(func_1502(iParam0)))
	{
		Global_1415402 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_1502(iParam0), &iParam1, 1, (1 << 10));
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_1502(iParam0));
	}
}

int func_731()
{
	return func_1503(func_674(func_479()));
}

bool func_732()
{
	Vector3 vVar0;

	if (func_479() == 8)
	{
		return false;
	}
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(Global_36, &vVar0, 1, 3.0f, 0.0f);
	if (!func_587(vVar0))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, true) < 50.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_733(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> /*72*/ sVar3;
	int iVar20;

	if (!func_47(iParam0))
	{
		return false;
	}
	if (!func_722(iParam0))
	{
		return false;
	}
	if (LAW::GET_BOUNTY(PLAYER::PLAYER_ID()) <= 0)
	{
		return false;
	}
	if (func_190(PLAYER::PLAYER_ID(), 0, 1, 0))
	{
		if (func_731() > 3)
		{
			return true;
		}
	}
	else
	{
		iVar0 = 60;
		iVar1 = 6;
		iVar20 = 0;
		while (iVar20 < 24)
		{
			if (iVar2 < iVar1)
			{
				if (LAW::_0xB527099D1E1EED49(PLAYER::PLAYER_ID(), iVar20, &sVar3))
				{
					if (func_718(iParam0, 1, 1) != sVar3.f_7)
					{
					}
					else if (LAW::_0xDAEFDFDB2AEECE37(sVar3.f_0, 0) < 2)
					{
					}
					else
					{
						if (sVar3.f_8 < iVar0)
						{
							iVar2++;
						}
						Jump @171; // curOff = 164
						iVar20 = 24;
						Jump @178; // curOff = 171
						return true;
					}
					iVar20++;
					return false;
				}
			}
		}
	}
}

bool func_734(int iParam0)
{
	int iVar0;

	if (!func_131(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case joaat("FLOW_DO_MISSION_AT_BLIP"):
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return true;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_735(int iParam0, int iParam1)
{
	func_1504(iParam0, iParam1);
}

bool func_736(int iParam0, int iParam1, bool bParam2, int iParam3)
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

bool func_737(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar0 == 6 || (iVar0 == 5 && bParam0))
		{
		}
		else if (func_720(iVar0) > 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_738(int iParam0)
{
	if (!func_1428(iParam0))
	{
		return;
	}
	func_1505(iParam0);
	func_1506(iParam0);
}

int func_739()
{
	return Global_1934266.f_4;
}

bool func_740(int iParam0, int iParam1)
{
	if (!func_675(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/].f_5 & iParam1 != 0;
	}
	return Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1 != 0;
}

bool func_741(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_742(int iParam0, bool bParam1)
{
	if (func_1507(iParam0))
	{
		if (!func_1508(iParam0) && !bParam1)
		{
			func_1509(iParam0, 1);
			LAW::_SET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), LAW::_GET_BOUNTY_HUNTER_GLOBAL_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN")) + 8);
		}
		if (Global_1934266.f_69 != 0.75f && !bParam1)
		{
			Global_1934266.f_69 = 0.75f;
			LAW::SET_LAW_SENSE_RANGE_MODIFIER(PLAYER::PLAYER_ID(), Global_1934266.f_69);
		}
	}
	else if (Global_1934266.f_69 != 1.0f)
	{
		Global_1934266.f_69 = 1.0f;
		LAW::SET_LAW_SENSE_RANGE_MODIFIER(PLAYER::PLAYER_ID(), Global_1934266.f_69);
	}
}

void func_743()
{
	if (Global_1934266.f_76 || func_456(&(Global_1934266.f_70)))
	{
		Global_1934266.f_76 = 0;
		Global_1934266.f_73 = { 0.0f, 0.0f, 0.0f /*3*/ };
		Global_1934266.f_77 = 50.0f;
		func_462(&(Global_1934266.f_70));
	}
}

float func_744()
{
	return Global_1934266.f_77;
}

float func_745(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_746(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_363(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_1510(&Global_1935630, (1 << 22));
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

void func_747(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15 /*DT_OnFoot*/, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6 /*DT_PoliceRiders*/, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1 /*DT_PoliceAutomobile*/, bParam0);
}

bool func_748(int iParam0, int iParam1)
{
	if (!func_753(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

bool func_749(var uParam0, float fParam1)
{
	if (!func_456(uParam0))
	{
		return false;
	}
	if (func_458(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

int func_750(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_751(var uParam0)
{
	func_1511(uParam0, 0.0f);
}

void func_752(Vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1310750.f_16078)
	{
		iVar1 = Global_1310750.f_16078[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			if (BUILTIN::VDIST(VOLUME::_0xC4019CF9AE8E931A(iVar1), vParam0) < fParam3)
			{
				VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
				Global_1310750.f_16078[iVar0] = 0;
				Global_17504.f_2084[iVar0 /*5*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
				Global_17504.f_2084[iVar0 /*5*/].f_3 = -1;
				Global_17504.f_2084[iVar0 /*5*/].f_4 = 0;
			}
		}
		iVar0++;
	}
}

bool func_753(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_754(int iParam0)
{
	int iVar0;

	func_1512();
	func_912(0);
	if (func_1513(iParam0) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(false);
	}
	if (func_46() == 5)
	{
		iVar0 = 60;
	}
	if (func_748(iParam0, (1 << 25)))
	{
		Global_1393237.f_2 = MISC::GET_GAME_TIMER();
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
	if (func_748(iParam0, 16))
	{
		if (func_203(32))
		{
			func_1514(30, 0, 1);
			func_204(32);
		}
		else
		{
			func_1514(60, 0, 1);
		}
		func_204(16);
	}
	else if (func_748(iParam0, (1 << 30)))
	{
		if (func_203(32))
		{
		}
		else if (func_203(16))
		{
			func_1514(120, 0, 1);
		}
		else
		{
			func_1514(60, 0, 1);
		}
		func_204(32);
		func_204(16);
	}
	else if (func_203(16))
	{
		func_1514((420 - iVar0), 0, 1);
		func_204(16);
		func_204(32);
	}
	else if (func_203(32))
	{
		func_1514(30, 0, 1);
		func_204(32);
	}
	else
	{
		func_1514((200 - iVar0), 0, 1);
	}
}

void func_755(int iParam0)
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

bool func_756()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (((Global_1430242 + Global_1430242.f_2) > 1 && func_657()) && Global_1310750.f_16037 > 2)
	{
		return true;
	}
	return false;
}

void func_757(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_753(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_755(iParam0);
	Global_1310750.f_16037--;
}

bool func_758(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (Global_1326862.f_3)
	{
		if (func_554() || func_479() == -1)
		{
			Global_1326862.f_604 = 0;
			Global_1326862.f_605 = 0;
			return false;
		}
		iVar0 = func_1515(0);
		if (func_657())
		{
			if (iVar0 != 0)
			{
				iVar1 = func_1516(iVar0);
				*uParam0 = Global_1326862.f_512[(17 + iVar1)];
				*uParam1 = Global_1326862.f_558[(17 + iVar1)];
			}
			else
			{
				Global_1326862.f_604 = 0;
				Global_1326862.f_605 = 0;
				return false;
			}
		}
		else
		{
			*uParam0 = Global_1326862.f_512[func_479()];
			*uParam1 = Global_1326862.f_558[func_479()];
		}
	}
	Global_1326862.f_604 = *uParam0;
	Global_1326862.f_605 = *uParam1;
	return *uParam0 <= *uParam1;
}

bool func_759()
{
	return Global_1310750.f_16077 != 0;
}

void func_760()
{
	if (!func_753(Global_1327479))
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
	func_1517(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_761(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_202() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_753(iVar1) && !func_748(iVar1, iParam2)) && (!bParam3 || !func_763(iVar1))) && (!bParam4 || !func_1518(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_757(iVar0);
			}
		}
		iVar0++;
	}
}

void func_762()
{
	if (BUILTIN::VDIST(Global_36, Global_1326862.f_6) > 30.0f && Global_1326862.f_9 < MISC::GET_GAME_TIMER())
	{
		Global_1326862.f_6 = { Global_36 /*3*/ };
		Global_1326862.f_9 = MISC::GET_GAME_TIMER() + 15000;
		Global_1326862.f_5 = 1;
	}
}

bool func_763(int iParam0)
{
	if (!func_753(iParam0))
	{
		return false;
	}
	if (func_203(64) && func_1519(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

int func_764(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;

	if (Global_17504.f_42[iParam0 /*8*/].f_4 > 0)
	{
		return 0;
	}
	if (bParam1)
	{
		if (!Global_1310750[iParam0 /*111*/].f_49)
		{
			return 0;
		}
		if (!Global_1310750[iParam0 /*111*/].f_50)
		{
			return 0;
		}
		if (!Global_1310750[iParam0 /*111*/].f_51)
		{
			return 0;
		}
	}
	else
	{
		if (Global_1310750[iParam0 /*111*/].f_38 != 0)
		{
			if (!func_795(Global_1310750[iParam0 /*111*/].f_38))
			{
				return 0;
			}
		}
		if (!func_1520(iParam0, Global_1310750[iParam0 /*111*/]))
		{
			return 0;
		}
		func_1521(iParam0, &fVar0, &fVar1, &uVar2, 1);
		if (!func_748(iParam0, (1 << 9)))
		{
			if (!func_1522(iParam0))
			{
				if (!func_765(iParam0, 64))
				{
					if (!func_1523(iParam0, fVar1, &(Global_1310750[iParam0 /*111*/].f_63), 0, 0, 1, fVar0, 1))
					{
						return 0;
					}
				}
			}
		}
	}
	if (func_765(iParam0, (1 << 19)))
	{
		return 0;
	}
	if (!Global_17504.f_42[iParam0 /*8*/].f_7)
	{
		return 0;
	}
	if (Global_17504.f_42[iParam0 /*8*/].f_6)
	{
		return 0;
	}
	if (!func_765(iParam0, (1 << 15)))
	{
		if (func_748(iParam0, 1))
		{
			if (func_1525(iParam0, func_1524(func_479())))
			{
				return 0;
			}
		}
		else if (func_1526(iParam0, func_1515(0)))
		{
			return 0;
		}
	}
	if (Global_1310750[iParam0 /*111*/].f_48)
	{
		return 0;
	}
	if (func_1527(iParam0) == 7)
	{
		return 0;
	}
	if (func_1528(Global_1310750[iParam0 /*111*/]))
	{
		return 0;
	}
	if (!func_1529(iParam0, 1))
	{
		return 0;
	}
	if (func_1530(iParam0))
	{
		return 0;
	}
	if (!func_1531(Global_1310750[iParam0 /*111*/].f_39))
	{
		return 0;
	}
	if (func_765(iParam0, 1))
	{
		if (!func_1532(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_765(int iParam0, int iParam1)
{
	if (!func_753(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_1 & iParam1 != 0;
}

void func_766(int iParam0, bool bParam1, Vector3 vParam2, int iParam5, bool bParam6, bool bParam7)
{
	if (!func_753(iParam0) && !bParam7)
	{
		return;
	}
	if (Global_1310750.f_16071 != -1 && !bParam6)
	{
		return;
	}
	func_760();
	if (iParam5 == -1)
	{
		iParam5 = PLAYER::PLAYER_ID();
	}
	Global_1310750.f_16103 = { vParam2 /*3*/ };
	Global_1327479 = iParam0;
	Global_1327479.f_1 = iParam5;
	Global_1327479.f_10 = func_1533(iParam0, vParam2);
	func_1517(0);
	func_1534(0, 0, 1);
	if (bParam1)
	{
		Global_1310750.f_16077 = 0;
		Global_1310750.f_16071 = -1;
		Global_1310750.f_16075 = 1;
		Global_17504.f_42[iParam0 /*8*/].f_4 = 0;
		func_1535(8);
		func_752(Global_36, 1137180672);
	}
	if (bParam7)
	{
		Global_1310750.f_16076 = 1;
	}
}

void func_767(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	float fVar11;

	if (Global_1310750[iParam0 /*111*/].f_110 & 1 != 0)
	{
		iVar0 = Global_17504.f_42[iParam0 /*8*/].f_2;
		iVar1 = Global_17504.f_1;
		fVar2 = ((1.0f - (BUILTIN::TO_FLOAT(iVar0) / BUILTIN::TO_FLOAT(iVar1))) * 1.0f);
		Global_1310750[iParam0 /*111*/].f_56 = fVar2;
	}
	if (Global_1310750[iParam0 /*111*/].f_110 & 2 != 0)
	{
		iVar3 = Global_17504.f_42[iParam0 /*8*/].f_3;
		iVar4 = Global_17504.f_2;
		fVar5 = ((1.0f - (BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4))) * 0.5f);
		Global_1310750[iParam0 /*111*/].f_57 = fVar5;
	}
	if (Global_1310750[iParam0 /*111*/].f_110 & 4 != 0)
	{
		iVar6 = Global_17504.f_42[iParam0 /*8*/].f_1;
		iVar7 = Global_17504.f_3;
		fVar8 = ((1.0f - (BUILTIN::TO_FLOAT(iVar6) / BUILTIN::TO_FLOAT(iVar7))) * 1.5f);
		Global_1310750[iParam0 /*111*/].f_58 = fVar8;
	}
	if (Global_1310750[iParam0 /*111*/].f_110 & 8 != 0)
	{
		iVar9 = Global_17504.f_42[iParam0 /*8*/];
		iVar10 = Global_17504.f_4;
		fVar11 = ((1.0f - (BUILTIN::TO_FLOAT(iVar9) / BUILTIN::TO_FLOAT(iVar10))) * 5.0f);
		Global_1310750[iParam0 /*111*/].f_59 = fVar11;
	}
}

void func_768(int iParam0)
{
	int iVar0;

	if (Global_1310750.f_16070 == -1)
	{
		return;
	}
	iVar0 = MISC::ABSI((Global_1310750[iParam0 /*111*/].f_2 - Global_1310750.f_16070));
	switch (iVar0)
	{
		case 0:
			Global_1310750[iParam0 /*111*/].f_55 = 1.0f;
			break;
		case 1:
			Global_1310750[iParam0 /*111*/].f_55 = 0.833f;
			break;
		case 2:
			Global_1310750[iParam0 /*111*/].f_55 = 0.666f;
			break;
		case 3:
			Global_1310750[iParam0 /*111*/].f_55 = 0.5f;
			break;
		case 4:
			Global_1310750[iParam0 /*111*/].f_55 = 0.333f;
			break;
		case 5:
			Global_1310750[iParam0 /*111*/].f_55 = 0.167f;
			break;
		default:
			Global_1310750[iParam0 /*111*/].f_55 = 0.0f;
			break;
	}
}

void func_769(int iParam0)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	var uVar9;
	float fVar10;
	var uVar11;
	float fVar12;

	Global_1310750[iParam0 /*111*/].f_60 = 0.0f;
	if (func_748(iParam0, (1 << 9)))
	{
		Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
		return;
	}
	if (func_1417(Global_1310750[iParam0 /*111*/], 256))
	{
		fVar12 = 240.0f;
		if (func_1523(iParam0, fVar12, &uVar11, 0, 0, 1, 0, 0))
		{
			Global_1310750[iParam0 /*111*/].f_60 = 999.0f;
		}
		return;
	}
	if (Global_1310750[iParam0 /*111*/].f_52)
	{
		Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
		return;
	}
	if (func_1417(Global_1310750[iParam0 /*111*/], 32))
	{
		if (PATHFIND::GET_CLOSEST_ROAD(Global_36, 0.0f, 1, &vVar3, &vVar6, &uVar9, &uVar9, &fVar10, true))
		{
			vVar0 = { vVar3 + vVar6 * Vector(0.5f, 0.5f, 0.5f) /*3*/ };
			fVar10 = BUILTIN::VDIST(vVar0, Global_36);
			if (fVar10 >= 105.0f && fVar10 <= 135.0f)
			{
				Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
			}
			else if (fVar10 < 105.0f)
			{
				Global_1310750[iParam0 /*111*/].f_60 = 0.5f;
			}
			else if (fVar10 > 135.0f)
			{
				Global_1310750[iParam0 /*111*/].f_60 = 0.25f;
			}
		}
		else
		{
			Global_1310750[iParam0 /*111*/].f_60 = -999.0f;
		}
		return;
	}
	if (func_1523(iParam0, 240.0f, &uVar11, 1, 0.707f, 1, 0, 0))
	{
		Global_1310750[iParam0 /*111*/].f_60 = 0.75f;
	}
}

void func_770(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = 0.0f;
	if (bParam1)
	{
		switch (func_1527(iParam0))
		{
			case 1:
				fVar0 = 99999.0f;
				break;
			case 2:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 1.0f);
				break;
				break;
			case 3:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 0.5f);
				break;
			case 4:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.5f);
				break;
			case 5:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-0.5f, 0.0f);
				break;
			case 6:
				fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-1.0f, 0.0f);
				break;
		}
	}
	if (func_1536(iParam0))
	{
		fVar1 = 1.0f;
	}
	if (func_1537(4))
	{
		if (func_748(iParam0, (1 << 24)))
		{
			fVar0 += 2000.0f;
		}
	}
	if (Global_1310750[iParam0 /*111*/].f_38 == 16 || Global_1310750[iParam0 /*111*/].f_38 == 8)
	{
		fVar2 = 1.0f;
	}
	fVar3 = func_1538(iParam0);
	Global_1310750[iParam0 /*111*/].f_54 = ((((((((((Global_1310750[iParam0 /*111*/].f_56 + Global_1310750[iParam0 /*111*/].f_57) + Global_1310750[iParam0 /*111*/].f_58) + Global_1310750[iParam0 /*111*/].f_59) + Global_1310750[iParam0 /*111*/].f_55) + Global_1310750[iParam0 /*111*/].f_60) + Global_1310750[iParam0 /*111*/].f_61) + fVar0) + fVar1) + fVar2) + fVar3);
}

bool func_771(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_775(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

bool func_772()
{
	return Global_1905944.f_5694;
}

bool func_773()
{
	var uVar0;

	uVar0 = Global_1905944.f_5695;
	Global_1905944.f_5695 = 0;
	return uVar0;
}

bool func_774()
{
	return Global_1905944.f_5693 != -1;
}

void func_775(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_776(int iParam0)
{
	if (func_112() != -1)
	{
		if (func_213(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_213(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_777(int iParam0)
{
	switch (iParam0)
	{
		case 87:
			if (func_690(0) > -99.999f)
			{
				return false;
			}
			break;
		case 86:
			if (func_690(2) > -99.999f)
			{
				return false;
			}
			break;
		case 85:
			if (func_690(1) > -99.999f)
			{
				return false;
			}
			break;
		case 585:
			if (!func_1539())
			{
				return false;
			}
			break;
		case 145:
			return PED::GET_PED_IS_BEING_GRAPPLED(Global_35);
		case 81:
			return func_688();
		case 82:
			return func_689();
	}
	return true;
}

bool func_778()
{
	return (Global_1914319.f_17369 || Global_1914319.f_18996.f_1);
}

bool func_779(int iParam0)
{
	int iVar0;

	if (!func_1540(iParam0))
	{
		return false;
	}
	if (iParam0 == 41 || iParam0 == 82)
	{
		return false;
	}
	iVar0 = func_1241(iParam0);
	if ((((((((((iVar0 == 10 || iVar0 == 4) || iVar0 == 17) || iVar0 == 31) || iVar0 == 18) || iVar0 == 19) || iVar0 == 22) || iVar0 == 12) || iVar0 == 13) || iVar0 == 14) || iVar0 == 32)
	{
		return true;
	}
	return false;
}

int func_780(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar1 = -1;
	iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar4 = 3;
			if (func_213(iParam0, (1 << 17)))
			{
				iVar4 = 2;
			}
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar4)
			{
				return 0;
			}
			iVar3 = (iVar2 - Global_40.f_7756[iVar0 /*3*/]);
			if (iVar3 > 1800 || !func_213(iParam0, (1 << 15)))
			{
				Global_40.f_7756[iVar0 /*3*/].f_1++;
				Global_40.f_7756[iVar0 /*3*/] = iVar2;
				return 1;
			}
			return 0;
		}
		else if (iVar1 == -1 && Global_40.f_7756[iVar0 /*3*/].f_2 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		Global_40.f_7756[iVar1 /*3*/].f_2 = iParam0;
		Global_40.f_7756[iVar1 /*3*/] = iVar2;
		Global_40.f_7756[iVar1 /*3*/].f_1++;
	}
	return 1;
}

int func_781(int iParam0, int iParam1)
{
	if (func_226(Global_1360165[iParam0 /*1157*/].f_143.f_1, iParam1))
	{
		return 2;
	}
	else if (func_226(Global_1360165[iParam0 /*1157*/].f_143.f_2, iParam1))
	{
		return 3;
	}
	return 0;
}

void func_782(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;

	if (!func_1541(iParam0))
	{
		return;
	}
	if ((Global_40.f_4942[iParam0 /*60*/].f_1 + iParam1) > 100)
	{
		iParam1 = (100 - Global_40.f_4942[iParam0 /*60*/].f_1);
	}
	else if ((Global_40.f_4942[iParam0 /*60*/].f_1 - iParam1) < -100)
	{
		iParam1 = (-100 - Global_40.f_4942[iParam0 /*60*/].f_1);
	}
	if (iParam1 == 0)
	{
		return;
	}
	Global_40.f_4942[iParam0 /*60*/].f_1 += iParam1;
	if (bParam2)
	{
		sVar0 = func_965(iParam0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			func_1542(MISC::VAR_STRING(10, "COMP_TRUST_MOD", sVar0, iParam1), 7500, 0, 1, 0, 0, -1, -1, 0);
		}
	}
}

void func_783()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		Global_1391411.f_2[iVar0 /*2*/].f_1 = 234527101;
		iVar0++;
	}
}

int func_784()
{
	return func_1543(0);
}

void func_785(int iParam0)
{
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
	{
		func_799(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/]));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
	{
		func_799(&(Global_1392626[iParam0 /*32*/].f_10));
		MAP::REMOVE_BLIP(&(Global_1392626[iParam0 /*32*/].f_1));
	}
}

void func_786(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_787(int iParam0, int iParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	func_1544(&(Global_1392626[iParam0 /*32*/].f_10), iParam1);
	func_1544(&(Global_1392626[iParam0 /*32*/].f_10), 2);
	func_786(&(Global_1392626[iParam0 /*32*/].f_8), 1);
}

bool func_788(int iParam0, int iParam1)
{
	if (func_234(iParam0))
	{
		return Global_40.f_9052.f_11[iParam0] & iParam1 != 0;
	}
	return false;
}

void func_789(int iParam0, var uParam1, Vector3 vParam2)
{
	*uParam1 = MAP::BLIP_ADD_FOR_COORDS(func_1545(iParam0), vParam2);
	if (MAP::DOES_BLIP_EXIST(*uParam1))
	{
		func_1546(uParam1, iParam0);
		func_1547(iParam0);
		if (!func_575(163))
		{
			func_625(163, *uParam1, 0);
		}
	}
}

void func_790(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_791(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

int func_792(int iParam0)
{
	if (func_377(iParam0) == 6)
	{
		if (func_519(iParam0) == 0)
		{
			return func_585(iParam0);
		}
	}
	return -1;
}

bool func_793(int iParam0, bool bParam1)
{
	return func_956(func_538(), iParam0, bParam1);
}

bool func_794(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= (Global_40.f_1094 - 1))
		{
			if (Global_40.f_450[iVar0] == 92)
			{
				return true;
			}
			iVar0++;
		}
	}
	else if (iParam0 == 3)
	{
		if (func_734(21))
		{
			return true;
		}
	}
	return false;
}

bool func_795(int iParam0)
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
	iVar0 = func_1548(func_538());
	if (func_226(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_226(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 12)))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_226(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_226(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_226(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 10)))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_226(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_226(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_226(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_226(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 9)))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 13)))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 11)))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 14)))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 15)))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_226(iParam0, (1 << 16)))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_796(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_797()
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if ((((Global_1395601.f_4 & 1 != 0 || Global_1395601.f_4 & 2 != 0) || func_362(Global_1935630, (1 << 17))) || func_185((1 << 12))) || func_362(Global_1935630, (1 << 14)))
	{
		return true;
	}
	return false;
}

void func_798(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_799(var uParam0)
{
	*uParam0 = 0;
}

void func_800(int iParam0, Vector3 vParam1, float fParam4)
{
	if (!MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1) && !func_796(Global_1392626[iParam0 /*32*/].f_8, (1 << 10)))
	{
		Global_1392626[iParam0 /*32*/].f_1 = MAP::BLIP_ADD_FOR_RADIUS(func_1549(iParam0), vParam1, fParam4);
		if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/].f_1))
		{
			func_1546(&(Global_1392626[iParam0 /*32*/].f_1), iParam0);
			func_1547(iParam0);
			if (!func_575(163))
			{
				func_625(163, Global_1392626[iParam0 /*32*/].f_1, 0);
			}
		}
	}
}

void func_801(int iParam0)
{
	func_800(iParam0, func_1550(iParam0), (Global_1392626[iParam0 /*32*/].f_4 / 2.0f));
}

void func_802(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

bool func_803(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 5:
		case 6:
			return true;
	}
	return false;
}

char[] func_804(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LSM_WOMANCRY";
		case 1:
			return "LSM_HUNTER";
		case 2:
			return "LSM_CATFISH";
		case 3:
			return "LSM_UNDERTAKER";
		case 5:
			return "LSM_MINER_1";
		case 6:
			return "LSM_MINER_2";
		case 4:
			return "LSM_SOLDIER_1";
		case 7:
			return "LSM_HC_1";
		case 8:
			return "LSM_SELL_HORSE_1";
	}
	return "";
}

void func_805(Vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	Vector3 vVar0;
	Vector3 vVar3;
	Vector3 vVar6;
	Vector3 vVar9;

	vVar3 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, fParam3, fParam3, fParam3) /*3*/ };
	vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam0, 0.0f, -fParam3, -fParam3, -fParam3) /*3*/ };
	vVar6 = { func_1551(vVar0, vVar3, 0.0f) /*3*/ };
	vVar9 = { func_1552(vVar0, vVar3, 0.0f) /*3*/ };
	if (iParam4 == 1)
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		PATHFIND::SET_ROADS_IN_AREA(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		PATHFIND::_0xAFE2AE66F6251C66(vVar6, vVar9, iParam6, 1);
	}
}

void func_806(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1553(iParam0);
	}
	else
	{
		func_1554(iParam0, iParam1);
	}
	func_1555();
}

void func_807(int iParam0, bool bParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	if (!func_429(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_378(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_378(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_377(iParam0), func_519(iParam0), func_585(iParam0), func_378(iParam0), Global_36);
		}
	}
	func_247(iParam0, 1);
	bParam1 = bParam1;
}

int func_808(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BRL_SAINTDENIS");
		case 1:
			return joaat("BRL_RHODES");
		case 2:
			return joaat("BRL_VALENTINE");
		case 3:
			return joaat("BRL_BLACKWATER");
		default:
			break;
	}
	return 0;
}

Vector3 func_809(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 2644.397f, -1296.915f, 53.3029f };
		case 1:
			return { 1289.142f, -1305.846f, 77.34f };
		case 2:
			return { -306.3943f, 771.1057f, 119.2639f };
		case 3:
			return { -815.711f, -1276.18f, 43.997f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_810(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 0.0f, 0.0f, -63.95661f };
		case 1:
			return { 0.0f, 0.0f, 139.649f };
		case 2:
			return { 0.0f, 0.0f, 10.06205f };
		case 3:
			return { 0.0f, 0.0f, 89.8f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_811(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 18.36461f, 16.07587f, 4.061802f };
		case 1:
			return { 12.37f, 19.599f, 5.349f };
		case 2:
			return { 9.925132f, 17.83831f, 3.145048f };
		case 3:
			return { 7.8f, 12.9f, 2.9f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

char* func_812(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "BRL_SAINTDENIS";
			break;
		case 1:
			sVar0 = "BRL_RHODES";
			break;
		case 2:
			sVar0 = "BRL_VALENTINE";
			break;
		case 3:
			sVar0 = "BRL_BLACKWATER";
			break;
	}
	return sVar0;
}

void func_813(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

bool func_814()
{
	int iVar0;
	int iVar1;

	iVar0 = func_538();
	iVar1 = func_1548(iVar0);
	if (iVar1 >= 7)
	{
		return true;
	}
	return false;
}

int func_815(int iParam0)
{
	int iVar0;

	iVar0 = func_824(iParam0);
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

void func_816(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			sVar0 = "new_bank_01_main";
			break;
		case 1:
			sVar0 = "rho_bank_01_main";
			if (bParam1)
			{
				if (func_400(joaat("WS_RHODES_BANK_LIGHTS_OFF")))
				{
					func_1095(joaat("WS_RHODES_BANK_LIGHTS_OFF"));
				}
			}
			else if (!func_400(joaat("WS_RHODES_BANK_LIGHTS_OFF")))
			{
				func_1094(joaat("WS_RHODES_BANK_LIGHTS_OFF"));
			}
			break;
		case 2:
			sVar0 = "val_bank_01_main";
			break;
		case 3:
			sVar0 = "bla_bank_01_main";
			break;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(iVar1, bParam1);
	if (GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(iVar1))
	{
	}
	GRAPHICS::_0x67B0778C62E74423(!bParam1);
	GRAPHICS::_0x6C03118E9E5C1A14(!bParam1);
	if (iParam0 == 2)
	{
		if (bParam1)
		{
			if (func_400(joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED")))
			{
				func_1095(joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED"));
			}
		}
		else if (!func_400(joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED")))
		{
			func_1094(joaat("WS_VALENTINE_BANK_SHUTTERS_CLOSED"));
		}
	}
}

bool func_817(int iParam0)
{
	if (func_1556(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_818(int iParam0)
{
	return func_1557(iParam0, 23);
}

bool func_819(int iParam0)
{
	func_1558(iParam0, 0, 0);
	if (func_817(iParam0))
	{
		return (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 2 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 1);
	}
	return false;
}

void func_820(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_1558(iParam0, 0, 0);
	if (func_817(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0.0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1559(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1560(iParam0, 1);
			}
			else
			{
				func_1561(iParam0, 1);
			}
		}
		else
		{
			func_1562(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_1563())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

bool func_821(int iParam0)
{
	func_1558(iParam0, 0, 0);
	if (func_817(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return false;
}

int func_822(int iParam0)
{
	return Global_1934182[iParam0 /*18*/];
}

void func_823(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1564(*iParam0);
	iVar1 = func_1565(*iParam0);
	iVar2 = func_1566(*iParam0);
	iVar3 = func_1548(*iParam0);
	iVar4 = func_1567(*iParam0);
	iVar5 = func_1568(*iParam0);
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
	iVar6 = func_1569(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_1569(iVar1, iVar0);
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
	func_1570(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_824(int iParam0)
{
	if (!func_586(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/].f_1;
}

void func_825(int iParam0)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (func_112() == -1)
	{
		Global_40.f_9079[iParam0] |= 1;
	}
}

void func_826()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_950(iVar0, 1);
		func_1571(iVar0);
		iVar0++;
	}
}

int func_827(Vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
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
	if (func_587(vParam0))
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
		if (func_890(vParam0))
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
	func_1572(iVar0, bParam8);
	return iVar0;
}

void func_828(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return;
	}
	func_1573(iParam0);
	switch (iParam0)
	{
		case 0:
			Global_1392194[0 /*10*/].f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1413.425f, -213.6874f, 104.8526f, 0.791084f, 0.0f, 0.0f, 49.2581f, 52.79913f, 7.251574f, "EA_BGV_LOGGING_CAMP Camp");
			Global_1392194[0 /*10*/].f_5 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1434.438f, -213.8168f, 115.2112f, 0.0f, 0.0f, 0.0f, 103.5534f, 149.8633f, 22.60874f, "EA_BGV_LOGGING_CAMP Discover");
			break;
		case 1:
			Global_1392194[1 /*10*/].f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-436.0166f, 500.0417f, 101.993f, 0.0f, 0.0f, 0.0f, 22.60923f, 21.21432f, 6.090699f, "EA_HRT_HOMESTEAD Camp");
			Global_1392194[1 /*10*/].f_5 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-436.0166f, 490.9713f, 101.993f, 0.0f, 0.0f, 0.0f, 60.89196f, 60.21377f, 8.765783f, "EA_HRT_HOMESTEAD Discover");
			break;
		case 2:
			func_1574(&(Global_1392194[2 /*10*/].f_6), iParam1);
			func_1575(&(Global_1392194[2 /*10*/].f_5), iParam1);
			break;
		case 3:
			Global_1392194[3 /*10*/].f_6 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1576.145f, -914.8586f, 87.21828f, 0.0f, 0.0f, 0.0f, 72.98922f, 82.87118f, 8.167019f, "EA_BGV_INDIAN_RESERVATION Camp");
			Global_1392194[3 /*10*/].f_5 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1585.806f, -910.0177f, 90.36066f, 0.0f, 0.0f, -51.68032f, 82.29909f, 75.9168f, 10.11638f, "EA_BGV_INDIAN_RESERVATION Discover");
			break;
	}
}

float func_829(Vector3 vParam0, int iParam3)
{
	return func_745(Global_35, vParam0, iParam3);
}

bool func_830(Vector3 vParam0, int iParam3)
{
	if (!func_834(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_6))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_6, vParam0);
	}
	return false;
}

int func_831(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 53;
		case 1:
			return 54;
		case 2:
			return 55;
		case 3:
			return 56;
	}
	return 0;
}

char* func_832(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "app";
		case 1:
			return "cas";
		case 2:
			return "cur";
		case 3:
			return "ftr";
		default:
			break;
	}
	return "";
}

void func_833(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2 || func_281(iParam1))
	{
		uParam0->f_1 = 0;
		uParam0->f_3 = 0.0f;
		uParam0->f_2 = 0.0f;
		uParam0->f_5 = 0.0f;
		uParam0->f_4 = 0;
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, false);
			GRAPHICS::REMOVE_PARTICLE_FX(*uParam0, false);
			STREAMING::REMOVE_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
		}
		*uParam0 = 0;
		func_305(iParam1);
	}
}

bool func_834(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_835(int iParam0, int iParam1)
{
	if (!func_154(59))
	{
		return false;
	}
	if (*iParam1 >= func_287(*iParam0))
	{
		return false;
	}
	return true;
}

int func_836(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return 0;
	}
	if (!func_848(iParam0, iParam1))
	{
		return 0;
	}
	Global_40.f_9096[iParam0 /*12*/] = iParam1;
	func_288(iParam0, &(Global_40.f_9096[iParam0 /*12*/]));
	return 1;
}

void func_837(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1576(iParam0))
	{
		iVar0 = func_297(iParam0);
		func_280(iParam0, 1);
		switch (iParam0)
		{
			case 0:
			case 2:
			case 3:
				func_1577(iVar0, 0);
				break;
			case 1:
				MAP::_MAP_DISCOVER_REGION(-238119963);
				break;
		}
		if (bParam1)
		{
			func_1578(iParam0, 0);
		}
	}
}

void func_838(int iParam0)
{
	float fVar0;

	if (!func_834(iParam0))
	{
		return;
	}
	if (func_283(iParam0, (1 << 22)))
	{
		return;
	}
	func_862(iParam0, 0);
	func_856(iParam0, (1 << 19));
	func_856(iParam0, (1 << 20));
	func_856(iParam0, (1 << 21));
	fVar0 = 100.0f;
	PED::_0x9851DE7AEC10B4E1(func_301(iParam0, func_276(iParam0)), fVar0, 1, 0);
	func_304(func_301(iParam0, func_276(iParam0)), fVar0, 0, 0, 0, 0, 0);
	func_280(iParam0, (1 << 30));
	Global_40.f_9096[iParam0 /*12*/].f_11 = -1;
}

void func_839(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return;
	}
	if (func_285(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 |= iParam1;
}

void func_840(int iParam0, int iParam1, int iParam2)
{
	func_1579(iParam0, iParam1, iParam2, 0, 0, 0);
}

void func_841(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_40.f_9096[iParam0 /*12*/].f_2 < 0 && !func_285(iParam0, (1 << 23)))
	{
		func_856(iParam0, 8);
		func_856(iParam0, 32);
		func_856(iParam0, (1 << 9));
		func_856(iParam0, (1 << 10));
		func_856(iParam0, (1 << 11));
		func_856(iParam0, (1 << 12));
		func_856(iParam0, (1 << 14));
		func_856(iParam0, (1 << 15));
		func_856(iParam0, (1 << 16));
		func_856(iParam0, 64);
		func_856(iParam0, (1 << 26));
		func_856(iParam0, (1 << 24));
		func_856(iParam0, (1 << 27));
		func_856(iParam0, (1 << 28));
		return;
	}
	if (func_285(iParam0, 8))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		iVar3 -= 8;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar2 > 12)
		{
			iVar2 = 12;
			iVar1 = 0;
			iVar0 = 0;
		}
		func_1579(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		func_856(iParam0, 8);
	}
	else if (func_285(iParam0, 16))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		if (iVar3 > 1 || iVar3 == 1)
		{
			iVar3 = 1;
			iVar2 = 0;
			iVar1 = 0;
			iVar0 = 0;
		}
		func_1579(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		func_856(iParam0, 16);
	}
	else if (func_285(iParam0, 32))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		iVar3 -= 2;
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		func_1579(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		func_856(iParam0, 32);
	}
	else if (func_285(iParam0, (1 << 12)) && func_285(iParam0, 4))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		if (iVar3 >= 1 && iVar2 > 16)
		{
			iVar3--;
		}
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (func_276(iParam0) == 1)
		{
			func_1579(iParam0, 0, 12, 0, 0, 0);
		}
		else
		{
			func_1579(iParam0, iVar3, iVar2, iVar1, iVar0, 0);
		}
		func_856(iParam0, (1 << 12));
	}
	else if (func_285(iParam0, (1 << 9)))
	{
		func_1579(iParam0, 2, 0, 0, 0, 1);
		func_856(iParam0, (1 << 9));
	}
	else if (func_285(iParam0, (1 << 10)))
	{
		func_1579(iParam0, 6, 0, 0, 0, 1);
		func_856(iParam0, (1 << 10));
	}
	else if (func_285(iParam0, (1 << 11)) && func_285(iParam0, 4))
	{
		func_292(iParam0, &iVar3, &iVar2, &iVar1, &iVar0);
		if (iVar3 == 0 && iVar2 < 12)
		{
			func_1579(iParam0, 0, 12, 0, 0, 0);
		}
		func_856(iParam0, (1 << 11));
	}
	else if (func_285(iParam0, (1 << 14)))
	{
		func_1579(iParam0, 2, 0, 0, 0, 0);
		func_856(iParam0, (1 << 14));
	}
	else if (func_285(iParam0, (1 << 15)))
	{
		func_1579(iParam0, 4, 0, 0, 0, 0);
		func_856(iParam0, (1 << 15));
	}
	else if (func_285(iParam0, (1 << 16)))
	{
		func_1579(iParam0, 7, 0, 0, 0, 0);
		func_856(iParam0, (1 << 16));
	}
	else if (func_285(iParam0, (1 << 25)))
	{
		func_1579(iParam0, 0, 0, 0, 0, 0);
		func_856(iParam0, (1 << 25));
	}
}

bool func_842(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < func_1580(iParam0))
	{
		iVar1 = func_1581(iParam0, iParam1, iVar0);
		if (!func_441(iVar1))
		{
		}
		else if (!STREAMING::IS_IPL_ACTIVE_HASH(iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_843(Vector3 vParam0, int iParam3)
{
	if (!func_834(iParam3))
	{
		return false;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392194[iParam3 /*10*/].f_5))
	{
		return VOLUME::IS_POINT_IN_VOLUME(Global_1392194[iParam3 /*10*/].f_5, vParam0);
	}
	return false;
}

void func_844(int iParam0)
{
	int iVar0;

	Global_40.f_9096[iParam0 /*12*/].f_8++;
	iVar0 = (5 * Global_40.f_9096[iParam0 /*12*/].f_8);
	Global_40.f_9096[iParam0 /*12*/].f_11 = Global_40.f_9096[iParam0 /*12*/].f_3;
	func_1582(iParam0, iVar0, 0, 0, 0, 1);
	func_1579(iParam0, iVar0, 0, 0, 0, !func_284(iParam0));
	func_280(iParam0, (1 << 30));
}

void func_845(int iParam0, int iParam1)
{
	Global_40.f_9096[iParam0 /*12*/].f_9 = Global_40.f_9096[iParam0 /*12*/];
	Global_40.f_9096[iParam0 /*12*/].f_10 = Global_40.f_9096[iParam0 /*12*/].f_3;
	func_1583(iParam0, iParam1, 0, 0, 0, 1);
	func_280(iParam0, (1 << 15));
	func_295(iParam0, (1 << 24));
	func_856(iParam0, (1 << 22));
}

bool func_846(int iParam0)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	return Global_40.f_9096[iParam0 /*12*/].f_3 > Global_40.f_9096[iParam0 /*12*/].f_11;
}

bool func_847(int iParam0, int iParam1)
{
	bool bVar0;

	if (iParam1 < 0)
	{
		return false;
	}
	bVar0 = false;
	switch (iParam0)
	{
		case 0:
			bVar0 = func_1584(1749008611);
			if (!bVar0)
			{
				bVar0 = func_1584(2111695903);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1947695052);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1559513478);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1321905459);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(758066107);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1995054197);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1623126047);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(1943484686);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(2056603274);
			}
			break;
		case 1:
			bVar0 = func_1584(-590227673);
			if (!bVar0)
			{
				bVar0 = func_1584(872406077);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(1471226731);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1149736196);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1926787493);
			}
			break;
		case 2:
			bVar0 = func_1584(-586415580);
			if (!bVar0)
			{
				bVar0 = func_1584(1251859782);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(994786977);
			}
			break;
		case 3:
			bVar0 = func_1584(-1877706739);
			if (!bVar0)
			{
				bVar0 = func_1584(905216692);
			}
			if (!bVar0)
			{
				bVar0 = func_1584(-1299414622);
			}
			break;
	}
	return bVar0;
}

bool func_848(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return false;
	}
	if (iParam1 > 0 && iParam1 < func_855(iParam0))
	{
		return true;
	}
	return false;
}

int func_849(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 4;
		case 3:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_850(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!func_834(iParam0))
	{
		return;
	}
	iVar0 = (iParam1 - Global_40.f_9096[iParam0 /*12*/].f_3);
	*iParam2 = (iVar0 / 86400);
	iVar0 -= (*iParam2 * 86400);
	*iParam3 = (iVar0 / 3600);
	iVar0 -= *iParam3 * 3600;
	*iParam4 = (iVar0 / 60);
	iVar0 -= *iParam4 * 60;
	*iParam5 = iVar0;
}

bool func_851()
{
	return Global_1935630.f_23;
}

bool func_852(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bLostLogs") && DECORATOR::DECOR_GET_BOOL(*iParam0, "bLostLogs"))
	{
		return false;
	}
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) != joaat("LOGWAGON"))
	{
		return false;
	}
	if (func_1585(iParam0))
	{
		return true;
	}
	return false;
}

Vector3 func_853()
{
	return { -433.5319f, 505.9023f, 96.77488f };
}

void func_854(Vector3 vParam0, int* iParam3, int iParam4, int iParam5, char* sParam6, int iParam7)
{
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	*iParam3 = MAP::BLIP_ADD_FOR_COORDS(iParam4, vParam0);
	if (iParam7 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(*iParam3, iParam7);
	}
	if (iParam5 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam3, iParam5, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam3, sParam6);
	}
}

int func_855(int iParam0)
{
	if (!func_834(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 0:
			return 5 + 1;
		case 1:
			return 5 + 1;
		case 2:
			return 4 + 1;
		case 3:
			return 2 + 1;
	}
	return -1;
}

void func_856(int iParam0, int iParam1)
{
	if (!func_834(iParam0))
	{
		return;
	}
	if (!func_285(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9096[iParam0 /*12*/].f_4 -= Global_40.f_9096[iParam0 /*12*/].f_4 & iParam1;
}

bool func_857(bool bParam0, int iParam1)
{
	return func_1586(0, bParam0, iParam1);
}

bool func_858(int iParam0)
{
	if ((func_285(iParam0, (1 << 19)) || func_285(iParam0, (1 << 20))) || func_285(iParam0, (1 << 21)))
	{
		return true;
	}
	return false;
}

int func_859(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	return func_1587(0, iParam0, bParam1, bParam4, 0, bParam2, bParam3, iParam5);
}

void func_860(int iParam0)
{
	int iVar0;

	iVar0 = 948;
	while (iVar0 <= 951)
	{
		func_1588(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 938;
	while (iVar0 <= 940)
	{
		func_1588(iVar0, iParam0);
		iVar0++;
	}
}

void func_861(int iParam0, int iParam1)
{
	if (!func_283(iParam0, (1 << 30)))
	{
		func_950(iParam0, 0);
	}
	func_1578(iParam0, iParam1);
	switch (iParam0)
	{
		case 0:
			func_951();
			break;
		case 1:
			func_952();
			break;
		case 2:
			func_953();
			break;
		case 3:
			break;
	}
}

void func_862(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 1)
	{
		func_1589(&iVar1, &iVar2, func_283(1, (1 << 20)));
	}
	else
	{
		func_1590(func_297(iParam0), &iVar1, &iVar2, 0, 0);
	}
	iVar0 = iVar1;
	while (iVar0 <= iVar2)
	{
		if (func_586(iVar0))
		{
			if (bParam1)
			{
				if (!func_1127(iVar0, 32))
				{
					func_1114(iVar0, 32);
				}
			}
			else
			{
				func_1591(iVar0);
				if (func_1127(iVar0, 32))
				{
					func_1113(iVar0, 32);
				}
			}
		}
		iVar0++;
	}
}

bool func_863(bool bParam0, int iParam1)
{
	return func_1586(1, bParam0, iParam1);
}

int func_864(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	return func_1587(1, iParam0, bParam1, bParam2, bParam3, bParam4, bParam5, iParam6);
}

bool func_865(bool bParam0, int iParam1)
{
	return func_1586(3, bParam0, iParam1);
}

bool func_866(int iParam0, bool bParam1, int iParam2)
{
	return func_1587(3, iParam0, 0, 0, 0, bParam1, 0, iParam2);
}

Vector3 func_867(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { 2185.991f, 666.069f, 94.008f };
		case 2:
			return { 2169.619f, 793.931f, 106.968f };
		case 3:
			return { 1951.033f, 934.2983f, 116.3355f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_868(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { 0.0f, 0.0f, 11.073f };
		case 2:
			return { 0.0f, 0.0f, 1.758f };
		case 3:
			return { 0.0f, 0.0f, 0.0f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_869(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { 171.745f, 270.0f, 150.0f };
		case 2:
			return { 202.301f, 263.785f, 150.0f };
		case 3:
			return { 0.0f, 0.0f, 0.0f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_870(Vector3 vParam0, Vector3 vParam3, Vector3 vParam6, bool bParam9, int iParam10, float fParam11)
{
	return func_1592(2, vParam0, vParam3, vParam6, bParam9, iParam10, fParam11);
}

bool func_871(bool bParam0, int iParam1)
{
	return func_1586(2, bParam0, iParam1);
}

int func_872(int iParam0)
{
	if (func_285(2, (1 << 27)))
	{
		return 1;
	}
	if (func_858(2))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1:
			if (func_285(2, 128))
			{
				return 1;
			}
			break;
		case 2:
			if (func_1593())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_873(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	return func_1587(2, iParam0, bParam1, bParam3, 0, bParam2, 0, iParam4);
}

void func_874(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (func_285(2, 128))
	{
	}
	func_954();
	if (func_285(2, (1 << 19)))
	{
	}
	else
	{
		switch (iVar0)
		{
			case 1:
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_FOREMAN_STAGE_1"), true);
				if (!func_285(2, (1 << 27)))
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_1A"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPA_WORKERS_1"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPINT"), true);
				}
				else
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPA_WORKERS_2"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_1B"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPA"), true);
				}
				break;
			case 2:
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_FOREMAN_STAGE_2"), true);
				if (!func_1593() || !func_285(2, (1 << 27)))
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_2A"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPSTALLED"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPB_WORKERS_1"), true);
				}
				else
				{
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPB_WORKERS_2"), true);
					TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_2B"), true);
				}
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPB"), true);
				break;
			case 3:
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_FOREMAN_STAGE_4"), true);
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPD_WORKERS_1"), true);
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPD"), true);
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_4"), true);
				break;
			case 4:
				func_954();
				break;
		}
	}
}

void func_875(int iParam0)
{
	if (Global_1888801[iParam0 /*35*/].f_13 != -1)
	{
		func_157(iParam0, Global_1888801[iParam0 /*35*/].f_14, Global_1888801[iParam0 /*35*/].f_15, 0);
		Global_1888801[iParam0 /*35*/].f_13 = -1;
	}
}

void func_876(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	switch (Global_40.f_9536[iParam0])
	{
		case -1:
			Global_40.f_9536[iParam0] = 0;
			if (bParam1)
			{
				iVar0 = func_1594();
				if (iVar0 != -1)
				{
					if (Global_40.f_9479[iVar0 /*4*/].f_1 == -1)
					{
						Global_40.f_9479[iVar0 /*4*/].f_1 = iParam0;
					}
					else if (Global_40.f_9479[iVar0 /*4*/].f_2 == -1)
					{
						Global_40.f_9479[iVar0 /*4*/].f_2 = iParam0;
					}
					else
					{
						Global_40.f_9479[iVar0 /*4*/].f_2 = Global_40.f_9479[iVar0 /*4*/].f_1;
						Global_40.f_9479[iVar0 /*4*/].f_1 = iParam0;
					}
				}
			}
			break;
		case 0:
			break;
		case 1:
			break;
	}
}

void func_877(char* sParam0)
{
	if (!PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_ACTIVATE_SWAP(sParam0);
	}
}

int func_878(var uParam0)
{
	return uParam0;
}

bool func_879(int iParam0)
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

bool func_880(int iParam0)
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

bool func_881()
{
	if (Global_1572887.f_12 == -1)
	{
		return false;
	}
	return Global_1058888.f_4;
}

bool func_882(int iParam0)
{
	return func_714(23, iParam0);
}

void func_883(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	Global_1888801[iParam0 /*35*/].f_19 = iParam1;
}

void func_884(int iParam0)
{
	Global_1894899 |= iParam0;
}

void func_885(int iParam0)
{
	Global_1894899 -= Global_1894899 & iParam0;
}

bool func_886()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_149(iVar1, 1))
		{
			if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1888801[iVar1 /*35*/].f_26)))
			{
				SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iVar1 /*35*/].f_26));
			}
		}
		if (Global_1888801[iVar1 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iVar1 /*35*/].f_9, false))
			{
				if (func_112() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9, 523);
				}
				else if (!SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(Global_1888801[iVar1 /*35*/].f_9))
				{
					SCRIPTS::_REQUEST_THREAD_EXIT(Global_1888801[iVar1 /*35*/].f_9);
				}
			}
			else if (func_149(iVar1, 2))
			{
				if (func_112() == -1)
				{
					PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iVar1 /*35*/].f_26), 523);
				}
				else
				{
					SCRIPTS::_REQUEST_THREAD_EXIT_FOR_ALL_THREADS_WITH_THIS_NAME(MISC::GET_HASH_KEY(&(Global_1888801[iVar1 /*35*/].f_26)));
				}
			}
			if (!SCRIPTS::DOES_THREAD_EXIST(Global_1888801[iVar1 /*35*/].f_9))
			{
				Global_1888801[iVar1 /*35*/].f_9 = 0;
				func_161(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_887(int iParam0)
{
	if (((iParam0 == 4 || iParam0 == 5) || iParam0 == 6) || iParam0 == 7)
	{
		return true;
	}
	return false;
}

bool func_888(int iParam0)
{
	if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

void func_889(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_1596(0, 26, 476, func_1595(26), func_1378(iParam0));
			break;
		case 1:
			func_1596(1, 26, 476, func_1595(26), func_1378(iParam0));
			break;
		case 2:
			func_1596(2, 26, 476, func_1595(26), func_1378(iParam0));
			break;
		case 3:
			func_1596(3, 26, 476, func_1595(26), func_1595(26));
			break;
		case 4:
			func_1596(4, 105, 72, func_1595(105), func_1378(iParam0));
			break;
		case 5:
			func_1596(5, 105, 72, func_1595(105), func_1378(iParam0));
			break;
		case 6:
			func_1596(6, 105, 72, func_1595(105), func_1378(iParam0));
			break;
		case 7:
			func_1596(7, 105, 72, func_1595(105), func_1595(105));
			break;
	}
}

bool func_890(Vector3 vParam0)
{
	return VOLUME::_0x769BB7626B8CDB06(vParam0, 0.5f, 0, 0, (1 << 14));
}

void func_891(Vector3 vParam0, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	if (func_587(vParam0))
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
			if (func_1597(vVar2, vParam0, 2.0f, 1))
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

bool func_892(int iParam0)
{
	if (func_587(Global_1392388.f_10[iParam0 /*13*/].f_2) || func_587(Global_1392388.f_10[iParam0 /*13*/].f_5))
	{
		return false;
	}
	return true;
}

bool func_893(int iParam0)
{
	if (!func_1598(3))
	{
		return false;
	}
	if (func_273())
	{
		return false;
	}
	if (!func_1377(iParam0))
	{
		return false;
	}
	if (iParam0 == 3 || iParam0 >= 7)
	{
		return false;
	}
	if (func_592(iParam0))
	{
		return false;
	}
	if (func_903(128, 0))
	{
		return false;
	}
	if (!func_904(2, -1))
	{
		return false;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (func_887(iParam0) && func_151(21))
	{
		return false;
	}
	if (iParam0 == 4 && func_903(92, 0))
	{
		return false;
	}
	if (func_47(Global_1392388.f_10[iParam0 /*13*/].f_1) && func_149(Global_1392388.f_10[iParam0 /*13*/].f_1, (1 << 25)))
	{
		return false;
	}
	if (func_586(Global_1392388.f_10[iParam0 /*13*/]) && !func_266(Global_1392388.f_10[iParam0 /*13*/], 0))
	{
		return false;
	}
	if (func_1279(Global_40.f_9146.f_110) && !func_793(Global_40.f_9146.f_110, 1))
	{
		return false;
	}
	if (func_351(Global_1392388.f_10[iParam0 /*13*/].f_1))
	{
		if (func_905(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_894(int iParam0)
{
	float fVar0;

	if (!func_1598(3))
	{
		return false;
	}
	if (!func_1377(iParam0))
	{
		return false;
	}
	if (func_592(iParam0))
	{
		return false;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1392388, false))
	{
		return false;
	}
	if (func_903(128, 0) && func_46() == 26)
	{
		return false;
	}
	if (!func_904(2, -1))
	{
		return false;
	}
	if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (func_887(iParam0) && func_151(21))
	{
		return false;
	}
	if (iParam0 == 4 && func_903(92, 0))
	{
		return false;
	}
	if (func_47(Global_1392388.f_10[iParam0 /*13*/].f_1) && func_149(Global_1392388.f_10[iParam0 /*13*/].f_1, (1 << 25)))
	{
		return false;
	}
	if (func_586(Global_1392388.f_10[iParam0 /*13*/]) && !func_266(Global_1392388.f_10[iParam0 /*13*/], 0))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST2(Global_1392388.f_10[iParam0 /*13*/].f_2, Global_36);
	if (fVar0 >= 10000.0f)
	{
		return false;
	}
	if (func_446(Global_1347702[37 /*49*/].f_15))
	{
		return false;
	}
	if (func_351(Global_1392388.f_10[iParam0 /*13*/].f_1))
	{
		if (func_905(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_895(int iParam0)
{
	if (!func_1377(iParam0))
	{
		return false;
	}
	return Global_40.f_9146.f_4[iParam0] == 2;
}

Vector3 func_896(int iParam0)
{
	if (!func_1377(iParam0))
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1392388.f_10[iParam0 /*13*/].f_5;
}

float func_897(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 70.0f;
		default:
			break;
	}
	return 75.0f;
}

bool func_898(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if ((func_246(Global_1392388.f_10[iParam0 /*13*/].f_8) || func_446(Global_1392388.f_10[iParam0 /*13*/].f_8)) || func_447(Global_1392388.f_10[iParam0 /*13*/].f_8, 1))
	{
		return true;
	}
	return false;
}

void func_899(int iParam0)
{
	int iVar0;

	iVar0 = 4;
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_595(iParam0)))
	{
		UILOG::_UILOG_REMOVE_ENTRY(iVar0, func_595(iParam0));
	}
}

void func_900(int iParam0, bool bParam1)
{
	func_1599();
	func_901();
	if (!func_1377(iParam0))
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_9))
	{
		func_1276(Global_1392388.f_10[iParam0 /*13*/].f_9);
		VOLUME::DELETE_VOLUME(Global_1392388.f_10[iParam0 /*13*/].f_9);
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_11))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_11));
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392388.f_10[iParam0 /*13*/].f_10))
	{
		MAP::REMOVE_BLIP(&(Global_1392388.f_10[iParam0 /*13*/].f_10));
	}
	if (bParam1)
	{
		func_1600(Global_1392388.f_10[iParam0 /*13*/].f_5, 125.0f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 0;
	Global_40.f_9146.f_79[iParam0] = -15;
	if (func_594(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (Global_1392388.f_10[iParam0 /*13*/].f_8 == func_539(0))
		{
			func_1601(Global_1392388.f_10[iParam0 /*13*/].f_8);
		}
		else
		{
			func_312(Global_1392388.f_10[iParam0 /*13*/].f_8, 1, 2);
		}
	}
	func_306(-1);
}

void func_901()
{
	int iVar0[7];
	int iVar8;

	iVar0[0] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_01");
	iVar0[1] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_02");
	iVar0[2] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_03");
	iVar0[3] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_04");
	iVar0[4] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_07");
	iVar0[5] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_08");
	iVar0[6] = joaat("DOCUMENT_COACH_ROBBERY_NOTE_09");
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (func_1267(iVar0[iVar8], 1, 0))
		{
			func_1602(iVar0[iVar8], 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
		}
		iVar8++;
	}
}

void func_902(int iParam0)
{
	Global_40.f_9146.f_126 |= iParam0;
}

bool func_903(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_112() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_40.f_1094 - 1))
	{
		if (Global_40.f_450[iVar0] == iParam0)
		{
			if (!bParam1 || Global_1347702[iVar0 /*49*/].f_13 & (1 << 14) == 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_904(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (func_112() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = func_1603(func_46(), iParam0);
		}
		iVar1 = MISC::GET_FRAME_COUNT();
		if (Global_1914319.f_3[iParam0 /*446*/].f_444 >= iVar1)
		{
			return Global_1914319.f_3[iParam0 /*446*/].f_445;
		}
		bVar0 = (func_1604(iParam1) || func_795(func_1605(iParam0)));
		Global_1914319.f_3[iParam0 /*446*/].f_444 = iVar1;
		Global_1914319.f_3[iParam0 /*446*/].f_445 = bVar0;
	}
	return bVar0;
}

bool func_905(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_888(iParam0))
	{
		iVar0 = 476;
	}
	else
	{
		iVar0 = 72;
	}
	iVar1 = func_815(iVar0);
	if (func_335(iVar1, 0))
	{
		if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(iVar1, func_1606()))
		{
			return true;
		}
	}
	return false;
}

int func_906(int iParam0, int iParam1, int iParam2)
{
	return iParam2 & 31 | BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) | BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_907(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_1607(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_644())
	{
		return -1;
	}
	iVar0 = func_906(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_806(iVar1, 0);
	func_1608(iVar1, 0);
	func_1609(iVar1, 0);
	func_1610(iVar1, 0);
	func_1611(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1612(iVar1, iParam4);
	}
	return iVar1;
}

void func_908(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_112() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_909(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_377(iParam0))
	{
		case 1:
			iVar0 = func_519(iParam0);
			return func_1613(iVar0);
		case 8:
			iVar1 = func_519(iParam0);
			if (func_520(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_1614(iVar1);
			}
			break;
	}
	return -1;
}

void func_910(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_112() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_1300(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_1615();
		Global_1898077.f_9 = func_1296(Global_1894899.f_2);
		func_1304(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

int func_911()
{
	if (!func_447(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_447(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_447(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_447(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_447(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_447(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_447(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

int func_912(bool bParam0)
{
	if (!bParam0 && func_400(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_913(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_914(int iParam0, bool bParam1)
{
	if (func_112() != -1)
	{
		return;
	}
	if (func_539(0) != iParam0)
	{
		return;
	}
	if (func_1616(iParam0))
	{
		if (bParam1)
		{
			func_1617(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_1618(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_915(int iParam0)
{
	return func_1620(func_1619(iParam0));
}

float func_916(int iParam0, Vector3 vParam1)
{
	if (func_918(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1), vParam1);
	}
	return 1E+08f;
}

bool func_917(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_918(int iParam0)
{
	if (func_917(iParam0))
	{
		return VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1);
	}
	return false;
}

float func_919(int iParam0, Vector3 vParam1, bool bParam4)
{
	Vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) /*3*/ };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_1032(vVar0, vParam1);
}

float func_920(int iParam0, int iParam1, bool bParam2)
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
	return func_1032(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

void func_921(int iParam0)
{
	int iVar0;

	Global_1392240.f_1[iParam0 /*18*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1392240.f_1[iParam0 /*18*/].f_4 = -1;
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_321(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_1621(Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0]);
		Global_1392240.f_1[iParam0 /*18*/].f_6[iVar0] = 0;
		iVar0++;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_13 = -1;
	Global_1392240.f_1[iParam0 /*18*/].f_14 = 0;
}

char* func_922(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HOMEROB_ABERDEEN_PIG_FARM";
		case 1:
			return "HOMEROB_CARMODY_DELL";
		case 2:
			return "HOMEROB_CATFISH_JACKSONS";
		case 3:
			return "HOMEROB_CHEZ_PORTER";
		case 4:
			return "HOMEROB_LONNIES_SHACK";
		case 5:
			return "HOMEROB_LITE_VAN_HORN";
		case 6:
			return "HOMEROB_ROCKY_SEVEN";
		case 7:
			return "HOMEROB_WATSONS_CABIN";
		default:
			break;
	}
	return "HOMEROB_INVALID";
}

int func_923(int iParam0)
{
	return Global_40.f_9422[iParam0 /*7*/];
}

void func_924(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	Global_40.f_9422[iParam0 /*7*/] = iParam1;
	if (!bParam2)
	{
		func_823(&(Global_40.f_9422[iParam0 /*7*/]), 0, 0, iParam4, iParam3, 0, 0, 0);
	}
}

bool func_925(int iParam0, int iParam1)
{
	return Global_1392240.f_1[iParam0 /*18*/].f_14 & iParam1 != 0;
}

bool func_926()
{
	if (func_1622(1))
	{
		return false;
	}
	return Global_1934181;
}

bool func_927(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 8);
}

void func_928(int iParam0)
{
	if (!func_929(iParam0, 2))
	{
		return;
	}
	func_157(Global_1392240.f_1[iParam0 /*18*/].f_4, 58, Global_1392240.f_1[iParam0 /*18*/], 0);
	func_1623(iParam0, 2);
}

bool func_929(int iParam0, int iParam1)
{
	return Global_40.f_9422[iParam0 /*7*/].f_4 & iParam1 != 0;
}

bool func_930(int iParam0, int iParam1)
{
	return Global_40.f_9422[iParam0 /*7*/].f_5 & iParam1 != 0;
}

void func_931(int iParam0)
{
	func_939(iParam0, 4);
	func_159(Global_1392240.f_1[iParam0 /*18*/].f_4, 58, Global_1392240.f_1[iParam0 /*18*/], func_1624(iParam0));
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392240.f_1[iParam0 /*18*/].f_5, func_1624(iParam0));
	}
}

int func_932(int iParam0)
{
	if (!func_927(iParam0))
	{
		return 0;
	}
	if (func_322(iParam0))
	{
		return 0;
	}
	if (((!func_152(94) && !func_1337(94)) && !func_152(95)) && !func_1337(95))
	{
	}
	func_939(iParam0, 1);
	return 1;
}

void func_933(int iParam0, int iParam1)
{
	if (func_925(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_14 |= iParam1;
}

void func_934(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1128(731);
			func_1128(732);
			break;
		case 1:
			func_1128(737);
			func_1128(869);
			func_1128(740);
			break;
		case 2:
			func_1128(741);
			func_1128(743);
			func_1128(742);
			break;
		case 3:
			func_1128(794);
			func_1128(795);
			func_1128(796);
			func_1128(797);
			func_1128(798);
			break;
		case 4:
			func_1128(764);
			func_1128(765);
			func_1128(766);
			func_1128(767);
			break;
		case 5:
			break;
		case 6:
			func_1128(799);
			break;
		case 7:
			func_1128(744);
			break;
	}
}

void func_935(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CMD_TENANT1_LONGDAY"), false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CMD_TENANT1_NIGHT"), false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CMD_TENANT2_LONGDAY"), false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("CMD_TENANT2_NIGHT"), false);
			break;
		case 2:
			func_1625(0, 0, 0);
			break;
		case 4:
			func_1626(0, 0, 0, 0);
			break;
		case 7:
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAT_OLDLADY_LONGDAY"), false);
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAT_OLDLADY_NIGHT"), false);
			break;
	}
}

bool func_936(int iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;

	iVar0 = func_923(iParam0);
	if (!func_793(iVar0, 1) && iVar0 != -15)
	{
		func_1488(iVar0, &uVar1, &uVar2, &uVar3, &uVar4, &uVar5, &uVar6);
		return false;
	}
	return true;
}

bool func_937()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_CAMP")) < 0)
	{
		return false;
	}
	if (!func_1627((1 << 23)))
	{
		return false;
	}
	return true;
}

bool func_938(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_9052, iParam0);
}

void func_939(int iParam0, int iParam1)
{
	if (func_929(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_9422[iParam0 /*7*/].f_4 |= iParam1;
}

bool func_940()
{
	if (func_903(95, 0) && !func_152(95))
	{
		return true;
	}
	return false;
}

bool func_941()
{
	if (func_152(95))
	{
		return true;
	}
	if (func_1337(95))
	{
		return true;
	}
	if (func_929(4, (1 << 20)))
	{
		return true;
	}
	return false;
}

int func_942()
{
	return Global_1391438.f_414;
}

void func_943(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_944(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

void func_945(int iParam0, int iParam1)
{
	if (func_946(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_15 |= iParam1;
}

bool func_946(int iParam0, int iParam1)
{
	return Global_1392240.f_1[iParam0 /*18*/].f_15 & iParam1 != 0;
}

void func_947(int iParam0, int iParam1)
{
	if (!func_946(iParam0, iParam1))
	{
		return;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_15 -= Global_1392240.f_1[iParam0 /*18*/].f_15 & iParam1;
}

void func_948(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	char* sVar5;

	if (!func_1380(iParam0))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1392240.f_1[iParam0 /*18*/].f_5))
	{
		return;
	}
	iVar0 = 0;
	iVar1 = joaat("BLIP_STYLE_PROC_HOME_ROBBERY");
	switch (iParam0)
	{
		case 6:
			if (func_1628())
			{
				iVar0 = joaat("BLIP_RC_CHARLOTTE_BALFOUR");
				iVar1 = joaat("BLIP_STYLE_RCM");
			}
			else
			{
				iVar0 = joaat("BLIP_RC");
				iVar1 = joaat("BLIP_STYLE_RCM");
			}
			break;
		default:
			break;
	}
	vVar2 = { Global_1392240.f_1[iParam0 /*18*/] /*3*/ };
	switch (iParam0)
	{
		case 6:
			sVar5 = func_1629(&vVar2);
			break;
	}
	Global_1392240.f_1[iParam0 /*18*/].f_5 = MAP::BLIP_ADD_FOR_COORDS(iVar1, vVar2);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_SPRITE(Global_1392240.f_1[iParam0 /*18*/].f_5, iVar0, true);
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1392240.f_1[iParam0 /*18*/].f_5, sVar5);
	if (bParam1)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1392240.f_1[iParam0 /*18*/].f_5, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	}
}

int func_949(int iParam0)
{
	char* sVar0;
	Vector3 vVar1;

	sVar0 = "homeinvasion";
	SCRIPTS::REQUEST_SCRIPT(sVar0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sVar0))
	{
		return 0;
	}
	if (func_1630(iParam0))
	{
		return 0;
	}
	vVar1.x = iParam0;
	vVar1.f_1 = Global_1392240.f_1[iParam0 /*18*/].f_5;
	vVar1.f_2 = func_784();
	Global_1392240 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sVar0, &vVar1, 3, 10000);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sVar0);
	func_1631(iParam0, (1 << 9));
	return 1;
}

void func_950(int iParam0, bool bParam1)
{
	if (bParam1 || func_285(iParam0, (1 << 13)))
	{
		if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, func_1632(iParam0)))
		{
			return;
		}
		UILOG::_UILOG_REMOVE_ENTRY(3, func_1632(iParam0));
		func_856(iParam0, (1 << 13));
	}
}

void func_951()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_02", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_03", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_04", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_stage_05", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_appleseed_timber_deserted", false, true);
}

void func_952()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_02", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_03", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_stage_04", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_castors_pond_house_deserted", false, true);
}

void func_953()
{
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_01", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_02", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_03", false, true);
	AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_central_union_railroad_camp_stage_Abandoned", false, true);
}

void func_954()
{
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPA"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPINT"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPA_WORKERS_1"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPA_WORKERS_2"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_1A"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_1B"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPB"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPB_WORKERS_1"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPB_WORKERS_2"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_2A"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_2B"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPC"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPC_WORKERS_1"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPC_WORKERS_2"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPD"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPD_WORKERS_1"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_GUARDS_STAGE_4"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_RAILROADCAMPSTALLED"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_FOREMAN_STAGE_1"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_FOREMAN_STAGE_2"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_FOREMAN_STAGE_3"), false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RR_FOREMAN_STAGE_4"), false);
}

bool func_955(int iParam0)
{
	return iParam0 > -1;
}

bool func_956(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1279(iParam1) || !func_1279(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_957(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_955(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		return func_1412(iParam0, 26, 1);
	}
	if (bParam2)
	{
		if (!func_335(func_958(iParam0), 0))
		{
			return false;
		}
	}
	if (!func_1633(iParam0, 1, 0))
	{
		return false;
	}
	if (func_1412(iParam0, 44, 1))
	{
		return false;
	}
	return true;
}

int func_958(int iParam0)
{
	if (!func_955(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

int func_959(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LO_DUTCH");
		case 1:
			return joaat("LO_JOHN");
		case 2:
			return joaat("LO_JAVIER");
		case 3:
			return joaat("LO_BILL");
		case 4:
			return joaat("LO_UNCLE");
		case 5:
			return joaat("LO_HOSEA");
		case 6:
			return joaat("LO_MICAH");
		case 7:
			if (func_679())
			{
				return joaat("LO_CHARLES_ES");
			}
			else
			{
				return joaat("LO_CHARLES");
			}
			break;
		case 8:
			return joaat("LO_SEAN");
		case 9:
			return joaat("LO_LENNY");
		case 10:
			if (func_447(Global_1347702[63 /*49*/].f_15, 1))
			{
				return joaat("LO_KIERAN");
			}
			break;
		case 11:
			if (func_447(Global_1347702[134 /*49*/].f_15, 1))
			{
				return joaat("LO_SADIE");
			}
			break;
		case 24:
			return joaat("LO_CLEET");
		case 25:
			return joaat("LO_JOE");
		case 26:
			return joaat("LO_EAGLE_FLIES");
	}
	return joaat("LOADOUT_DEFAULT");
}

int func_960(int iParam0, int iParam1, bool bParam2)
{
	if (func_1541(iParam0))
	{
		func_1634(iParam0, 0);
		func_1635(iParam0, 17, 1);
		strcpy_s(&(Global_1360165[iParam0 /*1157*/].f_39), 64, "");
		if (bParam2)
		{
			func_1636(iParam0);
		}
		else
		{
			func_1637(iParam0, 13, 1);
		}
		return 1;
	}
	return 0;
}

void func_961(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
			func_1638(uParam0);
			break;
	}
	if (*uParam0 != 0)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_2, false))
		{
			func_1638(uParam0);
		}
		if (uParam0->f_14 > -1)
		{
			if (!Global_1359489.f_63.f_242[uParam0->f_14 /*18*/].f_15)
			{
				func_1638(uParam0);
			}
		}
	}
}

void func_962(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 3)
	{
		return;
	}
	if (uParam0->f_15)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
		{
			func_1639(iParam1);
		}
	}
}

int func_963(int iParam0)
{
	switch (iParam0)
	{
		case 1784895540:
			return joaat("BLIP_REGION_HUNTING");
		case 654481153:
			return joaat("BLIP_MG_FISHING");
		case -2036347356:
			return joaat("BLIP_MG_POKER");
		case -1341684320:
			return joaat("BLIP_MG_POKER");
		case -1567081107:
			return joaat("BLIP_MG_DOMINOES");
		case -919476462:
			return joaat("BLIP_ROBBERY_COACH");
		case -1670940721:
			return joaat("BLIP_ROBBERY_BANK");
		case 754620122:
			return joaat("BLIP_AMBIENT_HERD");
		case -1739349092:
			return joaat("BLIP_REGION_CARAVAN");
		case -1511391406:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET");
		case 565221344:
			return joaat("BLIP_ROBBERY_HOME");
		default:
			break;
	}
	return 0;
}

char* func_964(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return "ACT_ANY_LABEL";
		case 234527101:
			return "ACT_NONE_LABEL";
		case 1784895540:
			return "ACT_HUNTING_LABEL";
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL";
		case 654481153:
			return "ACT_FISHING_LABEL";
		case -1215120894:
			return "ACT_KIDNAPPING_LABEL";
		case 931703394:
			return "ACT_DRINKSHOOT_CAMP_LABEL";
		case 1193949598:
			return "ACT_SALOON_LABEL";
		case 754620122:
			return "ACT_RUSTLING_LABEL";
		case -2036347356:
			return "ACT_POKER_LABEL";
		case -1341684320:
			return "ACT_POKER_CAMP_LABEL";
		case -919476462:
			return "ACT_COACH_LABEL";
		case -1670940721:
			return "ACT_BANK_LABEL";
		case 380107708:
			return "ACT_TRAIN_LABEL";
		case 565221344:
			return "ACT_HOMEROB_LABEL";
		case -1700356309:
			return "ACT_BLACKJACK_LABEL";
		case 1523333387:
			return "ACT_CRAPS_LABEL";
		case 1744128959:
			return "ACT_HIDEOUT_LABEL";
		case -1567081107:
			return "ACT_DOMINOES_CAMP_LABEL";
		case -1739349092:
			return "ACT_RETURN_LABEL";
		case -301635006:
			return "ACT_MISSION_LABEL";
		default:
			break;
	}
	return "ACT_NONE_LABEL";
}

char* func_965(int iParam0, bool bParam1)
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
			if ((func_447(Global_1835011[59 /*74*/].f_1, 1) || func_447(Global_1347702[1 /*49*/].f_15, 1)) || func_446(Global_1347702[1 /*49*/].f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_440(joaat("CSTAG_FLOW_DOG_IN_CAMP_POST"), 1))
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

int func_966(int iParam0)
{
	switch (iParam0)
	{
		case -1511391406:
			return 73;
		case -1341684320:
			return 72;
		case -1567081107:
			return 74;
		case 1784895540:
			return 75;
		case 654481153:
			return 76;
		case 565221344:
			return 78;
		case -919476462:
			return 77;
		case -1670940721:
			return 79;
		case 754620122:
			return 81;
		default:
			break;
	}
	return 0;
}

int func_967(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_JOB_BILL");
		case 7:
			return joaat("BLIP_MODIFIER_JOB_CHARLES");
		case 5:
			return joaat("BLIP_MODIFIER_JOB_HOSEA");
		case 2:
			return joaat("BLIP_MODIFIER_JOB_JAVIER");
		case 1:
			return joaat("BLIP_MODIFIER_JOB_JOHN");
		case 20:
			return joaat("BLIP_MODIFIER_JOB_KAREN");
		case 10:
			return joaat("BLIP_MODIFIER_JOB_KIERAN");
		case 9:
			return joaat("BLIP_MODIFIER_JOB_LENNY");
		case 6:
			return joaat("BLIP_MODIFIER_JOB_MICAH");
		case 17:
			return joaat("BLIP_MODIFIER_JOB_PEARSON");
		case 8:
			return joaat("BLIP_MODIFIER_JOB_SEAN");
		case 18:
			return joaat("BLIP_MODIFIER_JOB_STRAUSS");
		case 22:
			return joaat("BLIP_MODIFIER_JOB_TILLY");
		case 4:
			return joaat("BLIP_MODIFIER_JOB_UNCLE");
	}
	return 0;
}

bool func_968(int iParam0)
{
	switch (func_112())
	{
		case -1:
			return Global_1357549.f_1494 & iParam0 != 0;
	}
	return false;
}

void func_969(int iParam0)
{
	switch (func_112())
	{
		case -1:
			Global_1357549.f_1494 -= Global_1357549.f_1494 & iParam0;
			break;
	}
}

float func_970(var uParam0)
{
	if (!func_456(uParam0))
	{
		return 0.0f;
	}
	if (func_971(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1197() - uParam0->f_1);
}

bool func_971(var uParam0)
{
	return func_1196(*uParam0, 2);
}

void func_972(var uParam0)
{
	if (!func_456(uParam0))
	{
	}
	if (!func_971(uParam0))
	{
		uParam0->f_2 = (func_1197() - uParam0->f_1);
		func_1640(uParam0, 2);
	}
}

void func_973(var uParam0)
{
	if (!func_456(uParam0))
	{
	}
	if (func_971(uParam0))
	{
		uParam0->f_1 = (func_1197() - uParam0->f_2);
		uParam0->f_2 = 0.0f;
		func_1641(uParam0, 2);
	}
}

int func_974(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			func_1642(&(Global_40.f_4283.f_6[iVar0 /*5*/]), bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

float func_975(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (func_440(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
			{
				return 360.0f;
			}
			break;
	}
	return 900.0f;
}

int func_976(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_1643(iParam0);
	iVar3 = func_1644(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (Global_40.f_4283.f_6[iVar0 /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0 /*5*/] = iParam0;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_538();
				func_823(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0 /*5*/].f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0 /*5*/].f_4 = iVar2;
			func_1645(iParam0, 1);
			if (func_1646(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4 /*5*/].f_4 == iVar2 && Global_40.f_4283.f_6[iVar4 /*5*/] != iParam0)
					{
						func_1642(&(Global_40.f_4283.f_6[iVar4 /*5*/]), 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_1647(1, iParam0);
				}
				else
				{
					func_1648(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_977(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_3;
}

void func_978()
{
	struct<16> /*128*/ sVar0;

	sVar0.f_15 = joaat("DUTCH_GANG");
	sVar0.f_0 = PLAYER::PLAYER_PED_ID();
	sVar0.f_12 = 10;
	sVar0.f_4 = joaat("DUTCH_GANG");
	sVar0.f_8 = 0;
	MISC::_CREATE_AI_MEMORY(&sVar0, 17);
}

bool func_979(int iParam0)
{
	return Global_1899515 > iParam0;
}

void func_980()
{
	struct<16> /*128*/ sVar0;

	sVar0.f_15 = joaat("DUTCH_GANG");
	sVar0.f_0 = PLAYER::PLAYER_PED_ID();
	sVar0.f_12 = 9;
	sVar0.f_4 = joaat("DUTCH_GANG");
	sVar0.f_8 = 0;
	MISC::_CREATE_AI_MEMORY(&sVar0, 17);
}

bool func_981(int iParam0)
{
	return !func_1649(iParam0);
}

bool func_982(int iParam0)
{
	return func_1650(iParam0, 2);
}

bool func_983(int iParam0, float fParam1, var uParam2)
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1945188[iParam0 /*18*/].f_16, false))
	{
		return true;
	}
	switch (Global_1945188[iParam0 /*18*/].f_5)
	{
		case 1:
			if (!VOLUME::DOES_VOLUME_EXIST(Global_1945188[iParam0 /*18*/].f_10))
			{
				return true;
			}
			*uParam2 = { VOLUME::GET_VOLUME_COORDS(Global_1945188[iParam0 /*18*/].f_10) /*3*/ };
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1945188[iParam0 /*18*/].f_11))
			{
				return true;
			}
			*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_1945188[iParam0 /*18*/].f_11, Global_1945188[iParam0 /*18*/].f_12) /*3*/ };
			break;
		case 5:
			*uParam2 = { 0.0f, 0.0f, 0.0f /*3*/ };
			*fParam1 = 0.0f;
			return false;
		case 2:
			*uParam2 = { Global_1945188[iParam0 /*18*/].f_6 /*3*/ };
			break;
		case 0:
		case 4:
			return false;
	}
	*fParam1 = BUILTIN::VDIST2(Global_36, *uParam2);
	if (!func_1650(iParam0, 128))
	{
		if (*fParam1 > 22500.0f)
		{
			return true;
		}
	}
	return false;
}

void func_984(int iParam0)
{
	if (!func_982(iParam0))
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

bool func_985()
{
	char cVar0[32];

	if (!Global_1879534.f_1)
	{
		return true;
	}
	strcpy_s(&cVar0, 32, "MUD1_EXT");
	if (func_1651(cVar0))
	{
		return true;
	}
	return false;
}

void func_986()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		iVar1 = func_627(iVar0);
		if (iVar1 != -1)
		{
			if (func_1652(iVar1) != -1 && iVar1 != func_113())
			{
				if (iVar0 == Global_1934051.f_33 && func_549(iVar0))
				{
					func_1207(iVar0, joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER"));
					func_1170(&(Global_1934051.f_33), 0);
				}
				iVar2 = func_1603(iVar1, 19);
				if (iVar2 != -1)
				{
					if (iVar0 == Global_1914319.f_15936[iVar2 /*6*/] && func_549(iVar0))
					{
						if (Global_1914319.f_15936[iVar2 /*6*/].f_5)
						{
							Global_1914319.f_15936[iVar2 /*6*/].f_5 = 0;
						}
						func_1170(&(Global_1914319.f_15936[iVar2 /*6*/]), 0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_987()
{
	int iVar0;
	struct<8> /*64*/ sVar1;
	int iVar9;

	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("dewclm_nav_camp_00"))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("dewclm_nav_camp_00");
	}
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE("shb_nav_camp_00"))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP("shb_nav_camp_00");
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_1653(iVar0))
		{
			iVar9 = 0;
			while (iVar9 <= 2)
			{
				if (func_1654(iVar0, iVar9))
				{
					sVar1 = { func_1655(iVar0, iVar9) /*8*/ };
					if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(&sVar1))
					{
						PATHFIND::_NAVMESH_DEACTIVATE_SWAP(&sVar1);
					}
				}
				iVar9++;
			}
		}
		iVar0++;
	}
}

void func_988(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	float fVar8;

	func_1656(iParam0);
	iVar1 = func_623(iParam0);
	vVar2 = { func_1657(iVar1, 1) /*3*/ };
	if (func_439() == iParam0)
	{
		vVar5 = { func_1658(iParam0) /*3*/ };
		fVar8 = func_1659(iParam0);
		func_1660(iParam0, bParam1);
		if (!func_890(vVar5))
		{
			func_827(vVar5, fVar8, "CaravanCamp", 0, 0, 4, 0, -1082130432);
		}
		func_1661(iParam0);
		if (func_1653(iParam0))
		{
			iVar0 = func_1662(iParam0);
			if (func_1145() != 2)
			{
				if (func_441(iVar0))
				{
					if (!STREAMING::IS_IPL_ACTIVE_HASH(iVar0))
					{
						STREAMING::REQUEST_IPL_HASH(iVar0);
					}
				}
			}
			else if (func_441(iVar0))
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(iVar0))
				{
					STREAMING::REMOVE_IPL_HASH(iVar0);
				}
			}
			func_1663(iParam0);
		}
		func_1664(iParam0, 1);
		if (!bParam2)
		{
			func_1665(iParam0, iVar1, 1, 1);
		}
	}
	else
	{
		func_1666(iParam0, &iVar0);
		if (func_890(vVar2))
		{
			func_891(vVar2, 0);
		}
		func_1664(iParam0, 0);
		if (!bParam2)
		{
			func_1665(iParam0, iVar1, 0, 0);
		}
	}
}

void func_989()
{
	int iVar0;

	iVar0 = func_1667();
	if (iVar0 != -1)
	{
		Global_1395601.f_5[iVar0 /*28*/].f_15 = { func_1668() /*3*/ };
	}
}

void func_990()
{
	if (func_575(603))
	{
		return;
	}
	if (func_391(PLAYER::PLAYER_PED_ID()))
	{
		if (func_1669(PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			func_576(603, 0);
		}
	}
}

bool func_991(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_1670(iParam0) /*3*/ };
	if (func_587(vVar0))
	{
		return false;
	}
	return true;
}

bool func_992()
{
	return func_1134((1 << 9));
}

void func_993(int iParam0)
{
	int iVar0;

	if (*iParam0 == -15)
	{
		*iParam0 = func_538();
	}
	if (func_1671())
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(4, 23);
	}
	else
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(12, 31);
	}
	func_823(iParam0, 0, 0, iVar0, 0, 0, 0, 0);
}

bool func_994(int iParam0)
{
	return iParam0 != -15;
}

void func_995()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = -1;
	iVar1 = 0;
	while (true)
	{
		iVar1++;
		if (iVar1 > 25)
		{
			return;
		}
		iVar2 = func_1672();
		if (func_1673(iVar2))
		{
		}
		else if (!func_1674(iVar2))
		{
		}
		else if (func_1410(iVar2))
		{
		}
		else if (func_1675(iVar2))
		{
		}
		else if (func_1676(iVar2))
		{
		}
		else if (iVar2 == 10 && !func_370(63))
		{
		}
		else if (Global_40.f_4283.f_332[0] == iVar2 || Global_40.f_4283.f_332[1] == iVar2)
		{
		}
		else
		{
			iVar0 = iVar2;
		}
	else
	{
		}
	}
	bVar3 = func_1677(iVar0);
	iVar4 = func_1678(bVar3);
	if (bVar3 == 0)
	{
		func_1679(iVar0, iVar4);
	}
	else
	{
		func_1680(iVar0, bVar3, iVar4);
	}
	Global_40.f_4283.f_332[1] = Global_40.f_4283.f_332[0];
	Global_40.f_4283.f_332[0] = iVar0;
}

void func_996(int iParam0)
{
	int iVar0;
	int iVar1;

	if (*iParam0 == -15)
	{
		*iParam0 = func_538();
	}
	if (func_1681())
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(10, 21);
	}
	else
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(6, 14);
	}
	func_823(iParam0, 0, 0, iVar1, iVar0, 0, 0, 0);
}

void func_997()
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;
	struct<12> /*96*/ sVar20;
	int iVar34;

	if (func_1682() <= 0)
	{
		return;
	}
	sVar2 = { func_1683(0, 1426626782, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (func_1684(&sVar2, &iVar0, &iVar1, 0))
	{
		sVar20.f_9 = joaat("SLOTID_NONE");
		iVar34 = 0;
		while (iVar34 < iVar1)
		{
			if (func_1685(&sVar20, iVar34, iVar0, iVar1))
			{
				if (func_1686(sVar20.f_4) && (!func_1687(sVar20.f_4) || sVar20.f_11 > 1))
				{
					func_1688(sVar20.f_4, 2, 1, joaat("REMOVE_REASON_DEFAULT"));
				}
				else
				{
					iVar34++;
				}
				func_1689(iVar0);
			}
		}
	}
}

bool func_998(int iParam0)
{
	if (!func_1690(iParam0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_1691(iParam0, 1));
}

int func_999(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 5:
				return Global_40.f_4283.f_320;
			default:
				break;
		}
	}
	switch (iParam0)
	{
		case 0:
			return Global_40.f_4283.f_313;
		case 1:
			return Global_40.f_4283.f_316;
		case 2:
			return Global_40.f_4283.f_317;
		case 12:
			return Global_40.f_4283.f_315;
		case 13:
			return Global_40.f_4283.f_314;
		case 14:
			return Global_40.f_4283.f_322;
		case 3:
			return Global_40.f_4283.f_318;
		case 4:
			return Global_40.f_4283.f_319;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 15:
			return Global_40.f_4283.f_321;
		default:
			break;
	}
	return 1;
}

void func_1000(int iParam0)
{
	if (!func_1690(iParam0))
	{
		return;
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_1691(iParam0, 1));
}

bool func_1001()
{
	if (func_1021(joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"), 0, 0) == 0)
	{
		return false;
	}
	if (func_1021(joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"), 0, 0) == 0)
	{
		return false;
	}
	if (func_1021(joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"), 0, 0) == 0)
	{
		return false;
	}
	if (func_1021(joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"), 0, 0) == 0)
	{
		return false;
	}
	if (func_1021(joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"), 0, 0) == 0)
	{
		return false;
	}
	if (func_1021(joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"), 0, 0) == 0)
	{
		return false;
	}
	return true;
}

void func_1002(int iParam0, int iParam1)
{
	Global_1327490[iParam0 /*11*/].f_1 = iParam1;
}

bool func_1003(int iParam0, int iParam1)
{
	return Global_1327490[iParam0 /*11*/] & iParam1 != 0;
}

bool func_1004(int iParam0, int iParam1)
{
	if (!func_352(iParam0))
	{
		return false;
	}
	return Global_1327490[iParam0 /*11*/] & iParam1 != 0;
}

int func_1005()
{
	return Global_1898438;
}

bool func_1006()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (func_1692(iVar1))
		{
			Global_1327490[iVar1 /*11*/].f_9 = (1.0f * (float)(7 - Global_1327490[iVar1 /*11*/].f_2));
			iVar0 = 1;
		}
		else
		{
			Global_1327490[iVar1 /*11*/].f_9 = -999.9f;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1007()
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = -99999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_1327490[iVar2 /*11*/].f_9 > fVar0)
		{
			fVar0 = Global_1327490[iVar2 /*11*/].f_9;
			iVar1 = iVar2;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_1008(int iParam0)
{
	return func_226(Global_1425351.f_17, iParam0);
}

int func_1009()
{
	return joaat("UNDERTAKER");
}

bool func_1010(bool bParam0)
{
	if (!func_1693(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

int func_1011(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> /*32*/ sVar0;
	struct<2> /*16*/ sVar13;
	int iVar17;

	sVar0 = -2;
	sVar0.f_0 = iParam1;
	sVar0.f_1 = iParam2;
	sVar0.f_2 = iParam3;
	sVar0.f_3 = iParam4;
	sVar13.f_1 = sParam0;
	iVar17 = UIFEED::_UI_FEED_POST_FEED_TICKER(&sVar0, &sVar13, bParam5);
	return iVar17;
}

bool func_1012(bool bParam0, int iParam1)
{
	if (!func_1693(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

char* func_1013(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1014(var uParam0, var uParam1, var uParam2, var uParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> /*40*/ sVar5;
	int iVar10;
	int iVar11;

	if (func_112() != -1)
	{
		return 0;
	}
	if (Global_1955825 != 2)
	{
		return 0;
	}
	bVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_1693(bVar0, 0))
	{
		return 0;
	}
	if (!func_1694(bVar0))
	{
		*uParam2 += iVar2;
		return 0;
	}
	iVar3 = 1;
	func_1695(bVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_1696(bVar0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		iVar4 = iVar2;
	}
	sVar5 = { func_1697(bVar0, 0, 1) /*5*/ };
	iVar10 = func_1698(bVar0, &sVar5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1699(bVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1700(iVar11))
	{
		*uParam2 += iVar2;
		return 0;
	}
	if (!func_1701(bVar0, iVar4, 1, 0, 0, joaat("ADD_REASON_PURCHASED"), 0, 0, 0, 0))
	{
		*uParam2 += iVar2;
		return 0;
	}
	func_1702(iVar11, 0, 0, 0, 1);
	*uParam3 += iVar11;
	*uParam1 += iVar2;
	return 1;
}

int func_1015(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> /*32*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam4;
	sVar0.f_1 = sParam5;
	sVar0.f_2 = sParam6;
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

void func_1016(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_1486(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_1017(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar9;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_1955825 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_CRAFTING_ACTION(&uVar0))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar9))
		{
			if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

struct<2> /*16*/ func_1018(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

int func_1019(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return (1 << 9);
		case 9:
			return (1 << 10);
		case 10:
			return (1 << 11);
		case 11:
			return (1 << 12);
		case 12:
			return (1 << 13);
		case 13:
			return (1 << 14);
		case 14:
			return (1 << 15);
		case 15:
			return (1 << 16);
		case 16:
			return (1 << 17);
		case 17:
			return (1 << 18);
		case 18:
			return (1 << 19);
		case 19:
			return (1 << 20);
		default:
			break;
	}
	return 1;
}

int func_1020()
{
	return Global_40.f_8863.f_148;
}

int func_1021(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!func_1693(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1703(bParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		bVar1 = func_1704(bParam0, 1);
		if (bVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_1705(bParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_1289(bParam2), bParam0, false);
	return iVar2;
}

struct<2> /*16*/ func_1022(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

int func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("SP_CHAL_BAND_ROOT");
		case 1:
			return joaat("SP_CHAL_EXPL_ROOT");
		case 2:
			return joaat("SP_CHAL_GAMB_ROOT");
		case 3:
			return joaat("SP_CHAL_HERB_ROOT");
		case 4:
			return joaat("SP_CHAL_HORSE_ROOT");
		case 5:
			return joaat("SP_CHAL_HUNT_ROOT");
		case 6:
			return joaat("SP_CHAL_SHOT_ROOT");
		case 7:
			return joaat("SP_CHAL_SURV_ROOT");
		case 8:
			return joaat("SP_CHAL_WEAP_ROOT");
		default:
			break;
	}
	return 0;
}

int func_1024(int iParam0)
{
	return iParam0 & 31;
}

void func_1025(int iParam0, int iParam1)
{
	if (Global_40.f_9571[iParam0 /*10*/].f_8 >= iParam1)
	{
		switch (iParam0)
		{
			case 0:
				func_1706(0, joaat("PLAN_ROBBERY_A"), 1);
				func_1706(0, joaat("PLAN_ROBBERY_B"), 1);
				func_1706(0, joaat("GANG_POLITICS_A"), 1);
				func_1706(0, joaat("GANG_POLITICS_B"), 1);
				break;
			case 2:
				func_1706(2, joaat("WAR_STORY"), 1);
				func_1706(2, joaat("CAPTIVE_LAWMAN"), 1);
				func_1706(2, joaat("CAPTIVE_OFFICIAL"), 1);
				break;
			case 1:
				func_1706(1, joaat("FIND_HAT"), 1);
				func_1706(1, joaat("FIND_SHOE"), 1);
				break;
			case 3:
				func_1706(3, joaat("ARGUMENT_DEATH"), 1);
				func_1706(3, joaat("ARGUMENT_SETTLE"), 1);
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				if (func_530(Global_40.f_10991.f_35[0], (1 << 11)))
				{
					func_1706(0, joaat("PLAN_ROBBERY_A"), 1);
				}
				if (func_530(Global_40.f_10991.f_35[0], (1 << 13)))
				{
					func_1706(0, joaat("PLAN_ROBBERY_B"), 1);
				}
				if (func_530(Global_40.f_10991.f_35[0], (1 << 12)))
				{
					func_1706(0, joaat("GANG_POLITICS_A"), 1);
				}
				if (func_530(Global_40.f_10991.f_35[0], (1 << 14)))
				{
					func_1706(0, joaat("GANG_POLITICS_B"), 1);
				}
				break;
			case 2:
				if (func_530(Global_40.f_10991.f_35[0], 256))
				{
					func_1706(2, joaat("WAR_STORY"), 1);
				}
				if (func_530(Global_40.f_10991.f_35[0], (1 << 9)))
				{
					func_1706(2, joaat("CAPTIVE_LAWMAN"), 1);
				}
				if (func_530(Global_40.f_10991.f_35[0], (1 << 10)))
				{
					func_1706(2, joaat("CAPTIVE_OFFICIAL"), 1);
				}
				break;
			case 1:
				if (func_530(Global_40.f_10991.f_35[0], 16))
				{
					func_1706(1, joaat("FIND_HAT"), 1);
				}
				if (func_530(Global_40.f_10991.f_35[0], 32))
				{
					func_1706(1, joaat("FIND_SHOE"), 1);
				}
				break;
			case 3:
				if (func_530(Global_40.f_10991.f_35[0], (1 << 15)))
				{
					func_1706(3, joaat("ARGUMENT_DEATH"), 1);
				}
				if (func_530(Global_40.f_10991.f_35[0], (1 << 16)))
				{
					func_1706(3, joaat("ARGUMENT_SETTLE"), 1);
				}
				break;
		}
	}
}

int func_1026(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (*uParam1)
			{
				case 0:
					return 0;
				case 1:
					return 11;
				case 2:
					return 2;
				default:
					break;
			}
			break;
		case 1:
			switch (*uParam1)
			{
				case 0:
					return 1;
				case 1:
					return 9;
				case 2:
					return 4;
				default:
					break;
			}
			break;
		case 2:
			switch (*uParam1)
			{
				case 0:
					return 2;
				case 1:
					return 10;
				case 2:
					return 0;
				case 3:
					return 11;
				default:
					break;
			}
			break;
		case 3:
			switch (*uParam1)
			{
				case 0:
					return 3;
				case 1:
					return 7;
				case 2:
					return 9;
				default:
					break;
			}
			break;
		case 6:
			switch (*uParam1)
			{
				case 0:
					return 6;
				case 1:
					return 3;
				case 2:
					return 10;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 7:
			switch (*uParam1)
			{
				case 0:
					return 7;
				case 1:
					return 3;
				case 2:
					return 9;
				default:
					break;
			}
			break;
		case 9:
			switch (*uParam1)
			{
				case 0:
					return 9;
				case 1:
					return 1;
				case 2:
					return 11;
				default:
					break;
			}
			break;
		case 10:
			switch (*uParam1)
			{
				case 0:
					return 10;
				case 1:
					return 6;
				case 2:
					return 9;
				case 3:
					return 11;
				case 4:
					return 2;
				default:
					break;
			}
			break;
		case 11:
			switch (*uParam1)
			{
				case 0:
					return 11;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 12:
			switch (*uParam1)
			{
				case 0:
					return 12;
				case 1:
					return 4;
				default:
					break;
			}
			break;
		case 16:
			switch (*uParam1)
			{
				case 0:
					return 16;
				case 1:
					return 15;
				default:
					break;
			}
			break;
	}
	*uParam1 = 0;
	return iParam0;
}

int func_1027(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8;
		case 1:
			return 15;
		case 2:
			return 5;
		case 15:
			return 23;
		case 3:
			return 15;
		case 13:
			return 20;
		case 4:
			return 10;
		case 6:
			return 7;
		case 7:
			return 4;
		case 9:
			return 35;
		case 16:
			return 24;
		case 14:
			return 16;
		case 10:
			return 13;
		case 11:
			return 23;
		case 12:
			return 11;
		default:
			break;
	}
	return 0;
}

void func_1028(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 287449;
			break;
		case 1:
			*uParam1 = 287660;
			break;
		case 2:
			*uParam1 = 288039;
			break;
		case 15:
			*uParam1 = 288178;
			break;
		case 3:
			*uParam1 = 288749;
			break;
		case 13:
			*uParam1 = 289128;
			break;
		case 4:
			*uParam1 = 289627;
			break;
		case 6:
			*uParam1 = 289886;
			break;
		case 7:
			*uParam1 = 290073;
			break;
		case 9:
			*uParam1 = 290188;
			break;
		case 16:
			*uParam1 = 291047;
			break;
		case 14:
			*uParam1 = 291642;
			break;
		case 10:
			*uParam1 = 292045;
			break;
		case 11:
			*uParam1 = 292376;
			break;
		case 12:
			*uParam1 = 292947;
			break;
		default:
			*uParam1 = 292947;
			break;
	}
}

bool func_1029(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 1:
				case 3:
				case 7:
					iVar0 = 0;
					break;
			}
			break;
		case 0:
			switch (iParam1)
			{
				case 7:
					iVar0 = 0;
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 2:
				case 3:
					iVar0 = 0;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
				case 4:
					iVar0 = 0;
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 4:
				case 6:
					iVar0 = 0;
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 4:
				case 8:
				case 9:
				case 10:
				case 15:
					iVar0 = 0;
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 9:
				case 12:
					iVar0 = 0;
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 7:
				case 8:
					iVar0 = 0;
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 3:
				case 4:
				case 14:
					iVar0 = 0;
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 8:
					iVar0 = 0;
					break;
			}
			break;
	}
	if (!func_679())
	{
		switch (iParam0)
		{
			case 4:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
				iVar0 = 0;
				break;
		}
	}
	return iVar0;
}

bool func_1030(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar0 /*30*/].f_3, vParam0) < 1.0f)
		{
			return func_1722(iVar0);
		}
		iVar0++;
	}
	return false;
}

bool func_1031(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_10991.f_4)
	{
		if (func_1597(Global_40.f_10991.f_4[iVar0 /*3*/], vParam0, 10.0f, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_1032(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_1033(Vector3 vParam0, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = -1;
	if (bParam4)
	{
		iVar2 = 3;
		iVar3 = 5;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar1 /*30*/].f_3, vParam0) < 10.0f)
		{
			*iParam3 = 0;
			return iVar1;
		}
		if ((iVar0 == -1 && !func_1723(iVar1)) && (func_1724(iVar1) || (!bParam4 && func_503(Global_1393237.f_11[iVar1 /*30*/].f_3, Global_36) > 2000.0f)))
		{
			*iParam3 = 1;
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (!func_1044(iVar0, (1 << 15)))
	{
		func_1725(iVar0);
	}
	return iVar0;
}

bool func_1034(bool bParam0, Vector3 vParam1, int iParam4, int iParam5)
{
	bool bVar0;

	if (bParam0)
	{
		if (iParam4 == -1)
		{
			iParam4 = func_1726(vParam1);
		}
		bVar0 = iParam4 == 10;
		if (!bVar0)
		{
			if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < func_1727(iParam5))
			{
				return false;
			}
		}
		else if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < 961920)
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < func_1728()
			{
				return false;
			}
		}
	}
	else
	{
		if (Global_1393237 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237) < func_1729())
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < func_1728()
			{
				return false;
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < Global_1393237.f_4)
	{
		return false;
	}
	return true;
}

bool func_1035(Vector3 vParam0, int iParam3)
{
	Vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) /*3*/ };
	return func_1164(vVar0, vParam0) > func_1164(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

bool func_1036(Vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	int iVar0[4];
	int iVar5[4];

	if (func_587(vParam0))
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

bool func_1037(Vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1722(iVar0))
		{
			if (func_1597(vParam0, Global_1393237.f_11[iVar0 /*30*/].f_3, 500.0f, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1038(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return;
	}
	if (bParam2)
	{
	}
	Global_1393237.f_11[iParam0 /*30*/].f_10 |= iParam1;
}

void func_1039(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1564(*iParam0);
	iVar1 = func_1565(*iParam0);
	iVar2 = func_1566(*iParam0);
	iVar3 = func_1548(*iParam0);
	iVar4 = func_1567(*iParam0);
	iVar5 = func_1568(*iParam0);
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
	iVar5 -= iParam1;
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 -= iParam2;
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 -= iParam3;
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 -= iParam4;
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_1569(iVar6, iVar0);
		iVar2 += iVar7;
	}
	iVar1 -= iParam5;
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 -= iParam6;
	func_1570(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_1040(Vector3 vParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (!func_1031(vParam0))
	{
		iVar3 = Global_40.f_10991.f_4;
		while (iVar3 > iVar0 && !bVar4)
		{
			if (func_587(Global_40.f_10991.f_4[iVar0 /*3*/]))
			{
				iVar1 = iVar0;
				bVar4 = true;
			}
			iVar0++;
		}
		Global_40.f_10991.f_4[iVar1 /*3*/] = { vParam0 /*3*/ };
		iVar2 = iVar1 + 1;
		iVar2 = func_750(iVar2 >= iVar3, 0, iVar2);
		Global_40.f_10991.f_4[iVar2 /*3*/] = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
}

float func_1041(Vector3 vParam0, int iParam3)
{
	float fVar0;

	if (iParam3 == -1)
	{
		iParam3 = func_1726(vParam0);
	}
	switch (iParam3)
	{
		case 9:
			fVar0 = 140.0f;
			break;
		case 0:
		case 2:
		case 10:
		case 11:
			fVar0 = 90.0f;
			break;
		default:
			fVar0 = 110.0f;
			break;
	}
	return fVar0;
}

void func_1042()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1730(iVar0))
		{
			func_1046(iVar0);
			func_1048(iVar0);
			func_1731(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_1043(int iParam0)
{
	if (func_1044(iParam0, (1 << 21)))
	{
		return false;
	}
	if (Global_1393237.f_11[iParam0 /*30*/].f_2 == 0)
	{
		if (func_1044(iParam0, (1 << 13)))
		{
			return false;
		}
		if (func_1732(iParam0) == 0)
		{
			return false;
		}
	}
	if (func_1044(iParam0, (1 << 19)))
	{
		return true;
	}
	if (Global_1393237.f_11[iParam0 /*30*/].f_2 == -1)
	{
		if (!func_1044(iParam0, 1))
		{
			return false;
		}
	}
	if (func_114(0, 0, 1))
	{
		return false;
	}
	if (func_1724(iParam0))
	{
		if (func_1044(iParam0, 1))
		{
		}
		else
		{
			return false;
		}
	}
	if (func_1044(iParam0, (1 << 17)))
	{
		return false;
	}
	if (func_503(Global_1393237.f_11[iParam0 /*30*/].f_3, Global_36) > 2000.0f)
	{
		return false;
	}
	if (Global_1393237.f_11[iParam0 /*30*/].f_2 == 1)
	{
		if (!func_1044(iParam0, 1))
		{
			if (func_1733())
			{
				return false;
			}
		}
	}
	return true;
}

bool func_1044(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return func_226(Global_1393237.f_11[iParam0 /*30*/].f_10, iParam1);
}

void func_1045(int iParam0)
{
	float fVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;
	float fVar6;

	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		fVar4 = func_1734(iParam0);
		if (iParam0 < 3)
		{
			iVar5 = 2;
		}
		else
		{
			iVar5 = 1;
		}
		vVar1 = { func_1735(iParam0) /*3*/ };
		fVar6 = func_1736(iVar5);
		fVar6 *= MISC::GET_RANDOM_FLOAT_IN_RANGE(0.9f, 1.1f);
		GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
		Global_1393237.f_11[iParam0 /*30*/].f_22 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_smoke_script", vVar1, 0.0f, 0.0f, fVar4, fVar6, false, false, false, false);
		fVar0 = func_1737(iVar5);
		Global_1393237.f_11[iParam0 /*30*/].f_25 = MISC::GET_GAME_TIMER();
		Global_1393237.f_11[iParam0 /*30*/].f_27 = func_1738(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vVar1, true));
		Global_1393237.f_11[iParam0 /*30*/].f_28 = func_1740(func_1739(iVar5));
		if (Global_1393237.f_11[iParam0 /*30*/].f_28 > 10.0f)
		{
			Global_1393237.f_11[iParam0 /*30*/].f_28 = 10.0f;
		}
		if (Global_1393237.f_11[iParam0 /*30*/].f_27 > Global_1393237.f_11[iParam0 /*30*/].f_28)
		{
			Global_1393237.f_11[iParam0 /*30*/].f_27 = Global_1393237.f_11[iParam0 /*30*/].f_28;
		}
		if (func_1741(vVar1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15.0f))
		{
			Global_1393237.f_11[iParam0 /*30*/].f_26 = 1.0f;
			Global_1393237.f_11[iParam0 /*30*/].f_27 = Global_1393237.f_11[iParam0 /*30*/].f_28;
		}
		else
		{
			Global_1393237.f_11[iParam0 /*30*/].f_26 = 0.0f;
		}
		fVar0 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((fVar0 - 15.0f)), BUILTIN::FLOOR((fVar0 + 15.0f))));
		fVar0 /= 255.0f;
		GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(Global_1393237.f_11[iParam0 /*30*/].f_22, Global_1393237.f_11[iParam0 /*30*/].f_27);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(Global_1393237.f_11[iParam0 /*30*/].f_22, fVar0, fVar0, fVar0, false);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(Global_1393237.f_11[iParam0 /*30*/].f_22, Global_1393237.f_11[iParam0 /*30*/].f_26);
	}
}

void func_1046(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_22))
	{
		if (Global_1935630.f_12)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iParam0 /*30*/].f_22, false);
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1393237.f_11[iParam0 /*30*/].f_22, false);
		}
		Global_1393237.f_11[iParam0 /*30*/].f_22 = 0;
		Global_1393237.f_11[iParam0 /*30*/].f_26 = -1.0f;
		Global_1393237.f_11[iParam0 /*30*/].f_25 = -1;
	}
}

void func_1047(int iParam0)
{
	Vector3 vVar0;

	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (iParam0 < 3)
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
			Global_1393237.f_11[iParam0 /*30*/].f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_light", Global_1393237.f_11[iParam0 /*30*/].f_3, 0.0f, 0.0f, 0.0f, 1.0f, false, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Global_1393237.f_11[iParam0 /*30*/].f_23, "size", 1.0f, false);
		}
		else
		{
			GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
			vVar0 = { func_1735(iParam0) /*3*/ };
			Global_1393237.f_11[iParam0 /*30*/].f_23 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_campfire_distance_light", vVar0, 0.0f, 0.0f, 0.0f, 1.0f, false, false, false, false);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(Global_1393237.f_11[iParam0 /*30*/].f_23, "size", 1.0f, false);
		}
	}
}

void func_1048(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1393237.f_11[iParam0 /*30*/].f_23))
	{
		if (Global_1935630.f_12)
		{
			GRAPHICS::REMOVE_PARTICLE_FX(Global_1393237.f_11[iParam0 /*30*/].f_23, false);
		}
		else
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1393237.f_11[iParam0 /*30*/].f_23, false);
		}
		Global_1393237.f_11[iParam0 /*30*/].f_23 = 0;
	}
}

void func_1049(int iParam0)
{
	func_1742(iParam0);
	func_1743(iParam0);
	if (!MAP::DOES_BLIP_EXIST(Global_1357522.f_16[iParam0]))
	{
		Global_1357522.f_16[iParam0] = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_CAMPFIRE"), Global_1357522[iParam0 /*3*/]);
		if (iParam0 == 1)
		{
			MAP::SET_BLIP_SPRITE(Global_1357522.f_16[iParam0], joaat("BLIP_CAMPFIRE"), true);
		}
		else if (iParam0 == 0)
		{
			MAP::SET_BLIP_SPRITE(Global_1357522.f_16[iParam0], joaat("BLIP_CAMPFIRE_FULL"), true);
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1357522.f_16[iParam0], "CAMP_BLIP");
	}
	if (func_745(Global_35, Global_1357522[iParam0 /*3*/], 1) <= 225.0f)
	{
		func_1744(iParam0);
	}
}

void func_1050(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1357522.f_22[iParam0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1357522.f_22[iParam0], false);
	}
}

void func_1051(int iParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1357522.f_19[iParam0]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(Global_1357522.f_19[iParam0], false);
	}
}

bool func_1052(int iParam0)
{
	return Global_1914296.f_22 & iParam0 != 0;
}

bool func_1053(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_1054(int iParam0, bool bParam1)
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

void func_1055(float fParam0)
{
	func_701(10, fParam0);
}

void func_1056()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1935436.f_12 = 0.0f;
}

bool func_1057(int iParam0)
{
	return (((func_1745() || func_1746()) || func_1053(&(Global_1425247.f_3), iParam0, 2)) || func_1747(iParam0));
}

void func_1058(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	}
	func_220(func_1748(iParam0), 10000, 0, 0, 0, 1);
}

void func_1059(int iParam0)
{
	if (func_1749(&Global_1425247, iParam0, 2))
	{
	}
}

void func_1060(int iParam0, int iParam1)
{
	Global_1425247.f_12[iParam0] = iParam1;
}

bool func_1061(int iParam0)
{
	if (func_679())
	{
		return false;
	}
	return func_447(Global_1347702[58 /*49*/].f_15, 1);
}

bool func_1062()
{
	return (func_1750() || func_1413());
}

bool func_1063(var uParam0, int iParam1)
{
	return uParam0->f_2 & iParam1 != 0;
}

bool func_1064(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_IS_WILD(iParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_1065(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HIGHPRESSURE"):
		case joaat("SUNNY"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1066(int iParam0)
{
	if (!func_47(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1751(iParam0));
}

float func_1067(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return -1.0f;
	}
	return func_1068(Global_35, bParam0, bParam1, bParam2);
}

float func_1068(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0) && bParam3)
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(bParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

bool func_1069(bool bParam0, bool bParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25.0f)
	{
		return false;
	}
	if (bParam1 == Global_35)
	{
		if (PED::IS_PED_IN_COMBAT(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_1070(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = bParam3;
	sVar0.f_5 = bParam4;
	sVar0.f_6 = iParam7;
	return func_1752(bParam0, &sVar0);
}

bool func_1071()
{
	if (((PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) || func_1753(Global_35)) || Global_1357549.f_1495 & (1 << 9) != 0) || Global_1935436.f_18.f_3)
	{
		return false;
	}
	return true;
}

void func_1072()
{
	if (!Global_1935436.f_18.f_1)
	{
		Global_1935436.f_18.f_1 = 1;
	}
}

void func_1073()
{
	Global_1935436.f_18 = 0;
	Global_1935436.f_18.f_1 = 0;
	Global_1935436.f_18.f_3 = 0;
	Global_1935436.f_18.f_4 = 0;
	Global_1935436.f_18.f_7 = 0;
	Global_1935436.f_18.f_11 = 0;
}

void func_1074()
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_1935436.f_18.f_6))
	{
		Global_1935436.f_18.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1754(), 64, 0, false, true);
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Global_1935436.f_18.f_6, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Global_1935436.f_18.f_6);
	}
}

void func_1075(int iParam0)
{
	Global_1935436.f_18.f_11 = iParam0;
}

char* func_1076()
{
	return "MECH_LOCO_M@CHARACTER@ARTHUR@DRUNK@UNARMED@STUMBLE@TRANSITION@DRUNK_STUMBLE_TO_WALK_LF";
}

char* func_1077()
{
	return "MOVE";
}

void func_1078(int iParam0)
{
	CLOCK::SET_CLOCK_TIME(func_1548(iParam0), func_1567(iParam0), func_1568(iParam0));
	CLOCK::SET_CLOCK_DATE(func_1566(iParam0), func_1565(iParam0), func_1564(iParam0));
}

int func_1079(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_1755(iVar1, bParam0, iParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

Vector3 func_1080(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_1081(Vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_1756(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_1757(&(iParam3->f_1), iParam5);
				if (!func_587(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_1758(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) /*3*/ };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_1082(Vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1898329)
	{
		if (!func_127(Global_1898330[iVar0]))
		{
		}
		else
		{
			switch (Global_1898346[iVar0 /*6*/].f_3)
			{
				case 1:
					iVar1 = Global_1898346[iVar0 /*6*/].f_4;
					if (BUILTIN::VDIST(func_566(iVar1), vParam0) < func_1760(func_1759(iVar1) == 0.0f, fParam3, func_1759(iVar1)))
					{
						return true;
					}
					break;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1083(Vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 201)
	{
		if (func_903(iVar0, 0))
		{
			if (BUILTIN::VDIST(func_609(iVar0), vParam0) < fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1084(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_1085()
{
	struct<10> /*80*/ sVar0;
	struct<16> /*128*/ sVar10;

	Global_1310720.f_8 = 0;
	Global_1935630.f_4 = 1;
	sVar10 = { sVar0 /*10*/ };
	strcpy_s(&(sVar10.f_10), 32, "respawn_persistence");
	sVar10.f_14 = (1 << 10);
	sVar10.f_15 = 0;
	func_482(sVar10, 0);
}

void func_1086(int iParam0)
{
	Global_1572864.f_21 = iParam0;
	Global_1310720.f_4 = MISC::GET_GAME_TIMER();
}

int func_1087(Vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1761(iVar0, 1, iParam4))
		{
			if (func_745(func_958(iVar0), vParam0, 1) < fParam3)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1088(int iParam0, int iParam1)
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

bool func_1089(int iParam0)
{
	int iVar0;

	iVar0 = func_1762(iParam0);
	if (iVar0 >= 6 || iVar0 < 0)
	{
		return false;
	}
	return Global_40.f_9571[iVar0 /*10*/].f_1 == 5;
}

bool func_1090()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

bool func_1091()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

var func_1092(int iParam0)
{
	if (!func_1763(iParam0))
	{
	}
	return Global_1888801[iParam0 /*35*/];
}

int func_1093(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -15;
	}
	return func_1764(iParam0);
}

void func_1094(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1088(iParam0, 1);
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

void func_1095(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1088(iParam0, 1);
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

void func_1096()
{
	func_1095(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_1095(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_1095(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_1095(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_1095(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_1095(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_1095(joaat("WS_COLTER_STAGE_MP"));
}

void func_1097()
{
	func_1095(joaat("WS_BEECHERS_SHACK"));
	func_1095(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_1095(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_1095(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_1095(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_1095(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_1095(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_1095(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_1095(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_1095(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

int func_1098(int iParam0)
{
	return Global_40.f_297[iParam0];
}

bool func_1099(int iParam0)
{
	int iVar0;

	if (func_1765(iParam0, &iVar0))
	{
		if (func_538() > func_1766(iVar0))
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

bool func_1100(int iParam0)
{
	int iVar0;

	iVar0 = func_1767(iParam0);
	if (iVar0 != 0)
	{
		if (func_1768(iVar0, 1120403456) || func_1584(iVar0))
		{
			return false;
		}
	}
	return true;
}

void func_1101(int iParam0)
{
	func_1769(iParam0, -1);
	func_1770(iParam0, -15);
}

bool func_1102()
{
	if (func_1771(joaat("WS_SHADY_BELLE_HIDEOUT")))
	{
		if (func_1584(809554858))
		{
			return true;
		}
		func_1772(joaat("WS_SHADY_BELLE_HIDEOUT"));
	}
	if (func_1771(joaat("WS_VALENTINE_BURIAL_DRUNK")))
	{
		if (func_1584(-451832572))
		{
			return true;
		}
		func_1772(joaat("WS_VALENTINE_BURIAL_DRUNK"));
	}
	if (func_1771(joaat("WS_RHODES_GRAYS3_COVER_ON")))
	{
		if (func_1584(1033721560) || func_647(func_977(105), Global_36))
		{
			return true;
		}
		func_1772(joaat("WS_RHODES_GRAYS3_COVER_ON"));
	}
	if (func_1771(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE")))
	{
		if (func_1584(joaat("BEE_01_CAMP")))
		{
			return true;
		}
		func_1772(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	}
	if (func_1771(joaat("WS_SEAN_1_CAMP")))
	{
		if (func_1768(398639187, 1120403456))
		{
			return true;
		}
		func_1772(joaat("WS_SEAN_1_CAMP"));
	}
	return false;
}

void func_1103()
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

	if (!func_663(45))
	{
		if (Global_1934765.f_290)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERS_A"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERS_B"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERS_C"));
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_290 = 0;
		}
		if (Global_1934765.f_292)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BLACKWATER_ENDSUM"));
			Global_1934765.f_292 = 0;
		}
		if (!Global_1934765.f_291 && func_1140(38))
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BLACKWATER_REGULAR"), -811.0f, -1212.5f, 0.0f, 0);
			Global_1934765.f_291 = 1;
		}
		func_943(-37875204);
		func_943(258104717);
		func_943(-76700394);
		func_943(1614255891);
		func_943(1861460906);
		func_943(1044079550);
		func_1121("nav_shack_BA");
		func_944(-1079295176);
		func_944(894787561);
		func_943(-1276109918);
		func_943(-1386423483);
		func_943(-1405375965);
		func_943(1277540472);
		func_943(-1331593143);
		func_943(1133172356);
		func_943(-559257162);
		func_1121("nav_shack_BB");
		func_944(979670262);
		func_944(418666411);
		func_944(651621232);
		func_943(-574996782);
		func_943(1169511062);
		func_943(-1266106154);
		func_943(-1377975054);
		func_943(897624424);
		func_943(-2111718052);
		func_1121("nav_shack_BC");
		func_944(-165202905);
		func_944(-1327148782);
		func_944(-1965378386);
		func_943(175578406);
		func_943(-686953321);
		func_943(-1737485501);
		func_943(-739754595);
		func_943(942470447);
		func_943(-1859413313);
		func_943(489834626);
		func_944(-1667265438);
		func_944(54029413);
		func_944(-1070234238);
		func_944(-931280709);
		func_944(-1170563128);
		func_944(1394163483);
		func_1121("nav_std_train_station_es");
		func_943(-5339556);
		func_943(1258244391);
		func_943(1343343014);
		func_943(-2082201137);
		func_943(1641449717);
		func_943(739412171);
		func_943(-501793326);
		func_943(466168676);
		func_943(1479152994);
		func_1121("nav_blackwater_endless_summer");
		func_944(1173561253);
		func_944(1470738186);
		func_944(-1632348233);
		func_943(903666582);
		func_944(1081087978);
		func_1121("nav_val_es");
		func_1121("nav_val_es_saloon_lockdown");
		func_1121("nav_val_es_full_lockdown");
		func_943(joaat("ANN_05_HOUSE_ES"));
		func_944(joaat("ANN_05_HOUSE"));
		func_944(-693132475);
		func_1121("nav_annesburg_es");
		func_943(158063004);
		func_1121("nav_coots_graves");
		func_943(-1112373128);
		func_943(-891994084);
		func_943(-84516711);
		func_943(-657241692);
		func_944(1596089211);
		func_944(-2133417899);
		func_944(1274804496);
		func_944(1597665303);
		func_944(116162819);
		func_1121("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", false, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", true, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", true);
		iVar0 = func_1773(2087609309);
		if (!GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(iVar0))
		{
			GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(iVar0, true);
		}
		func_943(-1380983970);
		func_943(-1912028958);
		func_944(563944718);
		func_1121("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("WAP_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAP_PREENDLESSSUMMER"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("VALENTINE_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("VALENTINE_PREENDLESSSUMMER"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER"), true);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("RHODES_PREENDLESS_SUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RHODES_PREENDLESS_SUMMER"), true);
		}
		if (func_112() == -1)
		{
			if (func_1590(56, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_1113((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (func_1590(65, &iVar2, &iVar3, 0, 0))
			{
				iVar1 = 0;
				while (iVar1 < (iVar3 - iVar2) + 1)
				{
					func_1113((iVar2 + iVar1), 32);
					iVar1++;
				}
			}
			if (!func_114(0, 0, 1))
			{
				func_1113(944, 32);
				func_1113(940, 32);
			}
			func_1774(joaat("META_OUTFIT_DEFAULT"));
			iVar4 = 0;
			while (iVar4 < 13)
			{
				func_1776(iVar4, func_1775(iVar4));
				iVar4++;
			}
		}
	}
	else
	{
		if (!Global_1934765.f_290)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERS_A"), -1550.0f, 250.0f, 0.0f, 0);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERS_B"), 1440.0f, -1580.0f, 0.0f, 0);
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERS_C"), 1770.0f, 480.0f, 0.0f, 0);
			Global_1934765.f_290 = 1;
		}
		if (!Global_1934765.f_292)
		{
			MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BLACKWATER_ENDSUM"), -811.0f, -1212.5f, 0.0f, 0);
			Global_1934765.f_292 = 1;
		}
		if (Global_1934765.f_291)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BLACKWATER_REGULAR"));
			Global_1934765.f_291 = 0;
		}
		func_944(-37875204);
		func_944(258104717);
		func_944(-76700394);
		func_944(1614255891);
		func_944(1861460906);
		func_944(1044079550);
		func_877("nav_shack_BA");
		func_943(-1079295176);
		func_943(894787561);
		func_944(-1276109918);
		func_944(-1386423483);
		func_944(-1405375965);
		func_944(1277540472);
		func_944(-1331593143);
		func_944(1133172356);
		func_944(-559257162);
		func_877("nav_shack_BB");
		func_943(979670262);
		func_943(418666411);
		func_943(651621232);
		func_944(-574996782);
		func_944(1169511062);
		func_944(-1266106154);
		func_944(-1377975054);
		func_944(-2111718052);
		func_944(897624424);
		func_877("nav_shack_BC");
		func_943(-165202905);
		func_943(-1327148782);
		func_943(-1965378386);
		func_943(-1667265438);
		func_943(54029413);
		func_943(-1070234238);
		func_943(-931280709);
		func_943(-1170563128);
		func_943(1394163483);
		func_944(175578406);
		func_944(489834626);
		func_944(-686953321);
		func_944(-1737485501);
		func_944(-739754595);
		func_944(942470447);
		func_944(-1859413313);
		func_877("nav_std_train_station_es");
		func_943(1173561253);
		func_943(1470738186);
		func_943(-1632348233);
		func_944(-5339556);
		func_944(1258244391);
		func_944(1343343014);
		func_944(-2082201137);
		func_944(1641449717);
		func_944(739412171);
		func_944(-501793326);
		func_944(466168676);
		func_944(1479152994);
		func_877("nav_blackwater_endless_summer");
		func_943(1081087978);
		func_944(903666582);
		if (func_400(joaat("WS_VALENTINE_LOCKDOWN_BANK")))
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_full_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es");
			func_877("nav_val_es_full_lockdown");
		}
		else if (func_400(joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS")))
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_full_lockdown");
			func_1121("nav_val_es_full_lockdown");
			func_1121("nav_val_es");
			func_877("nav_val_es_saloon_lockdown");
		}
		else
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_full_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es_full_lockdown");
			func_877("nav_val_es");
		}
		func_943(joaat("ANN_05_HOUSE"));
		func_943(-693132475);
		func_944(joaat("ANN_05_HOUSE_ES"));
		func_877("nav_annesburg_es");
		func_944(158063004);
		func_877("nav_coots_graves");
		func_943(1596089211);
		func_943(-2133417899);
		func_943(1274804496);
		func_943(1597665303);
		func_943(116162819);
		func_944(-1112373128);
		func_944(-891994084);
		func_944(-84516711);
		func_944(-657241692);
		func_877("nav_cornwall_es");
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Endless_Summer", true, true);
		AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Cornwall_K_and_T_Normal", false, true);
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_Cornwall_Kerosene_And_Tar_Ambient_Emitter", false);
		iVar5 = func_1773(2087609309);
		if (GRAPHICS::_IS_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_ENABLED(iVar5))
		{
			GRAPHICS::_SET_PROXY_INTERIOR_INDEX_ARTIFICIAL_LIGHTS_STATE(iVar5, false);
		}
		func_944(-1380983970);
		func_943(563944718);
		func_944(-1912028958);
		func_877("nav_bridge_to_old_world");
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("WAP_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("WAP_PREENDLESSSUMMER"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("ASB_HOUSE_UNDER_CONSTRUCTION"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("VALENTINE_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("VALENTINE_PREENDLESSSUMMER"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("SAINTDENIS_PREENDLESSSUMMER"), false);
		}
		if (TASK::_DOES_SCENARIO_GROUP_EXIST_HASH(joaat("RHODES_PREENDLESS_SUMMER")))
		{
			TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(joaat("RHODES_PREENDLESS_SUMMER"), false);
		}
		if (func_112() == -1)
		{
			if (func_1590(56, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_1114((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			if (func_1590(65, &iVar7, &iVar8, 0, 0))
			{
				iVar6 = 0;
				while (iVar6 < (iVar8 - iVar7) + 1)
				{
					func_1114((iVar7 + iVar6), 32);
					iVar6++;
				}
			}
			func_1114(944, 32);
			func_1114(940, 32);
			func_1774(1689938120);
			iVar9 = 0;
			while (iVar9 < 13)
			{
				func_1776(iVar9, func_1777(iVar9));
				iVar9++;
			}
		}
	}
}

void func_1104()
{
	if (func_370(38))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", true);
	}
	else
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("CIG_CARDS_LOCKED", false);
	}
	if (func_388())
	{
		func_1778(56);
	}
	else
	{
		func_1779(56);
	}
	if (func_663(44))
	{
		func_1778(105);
		func_1778(95);
	}
	else
	{
		func_1779(105);
		func_1779(95);
	}
	if (func_723(105))
	{
		func_1781(func_1780(105));
	}
	else if (func_715(105))
	{
		func_1782(105);
	}
	if (func_723(95))
	{
		func_1781(func_1780(95));
	}
	else if (func_715(95))
	{
		func_1782(95);
	}
	func_943(481636996);
	func_813(212);
	func_813(211);
	func_813(213);
	func_813(214);
	func_813(215);
	func_813(216);
	func_813(217);
	func_813(218);
	func_813(219);
	func_813(220);
	func_813(221);
	func_813(222);
	func_813(223);
	func_813(224);
	func_813(225);
	func_944(1454866069);
	func_944(-383442850);
	func_944(531960211);
	func_944(joaat("DIS_SCM_CC_GRAFFITI"));
	func_944(-2041779893);
	func_944(1123990218);
	func_944(joaat("BEP_01_CC_GRAFFITI"));
	func_944(joaat("TWO_01_CC_GRAFFITI"));
	func_944(joaat("DIS_GAP_CC_GRAFFITI"));
	func_944(-1111286486);
	func_944(joaat("A_WATER_ICE_CC_GRAFFITI"));
	func_944(107317036);
	func_944(1193229750);
	func_944(1492183352);
	func_944(joaat("VAN_02_CC_GRAFFITI"));
	func_944(-1664053323);
	func_944(-1375030991);
	func_944(-313992757);
	func_813(205);
	func_813(206);
	func_813(207);
	func_813(208);
	func_813(209);
	func_813(210);
	func_944(-1176501741);
	if (!func_153(44))
	{
		func_813(26);
	}
	else
	{
		func_1110(26);
	}
	func_1120(1121239638, 1);
	func_1120(-1677757270, 1);
	func_1120(906662604, 1);
	func_1120(-310410837, 1);
	func_1110(185);
	func_813(184);
	func_944(642301973);
	func_943(1260721433);
	func_1783();
	func_944(626046501);
}

void func_1105()
{
	Global_1934765++;
}

void func_1106()
{
	int iVar0;

	func_1784();
	if (func_112() == 0)
	{
		func_944(-1253110600);
		func_944(-1402083909);
	}
	iVar0 = -1;
	if (func_400(joaat("WS_BEECHERS_SHACK")))
	{
		func_944(-1012618146);
		func_944(-722030448);
		func_877("nav_mesh_beech_shack");
		func_944(-1253110600);
		func_944(-1402083909);
		func_944(1970695826);
		func_944(-382865315);
		func_944(-904669171);
		func_944(774601424);
		func_944(-584332967);
		func_944(-1615103170);
		func_944(1256771838);
		func_944(-1765152778);
		func_944(-2072231077);
		func_944(19217583);
	}
	else if (func_400(joaat("WS_BEECHERS_SHACK_WITH_FIRE")))
	{
		func_944(-1012618146);
		func_944(-722030448);
		func_944(1757739778);
		func_877("nav_mesh_beech_shack_with_fire");
		func_944(578474998);
		func_944(-1253110600);
		func_944(-1402083909);
		func_944(1970695826);
		func_944(-382865315);
	}
	else if (func_400(joaat("WS_BEECHERS_CAMP_WITH_SHACK")))
	{
		func_944(-1012618146);
		func_944(1757739778);
		func_877("nav_mesh_beech_shack_with_fire");
		func_944(joaat("BEE_01_CAMP"));
		func_944(578474998);
		func_944(-1253110600);
		func_944(-1402083909);
		func_944(1970695826);
		func_944(-382865315);
		func_943(-722030448);
	}
	else if (func_400(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE")))
	{
		func_944(joaat("BEE_01_CAMP"));
		func_877("nav_mesh_beech_camp_with_rubble");
		func_944(578474998);
		func_944(-1253110600);
		func_944(-1402083909);
		func_944(1970695826);
		func_944(-382865315);
		func_944(2111816145);
	}
	else if (func_400(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES")))
	{
		func_944(joaat("BEE_01_CAMP"));
		func_944(-1253110600);
		func_944(-1402083909);
		func_944(1970695826);
		func_944(-382865315);
		func_944(578474998);
		func_877("nav_mesh_beech_camp_with_supplies");
	}
	else if (func_400(joaat("WS_BEECHERS_HOUSE_FINISHED")))
	{
		func_944(joaat("BEE_01_CAMP"));
		func_944(-1667461262);
		func_944(-974480336);
		func_944(joaat("BEE_01_HOUSE_STAGE05"));
		func_944(1344772301);
		func_944(1467774743);
		func_944(joaat("BEE_01_WATERPUMP"));
		func_877("nav_mesh_beech_house_finished");
		func_944(-284612948);
		func_944(-1325016116);
		func_944(578474998);
		func_813(111);
		func_813(116);
		func_813(100);
		func_813(101);
	}
	else if (func_400(joaat("WS_BEECHERS_BARN_FINISHED")))
	{
		func_944(-1667461262);
		func_944(joaat("BEE_01_HOUSE_STAGE05"));
		func_944(1344772301);
		func_944(1467774743);
		func_944(joaat("BEE_01_BARN_STAGE05"));
		func_944(578474998);
		func_944(joaat("BEE_01_WATERPUMP"));
		func_944(1353861354);
		func_944(1205945639);
		func_877("nav_mesh_beech_barn_finished");
		func_944(-284612948);
		func_944(431365499);
		func_944(276582710);
		func_944(1191890045);
		func_944(1864768904);
		func_944(-692583342);
		func_944(-918785150);
		func_813(116);
		func_813(100);
		func_813(102);
		func_813(103);
		if (func_154(75) && !func_1785(119))
		{
			func_813(118);
		}
		else
		{
			func_1110(118);
		}
		func_813(104);
		func_813(105);
		func_813(111);
		if (func_1785(108))
		{
			func_1110(107);
		}
		else
		{
			func_813(107);
		}
	}
	else if (func_400(joaat("WS_BEECHERS_HOUSE_ABIGAIL3")))
	{
		func_944(-1667461262);
		func_944(joaat("BEE_01_HOUSE_STAGE05"));
		func_944(1467774743);
		func_944(joaat("BEE_01_BARN_STAGE05"));
		func_944(1353861354);
		func_877("nav_mesh_beech_house_decor");
		func_944(578474998);
		func_944(1236917971);
		func_944(joaat("BEE_01_WATERPUMP"));
		func_944(-284612948);
		func_944(-2090209059);
		func_944(1977031606);
		func_944(1929454697);
		func_944(938290967);
		func_944(1532009326);
		func_944(1344772301);
		func_944(-918785150);
		func_944(-692583342);
		func_944(joaat("BEE_CRAFTINGFIRE01"));
		func_1133(joaat("BEE_CRAFTINGFIRE01"));
		func_944(joaat("BEE_01_GAZEBO_STAGE05"));
		func_944(637627640);
		func_944(349494711);
		func_813(117);
		func_813(116);
		func_813(100);
		func_813(109);
		func_813(102);
		func_813(110);
		func_813(106);
		if (!func_1785(119))
		{
			func_813(118);
		}
		else
		{
			func_1110(118);
		}
		func_813(111);
	}
	else if (func_400(joaat("WS_BEECHERS_HOUSE_DECORATED")))
	{
		func_944(-1667461262);
		func_944(joaat("BEE_01_HOUSE_STAGE05"));
		func_944(1467774743);
		func_944(joaat("BEE_01_BARN_STAGE05"));
		func_944(1353861354);
		func_877("nav_mesh_beech_house_decor");
		func_944(578474998);
		func_944(1236917971);
		func_944(joaat("BEE_01_WATERPUMP"));
		func_944(-284612948);
		func_944(-2090209059);
		func_944(1977031606);
		func_944(1929454697);
		func_944(938290967);
		func_944(1532009326);
		func_944(1344772301);
		func_944(-918785150);
		func_944(-692583342);
		func_944(joaat("BEE_CRAFTINGFIRE01"));
		func_1133(joaat("BEE_CRAFTINGFIRE01"));
		func_944(joaat("BEE_01_GAZEBO_STAGE05"));
		func_944(637627640);
		func_944(349494711);
		func_813(117);
		func_813(116);
		func_813(100);
		func_813(109);
		func_813(102);
		func_813(110);
		if (func_1785(108))
		{
			func_1110(107);
		}
		else
		{
			func_813(107);
		}
		if (!func_1785(119))
		{
			func_813(118);
		}
		else
		{
			func_1110(118);
		}
		func_813(111);
	}
	else if (func_400(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED")))
	{
		func_944(-1667461262);
		func_944(joaat("BEE_01_HOUSE_STAGE05"));
		func_944(1467774743);
		func_944(joaat("BEE_01_BARN_STAGE05"));
		func_944(1353861354);
		func_877("nav_mesh_beech_house_completed");
		func_944(578474998);
		func_944(1236917971);
		func_944(joaat("BEE_01_WATERPUMP"));
		func_944(-284612948);
		func_944(349494711);
		func_944(1965249616);
		func_944(-2021605623);
		func_944(1649902358);
		func_944(1169279648);
		func_944(1532009326);
		func_944(1344772301);
		func_944(-918785150);
		func_944(-692583342);
		func_944(joaat("BEE_CRAFTINGFIRE01"));
		func_1133(joaat("BEE_CRAFTINGFIRE01"));
		func_944(joaat("BEE_01_GAZEBO_STAGE05"));
		func_944(637627640);
		func_944(joaat("BEE_01_SILO_STAGE05"));
		if (!func_1785(119))
		{
			func_813(118);
		}
		else
		{
			func_1110(118);
		}
		func_813(117);
		func_813(116);
		func_813(100);
		func_813(109);
		func_813(102);
		func_813(112);
		func_813(113);
		func_813(111);
		func_813(113);
		if (func_1785(115))
		{
			func_1110(114);
		}
		else
		{
			func_813(114);
		}
	}
	if (Global_1934765.f_300 != iVar0)
	{
		if (Global_1934765.f_300 != -1)
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(joaat("EXTERIOR_BEECHERSHOPE"));
		}
		MAP::_ADD_PROP_TO_MINIMAP(joaat("EXTERIOR_BEECHERSHOPE"), -1640.0f, -1370.0f, 0.0f, iVar0);
		Global_1934765.f_300 = iVar0;
	}
}

void func_1107()
{
	Vector3 vVar0;
	Vector3 vVar10;

	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_BANK")))
	{
		func_943(-661560211);
		func_944(joaat("VAL_02_LOCKDOWN_BANK"));
		func_944(-784156210);
		if (func_663(45))
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_full_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es");
			func_877("nav_val_es_full_lockdown");
		}
		else
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es_full_lockdown");
			func_1121("nav_val_es");
			func_877("nav_val_full_lockdown");
		}
	}
	else
	{
		func_943(joaat("VAL_02_LOCKDOWN_BANK"));
		func_943(-784156210);
		func_944(-661560211);
		if (func_663(45))
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_full_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es_full_lockdown");
			func_877("nav_val_es");
		}
		else
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es_full_lockdown");
			func_1121("nav_val_es");
			func_1121("nav_val_full_lockdown");
		}
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_DOCTOR")))
	{
		func_943(-1049500949);
		func_944(-981203673);
		func_944(-2009766528);
	}
	else
	{
		func_943(-981203673);
		func_943(-2009766528);
		func_944(-1049500949);
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_GENERAL_STORE")))
	{
		func_943(135886022);
		func_944(1228600352);
		func_944(406334892);
	}
	else
	{
		func_943(1228600352);
		func_943(406334892);
		func_944(135886022);
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_GUNSMITH")))
	{
		func_943(-1933617196);
		func_944(joaat("VAL_02_LOCKDOWN_GUN"));
		func_944(-1905652203);
	}
	else
	{
		func_943(joaat("VAL_02_LOCKDOWN_GUN"));
		func_943(-1905652203);
		func_944(-1933617196);
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_HOTEL")))
	{
		func_943(-1588793465);
		func_944(joaat("VAL_02_LOCKDOWN_HOTEL"));
		func_944(1519091923);
		func_820(1879307167, 1, 0, 0, 0, 0, 0, 0);
		func_820(540459374, 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_943(joaat("VAL_02_LOCKDOWN_HOTEL"));
		func_943(1519091923);
		func_944(-1588793465);
		func_820(1879307167, 0, 0, 0, 1, 0, 0, 0);
		func_820(540459374, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_JAIL")))
	{
		func_943(joaat("VAL_03_DEFAULT_JAIL"));
		func_944(-1301569116);
		func_944(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
	}
	else
	{
		func_943(-1301569116);
		func_943(joaat("VAL_03_PROPS_LOCKDOWN_JAIL"));
		func_944(joaat("VAL_03_DEFAULT_JAIL"));
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_LAW_OFFICE")))
	{
		func_943(924412185);
		func_944(joaat("VAL_02_LOCKDOWN_LAW"));
		func_944(-156313117);
	}
	else
	{
		func_943(joaat("VAL_02_LOCKDOWN_LAW"));
		func_943(-156313117);
		func_944(924412185);
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_RENT")))
	{
		func_943(-1781246069);
		func_944(282485265);
		func_944(-1744253204);
	}
	else
	{
		func_943(282485265);
		func_943(-1744253204);
		func_944(-1781246069);
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_RESTAURANT")))
	{
		func_943(-1892595931);
		func_944(56708243);
	}
	else
	{
		func_943(56708243);
		func_944(-1892595931);
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_SALOON")))
	{
		func_943(-1158072415);
		func_944(199047531);
		func_944(192173299);
		func_583(32, 1);
	}
	else
	{
		func_943(199047531);
		func_943(192173299);
		func_944(-1158072415);
		if ((!func_413(9, 0) && !func_151(5)) && !func_1786(5))
		{
			vVar0 = -1;
			vVar0.f_1 = -1;
			vVar0.f_2 = -1;
			func_1216(32, &vVar0, 1);
			func_1787(&vVar0, 1, 1);
		}
	}
	if (func_400(joaat("WS_VALENTINE_LOCKDOWN_SALOON_DOORS")))
	{
		func_944(-776975047);
		func_944(1385025009);
		if (!func_400(joaat("WS_VALENTINE_LOCKDOWN_BANK")))
		{
			if (func_663(45))
			{
				func_1121("nav_val_saloon_lockdown");
				func_1121("nav_val_full_lockdown");
				func_1121("nav_val_es");
				func_1121("nav_val_es_full_lockdown");
				func_877("nav_val_es_saloon_lockdown");
			}
			else
			{
				func_1121("nav_val_saloon_lockdown");
				func_1121("nav_val_es_saloon_lockdown");
				func_1121("nav_val_full_lockdown");
				func_1121("nav_val_es_full_lockdown");
				func_1121("nav_val_es");
				func_877("nav_val_saloon_lockdown");
			}
		}
		func_820(-908482159, 1, 0, 0, 0, 0, 0, 0);
		func_820(-1147728628, 1, 0, 0, 0, 0, 0, 0);
		func_820(968874193, 1, 0, 0, 0, 0, 0, 0);
		func_820(1154795503, 1, 0, 0, 0, 0, 0, 0);
		func_820(583884620, 1, 0, 0, 0, 0, 0, 0);
		func_820(261929195, 1, 0, 0, 0, 0, 0, 0);
		OBJECT::_0x7F458B543006C8FE(-908482159, 28);
		OBJECT::_0x7F458B543006C8FE(-1147728628, 28);
		OBJECT::_0x7F458B543006C8FE(968874193, 28);
		OBJECT::_0x7F458B543006C8FE(1154795503, 28);
		OBJECT::_0x7F458B543006C8FE(583884620, 28);
		OBJECT::_0x7F458B543006C8FE(261929195, 28);
	}
	else
	{
		func_943(-776975047);
		func_943(1385025009);
		func_820(-908482159, 0, 0, 0, 1, 0, 0, 0);
		func_820(-1147728628, 0, 0, 0, 1, 0, 0, 0);
		func_820(968874193, 0, 0, 0, 1, 0, 0, 0);
		func_820(1154795503, 0, 0, 0, 1, 0, 0, 0);
		func_820(583884620, 0, 0, 0, 1, 0, 0, 0);
		func_820(261929195, 0, 0, 0, 1, 0, 0, 0);
		OBJECT::_0x0C0A373D181BF900(-908482159);
		OBJECT::_0x0C0A373D181BF900(-1147728628);
		OBJECT::_0x0C0A373D181BF900(968874193);
		OBJECT::_0x0C0A373D181BF900(1154795503);
		OBJECT::_0x0C0A373D181BF900(583884620);
		OBJECT::_0x0C0A373D181BF900(261929195);
		if (func_663(45))
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_full_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es_full_lockdown");
			func_877("nav_val_es");
		}
		else
		{
			func_1121("nav_val_saloon_lockdown");
			func_1121("nav_val_es_saloon_lockdown");
			func_1121("nav_val_es_full_lockdown");
			func_1121("nav_val_es");
			func_1121("nav_val_full_lockdown");
		}
	}
	if (func_112() == -1)
	{
		if (func_400(joaat("WS_VAN_HORN_LOCKDOWN_SALOON")))
		{
			func_1114(450, 32);
			func_1114(451, 32);
			func_1114(452, 32);
			func_1114(453, 32);
			func_1114(466, 32);
			func_1114(467, 32);
			func_1114(471, 32);
			func_1114(464, 32);
		}
		else
		{
			func_1113(450, 32);
			func_1113(451, 32);
			func_1113(452, 32);
			func_1113(453, 32);
			func_1113(466, 32);
			func_1113(467, 32);
			func_1113(471, 32);
			func_1113(464, 32);
		}
		if (func_400(joaat("WS_VAN_HORN_LOCKDOWN_SALOON_DOORS")))
		{
			func_820(-1069042457, 1, 0, 0, 0, 0, 0, 0);
			func_820(244699522, 1, 0, 0, 0, 0, 0, 0);
			func_820(-590254598, 1, 0, 0, 0, 0, 0, 0);
			func_820(-1425307025, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_820(-1069042457, 0, 0, 0, 1, 0, 0, 0);
			func_820(244699522, 0, 0, 0, 1, 0, 0, 0);
			func_820(-590254598, 0, 0, 0, 1, 0, 0, 0);
			func_820(-1425307025, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_400(joaat("WS_ARMADILLO_LOCKDOWN_SALOON")))
		{
			func_1114(433, 32);
		}
		else
		{
			func_1113(433, 32);
		}
		if (func_400(joaat("WS_BLACKWATER_LOCKDOWN_SALOON_DOORS")))
		{
			func_820(551601484, 1, 0, 0, 0, 0, 0, 0);
			func_820(-1842720100, 1, 0, 0, 0, 0, 0, 0);
			func_820(-983069384, 1, 0, 0, 0, 0, 0, 0);
			func_820(-768760124, 1, 0, 0, 0, 0, 0, 0);
			func_820(-1974086289, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_820(551601484, 0, 0, 0, 1, 0, 0, 0);
			func_820(-1842720100, 0, 0, 0, 1, 0, 0, 0);
			func_820(-983069384, 0, 0, 0, 1, 0, 0, 0);
			func_820(-768760124, 0, 0, 0, 1, 0, 0, 0);
			func_820(-1974086289, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_400(joaat("WS_RHODES_LOCKDOWN_SALOON")))
		{
			func_1114(83, 32);
			func_1114(84, 32);
			func_1114(85, 32);
			func_1114(86, 32);
			func_1114(87, 32);
			func_1114(79, 32);
		}
		else
		{
			func_1113(83, 32);
			func_1113(84, 32);
			func_1113(85, 32);
			func_1113(86, 32);
			func_1113(87, 32);
			func_1113(79, 32);
		}
		if (func_400(joaat("WS_RHODES_LOCKDOWN_SALOON_DOORS")))
		{
			func_820(-1247339802, 1, 0, 0, 0, 0, 0, 0);
			func_820(2046695029, 1, 0, 0, 0, 0, 0, 0);
			func_820(834296435, 1, 0, 0, 0, 0, 0, 0);
			func_820(1124531468, 1, 0, 0, 0, 0, 0, 0);
			func_820(-902483455, 1, 0, 0, 0, 0, 0, 0);
			func_820(-566797819, 1, 0, 0, 0, 0, 0, 0);
			func_820(1469250492, 1, 0, 0, 0, 0, 0, 0);
			func_820(678501753, 1, 0, 0, 0, 0, 0, 0);
			func_820(-1079073283, 1, 0, 0, 0, 0, 0, 0);
			func_820(-860602360, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_820(-1247339802, 0, 0, 0, 1, 0, 0, 0);
			func_820(2046695029, 0, 0, 0, 1, 0, 0, 0);
			func_820(834296435, 0, 0, 0, 1, 0, 0, 0);
			func_820(1124531468, 0, 0, 0, 1, 0, 0, 0);
			func_820(-902483455, 0, 0, 0, 1, 0, 0, 0);
			func_820(-566797819, 0, 0, 0, 1, 0, 0, 0);
			func_820(1469250492, 0, 0, 0, 1, 0, 0, 0);
			func_820(678501753, 0, 0, 0, 1, 0, 0, 0);
			func_820(-1079073283, 0, 0, 0, 1, 0, 0, 0);
			func_820(-860602360, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_400(joaat("WS_VALENTINE_LOCKDOWN_SALOON_SLUMS_DOORS")))
		{
			func_820(1098854605, 1, 0, 0, 0, 0, 0, 0);
			func_820(1013933832, 1, 0, 0, 0, 0, 0, 0);
			func_583(19, 1);
		}
		else
		{
			func_820(1098854605, 0, 0, 0, 1, 0, 0, 0);
			func_820(1013933832, 0, 0, 0, 1, 0, 0, 0);
			if ((!func_413(9, 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RCM_CALLAWAY1")) <= 0) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RCM_CALLAWAY12")) <= 0)
			{
				vVar10 = -1;
				vVar10.f_1 = -1;
				vVar10.f_2 = -1;
				func_1216(19, &vVar10, 1);
				func_1787(&vVar10, 1, 1);
			}
		}
		if (func_400(joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_SLUMS_DOORS")))
		{
			func_820(-1334037078, 1, 0, 0, 0, 0, 0, 0);
			func_820(-1641377529, 1, 0, 0, 0, 0, 0, 0);
			func_820(-74215266, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_820(-1334037078, 0, 0, 0, 1, 0, 0, 0);
			func_820(-1641377529, 0, 0, 0, 1, 0, 0, 0);
			func_820(-74215266, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_400(joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON")))
		{
			func_1114(320, 32);
			func_1114(317, 32);
			func_1114(318, 32);
			func_1114(319, 32);
			func_1114(250, 32);
		}
		else
		{
			func_1113(320, 32);
			func_1113(317, 32);
			func_1113(318, 32);
			func_1113(319, 32);
			func_1113(250, 32);
		}
		if (func_400(joaat("WS_SAINT_DENIS_LOCKDOWN_SALOON_DOORS")))
		{
			func_820(-399528504, 1, 0, 0, 0, 0, 0, 0);
			func_820(804086151, 1, 0, 0, 0, 0, 0, 0);
			func_820(-923901632, 1, 0, 0, 0, 0, 0, 0);
			func_820(-438789356, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_820(-399528504, 0, 0, 0, 1, 0, 0, 0);
			func_820(804086151, 0, 0, 0, 1, 0, 0, 0);
			func_820(-923901632, 0, 0, 0, 1, 0, 0, 0);
			func_820(-438789356, 0, 0, 0, 1, 0, 0, 0);
		}
		if (func_400(joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON")))
		{
			func_1114(354, 32);
			func_1114(367, 32);
			func_1114(368, 32);
			func_1114(369, 32);
			func_1114(370, 32);
			func_1114(371, 32);
			func_1114(886, 32);
		}
		else
		{
			func_1113(354, 32);
			func_1113(367, 32);
			func_1113(368, 32);
			func_1113(86, 32);
			func_1113(370, 32);
			func_1113(371, 32);
			func_1113(886, 32);
		}
		if (func_400(joaat("WS_TUMBLEWEED_LOCKDOWN_SALOON_DOORS")))
		{
			func_820(2094297354, 1, 0, 0, 0, 0, 0, 0);
			func_820(1892085175, 1, 0, 0, 0, 0, 0, 0);
		}
		else
		{
			func_820(2094297354, 0, 0, 0, 1, 0, 0, 0);
			func_820(1892085175, 0, 0, 0, 1, 0, 0, 0);
		}
	}
}

void func_1108(int iParam0, int iParam1)
{
	Global_1897952[iParam0 /*2*/] |= iParam1;
}

void func_1109(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_1110(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_21[iVar1]), iVar2);
}

void func_1111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_400(iParam0))
	{
		if (func_226(Global_1934765.f_20, iParam2))
		{
			iVar0 = func_977(iParam1);
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iVar0);
				POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iVar0);
				func_227(&(Global_1934765.f_20), iParam2);
			}
		}
	}
	else if (!func_226(Global_1934765.f_20, iParam2))
	{
		iVar1 = func_977(iParam1);
		if (VOLUME::DOES_VOLUME_EXIST(iVar1))
		{
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iVar1, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iVar1, iParam3, 0, 0, -1, -1, 0);
			func_1109(&(Global_1934765.f_20), iParam2);
		}
	}
}

int func_1112(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_1788(iParam0);
}

void func_1113(int iParam0, int iParam1)
{
	if (func_112() != -1)
	{
		return;
	}
	if (!func_586(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] -= Global_24887[iParam0 /*2*/] & iParam1;
}

void func_1114(int iParam0, int iParam1)
{
	if (func_112() != -1)
	{
		return;
	}
	if (!func_586(iParam0))
	{
		return;
	}
	Global_24887[iParam0 /*2*/] |= iParam1;
}

bool func_1115(int iParam0, bool bParam1)
{
	if (!func_586(iParam0))
	{
		return false;
	}
	if (!func_1127(iParam0, 2))
	{
		return false;
	}
	if (func_1374(iParam0) == 0)
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_824(iParam0)))
	{
		return true;
	}
	if (func_1127(iParam0, 1) && !bParam1)
	{
		func_1114(iParam0, 128);
		return true;
	}
	func_1113(iParam0, 129);
	func_1789(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_824(iParam0));
	func_1790(iParam0, 0);
	return true;
}

void func_1116()
{
	if (!func_400(0))
	{
		func_943(1149195254);
		func_943(2016081133);
		func_943(363257921);
		func_943(58066174);
		func_943(-1521525254);
		func_943(-761186147);
		func_943(-1872939092);
		func_943(-964156415);
	}
	else
	{
		func_943(-1643869063);
	}
	if (!func_400(joaat("WS_BRAITHWAITE_MANSION_BURNED")))
	{
		func_943(-1108618313);
		func_943(-787678727);
	}
	if (!func_400(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER")))
	{
		func_943(622597018);
		func_943(1649275138);
	}
	func_943(-2137633069);
	func_943(1944013855);
	func_943(-437251660);
	func_1110(124);
	func_1110(125);
	func_1110(187);
	func_1110(188);
	func_1110(123);
	func_1110(122);
	func_1110(121);
	func_1110(120);
	func_1121("bra_man_burned");
	func_1121("bra_man_burned_bra3");
	func_1121("bra_man_endsum");
}

void func_1117(bool bParam0)
{
	func_1791(-1452136643, bParam0);
	func_1791(-744260705, bParam0);
	func_1791(1424293412, bParam0);
	func_1791(1060557512, bParam0);
	func_1791(-362403544, bParam0);
	func_1791(-592147003, bParam0);
	func_1791(2056145270, bParam0);
	func_1791(748826019, bParam0);
	func_1791(366542865, bParam0);
	func_1791(-1508467572, bParam0);
	func_1791(-1220264217, bParam0);
	func_1791(-990258606, bParam0);
	func_1791(-1508467572, bParam0);
	func_1791(-1220264217, bParam0);
	func_1791(-990258606, bParam0);
	func_1791(-665583358, bParam0);
	func_1791(-282972514, bParam0);
	func_1791(-64632667, bParam0);
	func_1791(314111435, bParam0);
	func_1791(24859476, bParam0);
	func_1791(340621560, bParam0);
	func_1791(1266707689, bParam0);
	func_1791(434145706, bParam0);
	func_1791(654746614, bParam0);
	func_1791(1965736001, bParam0);
	func_1791(1650694835, bParam0);
	func_1791(1891284833, bParam0);
	func_1791(1576931820, bParam0);
	func_1791(1812999696, bParam0);
	func_1791(-1184151355, bParam0);
	func_1791(-946313953, bParam0);
	func_1791(-889100155, bParam0);
	func_1791(-1296418825, bParam0);
	func_1791(352816221, !bParam0);
	func_1791(1128622296, !bParam0);
	func_1791(979982112, !bParam0);
	func_1791(1756640181, !bParam0);
	func_1791(1557076971, !bParam0);
	func_1791(1913538153, !bParam0);
	func_1791(-1603329230, !bParam0);
	func_1791(-1892843345, !bParam0);
	func_1791(241205019, !bParam0);
}

void func_1118(int iParam0, int iParam1)
{
	func_820(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

int func_1119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_1590(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_1128((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_1120(int iParam0, int iParam1)
{
	func_820(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_1121(char* sParam0)
{
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP(sParam0);
	}
}

void func_1122()
{
	if (func_400(joaat("WS_CALIGA_HALL_TABACCO_START")))
	{
		func_943(419559004);
		func_943(1786931635);
		func_943(557212279);
		func_943(1426715569);
		func_943(2097480406);
		func_1121("cal_nav_tabacco_burnt");
		func_1121("cal_nav_tabacco_burning");
		func_1121("cal_nav_tabacco_mission");
		func_944(702350293);
		func_944(-677977650);
		func_944(26815048);
		func_944(-1229109520);
		func_877("cal_nav_tabacco_clean");
	}
	else if (func_400(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION")))
	{
		func_943(419559004);
		func_943(1786931635);
		func_943(557212279);
		func_1121("cal_nav_tabacco_burnt");
		func_1121("cal_nav_tabacco_burning");
		func_1121("cal_nav_tabacco_clean");
		func_944(702350293);
		func_944(-677977650);
		func_944(26815048);
		func_944(-1229109520);
		func_944(1426715569);
		func_944(2097480406);
		func_877("cal_nav_tabacco_mission");
	}
	else if (func_400(joaat("WS_CALIGA_HALL_TABACCO_BURNING")))
	{
		func_943(419559004);
		func_943(26815048);
		func_943(-1229109520);
		func_1121("cal_nav_tabacco_burnt");
		func_1121("cal_nav_tabacco_clean");
		func_1121("cal_nav_tabacco_mission");
		func_944(702350293);
		func_944(-677977650);
		func_944(1786931635);
		func_944(557212279);
		func_944(1426715569);
		func_944(2097480406);
		func_877("cal_nav_tabacco_burning");
	}
	else if (func_400(joaat("WS_CALIGA_HALL_TABACCO_BURNT")))
	{
		func_943(702350293);
		func_943(-677977650);
		func_943(26815048);
		func_943(-1229109520);
		func_943(1426715569);
		func_943(2097480406);
		func_1121("cal_nav_tabacco_clean");
		func_1121("cal_nav_tabacco_mission");
		func_1121("cal_nav_tabacco_burning");
		func_944(419559004);
		func_944(1786931635);
		func_944(557212279);
		func_877("cal_nav_tabacco_burnt");
	}
}

void func_1123()
{
	func_943(-717025835);
	func_943(1248111234);
	if (!func_400(joaat("WS_COLTER_STAGE_MUDTOWN1")) && !func_400(joaat("WS_COLTER_STAGE_THAWED_SNOW")))
	{
		func_943(-1316886711);
		func_943(867231253);
	}
	if (!func_400(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_943(474287981);
		func_943(-1670453688);
	}
	func_943(2039534767);
	func_943(joaat("WIN1_INTRO_CUTSCENE"));
	func_943(-323126593);
	func_943(1590561203);
	func_943(205214733);
	if (!func_400(joaat("WS_COLTER_STAGE_CABIN_BURNING")) && !func_400(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_943(-338553155);
		func_943(-1106668087);
		func_943(-1636879249);
	}
	func_1110(186);
	if (!func_400(joaat("WS_COLTER_STAGE_HIGH_SNOW")))
	{
		func_1121("col_nav_wint1_cabin_prefire");
	}
	func_1121("col_nav_wint1_cabin_duringfire");
	func_1121("col_nav_wint2_post");
	func_1121("col_nav_wint_end");
}

void func_1124()
{
	if (func_400(joaat("WS_FUSSAR2_LIGHTING")))
	{
		func_944(263152228);
		func_944(1936009597);
	}
	else
	{
		func_943(263152228);
		func_943(1936009597);
	}
}

void func_1125(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1310750.f_16074 |= iParam0;
	}
	else
	{
		Global_1310750.f_16074 -= Global_1310750.f_16074 & iParam0;
	}
}

void func_1126()
{
	if (!func_400(joaat("WS_RHODES_GRAYS3_COVER_ON")))
	{
		func_943(1033721560);
	}
	func_943(1343484786);
	func_943(1871051363);
	func_943(146746575);
	func_943(-2144587490);
	func_943(1989074279);
	func_943(-1671953459);
	func_1121("rho_nav_grave_norm_gry3_off");
	func_1121("rho_nav_grave_norm_gry3_on");
	func_1121("rho_nav_grave_dug_gry3_off");
	func_1121("rho_nav_grave_dug_gry3_on");
	func_1121("rho_nav_grave_open_gry3_off");
	func_1121("rho_nav_grave_open_gry3_on");
	func_1121("sad3_nav_rhodes_shootout_00");
}

bool func_1127(int iParam0, int iParam1)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_586(iParam0))
	{
		return false;
	}
	return Global_24887[iParam0 /*2*/] & iParam1 != 0;
}

bool func_1128(int iParam0)
{
	int iVar0;

	if (!func_586(iParam0))
	{
		return false;
	}
	if (!func_1375(func_1374(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_824(iParam0)))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_824(iParam0))))
		{
			return true;
		}
	}
	iVar0 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(func_824(iParam0));
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
	}
	PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_824(iParam0));
	return true;
}

bool func_1129(int iParam0)
{
	if (!func_586(iParam0))
	{
		return false;
	}
	if (!func_1375(func_1374(iParam0)))
	{
		return true;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_824(iParam0)))
	{
		return false;
	}
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_824(iParam0));
	return true;
}

void func_1130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_1934765.f_30[iVar1]), iVar2);
}

float func_1131(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_1132(int iParam0)
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

void func_1133(int iParam0)
{
	if (!GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

bool func_1134(int iParam0)
{
	switch (func_112())
	{
		case -1:
			return Global_1357549.f_1495 & iParam0 != 0;
	}
	return false;
}

void func_1135(int iParam0)
{
	switch (func_112())
	{
		case -1:
			Global_1357549.f_1495 |= iParam0;
			break;
	}
}

int func_1136(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_1590(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_1129((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_1137(int iParam0)
{
	switch (func_112())
	{
		case -1:
			Global_1357549.f_1495 -= Global_1357549.f_1495 & iParam0;
			break;
	}
}

int func_1138(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_47(iParam0))
	{
		return 0;
	}
	if (!func_1590(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_1115((iVar1 + iVar0), 0))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_1139()
{
	if (func_400(joaat("WS_RHODES_BANK_WALL_INTACT")))
	{
		func_943(758684739);
		func_943(-661825463);
		func_944(518127510);
		func_1110(182);
		func_813(181);
	}
	else
	{
		func_943(518127510);
		func_944(758684739);
		func_944(-661825463);
		func_1110(181);
		func_813(182);
	}
}

bool func_1140(int iParam0)
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

void func_1141()
{
	func_1121("nav_sdn_docks_pre_es");
	func_1121("nav_sdn_docks_korrigan_pre_es");
	func_1121("nav_sdn_docks_antenor_pre_es");
	func_1121("nav_sdn_docks_trains_pre_es");
	func_1121("nav_sdn_docks_korrigan_antenor_pre_es");
	func_1121("nav_sdn_docks_antenor_trains_pre_es");
	func_1121("nav_sdn_docks_korrigan_trains_pre_es");
	func_1121("nav_sdn_docks_korrigan_antenor_trains_pre_es");
	func_1121("nav_sdn_docks_es");
	func_1121("nav_sdn_docks_korrigan_es");
	func_1121("nav_sdn_docks_antenor_es");
	func_1121("nav_sdn_docks_trains_es");
	func_1121("nav_sdn_docks_korrigan_antenor_es");
	func_1121("nav_sdn_docks_antenor_trains_es");
	func_1121("nav_sdn_docks_korrigan_trains_es");
	func_1121("nav_sdn_docks_korrigan_antenor_trains_es");
}

void func_1142(var uParam0, Vector3 vParam1, float fParam4)
{
	if (*uParam0 == -1)
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, 1, -1, 0);
	}
}

void func_1143(int iParam0, int iParam1)
{
	if (*iParam0 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
		*iParam0 = -1;
	}
}

void func_1144(int iParam0, int iParam1)
{
	if (func_400(iParam0))
	{
		func_944(iParam1);
	}
	else
	{
		func_943(iParam1);
	}
}

int func_1145()
{
	return Global_40.f_4283.f_4;
}

bool func_1146(int iParam0)
{
	return Global_1934765.f_67 & iParam0 != 0;
}

void func_1147(int iParam0)
{
	Global_1934765.f_67 -= Global_1934765.f_67 & iParam0;
}

void func_1148()
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	var uVar5;

	if ((((((func_154(1) && !func_154(3)) && !func_153(3)) && !func_152(120)) && !func_153(2)) && func_529()) && !func_185((1 << 15)))
	{
		if (!func_1146(4))
		{
			func_1792();
			func_1793((1 << 10));
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			Global_1934765.f_68 = 0;
			func_1793(4);
		}
		if (!func_154(2) && !func_370(120))
		{
			if (func_1794(0, 9))
			{
				bVar0 = true;
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			}
		}
		else if (func_154(2) && !func_370(120))
		{
			if (func_1794(0, 9))
			{
				bVar0 = true;
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			}
		}
		else if (func_154(2) || func_370(120))
		{
			if (func_1794(0, 16))
			{
				bVar0 = true;
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
			}
		}
		iVar1 = 4;
		fVar2 = 2.0f;
		fVar2 *= (float)iVar1;
		if (bVar0)
		{
			if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != (2000 * iVar1))
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE((2000 * iVar1));
			}
		}
		if (Global_1897952.f_40)
		{
			if (Global_1934765.f_68 != joaat("BLIZZARD") && !func_1794(6, 19))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				MISC::_SET_WEATHER_TYPE_2(joaat("BLIZZARD"), 11, 0, 0, false);
			}
			return;
		}
		fVar3 = 15.0f;
		MISC::_GET_FORCED_WEATHER(&uVar4, &uVar5);
		if (func_1794(21, 4))
		{
			if (func_1548(func_538()) < 22 && func_1567(func_538()) >= 30)
			{
				if (Global_1934765.f_68 != joaat("SNOW"))
				{
					Global_1934765.f_68 = joaat("SNOW");
					MISC::SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, (fVar2 * (float)(60 - func_1567(func_538()))), false);
				}
			}
			else if (Global_1934765.f_68 != joaat("BLIZZARD"))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				MISC::SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, fVar3, false);
			}
		}
		else if (func_1794(4, 6))
		{
			if (func_1548(func_538()) >= 5 && func_1567(func_538()) >= 30)
			{
				if (Global_1934765.f_68 != joaat("SNOWLIGHT"))
				{
					Global_1934765.f_68 = joaat("SNOWLIGHT");
					if (func_1548(func_538()) < 6)
					{
						MISC::SET_WEATHER_TYPE(joaat("SNOWLIGHT"), false, true, true, (fVar2 * (float)(60 - func_1567(func_538()))), false);
					}
					else
					{
						MISC::SET_WEATHER_TYPE(joaat("SNOWLIGHT"), false, true, true, fVar3, false);
					}
				}
			}
			else if (Global_1934765.f_68 != joaat("GROUNDBLIZZARD"))
			{
				Global_1934765.f_68 = joaat("GROUNDBLIZZARD");
				if (func_1548(func_538()) < 5)
				{
					MISC::SET_WEATHER_TYPE(joaat("GROUNDBLIZZARD"), false, true, true, (fVar2 * (float)(60 - func_1567(func_538()))), false);
				}
				else
				{
					MISC::SET_WEATHER_TYPE(joaat("GROUNDBLIZZARD"), false, true, true, fVar3, false);
				}
			}
		}
		else if (func_1794(6, 16))
		{
			if (func_1548(func_538()) >= 7)
			{
				if (Global_1934765.f_68 != joaat("SNOW"))
				{
					Global_1934765.f_68 = joaat("SNOW");
					if (func_1548(func_538()) < 8)
					{
						MISC::SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, (fVar2 * (float)(60 - func_1567(func_538()))), false);
					}
					else
					{
						MISC::SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, fVar3, false);
					}
				}
			}
			else if (Global_1934765.f_68 != joaat("SNOWLIGHT"))
			{
				Global_1934765.f_68 = joaat("SNOWLIGHT");
				MISC::SET_WEATHER_TYPE(joaat("SNOWLIGHT"), false, true, true, fVar3, false);
			}
		}
		else if (func_1794(16, 20))
		{
			if (Global_1934765.f_68 != joaat("BLIZZARD"))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				if (func_1548(func_538()) < 17)
				{
					MISC::SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, (fVar2 * (float)(60 - func_1567(func_538()))), false);
				}
				else
				{
					MISC::SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, fVar3, false);
				}
			}
		}
		else if (func_1794(20, 22))
		{
			if (func_1548(func_538()) <= 21 && func_1567(func_538()) <= 30)
			{
				if (Global_1934765.f_68 != joaat("SNOW"))
				{
					Global_1934765.f_68 = joaat("SNOW");
					if (func_1548(func_538()) < 21)
					{
						MISC::SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, (fVar2 * (float)(60 - func_1567(func_538()))), false);
					}
					else
					{
						MISC::SET_WEATHER_TYPE(joaat("SNOW"), false, true, true, fVar3, false);
					}
				}
			}
			else if (Global_1934765.f_68 != joaat("BLIZZARD"))
			{
				Global_1934765.f_68 = joaat("BLIZZARD");
				MISC::SET_WEATHER_TYPE(joaat("BLIZZARD"), false, true, true, fVar3, false);
			}
		}
	}
	else
	{
		if (func_1146(4))
		{
			Global_1934765.f_68 = 0;
			CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
			func_1147(4);
		}
		if (func_1146((1 << 10)) && !func_114(0, 0, 1))
		{
			func_1795(0, 1103626240);
			func_1147((1 << 10));
		}
	}
}

void func_1149()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_911() == 1)
	{
		iVar0 = func_46();
		if ((func_47(iVar0) && iVar0 >= 62) && iVar0 <= 76)
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (func_1796(5))
			{
				func_1797(5, 0, 1103626240);
				return;
			}
		}
		else
		{
			iVar2 = func_1798(func_1018(joaat("COMPLETED"), joaat("MISSIONS_CHP2")));
			if (iVar2 < 8)
			{
				if (func_1799(5) != joaat("WEATHER_GROUP_CH2_START"))
				{
					func_1800(joaat("WEATHER_GROUP_CH2_START"), 5, 0, 1103626240);
				}
			}
			else if (iVar2 < 15)
			{
				if (func_1799(5) != joaat("WEATHER_GROUP_CH2_MID"))
				{
					func_1800(joaat("WEATHER_GROUP_CH2_MID"), 5, 0, 1103626240);
				}
			}
			else if (func_1799(5) != joaat("WEATHER_GROUP_CH2_END"))
			{
				func_1800(joaat("WEATHER_GROUP_CH2_END"), 5, 0, 1103626240);
			}
		}
	}
}

void func_1150()
{
	int iVar0;
	bool bVar1;

	if (func_911() == 2)
	{
		iVar0 = func_46();
		if ((func_47(iVar0) && iVar0 >= 93) && iVar0 <= 106)
		{
			bVar1 = true;
		}
		if (!bVar1)
		{
			if (func_1796(5))
			{
				func_1797(5, 0, 1103626240);
			}
			return;
		}
		if (!func_1796(5) && bVar1)
		{
			func_1800(joaat("WEATHER_GROUP_CH3_DROUGHT"), 5, 0, 1103626240);
		}
	}
}

void func_1151()
{
	int iVar0;

	if (func_734(34))
	{
		if (!func_1146(64))
		{
			iVar0 = func_46();
			if (func_47(iVar0) && iVar0 == 5)
			{
				MISC::_0x745808BB01CEC6B9(1.0f);
				func_1793(64);
			}
		}
	}
	else if (func_1146(64))
	{
		func_1147(64);
		MISC::_0x745808BB01CEC6B9(0.0f);
	}
}

void func_1152()
{
	if (func_154(39) && !func_154(43))
	{
		if (!func_114(0, 1, 0))
		{
			if (func_154(40) && func_154(41))
			{
				func_1801(19, 0, 0, 0);
			}
			else if (func_154(40))
			{
				func_1802();
			}
			else
			{
				func_1803();
			}
		}
		else if (func_1146(256) || func_1146((1 << 9)))
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			func_1795(0, 1103626240);
			func_1147(256);
			func_1147((1 << 9));
		}
	}
	else if (func_1146(256) || func_1146((1 << 9)))
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		func_1795(0, 1103626240);
		func_1147(256);
		func_1147((1 << 9));
	}
}

void func_1153()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = -1;
	iVar0 -= iVar0 & 1 | 2 | 4 | 16 | 8 | 32 | 64 | 128 | 256 | (1 << 11) | (1 << 15);
	if (func_114(iVar0, 0, 1))
	{
		return;
	}
	iVar1 = -1;
	fVar2 = 0.0f;
	fVar3 = 0.0f;
	iVar4 = 0;
	while (iVar4 < Global_40.f_450)
	{
		iVar5 = Global_40.f_450[iVar4];
		if (func_141(iVar5))
		{
			if (Global_1347702[iVar5 /*49*/].f_46 == 0)
			{
				Jump @253; // curOff = 121
			}
			else if (Global_1347702[iVar5 /*49*/].f_12 & (1 << 28) == 0)
			{
				Jump @253; // curOff = 147
			}
			else if (Global_1347702[iVar5 /*49*/].f_13 & (1 << 14) != 0)
			{
				Jump @253; // curOff = 171
			}
			else if (Global_1347702[iVar5 /*49*/].f_14 & 2 != 0)
			{
				Jump @253; // curOff = 193
			}
			else
			{
				fVar2 = BUILTIN::VDIST2(Global_36, func_609(iVar5));
				if (fVar2 < 122500.0f)
				{
					if (fVar3 == 0.0f || fVar2 < fVar3)
					{
						fVar3 = fVar2;
						iVar1 = iVar5;
					}
				}
			}
		}
		iVar4++;
	}
	if (func_141(iVar1))
	{
		if (!func_1796(2))
		{
			func_1800(Global_1347702[iVar1 /*49*/].f_46, 2, 0, 1103626240);
		}
		else if (func_1799(2) != Global_1347702[iVar1 /*49*/].f_46)
		{
			func_1800(Global_1347702[iVar1 /*49*/].f_46, 2, 0, 1103626240);
		}
	}
	else if (func_1796(2))
	{
		func_1797(2, 0, 1103626240);
	}
}

void func_1154()
{
	int iVar0;

	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 1) && Global_1934765.f_337 > 0)
	{
		iVar0 = func_1804();
		if (iVar0 > -1 && Global_1934765.f_338 != iVar0)
		{
			func_1805(0, Global_1934765.f_318[iVar0 /*3*/].f_2);
		}
	}
}

void func_1155(int iParam0)
{
	Global_1572864.f_3 -= Global_1572864.f_3 & iParam0;
}

void func_1156(var uParam0)
{
	if (!func_1806(uParam0))
	{
		return;
	}
	if (!func_1807(&(Global_1934765.f_402), 1))
	{
		return;
	}
	if (func_1808(uParam0))
	{
		if (func_1809(uParam0, 1))
		{
			func_1793((1 << 11));
		}
		else if (func_1809(uParam0, 2))
		{
			func_1793((1 << 12));
		}
		else if (func_1809(uParam0, 3))
		{
			func_1793((1 << 13));
		}
		func_1810(uParam0);
	}
	else if (func_1807(&(Global_1934765.f_402), 128))
	{
		if (!func_1807(uParam0, 2) || func_1807(uParam0, 32))
		{
			func_1810(uParam0);
		}
	}
}

void func_1157(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_1146((1 << 11)))
	{
		return;
	}
	if (!func_440(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
	{
		if (func_1809(uParam0, 1))
		{
			func_1811(uParam0);
		}
		return;
	}
	iVar0 = -1;
	iVar0 -= iVar0 & 1 | 2 | 4 | 8;
	if (func_114(iVar0, 0, 1))
	{
		if (func_1809(uParam0, 1))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (func_1806(uParam0))
	{
		return;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("VIG_PLAYLIST_PARTY_HSO")) > 0)
	{
		return;
	}
	if (func_992())
	{
		return;
	}
	iVar1 = func_538();
	iVar2 = iVar1;
	func_1812(&iVar2, 20);
	func_1813(&iVar2, 30);
	if (func_956(iVar1, iVar2, 1))
	{
		func_823(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	}
	if (func_1814(uParam0, 1, iVar2, func_1658(1), 1200.0f, 100.0f, 30.0f, 2000, 30))
	{
		func_1815(uParam0, (1 << 9));
		func_1815(uParam0, (1 << 10));
	}
}

void func_1158(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_1146((1 << 12)))
	{
		return;
	}
	if (func_992())
	{
		if (func_1809(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	iVar0 = func_1816(26);
	if (!func_246(iVar0))
	{
		if (func_1809(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	iVar1 = -1;
	iVar1 -= iVar1 & 1 | 2 | 4 | 8;
	if (func_114(iVar1, 0, 1))
	{
		if (func_1809(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (func_446(iVar0))
	{
		if (func_1809(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (func_1817(0))
	{
		if (func_1809(uParam0, 2))
		{
			func_1811(uParam0);
		}
		return;
	}
	if (func_1806(uParam0))
	{
		return;
	}
	iVar2 = func_538();
	iVar3 = iVar2;
	func_1812(&iVar3, 19);
	func_1813(&iVar3, 45);
	if (func_956(iVar2, iVar3, 1))
	{
		func_823(&iVar2, 0, 0, 2, 0, 0, 0, 0);
		if (func_956(iVar2, iVar3, 1))
		{
			func_823(&iVar3, 0, 0, 0, 1, 0, 0, 0);
		}
		else
		{
			iVar3 = iVar2;
		}
	}
	if (func_1814(uParam0, 2, iVar3, func_566(26), 800.0f, 50.0f, -1082130432, 2000, 30))
	{
		func_1815(uParam0, (1 << 9));
	}
}

void func_1159()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (func_663(45))
	{
		bVar0 = (func_439() == 7 && func_1134((1 << 9)));
		bVar1 = (func_541(0) == 1 || func_541(0) == 8);
		if (func_1146(32))
		{
			bVar2 = false;
			if (bVar1)
			{
				bVar2 = true;
			}
			if (!bVar0)
			{
				bVar2 = true;
			}
			if (bVar2)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
				func_1147(32);
			}
		}
		else if (bVar0 && !bVar1)
		{
			func_1793(32);
		}
		if (func_1146(32))
		{
			iVar3 = 16;
			if (func_447(func_514(65), 1) && func_246(func_514(66)))
			{
				iVar3 = 18;
			}
			if (CLOCK::GET_CLOCK_HOURS() >= iVar3)
			{
				if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 9999999)
				{
					CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(9999999);
				}
			}
			else if (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() != 10000)
			{
				CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(10000);
			}
		}
	}
}

float func_1160()
{
	return (func_368(150.0f, BUILTIN::TO_FLOAT(Global_1934765.f_286)) / BUILTIN::TO_FLOAT(300));
}

void func_1161()
{
	if (Global_1934765.f_286 > 300)
	{
		Global_1934765.f_286 = 300;
	}
	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_1160());
}

void func_1162(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	int iVar5;
	int iVar6;

	if (!func_1818(iParam1, &iVar0))
	{
		func_1819(uParam0, iParam1);
		return;
	}
	vVar2 = { func_1820(iVar0) /*3*/ };
	iVar5 = func_423(iVar0);
	iVar6 = func_427(iVar0);
	if (!func_549(uParam0->f_34[iParam1]))
	{
		iVar1 = func_1218(iVar6, iVar5);
		uParam0->f_34[iParam1] = func_158(iVar5, iVar1, vVar2, -1);
		if (func_273())
		{
			func_1821(uParam0, iParam1, 2);
			func_624(uParam0->f_34[iParam1], joaat("BLIP_MODIFIER_HIDDEN"));
		}
		func_1822(uParam0->f_34[iParam1], func_113());
	}
	else
	{
		func_1823(uParam0->f_34[iParam1], vVar2);
	}
	if (!func_1824(iParam1))
	{
		return;
	}
	if (uParam0->f_68 | func_1825(iParam1))
	{
		if (!func_1826(uParam0, iParam1, 2))
		{
			func_1821(uParam0, iParam1, 2);
			func_624(uParam0->f_34[iParam1], joaat("BLIP_MODIFIER_HIDDEN"));
			return;
		}
	}
	else if (func_1826(uParam0, iParam1, 2))
	{
		func_1827(uParam0, iParam1, 2);
		func_1207(uParam0->f_34[iParam1], joaat("BLIP_MODIFIER_HIDDEN"));
	}
	if (!func_1826(uParam0, iParam1, 1))
	{
		if (func_1828(iParam1))
		{
			func_1821(uParam0, iParam1, 1);
			func_624(uParam0->f_34[iParam1], joaat("BLIP_MODIFIER_LOCKED"));
		}
	}
	else if (!func_1828(iParam1))
	{
		func_1207(uParam0->f_34[iParam1], joaat("BLIP_MODIFIER_LOCKED"));
		func_1827(uParam0, iParam1, 1);
	}
}

bool func_1163(var uParam0)
{
	return (Global_1935630 && uParam0) != 0;
}

float func_1164(Vector3 vParam0, Vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_1165(int iParam0)
{
	return (iParam0 >= 1 && iParam0 < 13);
}

int func_1166(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_128(iParam0);
}

void func_1167(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528.f_11[iParam0] = iParam1;
}

void func_1168(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_9 = 0.0f;
	uParam0->f_10 = 0;
	uParam0->f_5 = 0.0f;
	uParam0->f_11 = -1;
}

void func_1169(var uParam0)
{
	if (func_1188(uParam0->f_3))
	{
		func_1189(&(uParam0->f_3), 1, 0);
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_12 = 0;
	uParam0->f_9 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_6 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
}

void func_1170(int iParam0, bool bParam1)
{
	if (*iParam0 != -1)
	{
		func_629(*iParam0, -1);
		func_630(*iParam0, 0);
		func_631(*iParam0, 0);
		if (MAP::DOES_BLIP_EXIST(Global_36308[*iParam0]))
		{
			if (bParam1)
			{
				MAP::SET_RADAR_ZOOM(Global_36308[*iParam0]);
			}
			MAP::REMOVE_BLIP(&(Global_36308[*iParam0]));
		}
	}
	*iParam0 = -1;
}

void func_1171()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_1541(iVar0) && func_1829(iVar0, 1))
		{
			func_1830(iVar0);
		}
		iVar0++;
	}
}

int func_1172(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -589165916;
		case 1:
			return joaat("HAI_HUNTING_02");
		case 2:
			return joaat("HAI_FISHING_01");
		case 3:
			return joaat("HAI_FISHING_02");
		case 4:
			return joaat("HAI_FIVE_FINGER_FILLET_01");
		case 5:
			return joaat("HAI_HUNTING_06");
		case 6:
			return joaat("HAI_DOMINOES_01");
		case 7:
			return joaat("HAI_COACH_ROBBERY_01");
		case 8:
			return joaat("HAI_COACH_ROBBERY_02");
		case 9:
			return joaat("HAI_FIVE_FINGER_FILLET_02");
		case 10:
			return joaat("HAI_BANK_ROBBERY_01");
		case 11:
			return joaat("HAI_COACH_ROBBERY_03");
		case 12:
			return joaat("HAI_COACH_ROBBERY_04");
		case 13:
			return joaat("HAI_RUSTLING_02");
		case 14:
			return joaat("HAI_HOME_ROBBERY_01");
		case 15:
			return 2061320468;
		case 16:
			return -709866131;
		case 17:
			return -1348173149;
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

void func_1173(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	var uVar7;
	char[] cVar8[8];
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	func_437(iParam1);
	iParam1->f_9 = iParam2;
	iParam1->f_10 = func_445(func_439(), iParam2);
	uParam0->f_1 = 0;
	*uParam0 = Global_1359489.f_21;
	uParam0->f_2 = 429892159;
	uParam0->f_3 = func_1831(func_439());
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1), uParam0))
	{
		uParam0->f_2 = 13127246;
		uParam0->f_3 = iParam2;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1), uParam0))
		{
			func_1832(*uParam0, 191541852, &iVar0, 0);
			iParam1->f_8 = func_1833(iVar0);
			func_1834(*uParam0, 950875968, &(iParam1->f_5), 0);
			func_1835(*uParam0, 1156974471, &(iParam1->f_14), 0);
			func_1835(*uParam0, 1749910275, &(iParam1->f_21), 0);
			func_1836(*uParam0, -240512847, &(iParam1->f_24), 0);
			if (!func_1837(*uParam0, -620745170, &(iParam1->f_42), 0))
			{
				strcpy_s(&(iParam1->f_42), 64, "generic_companion_activity");
			}
			if (func_1832(*uParam0, 1371217890, &iVar1, 0))
			{
				iParam1->f_66 = func_1838(iVar1);
			}
			else
			{
				iParam1->f_66 = 7301;
			}
			if (func_1834(*uParam0, -431208529, &bVar2, 0))
			{
				func_614(&(iParam1->f_31), (1 << 14), bVar2);
			}
			if (!func_1837(*uParam0, -547065739, &(iParam1->f_58), 0))
			{
				strcpy_s(&(iParam1->f_58), 64, "generic_activity_invite");
			}
			if (func_1834(*uParam0, 2090390096, &bVar3, 0))
			{
				if (bVar3)
				{
					iParam1->f_32 = 2;
				}
			}
			if (func_1834(*uParam0, 708078506, &bVar4, 0))
			{
				if (bVar4)
				{
					func_614(&(iParam1->f_31), (1 << 15), 1);
				}
			}
			if (func_1834(*uParam0, 770042177, &bVar5, 0))
			{
				if (bVar5)
				{
					func_614(&(iParam1->f_31), (1 << 16), 1);
				}
			}
			if (func_1834(*uParam0, -1903557952, &bVar6, 0))
			{
				func_614(&(iParam1->f_31), (1 << 17), 1);
			}
			uVar7 = uParam0->f_1;
			uParam0->f_3 = iParam2;
			uParam0->f_4 = joaat("INVITE");
			if (func_1837(*uParam0, -2047775528, &cVar8, 0))
			{
				iParam1->f_32 = 0;
			}
			uParam0->f_3 = -1;
			uParam0->f_1 = uVar7;
			func_1837(*uParam0, 35939498, &(iParam1->f_67), 0);
			if (iParam1->f_32 == -1)
			{
				iParam1->f_32 = 3;
			}
			if (func_1834(*uParam0, -665861927, &bVar16, 0))
			{
				if (bVar16)
				{
					func_614(&(iParam1->f_31), (1 << 12), 1);
				}
			}
			if (func_1834(*uParam0, 886360362, &bVar17, 0))
			{
				if (bVar17)
				{
					func_614(&(iParam1->f_31), (1 << 13), 1);
				}
			}
			uParam0->f_3 = joaat("WAIT");
			if (func_1837(*uParam0, -808176988, &(iParam1->f_34), 0))
			{
				func_1835(*uParam0, -320556862, &(iParam1->f_14), 0);
				func_1836(*uParam0, 1394784022, &(iParam1->f_17), 0);
			}
			iVar19 = 0;
			while (iVar19 < 3)
			{
				uParam0->f_3 = iVar19;
				if (func_1832(*uParam0, 919971448, &iVar20, 0))
				{
					iVar18 = func_1839(iVar20);
					if (func_1541(iVar18))
					{
						iParam1->f_3 |= func_1840(iVar18);
						if (iVar19 == 0)
						{
							*iParam1 = iVar18;
						}
						iVar21++;
					}
				}
			else
			{
				}
				else
				{
					iVar19++;
				}
			}
			if (iVar21 == 1)
			{
				iParam1->f_5 = 1;
			}
		}
	}
}

void func_1174(var uParam0, var uParam1)
{
	struct<5> /*40*/ sVar0;
	bool bVar5;
	bool bVar6;
	float fVar7;

	sVar0.f_0 = Global_1359489.f_21;
	*uParam0 = uParam1->f_8;
	uParam0->f_1 = uParam1->f_9;
	uParam0->f_5 = uParam1->f_10;
	uParam0->f_2 = *uParam1;
	uParam0->f_3 = uParam1->f_3;
	if (func_616(&(uParam1->f_31), (1 << 14)))
	{
		func_1176(&(uParam0->f_9), (1 << 9), 1);
	}
	uParam0->f_26 = uParam1->f_66;
	uParam0->f_52 = { uParam1->f_67 /*8*/ };
	sVar0.f_1 = 0;
	sVar0.f_2 = 429892159;
	sVar0.f_3 = func_1831(func_439());
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = 13127246;
		sVar0.f_3 = uParam1->f_9;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			func_1835(sVar0, -12317914, &(uParam0->f_37), 0);
			func_1836(sVar0, 482834189, &(uParam0->f_40), 0);
			func_1835(sVar0, 1749910275, &(uParam0->f_28), 0);
			func_1836(sVar0, -240512847, &(uParam0->f_31), 0);
			func_1834(sVar0, -350109401, &bVar5, 0);
			if (bVar5)
			{
				func_1176(&(uParam0->f_9), 1, 1);
			}
			func_1834(sVar0, -1153145259, &bVar6, 0);
			if (bVar6)
			{
				func_1176(&(uParam0->f_9), 32, 1);
			}
			if (func_1836(sVar0, -768200779, &fVar7, 0))
			{
				uParam0->f_41 = fVar7;
			}
			if (func_1837(sVar0, 1946033125, &(uParam0->f_18), 0))
			{
				func_1176(&(uParam0->f_9), 4, 1);
			}
			if (func_1837(sVar0, 738913608, &(uParam0->f_68), 0))
			{
			}
			if (func_1835(sVar0, -1498558552, &(uParam0->f_32), 0))
			{
				func_1836(sVar0, -950402515, &(uParam0->f_35), 0);
				sVar0.f_3 = 1476587948;
				if (func_1832(sVar0, -808176988, &(uParam0->f_36), 0))
				{
				}
				else
				{
					uParam0->f_36 = joaat("WORLD_HUMAN_SMOKE");
				}
			}
		}
	}
}

void func_1175(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_127(iParam0))
	{
		return;
	}
	if (!func_246(iParam0))
	{
		return;
	}
	iVar0 = func_377(iParam0);
	if (bParam1)
	{
		if (func_378(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_378(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != Global_1835011[77 /*74*/].f_1)
			{
				func_1841(func_519(iParam0));
			}
			if (func_112() != 0)
			{
				STATS::STATSTRACKER_DEED_STARTED(func_378(iParam0), 0);
			}
			else
			{
				STATS::STATSTRACKER_DEED_STARTED(func_378(iParam0), Global_265073.f_73815.f_208.f_12);
			}
		}
	}
	func_1842(iParam0);
	if (!func_127(func_539(0)))
	{
		func_247(iParam0, 3);
		func_746(bParam2);
		if (func_112() == -1)
		{
			if (bParam2 == 0)
			{
				LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
			}
			func_912(1);
		}
		func_1843(iParam0, -1);
		if (bParam1 && !func_185(2))
		{
			func_1312(&Global_0, (1 << 10));
		}
		if (func_112() == -1)
		{
			func_1844(&(Global_1347343.f_11), (1 << 29));
			func_1155(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_166(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_1445(0);
			}
		}
		if (func_112() == -1)
		{
			iVar1 = func_909(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_911();
				switch (iVar1)
				{
					case 0:
						func_1845(0);
						break;
					case 1:
						func_1845(1);
						break;
					case 2:
						func_1845(2);
						break;
					case 3:
						func_1845(3);
						break;
					case 4:
						func_1845(4);
						break;
					case 5:
						func_1845(5);
						break;
					case 6:
						func_1845(5);
						break;
					case 7:
						func_1845(7);
						break;
					case 8:
						func_1845(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_519(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_1845(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_519(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_1845(11);
						break;
					default:
						iVar1 = func_911();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_1846(0);
									break;
								case 1:
									func_1846(1);
									break;
								case 2:
									func_1846(2);
									break;
								case 3:
									func_1846(3);
									break;
								case 4:
									func_1846(4);
									break;
								case 5:
									func_1846(5);
									break;
								case 6:
									func_1846(5);
									break;
								case 7:
									func_1846(7);
									break;
								case 8:
									func_1846(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_913(1);
	}
	else
	{
		func_1843(iParam0, -1);
		func_247(iParam0, 4);
	}
	func_914(iParam0, 0);
}

void func_1176(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= *uParam0 & iParam1;
	}
}

bool func_1177(bool bParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_490, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1391438.f_490, 1);
		bVar0 = false;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_592, false))
	{
		PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1391438.f_592, 1);
		bVar0 = false;
	}
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_246(Global_1391438.f_7[iVar1 /*99*/].f_10))
		{
			func_312(Global_1391438.f_7[iVar1 /*99*/].f_10, 0, 2);
		}
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1391438.f_206[iVar1], false))
		{
			PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1391438.f_206[iVar1], 1);
			bVar0 = false;
		}
		iVar1++;
	}
	if (bVar0)
	{
		func_1171();
		if (bParam0)
		{
			func_1847();
		}
	}
	return bVar0;
}

int func_1178(var uParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;
	var uVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	uParam0->f_1 = iParam1;
	uParam0->f_16 = func_445(func_439(), iParam1);
	sVar0.f_0 = Global_1359489.f_21;
	sVar0.f_2 = 429892159;
	sVar0.f_3 = func_1831(func_439());
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = 13127246;
		sVar0.f_3 = iParam1;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			if (func_1834(sVar0, -1688140176, &bVar6, 0))
			{
				uParam0->f_11 = bVar6;
			}
			else
			{
				uParam0->f_11 = 1;
			}
			func_1835(sVar0, 1156974471, &(uParam0->f_5), 0);
			func_1835(sVar0, -12317914, &(uParam0->f_8), 0);
			func_1832(sVar0, 191541852, &iVar7, 0);
			*uParam0 = func_1833(iVar7);
			uVar5 = sVar0.f_1;
			uParam0->f_3 = 0;
			iVar9 = 0;
			while (iVar9 < 3)
			{
				sVar0.f_3 = iVar9;
				if (func_1832(sVar0, 919971448, &iVar10, 0))
				{
					iVar8 = func_1839(iVar10);
					if (func_1541(iVar8))
					{
						uParam0->f_3 |= func_1840(iVar8);
						if (iVar9 == 0)
						{
							uParam0->f_2 = iVar8;
						}
					}
				}
			else
			{
				}
				else
				{
					iVar9++;
				}
			}
			sVar0.f_1 = uVar5;
			sVar0.f_2 = 429172948;
			uParam0->f_17 = 0;
			if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
			{
				iVar11 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(sVar0.f_0, sVar0.f_1);
				iVar9 = 0;
				while (iVar9 < iVar11)
				{
					sVar0.f_3 = iVar9;
					func_1848(sVar0, -1857445163, &iVar12, 0);
					func_1848(sVar0, 1738420189, &iVar13, 0);
					if (iVar13 < iVar12)
					{
					}
					iVar14 = iVar12;
					while (iVar14 <= iVar13)
					{
						func_1849(&(uParam0->f_17), iVar14, 1);
						iVar14++;
					}
					iVar9++;
				}
			}
			return 1;
		}
	}
	return 0;
}

bool func_1179(int iParam0, int iParam1)
{
	if (!func_955(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_140 & iParam1 != 0)
	{
		return true;
	}
	if (Global_1360165[iParam0 /*1157*/].f_141 & iParam1 != 0)
	{
		return true;
	}
	return false;
}

int func_1180(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_1541(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (func_1850(iParam0, iParam1, 0))
		{
			return 0;
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
		func_823(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

bool func_1181(int iParam0)
{
	int iVar0;
	int iVar1;

	func_1851(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1357549.f_1866[iVar0], iVar1);
}

int func_1182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return 1;
		case joaat("HAI_BANK_ROBBERY_01"):
			return 10;
		case -1348173149:
			return 17;
		case joaat("HAI_HOME_ROBBERY_01"):
			return 14;
		case joaat("HAI_COACH_ROBBERY_01"):
			return 7;
		case -709866131:
			return 16;
		case joaat("HAI_COACH_ROBBERY_03"):
			return 11;
		case -589165916:
			return 0;
		case joaat("HAI_COACH_ROBBERY_02"):
			return 8;
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return 4;
		case joaat("HAI_COACH_ROBBERY_04"):
			return 12;
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return 9;
		case joaat("HAI_FISHING_01"):
			return 2;
		case joaat("HAI_RUSTLING_02"):
			return 13;
		case joaat("HAI_FISHING_02"):
			return 3;
		case joaat("HAI_HUNTING_06"):
			return 5;
		case joaat("HAI_DOMINOES_01"):
			return 6;
		case 2061320468:
			return 15;
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

Vector3 func_1183()
{
	if (func_154(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_154(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

bool func_1184()
{
	return Global_1327590.f_9 != -1;
}

bool func_1185()
{
	return Global_1327590.f_10 != -1;
}

struct<8> /*64*/ func_1186(int iParam0)
{
	char cVar0[64];

	switch (iParam0)
	{
		case 0:
			strcpy_s(&cVar0, 64, "vig_playlist_colter");
			break;
		case 1:
			strcpy_s(&cVar0, 64, "vig_playlist_colter");
			break;
		case 2:
			strcpy_s(&cVar0, 64, "vig_playlist_colter");
			break;
		case 3:
			strcpy_s(&cVar0, 64, "vig_playlist_hosea_focus");
			break;
		case 4:
			strcpy_s(&cVar0, 64, "vig_playlist_lowkey_hso");
			break;
		case 5:
			strcpy_s(&cVar0, 64, "vig_playlist_music_snknj");
			break;
		case 6:
			strcpy_s(&cVar0, 64, "vig_playlist_music_pns");
			break;
		case 10:
			strcpy_s(&cVar0, 64, "vig_playlist_mud1_post");
			break;
		case 7:
			strcpy_s(&cVar0, 64, "vig_playlist_dtc1_post");
			break;
		case 8:
			strcpy_s(&cVar0, 64, "vig_playlist_dtc3_post");
			break;
		case 12:
			strcpy_s(&cVar0, 64, "vig_playlist_sad1_post");
			break;
		case 9:
			strcpy_s(&cVar0, 64, "vig_playlist_gang3_post");
			break;
		case 13:
			strcpy_s(&cVar0, 64, "vig_playlist_strauss31_post");
			break;
		case 11:
			strcpy_s(&cVar0, 64, "vig_playlist_mud5_post");
			break;
		case 14:
			strcpy_s(&cVar0, 64, "vig_playlist_party_hso");
			break;
		case 15:
			strcpy_s(&cVar0, 64, "vig_playlist_party_sdb");
			break;
		case 16:
			strcpy_s(&cVar0, 64, "vig_playlist_fud1_post");
			break;
	}
	return cVar0;
}

int func_1187()
{
	return Global_1359453.f_4[Global_1359453.f_3];
}

bool func_1188(int iParam0)
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

void func_1189(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_1188(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_1852(*uParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_984(iVar0);
	*uParam0 = 0;
}

void func_1190(char* sParam0, int iParam1, int iParam2)
{
}

bool func_1191(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_1 == -589165916)
	{
		return false;
	}
	uParam0->f_4 = 0;
	if (uParam0->f_15)
	{
		func_1190("The activity is being force launched. Returning TRUE.", 1, 1);
		return true;
	}
	if (!uParam0->f_11)
	{
		func_1190("The activity is not enabled in flow.", 1, 1);
		func_1853(&(uParam0->f_4), 1, 1);
	}
	if (uParam0->f_12)
	{
		func_1853(&(uParam0->f_4), 2, 1);
	}
	if (!func_1633(uParam0->f_2, 1, 0))
	{
		func_1190("Host is not available.", 1, 1);
		func_1853(&(uParam0->f_4), 4, 1);
	}
	if (func_1850(uParam0->f_2, 2, 0))
	{
		func_1190("Host has a higher level ambient request.", 1, 1);
		func_1853(&(uParam0->f_4), 4, 1);
	}
	if (func_1179(uParam0->f_2, 2))
	{
		func_1190("Host already requested for another activity.", 1, 1);
		func_1853(&(uParam0->f_4), 4, 1);
	}
	if (func_1203(uParam0->f_1))
	{
		func_1190("Activity has already been performed.", 1, 1);
		func_1853(&(uParam0->f_4), 32, 1);
	}
	if (!func_1201(*uParam0))
	{
		func_1190("Activity type is not unlocked.", 1, 1);
		func_1853(&(uParam0->f_4), 64, 1);
	}
	if (!func_1854(uParam0->f_1))
	{
		func_1190("Activity type is not unlocked.", 1, 1);
		func_1853(&(uParam0->f_4), 64, 1);
	}
	switch (uParam0->f_1)
	{
		case joaat("HAI_DOMINOES_01"):
			if (func_903(134, 0))
			{
				func_1190("Activity would be too close to Sadie 1.", 1, 1);
				func_1853(&(uParam0->f_4), 128, 1);
			}
			break;
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			if (func_415(1) < 10)
			{
				func_1190("Not enough money.", 1, 1);
				func_1853(&(uParam0->f_4), 64, 1);
			}
			break;
	}
	if (!func_587(uParam0->f_5))
	{
		if (func_1199(uParam0->f_5, 6.0f, 4, 1))
		{
			func_1190("Activity would be inside an existing lock volume.", 1, 1);
			func_1853(&(uParam0->f_4), 128, 1);
		}
	}
	if (!func_1414(uParam0))
	{
		func_1190("We're outside the time window..", 1, 1);
		func_1853(&(uParam0->f_4), 256, 1);
	}
	if (func_1202(*uParam0))
	{
		func_1190("An activity of the same type is already pending.", 1, 1);
		func_1853(&(uParam0->f_4), (1 << 9), 1);
	}
	if (Global_40.f_4283.f_4 != 1)
	{
		func_1190("We're not in a running state for camp.", 1, 1);
		func_1853(&(uParam0->f_4), 256, 1);
	}
	iVar0 = func_439();
	switch (iVar0)
	{
		case 1:
			if (func_440(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (func_440(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (bVar1)
	{
		if (!func_1855(uParam0->f_1))
		{
			func_1190("We're not allowed to run during a party night.", 1, 1);
			func_1853(&(uParam0->f_4), 256, 1);
		}
	}
	iVar2 = 0;
	while (iVar2 < 27)
	{
		if (func_1856(&(uParam0->f_3), func_1840(iVar2)))
		{
			if (!func_1676(iVar2))
			{
				func_1190("A Required participant is not available.", 1, 1);
				func_1853(&(uParam0->f_4), (1 << 10), 1);
			}
		}
		iVar2++;
	}
	if (uParam0->f_4 != 0)
	{
		return false;
	}
	func_1190("Activity passes basic checks. It will be added to the array to pick from.", 1, 1);
	return true;
}

int func_1192(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam0->f_18;
	if (uParam0->f_13)
	{
		iVar0 += 100;
		if (!uParam0->f_14)
		{
			uParam0->f_13 = 0;
		}
		return iVar0;
	}
	iVar1 = func_1857(*uParam0);
	if (iVar1 != 176656832)
	{
		if (func_440(iVar1, 1))
		{
			iVar0 -= 5;
		}
	}
	if (!func_1858(*uParam0))
	{
		iVar0 += 5;
	}
	iVar0 -= (1 * uParam0->f_19);
	if (!func_1859(*uParam0))
	{
		iVar0 += 5;
	}
	return iVar0;
}

char* func_1193(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_1194(int iParam0)
{
	switch (iParam0)
	{
		case 907027518:
			return 395864095;
		case 234527101:
			return -848293915;
		case 1784895540:
			return joaat("HASH_CA_HUNTING");
		case -1511391406:
			return joaat("HASH_CA_FFF_CAMP");
		case 654481153:
			return joaat("HASH_CA_FISHING");
		case -1215120894:
			return -424258227;
		case 931703394:
			return 497820992;
		case 1193949598:
			return 384487969;
		case 754620122:
			return joaat("HASH_CA_RUSTLING");
		case -2036347356:
			return 1238571818;
		case -1341684320:
			return -448585888;
		case -919476462:
			return joaat("HASH_CA_COACH");
		case -1670940721:
			return joaat("HASH_CA_BANK");
		case 380107708:
			return -1481840534;
		case -1700356309:
			return 1108319169;
		case 1523333387:
			return -414878571;
		case 1744128959:
			return -363271663;
		case -1567081107:
			return joaat("HASH_CA_DOMINOES_CAMP");
		case -1739349092:
			return -667426721;
		case -301635006:
			return 309704192;
		case 565221344:
			return joaat("HASH_CA_HOMEROBBERY");
		default:
			break;
	}
	return -848293915;
}

int func_1195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HASH_CA_RUSTLING"):
			return 8;
		case -1481840534:
			return 13;
		case joaat("HASH_CA_DOMINOES_CAMP"):
			return 17;
		case -848293915:
			return 1;
		case -667426721:
			return 18;
		case -448585888:
			return 10;
		case -424258227:
			return 5;
		case -414878571:
			return 15;
		case -363271663:
			return 16;
		case joaat("HASH_CA_FISHING"):
			return 4;
		case joaat("HASH_CA_BANK"):
			return 12;
		case 309704192:
			return 19;
		case joaat("HASH_CA_HUNTING"):
			return 2;
		case 384487969:
			return 7;
		case 395864095:
			return 0;
		case 497820992:
			return 6;
		case 1108319169:
			return 14;
		case 1238571818:
			return 9;
		case joaat("HASH_CA_HOMEROBBERY"):
			return 20;
		case joaat("HASH_CA_FFF_CAMP"):
			return 3;
		case joaat("HASH_CA_COACH"):
			return 11;
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

bool func_1196(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_1197()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

Vector3 func_1198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_1860(iParam1);
		case 1:
		case 2:
			return func_1861(iParam1);
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_1199(Vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	var uVar0;
	int iVar5[4];

	if (func_587(vParam0))
	{
		return false;
	}
	uVar0 = 4;
	iVar5[0] = (1 << 14);
	iVar5[1] = iParam4;
	return VOLUME::_0x51E52C9687FCDEEC(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}

int func_1200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (((((((func_957(21, 1, 1) && !func_440(joaat("CSTAG_FLOW_FIRST_VISIT_REV1_POST"), 1)) || func_957(17, 1, 1)) || func_957(19, 1, 1)) || func_957(9, 1, 1)) || (func_957(1, 1, 1) && !func_440(joaat("CSTAG_FLOW_JOHN_RECOVER"), 1))) || func_957(18, 1, 1)) || func_957(4, 1, 1))
			{
				return 1;
			}
			break;
		case 1:
			if ((((func_957(22, 1, 1) || func_957(15, 1, 1)) || func_957(13, 1, 1)) || func_957(17, 1, 1)) || func_957(5, 1, 1))
			{
				return 1;
			}
			break;
		case 2:
			if (((func_957(2, 1, 1) || func_957(6, 1, 1)) || func_957(9, 1, 1)) || (func_957(11, 1, 1) && func_447(Global_1347702[134 /*49*/].f_15, 1)))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_1201(int iParam0)
{
	switch (iParam0)
	{
		case 654481153:
			if (!func_1862() || !func_154(16))
			{
				return false;
			}
			return true;
		case 1784895540:
			if (!func_154(15))
			{
				return false;
			}
			return true;
		case -2036347356:
		case -1567081107:
		case -1511391406:
		case -1341684320:
			return func_428(func_1863(iParam0));
		case -919476462:
			return func_1598(3);
		default:
			break;
	}
	return true;
}

bool func_1202(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Global_1391438.f_7[iVar0 /*99*/].f_8 == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1203(int iParam0)
{
	int iVar0;

	iVar0 = func_445(func_439(), iParam0);
	return func_1864(iVar0) > 0;
}

int func_1204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

bool func_1205(int iParam0, int iParam1)
{
	Vector3 vVar0;
	int iVar3;

	if (func_1865(iParam0))
	{
		if (!func_549(Global_1934051[iParam0 /*2*/]))
		{
			vVar0 = { func_1866(iParam1) /*3*/ };
			if (!func_587(vVar0))
			{
				Global_1934051[iParam0 /*2*/] = func_158(iParam1, 62, vVar0, -1);
			}
			if (Global_1934051[iParam0 /*2*/] != -1)
			{
				if (!Global_1934051[iParam0 /*2*/].f_1)
				{
					func_1868(Global_1934051[iParam0 /*2*/], func_1867(iParam1));
					iVar3 = func_1206(iParam1);
					if (iVar3 != 0)
					{
						func_624(Global_1934051[iParam0 /*2*/], iVar3);
						Global_1934051[iParam0 /*2*/].f_1 = 1;
					}
				}
			}
		}
	}
	return true;
}

int func_1206(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MODIFIER_GROUPING_LAGRAS_LEADER");
		case 5:
			return joaat("BLIP_MODIFIER_GROUPING_SAINT_DENIS_LEADER");
		case 26:
			return joaat("BLIP_MODIFIER_GROUPING_STRAWBERRY_LEADER");
		case 38:
			return joaat("BLIP_MODIFIER_GROUPING_BLACKWATER_LEADER");
		case 69:
			return joaat("BLIP_MODIFIER_GROUPING_EMERALD_RANCH_LEADER");
		case 76:
			return joaat("BLIP_MODIFIER_GROUPING_VALENTINE_LEADER");
		case 78:
			return joaat("BLIP_MODIFIER_GROUPING_ANNESBURG_LEADER");
		case 92:
			return joaat("BLIP_MODIFIER_GROUPING_VAN_HORN_LEADER");
		case 105:
			return joaat("BLIP_MODIFIER_GROUPING_RHODES_LEADER");
		case 115:
			return joaat("BLIP_MODIFIER_GROUPING_TUMBLEWEED_LEADER");
		case 120:
			return joaat("BLIP_MODIFIER_GROUPING_ARMADILLO_LEADER");
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return joaat("BLIP_MODIFIER_GROUPING_CAMP_GROUP_LEADER");
		default:
			break;
	}
	return 0;
}

void func_1207(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_36308[iParam0], iParam1);
		}
	}
}

void func_1208()
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

	iVar0 = func_46();
	iVar4 = 3;
	iVar5 = 0;
	if (func_47(iVar0))
	{
		iVar1 = -1;
		func_1869(iVar0, &iVar1, &iVar2);
		iVar3 = Global_1914319.f_2;
		while (iVar3 <= iVar2)
		{
			if (iVar5 >= iVar4)
			{
			}
			else
			{
				if (!(func_1140(iVar0) || (iVar0 == 128 && iVar3 == 34)) || iVar0 != func_1239(iVar3))
				{
				}
				else if (!func_1240(iVar3, iVar0))
				{
				}
				else
				{
					iVar5++;
				}
				iVar3++;
			}
		}
	}
	Global_1914319.f_2 = iVar3;
	if (Global_1914319.f_2 > iVar2)
	{
		Global_1914319.f_2 = iVar1;
	}
	iVar6 = 3;
	iVar5 = 0;
	iVar7 = func_1239(Global_1914319.f_1);
	iVar8 = iVar7;
	iVar3 = Global_1914319.f_1;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < 150)
	{
		if ((iVar5 >= iVar6 || (iVar9 > 0 && iVar7 == iVar8)) || iVar3 > 100)
		{
		}
		else
		{
			if ((func_47(iVar7) && func_1140(iVar7)) && iVar7 != func_46())
			{
				iVar3 = iVar3;
				while (iVar3 <= 100 + 1)
				{
					if (iVar5 >= iVar6)
					{
					}
					else if (func_1239(iVar3) != iVar7)
					{
						iVar7 = func_1239(iVar3);
					}
					else
					{
						if (!func_1240(iVar3, iVar7))
						{
						}
						else
						{
							iVar5++;
						}
						iVar3++;
					}
				}
			}
			else
			{
				iVar3 = func_1870(iVar7) + 1;
				func_1871(&iVar3);
				iVar7 = func_1239(iVar3);
			}
			iVar9++;
		}
	}
	func_1871(&iVar3);
	Global_1914319.f_1 = iVar3;
	if (Global_1914319.f_1 > 100)
	{
		Global_1914319.f_1 = 0;
	}
}

void func_1209()
{
	if (func_226(Global_1430226.f_4, 1))
	{
		if (((((!func_114(0, 0, 1) && !Global_43891) && !func_662()) && !func_773()) && !func_651()) && !func_650())
		{
			if (!Global_1914319.f_19657)
			{
				func_220("TF_SHOP_POST_OFFICE", 10000, 0, 0, 0, 1);
			}
			func_1872(2, 1);
			Global_1914319.f_19657 = 1;
		}
		else
		{
			func_1872(2, 0);
		}
	}
	else
	{
		func_1872(2, 0);
		Global_1914319.f_19657 = 0;
	}
}

int func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5;
		case 2:
			return 5;
		case 3:
			return 105;
		case 5:
			return 76;
		case 6:
			return 76;
		case 8:
			return 92;
		case 0:
			return 38;
		case 4:
			return 115;
		case 7:
			return 120;
		default:
			break;
	}
	return -1;
}

Vector3 func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { 2796.278f, -1168.035f, 46.924f };
		case 2:
			return { 2633.455f, -1226.72f, 52.3796f };
		case 3:
			return { 1343.574f, -1375.64f, 79.4806f };
		case 5:
			return { -308.9729f, 807.0829f, 117.9797f };
		case 6:
			return { -241.294f, 770.0f, 118.14f };
		case 8:
			return { 2946.662f, 523.323f, 46.02f };
		case 0:
			return { -815.3443f, -1315.599f, 42.6788f };
		case 4:
			return { -5514.454f, -2910.941f, 0.196263f };
		case 7:
			return { -3701.056f, -2595.456f, -14.37373f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_1212(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (MAP::DOES_BLIP_EXIST(Global_36308[iParam0]))
		{
			MAP::SET_BLIP_SPRITE(Global_36308[iParam0], iParam1, true);
		}
	}
}

bool func_1213(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 != -1)
	{
		iVar0 = func_1873(iParam1);
		if (func_1865(iVar0))
		{
			if (Global_1934051[iVar0 /*2*/] != -1)
			{
				iVar1 = func_1874(iParam1);
				if (iVar1 != 0)
				{
					func_624(iParam0, iVar1);
					return true;
				}
			}
		}
	}
	return false;
}

int func_1214(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 2;
		case 5:
			return 0;
		case 6:
			return 1;
		case 8:
			return 0;
		case 0:
			return 0;
		case 4:
			return 0;
		case 7:
			return 0;
		default:
			break;
	}
	return -1;
}

bool func_1215(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1251(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_1875(iVar0, joaat("TSTAG_LOCKDOWN"), 1))
	{
		return true;
	}
	if (bParam1)
	{
		switch (iParam2)
		{
			case 0:
			case 2:
				if (func_1875(iVar0, joaat("TSTAG_LOCKDOWN_SALOON"), 1) || func_1875(iVar0, joaat("TSTAG_LOCKDOWN_PARTIAL"), 1))
				{
					return true;
				}
				break;
			case 1:
				if (func_1875(iVar0, joaat("TSTAG_LOCKDOWN_SALOON_SLUMS"), 1) || func_1875(iVar0, joaat("TSTAG_LOCKDOWN_PARTIAL"), 1))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_1216(int iParam0, var uParam1, int iParam2)
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

bool func_1217(var uParam0)
{
	int iVar0;

	if (!func_47(uParam0->f_2))
	{
		return false;
	}
	if (!func_428(uParam0->f_1))
	{
		return false;
	}
	if (func_723(uParam0->f_2))
	{
		return false;
	}
	if (func_149(uParam0->f_2, (1 << 22)))
	{
		return false;
	}
	iVar0 = func_1652(uParam0->f_2);
	if (iVar0 != -1)
	{
		if (func_439() != iVar0)
		{
			return false;
		}
	}
	return true;
}

int func_1218(int iParam0, int iParam1)
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

int func_1219(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_STYLE_MINIGAME");
		case 1:
			return joaat("BLIP_STYLE_MINIGAME");
		case 2:
			return joaat("BLIP_STYLE_MINIGAME");
		case 4:
			return joaat("BLIP_STYLE_MINIGAME");
		case 5:
			return joaat("BLIP_STYLE_MINIGAME");
		case 6:
			return joaat("BLIP_STYLE_MINIGAME");
		case 7:
			return joaat("BLIP_STYLE_MINIGAME");
		case 8:
			return joaat("BLIP_STYLE_MINIGAME");
		case 9:
			return joaat("BLIP_STYLE_MINIGAME");
		case 10:
			return joaat("BLIP_STYLE_MINIGAME");
		case 11:
			return joaat("BLIP_STYLE_MINIGAME");
		case 12:
			return joaat("BLIP_STYLE_MINIGAME");
		case 14:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 13:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 15:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 16:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 17:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 18:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 19:
			return joaat("BLIP_STYLE_PROC_MISSION");
		case 20:
			return joaat("BLIP_STYLE_SHOP");
		case 21:
			return joaat("BLIP_STYLE_SHOP");
		case 22:
			return joaat("BLIP_STYLE_SHOP");
		case 23:
			return joaat("BLIP_STYLE_SHOP");
		case 24:
			return joaat("BLIP_STYLE_SHOP");
		case 25:
			return joaat("BLIP_STYLE_SHOP");
		case 26:
			return joaat("BLIP_STYLE_SHOP");
		case 28:
			return joaat("BLIP_STYLE_SHOP");
		case 29:
			return joaat("BLIP_STYLE_SHOP");
		case 33:
			return joaat("BLIP_STYLE_SHOP");
		case 34:
			return joaat("BLIP_STYLE_SHOP");
		case 30:
			return joaat("BLIP_STYLE_SHOP");
		case 32:
			return joaat("BLIP_STYLE_SHOP");
		case 31:
			return joaat("BLIP_STYLE_SHOP");
		case 41:
			return joaat("BLIP_STYLE_SHOP");
		case 42:
			return joaat("BLIP_STYLE_SHOP");
		case 35:
			return joaat("BLIP_STYLE_SHOP");
		case 36:
			return joaat("BLIP_STYLE_SHOP");
		case 37:
			return joaat("BLIP_STYLE_SHOP");
		case 38:
			return joaat("BLIP_STYLE_SHOP");
		case 39:
			return joaat("BLIP_STYLE_SHOP");
		case 27:
			return joaat("BLIP_STYLE_SHOP");
		case 45:
			return joaat("BLIP_STYLE_SHOP");
		case 40:
			return joaat("BLIP_STYLE_SHOP");
		case 43:
			return joaat("BLIP_STYLE_SHOP");
		case 44:
			return joaat("BLIP_STYLE_SHOP");
		case 46:
			return joaat("BLIP_STYLE_PROPERTY");
		case 47:
			return joaat("BLIP_STYLE_PROPERTY");
		case 48:
			return joaat("BLIP_STYLE_PROPERTY");
		case 49:
			return joaat("BLIP_STYLE_MINIGAME");
		case 50:
			return joaat("BLIP_STYLE_MINIGAME");
		case 51:
			return joaat("BLIP_STYLE_MINIGAME");
		case 52:
			return joaat("BLIP_STYLE_CAMP");
		case 53:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 54:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 55:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 56:
			return joaat("BLIP_STYLE_EVENT_AREA");
		case 57:
			return joaat("BLIP_STYLE_MP_HIDEOUT");
		case 58:
			return joaat("BLIP_STYLE_RCM");
		case 59:
			return joaat("BLIP_STYLE_MINIGAME");
		case 60:
			return joaat("BLIP_STYLE_MINIGAME");
		case 61:
			return joaat("BLIP_STYLE_MINIGAME");
		case 62:
			return joaat("BLIP_STYLE_TOWN");
		default:
			break;
	}
	return 0;
}

int func_1220(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return joaat("BLIP_MG_POKER");
		case 1:
			return joaat("BLIP_MG_BLACKJACK");
		case 2:
			return joaat("BLIP_MG_DOMINOES");
		case 4:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET");
		case 5:
			return joaat("BLIP_SUMMER_COW");
		case 6:
			return joaat("BLIP_SUMMER_HORSE");
		case 7:
			return joaat("BLIP_FENCE_BUILDING");
		case 8:
			return joaat("BLIP_MG_DOMINOES_ALL3S");
		case 9:
			return joaat("BLIP_MG_DOMINOES_ALL5S");
		case 10:
			return joaat("BLIP_MG_DOMINOES_DRAW");
		case 11:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_BURNOUT");
		case 12:
			return joaat("BLIP_MG_FIVE_FINGER_FILLET_GUTS");
		case 14:
			return joaat("BLIP_PROC_LOANSHARK");
		case 13:
			return joaat("BLIP_AMBIENT_HERD");
		case 16:
			return joaat("BLIP_PROC_BOUNTY_POSTER");
		case 17:
			return joaat("BLIP_AMBIENT_COACH");
		case 18:
			return joaat("BLIP_AMBIENT_TRAIN");
		case 19:
			return joaat("BLIP_AMBIENT_RIVERBOAT");
		case 20:
			return joaat("BLIP_SHOP_STORE");
		case 21:
			return joaat("BLIP_SHOP_SHADY_STORE");
		case 22:
			return joaat("BLIP_AMBIENT_QUARTERMASTER");
		case 23:
			return joaat("BLIP_SHOP_GUNSMITH");
		case 24:
			return joaat("BLIP_SHOP_COACH_FENCING");
		case 25:
			return joaat("BLIP_SHOP_DOCTOR");
		case 26:
			return joaat("BLIP_SHOP_TAILOR");
		case 28:
			return joaat("BLIP_SHOP_BLACKSMITH");
		case 29:
			return joaat("BLIP_SHOP_TRAINER");
		case 33:
			return joaat("BLIP_POST_OFFICE");
		case 34:
			return joaat("BLIP_POST_OFFICE_REC");
		case 30:
			return joaat("BLIP_SHOP_TRAIN");
		case 31:
			return joaat("BLIP_SHOP_BARBER");
		case 32:
			return joaat("BLIP_SHOP_BUTCHER");
		case 35:
			return joaat("BLIP_SHOP_TACKLE");
		case 36:
			return joaat("BLIP_SHOP_ANIMAL_TRAPPER");
		case 37:
			return joaat("BLIP_SHOP_HORSE");
		case 38:
			return joaat("BLIP_SHOP_HORSE_FENCING");
		case 39:
			return joaat("BLIP_SHOP_HORSE_SADDLE");
		case 27:
			return joaat("BLIP_SALOON");
		case 40:
			return joaat("BLIP_AMBIENT_NEWSPAPER");
		case 41:
			return joaat("BLIP_SHOP_MARKET_STALL");
		case 42:
			return joaat("BLIP_SHOP_MARKET_STALL");
		case 43:
			return joaat("BLIP_HOTEL_BED");
		case 44:
			return joaat("BLIP_PHOTO_STUDIO");
		case 45:
			return joaat("BLIP_STABLE");
		case 46:
			return joaat("BLIP_PROC_HOME");
		case 47:
			return joaat("BLIP_PROC_HOME_LOCKED");
		case 48:
			return joaat("BLIP_PROC_HOME");
		case 49:
			return joaat("BLIP_AMBIENT_TELEGRAPH");
		case 50:
			return joaat("BLIP_AMBIENT_COACH_TAXI");
		case 51:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 52:
			return joaat("BLIP_REGION_CARAVAN");
		case 53:
			return joaat("BLIP_EVENT_APPLESEED");
		case 54:
			return joaat("BLIP_EVENT_CASTOR");
		case 55:
			return joaat("BLIP_EVENT_RAILROAD_CAMP");
		case 56:
			return joaat("BLIP_EVENT_RIGGS_CAMP");
		case 57:
			return joaat("BLIP_REGION_HIDEOUT");
		case 58:
			return joaat("BLIP_PROC_HOME");
		case 59:
			return joaat("BLIP_MG_FISHING");
		case 60:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 61:
			return joaat("BLIP_AMBIENT_THEATRE");
		case 62:
			return joaat("BLIP_TOWN");
		default:
			break;
	}
	return 0;
}

void func_1221(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (iParam1 != -1)
	{
		iVar0 = func_1873(iParam1);
		if (func_1865(iVar0))
		{
			if (Global_1934051[iVar0 /*2*/] != -1)
			{
				iVar1 = func_1874(iParam1);
				if (iVar1 != 0)
				{
					MAP::BLIP_ADD_MODIFIER(iParam0, func_1874(iParam1));
				}
			}
		}
	}
}

bool func_1222(int iParam0)
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BOUNTY_POSTER")) > 0)
	{
		if (func_745(Global_35, func_1226(iParam0), 1) < 200.0f)
		{
			return true;
		}
	}
	else if (func_745(Global_35, func_1226(iParam0), 1) < 130.0f)
	{
		return true;
	}
	return false;
}

int func_1223(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			iVar0 = 76;
			break;
		case 2:
			iVar0 = 26;
			break;
		case 3:
			iVar0 = 105;
			break;
		case 4:
			iVar0 = 5;
			break;
		case 5:
			iVar0 = 38;
			break;
		case 6:
			iVar0 = 115;
			break;
	}
	return iVar0;
}

bool func_1224(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if (iParam1 == -1)
	{
		bVar0 = true;
	}
	if (bVar0 || iParam1 == 0)
	{
		if (func_112() != -1)
		{
			return false;
		}
		if (func_114(0, 1, 1))
		{
			return false;
		}
		if (!func_1598(0))
		{
			return false;
		}
		if (!func_926())
		{
			return false;
		}
		if (func_149(iParam0, (1 << 21)))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 1)
	{
		if (iParam0 == 38)
		{
			if (!func_679())
			{
				return false;
			}
		}
		else if (iParam0 == 76)
		{
			if (func_154(14) && !func_154(17))
			{
				return false;
			}
			if (Global_1392235.f_2)
			{
				return false;
			}
		}
		else if (iParam0 == 26)
		{
			if (!func_154(11))
			{
				return false;
			}
		}
		else if (iParam0 == 105)
		{
			if (!func_154(27))
			{
				return false;
			}
			else if (func_903(31, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 5)
		{
			if (func_903(130, 0))
			{
				return false;
			}
		}
		else if (iParam0 == 115 && bParam2)
		{
			if (!func_1876())
			{
				return false;
			}
		}
		if (func_679() && !func_154(69))
		{
			return false;
		}
		if (func_190(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (func_149(iParam0, (1 << 25)))
		{
			return false;
		}
		if (func_715(iParam0))
		{
			return false;
		}
	}
	if (bVar0 || iParam1 == 2)
	{
		if ((((((((((((func_903(11, 0) || func_903(12, 0)) || func_903(13, 0)) || func_903(153, 0)) || func_903(14, 0)) || func_903(154, 0)) || func_903(15, 0)) || func_903(16, 0)) || func_903(17, 0)) || func_903(18, 0)) || func_903(155, 0)) || func_903(19, 0)) || func_903(20, 0))
		{
			return false;
		}
		if (func_1877(iParam0) == -1)
		{
			return false;
		}
		if (!func_1878(iParam0))
		{
			return false;
		}
		if (Global_1392235.f_4)
		{
			return false;
		}
	}
	return true;
}

bool func_1225(int iParam0, int iParam1)
{
	if (func_351(iParam0))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BOUNTY_POSTER")) > 0)
		{
			if (Global_1392235.f_3)
			{
				return false;
			}
		}
		else if (func_745(Global_35, func_1226(iParam1), 1) < 200.0f)
		{
			return false;
		}
	}
	return true;
}

Vector3 func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return { -274.9763f, 805.6725f, 118.3688f };
		case 3:
			return { 1233.915f, -1293.723f, 75.902f };
		case 4:
			return { 2513.311f, -1304.996f, 47.954f };
		case 2:
			return { -1809.173f, -352.972f, 163.661f };
		case 5:
			return { -757.932f, -1265.766f, 43.041f };
		case 6:
			return { -5532.741f, -2927.213f, -2.361f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_1227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 105;
		case 1:
			return 76;
		case 4:
			return 69;
		case 2:
			return 78;
		case 6:
			return 26;
		case 3:
			return 5;
		case 5:
			return 38;
		case 7:
			return 92;
		case 8:
			return 120;
		case 9:
			return 126;
		case 10:
			return 115;
		default:
			break;
	}
	return -1;
}

int func_1228(int iParam0, var uParam1, float fParam2)
{
	if (fParam2 >= 0.0f && fParam2 > (1.6f * 2.0f))
	{
		*uParam1 = 4;
		return 0;
	}
	if (Global_1430231.f_2)
	{
		*uParam1 = 4;
		return 0;
	}
	if (!func_1879())
	{
		*uParam1 = 1;
		return 0;
	}
	if (func_1054(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")))
		{
			*uParam1 = 4;
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && iParam0 != 120)
	{
		*uParam1 = 3;
		return 0;
	}
	if (func_1880(func_739()) > 15)
	{
		*uParam1 = 2;
		return 0;
	}
	if (func_723(iParam0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	if (func_413(9, 0) || func_114(0, 0, 1))
	{
		*uParam1 = 4;
		return 0;
	}
	if (func_1881() >= 0.8f)
	{
		*uParam1 = 4;
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (!PED::IS_PED_ON_FOOT(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	if (PED::_GET_IS_PED_IN_DISPUTE_WITH_PED(Global_35, 0))
	{
		*uParam1 = 4;
		return 0;
	}
	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35) || TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_35))
	{
		*uParam1 = 4;
		return 0;
	}
	return 1;
}

bool func_1229(int iParam0)
{
	if (!func_1140(iParam0))
	{
		return false;
	}
	if (func_388() && iParam0 == 38)
	{
		return false;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1430231.f_9) && iParam0 == func_46())
	{
		return false;
	}
	return true;
}

Vector3 func_1230(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return { 1264.245f, -1301.033f, 75.027f };
		case 76:
			return { -187.675f, 646.971f, 112.512f };
		case 69:
			return { 1521.27f, 413.91f, 89.064f };
		case 78:
			return { 2928.835f, 1295.411f, 43.346f };
		case 26:
			return { -1850.81f, -436.986f, 158.493f };
		case 5:
			return { 2743.008f, -1406.18f, 45.371f };
		case 38:
			return { -859.7903f, -1342.636f, 42.52987f };
		case 120:
			return { -3708.26f, -2636.08f, -14.894f };
		case 126:
			return { -2478.03f, -2444.9f, 59.345f };
		case 115:
			return { -5567.82f, -2944.74f, -1.713f };
		case 92:
			return { 2946.014f, 599.033f, 43.488f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return { -789.869f, -1362.602f, 43.687f };
		case 1:
		case 2:
			return { 2686.483f, -1362.37f, 48.2681f };
		case 0:
			return { 2541.448f, -1281.873f, 49.26815f };
		case 3:
			return { -354.8969f, 705.4585f, 116.9782f };
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

int func_1232(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_46();
	if (func_47(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_1882(vParam0, iParam3);
}

int func_1233(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 60;
		case 1:
		case 2:
		case 3:
		case 4:
			return 51;
		default:
			break;
	}
	return 0;
}

bool func_1234()
{
	if (!func_651() && func_209(1))
	{
		return true;
	}
	return false;
}

bool func_1235(bool bParam0)
{
	if (func_112() == -1)
	{
		if (((((func_152(3) || func_152(4)) || func_152(5)) || func_152(6)) || func_152(7)) || !func_154(19))
		{
			return false;
		}
		if (func_1883() == joaat("HAI_RUSTLING_02"))
		{
			return false;
		}
		if (!bParam0)
		{
			if (func_1884())
			{
				return false;
			}
		}
		if (!bParam0 || (!func_1054(Global_35, 0) && PED::IS_PED_ON_MOUNT(Global_35)))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_1236()
{
	return { 711.6718f, -828.5062f, 50.8174f };
}

bool func_1237(bool bParam0)
{
	if (func_112() == 0)
	{
		return false;
	}
	if (!func_370(94))
	{
		return false;
	}
	if ((func_152(92) || func_1337(92)) || func_1885(92))
	{
		return false;
	}
	if (func_1886(2) && !bParam0)
	{
		return false;
	}
	if (bParam0 && ((((CAM::_0x1811A02277A9E49D() || !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || PED::IS_PED_IN_ANY_TAXI(Global_35)) || PED::GET_SEAT_PED_IS_USING(Global_35) != -1) || !func_1887(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)))))
	{
		return false;
	}
	return true;
}

Vector3 func_1238()
{
	return { 1411.177f, 268.14f, 88.5547f };
}

int func_1239(int iParam0)
{
	if (!func_1540(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_46() == 128)
	{
		return 128;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 120:
		case 121:
			return 78;
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
		case 106:
		case 107:
		case 108:
			return 38;
		case 18:
		case 19:
		case 20:
		case 21:
		case 105:
			return 69;
		case 22:
		case 118:
			return 3;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 109:
		case 110:
		case 111:
			return 5;
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 112:
		case 113:
			return 105;
		case 23:
		case 24:
			return 23;
		case 35:
			return 101;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 114:
		case 115:
			return 26;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 102:
		case 103:
		case 104:
			return 76;
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 116:
		case 117:
			return 92;
		case 4:
			return 13;
		case 128:
		case 129:
		case 130:
		case 131:
			return 79;
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return 98;
		case 5:
			return 14;
		case 137:
		case 138:
		case 139:
		case 140:
			return 71;
		case 141:
		case 142:
		case 143:
		case 144:
			return 4;
		case 34:
			return 90;
		case 145:
		case 146:
		case 147:
		case 148:
			return 9;
		case 67:
			return 113;
		case 87:
		case 88:
		case 89:
			return 28;
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
			return 115;
		case 95:
		case 96:
		case 97:
			return 120;
		case 98:
			return 123;
		case 99:
		case 100:
		case 123:
			return 117;
		case 119:
			return 65;
		case 122:
			return 82;
		case 124:
			return 110;
		case 125:
			return 127;
		case 56:
			return 71;
		case 57:
			return 98;
		case 58:
			return 9;
		case 59:
			return 79;
		default:
			break;
	}
	return -1;
}

bool func_1240(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_1241(iParam0);
	if (!func_1888(iParam0, iVar0))
	{
		if (func_1889(iParam0))
		{
			func_1170(&(Global_1914319.f_15936[iParam0 /*6*/]), 0);
			Global_1914319.f_15936[iParam0 /*6*/].f_5 = 0;
		}
		return false;
	}
	func_1890(iVar0);
	bVar1 = false;
	if (!func_1889(iParam0))
	{
		Global_1914319.f_15936[iParam0 /*6*/] = func_1891(iVar0, iParam0, iParam1);
		if (Global_1914319.f_15936[iParam0 /*6*/] != -1)
		{
			if (iVar0 == 9)
			{
				Global_1914319.f_15936[iParam0 /*6*/].f_1 = func_1892(iParam0, iVar0);
			}
			else if (iVar0 == func_1241(iParam0))
			{
				iVar2 = func_1242(iVar0);
				if (iVar2 != 0)
				{
					Global_1914319.f_15936[iParam0 /*6*/].f_1 = iVar2;
				}
			}
			func_160(Global_1914319.f_15936[iParam0 /*6*/], joaat("BLIP_STYLE_SHOP"));
			if (iVar0 == 19)
			{
				MAP::SET_BLIP_FLASH_TIMER(Global_36308[Global_1914319.f_15936[iParam0 /*6*/]], 67, -1);
				func_1822(Global_1914319.f_15936[iParam0 /*6*/], iParam1);
			}
			bVar1 = true;
		}
		func_1893(iParam0, 32);
		func_1893(iParam0, 16);
		func_1893(iParam0, 64);
		func_1893(iParam0, 128);
		func_1893(iParam0, (1 << 31));
	}
	else
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!Global_1914319.f_15936[iParam0 /*6*/].f_5 && !(iParam0 == Global_1934051.f_116 && !Global_1934051.f_118))
		{
			if (iParam1 == func_1239(iParam0) && func_1213(Global_1914319.f_15936[iParam0 /*6*/], iParam1))
			{
				Global_1914319.f_15936[iParam0 /*6*/].f_5 = 1;
			}
		}
		func_1894(iParam0, iVar0);
	}
	return true;
}

int func_1241(int iParam0)
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

int func_1242(int iParam0)
{
	int iVar0;

	if (!func_1895(iParam0))
	{
		return 0;
	}
	iVar0 = func_1896(iParam0);
	return func_1897(iVar0);
}

int func_1243(int iParam0)
{
	switch (iParam0)
	{
		case -1385367302:
			return -1;
		case joaat("HASH_AMB_VIG_BARBER_SHAVING"):
			return 0;
		case joaat("HASH_AMB_VIG_BODY_TOSS"):
			return 1;
		case joaat("HASH_AMB_VIG_BUTCHER_BLEED_DEER"):
			return 2;
		case joaat("HASH_AMB_VIG_BUTCHER_HANG_CARCASS"):
			return 3;
		case joaat("HASH_AMB_VIG_CHAMBERPOT_TOSS"):
			return 4;
		case joaat("HASH_AMB_VIG_COW_GRAZING"):
			return 5;
		case joaat("HASH_AMB_VIG_DROP_RABBIT_TABLE"):
			return 6;
		case joaat("HASH_AMB_VIG_GET_DIRECTIONS"):
			return 7;
		case joaat("HASH_AMB_VIG_GOAT_GRAZING"):
			return 8;
		case joaat("HASH_AMB_VIG_LIGHT_SMOKE"):
			return 9;
		case joaat("HASH_AMB_VIG_LUMBER_PASS_DOWN_BALCONY"):
			return 10;
		case joaat("HASH_AMB_VIG_LUMBER_PASS_UP_BALCONY"):
			return 11;
		case joaat("HASH_AMB_VIG_MAN_JUMP_FENCE"):
			return 12;
		case joaat("HASH_AMB_VIG_MAN_STAND_AT_WAGON"):
			return 13;
		case joaat("HASH_AMB_VIG_PUMP_CART"):
			return 14;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_HIGH"):
			return 16;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_1_MED"):
			return 17;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_HIGH"):
			return 18;
		case joaat("HASH_AMB_VIG_SHOPKEEPER_RESTOCK_2_MED"):
			return 19;
		case joaat("HASH_AMB_VIG_STARTING_TO_RAIN_FEMALE"):
			return 21;
		case joaat("HASH_AMB_VIG_STARTING_TO_RAIN_MALE"):
			return 22;
		case joaat("HASH_AMB_VIG_STAGE_COACH"):
			return 20;
		case joaat("HASH_AMB_VIG_VOMIT_SIT_FEMALE"):
			return 23;
		case joaat("HASH_AMB_VIG_VOMIT_SIT_MALE"):
			return 24;
		case joaat("HASH_AMB_VIG_VOMIT_WALL_FEMALE"):
			return 25;
		case joaat("HASH_AMB_VIG_VOMIT_WALL_MALE"):
			return 26;
		case joaat("HASH_AMB_VIG_WAGON_LOAD_BARREL"):
			return 27;
		case joaat("HASH_AMB_VIG_WAGON_SWEEPER"):
			return 28;
		case joaat("HASH_AMB_VIG_WAGON_UNLOAD_BARREL"):
			return 29;
		case joaat("HASH_AMB_VIG_WALK_WITH_HORSE_A"):
			return 30;
		case joaat("HASH_AMB_VIG_WHISPER_SIT"):
			return 31;
		case joaat("HASH_AMB_VIG_WHISPER_STAND"):
			return 32;
		case joaat("HASH_AMB_VIG_WHORE_GIVE_MONEY_MADAM"):
			return 33;
		case joaat("HASH_AMB_VIG_AMB_CAMP_ROBBERY"):
			return 34;
		case joaat("HASH_AMB_VIG_BOAT_PLACEMENT"):
			return 35;
		case joaat("HASH_AMB_VIG_COUGAR_GRAPPLE_PED"):
			return 36;
		case joaat("HASH_AMB_VIG_CROSS_TERRAIN_WALKER"):
			return 37;
		case joaat("HASH_AMB_VIG_DEER_CARRY_DROPOFF"):
			return 38;
		case joaat("HASH_AMB_VIG_DEER_CARRY_RIDE"):
			return 39;
		case joaat("HASH_AMB_VIG_DOG_IN_WAGON"):
			return 40;
		case joaat("HASH_AMB_VIG_DUCK_CARRY"):
			return 41;
		case joaat("HASH_AMB_VIG_FEMALE_RIDER_MALE_WALKER"):
			return 42;
		case joaat("HASH_AMB_VIG_FISHING_RIVER"):
			return 43;
		case joaat("HASH_AMB_VIG_FISHING_RIVER_DOG"):
			return 44;
		case joaat("HASH_AMB_VIG_GATOR_GRAPPLE_PED"):
			return 45;
		case joaat("HASH_AMB_VIG_GOAT_CARRY_RIDE"):
			return 46;
		case joaat("HASH_AMB_VIG_HOBO_TRAIN_HOP_NO_SACK"):
			return 47;
		case joaat("HASH_AMB_VIG_MACFARLANE_FARMER"):
			return 48;
		case joaat("HASH_AMB_VIG_MAN_RIDING_DONKEY"):
			return 49;
		case joaat("HASH_AMB_VIG_MAN_SIT_READ"):
			return 50;
		case joaat("HASH_AMB_VIG_MAN_RIDE_WITH_LANTERN"):
			return 51;
		case joaat("HASH_AMB_VIG_OUTDOORSMAN"):
			return 52;
		case joaat("HASH_AMB_VIG_RAM_CARRY_RIDE"):
			return 53;
		case joaat("HASH_AMB_VIG_RESTING_HAT"):
			return 54;
		case joaat("HASH_AMB_VIG_RIDER_GALLOP"):
			return 55;
		case joaat("HASH_AMB_VIG_RIDER_WITH_DOG"):
			return 56;
		case joaat("HASH_AMB_VIG_RIDGELINE_NATIVE"):
			return 57;
		case joaat("HASH_AMB_VIG_RIDGELINE_RIDER"):
			return 58;
		case joaat("HASH_AMB_VIG_SLOW_RIDER"):
			return 60;
		case joaat("HASH_AMB_VIG_TRAFFIC_CART"):
			return 61;
		case joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_RIDERS"):
			return 62;
		case joaat("HASH_AMB_VIG_TRAFFIC_CONVO_TWO_WALKERS"):
			return 63;
		case joaat("HASH_AMB_VIG_TRAVELLER_GALLOP_PAST"):
			return 64;
		case joaat("HASH_AMB_VIG_WAGON_BACK_PASSENGER"):
			return 66;
		case joaat("HASH_AMB_VIG_WAGON_HARMONICA"):
			return 65;
		case joaat("HASH_AMB_VIG_WALK_WITH_DOG"):
			return 72;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_DEER"):
			return 67;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_GOAT"):
			return 68;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_PRONGHORN"):
			return 69;
		case joaat("HASH_AMB_VIG_WALK_HORSE_CARRY_RAM"):
			return 70;
		case joaat("HASH_AMB_VIG_WALK_PACK_HORSE"):
			return 71;
		case joaat("HASH_AMB_VIG_WALK_WITH_OX"):
			return 73;
		case joaat("HASH_AMB_VIG_WATER_HORSE"):
			return 74;
		case joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_LEG"):
			return 75;
		case joaat("HASH_AMB_VIG_ALLIGATOR_BOAR_NECK"):
			return 76;
		case joaat("HASH_AMB_VIG_ALLIGATOR_EAT_DEAD_BIRD"):
			return 77;
		case joaat("HASH_AMB_VIG_ARMADILLO_RUN"):
			return 78;
		case joaat("HASH_AMB_VIG_BAT_FLEE_SWARM_LRG"):
			return 79;
		case joaat("HASH_AMB_VIG_BAT_HANG_SWARM"):
			return 80;
		case joaat("HASH_AMB_VIG_BEARBLACK_BACKDOWN"):
			return 81;
		case joaat("HASH_AMB_VIG_BEAR_INTIMIDATE_WOLF"):
			return 82;
		case joaat("HASH_AMB_VIG_BEAR_RUN_CATCH_FISH"):
			return 83;
		case joaat("HASH_AMB_VIG_BEAR_SCRATCH_BACK"):
			return 84;
		case joaat("HASH_AMB_VIG_BEAR_VS_WOLVES"):
			return 85;
		case joaat("HASH_AMB_VIG_BEAVER_SWIM_WITH_BRANCH"):
			return 86;
		case joaat("HASH_AMB_VIG_BIG_CAT_AMBUSH_DEER"):
			return 87;
		case joaat("HASH_AMB_VIG_BIG_CAT_KILL_RACCOON"):
			return 88;
		case joaat("HASH_AMB_VIG_BIRD_FENCE_SWARM_CROW"):
			return 89;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_CROW"):
			return 90;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK"):
			return 91;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG"):
			return 92;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_DUCK_LRG_W"):
			return 93;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_GOOSE"):
			return 94;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_PIGEON"):
			return 95;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN"):
			return 96;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_DARK"):
			return 97;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_RAVEN_LRG"):
			return 98;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SEAGULL"):
			return 99;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SONGBIRD"):
			return 100;
		case joaat("HASH_AMB_VIG_BIRD_FLEE_SWARM_SPARROW"):
			return 101;
		case joaat("HASH_AMB_VIG_BIRDS_IN_TREE"):
			return 102;
		case joaat("HASH_AMB_VIG_BIRD_LAND_BLUEJAY"):
			return 103;
		case joaat("HASH_AMB_VIG_BIRD_LAND_CARDINAL"):
			return 104;
		case joaat("HASH_AMB_VIG_BIRD_LAND_DUCK"):
			return 105;
		case joaat("HASH_AMB_VIG_BIRD_LAND_EAGLE"):
			return 106;
		case joaat("HASH_AMB_VIG_BIRD_LAND_HAWK"):
			return 107;
		case joaat("HASH_AMB_VIG_BIRD_LAND_HERON"):
			return 108;
		case joaat("HASH_AMB_VIG_BIRD_LAND_LOON"):
			return 109;
		case joaat("HASH_AMB_VIG_BIRD_LAND_OWL"):
			return 110;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SEAGULL"):
			return 111;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SONGBIRD"):
			return 112;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SPARROW"):
			return 113;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_CROW"):
			return 114;
		case joaat("HASH_AMB_VIG_BIRD_LAND_SWARM_PIGEON"):
			return 115;
		case joaat("HASH_AMB_VIG_BIRD_ON_ALLIGATOR"):
			return 116;
		case joaat("HASH_AMB_VIG_BIRD_ON_BUCK"):
			return 117;
		case joaat("HASH_AMB_VIG_BIRD_ON_BUFFALO"):
			return 118;
		case joaat("HASH_AMB_VIG_BIRD_ON_COW"):
			return 119;
		case joaat("HASH_AMB_VIG_BIRD_ON_ELK"):
			return 120;
		case joaat("HASH_AMB_VIG_BIRD_ON_MOOSE"):
			return 121;
		case joaat("HASH_AMB_VIG_BIRD_SWARM"):
			return 122;
		case joaat("HASH_AMB_VIG_BIRD_WIRE_SWARM_SPARROW"):
			return 123;
		case joaat("HASH_AMB_VIG_BLUEJAY_ON_PERCH"):
			return 124;
		case joaat("HASH_AMB_VIG_BOAR_RUN"):
			return 125;
		case joaat("HASH_AMB_VIG_BUCK_AND_DOE"):
			return 126;
		case joaat("HASH_AMB_VIG_BUCKS_FIGHTING"):
			return 127;
		case joaat("HASH_AMB_VIG_BUFFALO_VS_BUFFALO"):
			return 128;
		case joaat("HASH_AMB_VIG_BUFFALO_WALLOW_SHAKE"):
			return 129;
		case joaat("HASH_AMB_VIG_CAMP_BIRD_ON_PERCH"):
			return 131;
		case joaat("HASH_AMB_VIG_CALIFORNIACONDOR_ON_PERCH"):
			return 132;
		case joaat("HASH_AMB_VIG_CARDINAL_ON_PERCH"):
			return 132;
		case joaat("HASH_AMB_VIG_CAT_CARRY_RAT"):
			return 133;
		case joaat("HASH_AMB_VIG_CAT_CATCH_BIRD"):
			return 134;
		case joaat("HASH_AMB_VIG_CAT_RUN"):
			return 135;
		case joaat("HASH_AMB_VIG_COYOTE_CATCH_SQUIRREL"):
			return 136;
		case joaat("HASH_AMB_VIG_COYOTE_EAT_SHEEP"):
			return 137;
		case joaat("HASH_AMB_VIG_COYOTE_TAKEDOWN_MISS_DEER"):
			return 138;
		case joaat("HASH_AMB_VIG_CROWS_AND_EAGLES_EAT_DEER"):
			return 139;
		case joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_DEER"):
			return 140;
		case joaat("HASH_AMB_VIG_CROWS_AND_VULTURES_EAT_HUMAN"):
			return 141;
		case joaat("HASH_AMB_VIG_CROWS_EATING_DEER"):
			return 142;
		case joaat("HASH_AMB_VIG_CROWS_EATING_HUMAN"):
			return 143;
		case joaat("HASH_AMB_VIG_CROW_ON_PERCH"):
			return 144;
		case joaat("HASH_AMB_VIG_DEAD_BOAR"):
			return 145;
		case joaat("HASH_AMB_VIG_DEAD_BUCK"):
			return 146;
		case joaat("HASH_AMB_VIG_DEAD_BUFFALO"):
			return 147;
		case joaat("HASH_AMB_VIG_DEAD_COYOTE"):
			return 148;
		case joaat("HASH_AMB_VIG_DEAD_HORSE_A"):
			return 149;
		case joaat("HASH_AMB_VIG_DEAD_HORSE_B"):
			return 150;
		case joaat("HASH_AMB_VIG_DEAD_PIG"):
			return 151;
		case joaat("HASH_AMB_VIG_DEAD_POSSUM"):
			return 152;
		case joaat("HASH_AMB_VIG_DEAD_PRONGHORN"):
			return 153;
		case joaat("HASH_AMB_VIG_DEAD_RACCOON"):
			return 154;
		case joaat("HASH_AMB_VIG_DEAD_SHEEP"):
			return 155;
		case joaat("HASH_AMB_VIG_DEER_ANTLERS_STUCK"):
			return 156;
		case joaat("HASH_AMB_VIG_DEER_RUN"):
			return 157;
		case joaat("HASH_AMB_VIG_DEER_TREE_RUB"):
			return 158;
		case joaat("HASH_AMB_VIG_DISCOVERABLE_PARAKEET"):
			return 159;
		case joaat("HASH_AMB_VIG_DOG_CHASE_CAT"):
			return 160;
		case joaat("HASH_AMB_VIG_DOG_CHASE_TAIL"):
			return 161;
		case joaat("HASH_AMB_VIG_DOGS_PLAYING"):
			return 162;
		case joaat("HASH_AMB_VIG_DUCK_WATER_SWARM"):
			return 163;
		case joaat("HASH_AMB_VIG_EAGLE_CATCH_FISH"):
			return 164;
		case joaat("HASH_AMB_VIG_EAGLE_CATCH_RABBIT"):
			return 165;
		case joaat("HASH_AMB_VIG_EAGLE_CATCH_SEASNAKE"):
			return 166;
		case joaat("HASH_AMB_VIG_EAGLE_DIVE_CATCH_FISH"):
			return 167;
		case joaat("HASH_AMB_VIG_EAGLE_ON_PERCH"):
			return 168;
		case joaat("HASH_AMB_VIG_FOX_CATCH_RODENT"):
			return 169;
		case joaat("HASH_AMB_VIG_FOX_HUNT_IN_SNOW"):
			return 170;
		case joaat("HASH_AMB_VIG_FOX_RUN"):
			return 171;
		case joaat("HASH_AMB_VIG_FOX_SIT"):
			return 172;
		case joaat("HASH_AMB_VIG_GOAT_RUN"):
			return 173;
		case joaat("HASH_AMB_VIG_HAWK_CATCH_SNAKE"):
			return 174;
		case joaat("HASH_AMB_VIG_HAWK_CATCH_SQUIRREL"):
			return 175;
		case joaat("HASH_AMB_VIG_HAWK_ON_PERCH"):
			return 176;
		case joaat("HASH_AMB_VIG_HAWK_VS_SNAKE"):
			return 177;
		case joaat("HASH_AMB_VIG_HORSE_WALLOW"):
			return 178;
		case joaat("HASH_AMB_VIG_IGUANA_RUN"):
			return 179;
		case joaat("HASH_AMB_VIG_IGUANA_DESERT_RUN"):
			return 180;
		case joaat("HASH_AMB_VIG_JAVELINA_RUN"):
			return 181;
		case joaat("HASH_AMB_VIG_OWL_CATCH_RAT"):
			return 186;
		case joaat("HASH_AMB_VIG_OWL_ON_PERCH"):
			return 187;
		case joaat("HASH_AMB_VIG_PELICAN_DIVE"):
			return 188;
		case joaat("HASH_AMB_VIG_PELICAN_ON_PERCH"):
			return 189;
		case joaat("HASH_AMB_VIG_PIG_ROLL_MUD"):
			return 190;
		case joaat("HASH_AMB_VIG_PIG_RUN"):
			return 191;
		case joaat("HASH_AMB_VIG_RABBIT_CHASE_RABBIT"):
			return 192;
		case joaat("HASH_AMB_VIG_RABBIT_RUN"):
			return 193;
		case joaat("HASH_AMB_VIG_MANGY_DOG_AND_VULTURES"):
			return 182;
		case joaat("HASH_AMB_VIG_MOOSE_GRAZING"):
			return 183;
		case joaat("HASH_AMB_VIG_MOOSE_SLIPPING"):
			return 184;
		case joaat("HASH_AMB_VIG_MUSKRAT_RUN"):
			return 185;
		case joaat("HASH_AMB_VIG_RACCOON_EATING"):
			return 194;
		case joaat("HASH_AMB_VIG_RACCOON_RUN"):
			return 195;
		case joaat("HASH_AMB_VIG_RAMS_HEADBUTT"):
			return 196;
		case joaat("HASH_AMB_VIG_RAM_RUN"):
			return 197;
		case joaat("HASH_AMB_VIG_RATS_EAT_HUMAN"):
			return 198;
		case joaat("HASH_AMB_VIG_RATS_EATING_GROUP"):
			return 199;
		case joaat("HASH_AMB_VIG_RAVEN_ON_PERCH"):
			return 200;
		case joaat("HASH_AMB_VIG_REDFOOTED_BOOBY_ON_PERCH"):
			return 201;
		case joaat("HASH_AMB_VIG_RIDGELINE_BUCK"):
			return 202;
		case joaat("HASH_AMB_VIG_RIDGELINE_ELK"):
			return 203;
		case joaat("HASH_AMB_VIG_RIDGELINE_MOOSE"):
			return 204;
		case joaat("HASH_AMB_VIG_RIDGELINE_PRONGHORN"):
			return 205;
		case joaat("HASH_AMB_VIG_RIDGELINE_RAM"):
			return 206;
		case joaat("HASH_AMB_VIG_RIDGELINE_WOLF"):
			return 207;
		case joaat("HASH_AMB_VIG_ROVING_SHEEP_P1"):
			return 59;
		case joaat("HASH_AMB_VIG_SCAVENGER_ON_DEER"):
			return 208;
		case joaat("HASH_AMB_VIG_SHEEP_GRAZING"):
			return 15;
		case joaat("HASH_AMB_VIG_SHEEP_RUN"):
			return 210;
		case joaat("HASH_AMB_VIG_SKUNK_RUN"):
			return 211;
		case joaat("HASH_AMB_VIG_SNAKE_RUN"):
			return 212;
		case joaat("HASH_AMB_VIG_SEAGULL_CATCH_FISH"):
			return 209;
		case joaat("HASH_AMB_VIG_SQUIRREL_CHASE_SQUIRREL"):
			return 213;
		case joaat("HASH_AMB_VIG_SQUIRREL_RUN"):
			return 214;
		case joaat("HASH_AMB_VIG_SWIMMING_BEARBLACK"):
			return 215;
		case joaat("HASH_AMB_VIG_SWIMMING_BEAVER"):
			return 216;
		case joaat("HASH_AMB_VIG_SWIMMING_BOAR"):
			return 217;
		case joaat("HASH_AMB_VIG_SWIMMING_DEER"):
			return 218;
		case joaat("HASH_AMB_VIG_SWIMMING_DOG"):
			return 219;
		case joaat("HASH_AMB_VIG_SWIMMING_ELK"):
			return 220;
		case joaat("HASH_AMB_VIG_SWIMMING_FOX"):
			return 221;
		case joaat("HASH_AMB_VIG_SWIMMING_MOOSE"):
			return 222;
		case joaat("HASH_AMB_VIG_SWIMMING_MUSKRAT"):
			return 223;
		case joaat("HASH_AMB_VIG_SWIMMING_POSSUM"):
			return 224;
		case joaat("HASH_AMB_VIG_SWIMMING_RACCOON"):
			return 225;
		case joaat("HASH_AMB_VIG_SWIMMING_RAT"):
			return 226;
		case joaat("HASH_AMB_VIG_SWIMMING_WOLF"):
			return 227;
		case joaat("HASH_AMB_VIG_SWIM_WOLF_CHASE_MOOSE"):
			return 228;
		case joaat("HASH_AMB_VIG_TURKEY_RUN"):
			return 229;
		case joaat("HASH_AMB_VIG_VULTURES_EATING_CARCASS_A"):
			return 230;
		case joaat("HASH_AMB_VIG_VULTURES_EATING_HUMAN"):
			return 231;
		case joaat("HASH_AMB_VIG_VULTURE_ON_PERCH"):
			return 232;
		case joaat("HASH_AMB_VIG_WILD_BULL"):
			return 233;
		case joaat("HASH_AMB_VIG_WILD_GOAT"):
			return 234;
		case joaat("HASH_AMB_VIG_WILD_OX"):
			return 235;
		case joaat("HASH_AMB_VIG_WILD_SHARK"):
			return 236;
		case joaat("HASH_AMB_VIG_WOLF_AMBUSH_DEER"):
			return 237;
		case joaat("HASH_AMB_VIG_WOLF_FLEE_WOLVES"):
			return 238;
		case joaat("HASH_AMB_VIG_WOLF_HOWL_CORPSE"):
			return 239;
		case joaat("HASH_AMB_VIG_WOLF_HOWLING"):
			return 240;
		case joaat("HASH_AMB_VIG_WOLVES_HOWLING"):
			return 241;
		case joaat("HASH_AMB_VIG_WOLVES_EAT_DEER"):
			return 242;
		case joaat("HASH_AMB_VIG_WOLVES_PLAYING"):
			return 243;
		case joaat("HASH_AMB_VIG_WOLVES_PLAYING_B"):
			return 244;
		case joaat("HASH_AMB_VIG_WOLVES_PLAYING_C"):
			return 245;
		case joaat("HASH_AMB_VIG_WOLVES_RESTING"):
			return 246;
		case joaat("HASH_AMB_VIG_WOLF_TAKEDOWN_MISS_DEER"):
			return 247;
		default:
			break;
	}
	return -1;
}

int func_1244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DISTRICT_BAYOU_NWA");
		case 1:
			return joaat("DISTRICT_BIG_VALLEY");
		case 2:
			return joaat("DISTRICT_BLUEGILL_MARSH");
		case 3:
			return joaat("DISTRICT_CUMBERLAND_FOREST");
		case 4:
			return joaat("DISTRICT_GREAT_PLAINS");
		case 5:
			return joaat("DISTRICT_GRIZZLIES");
		case 6:
			return joaat("DISTRICT_GRIZZLIES_EAST");
		case 7:
			return joaat("DISTRICT_GRIZZLIES_WEST");
		case 8:
			return joaat("DISTRICT_GUAMA");
		case 9:
			return joaat("DISTRICT_HEARTLAND");
		case 10:
			return joaat("DISTRICT_ROANOKE_RIDGE");
		case 11:
			return joaat("DISTRICT_SCARLETT_MEADOWS");
		case 12:
			return joaat("DISTRICT_TALL_TREES");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		default:
			break;
	}
	return joaat("DISTRICT_INVALID");
}

void func_1245(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	var uVar8;

	uParam1->f_2 = -641542860;
	uParam1->f_3 = iParam3;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam1->f_1), uParam1))
	{
		uVar8 = uParam1->f_1;
		iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(*uParam1, uParam1->f_1);
		iVar1 = 0;
		while (iVar1 < iVar0)
		{
			if (*uParam2 >= 960)
			{
			}
			else
			{
				uParam1->f_2 = 1696282352;
				uParam1->f_3 = iVar1;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam1->f_1), uParam1))
				{
					uParam1->f_2 = -1119853910;
					if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar2, uParam1))
					{
						if (Global_1415419.f_19[iParam0 /*12*/].f_8 == -1)
						{
							Global_1415419.f_19[iParam0 /*12*/].f_8 = *uParam2;
						}
						Global_1415419.f_2996[*uParam2 /*7*/] = { vVar2 /*3*/ };
						Global_1415419.f_19[iParam0 /*12*/].f_9 = *uParam2;
					}
				else
				{
					}
					else
					{
						uParam1->f_2 = -1983241935;
						if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar5, uParam1))
						{
							Global_1415419.f_2996[*uParam2 /*7*/].f_3 = { vVar5 /*3*/ };
						}
						*uParam2++;
						uParam1->f_1 = uVar8;
					}
					iVar1++;
					func_227(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 8);
					func_227(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 1);
					func_227(&(Global_1415419.f_19[iParam0 /*12*/].f_11), 2);
				}
			}
		}
	}
}

void func_1246(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	if (!SCRIPTS::DOES_SCRIPT_WITH_NAME_HASH_EXIST(iParam0))
	{
		return;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iParam0) != 0)
	{
		SCRIPTS::SCRIPT_THREAD_ITERATOR_RESET();
		iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		while (iVar0 != 0)
		{
			if (iParam0 == SCRIPTS::_GET_HASH_OF_THREAD(iVar0))
			{
				if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iVar0, iParam1);
				}
			}
			iVar0 = SCRIPTS::SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID();
		}
	}
}

bool func_1247(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_1248(char* sParam0)
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

void func_1249(int iParam0)
{
	if (func_1247(iParam0, 1))
	{
		func_1898(1);
	}
}

bool func_1250()
{
	return Global_1935183.f_60;
}

int func_1251(int iParam0)
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

int func_1252(int iParam0)
{
	int iVar0;

	if (!func_1899(iParam0))
	{
		return 2;
	}
	if (iParam0 == 13)
	{
		if (func_142(Global_1347702[117 /*49*/].f_13, 64))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/])
		{
			case 623901469:
				return 0;
			case -1132827806:
				return 0;
			default:
				break;
		}
		iVar0++;
	}
	return 2;
}

int func_1253(int iParam0)
{
	int iVar0;

	if (!func_1899(iParam0))
	{
		return 2;
	}
	if (iParam0 == 13)
	{
		if (func_142(Global_1347702[117 /*49*/].f_13, 64))
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		switch (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/])
		{
			case 623901469:
				return 2;
			case -1132827806:
				return 2;
			default:
				break;
		}
		iVar0++;
	}
	return 2;
}

int func_1254(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1900(iParam0))
	{
		return 0;
	}
	if (func_362(Global_1935630, (1 << 21)))
	{
		return 0;
	}
	if (func_1901())
	{
		if (func_226(Global_1415419.f_3, 2))
		{
			if (!func_226(Global_1415419.f_19[iParam0 /*12*/].f_11, 4))
			{
				return 0;
			}
		}
		else if (func_226(Global_1415419.f_3, 4))
		{
			if (func_226(Global_1415419.f_19[iParam0 /*12*/].f_11, 4))
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		if (Global_1415419.f_19[iParam0 /*12*/].f_8 == -1)
		{
			return 0;
		}
	}
	if (bParam1 && !func_1902(iParam0))
	{
		return 0;
	}
	if (!func_979(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5))
	{
		return 0;
	}
	if (func_1903(iParam0, 1))
	{
		return 0;
	}
	if (!func_795(Global_1415419.f_19[iParam0 /*12*/].f_1))
	{
		return 0;
	}
	if (!func_1531(Global_1415419.f_19[iParam0 /*12*/].f_2))
	{
		return 0;
	}
	return 1;
}

bool func_1255()
{
	return Global_1935183.f_3;
}

bool func_1256(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = -1;
		iVar0++;
	}
	switch (iParam1)
	{
		case 76:
			if (func_1875(13, joaat("TSTAG_VAL_MUD3_ACTIVE_CHASE"), 1))
			{
				(*uParam0)[0] = 15;
				(*uParam0)[1] = 28;
				return true;
			}
			if (func_1875(13, joaat("TSTAG_VAL_MUD5_ACTIVE"), 1))
			{
				(*uParam0)[0] = 15;
				(*uParam0)[1] = 7;
				return true;
			}
			if (func_1875(13, joaat("TSTAG_FIRST_VISIT"), 1))
			{
				(*uParam0)[0] = 11;
				(*uParam0)[1] = 28;
				(*uParam0)[2] = 33;
				(*uParam0)[3] = 15;
				(*uParam0)[4] = 9;
				return true;
			}
			break;
		case 92:
			if (func_1875(14, joaat("TSTAG_FIRST_VISIT"), 1))
			{
				(*uParam0)[0] = 182;
				(*uParam0)[1] = 13;
				return true;
			}
			break;
	}
	return false;
}

float func_1257(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 64:
			fVar0 = 175.0f;
			break;
		case 37:
			fVar0 = 175.0f;
			break;
		case 199:
			fVar0 = 50.0f;
			break;
		case 52:
			return 200.0f;
		case 47:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600.0f;
			}
			else
			{
				return 300.0f;
			}
			break;
		case 7:
		case 15:
		case 28:
		case 40:
		case 44:
			if (Global_1415419.f_9757 == -310375866)
			{
				return 600.0f;
			}
			else
			{
				return 150.0f;
			}
			break;
		default:
			if (func_657())
			{
				switch (func_46())
				{
					case 92:
						fVar0 = 175.0f;
						break;
					case 26:
						fVar0 = 150.0f;
						break;
					case 76:
						fVar0 = 150.0f;
						break;
					case 120:
						fVar0 = 150.0f;
						break;
					case 82:
						fVar0 = 150.0f;
						break;
					default:
						fVar0 = 80.0f;
						break;
				}
			}
			else
			{
				fVar0 = 175.0f;
			}
			break;
	}
	return fVar0;
}

float func_1258(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 64:
			fVar0 = 100.0f;
			break;
		case 37:
			fVar0 = 100.0f;
			break;
		case 199:
			fVar0 = 20.0f;
			break;
		default:
			if (func_657())
			{
				switch (func_46())
				{
					case 92:
						fVar0 = 16.0f;
						break;
					case 76:
						fVar0 = 16.0f;
						break;
					case 26:
						fVar0 = 16.0f;
						break;
					case 82:
						fVar0 = 16.0f;
						break;
					default:
						fVar0 = 25.0f;
						break;
				}
			}
			else
			{
				fVar0 = 50.0f;
			}
			break;
	}
	return fVar0;
}

bool func_1259(int iParam0, Vector3 vParam1)
{
	switch (iParam0)
	{
		case 58:
		case 124:
		case 132:
		case 168:
		case 176:
		case 187:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
			return true;
		default:
			break;
	}
	if (MISC::ABSF((Global_36.f_2 - vParam1.z)) > 30.0f)
	{
		return false;
	}
	return true;
}

int func_1260(int iParam0, Vector3 vParam1, float fParam4)
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
	fVar9 = func_1904(vVar3, vVar6);
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
	if (func_1905(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_1261(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	bool bVar0;
	int iVar1[3];
	var uVar5;
	float fVar7;

	if (fParam3 == -1.0f)
	{
		bVar0 = BUILTIN::VDIST2(Global_36, vParam0);
	}
	else
	{
		bVar0 = fParam3;
	}
	if (bVar0 > bParam6)
	{
		return false;
	}
	if (bVar0 < bParam7)
	{
		return false;
	}
	if (!bParam5)
	{
		if (iParam8 != 34)
		{
			uVar5 = 1;
			if (!bParam4)
			{
				iVar1[0] = 4;
				iVar1[1] = (1 << 14);
			}
			else
			{
				iVar1[0] = 4;
				iVar1[1] = (1 << 14);
				iVar1[2] = 8;
			}
			if (VOLUME::_0x870E9981ED27C815(vParam0, &uVar5, &iVar1, 0))
			{
				return false;
			}
		}
		if (func_657())
		{
			if (bParam4)
			{
				fVar7 = 3.0f;
			}
			else
			{
				fVar7 = 60.0f;
			}
		}
		else if (((iParam8 == 15 || iParam8 == 7) || iParam8 == 28) || iParam8 == 34)
		{
			fVar7 = 3.0f;
		}
		else
		{
			fVar7 = 100.0f;
		}
		if (VOLUME::_0x769BB7626B8CDB06(vParam0, fVar7, 0, 8, 0))
		{
			return false;
		}
		if (func_1906(vParam0, fVar7))
		{
			return false;
		}
		if (func_1907(vParam0))
		{
			return false;
		}
	}
	return true;
}

var func_1262()
{
	return Global_1899515;
}

bool func_1263(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_1908(17, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

bool func_1264(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return true;
	}
	return false;
}

bool func_1265(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_1266(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_1267(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_1693(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1703(bParam0);
	if (iVar0 == joaat("WEAPON"))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, false))
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
		if (!func_1909(bParam0, 1))
		{
			return false;
		}
	}
	return func_1021(bParam0, 0, bParam2) >= iParam1;
}

int func_1268(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISHING_SPOT_01"):
			return 1791726215;
		case joaat("LEGENDARY_FISHING_SPOT_02"):
			return -1553566002;
		case joaat("LEGENDARY_FISHING_SPOT_03"):
			return -528070704;
		case joaat("LEGENDARY_FISHING_SPOT_04"):
			return 1214218277;
		case joaat("LEGENDARY_FISHING_SPOT_05"):
			return -1424874851;
		case joaat("LEGENDARY_FISHING_SPOT_06"):
			return -414895106;
		case joaat("LEGENDARY_FISHING_SPOT_07"):
			return -1560294747;
		case joaat("LEGENDARY_FISHING_SPOT_08"):
			return 1937997726;
		case joaat("LEGENDARY_FISHING_SPOT_09"):
			return 505929754;
		case joaat("LEGENDARY_FISHING_SPOT_10"):
			return -312076753;
		case joaat("LEGENDARY_FISHING_SPOT_11"):
			return 235447783;
		case joaat("LEGENDARY_FISHING_SPOT_12"):
			return 1793239293;
		case joaat("LEGENDARY_FISHING_SPOT_13"):
			return -1142443514;
		default:
			break;
	}
	return 0;
}

int func_1269(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISHING_SPOT_01"):
			return -695777111;
		case joaat("LEGENDARY_FISHING_SPOT_02"):
			return 1671816740;
		case joaat("LEGENDARY_FISHING_SPOT_03"):
			return 1467033526;
		case joaat("LEGENDARY_FISHING_SPOT_04"):
			return 1178765838;
		case joaat("LEGENDARY_FISHING_SPOT_05"):
			return -1385591042;
		case joaat("LEGENDARY_FISHING_SPOT_06"):
			return -1508614120;
		case joaat("LEGENDARY_FISHING_SPOT_07"):
			return -116204733;
		case joaat("LEGENDARY_FISHING_SPOT_08"):
			return 1041505554;
		case joaat("LEGENDARY_FISHING_SPOT_09"):
			return 756063611;
		case joaat("LEGENDARY_FISHING_SPOT_10"):
			return 1035814529;
		case joaat("LEGENDARY_FISHING_SPOT_11"):
			return -1052716565;
		case joaat("LEGENDARY_FISHING_SPOT_12"):
			return 1265504095;
		case joaat("LEGENDARY_FISHING_SPOT_13"):
			return 1343260208;
		default:
			break;
	}
	return 0;
}

bool func_1270(int iParam0)
{
	return Global_40.f_12019.f_3 & iParam0 != 0;
}

int func_1271(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_520(Global_1347702[iParam0 /*49*/].f_12, (1 << 21)))
		{
			if (func_447(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
		else if (func_520(Global_1347702[iParam0 /*49*/].f_12, 256))
		{
			if (!func_447(Global_1835011[59 /*74*/].f_1, 1))
			{
				return 0;
			}
		}
	}
	return func_1910(iParam0);
}

bool func_1272(int iParam0)
{
	return Global_40.f_12019.f_4 & iParam0 != 0;
}

bool func_1273(int iParam0)
{
	return Global_40.f_12019.f_2 & iParam0 != 0;
}

bool func_1274(int iParam0)
{
	return Global_40.f_12019.f_26 & iParam0 != 0;
}

int func_1275(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_1276(int iParam0)
{
	Vector3 vVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(iParam0) /*3*/ };
	func_891(vVar0, 0);
}

int func_1277()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(func_1911(iVar1)) > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1278(int iParam0)
{
	Global_40.f_12019.f_45 = func_538();
	func_823(&(Global_40.f_12019.f_45), 0, 0, 0, iParam0, 0, 0, 0);
}

bool func_1279(int iParam0)
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
	iVar0 = func_1568(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1567(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1548(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1564(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1565(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1566(iParam0);
	if (iVar5 < 1 || iVar5 > func_1569(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_1280()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1912(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_1282(int iParam0)
{
	return Global_40.f_12019.f_43 & iParam0 != 0;
}

int func_1283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("EXOTIC_STAGE_01");
		case 1:
			return joaat("EXOTIC_STAGE_02");
		case 2:
			return joaat("EXOTIC_STAGE_03");
		case 3:
			return joaat("EXOTIC_STAGE_04");
		case 4:
			return joaat("EXOTIC_STAGE_05");
		default:
			break;
	}
	return 0;
}

bool func_1284(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar0 = func_1263(iParam0, 5);
	bVar1 = func_1263(iParam0, 6);
	bVar2 = func_1263(iParam0, 7);
	bVar3 = func_1263(iParam0, 8);
	iVar4 = func_1913(iParam0, 15);
	iVar5 = func_1913(iParam0, 16);
	iVar6 = func_1913(iParam0, 17);
	iVar7 = func_1913(iParam0, 18);
	if (iParam0 == joaat("EXOTIC_STAGE_02"))
	{
		if ((func_1021(bVar0, 0, 0) >= iVar4 && func_1021(bVar1, 0, 0) >= iVar5) && func_1021(bVar2, 0, 0) >= iVar6)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (((func_1021(bVar0, 0, 0) >= iVar4 && func_1021(bVar1, 0, 0) >= iVar5) && func_1021(bVar2, 0, 0) >= iVar6) && func_1021(bVar3, 0, 0) >= iVar7)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 44;
		case 1:
			return 45;
		case 2:
			return 46;
		case 3:
			return 47;
		case 4:
			return 48;
		default:
			break;
	}
	return -1;
}

void func_1286(int iParam0)
{
	Global_40.f_12019.f_43 -= Global_40.f_12019.f_43 & iParam0;
}

void func_1287()
{
	if (!func_1914((1 << 12)))
	{
		func_1915((1 << 12));
		Global_1900073.f_245 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Fishing");
		Global_1900073.f_246 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1900073.f_245, "BaitCounter");
		Global_1900073.f_247 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1900073.f_246, "isVisible", true);
		Global_1900073.f_248 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1900073.f_245, "LureName", "");
		Global_1900073.f_249 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1900073.f_245, "LureCount", "");
		Global_1900073.f_250 = DATABINDING::_DATABINDING_ADD_DATA_HASH(Global_1900073.f_245, "LureTexture", 0);
		Global_1900073.f_251 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1900073.f_245, "put_away_fishingrod_visible", true);
	}
}

void func_1288(var uParam0)
{
	if (Global_1900073.f_18 == 1)
	{
		Global_1900073.f_17 = 0;
		func_495(uParam0);
		return;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() && !func_1916()) && !func_1914(1)) || ENTITY::IS_ENTITY_DEAD(Global_35)) || PED::IS_PED_ON_MOUNT(Global_35)) || PED::IS_PED_IN_COMBAT(Global_35, 0)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_ANY_TRAIN(Global_35)) || func_1917())
	{
		Global_1900073.f_17 = 0;
		func_495(uParam0);
		return;
	}
	if (!func_587(uParam0->f_11))
	{
		uParam0->f_15 = func_503(Global_36, uParam0->f_11);
		if (uParam0->f_15 > uParam0->f_14)
		{
			func_495(uParam0);
		}
		else
		{
			return;
		}
	}
	else
	{
		uParam0->f_15 = -1.0f;
	}
	if (uParam0->f_10 == 0)
	{
		TASK::_0x0E184495B27BB57D();
		uParam0->f_1 = TASK::_0x74F0209674864CBD();
		TASK::_0xE9225354FB7437A7(uParam0->f_1, 1);
		TASK::_0x19BC99C678FBA139(uParam0->f_1, 77, 0);
		TASK::_0x0F4F6C4CE471259D(uParam0->f_1, uParam0->f_14);
		TASK::_0x885D19AC2B6FBFF4(uParam0->f_1, 1);
		TASK::_0x2B8AF29A78024BD3(uParam0->f_1);
		uParam0->f_10 = 1;
	}
	if (TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		uParam0->f_9 = TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	else
	{
		func_495(uParam0);
		return;
	}
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_10 = 0;
			break;
		case 3:
			uParam0->f_11 = { TASK::_0x865732725536EE39(&(uParam0->f_1)) /*3*/ };
			Global_1900073.f_17 = 1;
			break;
		case 4:
			func_495(uParam0);
			Global_1900073.f_17 = 0;
			break;
	}
}

int func_1289(bool bParam0)
{
	if (func_112() == -1)
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

void func_1290(var uParam0)
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(*uParam0, true);
	}
	if (!AUDIO::_HAS_SOUND_ID_FINISHED(uParam0->f_8))
	{
		AUDIO::_STOP_SOUND_WITH_ID(uParam0->f_8);
	}
	uParam0->f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

int func_1291(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_587(uParam0->f_13[iVar0 /*9*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1292(var uParam0)
{
	var uVar0[15];
	int iVar16;
	int iVar17;
	Vector3 vVar18;

	iVar16 = PED::GET_PED_NEARBY_PEDS(Global_35, &uVar0, -1, -1);
	if (iVar16 > 0)
	{
		iVar17 = 0;
		while (iVar17 < iVar16)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(uVar0[iVar17]) && !PED::IS_PED_A_PLAYER(uVar0[iVar17])) && func_1918(uVar0[iVar17]))
			{
				vVar18 = { ENTITY::GET_ENTITY_COORDS(uVar0[iVar17], true, false) /*3*/ };
				if ((func_503(Global_36, vVar18) > uParam0->f_1 && func_503(Global_36, vVar18) < uParam0->f_2) && !func_1919(uParam0, vVar18))
				{
					return vVar18;
				}
			}
			iVar17++;
		}
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_1293(Vector3 vParam0)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	bool bVar6;

	vParam0.f_2 = (vParam0.z + 10.0f);
	vVar0 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iVar5 = WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(vParam0, 1, &fVar3);
	bVar6 = MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &fVar4, false);
	if ((iVar5 == 1 || bVar6 == 0) || fVar3 > fVar4)
	{
		vVar0.x = vParam0.x;
		vVar0.f_1 = vParam0.y;
		vVar0.f_2 = fVar3;
	}
	return vVar0;
}

void func_1294(var uParam0, Vector3 vParam1)
{
	float fVar0;
	float fVar1;

	if ((func_587(uParam0->f_13[*uParam0 /*9*/].f_1) && !func_587(vParam1)) && !GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam0->f_13[*uParam0 /*9*/]))
	{
		uParam0->f_13[*uParam0 /*9*/].f_1 = { vParam1 /*3*/ };
		uParam0->f_13[*uParam0 /*9*/] = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("ent_amb_insect_water_flies", uParam0->f_13[*uParam0 /*9*/].f_1, 0.0f, 0.0f, 0.0f, 1.0f, false, false, false, true);
		fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_6, uParam0->f_7);
		fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_8, uParam0->f_9);
		uParam0->f_13[*uParam0 /*9*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(uParam0->f_10, uParam0->f_11 + 1);
		func_751(&(uParam0->f_13[*uParam0 /*9*/].f_5));
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_13[*uParam0 /*9*/], "size", fVar0, true);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam0->f_13[*uParam0 /*9*/], "density", fVar1, true);
		AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_13[*uParam0 /*9*/].f_8, "Fishing_Fly_Swarm", uParam0->f_13[*uParam0 /*9*/].f_1, uParam0->f_12, false, 0, true);
	}
}

int func_1295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

int func_1296(int iParam0)
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

int func_1297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 155;
		case 1:
			return 163;
		case 2:
			return 150;
		case 3:
			return 153;
		case 4:
			return 157;
		case 5:
			return 160;
		case 6:
			return 164;
		case 7:
			return 148;
		case 8:
			return 128;
		case 9:
			return 167;
		case 10:
			return 161;
		case 11:
			return 130;
		case 12:
			return 152;
		case 13:
			return 151;
		case 14:
			return 156;
		case 15:
			return 166;
		case 16:
			return 158;
		case 17:
			return 142;
		case 18:
			return 132;
		case 19:
			return 143;
		case 20:
			return 146;
		case 21:
			return 168;
		case 22:
			return 159;
		case 23:
			return 135;
		case 24:
			return 131;
		case 25:
			return 136;
		case 26:
			return 137;
		case 27:
			return 139;
		case 28:
			return 140;
		case 29:
			return 141;
		case 30:
			return 147;
		case 31:
			return 165;
		case 32:
			return 145;
		case 33:
			return 134;
		case 34:
			return 149;
		case 35:
			return 154;
		case 36:
			return 162;
		case 37:
			return 138;
		case 38:
			return 133;
		case 39:
			return 129;
		case 40:
			return 144;
		case 50:
			return 169;
		default:
			break;
	}
	return -1;
}

bool func_1298(int iParam0)
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

bool func_1299(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return true;
		default:
			break;
	}
	return false;
}

void func_1300(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

void func_1301(var uParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = uParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(2, &sVar0, 2, 2);
}

void func_1302(var uParam0)
{
	var uVar0;

	uVar0 = uParam0;
	NETWORK::NETWORK_SET_RICH_PRESENCE(1, &uVar0, 1, 1);
}

void func_1303(var uParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = uParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(5, &sVar0, 2, 2);
}

void func_1304(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_1305()
{
	return Global_0.f_7;
}

bool func_1306()
{
	struct<2> /*16*/ sVar0;
	float fVar2;

	if (!func_529())
	{
		return false;
	}
	if (func_185((1 << 15)))
	{
		return false;
	}
	if (func_362(Global_1935630, (1 << 12)) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RESPAWN_DUMP_BODY")) > 0)
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ARTHURS_GRAVE_SCENE")))
	{
		return false;
	}
	if (!func_447(Global_1835011[77 /*74*/].f_1, 1) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FINALE3_OUTRO")) > 0)
	{
		return false;
	}
	if (Global_1914319.f_18941.f_17 || Global_1914319.f_18941.f_15)
	{
		return false;
	}
	if (Global_1392040 & (1 << 23) != 0)
	{
		return false;
	}
	if (((PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		return false;
	}
	if (Global_1392040.f_6)
	{
		return false;
	}
	if (Global_1914319.f_17369)
	{
		return false;
	}
	if (STREAMING::_0x99F92061EFE908BA())
	{
		return false;
	}
	if (UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return false;
	}
	if (Global_1898437 == Global_1347702[42 /*49*/].f_15 && (MISC::GET_GAME_TIMER() - Global_1898438) <= 60000)
	{
		return false;
	}
	sVar0 = { func_375(joaat("TOTAL_PROGRESS_MADE")) /*2*/ };
	fVar2 = func_376(sVar0);
	return fVar2 >= 100.0f;
}

void func_1307(int iParam0)
{
	Global_0.f_7 = iParam0;
	func_751(&(Global_0.f_9));
}

void func_1308(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 1)
	{
		func_1920(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_1309(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_1309(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; // curOff = 52
		}
		else
		{
			func_1920(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1921(1);
	}
}

bool func_1310()
{
	return Global_1425247.f_53;
}

int func_1311()
{
	return Global_1572864;
}

void func_1312(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

void func_1313(bool bParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_112() == -1)
	{
		func_1922();
	}
	else
	{
		return;
	}
	func_1923();
	Global_40.f_9.f_14 = func_538();
	Global_40.f_9.f_20 = LAW::GET_BOUNTY(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1924())
		{
			func_1925(Global_1310720.f_1);
		}
		else if (func_113() == func_1232(Global_36, 1) && func_1145() != 2)
		{
			func_1925(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_1925(Global_36);
		}
		func_1926(Global_36, &vVar0, &uVar4);
		if (!func_1924())
		{
			if (func_1032(vVar0, Global_36) < func_1032(Global_40.f_9.f_7, Global_36))
			{
				func_1925(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_1232(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1926(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0.0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_1510(&Global_1935630, (1 << 13));
	}
	func_86();
}

void func_1314(bool bParam0)
{
	if (!func_504(&Global_0, 2))
	{
		func_1313(0, 0);
		SAVE::SAVEGAME_SAVE_SP(joaat("SAVEGAMETYPE_SP_AUTOSAVE"));
		func_1312(&Global_0, 2);
		if (bParam0)
		{
			func_1312(&Global_0, 32);
		}
		func_507(&Global_0, 1);
	}
}

int func_1315(int iParam0)
{
	if (func_377(iParam0) == 1)
	{
		return func_519(iParam0);
	}
	return -1;
}

int func_1316()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1319(Global_1879514.f_1);
	if (Global_1425247.f_53)
	{
		return 0;
	}
	if (func_1320(iVar0))
	{
		if (Global_1879514.f_18)
		{
			return Global_1879514.f_19;
		}
		iVar1 = STATS::CHAL_MISSION_GET_NUM_GOALS(iVar0);
		iVar2 = STATS::CHAL_MISSION_GET_NUM_GOALS_COMPLETE(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

int func_1317(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1927(iParam0))
	{
		return 0;
	}
	if (!func_529())
	{
		return 0;
	}
	if (!func_1928(iParam0, &iVar0, &iVar1))
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

int func_1318(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_1319(int iParam0)
{
	char[] cVar0[8];
	int iVar1;
	int iVar2;

	if (!func_127(iParam0))
	{
		return 0;
	}
	cVar0 = func_515(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1320(int iParam0)
{
	return STATS::_0x4DAC398297981B87(iParam0);
}

int func_1321(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> /*40*/ sVar0;
	struct<8> /*64*/ sVar13;
	int iVar21;

	sVar0 = -2;
	sVar0.f_0 = iParam7;
	sVar0.f_1 = sParam8;
	sVar0.f_2 = sParam9;
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

void func_1322(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_1929(iParam0, sParam4, iParam5);
	}
	func_1930(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_1323(int iParam0, int iParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1931())
	{
		iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(1072517412, joaat("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(2067252994, joaat("HUD_TOASTS"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_GANG"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1931())
	{
		iVar3 += iVar2;
	}
	TELEMETRY::_TELEMETRY_GANG_SHARES(func_378(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_519(iParam0);
	if (func_377(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		UILOG::_UILOG_ADD_TOTAL_TAKE_ENTRY(-1391579956, 1997120069, MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_ARTHUR"), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_377(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1932(1, iVar1);
					func_1932(8, iVar1);
					func_1932(7, iVar1);
					break;
				case 12:
					func_1932(6, iVar1);
					break;
				case 53:
					func_1932(3, iVar1);
					func_1932(7, iVar1);
					func_1932(4, iVar1);
					break;
				case 20:
					func_1932(8, iVar1);
					break;
				case 19:
					func_1932(1, iVar1);
					func_1932(2, iVar1);
					break;
				case 24:
					func_1932(3, iVar1);
					func_1932(9, iVar1);
					func_1932(20, iVar1);
					break;
				case 28:
					func_1932(1, iVar1);
					break;
				case 34:
					func_1932(23, iVar1);
					func_1932(2, iVar1);
					func_1932(18, iVar1);
					break;
				case 29:
					func_1932(0, iVar1);
					func_1932(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1932(0, iVar1);
					func_1932(3, iVar1);
					func_1932(2, iVar1);
					func_1932(11, iVar1);
					func_1932(6, iVar1);
					func_1932(25, iVar1);
					func_1932(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1932(5, iVar1);
					break;
				case 63:
					func_1932(1, iVar1);
					func_1932(3, iVar1);
					break;
				case 37:
					func_1932(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_311(0, 10, 11, joaat("CABR01")))
			{
				func_1932(7, iVar1);
				func_1932(4, iVar1);
			}
			else if (iParam0 == func_311(0, 7, 11, joaat("CACR02")))
			{
				func_1932(8, iVar1);
				func_1932(15, iVar1);
			}
			else if (iParam0 == func_311(0, 8, 11, joaat("CACR03")))
			{
				func_1932(3, iVar1);
			}
			else if (iParam0 == func_311(0, 11, 11, joaat("CACR01")))
			{
				func_1932(6, iVar1);
				func_1932(3, iVar1);
			}
			else if (iParam0 == func_311(0, 12, 11, joaat("CACR04")))
			{
				func_1932(9, iVar1);
			}
			break;
	}
	UILOG::_UILOG_SET_TOTAL_TAKE_SUMMARY(MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), MISC::VAR_STRING(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1933()));
	if (!func_575(629))
	{
		func_576(629, 0);
	}
}

void func_1324(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1347702[iParam0 /*49*/].f_13 & 2 == 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (func_1541(Global_1347702[iParam0 /*49*/].f_29[iVar1]))
			{
				func_1934(&iVar0, func_1840(Global_1347702[iParam0 /*49*/].f_29[iVar1]));
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
		else if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
		{
			if (func_1935(iVar0, Global_1347702[iParam0 /*49*/].f_15, 1, Global_1347702[iParam0 /*49*/].f_27, func_113()))
			{
				func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 2);
			}
		}
		else
		{
			func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 2);
		}
	}
}

void func_1325(int iParam0)
{
	char cVar0[64];

	if (Global_1347702[iParam0 /*49*/].f_20 <= 0.0f)
	{
		return;
	}
	MemCopy(&cVar0, {Global_1347702[iParam0 /*49*/].f_3}, 8);
	strcat_s(&cVar0, 64, ".VolAmbScriptRestrict");
	if (iParam0 == 91)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
		{
			Global_1347702[iParam0 /*49*/].f_41 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1526.396f, -1091.008f, -6.724f, 0.0f, 0.0f, 25f, 138.807f, 280.237f, 260.181f, &cVar0);
			func_270(Global_1347702[iParam0 /*49*/].f_41, &cVar0, 1, 0, 0, 0, -1.0f);
			func_1936(Global_1347702[iParam0 /*49*/].f_41);
			PATHFIND::SET_ROADS_IN_VOLUME(Global_1347702[iParam0 /*49*/].f_41, false, false, false);
		}
	}
	else if (iParam0 == 129)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
		{
			Global_1347702[iParam0 /*49*/].f_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_609(iParam0), 0.0f, 0.0f, 0.0f, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, &cVar0);
			func_270(Global_1347702[iParam0 /*49*/].f_41, &cVar0, 1, 0, 0, 0, -1.0f);
			func_1936(Global_1347702[iParam0 /*49*/].f_41);
			PATHFIND::SET_ROADS_IN_VOLUME(Global_1347702[iParam0 /*49*/].f_41, false, false, false);
		}
	}
	else if (!VOLUME::DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
	{
		Global_1347702[iParam0 /*49*/].f_41 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(func_609(iParam0), 0.0f, 0.0f, 0.0f, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, Global_1347702[iParam0 /*49*/].f_20, &cVar0);
		func_270(Global_1347702[iParam0 /*49*/].f_41, &cVar0, 1, 0, 0, 0, -1.0f);
		func_1936(Global_1347702[iParam0 /*49*/].f_41);
	}
}

int func_1326(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_13 & 128 != 0)
	{
		return 1;
	}
	Global_1347702[iParam0 /*49*/].f_45 = func_1232(Global_1347702[iParam0 /*49*/].f_24, 1);
	func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 128);
	return 1;
}

void func_1327()
{
	int iVar0;

	iVar0 = 4;
	if (Global_1347702[iVar0 /*49*/].f_12 & 16 != 0)
	{
		if (func_1399(Global_1347702[iVar0 /*49*/].f_15) == 1)
		{
			func_1348(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		}
	}
}

void func_1328()
{
	int iVar0;

	iVar0 = 22;
	if (Global_1347702[iVar0 /*49*/].f_36 == joaat("BLIP_RC"))
	{
		if (func_1937(622))
		{
			Global_1347702[iVar0 /*49*/].f_36 = joaat("BLIP_SCM_DORKINS");
			func_1386(&(Global_1347702[iVar0 /*49*/].f_13), 1);
			func_543(iVar0, 0);
		}
	}
}

bool func_1329(int iParam0, int iParam1)
{
	return Global_40.f_490.f_402[iParam0] & iParam1 != 0;
}

void func_1330(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] |= iParam1;
}

void func_1331(int iParam0, bool bParam1)
{
	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 26) != 0)
	{
		return;
	}
	if (!func_1329(iParam0, 4))
	{
		return;
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_1938(iParam0), func_1939(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1329(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_1938(iParam0), func_1939(iParam0), 1, "");
		}
		func_1330(iParam0, 8);
	}
	else
	{
		if (func_1329(iParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_1938(iParam0), func_1939(iParam0), 0, "");
		}
		func_1940(iParam0, 8);
	}
}

void func_1332(int iParam0)
{
	int iVar0;
	Vector3 vVar1[24];
	char* sVar4;
	bool bVar5;
	bool bVar6;

	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 26) != 0)
	{
		return;
	}
	iVar0 = func_1938(iParam0);
	if (iVar0 == 1)
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_1939(iParam0)))
		{
			UILOG::_UILOG_MARK_MISSION_COMPLETED(func_1939(iParam0));
		}
		func_1940(iParam0, 4);
		func_1940(iParam0, 8);
		return;
	}
	else if (func_520(Global_1347702[iParam0 /*49*/].f_12, 4))
	{
		func_1941(Global_1347702[iParam0 /*49*/]);
		func_1942(iParam0);
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(iVar0, func_1939(iParam0)))
		{
			strcpy_s(&cVar1, 24, "");
			sVar4 = func_1943(0, &cVar1, 0, 0, -1, -1);
			func_1944(iParam0, &cVar1, sVar4, -1082130432);
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(iVar0, func_1939(iParam0), MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE"), MISC::GET_HASH_KEY("hud_toasts"));
		}
		func_1940(iParam0, 4);
		func_1940(iParam0, 8);
		return;
	}
	bVar5 = false;
	if (func_1329(iParam0, 8))
	{
		bVar5 = true;
	}
	bVar6 = false;
	if (func_1329(iParam0, 16))
	{
		bVar6 = true;
	}
	func_1941(Global_1347702[iParam0 /*49*/]);
	func_1942(iParam0);
	MemCopy(&cVar1, {Global_1347702[iParam0 /*49*/].f_1}, 3);
	strcat_s(&cVar1, 24, "_obj");
	if (func_1329(iParam0, 64))
	{
		strcat_s(&cVar1, 24, "3");
	}
	else if (func_1329(iParam0, 32))
	{
		strcat_s(&cVar1, 24, "2");
	}
	if (HUD::DOES_TEXT_LABEL_EXIST(&cVar1))
	{
		sVar4 = func_1943(0, &cVar1, 0, 0, -1, -1);
		func_1944(iParam0, &cVar1, sVar4, -1082130432);
		if (func_1329(iParam0, 16) || bVar6)
		{
			func_1945(iParam0, 1);
		}
		if (func_1329(iParam0, 8) || bVar5)
		{
			func_1331(iParam0, 1);
		}
	}
	else
	{
		strcpy_s(&cVar1, 24, "");
		sVar4 = func_1943(0, &cVar1, 0, 0, -1, -1);
		func_1944(iParam0, &cVar1, sVar4, -1082130432);
		func_1331(iParam0, 1);
		if (func_1329(iParam0, 16) || bVar6)
		{
			func_1945(iParam0, 1);
		}
	}
}

void func_1333()
{
	int iVar0;

	iVar0 = 43;
	if (Global_1347702[iVar0 /*49*/].f_36 == joaat("BLIP_RC"))
	{
		if (func_1267(joaat("DOCUMENT_BUSINESS_CARD_EXOTICS"), 1, 0))
		{
			Global_1347702[iVar0 /*49*/].f_36 = joaat("BLIP_RC_ALGERNON_WASP");
			func_1386(&(Global_1347702[iVar0 /*49*/].f_13), 1);
			func_543(iVar0, 0);
		}
	}
}

void func_1334()
{
	int iVar0;
	int iVar1;

	iVar0 = 96;
	if (Global_1347702[iVar0 /*49*/].f_14 & 2 != 0)
	{
		return;
	}
	else if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iVar0 /*49*/].f_42, false))
	{
		return;
	}
	iVar1 = 1026;
	if (func_795(iVar1))
	{
		if (Global_1347702[iVar0 /*49*/].f_13 & (1 << 16) != 0)
		{
			func_544(&(Global_1347702[iVar0 /*49*/].f_13), (1 << 16));
			func_543(iVar0, 0);
		}
	}
	else if (Global_1347702[iVar0 /*49*/].f_13 & (1 << 16) == 0)
	{
		func_1386(&(Global_1347702[iVar0 /*49*/].f_13), (1 << 16));
		func_543(iVar0, 0);
	}
}

void func_1335(bool bParam0)
{
	int iVar0;

	iVar0 = 97;
	if (func_1399(Global_1347702[iVar0 /*49*/].f_15) == 0)
	{
		if (func_1937(597))
		{
		}
		else if (!func_447(Global_1835011[13 /*74*/].f_1, 1))
		{
			return;
		}
		else if (!func_447(Global_1835011[6 /*74*/].f_1, 1))
		{
			return;
		}
		else if (!func_447(Global_1347702[63 /*49*/].f_15, 1))
		{
			return;
		}
		else if (func_1946(1) > 2)
		{
			return;
		}
		func_1348(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		func_1400(Global_1347702[iVar0 /*49*/].f_15, 1);
		if (bParam0)
		{
			func_1396(iVar0, func_609(iVar0), 0, 0);
		}
	}
	else
	{
		if (Global_1347702[iVar0 /*49*/].f_12 & 16 != 0)
		{
			func_1348(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		}
		if (bParam0)
		{
			func_1396(iVar0, func_609(iVar0), 0, 0);
		}
	}
}

void func_1336(bool bParam0)
{
	int iVar0;

	iVar0 = 112;
	if (func_1399(Global_1347702[iVar0 /*49*/].f_15) == 0)
	{
		if (func_1937(603))
		{
		}
		else if (func_1946(1) > 1)
		{
			return;
		}
		func_1348(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		func_1400(Global_1347702[iVar0 /*49*/].f_15, 1);
		if (bParam0)
		{
			func_1396(iVar0, func_609(iVar0), 0, 0);
		}
	}
	else
	{
		if (Global_1347702[iVar0 /*49*/].f_12 & 16 != 0)
		{
			func_1348(&(Global_1347702[iVar0 /*49*/].f_12), 16);
		}
		if (bParam0)
		{
			func_1396(iVar0, func_609(iVar0), 0, 0);
		}
	}
}

bool func_1337(int iParam0)
{
	if (func_112() != -1)
	{
		return false;
	}
	if (!func_141(iParam0))
	{
		return false;
	}
	return func_246(Global_1347702[iParam0 /*49*/].f_15);
}

void func_1338(int iParam0)
{
	if (func_575(179))
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		return;
	}
	else if (func_1947(iParam0))
	{
		return;
	}
	if (((MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37) && MAP::IS_BLIP_ON_MINIMAP(Global_1347702[iParam0 /*49*/].f_37)) && BUILTIN::VDIST2(func_609(iParam0), Global_36) < 10000.0f) && func_1234())
	{
		func_625(179, Global_1347702[iParam0 /*49*/].f_37, 0);
	}
}

void func_1339(int iParam0)
{
	if (func_575(180))
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_36 != joaat("BLIP_RC"))
	{
		return;
	}
	else if (!func_1947(iParam0))
	{
		return;
	}
	if ((MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37) && MAP::IS_BLIP_ON_MINIMAP(Global_1347702[iParam0 /*49*/].f_37)) && func_1234())
	{
		func_625(180, Global_1347702[iParam0 /*49*/].f_37, 0);
	}
}

bool func_1340(int iParam0)
{
	float fVar0;

	if (func_128(Global_1347702[iParam0 /*49*/].f_15) == 2 || iParam0 == func_1382(Global_1347343.f_2))
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 32 != 0)
	{
		return true;
	}
	fVar0 = BUILTIN::VDIST2(func_609(iParam0), Global_36);
	if (fVar0 < (Global_1347702[iParam0 /*49*/].f_16 * Global_1347702[iParam0 /*49*/].f_16))
	{
		return true;
	}
	return false;
}

bool func_1341(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1347702[iParam0 /*49*/].f_4)))
	{
		SCRIPTS::REQUEST_SCRIPT(&(Global_1347702[iParam0 /*49*/].f_4));
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1347702[iParam0 /*49*/].f_4)))
		{
			sVar0.f_0 = iParam0;
			sVar0.f_1 = func_142(Global_1347702[iParam0 /*49*/].f_13, 256);
			Global_1347702[iParam0 /*49*/].f_42 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1347702[iParam0 /*49*/].f_4), &sVar0, 2, 7300);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1347702[iParam0 /*49*/].f_4));
			func_129(Global_1347702[iParam0 /*49*/].f_15);
			return true;
		}
	}
	return false;
}

void func_1342(int iParam0)
{
	func_544(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	if (func_520(Global_1347702[iParam0 /*49*/].f_12, (1 << 10)))
	{
		func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 10));
	}
}

void func_1343(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_1344(int iParam0)
{
	func_1416(1);
}

void func_1345(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_30))
	{
		func_1276(Global_1392626[iParam0 /*32*/].f_30);
		VOLUME::DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_30);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1392626[iParam0 /*32*/].f_31))
	{
		func_1276(Global_1392626[iParam0 /*32*/].f_31);
		VOLUME::DELETE_VOLUME(Global_1392626[iParam0 /*32*/].f_31);
	}
	if (iParam0 == 4)
	{
		func_1600(1411.856f, 1166.743f, 184.1507f, 200.0f, 5);
	}
}

void func_1346(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_1347(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(Global_1347702[iParam0 /*49*/].f_41))
	{
		func_1276(Global_1347702[iParam0 /*49*/].f_41);
		if (iParam0 == 91 || iParam0 == 129)
		{
			PATHFIND::RESET_ROADS_IN_VOLUME(Global_1347702[iParam0 /*49*/].f_41, false);
		}
		VOLUME::DELETE_VOLUME(Global_1347702[iParam0 /*49*/].f_41);
	}
}

void func_1348(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_1349(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1404(iParam0, &iVar1, &iVar0))
	{
		if (func_1875(iVar1, iVar0, 1))
		{
			func_1948(iVar1, iVar0);
		}
	}
}

void func_1350(var uParam0)
{
	*uParam0 = 0;
}

void func_1351(int iParam0)
{
	if (func_741(179) || func_741(180))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			if (Global_1347702[iParam0 /*49*/].f_37 == Global_1905944.f_5698)
			{
				func_1344(1);
			}
		}
	}
	if (func_771(179))
	{
		func_1949(179);
	}
	if (func_771(180))
	{
		func_1949(180);
	}
}

void func_1352(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_141(iParam0))
	{
		return;
	}
	func_1950(&(Global_1347702[iParam0 /*49*/].f_14), iParam1);
	func_1950(&(Global_1347702[iParam0 /*49*/].f_14), 2);
	func_1951(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 14));
	func_544(&(Global_1347702[iParam0 /*49*/].f_13), 32);
	if (iParam1 != (1 << 14))
	{
		iVar0 = 0;
		while (iVar0 < Global_40.f_450)
		{
			if (func_141(Global_40.f_450[iVar0]))
			{
				if (Global_40.f_450[iVar0] == iParam0)
				{
					Global_1430257 = iVar0;
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

void func_1353(int iParam0, bool bParam1, Vector3 vParam2)
{
	if (!func_141(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 12) != 0)
	{
		if (bParam1)
		{
			return;
		}
	}
	func_1351(iParam0);
	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 20) != 0 && Global_1347702[iParam0 /*49*/].f_13 & (1 << 11) == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_1396(iParam0, func_1952(iParam0), 0, 1);
	}
	else if (Global_1347702[iParam0 /*49*/].f_18 > -1.0f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		if (bParam1)
		{
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
		}
		func_1396(iParam0, vParam2, 0, 1);
	}
	else if (!bParam1)
	{
		func_1396(iParam0, vParam2, 0, 0);
	}
	MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
	func_1386(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 12));
}

int func_1354(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = uParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_1504(&iVar1, (1 << 31));
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

int func_1355()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_1356(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_112() != -1)
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

int func_1357(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383;
}

bool func_1358(var uParam0)
{
	if (func_569(&(uParam0->f_29), 62))
	{
		switch (func_1953())
		{
			case 1:
				if (!func_569(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_569(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_569(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_569(&(uParam0->f_29), 32))
				{
					if (func_569(&(uParam0->f_29), 2))
					{
						if (func_1548(func_538()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

Vector3 func_1359(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return { -240.576f, 769.614f, 117.085f };
		case 34:
			return { 2544.982f, -1187.344f, 52.3104f };
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

bool func_1360(int iParam0)
{
	if (func_112() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_447(Global_1347702[21 /*49*/].f_15, 1);
		case 44:
			return func_447(Global_1347702[83 /*49*/].f_15, 1);
	}
	return true;
}

Vector3 func_1361(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return { 7.5f, 8.0f, 5.0f };
		default:
			break;
	}
	return { 5.0f, 5.0f, 5.0f };
}

int func_1362(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 19;
		default:
			break;
	}
	return 0;
}

Vector3 func_1363(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return { -1541.14f, -305.74f, Global_1835011[iParam0 /*74*/].f_18.f_2 };
		case 39:
			return { 4432.49f, -3404.77f, Global_1835011[iParam0 /*74*/].f_18.f_2 };
		case 8:
			return { 891.27f, 1279.39f, 234.14f };
		case 27:
			return { 2604.742f, -1212.295f, 52.3389f };
		case 29:
			return { 2715.245f, -1356.552f, Global_1835011[iParam0 /*74*/].f_18.f_2 };
		case 41:
			return { 1332.632f, -7248.313f, 55.5522f };
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

float func_1364(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 45.0f;
		case 8:
			return 54.0f;
		case 27:
			return 35.0f;
		case 41:
			return 50.0f;
		case 54:
			return 17.5f;
		default:
			break;
	}
	return 25.0f;
}

bool func_1365(int iParam0, int iParam1)
{
	return PED::IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

bool func_1366(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return true;
	}
	if ((((iParam0 == 31 || iParam0 == 45) || iParam0 == 17) || iParam0 == 7) || iParam0 == 22)
	{
		return (func_1399(func_514(iParam0)) == 0 && fParam1 >= (10.0f * 10.0f));
	}
	if (iParam0 == 18)
	{
		return (func_370(21) && fParam1 >= (10.0f * 10.0f));
	}
	if (iParam0 == 44)
	{
		return (func_370(83) && fParam1 >= (10.0f * 10.0f));
	}
	if (func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 11)))
	{
		return false;
	}
	return (((fParam1 > (10.0f * 10.0f) || func_569(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 15))) || CAM::IS_SCREEN_FADED_OUT()) || func_1954());
}

int func_1367(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1224589.f_9))
	{
		return 0;
	}
	if (Global_1224589 < 0 || Global_1224589 >= 32)
	{
		return 0;
	}
	if (Global_1224589.f_10 < 0 || Global_1224589.f_10 >= 32)
	{
		return 0;
	}
	if (Global_1224589 == Global_1224589.f_10)
	{
		return 0;
	}
	iVar0 = func_1955(Global_1224589.f_10);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (iParam0 != iVar0)
	{
		return 0;
	}
	if (!func_1956(Global_1224589.f_10, 0) || !func_1956(Global_1224589.f_10, 3))
	{
		return 0;
	}
	return 1;
}

void func_1368(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

bool func_1369(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1957(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_776(iParam0))
	{
		return false;
	}
	if (func_1958(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_213(iParam0, 1)) || func_185((1 << 15)))
	{
		if (!func_213(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_772())
	{
		return false;
	}
	return true;
}

void func_1370(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_1371(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_580(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	iVar1 = func_427(iVar0);
	if (iVar1 == -1)
	{
		return false;
	}
	return Global_1392915.f_121[iVar0 /*20*/].f_19;
}

void func_1372(int iParam0)
{
	int iVar0;

	if (func_112() != -1)
	{
		return;
	}
	if (!func_1818(iParam0, &iVar0))
	{
		return;
	}
	if (Global_1392915.f_121[iVar0 /*20*/].f_15 == 1)
	{
	}
	Global_1392915.f_121[iVar0 /*20*/].f_15 = 0;
}

void func_1373(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = Global_1392915[iParam1 /*12*/];
	if (!func_1824(iVar0))
	{
		return;
	}
	if (func_549(uParam0->f_34[iVar0]))
	{
		func_1170(&(uParam0->f_34[iVar0]), 1);
		uParam0->f_34[iVar0] = -1;
		(*uParam0)[iVar0] = 0;
	}
}

int func_1374(int iParam0)
{
	if (!func_586(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0 /*3*/];
}

bool func_1375(int iParam0)
{
	return iParam0 != 0;
}

int func_1376(int iParam0)
{
	if (!func_586(iParam0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_MODEL_NAME(Global_1895087[iParam0 /*3*/]);
}

bool func_1377(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

Vector3 func_1378(int iParam0)
{
	Vector3 vVar0;

	switch (iParam0)
	{
		case 0:
			vVar0 = { -1410.191f, -963.1737f, 60.5407f /*3*/ };
			break;
		case 1:
			vVar0 = { -1535.618f, 160.3011f, 100.1231f /*3*/ };
			break;
		case 2:
			vVar0 = { -2731.802f, -255.3586f, 148.6638f /*3*/ };
			break;
		case 4:
			vVar0 = { 1103.741f, -390.8806f, 93.3573f /*3*/ };
			break;
		case 5:
			vVar0 = { 1443.614f, -1845.664f, 53.1259f /*3*/ };
			break;
		case 6:
			vVar0 = { 1502.723f, -714.6039f, 47.6706f /*3*/ };
			break;
		case 8:
			vVar0 = { 1701.657f, -746.2404f, 40.7819f /*3*/ };
			break;
		case 9:
			vVar0 = { 1111.63f, -615.53f, 87.37f /*3*/ };
			break;
		case 10:
			vVar0 = { 685.9935f, -170.3752f, 135.5994f /*3*/ };
			break;
		case 11:
			vVar0 = { 1518.102f, -2117.535f, 42.7516f /*3*/ };
			break;
		case 12:
			vVar0 = { 1381.61f, -807.13f, 64.12f /*3*/ };
			break;
		case 13:
			vVar0 = { 2538.571f, -263.3733f, 41.1397f /*3*/ };
			break;
	}
	if (func_587(vVar0))
	{
	}
	return vVar0;
}

void func_1379(int iParam0, bool bParam1)
{
	if (func_1959(16))
	{
		MAP::BLIP_ADD_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HIDDEN"));
		func_1960(16);
		return;
	}
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iParam0, "PROC_BLIP_CHROB");
	if (bParam1)
	{
	}
}

bool func_1380(int iParam0)
{
	if (iParam0 == 6)
	{
		if (func_1961() || (func_1962() && func_679()))
		{
			return false;
		}
		else if ((!func_930(6, 16) && !func_930(6, 32)) && func_679())
		{
			return false;
		}
		else if (func_929(6, (1 << 14)))
		{
			return false;
		}
		else if (func_930(6, 8))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_1381()
{
	return Global_1572864.f_8;
}

int func_1382(int iParam0)
{
	if (func_377(iParam0) == 8)
	{
		return func_519(iParam0);
	}
	return -1;
}

bool func_1383(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1347702[iParam0 /*49*/].f_13 & 8 != 0)
	{
		return true;
	}
	if (func_447(Global_1835011[43 /*74*/].f_1, 1))
	{
		if (!func_447(Global_1835011[44 /*74*/].f_1, 1))
		{
			if (iParam0 != 82 && iParam0 != 83)
			{
				return true;
			}
		}
		if (func_447(Global_1835011[67 /*74*/].f_1, 1))
		{
			if ((!func_447(Global_1347702[8 /*49*/].f_15, 1) && !func_447(Global_1835011[69 /*74*/].f_1, 1)) && iParam0 != 8)
			{
				if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1835011[67 /*74*/].f_22)) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Global_1835011[67 /*74*/].f_22))) > 0)
				{
					return true;
				}
			}
		}
	}
	else if ((!func_1963(2) && !func_447(Global_1347702[61 /*49*/].f_15, 1)) && func_447(Global_1347702[59 /*49*/].f_15, 1))
	{
		if (iParam0 != 60 && iParam0 != 61)
		{
			return true;
		}
	}
	if (iParam0 == 15)
	{
		iVar1 = func_311(func_1964((1 << 16)), 0, 3, func_1965((1 << 16)));
		if (func_127(iVar1))
		{
			iVar0 = func_1112(iVar1);
			if (!func_530(iVar0, 4))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 26 || iParam0 == 27)
	{
		if (((((!func_447(Global_1835011[14 /*74*/].f_1, 1) && func_447(Global_1347702[62 /*49*/].f_15, 1)) && func_447(Global_1347702[0 /*49*/].f_15, 1)) && func_447(Global_1347702[94 /*49*/].f_15, 1)) && func_447(Global_1835011[25 /*74*/].f_1, 1)) && (func_447(Global_1835011[8 /*74*/].f_1, 1) || (func_447(Global_1347702[98 /*49*/].f_15, 1) && func_1112(Global_1347702[98 /*49*/].f_15) == 0)))
		{
			return true;
		}
	}
	else if (iParam0 == 27)
	{
		if (!func_447(Global_1835011[34 /*74*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 42)
	{
		if (!func_447(Global_1347702[41 /*49*/].f_15, 1))
		{
			if (!func_1272(8))
			{
				return true;
			}
		}
	}
	else if (iParam0 == 51)
	{
		if (!func_1274(2))
		{
			return true;
		}
	}
	else if (iParam0 == 52)
	{
		if (!func_447(Global_1347702[51 /*49*/].f_15, 1))
		{
			return true;
		}
	}
	else if (iParam0 == 57)
	{
		if (func_246(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 69 || iParam0 == 70)
	{
		if (func_1399(Global_1347702[iParam0 /*49*/].f_15) == 0)
		{
			if (func_1966() <= 160)
			{
				return true;
			}
			else
			{
				func_1400(Global_1347702[iParam0 /*49*/].f_15, 1);
			}
		}
		if (!func_370(68))
		{
			return true;
		}
	}
	else if (iParam0 == 77)
	{
		if (func_246(Global_1835011[47 /*74*/].f_1))
		{
			return true;
		}
		else if (func_246(Global_1835011[45 /*74*/].f_1))
		{
			return true;
		}
		else if (func_903(16, 0))
		{
			return true;
		}
	}
	else if (iParam0 == 87)
	{
		if (func_246(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 95)
	{
		if (func_246(Global_1835011[20 /*74*/].f_1))
		{
			return true;
		}
		else if (func_246(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 113)
	{
		if (MISC::GET_GAME_TIMER() + 5000 < Global_1898438)
		{
			return true;
		}
		else if (Global_1879534.f_1 || Global_1879534)
		{
			return true;
		}
		else if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[113 /*49*/].f_42, false) && func_1967())
		{
			if (func_1542("MUDTOWN32_altobj", 7500, 0, 1, 0, 0, -1, -1, 0) != 0)
			{
				func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 18));
				func_1951(&(Global_1347702[iParam0 /*49*/].f_12), 64);
				func_1968(113, 1, 0, 1, 1, 1, 0);
				return true;
			}
		}
	}
	else if (iParam0 == 99)
	{
		if (func_440(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
		{
			return true;
		}
	}
	else if (iParam0 == 117)
	{
		if (func_246(Global_1835011[69 /*74*/].f_1))
		{
			return true;
		}
	}
	else if (iParam0 == 136)
	{
		if (func_246(Global_1835011[21 /*74*/].f_1))
		{
			return true;
		}
	}
	return false;
}

void func_1384(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam1)
	{
		iParam2 = 1;
		iParam3 = 1;
		bParam4 = true;
	}
	if (func_246(Global_1347702[iParam0 /*49*/].f_15))
	{
		func_129(Global_1347702[iParam0 /*49*/].f_15);
	}
	func_542(iParam0, iParam2, iParam3, 1, 32);
	if (func_520(Global_1347702[iParam0 /*49*/].f_12, (1 << 10)))
	{
		func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 10));
	}
	if (bParam4)
	{
		func_1969(iParam0);
	}
	if (bParam1 == 1)
	{
		func_1970(iParam0, 1);
	}
}

void func_1385(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	if (func_1329(iVar0, 4))
	{
	}
	else
	{
		iVar1 = func_377(Global_1347702[iParam0 /*49*/].f_48);
		if (iVar1 != 8)
		{
			return;
		}
		iVar0 = func_519(Global_1347702[iParam0 /*49*/].f_48);
		if (!func_141(iVar0))
		{
			return;
		}
		if (!func_1329(iVar0, 4))
		{
			return;
		}
	}
	func_1945(iVar0, bParam1);
}

void func_1386(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_1387(int iParam0, bool bParam1, float fParam2)
{
	int iVar0;
	char* sVar1;

	if (!bParam1)
	{
		return;
	}
	else if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 12) == 0 && Global_1347702[iParam0 /*49*/].f_13 & 32 == 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 20) != 0 && Global_1347702[iParam0 /*49*/].f_13 & (1 << 11) == 0)
	{
		fParam2 = BUILTIN::VDIST2(Global_36, func_1952(iParam0));
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 9) != 0)
	{
		if (fParam2 > 225.0f)
		{
			iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
			if (iVar0 != Global_1347702[iParam0 /*49*/].f_39)
			{
				UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1347702[iParam0 /*49*/].f_39, false);
			}
			func_544(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 9));
		}
	}
	else if (fParam2 <= 100.0f)
	{
		if (func_1971())
		{
			return;
		}
		if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
		{
			sVar1 = MISC::VAR_STRING(2, "RCM_INVALID_TOD", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = func_220(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 10) != 0)
		{
			sVar1 = MISC::VAR_STRING(2, "MISSION_ANTAGONIZE", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = func_220(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 12) != 0)
		{
			sVar1 = MISC::VAR_STRING(2, "MISSION_MEMORY", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = func_220(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 11) != 0)
		{
			sVar1 = MISC::VAR_STRING(2, "MISSION_WANTED_REGION", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = func_220(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 14) != 0)
		{
			sVar1 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = func_220(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 13) != 0)
		{
			sVar1 = MISC::VAR_STRING(2, "MISSION_COMBAT", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = func_220(sVar1, 10000, 0, 0, 0, 1);
		}
		else if (Global_1347702[iParam0 /*49*/].f_14 & (1 << 15) != 0)
		{
			sVar1 = MISC::VAR_STRING(2, "MISSION_PREV_WANTED_2", Global_1347702[iParam0 /*49*/].f_37);
			Global_1347702[iParam0 /*49*/].f_39 = func_220(sVar1, 10000, 0, 0, 0, 1);
		}
		func_1386(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 9));
	}
}

bool func_1388(int iParam0)
{
	int iVar0;

	if (Global_1347702[iParam0 /*49*/].f_48 == -1)
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_47 == 0)
	{
		return true;
	}
	iVar0 = func_1972(iParam0);
	return func_793(iVar0, 1);
}

void func_1389(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_48 != -1 && Global_1347702[iParam0 /*49*/].f_47 != 0)
	{
		Global_1347702[iParam0 /*49*/].f_47 = 0;
		func_1973(iParam0);
	}
}

int func_1390(int iParam0)
{
	if (iParam0 == 11 || iParam0 == 153)
	{
		return 26;
	}
	else if (iParam0 == 12 || iParam0 == 16)
	{
		return 5;
	}
	else if ((iParam0 == 13 || iParam0 == 154) || iParam0 == 15)
	{
		return 105;
	}
	else if (iParam0 == 14 || iParam0 == 135)
	{
		return 76;
	}
	else if ((iParam0 == 17 || iParam0 == 18) || iParam0 == 155)
	{
		return 38;
	}
	else if (iParam0 == 19 || iParam0 == 20)
	{
		return 115;
	}
	return -1;
}

bool func_1391(int iParam0, int iParam1)
{
	return func_1974(iParam0, iParam1);
}

bool func_1392(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_44 != -1)
	{
		if (Global_1347702[iParam0 /*49*/].f_44 != 0)
		{
			if (!func_795(Global_1347702[iParam0 /*49*/].f_44))
			{
				return false;
			}
		}
	}
	return true;
}

void func_1393(int iParam0)
{
	func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 16);
	if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
	{
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			func_1396(iParam0, func_609(iParam0), 1, 0);
		}
		else
		{
			func_1397(iParam0);
		}
	}
	else
	{
		func_543(iParam0, 0);
	}
}

float func_1394(int iParam0)
{
	if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_19;
	}
	else if (Global_1347702[iParam0 /*49*/].f_16 <= 50.0f)
	{
		return (Global_1347702[iParam0 /*49*/].f_16 - 20.0f);
	}
	return 50.0f;
}

bool func_1395(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return false;
	}
	if ((((Global_1395601.f_4 & 1 != 0 || Global_1395601.f_4 & 2 != 0) || func_362(Global_1935630, (1 << 17))) || func_185((1 << 12))) || func_362(Global_1935630, (1 << 14)))
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 32 != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 14) != 0)
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_14 & 2 != 0)
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 12) != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 10) != 0)
	{
		return false;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 32 != 0)
	{
		return true;
	}
	if (iParam0 == 58)
	{
		return false;
	}
	return true;
}

void func_1396(int iParam0, Vector3 vParam1, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	Vector3 vVar3[24];
	char* sVar6;

	if (!func_141(iParam0))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 256 != 0 && func_114(0, 0, 1))
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 16 != 0)
	{
		return;
	}
	if (Global_1347702[iParam0 /*49*/].f_36 == 0)
	{
		return;
	}
	if (func_185((1 << 15)))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
	{
		return;
	}
	Global_1347702[iParam0 /*49*/].f_38 = func_621(iParam0);
	if (!bParam5 && func_1947(iParam0))
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[iParam0 /*49*/].f_38, func_1952(iParam0), Global_1347702[iParam0 /*49*/].f_18);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[iParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[iParam0 /*49*/].f_38, vParam1);
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
		{
			return;
		}
		MAP::SET_BLIP_SPRITE(Global_1347702[iParam0 /*49*/].f_37, Global_1347702[iParam0 /*49*/].f_36, true);
	}
	if (iParam0 == 61)
	{
		func_1975(8);
	}
	else if (iParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (iParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_SEAN"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (iParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (iParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (iParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if ((((iParam0 == 44 || iParam0 == 45) || iParam0 == 46) || iParam0 == 47) || iParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[iParam0 /*49*/].f_37, "BLIP_RCEXO");
	}
	func_1397(iParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[iParam0 /*49*/].f_37, 64, iParam0);
	if (func_112() == -1)
	{
		func_622(iParam0);
		iVar0 = func_623(Global_40.f_4283);
		if (func_47(iVar0) && func_549(Global_1888801[iVar0 /*35*/].f_13))
		{
			bVar1 = true;
			bVar2 = func_124(iVar0);
		}
		if (func_145(iParam0, bVar1, iVar0))
		{
			func_146(Global_1347702[iParam0 /*49*/].f_15, bVar2, bVar1, iVar0);
		}
	}
	if (bParam4)
	{
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 1 == 0)
	{
		func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 1);
		if (((!func_1947(iParam0) || func_520(Global_1347702[iParam0 /*49*/].f_12, 1)) || func_520(Global_1347702[iParam0 /*49*/].f_12, (1 << 9))) || func_142(Global_1347702[iParam0 /*49*/].f_13, (1 << 11)))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 15) == 0)
	{
		if ((Global_1347702[iParam0 /*49*/].f_36 == joaat("BLIP_RC") && Global_1347702[iParam0 /*49*/].f_12 & 1 == 0) && Global_1347702[iParam0 /*49*/].f_12 & 2 != 0)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		}
		else
		{
			func_1386(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 15));
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[iParam0] & 2 == 0)
	{
		if (func_1976(iParam0))
		{
			if (iParam0 == 97)
			{
				func_576(185, 0);
			}
			else
			{
				func_576(186, 1);
			}
		}
		else
		{
			MemCopy(&cVar3, {Global_1347702[iParam0 /*49*/].f_3}, 3);
			strcat_s(&cVar3, 24, "_FIRST");
			sVar6 = Global_1347702[iParam0 /*49*/].f_37;
			Global_1347702[iParam0 /*49*/].f_40 = func_220(MISC::VAR_STRING(2, &cVar3, sVar6), 10000, 0, 0, 0, 1);
		}
		func_1330(iParam0, 2);
	}
}

void func_1397(int iParam0)
{
	if (!func_1947(iParam0))
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[iParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
				}
				func_1386(&(Global_1347702[iParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37))
			{
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			}
			func_544(&(Global_1347702[iParam0 /*49*/].f_13), 32);
		}
	}
}

bool func_1398(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 15) != 0)
	{
		return true;
	}
	if (Global_1347702[iParam0 /*49*/].f_13 & 2 == 0)
	{
		return false;
	}
	if (!bParam3)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return true;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1347702[iParam0 /*49*/].f_29[iVar0] > -1 && Global_1347702[iParam0 /*49*/].f_29[iVar0] < 27)
		{
			if (Global_40.f_4942[Global_1347702[iParam0 /*49*/].f_29[iVar0] /*60*/].f_59 != 0)
			{
				if (Global_40.f_4942[Global_1347702[iParam0 /*49*/].f_29[iVar0] /*60*/].f_59 != Global_1347702[iParam0 /*49*/].f_15)
				{
					return false;
				}
			}
			else if (func_1977(Global_1347702[iParam0 /*49*/].f_29[iVar0], 16, 1))
			{
				if (iParam1 == 0)
				{
					return false;
				}
				else if (!func_1978(Global_1347702[iParam0 /*49*/].f_29[iVar0]))
				{
					return false;
				}
			}
			if (bParam4 && func_362(Global_1935630, (1 << 12)))
			{
			}
			else if (func_1412(Global_1347702[iParam0 /*49*/].f_29[iVar0], 44, 0) && iParam2 == 1)
			{
			}
			else if (!func_1980(func_1979(Global_1347702[iParam0 /*49*/].f_29[iVar0]), -1.0f, 10.0f, 1, 1, 40.0f))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

int func_1399(int iParam0)
{
	if (!func_127(iParam0))
	{
		return -1;
	}
	return func_1981(iParam0);
}

void func_1400(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_1610(iParam0, iParam1);
}

void func_1401(int iParam0, int iParam1)
{
	if (!func_127(iParam0))
	{
		return;
	}
	func_1609(iParam0, iParam1);
}

void func_1402(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;

	if (!func_141(iParam0))
	{
		return;
	}
	bVar0 = true;
	if (!bParam1)
	{
		bVar0 = MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37);
	}
	func_1350(&(Global_1347702[iParam0 /*49*/].f_14));
	func_1348(&(Global_1347702[iParam0 /*49*/].f_12), (1 << 14));
	func_544(&(Global_1347702[iParam0 /*49*/].f_13), (1 << 12));
	if (bVar0)
	{
		if (Global_1347702[iParam0 /*49*/].f_12 & (1 << 20) != 0 && Global_1347702[iParam0 /*49*/].f_13 & (1 << 11) == 0)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				func_1396(iParam0, func_1952(iParam0), 0, 0);
			}
		}
		else if (Global_1347702[iParam0 /*49*/].f_18 > -1.0f)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			MAP::REMOVE_BLIP(&(Global_1347702[iParam0 /*49*/].f_37));
			if (iParam2 == 1)
			{
				func_1396(iParam0, func_609(iParam0), 0, 0);
			}
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1347702[iParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
		}
	}
}

float func_1403(int iParam0)
{
	float fVar0;

	if (Global_1347702[iParam0 /*49*/].f_16 > 250.0f)
	{
		fVar0 = Global_1347702[iParam0 /*49*/].f_16;
	}
	else
	{
		fVar0 = 250.0f;
	}
	return fVar0;
}

bool func_1404(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 143:
			*iParam2 = joaat("TSTAG_VHT_ODD_FELLOWS_1_ACTIVE");
			*iParam1 = 14;
			return true;
		default:
			break;
	}
	*iParam2 = joaat("TSTAG_NO_TAGS");
	*iParam1 = -1;
	return false;
}

int func_1405(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_1899(iParam0))
	{
		return 0;
	}
	iVar2 = func_1982(iParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == iParam1)
		{
			if (func_1983(Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1, 1) > func_1983(iParam3, 1))
			{
				return 1;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_538();
				func_823(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			func_1984(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] == joaat("TSTAG_NO_TAGS"))
		{
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/] = iParam1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_2 = iParam2;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_538();
				func_823(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_4 = iVar1;
			Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 = iVar2;
			func_1984(iParam0, iParam1, 1);
			Global_1935183.f_24 = 1;
			if (func_1985(iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 5)
				{
					if (Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/].f_3 == iVar2 && Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] != iParam1)
					{
						if ((Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON") || Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/] == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")) && (iParam1 == joaat("TSTAG_LOCKDOWN_SALOON") || iParam1 == joaat("TSTAG_LOCKDOWN_SALOON_SLUMS")))
						{
							return 0;
						}
						func_1986(iParam0, &(Global_40.f_11206[iParam0 /*26*/][iVar3 /*5*/]));
					}
					iVar3++;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1406(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_1407(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_1112(Global_1347702[iParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[iParam0 /*49*/].f_18 = 80.0f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f /*3*/ };
			return true;
		}
	}
	else if (iParam0 == 96)
	{
		if (Global_1347702[iParam0 /*49*/].f_13 & (1 << 16) != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f /*3*/ };
			return true;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f /*3*/ };
			return true;
		}
	}
	return false;
}

bool func_1408(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (fParam1 <= (func_1987(iParam0) * func_1987(iParam0)))
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_1347702[iParam0 /*49*/].f_21))
		{
			iVar0 = ITEMSET::GET_ITEMSET_SIZE(Global_1347702[iParam0 /*49*/].f_21);
			if (iVar0 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar0)
				{
					iVar4 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1347702[iParam0 /*49*/].f_21);
					iVar5 = iVar4;
					if (ENTITY::DOES_ENTITY_EXIST(iVar5))
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar5))
						{
							iVar1++;
							iVar6 = iVar5;
							if (ENTITY::IS_ENTITY_DEAD(iVar6))
							{
							}
							else
							{
								if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar6))
								{
									PED::REQUEST_PED_VISIBILITY_TRACKING(iVar6);
								}
								if (!PED::IS_TRACKED_PED_VISIBLE(iVar6))
								{
								}
								else
								{
									bVar3 = true;
								}
								else
								{
									iVar2++;
								}
								if (iVar1 > 0)
								{
									if (!bVar3)
									{
										return false;
									}
								}
								iVar2 = 0;
								while (iVar2 < iVar0)
								{
									iVar7 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, Global_1347702[iParam0 /*49*/].f_21);
									iVar8 = iVar7;
									if (((ENTITY::DOES_ENTITY_EXIST(iVar8) && ENTITY::IS_ENTITY_A_PED(iVar8)) && !ENTITY::IS_ENTITY_DEAD(iVar8)) && PED::_IS_PED_VISIBILITY_TRACKED(iVar8))
									{
										PED::RELEASE_PED_VISIBILITY_TRACKING(iVar8);
									}
									iVar2++;
								}
								return true;
								Jump @310; // curOff = 292
								if (fParam1 < 10.0f)
								{
									return true;
								}
								Jump @317; // curOff = 310
								return true;
								return false;
							}
						}
					}
				}
			}
		}
	}
}

int func_1409(int iParam0)
{
	int iVar0;

	if (func_377(iParam0) == 11)
	{
		iVar0 = func_1172(func_585(iParam0), 1);
		return iVar0;
	}
	return -589165916;
}

bool func_1410(int iParam0)
{
	return func_1977(iParam0, 16, 1);
}

bool func_1411(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1541(iParam0))
	{
		return false;
	}
	if (!func_1410(iParam0))
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(iParam1, bParam2))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == iParam1;
}

bool func_1412(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_955(iParam0))
		{
			return false;
		}
	}
	func_1988(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

bool func_1413()
{
	return Global_1935436 == 2;
}

bool func_1414(var uParam0)
{
	return func_1989(&(uParam0->f_17), CLOCK::GET_CLOCK_HOURS());
}

Vector3 func_1415(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if (iParam0 & (1 << 30) == 0)
	{
		vVar0.x *= -1.0f;
	}
	if (iParam0 & (1 << 31) == 0)
	{
		vVar0.f_1 = (vVar0.y * -1.0f);
	}
	return vVar0;
}

void func_1416(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

bool func_1417(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_1418(int iParam0)
{
	if (!func_753(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0 /*8*/].f_4 > 0;
}

int func_1419(int iParam0)
{
	if (func_753(iParam0))
	{
		return Global_17504.f_42[iParam0 /*8*/].f_4;
	}
	return 0;
}

int func_1420(int iParam0)
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

void func_1421(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_1990(iParam0, bParam3, BUILTIN::ROUND((fVar0 * fParam2)), BUILTIN::ROUND((fVar1 * fParam2)), BUILTIN::ROUND((fVar2 * fParam2)), BUILTIN::ROUND((fVar3 * fParam2)), bParam4, 1);
}

void func_1422(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, iVar0, func_1991(iVar0));
		iVar0++;
	}
}

int func_1423(var uParam0, int iParam1)
{
	int iVar0;

	uParam0->f_2 = iParam1;
	iVar0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(uParam0);
	return iVar0;
}

bool func_1424(var uParam0, int iParam1)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(uParam0->f_1), uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_1425(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_1426(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_1427(bool bParam0, int iParam1)
{
	switch (bParam0)
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

bool func_1428(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1429(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_1430(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_1431(struct<4> /*32*/ sParam0)
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
			if (func_1992(sParam0.f_0))
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
			func_1993(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_1430(8);
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
			if (func_1992(sParam0.f_0))
			{
				return;
			}
			func_1993(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_1430(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1994(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

bool func_1432(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_1433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1365886708;
		case 1:
			return 1194047085;
		case 2:
			return 1338707734;
		case 3:
			return -960512622;
		case 4:
			return 542908935;
		case 5:
			return 745343560;
		case 6:
			return -289814040;
		default:
			break;
	}
	return 0;
}

int func_1434(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("BASE");
		case 1:
			return -1377050186;
		case 2:
			return 1651434382;
		case 3:
			return 464173103;
		case 4:
			return 1098311904;
		case 5:
			return 1987040038;
		case 6:
			return -538025380;
		default:
			break;
	}
	return 0;
}

bool func_1435(bool bParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (bParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_1436(int iParam0)
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

int func_1437(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_1438(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> /*16*/ sVar8;

	iVar0 = func_1995();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_1996(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 -= DECORATOR::DECOR_GET_INT(iParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1.0f;
	if (func_663(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_679())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL(((float)iParam0 * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(((float)iParam0 * fVar4));
	}
	Global_40.f_11095.f_35 += iVar5;
	Global_40.f_11095.f_35 = func_1997(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1995();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_1998(iVar1);
		func_2000(func_1999(), 0, 4000);
		func_2001(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_2002(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_2003(func_375(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_1437(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_2004(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1486(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1486(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_2003(func_375(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_1437(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = func_2004(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_1486(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_1486(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_375(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_1317(10, 1);
	}
}

void func_1439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

bool func_1440()
{
	return func_968((1 << 15));
}

void func_1441(var uParam0, var uParam1)
{
	float fVar0;

	fVar0 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
	*uParam0 = 0;
	*uParam1 = 0;
	if (fVar0 >= 24.0f)
	{
		*uParam1 = 1;
	}
	else if (fVar0 <= 0.0f)
	{
		*uParam0 = 1;
	}
	if (func_2005())
	{
		*uParam0 = 0;
	}
}

bool func_1442()
{
	int iVar0;

	iVar0 = func_2006();
	return (iVar0 == 0 || iVar0 == 3);
}

bool func_1443()
{
	int iVar0;

	iVar0 = func_2006();
	return (iVar0 == 2 || iVar0 == 3);
}

void func_1444(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_1445(bool bParam0)
{
	if (func_112() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_576(89, 1);
		ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	else
	{
		func_576(90, 1);
		ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
	}
	func_2007(1, bParam0, 1);
	func_1470();
	Global_40.f_11095.f_43 = bParam0;
}

void func_1446(float fParam0)
{
	if (func_690(1) < fParam0)
	{
		func_696(1, fParam0, 0);
	}
	if (func_690(2) < fParam0)
	{
		func_696(2, fParam0, 0);
	}
	if (func_690(0) < fParam0)
	{
		func_696(0, fParam0, 0);
	}
}

float func_1447(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

void func_1448(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_1451(iParam0, fParam1, 1);
	}
	func_2009(iParam0, (func_2008(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_1449(float fParam0)
{
	if (fParam0 >= (100.0f - 1.0f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_1450()
{
	Global_40.f_11095.f_11[14] = 100.0f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_1451(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_538();
	func_1039(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_2010(iParam0, 2);
	if (func_956(iVar0, func_2011(iParam0, 2), 1))
	{
		func_2012(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_576(88, bParam2);
		return 0.0f;
	}
	func_2013(iParam0, func_538(), 2);
	func_2012(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_1452(float fParam0, float fParam1, float fParam2)
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

bool func_1453()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_1454()
{
	float fVar0;
	int iVar1;

	fVar0 = func_1447(13);
	iVar1 = func_2014(fVar0);
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

float func_1455()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_1456()
{
	if (func_1090())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_1457()
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

void func_1458(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_2015(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_1459(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_2015(iParam0, 2, 0, 0);
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

int func_1460(int iParam0)
{
	float fVar0;

	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200.0f);
	return BUILTIN::CEIL((100.0f * fVar0));
}

int func_1461(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1462(int iParam0)
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

void func_1463(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_2015(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

int func_1464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		case 1:
			return 85;
		case 2:
			return 86;
		default:
			break;
	}
	return -1;
}

char* func_1465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

bool func_1466()
{
	if (func_112() != -1)
	{
		return false;
	}
	if (Global_1347477.f_200)
	{
		return false;
	}
	if (Global_1347477.f_195 == -15)
	{
		return true;
	}
	return func_793(Global_1347477.f_195, 0);
}

void func_1467(var uParam0, var uParam1)
{
	if (!func_529())
	{
		*uParam0 = -100.0f;
		*uParam1 = 100.0f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_1468(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_7, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_9, sParam3);
}

void func_1469(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_2015(0, 1, bParam0, bParam1);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[1], bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], false);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[1], "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[1], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[1], true);
	}
}

void func_1470()
{
	func_699();
	func_698();
	func_695();
}

void func_1471(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_4, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_3, bParam2);
}

void func_1472(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = func_2016(iParam0);
	sVar0 = MISC::VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[0], sVar0);
	bVar1 = (iParam0 > -10 && iParam0 < 10);
	bVar2 = iParam0 <= -10;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[0], !bVar1);
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[0], false);
	}
	else if (bVar2)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[0], "rpg_underweight");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[0], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[0], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[0], "rpg_overweight");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[0], "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[0], true);
	}
}

void func_1473()
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

void func_1474()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

bool func_1475()
{
	if (Global_1347477.f_184 != Global_40.f_11095.f_67)
	{
		return true;
	}
	if (Global_1347477.f_188)
	{
		return true;
	}
	if ((Global_40.f_11095.f_67 > 2 && !Global_43891) && Global_1347477.f_186 != Global_1347477.f_185)
	{
		return true;
	}
	return false;
}

void func_1476(int iParam0)
{
	Global_1347477.f_186 = iParam0;
}

int func_1477(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_112() != -1)
	{
		return 0;
	}
	func_2017();
	iVar2 = 0;
	iVar3 = 2;
	iVar4 = 8;
	iVar5 = 9;
	if (!func_2018(&(Global_1946054.f_1378), &uVar1, bParam1, -1, 0, 0))
	{
		return 0;
	}
	Global_1946054.f_1497.f_1[iVar2 /*3*/] = { Global_1946054.f_1378.f_1[iVar2 /*3*/] /*3*/ };
	Global_1946054.f_1497.f_1[iVar3 /*3*/] = { Global_1946054.f_1378.f_1[iVar3 /*3*/] /*3*/ };
	Global_1946054.f_1497.f_1[iVar4 /*3*/] = { Global_1946054.f_1378.f_1[iVar4 /*3*/] /*3*/ };
	Global_1946054.f_1497.f_1[iVar5 /*3*/] = { Global_1946054.f_1378.f_1[iVar5 /*3*/] /*3*/ };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_2019(&(Global_1946054.f_1497.f_1[iVar2 /*3*/]), iVar2, iVar0);
		func_2019(&(Global_1946054.f_1497.f_1[iVar3 /*3*/]), iVar3, iVar0);
		func_2019(&(Global_1946054.f_1497.f_1[iVar4 /*3*/]), iVar4, iVar0);
		func_2019(&(Global_1946054.f_1497.f_1[iVar5 /*3*/]), iVar5, iVar0);
		iVar0++;
	}
	if (bParam2)
	{
		func_2020(iVar2, 0);
		func_2020(iVar3, 0);
		func_2020(iVar4, 0);
		func_2020(iVar5, 0);
		func_664(19, 0, 66, 0, 0);
	}
	else
	{
		PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, Global_1946054.f_1497.f_1[iVar2 /*3*/], false, false, false);
		PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, Global_1946054.f_1497.f_1[iVar3 /*3*/], false, false, false);
		PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, Global_1946054.f_1497.f_1[iVar4 /*3*/], false, false, false);
		PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, Global_1946054.f_1497.f_1[iVar5 /*3*/], false, false, false);
	}
	Global_1347477.f_185 = bParam1;
	func_2021(0);
	return 1;
}

void func_1478(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_11, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_10, bParam2);
}

int func_1479(int iParam0)
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

float func_1480(int iParam0)
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
			return func_2022(iParam0);
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
			return func_2022(iParam0);
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
			return func_2022(iParam0);
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

bool func_1481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_663(18);
		case 2:
			return func_663(20);
		case 1:
			return func_663(19);
		default:
			break;
	}
	return true;
}

int func_1482(int iParam0)
{
	return func_2023(Global_40.f_11095.f_11[iParam0]);
}

void func_1483(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_112() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_663(31))
	{
		return;
	}
	iVar0 = func_1482(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1482(iParam0);
	if (func_2024(iParam0) & func_2025(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2026(fVar1, fParam1);
			if (fParam1 > (float)func_2027(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_576(func_2028(iParam0), 0);
					}
					func_2029(iParam0, iVar2, iVar3);
					func_1444(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_1484(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1485(int iParam0)
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

int func_1486(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_2030(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_1487()
{
	return Global_1109000.f_245;
}

void func_1488(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_2031(func_538(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

int func_1489(int iParam0)
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
	else if (iParam0 <= 115)
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

int func_1490(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
		case 4:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_663(45))
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			else
			{
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			}
			break;
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
		case 8:
			return joaat("LAW_REGION_GUAMA");
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
		case 12:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_663(45))
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			else
			{
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_112() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_663(45))
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			else
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			}
			break;
	}
	return 0;
}

int func_1491(int iParam0)
{
	if (!func_47(iParam0))
	{
		return 0;
	}
	return Global_1888801[iParam0 /*35*/].f_20;
}

void func_1492(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_2 = iParam1;
}

void func_1493(int iParam0)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (func_715(iParam0))
	{
		func_1782(iParam0);
	}
	else
	{
		func_2032(iParam0);
	}
}

int func_1494(int iParam0)
{
	if (!func_47(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/].f_1;
	}
	return Global_1058888.f_40545[iParam0 /*11*/].f_1;
}

int func_1495(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_47(iParam0))
	{
		return 0;
	}
	iVar0 = func_2033(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_717(func_1494(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_1496(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1058888.f_40545[iParam0 /*11*/].f_1 = iParam1;
}

void func_1497(int iParam0, int iParam1)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_23118[iParam0 /*11*/].f_3 = iParam1;
}

void func_1498(int iParam0)
{
	if (!func_47(iParam0))
	{
		return;
	}
	if (func_723(iParam0) && func_722(iParam0))
	{
		func_1781(func_1780(iParam0));
	}
	else
	{
		func_2034(func_1780(iParam0));
	}
}

bool func_1499(int iParam0, bool bParam1)
{
	if (!func_675(iParam0))
	{
		return false;
	}
	if (func_740(iParam0, 1) || (bParam1 && func_740(iParam0, 2)))
	{
		return true;
	}
	return false;
}

bool func_1500(int iParam0, bool bParam1)
{
	if (!func_480(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_2035(iParam0, 8))
		{
			return false;
		}
	}
	if (func_2035(iParam0, 1))
	{
		return true;
	}
	return false;
}

bool func_1501()
{
	int iVar0;

	iVar0 = func_739();
	if (!func_675(iVar0))
	{
		return false;
	}
	if (func_587(Global_40.f_358[iVar0 /*12*/].f_1) || Global_40.f_358[iVar0 /*12*/].f_4 < 1.0f)
	{
		return false;
	}
	if (func_2036(Global_35, Global_40.f_358[iVar0 /*12*/].f_1, (Global_40.f_358[iVar0 /*12*/].f_4 + 10.0f), 1, 1))
	{
		return true;
	}
	return false;
}

int func_1502(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar0 = "region_law_town_mob";
			break;
		case 2:
			iVar0 = "region_law_patrol_creator";
			break;
		case 3:
			iVar0 = "region_law_roadblock_creator";
			break;
		case 4:
			iVar0 = "region_law_w_eliz_pinks";
			break;
		case 6:
			iVar0 = "region_law_bloodhound";
			break;
		case 7:
			iVar0 = "region_law_VAL_belltower_sniper";
			break;
		case 8:
			iVar0 = "region_law_RHO_law_swarm";
			break;
		case 9:
			iVar0 = "region_law_guama_fussar";
			break;
	}
	return iVar0;
}

int func_1503(int iParam0)
{
	if (!func_675(iParam0))
	{
		return 0;
	}
	if (func_740(iParam0, 2))
	{
		return 5;
	}
	if (func_720(iParam0) > 0 && PLAYER::GET_WANTED_LEVEL_THRESHOLD(5) > 0)
	{
		return func_2037(func_720(iParam0));
	}
	return 0;
}

void func_1504(int iParam0, int iParam1)
{
	*iParam0 -= *iParam0 & iParam1;
}

void func_1505(int iParam0)
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

void func_1506(int iParam0)
{
	bool bVar0;

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
			func_2038(1);
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
			func_2039(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_2039(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_2039(3);
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
			func_2040(1);
			break;
		case 34:
			func_2041(1);
			break;
		case 35:
			func_2042(1);
			break;
		case 36:
			break;
		case 37:
			func_2043(0);
			break;
		case 38:
			func_2044(0);
			break;
		case 39:
			func_2045(0);
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
			if ((!Global_1879534 && func_529()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1015("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_576(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_529()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1015("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_576(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_529()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1015("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_576(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_529()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1015("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_576(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_112() == -1)
			{
				if (!func_2046(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_2047(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_679())
					{
						bVar0 = -1515874150;
					}
					else
					{
						bVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_1267(bVar0, 1, 0))
					{
						func_2048(bVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_2049(Global_35, bVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_112() == -1)
			{
				if (!func_1267(1013902307, 1, 0))
				{
					func_2048(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_112() == -1)
			{
				if (!func_1267(1013902307, 1, 0))
				{
					func_2048(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_1267(142640135, 1, 0))
				{
					func_2048(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_112() == -1)
			{
				if (!func_1267(786809402, 1, 0))
				{
					func_2048(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_112() == -1)
			{
				if (!func_1267(786809402, 1, 0))
				{
					func_2048(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_1267(-518019409, 1, 0))
				{
					func_2048(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_2050();
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

bool func_1507(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (!func_675(iParam0))
	{
		return false;
	}
	sVar0 = -1;
	sVar0.f_4 = -15;
	func_2051(iParam0, &sVar0);
	return func_2052(&sVar0);
}

bool func_1508(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (!func_675(iParam0))
	{
		return false;
	}
	sVar0 = -1;
	sVar0.f_4 = -15;
	func_2051(iParam0, &sVar0);
	return func_2053(&sVar0);
}

void func_1509(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;

	if (!func_675(iParam0))
	{
		return;
	}
	sVar0 = -1;
	sVar0.f_4 = -15;
	func_2051(iParam0, &sVar0);
	func_2054(&sVar0, bParam1);
	func_2055(iParam0, &sVar0);
}

void func_1510(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_1511(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1197() - fParam1);
	func_1640(uParam0, 1);
	func_1641(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

void func_1512()
{
	Global_1310750.f_16077 = 0;
	Global_1310750.f_16071 = -1;
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(false);
	}
}

int func_1513(int iParam0)
{
	return Global_1310750[iParam0 /*111*/].f_39;
}

void func_1514(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam0 * 1000;
	if ((iVar0 + MISC::GET_GAME_TIMER()) > Global_1327479.f_4)
	{
		func_1534(iParam0, iParam1, bParam2);
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

int func_1515(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		iVar0 = func_2056(1, 0, 0);
	}
	else
	{
		iVar0 = func_46();
	}
	return func_2057(iVar0);
}

int func_1516(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = 0;
	uVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = BUILTIN::SHIFT_RIGHT(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

void func_1517(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

bool func_1518(int iParam0)
{
	if (!func_753(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

bool func_1519(int iParam0)
{
	return func_748(iParam0, Global_1310750.f_16072 | 64);
}

bool func_1520(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = Global_1935630.f_11;
	if (func_1527(iParam0) == 1)
	{
		return true;
	}
	if (func_765(iParam0, (1 << 14)))
	{
		if (func_2058())
		{
			return false;
		}
	}
	if (iParam1 & 128 != 0)
	{
		if (bVar0)
		{
			return false;
		}
		if (func_2059(Global_36))
		{
			return false;
		}
	}
	if (iParam1 & (1 << 31) != 0)
	{
		if (func_2060(32) > 0)
		{
			return false;
		}
	}
	if (iParam1 & 32 != 0)
	{
		if (func_2060((1 << 31)) > 0)
		{
			return false;
		}
	}
	if (!func_765(iParam0, (1 << 20)))
	{
		if (func_2061(1))
		{
			return false;
		}
	}
	if ((((iParam1 & (1 << 22) != 0 && Global_17504.f_5 != -1) && func_2062()) && !func_2063()) && !func_2064())
	{
		if (func_748(Global_17504.f_5, (1 << 22)))
		{
			return false;
		}
	}
	if ((((iParam1 & (1 << 29) != 0 && Global_17504.f_6 != -1) && func_2065()) && !func_2063()) && !func_2064())
	{
		if (func_748(Global_17504.f_6, (1 << 29)))
		{
			return false;
		}
	}
	if (func_679())
	{
		if (iParam1 & (1 << 15) != 0)
		{
			return false;
		}
	}
	else if (iParam1 & (1 << 16) != 0)
	{
		return false;
	}
	return true;
}

void func_1521(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	switch (func_2066(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*uParam1 = 225.0f;
				*uParam2 = 6400.0f;
			}
			else
			{
				*uParam1 = 225.0f;
				*uParam2 = 4900.0f;
			}
			*uParam3 = 2500;
			break;
		case 1:
			if (!func_748(iParam0, 1))
			{
				if (func_765(iParam0, 2))
				{
				}
			}
			func_2067(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 *= *uParam1;
			*uParam2 *= *uParam2;
			*uParam3 *= *uParam3;
			break;
		case 2:
			func_2068(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 *= *uParam1;
			*uParam2 *= *uParam2;
			*uParam3 *= *uParam3;
			break;
		case 3:
			func_2068(uParam1, uParam2, uParam3, iParam0, bParam4);
			*uParam1 = 7.0f;
			*uParam2 *= *uParam2;
			*uParam3 *= *uParam3;
			break;
		default:
			break;
	}
	if (func_1522(iParam0))
	{
		*uParam2 = 40000.0f;
	}
}

bool func_1522(int iParam0)
{
	if (func_748(iParam0, 1))
	{
		return false;
	}
	return (1 == func_1527(iParam0) || 2 == func_1527(iParam0));
}

bool func_1523(int iParam0, float fParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < func_2069(iParam0))
	{
		vVar1 = { func_2070(iParam0, iVar0) /*3*/ };
		if (!func_587(vVar1))
		{
			if (!bParam5 || !func_2071(iParam0, iVar0))
			{
				if (bParam7)
				{
					fVar4 = func_1032(Global_36, vVar1);
				}
				else
				{
					fVar4 = func_503(Global_36, vVar1);
				}
				if (fVar4 > fParam1 || (!func_2072(Global_35, vVar1, iParam4) && bParam3))
				{
					if (iVar5 != 18 && iVar5 != 19)
					{
						iVar5 = 17;
					}
				}
				else if (fVar4 < fParam6)
				{
					iVar5 = 18;
				}
				else if (func_1036(vVar1, 0, 0, 0))
				{
					iVar5 = 19;
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	*uParam2 = iVar5;
	return false;
}

int func_1524(int iParam0)
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

bool func_1525(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[0];
		case 0:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[1];
		case 2:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[3];
		case 1:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[4];
		case 4:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[8];
		case 5:
			return func_2073(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[13];
	}
	return false;
}

bool func_1526(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1516(iParam1);
	iVar1 = (17 + iVar0);
	return func_2074(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[iVar1];
}

int func_1527(int iParam0)
{
	return Global_17504.f_42[iParam0 /*8*/].f_5;
}

bool func_1528(int iParam0)
{
	if (iParam0 & 32 != 0)
	{
		if (func_2060(32) >= 2)
		{
			return true;
		}
	}
	if (iParam0 & 128 != 0)
	{
		if (func_2060(128) >= 1)
		{
			return true;
		}
	}
	if (iParam0 & 4 != 0)
	{
		if (func_2060(4) >= 2)
		{
			return true;
		}
	}
	return false;
}

bool func_1529(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1310750[iParam0 /*111*/].f_4;
	iVar1 = Global_1310750[iParam0 /*111*/].f_4.f_2;
	if (iVar0 != -1)
	{
		if (!func_154(iVar0))
		{
			return false;
		}
	}
	if (iVar1 != -1)
	{
		if (!func_447(Global_1347702[iVar1 /*49*/].f_15, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_1530(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_765(iParam0, (1 << 17)) && func_679())
	{
		return false;
	}
	iVar0 = Global_1310750[iParam0 /*111*/].f_4.f_1;
	iVar1 = Global_1310750[iParam0 /*111*/].f_4.f_3;
	if (iVar0 != -1)
	{
		if (func_154(iVar0))
		{
			return true;
		}
	}
	if (iVar1 != -1)
	{
		if (func_447(Global_1347702[iVar1 /*49*/].f_15, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_1531(int iParam0)
{
	var uVar0;
	var uVar1;
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
	MISC::GET_CURR_WEATHER_STATE(&uVar0, &uVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = uVar0;
	}
	else
	{
		iVar3 = uVar1;
	}
	if (iParam0 & 1 == 1 && func_2075(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_2076(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_2077(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_2078(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_2079(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_2080(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_2081(iVar3))
	{
		return true;
	}
	return false;
}

bool func_1532(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	iVar0 = func_479();
	switch (iParam0)
	{
		case 0:
			if (func_2082(0, iVar0) > 0)
			{
				if (((iVar0 == 4 || iVar0 == 7) || iVar0 == 9) || iVar0 == 10)
				{
					return false;
				}
			}
			return true;
		case 2:
			if (func_734(11) && func_479() == 1)
			{
				return false;
			}
			if (func_388() && func_479() == 4)
			{
				return false;
			}
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 3:
			if (func_2083(2) || func_2084(2))
			{
				return false;
			}
			return true;
		case 76:
			if (func_370(19))
			{
				return false;
			}
			else if (!func_1224(115, -1, 0))
			{
				return false;
			}
			if (func_370(68) && !func_154(59))
			{
				return false;
			}
			return true;
		case 6:
			if (iVar0 == -1)
			{
				return false;
			}
			if (iVar0 == 8)
			{
				if (func_151(39))
				{
					return false;
				}
			}
			else if (!func_2085(joaat("WEAPON_SHOTGUN_DOUBLEBARREL")))
			{
				return false;
			}
			return true;
		case 7:
			if (func_388())
			{
				if (!func_154(7))
				{
					return false;
				}
			}
			else if (func_679())
			{
				if (!func_154(69))
				{
					return false;
				}
			}
			return true;
		case 31:
			if (func_657() || func_2086())
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 10:
			if (!func_679() && (func_2087(10, 0) == 2 || func_2087(10, 0) == 1))
			{
				return false;
			}
			if (func_679() && ((func_2087(10, 1) == 2 || func_2087(10, 0) == 1) || func_2087(10, 1) == 1))
			{
				return false;
			}
			return true;
		case 11:
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				return false;
			}
			if (func_2083(2) || func_2084(2))
			{
				return false;
			}
			return true;
		case 12:
			if (func_2088(12) < 3)
			{
				switch (func_479())
				{
					case 4:
					case 12:
						if (((!func_2083(3) && !func_154(75)) && func_2089(12, 1) != 2) && func_679())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 1:
					case 3:
					case 9:
						if (((!func_2083(0) && func_2089(12, 0) != 1) && !func_370(65)) && func_388())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
					case 13:
					case 14:
					case 15:
					case 16:
						if ((!func_2083(5) && func_2089(12, 2) != 3) && func_679())
						{
							return true;
						}
						else
						{
							return false;
						}
						break;
				}
			}
			break;
		case 79:
			if (func_2088(4) == 0 && func_2088(45) == 0)
			{
				return false;
			}
			switch (func_46())
			{
				case 76:
					if ((func_2089(45, 0) == 5 || func_2089(45, 0) == 6) && func_2089(45, 5) == 1)
					{
						if ((!func_679() && func_2089(45, 3) == 1) || (func_679() && func_2089(45, 3) == 2))
						{
							if (func_2090(45, 0) == 3)
							{
								return false;
							}
							else if (func_2091(45, 0, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 26:
					if (func_2089(4, 1) == 1)
					{
						if ((!func_679() && func_2089(4, 4) == 1) || (func_679() && func_2089(4, 4) == 2))
						{
							if (func_2090(4, 1) == 3)
							{
								return false;
							}
							else if (func_2091(4, 1, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 105:
					if ((func_2089(45, 2) == 5 || func_2089(45, 2) == 6) && func_2089(45, 6) == 1)
					{
						if ((!func_679() && func_2089(45, 4) == 1) || (func_679() && func_2089(45, 4) == 2))
						{
							if (func_2090(45, 2) == 3)
							{
								return false;
							}
							else if (func_2091(45, 2, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
				case 78:
					if (func_2089(4, 0) == 1)
					{
						if ((!func_679() && func_2089(4, 3) == 1) || (func_679() && func_2089(4, 3) == 2))
						{
							if (func_2090(4, 0) == 3)
							{
								return false;
							}
							else if (func_2091(4, 0, 1, 6))
							{
								if (func_2092())
								{
									return true;
								}
								else
								{
									return false;
								}
							}
							else
							{
								return false;
							}
						}
					}
					break;
			}
			return false;
		case 82:
			if (func_1061(0))
			{
				if (func_46() == 5 && func_2089(82, 0) == 1)
				{
					return false;
				}
				if (func_46() == 38 && func_2089(82, 1) == 1)
				{
					return false;
				}
			}
			return true;
		case 83:
			if (func_2093(75) <= 0)
			{
				return false;
			}
			if (func_2094())
			{
				return false;
			}
			return true;
		case 84:
			if (func_1215(76, 1, 0))
			{
				return false;
			}
			if (func_1875(func_1251(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
			{
				return false;
			}
			if (func_903(117, 0) || func_903(118, 0))
			{
				return false;
			}
			if (func_2088(84) >= 2)
			{
				return false;
			}
			if (func_2087(84, 0) == 2 || func_2087(84, 1) == 2)
			{
				return false;
			}
			if (func_2087(84, 0) == 3 || func_2087(84, 1) == 3)
			{
				return false;
			}
			if (func_2089(84, 2) == 1 && func_679())
			{
				return false;
			}
			if (func_388())
			{
				if (!func_154(7))
				{
					return false;
				}
			}
			if (func_151(69))
			{
				return false;
			}
			else if (func_151(9))
			{
				return false;
			}
			else if (func_151(5))
			{
				return false;
			}
			return true;
		case 15:
			if (func_2089(15, 0) >= 1)
			{
				return false;
			}
			if (func_2090(15, 1) >= 3)
			{
				return false;
			}
			if (func_2089(15, 2) >= 1)
			{
				return false;
			}
			return true;
		case 86:
			if (func_46() != 78 && func_154(26))
			{
				return false;
			}
			return true;
		case 87:
			if (func_679())
			{
			}
			else if (func_2088(87) >= 2)
			{
				return false;
			}
			return true;
		case 16:
			if (func_2088(16) > 0)
			{
				return false;
			}
			if (!func_1267(joaat("CONSUMABLE_WHISKEY"), 1, 0))
			{
				return false;
			}
			return true;
		case 90:
			iVar2 = func_46();
			iVar3 = func_1232(func_2095(904), 1);
			if (iVar2 == 92 && iVar3 == 92)
			{
				return false;
			}
			if (func_2096() == 0)
			{
				return false;
			}
			return true;
		case 89:
			iVar4 = func_46();
			if (func_1215(iVar4, 1, 0))
			{
				return false;
			}
			if (func_2096() == 0)
			{
				return false;
			}
			if (func_2093(101) >= 1)
			{
				return true;
			}
			return false;
		case 88:
			iVar5 = func_46();
			if (func_1215(iVar5, 1, 0))
			{
				return false;
			}
			if (iVar5 == 76)
			{
				if (func_151(69))
				{
					return false;
				}
				else if (func_151(9))
				{
					return false;
				}
				else if (func_151(5))
				{
					return false;
				}
				else if (func_903(117, 0))
				{
					return false;
				}
				else if (func_903(118, 0))
				{
					return false;
				}
				if (func_2097(5))
				{
					return false;
				}
			}
			iVar6 = func_1232(func_2095(904), 1);
			if (iVar5 == 92)
			{
				if (iVar6 == 92)
				{
					return false;
				}
				if (func_2097(8))
				{
					return false;
				}
			}
			if (func_2096() == 0)
			{
				return false;
			}
			return true;
		case 17:
			if (func_734(56))
			{
				return false;
			}
			if (func_479() == 11 || func_479() == 0)
			{
				if (func_723(3) || func_715(3))
				{
					return false;
				}
			}
			else if (func_723(69) || func_715(69))
			{
				return false;
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::IS_PED_CARRYING_SOMETHING(Global_1935630.f_40))
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			return true;
		case 18:
			if (func_2083(2))
			{
				return false;
			}
			return true;
		case 91:
			if (func_2093(75) <= 0)
			{
				return false;
			}
			return true;
		case 92:
			switch (func_479())
			{
				case 11:
					if (func_2083(2) || func_2084(2))
					{
						return false;
					}
					if (func_152(30))
					{
						return false;
					}
					return true;
				case 1:
				case 3:
				case 9:
					if (func_2083(0))
					{
						return false;
					}
					return true;
			}
			return true;
		case 20:
			if (func_151(13))
			{
				return false;
			}
			return true;
		case 23:
			if (func_2098() == 0)
			{
				return true;
			}
			return false;
		case 94:
			iVar7 = func_46();
			switch (iVar7)
			{
				case 26:
				case 76:
					if (func_2083(0))
					{
						return false;
					}
					if (!func_149(76, (1 << 11)))
					{
						return false;
					}
					if (func_2099(99))
					{
						return false;
					}
					break;
				case 5:
				case 105:
					if (func_2099(96))
					{
						return false;
					}
					if (func_2099(77))
					{
						return false;
					}
					break;
			}
			return true;
		case 119:
			if (!func_370(152))
			{
				return false;
			}
			if (func_2100())
			{
				return false;
			}
			if (func_2101(iVar0))
			{
				return true;
			}
			break;
		case 27:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			else
			{
				if (func_2090(27, 0) == 3)
				{
					return false;
				}
				if (func_2090(27, 1) == 3)
				{
					return false;
				}
				if (func_2090(27, 2) == 3)
				{
					return false;
				}
				if (func_2089(27, 0) >= 3)
				{
					return false;
				}
				if (func_2089(27, 1) >= 3)
				{
					return false;
				}
				if (func_2089(27, 2) >= 3)
				{
					return false;
				}
				if (ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 4) < 2 && ATTRIBUTE::GET_ATTRIBUTE_RANK(PED::GET_MOUNT(Global_35), 5) < 2)
				{
					return false;
				}
				if (func_2102(7) < 3)
				{
					return false;
				}
				if (func_479() == 3 || func_479() == 6)
				{
					if (func_154(56) && !func_154(60))
					{
						return false;
					}
				}
				if (func_479() == 11)
				{
					if (func_154(26) && !func_154(28))
					{
						return false;
					}
				}
				return true;
			}
			break;
		case 95:
			if (func_2083(2))
			{
				return false;
			}
			return true;
		case 30:
			switch (func_479())
			{
				case 0:
				case 2:
					if (func_715(5) || func_723(5))
					{
						return false;
					}
					if (func_154(44))
					{
						if (!func_154(45) && !func_370(24))
						{
							if (func_2082(30, 2) == 0 && func_2082(30, 0) == 0)
							{
								return false;
							}
						}
					}
					if (func_2103(0, 39))
					{
						return false;
					}
					if (func_2104(0))
					{
						return false;
					}
					if (func_2105(39))
					{
						return false;
					}
					if (func_2106(0, 39, &uVar8))
					{
						return false;
					}
					return true;
			}
			return true;
		case 32:
			if (func_2088(34) > 0 && func_2088(33) > 0)
			{
				if (func_2088(32) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 33:
			if (func_2087(33, 0) == 16)
			{
				return false;
			}
			else if (func_479() == 1 && func_745(Global_35, -1374.053f, -741.9763f, 90.7132f, 1) < 200.0f)
			{
				if (func_903(49, 0))
				{
					return false;
				}
				if (func_903(101, 0))
				{
					return false;
				}
			}
			else
			{
				return true;
			}
			return true;
		case 34:
			if (func_2088(33) > 0)
			{
				if (func_2088(34) == 0)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
			break;
		case 37:
			switch (func_1524(func_479()))
			{
				case 1:
					if (func_679())
					{
						if (func_2089(37, 5) == 1)
						{
							return false;
						}
					}
					if (func_2087(37, 0) == 2)
					{
						return false;
					}
					break;
				case 3:
					if (func_679())
					{
						if (func_2089(37, 6) == 1)
						{
							return false;
						}
					}
					if (func_2087(37, 1) == 2)
					{
						return false;
					}
					break;
			}
			return true;
		case 97:
			if (func_479() == 1 && func_151(11))
			{
				return false;
			}
			if (func_479() == 9 && !func_235(0))
			{
				return false;
			}
			return true;
		case 98:
			if (func_46() == 76 && func_2089(98, 1) == 1)
			{
				return false;
			}
			if (func_46() == 92)
			{
				if (func_903(82, 0) || func_903(83, 0))
				{
					return false;
				}
			}
			return true;
		case 39:
			if (func_723(26) || func_715(26))
			{
				return false;
			}
			return true;
		case 28:
			if (func_154(22) && !func_154(27))
			{
				if (func_829(-1063.709f, -520.2658f, 82.0255f, 1) < 110.0f || func_829(-815.6782f, -520.9415f, 45.4979f, 1) < 110.0f)
				{
					return false;
				}
			}
			if (func_479() == 0 || func_479() == 11)
			{
				if (Global_1888801[0 /*35*/].f_1 > 0)
				{
					if (Global_1888801[0 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
			}
			if (func_479() == 1)
			{
				if (Global_1888801[17 /*35*/].f_1 > 0)
				{
					if (Global_1888801[17 /*35*/].f_1 + 900000) > MISC::GET_GAME_TIMER()
					{
						return false;
					}
				}
				if (!func_679())
				{
					return false;
				}
			}
			return true;
		case 40:
			if (func_2107())
			{
				if (func_2108(func_479(), 1, 0) != 0)
				{
					return true;
				}
			}
			break;
		case 42:
			if (func_2087(42, 0) == 2 || func_2087(42, 1) == 2)
			{
				return false;
			}
			if (func_2088(42) >= 2)
			{
				return false;
			}
			return true;
		case 77:
			if (func_2099(94))
			{
				return false;
			}
			return true;
		case 96:
			if (func_2099(94))
			{
				return false;
			}
			return true;
		case 99:
			if (func_2093(99) >= 2)
			{
				return false;
			}
			if (func_2099(94))
			{
				return false;
			}
			return true;
		case 100:
			switch (func_479())
			{
				case 1:
					if (func_2087(100, 1) != 1 && func_679())
					{
						return true;
					}
					break;
				case 0:
				case 11:
					return false;
			}
			return false;
		case 44:
			if (func_2099(57))
			{
				return false;
			}
			switch (func_479())
			{
				case 1:
				case 3:
				case 9:
					if (func_2083(0) || func_679())
					{
						return false;
					}
					break;
				case 11:
					if (func_2083(2) || func_2084(2))
					{
						return false;
					}
					else if (func_829(1624.51f, -1818.45f, 49.6045f, 1) < 225.0f)
					{
						if (SCRIPTS::HAS_SCRIPT_LOADED("gang_enc_lemoyne_church") || !func_2109((1 << 16), 2))
						{
							return false;
						}
					}
					break;
			}
			return true;
		case 101:
			if (func_2083(2))
			{
				return false;
			}
			if (func_2110(92, (1 << 16)) || func_1418(92))
			{
				return true;
			}
			return false;
		case 102:
			switch (func_46())
			{
				case 76:
					if (func_2087(102, 1) == 1 && func_2087(102, 2) == 1)
					{
						return false;
					}
					break;
				case 26:
					if (func_2087(102, 0) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 103:
			if (func_2088(103) >= 2)
			{
				return false;
			}
			if (func_46() == 5)
			{
				if (!func_904(6, -1))
				{
					return false;
				}
				if (func_745(Global_35, 2720.815f, -1283.54f, 48.638f, 1) < func_745(Global_35, 2551.768f, -1173.668f, 52.683f, 1))
				{
					if (func_903(77, 0))
					{
						return false;
					}
				}
			}
			else if (func_46() == 92)
			{
				if (func_903(143, 0))
				{
					return false;
				}
			}
			return true;
		case 45:
			if (func_479() == 9)
			{
				if (func_2087(45, 0) == 2)
				{
					return false;
				}
			}
			else if (func_479() == 11)
			{
				if (func_679())
				{
					if (func_2089(45, 4) == 1)
					{
						return false;
					}
				}
				if (func_2087(45, 2) == 2)
				{
					return false;
				}
			}
			return true;
		case 46:
			if (func_2088(46) >= 4 || func_2089(46, 0) == 1)
			{
				return false;
			}
			else if (func_2111() == 1 || (func_2111() == 3 && func_554()))
			{
				return true;
			}
			break;
		case 48:
			return true;
		case 49:
			if (!PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			if (!func_957(2, 0, 0))
			{
				return false;
			}
			if (!func_957(3, 0, 0))
			{
				return false;
			}
			iVar9 = MISC::GET_GAME_TIMER();
			if ((iVar9 - Global_1357549.f_1484) >= 300000)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 50:
			if (func_2112())
			{
				return false;
			}
			if (func_720(func_674(func_479())) > 0)
			{
				return false;
			}
			switch (Global_1393447.f_49)
			{
				case 3:
				case 4:
				case 5:
				case 6:
				case 35:
				case 38:
				case 42:
					return false;
			}
			if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BEAT_TRAIN_HOLDUP")) > 0)
			{
				return false;
			}
			return true;
		case 106:
			if (func_46() == 76)
			{
				if (func_903(26, 0) || func_903(27, 0))
				{
					if (func_903(117, 0) || func_903(118, 0))
					{
						return false;
					}
				}
				if (func_720(1) > 0)
				{
					return false;
				}
				if (func_151(7))
				{
					return false;
				}
				if (func_2087(106, 1) != 7)
				{
					return true;
				}
				if (func_2087(87, 0) == 3 && func_2087(106, 3) != 7)
				{
					return true;
				}
				if (func_2087(84, 0) == 3 || func_2087(84, 1) == 3)
				{
					if (func_2087(106, 4) != 7)
					{
						if (!func_679())
						{
							return true;
						}
					}
				}
			}
			else if (func_46() == 105)
			{
				if (func_720(2) > 0)
				{
					return false;
				}
				if (func_2087(87, 0) == 3 && func_2087(106, 3) != 7)
				{
					return true;
				}
				else if (func_2087(87, 0) != 3)
				{
				}
				else if (func_2087(106, 3) == 7)
				{
				}
				if ((func_370(13) && func_2087(106, 5) == 3) && func_2087(106, 5) != 7)
				{
					if (func_2113(106, 5))
					{
						return true;
					}
				}
			}
			else if (func_46() == 5)
			{
				if (func_720(2) > 0)
				{
					return false;
				}
				if (func_370(12))
				{
					if (func_2087(106, 6) == 3)
					{
						if (func_2087(106, 6) != 7)
						{
							if (func_2113(106, 6))
							{
								return true;
							}
						}
					}
				}
				if (func_2087(30, 3) == 3 && func_2087(106, 7) != 7)
				{
					if (func_2113(106, 7))
					{
						return true;
					}
				}
			}
			else if (func_46() == 38)
			{
				if (func_720(3) > 0)
				{
					return false;
				}
				if ((func_370(18) && func_2087(106, 0) == 3) && func_2087(106, 0) != 7)
				{
					return true;
				}
				if ((func_370(17) && func_2087(106, 8) == 3) && func_2087(106, 8) != 7)
				{
					return true;
				}
			}
			return false;
		case 107:
			if (((func_903(77, 0) || func_903(106, 0)) || func_734(45)) || func_734(47))
			{
				return false;
			}
			return true;
		case 51:
			if (func_2083(2) || func_2084(2))
			{
				return false;
			}
			return true;
		case 108:
			if (func_46() == 76)
			{
				if (func_2074(108, (1 << 21)) > 0 && (func_2083(0) || func_2084(0)))
				{
					return false;
				}
				if (func_1215(76, 1, 0))
				{
					return false;
				}
				if (func_1875(func_1251(76), joaat("TSTAG_LOCKDOWN_SALOON"), 1))
				{
					return false;
				}
			}
			return true;
		case 57:
			if (func_2099(44))
			{
				return false;
			}
			if (iVar0 == -1)
			{
				return false;
			}
			if (func_2114(iVar0))
			{
				return false;
			}
			if (!func_2115(24))
			{
				return false;
			}
			return true;
		case 109:
			switch (func_479())
			{
				case 1:
					if (func_2089(109, 0) == 1)
					{
						return false;
					}
					break;
				case 10:
					if (func_2089(109, 0) == 1 && func_2089(109, 1) == 1)
					{
						return false;
					}
					break;
				case 11:
					if (func_2089(109, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 58:
			if ((func_903(119, 0) || func_152(119)) && func_829(-1006.029f, 458.253f, 55.49393f, 1) < 200.0f)
			{
				return false;
			}
			else if (!func_679() && func_2088(58) >= 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 110:
			if (func_903(77, 0))
			{
				return false;
			}
			if (func_734(47))
			{
				return false;
			}
			if (func_723(5))
			{
				return false;
			}
			if (func_1215(5, 1, 0))
			{
				return false;
			}
			if (!func_679())
			{
				if (func_154(31))
				{
					return true;
				}
			}
			else if (func_154(73))
			{
				return true;
			}
			return false;
		case 60:
			if (iParam0 == 60)
			{
				switch (func_1524(func_479()))
				{
					case 1:
						if (func_2089(60, 0) < 2)
						{
							return true;
						}
						break;
					case 0:
						if (func_2089(60, 1) < 3)
						{
							return true;
						}
						break;
					case 4:
						if (func_2089(60, 2) < 2)
						{
							return true;
						}
						break;
				}
			}
			break;
		case 61:
			if (func_2088(46) >= 2 || func_2089(46, 0) == 1)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 59:
			if (!func_2117(Global_35, Global_1900383[func_2116(7) /*45*/], 0))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 62:
			switch (func_2118())
			{
				case 1:
					if (func_2089(62, 0) == 1)
					{
						return false;
					}
					break;
				case 0:
				case 2:
					if (func_2089(62, 1) == 1)
					{
						return false;
					}
					break;
			}
			return true;
		case 111:
			switch (func_479())
			{
				case 9:
					if (func_1215(76, 1, 0))
					{
						return false;
					}
					else if (func_153(14))
					{
						return false;
					}
					else if (func_154(71) && func_903(10, 0))
					{
						return false;
					}
					return true;
				case 4:
					if (!func_370(9))
					{
						return false;
					}
					if (func_151(72))
					{
						return false;
					}
					if (func_151(70))
					{
						return false;
					}
					if (func_151(75))
					{
						return false;
					}
					if (!func_957(4, 0, 0))
					{
						return false;
					}
					iVar10 = MISC::GET_GAME_TIMER();
					if ((iVar10 - Global_1357549.f_1484) >= 300000)
					{
						return true;
					}
					else
					{
						return false;
					}
					return true;
				default:
					return true;
			}
			break;
		case 112:
			if (func_2119(14, (1 << 12)))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 67:
			if (func_2088(67) >= 2)
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
		case 113:
			if (!func_2076(func_607()))
			{
				switch (func_46())
				{
					case 105:
						if (func_2089(113, 3) != 2 && !Global_1326862.f_611)
						{
							Global_1326862.f_611 = 1;
							return true;
						}
						else
						{
							Global_1326862.f_611 = 0;
							return false;
						}
						break;
					case 38:
						if (func_370(17) && func_2089(113, 4) != 3)
						{
							if (!Global_1326862.f_612)
							{
								func_2120(113, 4, func_538());
								Global_1326862.f_612 = 1;
							}
							if (Global_1326862.f_612)
							{
								if (func_2091(113, 4, 7, 0))
								{
									func_2121(113, 4, 3);
									return false;
								}
								else if (!func_1418(113))
								{
									if (func_2087(106, 8) == 3)
									{
										if (func_2087(106, 8) == 7)
										{
											Global_1326862.f_612 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_612 = 0;
										return true;
									}
								}
							}
						}
						else if (func_370(18) && func_2089(113, 4) != 4)
						{
							if (!Global_1326862.f_613)
							{
								func_2120(113, 4, func_538());
								Global_1326862.f_613 = 1;
							}
							if (Global_1326862.f_613)
							{
								if (func_2091(113, 4, 7, 0))
								{
									func_2121(113, 4, 4);
									return false;
								}
								else if (!func_1418(113))
								{
									if (func_2087(106, 0) == 3)
									{
										if (func_2087(106, 0) == 7)
										{
											Global_1326862.f_613 = 0;
											return true;
										}
										else
										{
											return false;
										}
									}
									else
									{
										Global_1326862.f_613 = 0;
										return true;
									}
								}
							}
						}
						else
						{
							return false;
						}
						break;
				}
			}
			else
			{
				return false;
			}
			break;
		case 114:
			if (func_2122())
			{
				return true;
			}
			return false;
		case 116:
			if (func_2123(&uVar1))
			{
				return false;
			}
			if (func_46() == 76)
			{
				if (func_2124(76) >= 10)
				{
					if (!Global_1326862.f_614)
					{
						func_1990(116, 1, 0, 0, 0, 1, 0, 1);
						func_2120(116, 1, func_538());
						Global_1326862.f_614 = 1;
					}
					else if (func_2091(116, 1, 8, 0))
					{
						return false;
					}
					else if (!func_1418(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (func_46() == 105)
			{
				if (func_2124(105) >= 10)
				{
					if (!Global_1326862.f_615)
					{
						func_1990(116, 1, 0, 0, 0, 1, 0, 1);
						func_2120(116, 2, func_538());
						Global_1326862.f_615 = 1;
					}
					else if (func_2091(116, 2, 8, 0))
					{
						return false;
					}
					else if (!func_1418(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			if (func_46() == 78)
			{
				if (func_2124(78) >= 10)
				{
					if (!Global_1326862.f_616)
					{
						func_1990(116, 1, 0, 0, 0, 1, 0, 1);
						func_2120(116, 3, func_538());
						Global_1326862.f_616 = 1;
					}
					else if (func_2091(116, 3, 8, 0))
					{
						return false;
					}
					else if (!func_1418(116))
					{
						return true;
					}
				}
				else
				{
					return false;
				}
			}
			break;
		case 117:
			if (func_2093(75) <= 0)
			{
				return false;
			}
			return true;
		case 115:
			if (func_2087(115, 0) == 3)
			{
				return false;
			}
			if (func_679())
			{
				if (func_2089(115, 4) == 1)
				{
					return false;
				}
			}
			if (func_2074(115, (1 << 21)) >= 2)
			{
				return false;
			}
			if (func_2087(115, 0) == 2)
			{
				return false;
			}
			return true;
		case 63:
			switch (func_479())
			{
				case 1:
					if (func_679())
					{
						if (func_2083(4))
						{
							return false;
						}
					}
					else
					{
						return false;
					}
					break;
			}
			return true;
		case 64:
			if (Global_1430231.f_4)
			{
				return false;
			}
			if (func_154(56) && !func_679())
			{
				return false;
			}
			if ((func_479() == 11 || func_479() == 0) || func_479() == 2)
			{
				if (func_2083(2) || func_2084(2))
				{
					return false;
				}
			}
			else if (func_479() == 9)
			{
				if (func_2083(0) || func_2084(0))
				{
					return false;
				}
			}
			iVar11 = func_313(Global_36, 0);
			if (func_917(iVar11))
			{
				if (func_916(iVar11, Global_36) <= 400.0f)
				{
					return false;
				}
			}
			return true;
		case 65:
			if (func_479() == 11)
			{
				if (func_154(26))
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			break;
		case 66:
			if (!func_370(146))
			{
				return false;
			}
			if (func_1267(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0))
			{
				return false;
			}
			return true;
		case 105:
			if (func_46() == 38)
			{
				if (func_720(3) > 0)
				{
					return false;
				}
			}
			else if (func_46() == 5)
			{
				if (func_720(2) > 0)
				{
					return false;
				}
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				return false;
			}
			break;
		case 71:
			if (func_479() != 8)
			{
				if (func_1525(71, 2) || func_1525(71, 1))
				{
					return false;
				}
			}
			return true;
		case 118:
			if (func_46() == 38)
			{
				if (!func_370(8))
				{
					return false;
				}
			}
			return true;
		case 73:
			if (func_2087(73, 0) == 2)
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

int func_1533(int iParam0, Vector3 vParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < func_2069(iParam0))
	{
		vVar1 = { func_2070(iParam0, iVar0) /*3*/ };
		if (func_1597(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1534(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479.f_4 = MISC::GET_GAME_TIMER();
	func_2125(iParam0, iParam1, bParam2);
}

void func_1535(int iParam0)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;

	iVar0 = 0;
	while (iVar0 < Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar1))
		{
			vVar2 = { VOLUME::_0xC4019CF9AE8E931A(iVar1) /*3*/ };
			if (VOLUME::_0x769BB7626B8CDB06(vVar2, 1.0f, 0, iParam0, (1 << 14)))
			{
				VOLUME::_RELEASE_LOCK_VOLUME(iVar1);
				Global_1911670[iVar0] = 0;
			}
		}
		iVar0++;
	}
}

bool func_1536(int iParam0)
{
	if (func_748(iParam0, Global_1310750.f_16073))
	{
		return true;
	}
	return false;
}

bool func_1537(int iParam0)
{
	return Global_1392135.f_1 & iParam0 != 0;
}

float func_1538(int iParam0)
{
	switch (iParam0)
	{
		case 58:
			if (func_679() && func_2088(58) == 1)
			{
				return 0.5f;
			}
			break;
	}
	if (func_2126() && func_748(iParam0, (1 << 24)))
	{
		if (func_2127())
		{
			return 1.25f;
		}
		else
		{
			return 1.0f;
		}
	}
	return 0.0f;
}

bool func_1539()
{
	return PLAYER::_GET_PLAYER_REQUIRED_DEAD_EYE_AMOUNT(PLAYER::PLAYER_ID()) < PLAYER::_0xBEFED69CE8317F91(PLAYER::PLAYER_ID());
}

bool func_1540(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

bool func_1541(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_1542(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	char* sVar0;

	if (bParam2)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, true);
	}
	if (Global_1572887.f_12 != -1)
	{
		return func_2128(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1943(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		UILOG::_UILOG_SET_CACHED_OBJECTIVE(sVar0);
	}
	return func_2128(sVar0, iParam1, 0, 0, 1, 1);
}

int func_1543(int iParam0)
{
	if (!func_955(iParam0))
	{
		return -1;
	}
	if (iParam0 >= func_557(1))
	{
		return -1;
	}
	if (iParam0 >= 3 || iParam0 < 0)
	{
		return -1;
	}
	return Global_1359489[iParam0];
}

void func_1544(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_1545(int iParam0)
{
	if (func_2129(iParam0))
	{
		return joaat("BLIP_STYLE_MISSION");
	}
	return joaat("BLIP_STYLE_PROC_MISSION");
}

void func_1546(var uParam0, int iParam1)
{
	if (func_2129(iParam1))
	{
		MAP::SET_BLIP_SPRITE(*uParam0, joaat("BLIP_SCM_STRAUSS"), true);
	}
	else
	{
		MAP::SET_BLIP_SPRITE(*uParam0, joaat("BLIP_PROC_LOANSHARK"), true);
	}
	func_2130(iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, func_2131(iParam1));
}

void func_1547(int iParam0)
{
	if (!func_788(iParam0, 2))
	{
		if (!func_2132())
		{
			if (MAP::DOES_BLIP_EXIST(Global_1392626[iParam0 /*32*/]))
			{
				MAP::BLIP_ADD_MODIFIER(Global_1392626[iParam0 /*32*/], joaat("BLIP_MODIFIER_URGENT_ALERT"));
			}
		}
		func_2133(iParam0, 2);
	}
}

int func_1548(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1549(int iParam0)
{
	if (func_2129(iParam0))
	{
		return joaat("BLIP_STYLE_MISSION");
	}
	return joaat("BLIP_STYLE_PROC_MISSION");
}

Vector3 func_1550(int iParam0)
{
	return { Global_1392626[iParam0 /*32*/].f_24 + Global_1392626[iParam0 /*32*/].f_27 * Vector(0.5f, 0.5f, 0.5f) };
}

Vector3 func_1551(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	Vector3 vVar0;

	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_1552(Vector3 vParam0, Vector3 vParam3, float fParam6)
{
	Vector3 vVar0;

	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

int func_1553(int iParam0)
{
	int iVar0;

	iVar0 = func_558(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_2134(iVar0);
}

int func_1554(int iParam0, int iParam1)
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
			func_2135(iVar2);
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

void func_1555()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_1556(int iParam0)
{
	return iParam0 != 0;
}

int func_1557(int iParam0, int iParam1)
{
	int iVar0;

	if (func_112() == 0)
	{
		return 0;
	}
	func_1558(iParam0, 0, 0);
	if (func_817(iParam0))
	{
		iVar0 = ENTITY::_GET_ENTITY_BY_DOORHASH(iParam0, 0);
		if (iVar0 != 0)
		{
			return OBJECT::_0x0943113E02322164(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0), iParam1);
		}
	}
	return 0;
}

int func_1558(int iParam0, bool bParam1, bool bParam2)
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

void func_1559(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_817(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_1560(int iParam0, bool bParam1)
{
	if (func_817(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_1561(int iParam0, bool bParam1)
{
	if (func_817(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_1562(int iParam0, bool bParam1)
{
	if (func_817(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_1563()
{
	return true;
}

int func_1564(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_750(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1565(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1566(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1567(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1568(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1569(int iParam0, int iParam1)
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

void func_1570(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_2136(iParam0, iParam6);
	func_2137(iParam0, iParam5);
	func_2138(iParam0, iParam4);
	func_1812(iParam0, iParam3);
	func_1813(iParam0, iParam2);
	func_2139(iParam0, iParam1);
}

void func_1571(int iParam0)
{
	func_856(iParam0, (1 << 13));
	switch (iParam0)
	{
		case 0:
			func_2140(1);
			break;
		case 1:
			func_2141(1);
			break;
		case 2:
			func_2142(1);
			break;
	}
}

int func_1572(int iParam0, bool bParam1)
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

void func_1573(int iParam0)
{
	func_2143(Global_1392194[iParam0 /*10*/].f_6);
	func_2143(Global_1392194[iParam0 /*10*/].f_5);
}

void func_1574(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_750(iParam1 > 0, iParam1, func_276(2));
	switch (iVar0)
	{
		case 1:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2217.664f, 646.9603f, 96.97265f, 13.53989f, -0.284029f, 55.81102f, 44.74291f, 48.33699f, 8.323042f, "EA_RAILROAD_CAMP Camp");
			break;
		case 2:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2191.981f, 790.8684f, 106.3609f, -0.322212f, 0.0f, 0.0f, 43.94438f, 48.80558f, 11.08309f, "EA_RAILROAD_CAMP Camp");
			break;
		case 3:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1953.244f, 934.4714f, 120.0286f, 0.290825f, 0.0f, 0.0f, 49.39924f, 47.18443f, 9.047403f, "EA_RAILROAD_CAMP Camp");
			break;
	}
}

void func_1575(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_750(iParam1 > 0, iParam1, func_276(2));
	switch (iVar0)
	{
		case 1:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2225.631f, 664.5594f, 93.73315f, 0.0f, 0.0f, -32.17921f, 83.15855f, 79.43558f, 20.92662f, "EA_RAILROAD_CAMP Discover");
			break;
		case 2:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2192.607f, 835.281f, 117.1585f, 0.0f, 0.0f, 15.61822f, 62.10736f, 102.2747f, 27.03924f, "EA_RAILROAD_CAMP Discover");
			break;
		case 3:
			*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1952.344f, 934.0704f, 123.4338f, 0.0f, 0.0f, -74.86485f, 66.47353f, 80.84007f, 14.42759f, "EA_RAILROAD_CAMP Discover");
			break;
	}
}

bool func_1576(int iParam0)
{
	return func_283(iParam0, 1);
}

void func_1577(int iParam0, bool bParam1)
{
	if (Global_1572887.f_10 && func_112() == 0)
	{
		return;
	}
	if (func_185(128))
	{
		return;
	}
	if (!func_2144(iParam0))
	{
		return;
	}
	if (func_149(iParam0, 32))
	{
		return;
	}
	func_164(iParam0, 32);
	func_1510(&Global_1935630, (1 << 13));
	func_2003(func_1018(joaat("DISCOVERED"), joaat("AREAS")), 1);
	switch (func_2145(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_2003(func_1018(joaat("DISCOVERED"), joaat("LOWLANDS_AREAS")), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_2003(func_1018(joaat("DISCOVERED"), joaat("MOUNTAIN_AREAS")), 1);
			break;
		case 3:
		case 10:
			func_2003(func_1018(joaat("DISCOVERED"), joaat("FOOTHILLS_AREAS")), 1);
			break;
		case 4:
		case 9:
			func_2003(func_1018(joaat("DISCOVERED"), joaat("PLAINS_AREAS")), 1);
			break;
		case 8:
			func_2003(func_1018(joaat("DISCOVERED"), joaat("GUAMA_AREAS")), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_2003(func_1018(joaat("DISCOVERED"), joaat("NEW_AUSTIN_AREAS")), 1);
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
		func_164(iParam0, 64);
	}
}

void func_1578(int iParam0, int iParam1)
{
	int iVar0;
	Vector3 vVar1;

	iVar0 = func_2146(iParam0);
	if (iVar0 != 0 && func_283(iParam0, 1))
	{
		vVar1 = { func_2147(iParam0) /*3*/ };
		if (iParam1 < 1)
		{
			iParam1 = func_276(iParam0);
		}
		func_2148(iParam0, iParam1);
		iParam1--;
		if (func_283(iParam0, (1 << 26)))
		{
			MAP::_REMOVE_PROP_FROM_MINIMAP(iVar0);
		}
		MAP::_ADD_PROP_TO_MINIMAP(iVar0, vVar1.x, vVar1.y, 0.0f, iParam1);
		func_280(iParam0, (1 << 26));
	}
}

void func_1579(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_834(iParam0))
	{
		return;
	}
	func_2149(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_2), iParam1, iParam2, iParam3, iParam4, bParam5);
}

int func_1580(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 2;
		case 2:
			return 1;
		case 3:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_1581(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					switch (iParam2)
					{
						case 0:
						case default:
							return 1749008611;
						case 1:
							return 758066107;
							break;
						case 2:
							switch (iParam2)
							{
								case 0:
								case default:
									return 2111695903;
								case 1:
									return -1995054197;
									break;
								case 3:
									switch (iParam2)
									{
										case 0:
										case default:
											return -1947695052;
										case 1:
											return -1623126047;
											break;
										case 4:
											switch (iParam2)
											{
												case 0:
												case default:
													return -1559513478;
												case 1:
													return 1943484686;
													break;
												case 5:
													switch (iParam2)
													{
														case 0:
														case default:
															return -1321905459;
														case 1:
															return 2056603274;
															break;
													}
													break;
												case 1:
													switch (iParam1)
													{
														case 1:
															switch (iParam2)
															{
																case 0:
																case default:
																	return -590227673;
																case 1:
																	return 872406077;
																	break;
																case 2:
																	switch (iParam2)
																	{
																		case 0:
																		case default:
																			return -590227673;
																		case 1:
																			return 1471226731;
																			break;
																		case 3:
																			switch (iParam2)
																			{
																				case 0:
																				case default:
																					return -590227673;
																				case 1:
																					return -1149736196;
																					break;
																				case 4:
																					return -1926787493;
																				case 5:
																					return -1926787493;
																			}
																			break;
																		case 2:
																			switch (iParam1)
																			{
																				case 1:
																					return -586415580;
																				case 2:
																					return 1251859782;
																				case 3:
																					return 994786977;
																				case 4:
																					return 2077623691;
																			}
																			break;
																		case 3:
																			switch (iParam1)
																			{
																				case 1:
																					switch (iParam2)
																					{
																						case 0:
																							return -1877706739;
																						case 1:
																							return 905216692;
																						default:
																							break;
																					}
																					break;
																				case 2:
																					switch (iParam2)
																					{
																						case 0:
																							return -1877706739;
																						case 1:
																							return -1299414622;
																						default:
																							break;
																					}
																					break;
																			}
																			break;
																	}
																	return 0;
																}

void func_1582(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_834(iParam0))
	{
		return;
	}
	func_2149(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_11), iParam1, iParam2, iParam3, iParam4, bParam5);
}

void func_1583(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_834(iParam0))
	{
		return;
	}
	func_2149(iParam0, &(Global_40.f_9096[iParam0 /*12*/].f_10), iParam1, iParam2, iParam3, iParam4, bParam5);
}

bool func_1584(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	return STREAMING::_IS_POSITION_INSIDE_IPL_STREAMING_EXTENTS(iParam0, Global_36);
}

bool func_1585(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (DECORATOR::DECOR_EXIST_ON(*iParam0, "bLostLogs") && DECORATOR::DECOR_GET_BOOL(*iParam0, "bLostLogs"))
	{
		return false;
	}
	if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROP_SET(*iParam0))
	{
		return false;
	}
	iVar0 = PROPSET::_GET_VEHICLE_PROP_SET(*iParam0);
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (PROPSET::_GET_ENTITIES_FROM_PROP_SET(iVar0, iVar1, joaat("P_VEH_LOGWAGON01"), false, false) < 1)
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
		return false;
	}
	iVar2 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(0, iVar1)));
	ITEMSET::DESTROY_ITEMSET(iVar1);
	fVar3 = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(iVar2, true);
	if (fVar3 < 0.7f)
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "bLostLogs", true);
		func_576(459, 1);
		return false;
	}
	return true;
}

int func_1586(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	func_305(8);
	iVar0 = 0;
	while (iVar0 < func_2150(iParam0))
	{
		if (!bParam1 || (iVar0 % iParam2) == Global_1898092.f_25)
		{
			iVar1 = func_2151(iParam0, iVar0);
			if (func_441(iVar1))
			{
				func_943(iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < func_2152(iParam0))
	{
		if (!bParam1 || iVar0 == Global_1898092.f_25)
		{
			sVar2 = func_2153(iParam0, iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				func_1121(sVar2);
			}
		}
		iVar0++;
	}
	if (!bParam1 || Global_1898092.f_25 >= iParam2)
	{
		Global_1898092.f_25 = 0;
		return 1;
	}
	return 0;
}

int func_1587(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	func_305(8);
	iVar0 = 0;
	while (iVar0 < func_2150(iParam0))
	{
		if (!bParam5 || (iVar0 % iParam7) == Global_1898092.f_25)
		{
			iVar1 = func_2151(iParam0, iVar0);
			if (func_441(iVar1))
			{
				if (func_2154(iParam0, iParam1, iVar1, bParam2, bParam6, bParam3, bParam4))
				{
					func_944(iVar1);
				}
			}
		}
		iVar0++;
	}
	if (!bParam5 || Global_1898092.f_25 >= iParam7)
	{
		sVar2 = func_2155(iParam0, iParam1, bParam2, bParam3);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
		{
			func_877(sVar2);
		}
		return 1;
	}
	return 0;
}

void func_1588(int iParam0, int iParam1)
{
	if (func_2156(iParam0, iParam1))
	{
		if (func_1127(iParam0, 32))
		{
			func_1113(iParam0, 32);
		}
		func_2157(iParam0);
		func_1591(iParam0);
		if (func_2158(iParam0) != 0)
		{
			if (!TASK::_IS_SCENARIO_GROUP_ENABLED_HASH(func_2158(iParam0)))
			{
				TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(func_2158(iParam0), true);
			}
		}
	}
	else
	{
		if (!func_1127(iParam0, 32))
		{
			func_1114(iParam0, 32);
		}
		if (func_266(iParam0, 0))
		{
			func_2159(iParam0);
		}
		func_1128(iParam0);
		{
			{
			}
		}