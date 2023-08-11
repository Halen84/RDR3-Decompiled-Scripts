#pragma region Local_Variables
	int iLocal_0[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_31 = 0.0f;
#pragma endregion

void __SCRIPT()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	bool bVar6;
	bool bVar7;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (iLocal_13 >= 3)
		{
			func_1(iLocal_13 >= 4);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (!bVar0)
	{
		BUILTIN::WAIT(0);
		switch (iLocal_13)
		{
			case 0:
				iLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(613.343f, 2192.701f, 223.576f, 0.0f, 0.0f, 11.0f, 29.0f, 46.0f, 9.0f, "BirdsTrigger");
				PED::_RESERVE_AMBIENT_PEDS(12);
				STREAMING::REQUEST_MODEL(func_2(), false);
				iLocal_13 = 1;
				break;
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(func_2()))
				{
					iLocal_13 = 2;
				}
				break;
			case 2:
				if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= 12)
				{
					if (func_3())
					{
						iLocal_13 = 3;
					}
				}
				break;
			case 3:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_14, true, 0) || MISC::IS_BULLET_IN_AREA(618.4946f, 2197.932f, 222.0223f, 13.0f, true))
				{
					iLocal_13 = 4;
					iLocal_15 = MISC::GET_GAME_TIMER();
				}
				break;
			case 4:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(iLocal_0[iVar1]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_0[iVar1], joaat("SCRIPT_TASK_FLY_TO_COORD"), true) == 8 || iLocal_18[iVar1])
						{
							iVar2 = 0;
							switch (iVar2)
							{
								case 0:
									iVar2 = 0;
									break;
								case 1:
									iVar2 = 50;
									break;
								case 2:
									iVar2 = 160;
									break;
								case 3:
									iVar2 = 400;
									break;
								case 4:
									iVar2 = 310;
									break;
								case 5:
									iVar2 = 120;
									break;
								case 6:
									iVar2 = 200;
									break;
								case 7:
									iVar2 = 280;
									break;
								case 8:
									iVar2 = 390;
									break;
								case 9:
									iVar2 = 70;
									break;
								case 10:
									iVar2 = 220;
									break;
								case 11:
									iVar2 = 150;
									break;
							}
							if (MISC::GET_GAME_TIMER() >= (iVar2 + iLocal_15))
							{
								TASK::TASK_FLY_TO_COORD(iLocal_0[iVar1], 3.0f, func_4(iLocal_16), false, true);
								iLocal_18[iVar1] = 0;
							}
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(iLocal_0[0]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_0[0], func_4(iLocal_16), 20.0f, 20.0f, 20.0f, false, false, 0))
					{
						iLocal_13 = 5;
					}
				}
				break;
			case 5:
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (!PED::IS_PED_INJURED(iLocal_0[iVar1]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_0[iVar1], joaat("SCRIPT_TASK_FLYING_CIRCLE"), true) != 8)
						{
						}
						else
						{
							TASK::TASK_FLYING_CIRCLE(iLocal_0[iVar1], 2.0f, func_4(iLocal_16), 2.0f, 10.0f);
						}
					}
					iVar1++;
				}
				if (!PED::IS_PED_INJURED(iLocal_0[0]))
				{
					vVar3 = { func_5(iLocal_16) /*3*/ };
					if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_4(iLocal_16), vVar3, false, false, 0))
					{
						if (iLocal_16 < 11)
						{
							iVar1 = 0;
							while (iVar1 < 12)
							{
								iLocal_18[iVar1] = 1;
								iVar1++;
							}
							iLocal_16 = (1 + iLocal_16);
							iLocal_13 = 4;
						}
						else
						{
							func_6();
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
				}
				break;
		}
		if (!func_7(12, (1 << 23)))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1708.799f, 2160.965f, 318.8729f, false) < 160.0f)
			{
				Global_40.f_11623[12 /*8*/].f_2 = -15;
				func_8(12, (1 << 23), 1);
			}
		}
		if (iLocal_13 >= 3)
		{
			bVar6 = false;
			bVar7 = false;
			if (PED::IS_PED_INJURED(iLocal_0[iLocal_17]))
			{
				bVar7 = true;
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, iLocal_0[iLocal_17], 250.0f, 250.0f, 250.0f, false, false, 0))
			{
				bVar6 = true;
			}
			iLocal_17++;
			if (iLocal_17 >= 12)
			{
				iLocal_17 = 0;
			}
			if (!bVar6)
			{
				fLocal_31 += (1.0f * BUILTIN::TIMESTEP());
			}
			else
			{
				fLocal_31 = 0.0f;
			}
			if (bVar7 || fLocal_31 >= 5.0f)
			{
				if (fLocal_31 >= 5.0f)
				{
				}
				func_6();
				func_1((bVar7 || iLocal_13 >= 4));
				func_9(&(Global_1396257[12 /*638*/].f_626), (1 << 14), 0);
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		Global_40.f_11623[12 /*8*/].f_2 = func_10();
	}
	func_9(&(Global_1396257[12 /*638*/].f_626), (1 << 13), 1);
}

int func_2()
{
	return joaat("A_C_PHEASANT_01");
}

bool func_3()
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_0[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					vVar1 = { 622.3134f, 2200.764f, 221.5856f /*3*/ };
					fVar4 = -160.0f;
					break;
				case 1:
					vVar1 = { 621.2441f, 2199.146f, 221.7287f /*3*/ };
					fVar4 = -120.0f;
					break;
				case 2:
					vVar1 = { 619.4209f, 2194.512f, 221.7715f /*3*/ };
					fVar4 = -99.0f;
					break;
				case 3:
					vVar1 = { 619.327f, 2192.713f, 221.5658f /*3*/ };
					fVar4 = -155.0f;
					break;
				case 4:
					vVar1 = { 623.7524f, 2199.419f, 221.4249f /*3*/ };
					fVar4 = 142.0f;
					break;
				case 5:
					vVar1 = { 621.4307f, 2195.696f, 221.644f /*3*/ };
					fVar4 = -11.0f;
					break;
				case 6:
					vVar1 = { 623.0302f, 2189.17f, 220.8486f /*3*/ };
					fVar4 = -33.0f;
					break;
				case 7:
					vVar1 = { 618.2859f, 2196.883f, 222.0049f /*3*/ };
					fVar4 = 40.0f;
					break;
				case 8:
					vVar1 = { 617.9752f, 2193.77f, 221.7816f /*3*/ };
					fVar4 = -175.0f;
					break;
				case 9:
					vVar1 = { 620.5045f, 2199.149f, 221.8133f /*3*/ };
					fVar4 = -42.0f;
					break;
				case 10:
					vVar1 = { 632.3511f, 2197.817f, 220.63f /*3*/ };
					fVar4 = 20.0f;
					break;
				case 11:
					vVar1 = { 626.5476f, 2191.122f, 220.7776f /*3*/ };
					fVar4 = 68.0f;
					break;
			}
			iLocal_0[iVar0] = func_11(func_2(), vVar1, fVar4, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_0[iVar0], true);
			PED::SET_PED_KEEP_TASK(iLocal_0[iVar0], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_0[iVar0], true);
			return false;
		}
		iVar0++;
	}
	return true;
}

Vector3 func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 637.0f, 2120.0f, 236.0f };
		case 1:
			return { 673.0f, 2034.0f, 245.0f };
		case 2:
			return { 666.0f, 1935.0f, 241.0f };
		case 3:
			return { 750.0f, 1924.0f, 260.0f };
		case 4:
			return { 830.0f, 1851.0f, 270.0f };
		case 5:
			return { 920.0f, 1862.0f, 298.0f };
		case 6:
			return { 1003.0f, 1870.0f, 355.0f };
		case 7:
			return { 1197.0f, 1896.0f, 349.0f };
		case 8:
			return { 1358.0f, 2035.0f, 326.0f };
		case 9:
			return { 1569.0f, 2129.0f, 334.0f };
		case 10:
			return { 1723.816f, 2167.888f, 349.4869f };
	}
	return { 0.0f, 0.0f, 0.0f };
}

Vector3 func_5(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return { 40.0f, 40.0f, 40.0f };
		case 1:
			return { 45.0f, 45.0f, 45.0f };
		case 5:
			return { 55.0f, 55.0f, 55.0f };
		case 6:
			return { 65.0f, 65.0f, 65.0f };
		case 7:
			return { 55.0f, 55.0f, 55.0f };
	}
	return { 45.0f, 45.0f, 45.0f };
}

void func_6()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!PED::IS_PED_INJURED(iLocal_0[iVar0]))
		{
			TASK::TASK_FLY_AWAY(iLocal_0[iVar0], Global_35);
		}
		iVar0++;
	}
}

bool func_7(int iParam0, int iParam1)
{
	return func_12(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
	else
	{
		func_14(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	}
}

void func_9(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_13(uParam0, iParam1);
	}
	else
	{
		func_14(uParam0, iParam1);
	}
}

var func_10()
{
	return Global_1899515;
}

int func_11(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_15(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_12(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_14(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_16(iParam1))
		{
			func_17(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_18(iParam0, 0, 1);
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
			func_19(iParam0, 0);
			bVar0 = true;
		}
		func_20(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_16(int iParam0)
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

void func_17(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_21(iParam0, iParam1))
		{
			if (func_22(iParam0, iParam1))
			{
				if (func_23(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_24(iParam0);
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

void func_18(int iParam0, int iParam1, bool bParam2)
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

void func_19(int iParam0, bool bParam1)
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

void func_20(int iParam0, int iParam1)
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

bool func_21(int iParam0, int iParam1)
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

bool func_22(int iParam0, int iParam1)
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

bool func_23(int iParam0, int iParam1)
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
	if (!func_21(iParam0, iVar0))
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

void func_24(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

