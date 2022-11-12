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
#pragma endregion

void __EntryFunction__()
{
	bool bVar0;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED((1 << 9)))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
		}
		func_1();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (func_2() == -1)
	{
		while (!func_3(64))
		{
			BUILTIN::WAIT(0);
		}
	}
	func_4();
	bVar0 = false;
	while (!bVar0)
	{
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			bVar0 = true;
		}
		else
		{
			if (func_5())
			{
				func_6();
				func_7();
				func_8();
				func_9();
				func_10();
			}
			BUILTIN::WAIT(0);
		}
	}
	func_1();
}

void func_1()
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887.f_12;
}

bool func_3(int iParam0)
{
	return Global_21 & iParam0 != 0;
}

void func_4()
{
	func_12();
	func_13();
	func_14(1);
	func_15(0);
	func_16();
}

bool func_5()
{
	if (!func_3(256))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		if (func_2() == -1)
		{
			return false;
		}
	}
	if (Global_1572887.f_8)
	{
		return false;
	}
	if (func_17(68))
	{
		return false;
	}
	return true;
}

void func_6()
{
	struct<7> /*56*/ sVar0;
	struct<12> /*96*/ sVar7;
	struct<12> /*96*/ sVar19;

	func_18();
	func_19();
	func_20(&sVar0);
	func_21(0, &sVar7);
	func_21(1, &sVar19);
	func_22(sVar7);
	func_22(sVar19);
	func_23(sVar7);
	func_23(sVar19);
	func_24(sVar0, sVar7, sVar19);
	func_25(0, &sVar7);
	func_25(1, &sVar19);
	func_26(0, &sVar7);
	func_26(1, &sVar19);
	func_27();
	func_28(sVar0);
	func_29(sVar0);
	func_30(sVar0);
	func_31();
	func_32();
	func_33();
}

void func_7()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (Global_1900383.f_317)
	{
		case 0:
			func_35(0);
			break;
		case 1:
			func_35(1);
			break;
		case 2:
			func_35(6);
			break;
	}
	iVar0 = Global_1900383.f_317;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383.f_317 = iVar0;
}

void func_8()
{
	int iVar0;
	int iVar1;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(0);
	if (iVar1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_36(iVar0);
		iVar0++;
	}
}

void func_9()
{
	struct<7> /*56*/ sVar0;
	struct<12> /*96*/ sVar7;
	struct<12> /*96*/ sVar19;
	struct<12> /*96*/ sVar31;
	struct<12> /*96*/ sVar43;
	int iVar55;

	switch (Global_1900383.f_422)
	{
		case 0:
		case 6:
			func_20(&sVar0);
			func_21(0, &sVar7);
			func_21(1, &sVar19);
			func_21(6, &sVar31);
			func_21(5, &sVar43);
			func_37(sVar0, sVar7, 0);
			func_37(sVar0, sVar19, 1);
			func_37(sVar0, sVar31, 6);
			func_37(sVar0, sVar43, 5);
			func_38(sVar0);
			func_39(sVar0, sVar7);
			func_40(sVar0, sVar7, 0);
			func_40(sVar0, sVar19, 1);
			func_40(sVar0, sVar31, 6);
			func_41(0);
			func_41(1);
			func_41(6);
			func_42(sVar0, sVar7, 0);
			func_42(sVar0, sVar19, 1);
			func_43(sVar7, sVar0, 0);
			func_43(sVar19, sVar0, 1);
			func_44(0);
			func_44(1);
			func_45(sVar0, sVar7, 0);
			func_45(sVar0, sVar19, 1);
			func_46(sVar0, sVar7, 0);
			func_46(sVar0, sVar19, 1);
			func_47(sVar0);
			func_48(sVar0);
			func_49();
			func_50();
			func_51(sVar0);
			func_52();
			func_53();
			func_54();
			func_55();
			func_56();
			func_57(sVar0, sVar7, 0);
			func_57(sVar0, sVar19, 1);
			func_58(sVar0, sVar7, 0);
			func_58(sVar0, sVar19, 1);
			func_58(sVar0, sVar31, 6);
			func_59(sVar0, sVar7, sVar19);
			break;
		case 1:
			func_60();
			break;
		case 2:
			func_61(0);
			func_62(0);
			break;
		case 3:
			func_61(1);
			func_62(1);
			break;
		case 9:
			func_63();
			break;
		case 10:
			func_64(0);
			func_64(1);
			break;
		case 11:
			func_65();
			break;
		case 4:
			func_66(0);
			break;
		case 5:
			func_66(1);
			break;
		case 7:
			func_66(5);
			break;
		case 8:
			func_67();
			break;
	}
	iVar55 = Global_1900383.f_422;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1900383.f_422 = iVar55;
}

void func_10()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	switch (Global_1900383.f_423)
	{
		case 0:
			func_68();
			break;
		case 1:
			func_69();
			break;
		case 2:
			func_70();
			break;
	}
	iVar0 = Global_1900383.f_423;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383.f_423 = iVar0;
}

void func_11()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_71(iVar0))
		{
			if (!func_72(iVar0))
			{
				func_73(iVar0);
			}
		}
		iVar0++;
	}
	func_74();
}

void func_12()
{
	PED::_RESERVE_AMBIENT_PEDS(1);
	func_18();
}

int func_13()
{
	int iVar0;

	iVar0 = func_75();
	STREAMING::REQUEST_MODEL(iVar0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return 0;
	}
	return 1;
}

int func_14(bool bParam0)
{
	if (func_76(128) || func_77(6))
	{
		return 1;
	}
	if (bParam0)
	{
		if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1913814.f_202) && !func_78(1625871738, &(Global_1913814.f_202), 600, -1, 0, 0))
		{
			func_79(128);
			func_80(6);
			return 0;
		}
	}
	else
	{
		if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1913814.f_202))
		{
			Global_1913814.f_202 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(1625871738);
		}
		if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1913814.f_202))
		{
			return 0;
		}
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 893391757, "MOUNT_TYPES/MOUNT(type=%x)/WHISTLE:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1616037958, "MOUNT_TYPES/MOUNT(type=%x)/LOADOUT_SLOT:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1555915504, "MOUNT_TYPES/MOUNT(type=%x)/REPOSITORY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -298851427, "MOUNT_TYPES/MOUNT(type=%x)/ITEM_CATEGORY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 834733495, "MOUNT_TYPES/MOUNT(type=%x)/BONDING:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 808825305, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -748933974, "MOUNT_TYPES/MOUNT(type=%x)/UI_FILTERS:end");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1543589730, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -143743697, "MOUNT_TYPES/MOUNT(type=%x)/ARCHETYPES:end");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 116835447, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_STYLE:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1255580663, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_SPRITE:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1292413058, "MOUNT_TYPES/MOUNT(type=%x)/BLIP_NAME:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 2112095068, "MOUNT_TYPES/MOUNT(type=%x)/COMPATIBLE_TYPES/MOUNT_TYPE(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1379316512, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -223927384, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):slot_id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 267140771, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):metaped_tag");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -675686015, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(%i):none_item");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1507362072, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):metaped_tag");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1979684523, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):none_item");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 42812586, "MOUNT_TYPES/MOUNT(type=%x)/EQUIPMENT_DATA/EQUIPMENT_SLOT(slot=%x):id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1318388873, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -571823039, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1894757327, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -385264207, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INVENTORY_ITEM:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 38531101, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/DEFAULT_EQUIPMENT:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -509881626, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/STABLING_COST:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1239479495, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/INSURANCE_COST:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1224542537, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/REVIVE_COST:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1192923488, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_CLASS:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 737763634, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/MOUNT_QUALITY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 735225176, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_HEALTH:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1306132799, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_STRENGTH:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1611478627, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_SPEED:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -221622390, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_AGILITY:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1695792563, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_FITNESS:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1454482041, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BASE_GRIT:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -1699214685, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL1:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, -926718279, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL2:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1186063008, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL3:id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1913814.f_202, 1105713420, "MOUNT_TYPES/MOUNT(type=%x)/MODEL_NAMES/MODEL(id=%x)/BONDING_XP_LEVEL4:id");
	func_79(128);
	func_80(6);
	return 1;
}

void func_15(int iParam0)
{
	if (Global_1900383.f_378 != iParam0)
	{
	}
	Global_1900383.f_378 = iParam0;
}

int func_16()
{
	if (!func_82(-1898635967, func_81(), 1))
	{
		return 0;
	}
	if (func_83())
	{
		if (!func_82(146323340, func_81(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_17(int iParam0)
{
	return Global_1572864.f_3 & iParam0 != 0;
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	if (func_84(0) == 1)
	{
	}
	if (func_84(1) == 1)
	{
		iVar0++;
	}
	if (func_84(5) == 1)
	{
		iVar0++;
	}
	if (func_84(6) == 1)
	{
		iVar0++;
	}
	iVar0 += func_85(0);
	iVar0 += func_85(1);
	iVar1 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	if (iVar0 > iVar1)
	{
		iVar2 = (iVar0 - iVar1);
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(iVar2);
	}
	else if (iVar0 < iVar1)
	{
		iVar3 = (iVar1 - iVar0);
		PED::_UNRESERVE_AMBIENT_PEDS(iVar3);
	}
}

void func_19()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_86(iVar0);
		iVar0++;
	}
}

void func_20(var uParam0)
{
	*uParam0 = PLAYER::PLAYER_ID();
	if (!PLAYER::IS_PLAYER_DEAD(*uParam0))
	{
		uParam0->f_1 = 1;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		uParam0->f_2 = 1;
		if (PED::IS_PED_INJURED(Global_35))
		{
			uParam0->f_4 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			uParam0->f_3 = 1;
		}
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_35);
		}
	}
}

void func_21(int iParam0, int iParam1)
{
	float fVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*iParam1 = 0;
	iParam1->f_1 = 0;
	iParam1->f_2 = 0;
	iParam1->f_3 = 0;
	iParam1->f_4 = 0;
	iParam1->f_5 = { 0.0f, 0.0f, 0.0f /*3*/ };
	iParam1->f_8 = 0.0f;
	iParam1->f_10 = 0;
	iParam1->f_9 = 0;
	iParam1->f_10 = 0;
	iParam1->f_11 = 0;
	if (func_71(iParam0))
	{
		iParam1->f_1 = 1;
		*iParam1 = func_88(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
		{
			iParam1->f_2 = 1;
		}
		if (PED::IS_PED_INJURED(*iParam1))
		{
			iParam1->f_3 = 1;
		}
		if (TASK::IS_PED_IN_WRITHE(*iParam1))
		{
			iParam1->f_4 = 1;
		}
		iParam1->f_5 = { ENTITY::GET_ENTITY_COORDS(*iParam1, true, false) /*3*/ };
		iParam1->f_8 = ENTITY::GET_ENTITY_HEADING(*iParam1);
		iParam1->f_9 = PED::_GET_RIDER_OF_MOUNT(*iParam1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_9))
		{
			if (iParam1->f_9 == Global_35)
			{
				iParam1->f_10 = 1;
			}
		}
		fVar0 = func_89(iParam0);
		if (func_90(iParam1->f_5, Global_36) <= fVar0)
		{
			iParam1->f_11 = 1;
		}
	}
}

void func_22(struct<2> /*16*/ sParam0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (sParam0.f_1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(sParam0.f_0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(sParam0.f_0, true, true);
		}
	}
}

void func_23(Vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (func_76(64))
		{
			PED::SET_PED_RESET_FLAG(vParam0.x, 6, true);
		}
	}
}

void func_24(struct<7> /*56*/ sParam0, struct<12> /*96*/ sParam7, struct<12> /*96*/ sParam19)
{
	if (func_91())
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), true);
		func_92(sParam0, sParam7, sParam19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_WHISTLE_HORSEBACK"), false);
		func_15(1);
	}
	func_93();
}

void func_25(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;

	if (!uParam1->f_1)
	{
		return;
	}
	if (!uParam1->f_2)
	{
		return;
	}
	bVar0 = false;
	if (func_94() && !func_95(4))
	{
		bVar0 = true;
	}
	iVar1 = 388;
	bVar2 = PED::GET_PED_CONFIG_FLAG(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, iVar1, bVar0);
	}
	if (func_96())
	{
		return;
	}
	bVar3 = func_97(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		func_98(iParam0, uParam1->f_4);
		func_99(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (func_100(iParam0) == 0)
	{
		func_101(iParam0, MISC::GET_GAME_TIMER());
	}
	fVar4 = PED::_GET_PED_REMAINING_REVIVAL_TIME(*uParam1, false);
	func_102(iParam0, fVar4);
	if (Global_1914319.f_18969)
	{
		if (!PED::_0x12EB4E31F092C9B3(*uParam1))
		{
			PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, true);
		}
	}
	else if (PED::_0x12EB4E31F092C9B3(*uParam1))
	{
		PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, false);
	}
	if (func_103())
	{
		ENTITY::SET_ENTITY_HEALTH(*uParam1, 0, 0);
	}
}

void func_26(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_104(iParam0);
		return;
	}
}

void func_27()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_105(iVar0);
		iVar0++;
	}
}

void func_28(struct<5> /*40*/ sParam0, var uParam5, var uParam6)
{
	int iVar0;
	Vector3 vVar1;
	float fVar4;
	float fVar5;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		func_106();
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	if (!func_107(iVar0))
	{
		return;
	}
	if (!func_108())
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_109(), false);
		func_110(vVar1);
		if (fVar4 > 0.01f)
		{
			fVar5 = func_111();
			fVar5 += fVar4;
			func_112(fVar5);
		}
		if (func_111() >= 40.0f)
		{
			func_113(1);
		}
	}
	if (!func_108())
	{
		return;
	}
	func_114(iVar0);
}

void func_29(struct<5> /*40*/ sParam0, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (!func_71(6))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_35);
	iVar1 = func_88(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (func_115(6) == 0)
	{
		return;
	}
	func_116(6, 1);
}

void func_30(struct<7> /*56*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (!func_117(sParam0, &iVar0, 1))
	{
		func_118();
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1900383.f_414))
	{
		Global_1900383.f_414 = iVar0;
		Global_1900383.f_414.f_1 = iVar1;
	}
	if (Global_1900383.f_414.f_1 + 5000 < iVar1)
	{
		func_119(iVar0);
		func_118();
	}
}

void func_31()
{
	int iVar0;

	if (func_120() > 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_EXIT"), false);
		func_121();
	}
	iVar0 = func_120();
	switch (iVar0)
	{
		case 0:
			func_122();
			break;
		case 1:
			func_123();
			break;
		case 2:
			func_124();
			break;
		case 3:
			func_125();
			break;
		case 4:
			func_126();
			break;
		case 5:
			func_127();
			break;
		case 6:
			func_128();
			break;
		case 7:
			func_129();
			break;
	}
	func_130();
}

void func_32()
{
	bool bVar0;

	bVar0 = false;
	if (func_131(0) || func_131(1))
	{
		bVar0 = true;
	}
	func_132(bVar0);
}

void func_33()
{
	bool bVar0;
	bool bVar1;
	Vector3 vVar2;
	var uVar5;
	int iVar6;
	struct<11> /*88*/ sVar7;

	if (!func_133())
	{
		return;
	}
	bVar0 = false;
	if (!func_131(1))
	{
		bVar0 = true;
	}
	bVar1 = func_94();
	if (bVar1 && func_134() == 8)
	{
		bVar0 = true;
	}
	if ((bVar1 && func_135(Global_1835011[37 /*74*/].f_1, 1)) && !func_135(Global_1835011[43 /*74*/].f_1, 1))
	{
		bVar0 = true;
	}
	if ((bVar1 && func_135(Global_1835011[43 /*74*/].f_1, 1)) && !func_135(Global_1835011[44 /*74*/].f_1, 1))
	{
		bVar0 = true;
	}
	func_136(1, &vVar2, &uVar5);
	if (func_137(vVar2))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_138();
		return;
	}
	sVar7.f_10 = 7;
	sVar7.f_10 = 1;
	sVar7.f_0 = 1;
	sVar7.f_6 = { vVar2 /*3*/ };
	sVar7.f_9 = uVar5;
	func_139(&iVar6, &sVar7);
	switch (iVar6)
	{
		case 0:
			break;
		case 1:
			func_138();
			break;
		case 2:
			func_138();
			break;
	}
}

bool func_34()
{
	return Global_1955834;
}

void func_35(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_140(43))
		{
			return;
		}
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (Global_1900383.f_424[iParam0])
	{
		case 0:
		case 1:
			func_141(iParam0);
			Global_1900383.f_424[iParam0] = 2;
			break;
		case 2:
			func_142(iParam0);
			Global_1900383.f_424[iParam0] = 3;
			break;
		case 3:
			func_143(iParam0);
			Global_1900383.f_424[iParam0] = 0;
			break;
	}
}

void func_36(int iParam0)
{
	switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0))
	{
		case joaat("EVENT_RAN_OVER_PED"):
			func_144(iParam0);
			break;
		case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
			func_145(iParam0);
			break;
		case joaat("EVENT_ENTITY_DAMAGED"):
			func_146(iParam0);
			break;
		case joaat("EVENT_ENTITY_DESTROYED"):
			func_147(iParam0);
			break;
		case joaat("EVENT_BUCKED_OFF"):
			func_148((1 << 27));
			func_149(iParam0);
			break;
		case joaat("EVENT_MOUNT_OVERSPURRED"):
			func_150(iParam0);
			break;
		case joaat("EVENT_PED_ANIMAL_INTERACTION"):
			func_151(iParam0);
			break;
		case joaat("EVENT_HITCH_ANIMAL"):
			func_152(iParam0);
			break;
		case joaat("EVENT_SADDLE_TRANSFER"):
			func_153(iParam0);
			break;
		case joaat("EVENT_CALM_PED"):
			func_154(iParam0);
			break;
		case joaat("EVENT_ANIMAL_TAMING_CALLOUT"):
			func_155(iParam0);
			break;
		case joaat("EVENT_HORSE_BROKEN"):
			func_156(iParam0);
			break;
		case joaat("EVENT_PED_WHISTLE"):
			func_157(iParam0);
			break;
		case joaat("EVENT_PLAYER_PROMPT_TRIGGERED"):
			func_158(iParam0);
			break;
		case joaat("EVENT_REVIVE_ENTITY"):
			func_159(iParam0);
			break;
		case joaat("EVENT_TRIGGERED_ANIMAL_WRITHE"):
			func_160(iParam0);
			break;
		case joaat("EVENT_PLAYER_HORSE_AGITATED_BY_ANIMAL"):
			func_161(iParam0);
			break;
		case joaat("EVENT_CARRIABLE_UPDATE_CARRY_STATE"):
			break;
		case joaat("EVENT_PLACE_CARRIABLE_ONTO_PARENT"):
			func_162(iParam0);
			break;
		case joaat("EVENT_PICKUP_CARRIABLE"):
			func_163(iParam0);
			func_164(iParam0);
			break;
	}
}

void func_37(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, struct<9> /*72*/ sParam7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam7.f_1)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (func_165(iParam19))
	{
		return;
	}
	func_166(iParam19, sParam7.f_5, sParam7.f_8);
}

void func_38(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (func_76((1 << 12)))
	{
		return;
	}
	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = func_167(0);
	switch (iVar1)
	{
		case 1:
		case 2:
		case 6:
		case 8:
		case 11:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!func_140(42))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (PED::GET_PED_CONFIG_FLAG(Global_35, iVar4, true) != bVar5)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, iVar4, bVar5);
	}
}

void func_39(struct<5> /*40*/ sParam0, var uParam5, var uParam6, struct<5> /*40*/ sParam7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;

	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (!sParam7.f_1)
	{
		return;
	}
	if (!sParam7.f_2)
	{
		return;
	}
	if (sParam7.f_3)
	{
		return;
	}
	if (sParam7.f_4)
	{
		return;
	}
	if (func_168(sParam7.f_0, joaat("SCRIPT_TASK_GO_TO_WHISTLE")))
	{
		if (func_169(sParam7.f_0))
		{
			iVar0 = func_170();
			if (!func_171(iVar0))
			{
				TASK::TASK_STAND_STILL(sParam7.f_0, -1);
			}
		}
	}
}

void func_40(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, struct<5> /*40*/ sParam7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	bool bVar0;
	int iVar1;

	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam7.f_1)
	{
		return;
	}
	if (!sParam7.f_2)
	{
		return;
	}
	if (sParam7.f_3)
	{
		return;
	}
	if (sParam7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_72(iParam19))
	{
		return;
	}
	bVar0 = func_172(iParam19);
	iVar1 = 48;
	if (bVar0)
	{
		if (!FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(sParam7.f_0, iVar1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(sParam7.f_0, iVar1, true);
		}
	}
	else if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(sParam7.f_0, iVar1))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(sParam7.f_0, iVar1, false);
	}
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	int iVar6;
	Vector3 vVar7;

	if (func_173(iParam0, 256))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!PED::_IS_MOUNT_SEAT_FREE(iVar0, -1))
	{
		return;
	}
	if (func_174(iVar0, joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")))
	{
		return;
	}
	if ((func_174(iVar0, joaat("SCRIPT_TASK_USE_SCENARIO_POINT")) || func_174(iVar0, joaat("SCRIPT_TASK_START_SCENARIO_AT_POSITION"))) || func_174(iVar0, joaat("SCRIPT_TASK_START_SCENARIO_IN_PLACE")))
	{
		return;
	}
	iVar1 = func_175(0);
	iVar2 = func_175(2);
	if (!VOLUME::DOES_VOLUME_EXIST(iVar1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iVar1, false, 0))
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iVar2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(iVar0, iVar2, false, 0))
	{
		return;
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	iVar6 = func_176(vVar3, iVar2, iVar1);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar6))
	{
		vVar7 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar6, true) /*3*/ };
		PED::SET_PED_CONFIG_FLAG(iVar0, 355, true);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar7, 1.0f, 20000, 0.25f, 0, 40000.0f);
	}
}

void func_42(struct<2> /*16*/ sParam0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> /*88*/ sParam7, var uParam18, int iParam19)
{
	if (!sParam0.f_1)
	{
		return;
	}
	if (!sParam7.f_10)
	{
		return;
	}
	if (func_177(iParam19) == -1)
	{
		return;
	}
	func_178(iParam19, -1);
}

void func_43(struct<12> /*96*/ sParam0, struct<2> /*16*/ sParam12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_179())
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!sParam12.f_1)
	{
		return;
	}
	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_11)
	{
		return;
	}
	if (func_177(iParam19) == 1)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(sParam12.f_0) && !Global_1430231.f_4)
	{
		return;
	}
	if (func_174(sParam0.f_0, joaat("SCRIPT_TASK_GO_TO_WHISTLE")))
	{
		return;
	}
	func_180(sParam0.f_0, Global_35);
}

void func_44(int iParam0)
{
	int iVar0;
	bool bVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_72(iParam0))
	{
		return;
	}
	iVar0 = func_181(iParam0);
	if (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
		{
			return;
		}
	}
	if (func_71(iParam0))
	{
		bVar1 = func_88(iParam0);
		func_182(bVar1, 1);
	}
	func_183(iParam0);
}

void func_45(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, struct<5> /*40*/ sParam7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam7.f_1)
	{
		return;
	}
	if (!sParam7.f_2)
	{
		return;
	}
	if (sParam7.f_3)
	{
		return;
	}
	if (sParam7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(sParam7.f_0, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		func_184(iParam19);
		return;
	}
	if (func_76((1 << 9)))
	{
		return;
	}
	if (iVar0 == Global_35)
	{
		return;
	}
	iVar1 = func_185(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if ((iVar2 != joaat("REL_PLAYER_ALLY") && iVar2 != joaat("REL_PLAYER_LIKE")) && iVar2 != joaat("REL_GANG_DUTCHS"))
		{
			func_186(iParam19, iVar0);
		}
	}
	iVar1 = func_185(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (func_187(sParam7.f_0, Global_35, 1, 1) > func_89(iParam19))
	{
		func_184(iParam19);
		func_188(iParam19, 2);
	}
}

void func_46(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, struct<5> /*40*/ sParam7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam7.f_1)
	{
		return;
	}
	if (!sParam7.f_2)
	{
		return;
	}
	if (sParam7.f_3)
	{
		return;
	}
	if (sParam7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!func_189(iParam19))
	{
		return;
	}
	fVar0 = func_190(sParam7.f_0);
	bVar1 = false;
	if (fVar0 > 0.0f)
	{
		bVar1 = true;
	}
	iVar2 = MISC::GET_GAME_TIMER();
	if (!bVar1 || func_191(iParam19) + 30000 < iVar2)
	{
		func_192(iParam19, 0);
		func_193(iParam19, -1);
		if (func_194(16))
		{
			func_195(16);
		}
		if (func_196(16))
		{
			func_197(16);
		}
	}
}

void func_47(struct<5> /*40*/ sParam0, var uParam5, var uParam6)
{
	int iVar0;
	Vector3 vVar1;
	int iVar13;

	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	iVar0 = func_198(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_21(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_184(5);
			func_199(5, 1);
		}
		if (vVar1.z)
		{
			if (func_187(vVar1.x, Global_35, 1, 1) > func_89(5) && !ENTITY::IS_ENTITY_ON_SCREEN(vVar1.x))
			{
				iVar13 = PED::_GET_RIDER_OF_MOUNT(vVar1.x, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
					{
					}
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar13))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar13, true, true);
						PED::DELETE_PED(&iVar13);
					}
				}
				func_73(5);
				func_200(5, 0);
			}
		}
		if (!vVar1.y && func_84(5) == 1)
		{
			func_200(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_140(42))
	{
		return;
	}
	if (func_84(0) == 1 && func_201() == 0)
	{
		func_202(5, 0);
		func_203(5);
	}
}

void func_48(struct<5> /*40*/ sParam0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (func_140(42))
	{
		return;
	}
	bVar0 = false;
	if ((func_84(0) == 0 && func_84(5) == 1) && func_198(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_167(0);
	bVar2 = false;
	if (iVar1 == 1 || iVar1 == 8)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (func_94() && func_95(4))
		{
			if (!func_140(42))
			{
				func_204(42);
				func_204(30);
			}
		}
		if (!func_205(55))
		{
			func_206(1);
		}
	}
}

void func_49()
{
	int iVar0;
	int iVar1;

	iVar0 = func_207(0);
	iVar1 = func_207(1);
	if (Global_1900383.f_416 != 0)
	{
		if (Global_1900383.f_416 != iVar0)
		{
			if (!func_208(Global_1900383.f_416))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383.f_416, false);
			}
			Global_1900383.f_416 = 0;
		}
	}
	if (Global_1900383.f_416.f_1 != 0)
	{
		if (Global_1900383.f_416.f_1 != iVar1)
		{
			if (!func_208(Global_1900383.f_416.f_1))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1900383.f_416.f_1, false);
			}
			Global_1900383.f_416.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(iVar0))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0, true);
			Global_1900383.f_416 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, true);
			Global_1900383.f_416.f_1 = iVar1;
		}
	}
}

void func_50()
{
	int iVar0;

	func_209(Global_1900383.f_436);
	iVar0 = Global_1900383.f_436;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1900383.f_436 = iVar0;
}

void func_51(struct<5> /*40*/ sParam0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	Vector3 vVar7;
	int iVar10;
	int iVar11;
	Vector3 vVar12;
	Vector3 vVar15;
	bool bVar18;
	Vector3 vVar19;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	bVar0 = func_210();
	if (bVar0)
	{
		iVar1 = func_211();
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		if (PED::_GET_CARRIER_AS_PED(iVar1) == Global_35)
		{
			iVar3 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar1);
			switch (iVar3)
			{
				case 4:
				case 5:
				case 6:
				case 8:
				case 9:
					bVar2 = true;
					break;
			}
		}
	}
	bVar4 = func_140(42);
	bVar5 = func_212(0);
	bVar6 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (func_213() != 1 && !bVar5)
			{
				func_214(1);
				bVar6 = true;
			}
		}
		else
		{
			if (func_213() == 1 && !bVar5)
			{
				func_214(2);
				bVar6 = true;
			}
			if (ENTITY::IS_ENTITY_STATIC(iVar1))
			{
				ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
			}
		}
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) /*3*/ };
		func_215(vVar7);
	}
	else
	{
		if (func_213() == 0)
		{
			iVar10 = func_201();
			if (func_71(iVar10))
			{
				iVar11 = func_88(iVar10);
				vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar11, false, false) /*3*/ };
				func_215(vVar12);
			}
			if (iVar10 == 5)
			{
				if (!func_71(5))
				{
					if (bVar4)
					{
						vVar15 = { func_216() /*3*/ };
						func_217(-1);
						func_214(2);
						bVar6 = true;
					}
				}
			}
		}
		bVar18 = false;
		if (func_213() == 2)
		{
			bVar18 = true;
		}
		if (func_213() == 1)
		{
			bVar18 = true;
		}
		if (bVar18)
		{
			vVar19 = { func_216() /*3*/ };
			if (func_137(vVar19))
			{
				func_214(3);
				func_217(-1);
				func_215(0.0f, 0.0f, 0.0f);
				func_218(-15);
			}
			else
			{
				func_219(vVar19, 0.0f, 1);
				func_214(2);
				func_217(-1);
				if (func_220() == -15)
				{
					func_218(func_221());
				}
			}
			bVar6 = true;
		}
	}
	if (bVar6)
	{
		func_67();
	}
}

void func_52()
{
	Vector3 vVar0;
	struct<4> /*32*/ sVar12;
	bool bVar19;

	if (!func_71(6))
	{
		return;
	}
	func_21(6, &vVar0);
	if (!vVar0.z)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vVar0);
		func_203(6);
		return;
	}
	func_20(&sVar12);
	bVar19 = false;
	if (!sVar12.f_3)
	{
		bVar19 = true;
	}
	if (func_187(vVar0.x, Global_35, 1, 1) > 100.0f)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		func_202(6, 0);
		func_203(6);
	}
}

void func_53()
{
	struct<11> /*88*/ sVar0;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_71(1))
	{
		func_222();
		return;
	}
	func_21(1, &sVar0);
	if (!sVar0.f_2)
	{
		func_222();
		return;
	}
	if (func_223(1))
	{
		func_222();
		return;
	}
	if (func_115(1) >= 1)
	{
		func_222();
		return;
	}
	if (!func_224(1))
	{
		func_222();
		return;
	}
	if (sVar0.f_10)
	{
		func_222();
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(sVar0.f_9))
	{
		func_222();
		return;
	}
	iVar12 = MISC::GET_GAME_TIMER();
	if (!func_225())
	{
		iVar13 = func_226();
		if (iVar13 == 0)
		{
			func_227(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_228(1);
		}
	}
	if (!func_225())
	{
		return;
	}
	if (!func_168(sVar0.f_0, joaat("SCRIPT_TASK_FLEE")))
	{
		TASK::TASK_SMART_FLEE_PED(sVar0.f_0, Global_35, 500.0f, -1, 0, 1.0f, 0);
		PED::SET_PED_KEEP_TASK(sVar0.f_0, true);
	}
	if (func_229(sVar0.f_0, -1))
	{
		return;
	}
	iVar14 = func_230();
	if (iVar14 == 0)
	{
		func_231(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		func_202(1, 1);
		func_222();
	}
}

void func_54()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		bVar1 = true;
		iVar0 = PED::GET_MOUNT(Global_35);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (Global_40.f_1095.f_1[iVar5 /*436*/].f_9 == 0)
		{
			if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 > -1)
			{
				Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1900383[iVar5 /*45*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = true;
				if (bVar1)
				{
					if (iVar0 == iVar2)
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 > -1)
				{
					Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = -1;
				}
			}
			else
			{
				iVar6 = CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
				if (bVar3)
				{
					iVar7 = PED::_0xE8D1CCB9375C101B(iVar2, PLAYER::PLAYER_ID());
					if (iVar7 == -1 || iVar7 == 0)
					{
						iVar7 = iVar6;
						PED::_0xA691C10054275290(iVar2, PLAYER::PLAYER_ID(), iVar7);
					}
					if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 != iVar7)
					{
						Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = iVar7;
					}
				}
				else if (Global_40.f_1095.f_1[iVar5 /*436*/].f_431 == -1)
				{
					Global_40.f_1095.f_1[iVar5 /*436*/].f_431 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_55()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (func_232())
	{
		bVar1 = true;
	}
	if (func_71(0))
	{
		iVar2 = func_88(0);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar2, 31, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar2, 32, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar2, 33, 2, bVar1);
	}
	if (func_71(1))
	{
		iVar3 = func_88(1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar3, 31, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar3, 32, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar3, 33, 2, bVar1);
	}
}

void func_56()
{
	if (func_140(33))
	{
		if (!func_233())
		{
			func_234(1);
		}
	}
	else if (func_233())
	{
		func_234(0);
	}
	if (func_140(34))
	{
		if (!func_235())
		{
			func_236(1);
		}
	}
	else if (func_235())
	{
		func_236(0);
	}
	if (func_140(35))
	{
		if (!func_237())
		{
			func_238(1);
		}
	}
	else if (func_237())
	{
		func_238(0);
	}
}

void func_57(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, struct<5> /*40*/ sParam7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	int iVar1;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam7.f_1)
	{
		return;
	}
	if (!sParam7.f_2)
	{
		return;
	}
	if (!sParam7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_239(iParam19) >= 40)
	{
		return;
	}
	fVar0 = func_187(sParam7.f_0, Global_35, 1, 1);
	if (fVar0 > 40.0f)
	{
		func_99(iParam19);
		return;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(sParam7.f_0))
	{
		func_99(iParam19);
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!func_240(iParam19))
	{
		func_241(iParam19, iVar1);
		return;
	}
	if (func_242(iParam19) + 15000 < iVar1)
	{
		func_243(0, joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"), 0, 0, 0, 0, 1065353216, 0);
		func_244(iParam19);
		func_241(iParam19, iVar1);
	}
}

void func_58(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, struct<6> /*48*/ sParam7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	float fVar7;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam7.f_1)
	{
		return;
	}
	if (!sParam7.f_2)
	{
		return;
	}
	if (sParam7.f_4)
	{
		return;
	}
	iParam19 = func_87(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { func_245(iParam19) /*3*/ };
	if (func_137(vVar0))
	{
		return;
	}
	vVar3 = { func_246(iParam19) /*3*/ };
	fVar6 = func_247(iParam19);
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(sParam7.f_5, vVar3, true);
	if (fVar7 > 0.01f)
	{
		fVar6 += fVar7;
		func_248(iParam19, sParam7.f_5);
		func_249(iParam19, fVar6);
	}
}

void func_59(struct<7> /*56*/ sParam0, struct<12> /*96*/ sParam7, struct<12> /*96*/ sParam19)
{
	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	func_250(sParam0);
	func_251(sParam0);
	func_252(sParam0, sParam7);
	func_253();
	func_254(sParam0, sParam7, sParam19);
	func_255(sParam0);
	func_256(sParam0, sParam7, sParam19);
	func_257(sParam0, sParam7, sParam19);
	func_258();
	func_259(sParam0);
	func_260();
	func_261(sParam0);
	func_262(sParam0);
	func_263(sParam0, sParam7);
	func_264(sParam0, sParam7, sParam19);
	func_265(sParam0);
	func_266();
}

void func_60()
{
	int iVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (func_267())
	{
		return;
	}
	iVar0 = func_268(0);
	if (func_269(iVar0))
	{
		if (func_270(iVar0) == 1)
		{
			return;
		}
	}
	bVar1 = func_271();
	if (WEAPON::_0x5A695BD328586B44(Global_35, 0) != bVar1)
	{
		WEAPON::_0xB832F1A686B9B810(Global_35, bVar1, 0);
	}
}

void func_61(int iParam0)
{
	bool bVar0;
	struct<94> /*752*/ sVar1;
	struct<11> /*88*/ sVar95;
	int iVar189;
	struct<4> /*32*/ sVar190;
	int iVar194;
	int iVar195;
	int iVar196;
	int iVar197;
	int iVar198;
	bool bVar199;
	bool bVar200;
	int iVar201;
	int iVar202;
	bool bVar203;
	int iVar204;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (func_96())
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	bVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	if (func_165(iParam0))
	{
		return;
	}
	sVar1.f_10 = 10;
	sVar95.f_10 = 10;
	func_272(&sVar1);
	iVar198 = 0;
	while (iVar198 < 3)
	{
		iVar189 = func_273(iVar198);
		iVar196 = iVar198;
		func_272(&sVar1);
		bVar199 = false;
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar190, bVar0, iVar189, 0))
		{
			bVar199 = true;
		}
		if (!bVar199)
		{
			iVar194 = sVar190.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar194) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar194))
			{
				bVar199 = true;
			}
		}
		if (!bVar199)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar194))
			{
				iVar195 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar194);
				if (PED::IS_PED_HUMAN(iVar195))
				{
					bVar199 = true;
				}
			}
		}
		if (bVar199)
		{
			func_274(&sVar95, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/]));
		}
		else
		{
			sVar1.f_0 = ENTITY::GET_ENTITY_MODEL(iVar194);
			sVar1.f_1 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(iVar194);
			sVar1.f_2 = ENTITY::_0xD21C7418C590BB40(iVar194);
			sVar1.f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar194);
			sVar1.f_93 = ENTITY::_0xB16C780C51E51E2B(iVar194);
			if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
			{
				func_275(iParam0, iVar194);
				iVar195 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar194);
				func_276(iVar195, &(sVar1.f_5), &(sVar1.f_6), &(sVar1.f_7), &(sVar1.f_4));
				bVar200 = func_277(&(sVar1.f_1), iVar195, sVar1.f_7, sVar1.f_5);
				if (!bVar200)
				{
				}
				iVar201 = PED::_GET_PED_META_OUTFIT_HASH(iVar195);
				sVar1.f_8 = iVar201;
				sVar1.f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(iVar195);
				if (sVar1.f_9 > 10)
				{
					sVar1.f_9 = 10;
				}
				iVar197 = 0;
				while (iVar197 < sVar1.f_9)
				{
					if (iVar197 >= 10)
					{
					}
					else
					{
						if (!PED::GET_META_PED_ASSET_GUIDS(iVar195, iVar197, &(sVar1.f_10[iVar197 /*8*/]), &(sVar1.f_10[iVar197 /*8*/].f_1), &(sVar1.f_10[iVar197 /*8*/].f_2), &(sVar1.f_10[iVar197 /*8*/].f_3)))
						{
						}
						if (!PED::GET_META_PED_ASSET_TINT(iVar195, iVar197, &(sVar1.f_10[iVar197 /*8*/].f_4), &(sVar1.f_10[iVar197 /*8*/].f_5), &(sVar1.f_10[iVar197 /*8*/].f_6), &(sVar1.f_10[iVar197 /*8*/].f_7)))
						{
						}
					}
					iVar197++;
				}
				sVar1.f_91 = PERSISTENCE::_0x2E545965DF98D476(iVar194);
				sVar1.f_92 = 0;
				if (PED::_IS_METAPED_USING_COMPONENT(iVar195, 43391475) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar194))
				{
					sVar1.f_92 = 1;
				}
				if (MISC::_IS_PED_DECOMPOSED(iVar195))
				{
					iVar202 = 1;
					func_278(sVar1.f_1, iVar202);
					bVar203 = true;
					if (!func_279(Global_35, bVar0, 0))
					{
						bVar203 = false;
					}
					if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(bVar0, -1))
					{
						bVar203 = false;
					}
					if (bVar203)
					{
						TASK::_DETACH_CARRIABLE_PED(iVar194);
					}
					else
					{
						TASK::_DETACH_CARRIABLE_PED(iVar194);
					}
					if (func_280())
					{
						if (func_282(func_281(iVar195), 72))
						{
							func_283(98, 1);
						}
					}
					func_274(&sVar95, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/]));
				}
				else
				{
					if (sVar1.f_91 >= 12)
					{
						if (func_280())
						{
							if (func_282(func_281(iVar195), 72))
							{
								func_283(97, 0);
							}
						}
					}
					else if (sVar1.f_91 >= 2)
					{
						if (func_280())
						{
							if (func_282(func_281(iVar195), 72))
							{
								func_283(96, 0);
							}
						}
					}
					iVar204 = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/].f_1;
					if (func_284(sVar1.f_1, 0) && func_284(iVar204, 0))
					{
						if (sVar1.f_1 != iVar204)
						{
							if (func_285(bVar0, iVar204, 1, 1, joaat("REMOVE_REASON_DEFAULT")))
							{
								func_286(bVar0, iVar195);
							}
						}
					}
					func_274(&sVar1, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar196 /*94*/]));
				}
				iVar198++;
			}
		}
	}
}

void func_62(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	PED::_0x6F43C351A5D51E2F(iVar0, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
}

void func_63()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar6 = 0;
	while (iVar6 < 7)
	{
		if (!func_71(iVar6))
		{
		}
		else
		{
			iVar7 = func_88(iVar6);
			if (func_287(iVar6))
			{
				if (!func_288(iVar7))
				{
					iVar8 = func_289(iVar6);
					func_290(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_291(iVar6);
					func_292(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_293(iVar7);
						func_294(iVar6);
					}
					else if (!func_288(iVar7))
					{
					}
					else if (!func_287(iVar6))
					{
						iVar10 = func_295(iVar7);
						func_296(iVar6, 1);
						func_297(iVar6, iVar10);
						func_298(iVar6, func_221());
					}
				}
				iVar6++;
			}
		}
	}
}

void func_64(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_299(iParam0);
	bVar1 = func_300(iParam0);
	if (bVar0)
	{
		if (func_301(iParam0))
		{
			if (bVar1)
			{
				return;
			}
			iVar3 = func_302(iParam0);
			iVar4 = func_221();
			iVar2 = func_303(iVar3, iVar4);
			if (iVar2 < 2)
			{
				return;
			}
			func_304(iParam0, 1);
		}
		else
		{
			iVar4 = func_221();
			func_305(iParam0, iVar4);
			func_304(iParam0, 0);
			func_306(iParam0);
		}
	}
	else
	{
		if (!func_301(iParam0))
		{
			return;
		}
		func_305(iParam0, -15);
		func_307(iParam0);
	}
	if (!func_308(iParam0))
	{
		return;
	}
	if (!func_309(iParam0, 3.5f))
	{
		return;
	}
	func_304(iParam0, 0);
	func_306(iParam0);
}

void func_65()
{
	int iVar0;
	int iVar1;
	struct<8> /*64*/ sVar2;
	char cVar10[64];

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_71(iVar0))
		{
		}
		else
		{
			iVar1 = func_207(iVar0);
			if (!func_310(iVar1))
			{
			}
			else
			{
				sVar2 = { func_311(iVar0) /*8*/ };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar2))
				{
				}
				else
				{
					strcpy_s(&cVar10, 64, func_312(iVar1));
					strcpy_s(&sVar2, 64, HUD::_GET_LABEL_TEXT_2(&cVar10));
					if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar2))
					{
					}
					else
					{
						func_313(iVar0, sVar2);
						func_314(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_66(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	Vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_173(iParam0, 64))
	{
		func_315(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && !MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_140(42);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
			{
				Global_1900383[iParam0 /*45*/].f_27 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), iVar0);
				MAP::SET_BLIP_SPRITE(Global_1900383[iParam0 /*45*/].f_27, joaat("BLIP_SADDLE"), true);
				func_316(&(Global_1900383[iParam0 /*45*/].f_27));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
		{
			MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (Global_1935630.f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26) && bVar4)
	{
		func_315(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0 /*436*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = joaat("BLIP_STYLE_PLAYER_HORSE");
	}
	else if (iParam0 == 1)
	{
		iVar5 = joaat("BLIP_STYLE_TEMPORARY_HORSE");
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_115(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
			{
				MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		Global_1900383[iParam0 /*45*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1900383[iParam0 /*45*/].f_25 = 0;
		func_317(&(Global_1900383[iParam0 /*45*/].f_26), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_173(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_185(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) /*3*/ };
	fVar15 = func_90(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_89(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 3)
		{
			iVar17 = joaat("BLIP_MODIFIER_OBJECTIVE");
			Global_1900383[iParam0 /*45*/].f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 9)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 10)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 11)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 11;
				}
			}
			else if (fVar19 <= 1.0f)
			{
				if (Global_1900383[iParam0 /*45*/].f_25 != 12)
				{
					iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
					iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
					Global_1900383[iParam0 /*45*/].f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 5)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 6)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_2");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 7)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_3");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 7;
			}
		}
		else if (fVar19 <= 1.0f)
		{
			if (Global_1900383[iParam0 /*45*/].f_25 != 8)
			{
				iVar17 = joaat("BLIP_MODIFIER_HORSE_REVIVE_4");
				iVar18 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
				Global_1900383[iParam0 /*45*/].f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 4)
		{
			iVar17 = joaat("BLIP_MODIFIER_HORSE_STOLEN");
			Global_1900383[iParam0 /*45*/].f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 2)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1900383[iParam0 /*45*/].f_25 != 1)
		{
			iVar17 = joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE");
			Global_1900383[iParam0 /*45*/].f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_318(Global_1900383[iParam0 /*45*/].f_26);
		func_319(Global_1900383[iParam0 /*45*/].f_26);
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar17);
		if (iVar17 == joaat("BLIP_MODIFIER_OBJECTIVE"))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	}
	if (func_320(iVar0) && !bVar9)
	{
		if (iVar5 == joaat("BLIP_STYLE_PLAYER_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED");
		}
		else if (iVar5 == joaat("BLIP_STYLE_TEMPORARY_HORSE"))
		{
			iVar20 = joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED");
		}
		MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, iVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
		MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
	}
	iVar21 = func_115(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_4");
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_0");
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_1");
				break;
			case 2:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_2");
				break;
			case 3:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_3");
				break;
			case 4:
				iVar22 = joaat("BLIP_HORSE_TEMP_BONDING_4");
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1900383[iParam0 /*45*/].f_26);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1900383[iParam0 /*45*/].f_26);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_67()
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1900383.f_393;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
		}
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	bVar1 = func_321(Global_35, iVar0);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
		}
	}
	else if (func_213() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1900383.f_393.f_1));
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1900383.f_393.f_1))
	{
		Global_1900383.f_393.f_1 = MAP::BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_PLAYER_HORSE_SADDLE"), iVar0);
		func_316(&(Global_1900383.f_393.f_1));
	}
}

void func_68()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_322(Global_1900383.f_432, Global_1900383.f_433);
	bVar0 = false;
	iVar1 = Global_1900383.f_433;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383.f_433 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383.f_432;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383.f_432 = iVar2;
	}
}

void func_69()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_323(Global_1900383.f_434, Global_1900383.f_435);
	bVar0 = false;
	iVar1 = Global_1900383.f_435;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1900383.f_435 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1900383.f_434;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1900383.f_434 = iVar2;
	}
}

void func_70()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (Global_16)
	{
		return;
	}
	if (func_34())
	{
		return;
	}
	switch (Global_1900383.f_317.f_1)
	{
		case 0:
			func_324(0);
			break;
		case 1:
			func_324(1);
			break;
		case 2:
			func_324(6);
			break;
	}
	iVar0 = Global_1900383.f_317.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1900383.f_317.f_1 = iVar0;
}

bool func_71(int iParam0)
{
	iParam0 = func_87(iParam0);
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

bool func_72(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_2;
}

void func_73(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	func_325(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_208(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_326(iParam0, 0);
	func_183(iParam0);
}

void func_74()
{
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1913814.f_202))
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1913814.f_202);
	}
	func_327(128);
	func_328(6);
}

int func_75()
{
	int iVar0;

	iVar0 = joaat("P_CS_SADDLEBUNDLE01X");
	return iVar0;
}

bool func_76(int iParam0)
{
	return Global_1900383.f_316 & iParam0 != 0;
}

bool func_77(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return false;
	}
	return Global_1913814.f_209[iParam0];
}

bool func_78(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(iParam0);
	while ((!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (bVar1)
	{
		func_329();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_79(int iParam0)
{
	Global_1900383.f_316 |= iParam0;
}

void func_80(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814.f_209[iParam0] = 1;
}

struct<4> /*32*/ func_81()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_330(0) /*4*/ };
	return func_331(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

bool func_82(int iParam0, struct<4> /*32*/ sParam1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> /*16*/ sVar3;
	struct<4> /*32*/ sVar7;
	int iVar11;
	struct<5> /*40*/ sVar12;

	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	sVar12 = { sParam1 /*4*/ };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &sVar3))
		{
			if (func_284(sVar3.f_0, 0))
			{
				sVar12.f_4 = sVar3.f_1;
				if (func_332(sVar3.f_0, sParam1, sVar12.f_4, 0) > 0)
				{
				}
				else
				{
					func_333(&sVar7);
					if (func_334(sVar3.f_0, &sVar7, &sVar12, 1, joaat("ADD_REASON_DEFAULT"), 1))
					{
						if (bParam5)
						{
							func_335(sVar7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_83()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

int func_84(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_14;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (iVar2 == -1)
		{
		}
		else if (iVar2 == 3)
		{
		}
		else
		{
			iVar1 = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar2 /*94*/];
			if (iVar1 == 0)
			{
			}
			else if (!STREAMING::IS_MODEL_VALID(iVar1))
			{
			}
			else if (!STREAMING::IS_MODEL_A_PED(iVar1))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_86(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	bool bVar67;
	float fVar68;
	bool bVar69;
	int iVar70;
	bool bVar71;
	int iVar72;
	int iVar73;
	struct<2> /*16*/ sVar74;
	struct<6> /*48*/ sVar76;
	int iVar82;
	int iVar83;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_173(iParam0, 1))
	{
		return;
	}
	if (func_336(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	iVar1 = func_88(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
		{
			return;
		}
	}
	vVar3 = { func_337(iParam0) /*3*/ };
	fVar6 = func_338(iParam0);
	if (func_137(vVar3))
	{
		return;
	}
	iVar7 = func_207(iParam0);
	STREAMING::REQUEST_COLLISION_FOR_MODEL(iVar7);
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar3);
	iVar8 = MISC::GET_GAME_TIMER();
	if (!bVar2)
	{
		func_339(iParam0);
		if (!func_340())
		{
			return;
		}
		if (!func_341(iParam0))
		{
			return;
		}
		iVar1 = func_342(iVar7, vVar3, fVar6, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		func_326(iParam0, iVar1);
		func_343(iVar1);
		func_344(iVar1, iParam0);
		func_314(iParam0);
		PED::_EQUIP_META_PED_OUTFIT_PRESET(iVar1, 0, false);
		uVar9 = 57;
		func_345(iParam0, &uVar9);
		func_346(iParam0, &uVar9);
		func_347(iParam0);
		func_348(iParam0);
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			bVar67 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		if (func_97(iParam0))
		{
			fVar68 = func_349(iParam0);
			PED::_SET_PED_WRITHING_DURATION(iVar1, fVar68, fVar68, 0);
			TASK::TASK_ANIMAL_WRITHE(iVar1, 0, 1);
		}
		func_200(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
		func_350(iParam0, iVar8);
	}
	bVar69 = false;
	if (!PED::IS_PED_READY_TO_RENDER(iVar1))
	{
		bVar69 = true;
	}
	if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar1))
	{
		iVar70 = func_351(iParam0) + 5000;
		if (iVar70 < iVar8)
		{
		}
		else
		{
			bVar69 = true;
		}
	}
	if (bVar69)
	{
		return;
	}
	bVar71 = false;
	iVar72 = func_201();
	if (iParam0 == iVar72)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, iVar1);
		bVar71 = true;
	}
	if (bVar71)
	{
		PED::SET_PED_CONFIG_FLAG(iVar1, 186, false);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iVar1, 186, true);
	}
	iVar73 = func_352(iParam0);
	func_353(iVar1, iVar73);
	sVar74 = { func_354(iParam0) /*2*/ };
	if (bVar71)
	{
		sVar76 = { func_355() /*6*/ };
	}
	else
	{
		func_356(&sVar76);
	}
	iVar82 = func_357(iVar1, 2);
	iVar83 = func_358(iVar82);
	func_359(iParam0, iVar83);
	if (!bVar71 && func_360(iParam0))
	{
		func_361(iVar1, 0);
	}
	func_362(iVar1, &sVar74, &sVar76, iVar83);
	func_363(iParam0);
	func_315(iParam0);
	func_66(iParam0);
	func_364(iParam0);
	func_365(iParam0);
	func_366(iParam0);
}

int func_87(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_88(int iParam0)
{
	iParam0 = func_87(iParam0);
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

float func_89(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_207(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_115(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_115(iParam0) + 1;
	fVar6 = func_367(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_368(fVar3, fVar4, fVar11);
	return fVar12;
}

float func_90(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_91()
{
	if (!func_3(256))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (func_369())
	{
		return false;
	}
	if (func_94() && !func_140(32))
	{
		return false;
	}
	if (func_76(2) || func_76(4))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_HOGTIED(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	return true;
}

void func_92(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, Vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	bVar0 = false;
	if (vParam7.z)
	{
		if (func_115(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (func_115(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = MISC::GET_GAME_TIMER();
	switch (func_370())
	{
		case 0:
			func_15(1);
		case 1:
			func_371(0);
			func_372(joaat("WHISTLEHORSERESPONSIVE"));
			func_373(0, 0);
			func_373(1, 0);
			func_327(1);
			func_15(2);
		case 2:
			if (!func_76(1))
			{
				return;
			}
			func_15(3);
		case 3:
			func_374(iVar2);
			func_327(1);
			func_15(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (func_134() == 8)
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_95(37) && !func_95(43))
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(10, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_95(43) && !func_95(44))
			{
				if (func_84(0) == 1)
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(10, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
				if (vParam19.z)
				{
					if (bVar1)
					{
					}
				}
			}
			if (func_376(5))
			{
				if (func_84(0) == 0 && (func_84(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_377();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((func_84(0) == 0 && (func_84(1) == 0 || !bVar1)) && func_84(5) == 0)
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						func_283(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_84(0) == 1 || (func_84(1) == 1 && bVar1))
			{
				iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
				if (INTERIOR::IS_VALID_INTERIOR(iVar6))
				{
					if (!bVar3)
					{
						if (func_378(iVar6))
						{
							if (!func_375())
							{
								func_283(14, 1);
							}
						}
						else if (func_379(iVar6))
						{
							if (!func_375())
							{
								func_283(15, 1);
							}
						}
						else if (!func_375())
						{
							func_283(13, 1);
						}
						if (func_71(0))
						{
							fVar7 = func_89(0);
							iVar8 = func_88(0);
							if (!func_380(0) && !func_223(0))
							{
								if (func_187(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1.0f, -1.0f, -1.0f);
								}
							}
						}
						if (func_71(1))
						{
							fVar7 = func_89(1);
							iVar8 = func_88(1);
							if (!func_380(1) && !func_223(1))
							{
								if (func_187(Global_35, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_35, 0, -1.0f, -1.0f, -1.0f);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (func_76(16) || !func_140(32))
			{
				if (!bVar3)
				{
					if (!func_375())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1900383.f_378.f_12)))
						{
							func_381(&(Global_1900383.f_378.f_12), 10000, 0, 0, 0, 1);
						}
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (vParam7.z)
			{
				if (!bVar0)
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(7, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
			}
			if (vParam19.z)
			{
				if (!bVar1)
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_375())
							{
								func_283(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (func_189(0))
				{
					if (!bVar3)
					{
						if (!func_375())
						{
							func_283(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (func_189(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_375())
							{
								func_283(16, 1);
							}
							bVar3 = true;
						}
					}
				}
			}
			PLAYER::_0x9044835BE9D9DBFE(uParam0, (bVar4 || bVar5));
			if (!bVar4)
			{
				if (vParam7.z)
				{
					func_66(0);
					func_382(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					func_66(1);
					func_382(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				func_15(1);
				return;
			}
			func_15(5);
		case 5:
			if (func_95(43) && !func_95(44))
			{
				func_373(0, 6);
			}
			else
			{
				func_383(0);
			}
			func_383(1);
			if (func_384(0) == 6 && func_384(1) == 6)
			{
				func_15(1);
			}
			break;
	}
}

int func_93()
{
	if (func_76(2) || func_76(4))
	{
		func_327(2);
		func_327(4);
		return 1;
	}
	return 0;
}

bool func_94()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_95(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_135(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_96()
{
	return func_385(Global_1935630, (1 << 12));
}

bool func_97(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420;
}

void func_98(int iParam0, var uParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_420 = uParam1;
}

void func_99(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_42 = 0;
}

int func_100(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383[iParam0 /*45*/].f_41;
}

void func_101(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_41 = iParam1;
}

void func_102(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1 = fParam1;
}

bool func_103()
{
	return Global_1392040.f_6;
}

void func_104(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_315(iParam0);
	if (func_194(56))
	{
		func_195(56);
	}
	if (func_196(56))
	{
		func_197(56);
	}
	if (func_194(57))
	{
		func_195(57);
	}
	if (func_196(57))
	{
		func_197(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && func_84(0) == 0) && func_84(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_188(iParam0, 1);
	}
	else
	{
		func_202(iParam0, 0);
	}
}

void func_105(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_336(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_71(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = func_88(iParam0);
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_IS_PED_MODEL_SUPPRESSED(iVar2))
		{
			if (!func_208(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		if (func_173(iParam0, 4))
		{
			func_73(iParam0);
		}
		else if (func_173(iParam0, 8))
		{
			func_315(iParam0);
			func_386(iParam0);
			PED::SET_PED_KEEP_TASK(iVar1, true);
			TASK::TASK_SMART_FLEE_PED(iVar1, Global_35, 500.0f, -1, 0, 1.0f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (func_173(iParam0, 2))
		{
			func_315(iParam0);
			func_386(iParam0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
	if (func_173(iParam0, 16))
	{
		func_203(iParam0);
	}
	func_326(iParam0, 0);
	func_183(iParam0);
	func_366(iParam0);
	func_387(iParam0, 2);
	func_387(iParam0, 4);
	func_387(iParam0, 8);
	func_387(iParam0, 16);
}

void func_106()
{
	Global_1900383.f_404 = 0;
	Global_1900383.f_404.f_1 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383.f_404.f_4 = 0.0f;
	Global_1900383.f_404.f_5 = 0;
	Global_1900383.f_404.f_6 = 0;
}

bool func_107(int iParam0)
{
	int iVar0;
	bool bVar1;
	Vector3 vVar2;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;

	if (func_76((1 << 10)))
	{
		return false;
	}
	if (!func_140(43))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (func_388(iParam0))
	{
		return false;
	}
	if (func_389(iParam0))
	{
		return false;
	}
	if (func_390(iParam0))
	{
		return false;
	}
	if (func_391(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_392(iVar0))
	{
		return false;
	}
	if (func_393(iVar0))
	{
		return false;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == iParam0)
		{
			bVar1 = true;
		}
		else
		{
			return false;
		}
	}
	if (bVar1)
	{
		if (iParam0 != func_394())
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) /*3*/ };
			func_106();
			func_395(iParam0);
			func_110(vVar2);
		}
		iVar5 = MISC::GET_GAME_TIMER();
		iVar6 = func_396();
		if (iVar6 == 0)
		{
			func_397(iVar5);
			return false;
		}
		if (iVar6 + 2000 > iVar5)
		{
			return false;
		}
	}
	else
	{
		func_397(0);
	}
	if (func_398(iParam0, &uVar7, 100.0f))
	{
		return false;
	}
	iVar8 = PLAYER::PLAYER_ID();
	if (func_399(iVar8, 1, 0, 1))
	{
		return false;
	}
	if (LAW::_ARE_WITNESSES_PENDING(iVar8))
	{
	}
	if (LAW::ARE_WITNESSES_ACTIVE(iVar8))
	{
		return false;
	}
	if (LAW::_ARE_INVESTIGATORS_ACTIVE(iVar8, true, 0))
	{
		return false;
	}
	if (!func_400(iParam0))
	{
		return false;
	}
	return true;
}

bool func_108()
{
	return Global_1900383.f_404.f_5;
}

Vector3 func_109()
{
	return Global_1900383.f_404.f_1;
}

void func_110(Vector3 vParam0)
{
	Global_1900383.f_404.f_1 = { vParam0 /*3*/ };
}

float func_111()
{
	return Global_1900383.f_404.f_4;
}

void func_112(float fParam0)
{
	Global_1900383.f_404.f_4 = fParam0;
}

void func_113(int iParam0)
{
	Global_1900383.f_404.f_5 = iParam0;
}

int func_114(int iParam0)
{
	bool bVar0;

	if (func_76((1 << 10)))
	{
		return 0;
	}
	if (!func_140(43))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0;
	}
	if (func_388(iParam0))
	{
		if (func_401(iParam0) != 6)
		{
			return 0;
		}
	}
	if (func_402(iParam0) > 0)
	{
		bVar0 = false;
		if (func_388(iParam0))
		{
			if (func_401(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_116(6, 1);
		}
		else
		{
			func_403(iParam0);
		}
		func_106();
		func_404();
		return 1;
	}
	else
	{
		if (!func_107(iParam0))
		{
			return 0;
		}
		func_405(iParam0, 0);
		func_106();
		func_404();
		return 1;
	}
	return 0;
}

int func_115(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

void func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_315(iParam0);
	func_315(iParam0);
	func_406(iParam0, iParam1);
	func_407(iParam0, iParam1);
	func_408(iParam0, iParam1);
	iVar1 = func_88(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_343(iVar1);
		}
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar1)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar1)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	iVar3 = func_88(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_343(iVar3);
		}
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			bVar4 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar3);
		}
		else
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar3)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
			}
			if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar3)
			{
				PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
			}
		}
	}
	func_404();
}

bool func_117(struct<5> /*40*/ sParam0, var uParam5, var uParam6, bool bParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!sParam0.f_2)
	{
		return false;
	}
	if (!sParam0.f_3)
	{
		return false;
	}
	if (sParam0.f_4)
	{
		return false;
	}
	if (bParam8)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			return false;
		}
		*bParam7 = PED::GET_MOUNT(Global_35);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*bParam7))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*bParam7))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*bParam7))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(*bParam7))
	{
		return false;
	}
	if (func_388(*bParam7))
	{
		return false;
	}
	if (func_389(*bParam7))
	{
		return false;
	}
	if (func_409(*bParam7))
	{
		return false;
	}
	if (func_410(*bParam7))
	{
		return false;
	}
	if (func_391(*bParam7))
	{
		return false;
	}
	if (func_390(*bParam7))
	{
		return false;
	}
	if (func_411(*bParam7))
	{
		return false;
	}
	bVar0 = func_412();
	bVar1 = false;
	iVar2 = PED::_GET_ACTIVE_ANIMAL_OWNER(*bParam7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar0 || bVar1)
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_118()
{
	Global_1900383.f_414 = 0;
	Global_1900383.f_414.f_1 = 0;
}

void func_119(bool bParam0)
{
	char* sVar0;
	bool bVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (func_391(bParam0))
	{
		return;
	}
	sVar0 = "bHorseHasBeenStolen";
	bVar1 = false;
	if (!DECORATOR::DECOR_EXIST_ON(bParam0, sVar0))
	{
		DECORATOR::DECOR_SET_BOOL(bParam0, sVar0, true);
		bVar1 = true;
	}
	else if (!DECORATOR::DECOR_GET_BOOL(bParam0, sVar0))
	{
		DECORATOR::DECOR_SET_BOOL(bParam0, sVar0, true);
		bVar1 = true;
	}
	if (PED::GET_PED_CONFIG_FLAG(bParam0, 6, true))
	{
		bVar1 = false;
	}
	if (bVar1)
	{
		func_413(bParam0);
	}
}

int func_120()
{
	return Global_1900372;
}

void func_121()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	func_414(0);
	Global_1935689.f_6 = 1;
}

void func_122()
{
	func_415(0);
	func_416(1);
}

void func_123()
{
	int iVar0;
	int iVar1;

	if (!func_417())
	{
		return;
	}
	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	if (!func_420(iVar1))
	{
		func_416(7);
		return;
	}
	func_416(2);
}

void func_124()
{
	int iVar0;
	int iVar1;

	iVar0 = func_418();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
	if (iVar1 != 0)
	{
		if (iVar1 != Global_35)
		{
			func_416(7);
			return;
		}
	}
	if (PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(iVar0) != 0)
	{
		func_416(7);
		return;
	}
	if (!func_421())
	{
		func_416(7);
		return;
	}
	func_416(3);
}

void func_125()
{
	int iVar0;
	int iVar1;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	if (func_422(iVar0, iVar1))
	{
		func_423(MISC::GET_GAME_TIMER());
		func_416(4);
	}
}

void func_126()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		bVar2 = true;
	}
	else if (func_424() + 500 < MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_GAME_TIMER();
		func_423(iVar3);
		func_425(iVar3);
		func_416(5);
		if (iVar1 == joaat("KIT_HORSE_BRUSH"))
		{
			func_426(iVar0);
			iVar4 = func_357(iVar0, 0);
			func_427(iVar4);
			func_428(0);
		}
		else
		{
			func_426(0);
			func_427(0);
			func_428(0);
		}
	}
}

void func_127()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_416(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_416(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_416(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_416(7);
		return;
	}
	bVar2 = false;
	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar2 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("INTERACT")))
	{
		func_429(1);
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_430())
		{
			if (func_431(iVar1, joaat("CI_TAG_ITEM_CONSUMABLE")))
			{
				func_432(iVar1, 1, 0, joaat("REMOVE_REASON_USED"), 0);
			}
			func_433(iVar0, iVar1);
		}
		else
		{
			func_416(7);
			return;
		}
		func_423(MISC::GET_GAME_TIMER());
		func_416(6);
	}
}

void func_128()
{
	bool bVar0;

	bVar0 = false;
	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		if (func_424() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar0 = true;
		}
	}
	if (func_434())
	{
		bVar0 = true;
	}
	if (func_430())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_416(7);
	}
}

void func_129()
{
	func_415(0);
	func_416(0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

void func_130()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_435();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	bVar1 = ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BRUSHING"));
	if (bVar1)
	{
		if (!func_436())
		{
			func_428(1);
		}
	}
	if (!func_436())
	{
		return;
	}
	bVar2 = false;
	if (func_388(iVar0))
	{
		iVar3 = func_401(iVar0);
		iVar4 = func_437(iVar3, 0);
		if (iVar4 > 0)
		{
			func_438(iVar3, 0, -1);
			bVar2 = true;
		}
	}
	else
	{
		iVar5 = func_357(iVar0, 0);
		if (iVar5 > 0)
		{
			func_439(iVar0, 0, -1);
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		PED::_0xE29D8CD66553DBAA(iVar0);
	}
	if (func_357(iVar0, 0) == 0)
	{
		func_426(0);
		func_428(0);
	}
}

bool func_131(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_84(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_132(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_23, bParam0);
}

bool func_133()
{
	return Global_1900383.f_443;
}

int func_134()
{
	return Global_1897952.f_41;
}

bool func_135(int iParam0, bool bParam1)
{
	switch (func_440(iParam0))
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

int func_136(int iParam0, var uParam1, var uParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	*uParam1 = { Global_40.f_1095.f_1[iParam0 /*436*/].f_427 /*3*/ };
	*uParam2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_430;
	return 1;
}

bool func_137(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_138()
{
	Global_1900383.f_443 = 0;
}

int func_139(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> /*16*/ sVar8;
	struct<6> /*48*/ sVar10;
	int iVar16;
	int iVar17;

	uParam1->f_10 = func_87(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*uParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*uParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_137(uParam1->f_6))
		{
		}
	}
	bVar0 = func_94();
	if (*uParam1)
	{
		if (bVar0 && !func_135(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (func_131(5))
			{
				func_73(5);
				func_203(5);
				func_217(0);
				func_214(0);
			}
		}
	}
	if (func_441(Global_36) == 8)
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_135(Global_1835011[37 /*74*/].f_1, 1)) && !func_135(Global_1835011[43 /*74*/].f_1, 1))
	{
		*uParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_135(Global_1835011[43 /*74*/].f_1, 1)) && !func_135(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_88(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_71(iVar1))
	{
		bVar3 = true;
		if (func_380(iVar1))
		{
			bVar4 = true;
		}
		if (func_442(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_443(uParam1->f_10);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_131(0) && func_131(1))
			{
				func_116(1, 0);
				*uParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_210())
			{
				func_444();
			}
			func_217(0);
			func_214(0);
			func_215(uParam1->f_6);
		}
	}
	if (!func_71(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_207(uParam1->f_10) == 0 || func_445(uParam1->f_10) == 0) || func_84(uParam1->f_10) == 0)
			{
				func_446(uParam1->f_10);
			}
			func_447(uParam1->f_10);
			func_448(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*uParam0 = 0;
			return 0;
		}
		*uParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_88(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_71(iVar1))
	{
		bVar3 = true;
		if (func_380(iVar1))
		{
			bVar4 = true;
		}
		if (func_442(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!func_137(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
			}
		}
	}
	if (func_165(uParam1->f_10))
	{
		*uParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*uParam0 = 0;
				return 0;
			}
			*uParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::IS_PED_READY_TO_RENDER(iVar2))
			{
				*uParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			sVar8 = { func_354(uParam1->f_10) /*2*/ };
			sVar10 = { func_355() /*6*/ };
			func_362(iVar2, &sVar8, &sVar10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*uParam0 = 2;
		return iVar2;
	}
	if (!func_72(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		func_449(uParam1->f_10);
		if (uParam1->f_2 && !func_137(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_UNHITCH_HORSE(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar2, false);
		}
		*uParam0 = 2;
		return iVar2;
	}
	func_450(uParam1->f_10);
	if (func_72(uParam1->f_10))
	{
		iVar16 = func_181(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*uParam0 = 1;
			return 0;
		}
	}
	*uParam0 = 2;
	return iVar2;
}

bool func_140(int iParam0)
{
	if (!func_451(iParam0))
	{
		return false;
	}
	return func_452(iParam0);
}

void func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != Global_35)
	{
		bVar3 = true;
	}
	bVar4 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar4 = true;
	}
	if ((fVar2 < 0.5f || bVar3) || !bVar4)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 >= 100.0f)
	{
		func_453(1, 100.0f);
		fVar5 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 - 100.0f);
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = fVar5;
	}
	fVar6 = PED::_GET_PED_STAMINA(iVar1);
	if (fVar6 < 1.0f)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (fVar2 > 0.5f && fVar2 <= 4.0f)
	{
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 0;
		}
	}
	if (fVar2 > 4.0f && fVar2 <= 6.0f)
	{
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 1;
		}
	}
	if (fVar2 > 6.0f)
	{
		if ((Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0) || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 2;
		}
	}
	if (fVar2 > 10.0f)
	{
		if (((Global_1900383.f_317.f_2[iParam0 /*5*/] == -1 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 0) || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1) || Global_1900383.f_317.f_2[iParam0 /*5*/] == 2)
		{
			Global_1900383.f_317.f_2[iParam0 /*5*/] = 3;
		}
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/] == -1)
	{
		return;
	}
	iVar7 = MISC::GET_GAME_TIMER();
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 == -1)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = iVar7;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 + 5000 < iVar7)
	{
		if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 0 || Global_1900383.f_317.f_2[iParam0 /*5*/] == 1)
		{
			func_454(iParam0, 1);
		}
		else if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 2)
		{
			func_454(iParam0, 2);
		}
		else if (Global_1900383.f_317.f_2[iParam0 /*5*/] == 3)
		{
			func_454(iParam0, 3);
		}
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iParam0 /*5*/] = -1;
	}
}

void func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;

	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar3 = true;
	}
	if (((!TASK::_IS_PED_LEADING_HORSE(Global_35) || TASK::_GET_LED_HORSE_FROM_PED(Global_35) != iVar1) || fVar2 < 0.5f) || !bVar3)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = -1;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 >= 20.0f)
	{
		func_453(4, 20.0f);
		fVar4 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 - 20.0f);
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = fVar4;
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 == -1)
	{
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = iVar5;
		return;
	}
	if (Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 + 5000 < iVar5)
	{
		func_454(iParam0, 4);
		Global_1900383.f_317.f_2[iParam0 /*5*/].f_3 = -1;
	}
}

void func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_207(iParam0);
	if (func_115(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return;
	}
	bVar2 = PED::_GET_RIDER_OF_MOUNT(iVar1, false) == Global_35;
	if (!bVar2)
	{
		return;
	}
	iVar3 = PED::_GET_LASSO_TARGET(Global_35);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = func_455(iVar3, Global_35);
	if (bVar4)
	{
	}
	DECORATOR::DECOR_SET_BOOL(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_144(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
		return;
	}
	if (func_456(sVar0.f_1))
	{
		return;
	}
	if (sVar0.f_1 == Global_35)
	{
		return;
	}
	iVar2 = Global_1935630.f_40;
	if (PED::IS_PED_INJURED(iVar2))
	{
		return;
	}
	if (func_388(iVar2))
	{
	}
	if (ENTITY::IS_ENTITY_A_PED(sVar0.f_0))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0);
		if (!iVar3 == iVar2)
		{
			return;
		}
	}
	else
	{
		return;
	}
	iVar4 = sVar0.f_1;
	if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar4, iVar2, true, true))
	{
		return;
	}
	if (!PED::IS_PED_HUMAN(iVar4))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar4, "bHasBeenTrampledByHorse"))
	{
		return;
	}
	bVar5 = func_455(iVar4, Global_35);
	if (bVar5)
	{
		if (func_457(iVar4, joaat("HONOR_EVENT_TRAMPLED_INNOCENT")))
		{
			func_243(0, joaat("HONOR_EVENT_TRAMPLED_INNOCENT"), 0, 0, iVar4, 0, 1065353216, 0);
		}
	}
	else if (func_456(iVar4))
	{
	}
	else if (!func_458(iVar4, joaat("HONOR_EVENT_TRAMPLED_INNOCENT")))
	{
		func_243(0, joaat("HONOR_EVENT_TRAMPLED_INNOCENT"), 0, 0, iVar4, 0, 1065353216, 0);
	}
	DECORATOR::DECOR_SET_BOOL(iVar4, "bHasBeenTrampledByHorse", true);
}

void func_145(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &iVar0, 1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return;
	}
	if (!func_388(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
	{
		return;
	}
	func_459();
}

void func_146(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(sVar0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(sVar0.f_0))
	{
		return;
	}
	iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_1);
	iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0);
	if (!func_388(iVar10))
	{
		return;
	}
	if (iVar9 == Global_35)
	{
		iVar11 = func_401(iVar10);
		if ((iVar11 != -1 && sVar0.f_2 != 0) && sVar0.f_4 > 5.0f)
		{
		}
	}
}

void func_147(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar9;
	int iVar10;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(sVar0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(sVar0.f_0))
	{
		return;
	}
	iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_1);
	iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar9))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	if (func_388(iVar10))
	{
		return;
	}
	if (iVar9 != Global_35)
	{
		return;
	}
	func_460(iVar10, sVar0.f_2, sVar0.f_3);
}

void func_148(int iParam0)
{
	Global_1359489.f_16 |= iParam0;
}

void func_149(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
	{
		return;
	}
	if (iVar4 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(vVar0.z))
	{
		iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.z);
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			if (ENTITY::GET_IS_ANIMAL(iVar5) && ENTITY::_GET_IS_PREDATOR(iVar5))
			{
				if (func_388(iVar3))
				{
					iVar6 = func_401(iVar3);
					iVar7 = func_207(iVar6);
					iVar8 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar7, 7);
					if (func_115(iVar6) < iVar8)
					{
						func_283(37, 0);
					}
					func_192(iVar6, 1);
					func_193(iVar6, MISC::GET_GAME_TIMER());
				}
			}
		}
	}
}

void func_150(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar6;
	int iVar7;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 6))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return;
	}
	iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
	{
		return;
	}
	if (iVar7 != Global_35)
	{
		return;
	}
}

void func_151(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	iVar4 = vVar0.z;
	if (iVar3 != Global_35)
	{
		return;
	}
	switch (iVar4)
	{
		case joaat("INTERACTION_POSITIVELONG"):
		case joaat("INTERACTION_POSITIVESHORT"):
			break;
		case joaat("INTERACTION_CANCEL"):
			break;
		case joaat("INTERACTION_COMPLETE"):
			if (iVar4 == joaat("INTERACTION_BRUSH"))
			{
			}
			func_461(1);
			break;
	}
}

void func_152(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	Vector3 vVar7;
	Vector3 vVar10;
	float fVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 4))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
		return;
	}
	iVar4 = sVar0.f_0;
	iVar5 = sVar0.f_1;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (!func_388(iVar5))
	{
		return;
	}
	iVar6 = func_401(iVar5);
	vVar7 = { func_245(iVar6) /*3*/ };
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar5, true, false) /*3*/ };
	if (!sVar0.f_2)
	{
		func_462(iVar6, vVar10);
		func_248(iVar6, vVar10);
		func_249(iVar6, 0.0f);
		return;
	}
	if (sVar0.f_3 == 0)
	{
		return;
	}
	if (!func_137(vVar7))
	{
		fVar13 = func_247(iVar6);
		if (fVar13 < 200.0f)
		{
			func_462(iVar6, vVar10);
			func_454(iVar6, 12);
			return;
		}
	}
	func_454(iVar6, 11);
	func_462(iVar6, vVar10);
	func_248(iVar6, vVar10);
	func_249(iVar6, 0.0f);
	func_114(iVar5);
	if (func_205(44))
	{
		return;
	}
	if (!func_140(40))
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(44, 0);
}

void func_153(int iParam0)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	struct<2> /*16*/ sVar12;
	var uVar14;
	struct<7> /*56*/ sVar20;
	bool bVar27;
	int iVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	struct<2> /*16*/ sVar32;
	struct<6> /*48*/ sVar34;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 5))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
		return;
	}
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0);
	if (iVar5 != Global_35)
	{
		return;
	}
	iVar6 = PLAYER::GET_PLAYER_INDEX();
	bVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_1);
	switch (sVar0.f_2)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (!sVar0.f_4)
			{
				func_463();
			}
			break;
		case 4:
			break;
		case 5:
			if (ENTITY::IS_ENTITY_DEAD(bVar7))
			{
				return;
			}
			if (Global_1900383.f_442)
			{
				iVar8 = MAP::_BLIP_ADD_FOR_STYLE(joaat("BLIP_STYLE_PLAYER_HORSE"));
				MAP::BLIP_ADD_MODIFIER(iVar8, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
				func_464(41, iVar8, 1);
			}
			func_454(0, 5);
			break;
	}
	if (sVar0.f_4 & func_465(sVar0.f_2))
	{
		if (sVar0.f_3 == 0)
		{
			return;
		}
		PED::SET_PED_CONFIG_FLAG(bVar7, 186, true);
		bVar9 = ENTITY::IS_ENTITY_DEAD(bVar7);
		if (bVar9)
		{
			if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar6) == bVar7)
			{
				PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar6, 0);
			}
			PERSISTENCE::_0xE225CEF1901F6108(bVar7, 0);
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(bVar7, 1.0f);
		}
		func_466(sVar0.f_3);
		bVar10 = func_211();
		if (ENTITY::DOES_ENTITY_EXIST(bVar10))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bVar10))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar10, true, false);
			}
		}
		iVar11 = func_401(bVar7);
		func_467(iVar11);
		sVar12 = { func_354(iVar11) /*2*/ };
		func_356(&uVar14);
		func_468(bVar7);
		func_362(bVar7, &sVar12, &uVar14, 0);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
		func_217(-1);
		func_214(1);
		func_469(iVar11, 0);
		if (!func_470(iVar11, 5))
		{
			func_472(iVar11, 5, func_471(5));
		}
		func_315(iVar11);
		func_404();
		func_473(bVar7);
	}
	if (sVar0.f_4 & func_474(sVar0.f_2))
	{
		if (ENTITY::IS_ENTITY_DEAD(bVar7))
		{
			return;
		}
		func_315(0);
		func_315(1);
		func_315(5);
		if (func_84(0) == 1)
		{
			if (!func_71(0))
			{
				func_203(0);
			}
		}
		sVar20.f_1 = 1;
		sVar20.f_5 = 0;
		sVar20.f_3 = 1;
		sVar20.f_2 = 1;
		sVar20.f_4 = 0;
		sVar20.f_6 = 0;
		sVar20.f_0 = PLAYER::PLAYER_ID();
		if (func_117(sVar20, &bVar7, 0))
		{
			func_119(bVar7);
			func_118();
		}
		Global_1900383.f_442 = 0;
		if (func_388(bVar7))
		{
			if (bVar7 == func_88(0))
			{
			}
			else if (bVar7 == func_88(1))
			{
				func_116(1, 0);
				Global_1900383.f_442 = 1;
			}
			else if (bVar7 == func_88(6))
			{
				bVar27 = false;
				if (!bVar27)
				{
					if (func_131(0) && func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (func_131(0) && !func_131(1))
					{
						func_116(0, 1);
						func_116(0, 6);
						bVar27 = true;
					}
				}
				if (!bVar27)
				{
					if (!func_131(0))
					{
						func_116(0, 6);
						bVar27 = true;
					}
				}
				Global_1900383.f_442 = 1;
			}
		}
		else
		{
			if (func_131(0))
			{
				if (func_131(1))
				{
					if (func_131(6))
					{
						func_202(6, 0);
						func_203(6);
					}
					func_116(1, 6);
				}
				func_116(0, 1);
			}
			func_475(bVar7);
			Global_1900383.f_442 = 1;
		}
		func_343(bVar7);
		if (func_71(0))
		{
			iVar28 = func_88(0);
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar6, iVar28);
		}
		if (func_71(1))
		{
			iVar29 = func_88(1);
			bVar30 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar6, iVar29);
		}
		else
		{
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar6, 0);
		}
		bVar31 = func_211();
		if (ENTITY::DOES_ENTITY_EXIST(bVar31))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bVar31))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar31, false, true);
			}
			OBJECT::DELETE_OBJECT(&bVar31);
		}
		func_466(0);
		func_476(bVar7);
		func_477(bVar7);
		if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(bVar7, 9))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(bVar7, 9, true);
		}
		PED::SET_PED_CONFIG_FLAG(bVar7, 186, false);
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, bVar7);
		func_217(0);
		func_214(0);
		func_469(0, 0);
		sVar32 = { func_354(0) /*2*/ };
		sVar34 = { func_355() /*6*/ };
		func_362(bVar7, &sVar32, &sVar34, 0);
		func_478(0);
		func_404();
		func_479();
	}
}

void func_154(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	int iVar25;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0);
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_1);
	iVar6 = sVar0.f_2;
	bVar7 = sVar0.f_3;
	if (iVar4 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	fVar8 = func_190(iVar5);
	bVar9 = false;
	if (fVar8 == 0.0f)
	{
		bVar9 = true;
	}
	if (func_389(iVar5))
	{
		return;
	}
	if (func_391(iVar5))
	{
		return;
	}
	if (func_390(iVar5))
	{
		return;
	}
	iVar10 = ENTITY::GET_ENTITY_MODEL(iVar5);
	if (func_392(iVar10) || func_393(iVar10))
	{
		return;
	}
	iVar11 = PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(iVar5);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		return;
	}
	if (func_480() != iVar5)
	{
		func_481(iVar5);
		func_482(0);
		func_483(0);
	}
	bVar12 = false;
	iVar13 = MISC::GET_GAME_TIMER();
	iVar14 = func_484();
	if ((iVar14 + 45000) > iVar13)
	{
		bVar12 = true;
	}
	bVar15 = false;
	if (bVar12 && iVar14 + 15000 > iVar13)
	{
		bVar15 = true;
	}
	bVar16 = func_388(iVar5);
	bVar17 = true;
	if (iVar6 == 1 || iVar6 == 3)
	{
		bVar17 = false;
	}
	bVar18 = func_279(Global_35, iVar5, 0);
	bVar19 = func_485(iVar5);
	bVar20 = PED::_0xD4D403EA031F351C(iVar5);
	bVar21 = func_94();
	bVar22 = func_135(Global_1835011[0 /*74*/].f_1, 1);
	bVar23 = false;
	if (bVar21 && !bVar22)
	{
		bVar23 = true;
	}
	func_114(iVar5);
	if (!bVar16)
	{
		return;
	}
	iVar24 = func_401(iVar5);
	if ((((bVar17 && !bVar18) && !bVar19) && !bVar20) && !bVar23)
	{
		func_486(iVar5);
	}
	iVar25 = -1;
	switch (iVar6)
	{
		case 0:
			if (bVar7)
			{
				if (bVar12)
				{
					if (!bVar15)
					{
						iVar25 = 10;
					}
				}
				else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar5) > 1.5f)
				{
					iVar25 = 10;
				}
				else
				{
					iVar25 = 9;
				}
			}
			break;
		case 1:
		case 3:
			if (bVar12)
			{
				if (!bVar15)
				{
					iVar25 = 8;
				}
			}
			else if (bVar7)
			{
				iVar25 = 9;
			}
			else if (bVar9)
			{
				iVar25 = 7;
			}
			break;
	}
	if (iVar25 != -1)
	{
		func_454(iVar24, iVar25);
		if ((bVar7 || !bVar12) || !bVar15)
		{
			func_481(iVar5);
			func_482(iVar13);
		}
	}
	func_487(iVar24);
}

void func_155(int iParam0)
{
}

void func_156(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (ENTITY::IS_ENTITY_DEAD(iVar4) || PED::IS_PED_INJURED(iVar4))
	{
		return;
	}
	if (func_389(iVar4))
	{
		return;
	}
	if (func_390(iVar4))
	{
		return;
	}
	if (vVar0.z == 0)
	{
		if (!func_488())
		{
			func_283(52, 1);
		}
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if (vVar0.z == 1)
	{
		iVar6 = func_489();
		if (func_490(54) == 0)
		{
			func_491(MISC::GET_GAME_TIMER());
			func_283(54, 0);
		}
		else if (func_490(54) < 3)
		{
			if ((iVar6 + 1800000) <= iVar5)
			{
				func_283(54, 1);
				func_491(MISC::GET_GAME_TIMER());
			}
		}
		func_492(0);
	}
	if (vVar0.z == 2)
	{
		if (func_196(52))
		{
			func_197(52);
		}
		if (func_194(52))
		{
			func_195(52);
		}
		func_283(53, 1);
		func_492(1);
	}
	if (vVar0.z != 2)
	{
		return;
	}
	func_494(func_493(joaat("HORSES_BROKEN"), joaat("WILD")), 1);
	COMPENDIUM::COMPENDIUM_HORSE_WILD_BROKEN(iVar4);
	if (func_388(iVar4))
	{
		return;
	}
	if (func_402(iVar4) > 0)
	{
		if (func_71(1))
		{
			func_202(1, 0);
			func_203(1);
		}
		func_403(iVar4);
	}
	else
	{
		if (func_71(6))
		{
			func_202(6, 0);
			func_203(6);
		}
		func_405(iVar4, 1);
	}
	if (!func_388(iVar4))
	{
		return;
	}
	iVar7 = func_401(iVar4);
	if (iVar7 == -1)
	{
		return;
	}
	if (!func_224(iVar7))
	{
		func_454(iVar7, 6);
		func_495(iVar7, 1);
		func_481(iVar4);
		func_482(iVar5);
	}
}

void func_157(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0) != Global_35)
	{
		return;
	}
	if (Global_1900383.f_378 != 2)
	{
		return;
	}
	switch (sVar0.f_1)
	{
		case joaat("WHISTLEHORSERESPONSIVE"):
			iVar2 = 0;
			break;
		case joaat("WHISTLEHORSESHORT"):
			iVar2 = 0;
			break;
		case joaat("WHISTLEHORSELONG"):
			iVar2 = 4;
			break;
		case joaat("WHISTLEHORSETALK"):
			iVar2 = 0;
			break;
		case joaat("WHISTLEHORSEDOUBLE"):
			iVar2 = 2;
			break;
		default:
			iVar2 = 0;
			break;
	}
	func_371(iVar2);
	func_372(sVar0.f_1);
	func_79(1);
	DECORATOR::DECOR_SET_BOOL(Global_35, "Whistling", true);
}

void func_158(int iParam0)
{
	Vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	switch (iVar11)
	{
		case 28:
			func_414(1);
			func_496(joaat("SATCHEL_CATEGORY_HORSE"));
			break;
	}
	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	switch (iVar11)
	{
		case 28:
			func_414(1);
			func_496(joaat("SATCHEL_CATEGORY_HORSE"));
			break;
		case 31:
		case 32:
		case 33:
			func_497(iParam0);
			break;
		case 49:
			func_498(iParam0);
			break;
		case 50:
			func_499(iParam0);
			break;
		default:
			return;
	}
}

void func_159(int iParam0)
{
	Vector3 vVar0;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 3))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.y))
	{
		return;
	}
	iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.y);
	if (iVar3 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.x))
	{
		return;
	}
	bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.x);
	if (!func_388(bVar4))
	{
		return;
	}
	iVar5 = func_401(bVar4);
	func_500();
	func_501(iVar5);
	func_199(iVar5, 0);
	func_502(iVar5, 0);
	func_503(iVar5, -15);
	if (func_194(56))
	{
		func_195(56);
	}
	if (func_196(56))
	{
		func_197(56);
	}
	if (func_194(57))
	{
		func_195(57);
	}
	if (func_196(57))
	{
		func_197(57);
	}
	iVar6 = vVar0.z;
	func_504(bVar4, iVar6);
	PED::_0xEB8886E1065654CD(bVar4, 10, "ALL", 10.0f);
}

void func_160(int iParam0)
{
	struct<2> /*16*/ sVar0;
	bool bVar2;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	bVar2 = sVar0.f_0;
	if (!func_388(bVar2))
	{
		return;
	}
	if (func_505())
	{
		if (func_194(57))
		{
			func_195(57);
		}
		if (func_196(57))
		{
			func_197(57);
		}
		if (!func_194(56) && !func_196(56))
		{
			if (func_506() < 3)
			{
				func_283(56, 1);
			}
		}
	}
}

void func_161(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar4;
	bool bVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(sVar0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(sVar0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(sVar0.f_0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(sVar0.f_0))
	{
		return;
	}
	if (Global_16 || func_369())
	{
		return;
	}
	iVar4 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
	if (INTERIOR::IS_VALID_INTERIOR(iVar4))
	{
		return;
	}
	bVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_0);
	iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_1);
	if (PED::IS_PED_INJURED(bVar5))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(bVar5))
	{
		return;
	}
	if (!func_388(bVar5))
	{
		return;
	}
	if (iVar6 == Global_1900383.f_440)
	{
		return;
	}
	if (((func_194(61) || func_196(61)) || func_194(62)) || func_196(62))
	{
		return;
	}
	bVar7 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_GET_RIDER_OF_MOUNT(bVar5, false) == Global_35)
		{
			bVar7 = true;
		}
	}
	bVar8 = false;
	if (!bVar7)
	{
		if (func_187(Global_35, bVar5, 1, 1) <= 5.0f)
		{
			bVar8 = true;
		}
	}
	iVar9 = -1;
	if (bVar7)
	{
		iVar9 = 62;
	}
	else if (bVar8)
	{
		iVar9 = 61;
	}
	if (iVar9 == -1)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	iVar10 = (func_490(61) + func_490(62));
	if (iVar10 >= 3)
	{
		return;
	}
	iVar11 = MISC::GET_GAME_TIMER();
	iVar12 = func_507();
	if (iVar10 > 0)
	{
		if (iVar12 == 0)
		{
			func_508(MISC::GET_GAME_TIMER());
			return;
		}
		if ((iVar12 + 600000) > iVar11)
		{
			return;
		}
	}
	func_283(iVar9, 1);
	func_509();
	Global_1900383.f_440 = iVar6;
}

void func_162(int iParam0)
{
	Vector3 vVar0;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 6))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.y))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.x))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(vVar0.z))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(vVar0.z))
	{
		return;
	}
	iVar6 = vVar0.y;
	iVar7 = vVar0.x;
	bVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(vVar0.z);
	if (iVar7 != Global_35)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar6))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
		if (PED::IS_PED_HUMAN(iVar9))
		{
			return;
		}
	}
	if (func_388(bVar8))
	{
		iVar10 = func_401(bVar8);
		iVar11 = 0;
		iVar11 = func_510(iVar6);
		if (func_284(iVar11, 0))
		{
			if (func_511(iVar11))
			{
				if (ENTITY::_0xF59FDE7B4D31A630(iVar6))
				{
					func_512(iVar10, iVar11, 1);
				}
			}
		}
	}
	else
	{
		iVar12 = func_510(iVar6);
		if (func_284(iVar12, 0))
		{
			if ((func_511(iVar12) && func_513(iVar12) != 0) && func_514(func_513(iVar12), &iVar13))
			{
				Global_1425228.f_2[iVar13] = bVar8;
			}
		}
	}
	iVar14 = func_286(bVar8, iVar6);
}

void func_163(int iParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_3))
	{
		return;
	}
	if (!sVar0.f_2)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(sVar0.f_3))
	{
		return;
	}
	iVar4 = sVar0.f_1;
	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_3);
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		func_516(func_515(iVar4));
	}
	else
	{
		iVar6 = sVar0.f_0;
		if (iVar6 != Global_35)
		{
			return;
		}
	}
	bVar7 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
	{
		bVar7 = true;
	}
	if (!bVar7)
	{
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iVar4, 1.0f);
	}
	iVar8 = func_517(iVar5, iVar4);
}

void func_164(int iParam0)
{
	struct<4> /*32*/ sVar0;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &sVar0, 4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
	{
		return;
	}
	if (sVar0.f_0 != Global_35)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_1))
	{
		return;
	}
	if (!sVar0.f_2)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_3))
	{
		return;
	}
	bVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sVar0.f_3);
	iVar5 = func_401(bVar4);
	switch (iVar5)
	{
		case 0:
		case 1:
			break;
		default:
			return;
	}
	if (!func_308(iVar5))
	{
		return;
	}
	if (func_518(bVar4, 0))
	{
		return;
	}
	iVar6 = sVar0.f_1;
	if (!ENTITY::IS_ENTITY_A_PED(iVar6) && !ENTITY::_GET_IS_CARRIABLE_PELT(iVar6))
	{
		return;
	}
	func_306(iVar5);
	if (!func_300(iVar5))
	{
		func_454(iVar5, 22);
		return;
	}
	func_304(iVar5, 0);
	func_454(iVar5, 21);
}

bool func_165(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_173(iParam0, 1);
}

void func_166(int iParam0, Vector3 vParam1, var uParam4)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { vParam1 /*3*/ };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = uParam4;
}

int func_167(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

bool func_168(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(bParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_169(int iParam0)
{
	return func_519(iParam0, 0);
}

int func_170()
{
	return Global_40.f_4283.f_1;
}

bool func_171(int iParam0)
{
	if ((iParam0 == 43 || iParam0 == 37) || iParam0 == 22)
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
{
	return func_520(iParam0, 2);
}

bool func_173(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_24 & iParam1 != 0;
}

bool func_174(int iParam0, int iParam1)
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

int func_175(int iParam0)
{
	if (iParam0 == 7)
	{
		return 0;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[iParam0]))
	{
		return Global_1357549.f_3[iParam0];
	}
	return 0;
}

int func_176(Vector3 vParam0, int iParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	Vector3 vVar7;
	float fVar10;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam3))
	{
		return 0;
	}
	bVar0 = false;
	if (VOLUME::DOES_VOLUME_EXIST(iParam4))
	{
		bVar0 = true;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	TASK::_0xB8E213D02F37947D(iParam3, iVar1, joaat("PROP_HITCHINGPOST"), 1, 1, 0, 0);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	fVar4 = 1E+07f;
	iVar5 = 0;
	while (iVar5 < iVar2)
	{
		iVar6 = ITEMSET::GET_INDEXED_SCENARIO_POINT_INDEX_IN_ITEMSET(iVar5, iVar1);
		if (!TASK::DOES_SCENARIO_POINT_EXIST(iVar6))
		{
		}
		else
		{
			vVar7 = { TASK::_GET_SCENARIO_POINT_COORDS(iVar6, true) /*3*/ };
			if (bVar0)
			{
				if (VOLUME::IS_POINT_IN_VOLUME(iParam4, vVar7))
				{
				}
				else
				{
					fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar7, true);
					if (fVar10 < fVar4)
					{
						iVar3 = iVar6;
						fVar4 = fVar10;
					}
				}
				iVar5++;
				ITEMSET::DESTROY_ITEMSET(iVar1);
				return iVar3;
			}
		}
	}
}

int func_177(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383[iParam0 /*45*/].f_44;
}

void func_178(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_44 = iParam1;
}

bool func_179()
{
	if (func_76((1 << 14)))
	{
		func_327((1 << 14));
		return true;
	}
	return false;
}

bool func_180(bool bParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	TASK::TASK_GO_TO_WHISTLE(bParam0, iParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(bParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 48, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(bParam0, 1);
	return true;
}

int func_181(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_3;
}

void func_182(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (!func_388(bParam0))
	{
		return;
	}
	iVar0 = func_401(bParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_521(iVar0);
	func_450(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_181(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_72(iVar0))
		{
			return;
		}
	}
	func_183(iVar0);
	PED::SET_PED_KEEP_TASK(bParam0, true);
	if (bParam1 && func_2() == -1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
		}
	}
}

void func_183(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
}

void func_184(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_37 = 0;
}

int func_185(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_37;
}

void func_186(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_37 = iParam1;
}

float func_187(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0.0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1) && bParam3)
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(bParam1, false, false), bParam2);
}

void func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return;
	}
	iVar1 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = false;
	if (iVar1 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		bVar3 = true;
	}
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) /*3*/ };
	func_315(iParam0);
	func_315(5);
	if (func_131(5))
	{
		func_202(5, 0);
	}
	func_203(5);
	func_116(5, iParam0);
	func_200(5, 1);
	func_199(5, iParam1);
	if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar0) == iVar1)
	{
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, 0);
	}
	if (PLAYER::_GET_TEMP_PLAYER_HORSE(iVar0) == iVar1)
	{
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, 0);
	}
	if (bVar2)
	{
		if (bVar3)
		{
			PED::SET_LOOTING_FLAG(iVar1, 0, true);
			PED::SET_LOOTING_FLAG(iVar1, 1, true);
			DECORATOR::_DECOR_SET_STRING(iVar1, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		}
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	}
	if (bVar3)
	{
		if (func_137(vVar4))
		{
			func_217(-1);
			func_214(3);
			func_215(0.0f, 0.0f, 0.0f);
			func_218(-15);
		}
		else
		{
			func_217(5);
			func_214(0);
			func_215(vVar4);
			func_218(func_221());
		}
	}
	func_348(iParam0);
	func_522(iParam0);
	func_203(iParam0);
	func_404();
}

bool func_189(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1900383[iParam0 /*45*/].f_35;
}

float func_190(bool bParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0.0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0.0f;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return 0.0f;
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
		return 0.0f;
	}
	fVar0 = PED::_GET_PED_MOTIVATION(bParam0, 3, 0);
	return fVar0;
}

int func_191(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383[iParam0 /*45*/].f_36;
}

void func_192(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_35 = iParam1;
}

void func_193(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_36 = iParam1;
}

bool func_194(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1905944.f_22[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_195(int iParam0)
{
	if (!func_194(iParam0))
	{
		return;
	}
	func_523(1);
}

bool func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_524(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1905944[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_197(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1905944[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_1905944[iVar1] = uVar3;
}

int func_198(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_11;
}

void func_199(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = iParam1;
}

void func_200(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = iParam1;
}

int func_201()
{
	return Global_40.f_1095.f_3054;
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_450(iParam0);
	if (func_72(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_181(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!func_71(iParam0))
	{
		return;
	}
	bVar1 = func_88(iParam0);
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(bVar1))
	{
		bVar2 = true;
	}
	func_315(iParam0);
	func_386(iParam0);
	func_473(bVar1);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bVar1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar1, true, true);
	}
	if (func_320(bVar1))
	{
		PHYSICS::_UNHITCH_HORSE(bVar1);
	}
	if (bVar2)
	{
		TASK::TASK_SMART_FLEE_PED(bVar1, Global_35, 500.0f, -1, 0, 1.0f, 0);
		PED::SET_PED_KEEP_TASK(bVar1, true);
	}
	iVar3 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar3))
	{
	}
	if (iParam0 == 0)
	{
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar3, 0);
	}
	else if (iParam0 == 1)
	{
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar3, 0);
	}
	PED::_0xBCC76708E5677E1D(bVar1, true);
	if (bVar2)
	{
		if (bParam1)
		{
			FLOCK::_SET_ANIMAL_IS_WILD(bVar1, true);
		}
		PED::_0x329772C47DBB2FBC(bVar1);
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&bVar1);
	iVar4 = ENTITY::GET_ENTITY_MODEL(bVar1);
	if (STREAMING::IS_MODEL_VALID(iVar4))
	{
		if (PED::_IS_PED_MODEL_SUPPRESSED(iVar4))
		{
			if (!func_208(iVar4))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar4, false);
			}
		}
	}
	func_203(iParam0);
}

void func_203(int iParam0)
{
	struct<2> /*16*/ sVar0;
	int iVar2;
	int iVar3;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	strcpy_s(&(Global_40.f_1095.f_1[iParam0 /*436*/]), 64, "");
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_11 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = -15;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_14 = 0;
	func_525(&sVar0);
	func_526(iParam0, sVar0);
	func_527(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15));
	func_528(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298));
	func_529(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356));
	func_530(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_531(iVar2, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iVar2 /*4*/]));
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_532(iVar3, &(Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iVar3 /*4*/]));
		iVar3++;
	}
	func_533(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_420));
	func_534(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
	func_535(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_425));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_427 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_40.f_1095.f_1[iParam0 /*436*/].f_430 = 0.0f;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_431 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_432 = -1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = 0;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = 0;
	Global_1900383[iParam0 /*45*/] = 0;
	Global_1900383[iParam0 /*45*/].f_1 = 0;
	Global_1900383[iParam0 /*45*/].f_2 = 0;
	Global_1900383[iParam0 /*45*/].f_3 = 0;
	Global_1900383[iParam0 /*45*/].f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_23 = 0;
	Global_1900383[iParam0 /*45*/].f_24 = 0;
	Global_1900383[iParam0 /*45*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_26 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
	Global_1900383[iParam0 /*45*/].f_27 = 0;
	Global_1900383[iParam0 /*45*/].f_28 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_31 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_34 = 0.0f;
	Global_1900383[iParam0 /*45*/].f_35 = 0;
	Global_1900383[iParam0 /*45*/].f_36 = 0;
	Global_1900383[iParam0 /*45*/].f_37 = 0;
	Global_1900383[iParam0 /*45*/].f_38 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_41 = 0;
	Global_1900383[iParam0 /*45*/].f_42 = 0;
	Global_1900383[iParam0 /*45*/].f_43 = 0;
	Global_1900383[iParam0 /*45*/].f_44 = -1;
}

void func_204(int iParam0)
{
	if (!func_451(iParam0))
	{
		return;
	}
	func_536(iParam0);
	func_537(iParam0);
}

bool func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_206(int iParam0)
{
	Global_40.f_1095.f_3135.f_4 = iParam0;
}

int func_207(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

bool func_208(int iParam0)
{
	if (!func_538(iParam0))
	{
		return false;
	}
	if (!func_539())
	{
		return true;
	}
	return false;
}

void func_209(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> /*232*/ sVar2;

	if (func_84(iParam0) == 0)
	{
		if (func_540(iParam0))
		{
			func_541(iParam0);
		}
		return;
	}
	if (!func_540(iParam0))
	{
		iVar0 = func_207(iParam0);
		iVar1 = func_542(iVar0);
		func_543(iParam0, iVar1);
	}
	sVar2.f_9 = joaat("SLOTID_NONE");
	sVar2.f_14 = func_207(iParam0);
	sVar2.f_15 = func_445(iParam0);
	sVar2.f_16 = { func_311(iParam0) /*8*/ };
	sVar2.f_24 = sVar2.f_24;
	sVar2.f_26 = BUILTIN::FLOOR(func_544(iParam0));
	sVar2.f_25 = BUILTIN::FLOOR(func_367(iParam0));
	sVar2.f_27 = func_437(iParam0, 0);
	sVar2.f_28 = func_437(iParam0, 1);
	func_545(iParam0, &sVar2);
}

bool func_210()
{
	bool bVar0;

	bVar0 = func_211();
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return true;
	}
	return false;
}

bool func_211()
{
	return Global_1900383.f_393;
}

var func_212(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

int func_213()
{
	return Global_40.f_1095.f_3054.f_1;
}

void func_214(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_215(Vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 /*3*/ };
}

Vector3 func_216()
{
	return Global_40.f_1095.f_3054.f_77;
}

void func_217(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_218(int iParam0)
{
	Global_40.f_1095.f_3054.f_2 = iParam0;
}

int func_219(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (func_210())
	{
		func_546();
		func_444();
	}
	iVar0 = func_75();
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		STREAMING::REQUEST_MODEL(iVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(iVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	func_466(iVar1);
	bVar2 = false;
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar1))
	{
		bVar3 = true;
	}
	if (!bVar2 || !bVar3)
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar1, false);
	}
	TASK::TASK_CARRIABLE(iVar1, joaat("CARRIABLE_SADDLE_BUNDLE"), 0, 0, 0);
	return 1;
}

int func_220()
{
	return Global_40.f_1095.f_3054.f_2;
}

int func_221()
{
	return Global_1899515;
}

void func_222()
{
	Global_1900383.f_437 = 0;
	Global_1900383.f_437.f_1 = 0;
	Global_1900383.f_437.f_2 = 0;
}

bool func_223(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_320(Global_1900383[iParam0 /*45*/]))
	{
		return true;
	}
	return false;
}

bool func_224(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_435;
}

bool func_225()
{
	return Global_1900383.f_437.f_1;
}

var func_226()
{
	return Global_1900383.f_437;
}

void func_227(int iParam0)
{
	Global_1900383.f_437 = iParam0;
}

void func_228(int iParam0)
{
	Global_1900383.f_437.f_1 = iParam0;
}

bool func_229(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (iParam1 != -1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iParam1 /*35*/].f_4))
		{
			return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1888801[iParam1 /*35*/].f_4, true, 0);
		}
		else
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1894899.f_161)
	{
		iVar0 = Global_1894899.f_10[iVar1];
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar0 /*35*/].f_4))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1888801[iVar0 /*35*/].f_4, true, 0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

var func_230()
{
	return Global_1900383.f_437.f_2;
}

void func_231(int iParam0)
{
	Global_1900383.f_437.f_2 = iParam0;
}

bool func_232()
{
	return Global_1894899 & 2 != 0;
}

bool func_233()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 440, true))
	{
		return false;
	}
	return true;
}

void func_234(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

bool func_235()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 439, true))
	{
		return false;
	}
	return true;
}

void func_236(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

bool func_237()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 438, true))
	{
		return false;
	}
	return true;
}

void func_238(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

int func_239(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_43;
}

bool func_240(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (Global_1900383[iParam0 /*45*/].f_42 == 0)
	{
		return false;
	}
	return true;
}

void func_241(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_42 = iParam1;
}

int func_242(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_42;
}

void func_243(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_2() != -1)
	{
		return;
	}
	if (Global_36616 & func_547(iParam1) != 0)
	{
		return;
	}
	iVar0 = func_548(iParam0);
	iVar0 = BUILTIN::ROUND(((float)iVar0 * fParam6));
	if ((((((iParam1 != joaat("HONOR_EVENT_AMBIENT_KILL") && iParam1 != joaat("HONOR_EVENT_AMBIENT_KO")) && iParam1 != joaat("HONOR_EVENT_KILL_VERMIN")) && iParam1 != joaat("HONOR_EVENT_KILL_FARM_ANIMAL")) && iParam1 != joaat("HONOR_EVENT_KILL_HORSE")) && iParam1 != joaat("HONOR_EVENT_TRAMPLED_INNOCENT")) && iParam1 != joaat("HONOR_EVENT_ABANDON_ANIMALS"))
	{
		func_549(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_550(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_549(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_244(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_43++;
}

Vector3 func_245(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (iParam0 >= 7)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1900383[iParam0 /*45*/].f_28;
}

Vector3 func_246(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (iParam0 >= 7)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1900383[iParam0 /*45*/].f_31;
}

float func_247(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_1900383[iParam0 /*45*/].f_34;
}

void func_248(int iParam0, Vector3 vParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_31 = { vParam1 /*3*/ };
}

void func_249(int iParam0, float fParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_34 = fParam1;
}

void func_250(struct<7> /*56*/ sParam0)
{
	int iVar0;

	if (!sParam0.f_5)
	{
		return;
	}
	if (func_205(34))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(sParam0.f_6);
	if (func_392(iVar0) || func_393(iVar0))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(sParam0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(sParam0.f_6))
	{
		return;
	}
	if (func_280())
	{
		func_283(34, 0);
	}
}

void func_251(struct<7> /*56*/ sParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if (!sParam0.f_5)
	{
		return;
	}
	if (func_551() >= 3)
	{
		return;
	}
	if (func_196(36) || func_194(36))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_552();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			func_553();
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(sParam0.f_6))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(sParam0.f_6))
	{
		return;
	}
	if (PED::IS_PED_INJURED(sParam0.f_6))
	{
		return;
	}
	bVar2 = false;
	if (TASK::IS_PED_SPRINTING(sParam0.f_6))
	{
		bVar2 = true;
	}
	if (TASK::IS_PED_RUNNING(sParam0.f_6))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(sParam0.f_6))
	{
		return;
	}
	fVar3 = PED::_GET_PED_STAMINA_NORMALIZED(sParam0.f_6);
	if (fVar3 > 0.15f)
	{
		return;
	}
	if (func_196(34))
	{
		func_197(34);
	}
	if (func_194(34))
	{
		func_195(34);
	}
	if (func_196(35))
	{
		func_197(35);
	}
	if (func_194(35))
	{
		func_195(35);
	}
	if (func_280())
	{
		func_283(36, 1);
		func_554();
		func_555(MISC::GET_GAME_TIMER());
	}
}

void func_252(struct<7> /*56*/ sParam0, struct<11> /*88*/ sParam7, var uParam18)
{
	bool bVar0;

	if (!sParam7.f_2)
	{
		return;
	}
	if (!sParam0.f_5)
	{
		return;
	}
	if (func_205(45))
	{
		return;
	}
	if (func_94() && !func_95(4))
	{
		return;
	}
	bVar0 = false;
	if ((func_140(33) && func_140(34)) && func_140(35))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!func_388(sParam0.f_6))
	{
		return;
	}
	if (!sParam7.f_10)
	{
		return;
	}
	if (func_115(7) == 0)
	{
		return;
	}
	if (func_280())
	{
		func_283(45, 0);
	}
}

void func_253()
{
	int iVar0;

	if (!func_556())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (func_557() < iVar0)
	{
		func_283(59, 0);
		func_558(0);
		func_559();
	}
}

void func_254(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, Vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, Vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<5> /*40*/ sVar0;
	int iVar12;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	iVar12 = -1;
	if (vParam7.z)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&sVar0, &vParam7, 12);
	}
	else if (vParam19.z)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&sVar0, &vParam19, 12);
	}
	if (!func_71(iVar12))
	{
		return;
	}
	if (!sVar0.f_1)
	{
		return;
	}
	if (!sVar0.f_2)
	{
		return;
	}
	if (!sVar0.f_4)
	{
		if (func_194(56))
		{
			func_195(56);
		}
		if (func_196(56))
		{
			func_197(56);
		}
		if (func_194(57))
		{
			func_195(57);
		}
		if (func_196(57))
		{
			func_197(57);
		}
		return;
	}
	if (TASK::_0x3F8387DB1B9F31B7(sVar0.f_0, 0) && !func_505())
	{
		if (!func_205(57) && !func_205(58))
		{
			if (func_194(56))
			{
				func_195(56);
			}
			if (func_196(56))
			{
				func_197(56);
			}
			if (func_280())
			{
				if (func_560(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED")))
				{
					func_283(57, 0);
				}
				else
				{
					func_283(58, 0);
				}
			}
		}
	}
}

void func_255(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	bVar0 = func_561();
	bVar1 = false;
	iVar2 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		bVar1 = true;
		iVar2 = PED::_GET_HORSE_TAMING_STATE(bVar0);
	}
	iVar3 = func_562();
	switch (iVar3)
	{
		case 0:
			func_563(1);
		case 1:
			if (bVar1)
			{
				func_564(bVar0);
				func_563(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_563(3);
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 3:
			func_565();
			if (func_566(bVar0))
			{
				if (func_280())
				{
					func_283(48, 1);
				}
			}
			else if (func_280())
			{
				func_283(47, 1);
			}
			func_563(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (func_194(47))
					{
						if (func_566(bVar0))
						{
							func_195(47);
							func_563(3);
						}
					}
					if (!bVar1)
					{
						func_563(11);
					}
					break;
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 5:
			func_565();
			if (func_280())
			{
				func_283(49, 1);
			}
			func_563(6);
			break;
		case 6:
			switch (iVar2)
			{
				case 2:
				case 3:
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					func_563(9);
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 7:
			func_565();
			if (func_280())
			{
				func_283(50, 1);
			}
			func_567(MISC::GET_GAME_TIMER());
			func_563(8);
			break;
		case 8:
			if (func_568() + 5000 < MISC::GET_GAME_TIMER())
			{
				func_563(6);
			}
			break;
		case 9:
			func_565();
			if (func_280())
			{
				func_283(51, 1);
			}
			func_563(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_563(5);
					break;
				case 7:
				case 8:
				case 9:
					func_563(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_563(11);
					break;
				default:
					if (!bVar1)
					{
						func_563(11);
					}
					break;
			}
			break;
		case 11:
			func_569();
			func_565();
			func_563(0);
			break;
	}
}

void func_256(struct<6> /*48*/ sParam0, var uParam6, struct<11> /*88*/ sParam7, var uParam18, struct<11> /*88*/ sParam19, var uParam30)
{
	struct<5> /*40*/ sVar0;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;

	if (!func_570())
	{
		return;
	}
	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (!sParam0.f_5)
	{
		return;
	}
	if (sParam7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&sVar0, &sParam7, 12);
	}
	else if (sParam19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&sVar0, &sParam19, 12);
	}
	else
	{
		return;
	}
	if (!sVar0.f_1)
	{
		return;
	}
	if (!sVar0.f_2)
	{
		return;
	}
	if (sVar0.f_3)
	{
		return;
	}
	if (sVar0.f_4)
	{
		return;
	}
	iVar13 = func_437(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_571() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_572() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			func_573(0);
			func_574();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(iVar15, 1);
	func_575(MISC::GET_GAME_TIMER());
	switch (iVar15)
	{
		case 26:
			func_576();
			break;
		default:
			break;
	}
	func_573(0);
	func_574();
}

void func_257(struct<6> /*48*/ sParam0, var uParam6, struct<11> /*88*/ sParam7, var uParam18, struct<11> /*88*/ sParam19, var uParam30)
{
	struct<5> /*40*/ sVar0;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;

	if (!func_577())
	{
		return;
	}
	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (!sParam0.f_5)
	{
		return;
	}
	if (sParam7.f_10)
	{
		iVar12 = 0;
		MISC::_COPY_MEMORY(&sVar0, &sParam7, 12);
	}
	else if (sParam19.f_10)
	{
		iVar12 = 1;
		MISC::_COPY_MEMORY(&sVar0, &sParam19, 12);
	}
	else
	{
		return;
	}
	if (!sVar0.f_1)
	{
		return;
	}
	if (!sVar0.f_2)
	{
		return;
	}
	if (sVar0.f_3)
	{
		return;
	}
	if (sVar0.f_4)
	{
		return;
	}
	iVar13 = func_578(iVar12, 0);
	iVar14 = func_578(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (func_490(32) < 3)
		{
			if (iVar13 == 0 && iVar14 == 0)
			{
				iVar16 = 32;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 == 0)
		{
			if (func_490(30) < 3)
			{
				iVar16 = 30;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_490(31) < 3)
			{
				if (!PED::IS_PED_SWIMMING(sVar0.f_0))
				{
					iVar16 = 31;
					bVar15 = true;
				}
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 < 50)
		{
			if (func_490(28) < 1)
			{
				iVar16 = 28;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 < 50)
		{
			if (func_490(29) < 1)
			{
				iVar16 = 29;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_490(33) < 3)
			{
				if (PED::IS_PED_SWIMMING(sVar0.f_0))
				{
					iVar16 = 33;
					bVar15 = true;
				}
			}
		}
	}
	bVar17 = false;
	if (func_579() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			func_580(0);
			func_581();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(iVar16, 1);
	func_575(MISC::GET_GAME_TIMER());
	func_580(0);
	func_581();
}

void func_258()
{
	int iVar0[6];
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	if (func_582() == 0)
	{
		return;
	}
	iVar7 = 0;
	iVar0[iVar7] = 32;
	iVar7++;
	iVar0[iVar7] = 30;
	iVar7++;
	iVar0[iVar7] = 31;
	iVar7++;
	iVar0[iVar7] = 28;
	iVar7++;
	iVar0[iVar7] = 29;
	iVar7++;
	iVar0[iVar7] = 43;
	iVar7++;
	bVar8 = false;
	iVar9 = 0;
	while (iVar9 < iVar7)
	{
		if (bVar8)
		{
		}
		else if (func_194(iVar0[iVar9]))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_583())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (func_194(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (func_194(30))
			{
				bVar12 = true;
			}
			if (func_194(31))
			{
				bVar13 = true;
			}
			if (func_194(28))
			{
				bVar12 = true;
			}
			if (func_194(29))
			{
				bVar13 = true;
			}
			if (func_194(43))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (bVar10)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 3);
			}
			if (bVar11)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 3);
			}
			if (bVar12)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 3);
			}
			if (bVar13)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 3);
			}
			func_584(1);
		}
	}
	else if (func_583())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		func_584(0);
		func_585();
	}
}

void func_259(struct<5> /*40*/ sParam0, var uParam5, var uParam6)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;

	if (!func_586())
	{
		return;
	}
	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (sParam0.f_4)
	{
		return;
	}
	if (func_205(55))
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	if (func_94() && !func_95(4))
	{
		return;
	}
	func_206(0);
	if (func_84(0) == 1)
	{
		return;
	}
	func_283(55, 0);
	iVar0 = func_587(9, 1, 1, 0);
	if (iVar0 != 76)
	{
		iVar0 = func_587(9, 1, 1, 1);
	}
	if (!func_588(iVar0))
	{
		return;
	}
	vVar1 = { func_589(iVar0) /*3*/ };
	if (func_137(vVar1))
	{
		return;
	}
	iVar4 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_SHOP"), vVar1);
	MAP::SET_BLIP_SPRITE(iVar4, joaat("BLIP_SHOP_HORSE"), true);
	MAP::BLIP_ADD_MODIFIER(iVar4, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	MAP::BLIP_ADD_MODIFIER(iVar4, joaat("BLIP_MODIFIER_RADAR_EDGE_ALWAYS"));
	func_590(&iVar4);
}

void func_260()
{
	int iVar0;

	iVar0 = func_591();
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return;
	}
	if (func_196(55))
	{
		return;
	}
	if (func_194(55))
	{
		return;
	}
	MAP::REMOVE_BLIP(&iVar0);
}

void func_261(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6)
{
	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (func_94() && !func_140(42))
	{
		return;
	}
	if (!func_592())
	{
		return;
	}
	if (func_205(65))
	{
		return;
	}
	if (func_593(Global_35))
	{
		return;
	}
	if (func_594())
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(65, 0);
}

void func_262(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!sParam0.f_1)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam0.f_2)
	{
		return;
	}
	if (func_94() && !func_140(42))
	{
		return;
	}
	if (func_94() && func_134() == 8)
	{
		return;
	}
	if (!func_210())
	{
		return;
	}
	if (func_595(7))
	{
		func_596();
		return;
	}
	if (func_213() == 3)
	{
		return;
	}
	if (func_593(Global_35))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_597();
	if (iVar1 == 0)
	{
		func_598(MISC::GET_GAME_TIMER());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (func_187(Global_35, func_211(), 1, 1) < 100.0f)
	{
		return;
	}
	if (func_205(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	func_283(64, 1);
	func_598(MISC::GET_GAME_TIMER());
}

void func_263(struct<7> /*56*/ sParam0, bool bParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!sParam0.f_5)
	{
		return;
	}
	iVar0 = func_490(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(sParam0.f_6);
	if (func_392(iVar1) || func_393(iVar1))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(sParam0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(sParam0.f_6))
	{
		return;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(bParam7))
	{
		return;
	}
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&uVar2, bParam7, 4, 0))
	{
		return;
	}
	if (func_599() == bParam7)
	{
		return;
	}
	if (func_280())
	{
		func_600(bParam7);
		func_283(66, 0);
	}
}

void func_264(struct<4> /*32*/ sParam0, var uParam4, var uParam5, var uParam6, struct<11> /*88*/ sParam7, var uParam18, struct<11> /*88*/ sParam19, var uParam30)
{
	int iVar0;
	int iVar1;

	if (!sParam0.f_2)
	{
		return;
	}
	if (!sParam0.f_3)
	{
		return;
	}
	if (!sParam7.f_10 && !sParam19.f_10)
	{
		if (func_601())
		{
			func_602(0);
		}
		return;
	}
	if (func_603() < 2)
	{
		return;
	}
	if (sParam7.f_10)
	{
		iVar0 = 0;
	}
	else if (sParam19.f_10)
	{
		iVar0 = 1;
	}
	if (func_115(iVar0) >= 2)
	{
		return;
	}
	iVar1 = func_490(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_601())
	{
		return;
	}
	func_602(1);
	func_604();
	if (func_605() <= 1)
	{
		return;
	}
	if (!func_280())
	{
		return;
	}
	func_283(46, 1);
}

void func_265(struct<2> /*16*/ sParam0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!sParam0.f_1)
	{
		return;
	}
	if (!func_593(Global_35))
	{
		return;
	}
	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, true, false))
	{
		return;
	}
	if (!func_606(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_607(iVar1))
	{
		return;
	}
	if (func_280())
	{
		func_283(67, 1);
	}
}

void func_266()
{
	int iVar0;

	if (func_608(0, 0, 1))
	{
		return;
	}
	iVar0 = func_609();
	if (iVar0 == 2)
	{
		if (!func_610())
		{
			if (!func_205(621))
			{
				func_283(621, 0);
			}
		}
	}
	if (iVar0 == 3)
	{
		if (!func_610())
		{
			if (!func_205(622))
			{
				func_283(622, 0);
			}
		}
	}
	if (iVar0 == 5)
	{
		if (!func_610())
		{
			if (!func_205(623))
			{
				func_283(623, 0);
			}
		}
	}
	if (iVar0 == 7)
	{
		if (!func_610())
		{
			if (!func_205(624))
			{
				func_283(624, 0);
			}
		}
	}
}

bool func_267()
{
	return Global_1894899 & 4 != 0;
}

int func_268(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

bool func_269(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_270(int iParam0)
{
	if (!func_269(iParam0))
	{
		return 0;
	}
	return func_612(func_611(iParam0));
}

int func_271()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;

	bVar0 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return 0;
	}
	iVar1 = 0;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == bVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	iVar3 = WEAPON::_0xAFFD0CCF31F469B8(bVar0);
	if (func_284(iVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (func_232() || func_412())
	{
		bVar4 = true;
	}
	bVar5 = false;
	if (Global_1935630.f_24 | func_613(1, 0, 1))
	{
		bVar5 = true;
	}
	if (iVar1 | iVar2)
	{
		if (bVar4 && !bVar5)
		{
			return 1;
		}
	}
	return 0;
}

void func_272(var uParam0)
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

int func_273(int iParam0)
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

void func_274(var uParam0, int* iParam1)
{
	MISC::_COPY_MEMORY(iParam1, uParam0, 94);
}

void func_275(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	bVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam1))
		{
			return;
		}
	}
	if (func_614())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1E+08f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1E+08f);
		}
		return;
	}
	bVar1 = false;
	if (func_167(0) == 1 || func_167(0) == 8)
	{
		bVar1 = true;
	}
	if (bVar1 && func_615(bVar0, 0, 1) < 5.0f)
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1E+08f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1E+08f);
		}
		return;
	}
	if (func_616())
	{
		if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1.2f)
		{
			PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1.2f);
		}
		return;
	}
	if (PERSISTENCE::_0x5A79220F6D38D7C3(iParam1) != 1.0f)
	{
		PERSISTENCE::_0xDC0A1F0ECEC9F0C0(iParam1, 1.0f);
	}
}

void func_276(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4)
{
	*iParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
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

bool func_277(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_278(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_431(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_617(iParam0, iParam1);
		}
		if (func_431(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_431(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_618(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_279(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam1) && !ENTITY::IS_ENTITY_DEAD(bParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == bParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == bParam1);
			}
		}
	}
	return false;
}

bool func_280()
{
	if (!func_610() && func_619(1))
	{
		return true;
	}
	return false;
}

int func_281(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	func_276(iParam0, &iVar1, &uVar2, &iVar0, &uVar3);
	func_277(&iVar4, iParam0, iVar0, iVar1);
	if (iVar4 != 0)
	{
		return iVar4;
	}
	switch (iVar0)
	{
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
		default:
			break;
	}
	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

bool func_282(int iParam0, int iParam1)
{
	if (iParam1 == 101)
	{
		return func_620(iParam0);
	}
	if (func_621(iParam0, iParam1))
	{
		return false;
	}
	return func_622(iParam0, iParam1);
}

void func_283(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_524(iParam0, &iVar0, &iVar1);
	if (!func_623(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_624(iVar0, iVar1);
}

bool func_284(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_285(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(bParam0);
	if (func_388(bParam0))
	{
		iVar1 = func_401(bParam0);
		if (func_284(iParam1, 0))
		{
			if (func_511(iParam1))
			{
				func_625(iVar1, iParam1, iParam2);
			}
		}
	}
	return func_626(iVar0, iParam1, iParam2, bParam3, iParam4);
}

int func_286(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(bParam0);
	if (ENTITY::GET_IS_ANIMAL(iParam1) || ENTITY::_GET_IS_BIRD(iParam1))
	{
		iVar1 = func_515(iParam1);
		if (!func_284(iVar1, 0))
		{
			iVar1 = func_510(iParam1);
		}
	}
	else
	{
		iVar1 = func_510(iParam1);
	}
	iVar2 = func_627(iVar0, iVar1, 1);
	return iVar2;
}

bool func_287(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422;
}

bool func_288(int iParam0)
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

int func_289(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_1;
}

void func_290(int iParam0, int iParam1)
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

int func_291(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_2;
}

void func_292(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_628(func_221(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_293(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	sVar0 = "StableOwnedHorse";
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_REMOVE(iParam0, sVar0);
	}
}

void func_294(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_534(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_422));
}

int func_295(int iParam0)
{
	int iVar0;

	if (!func_288(iParam0))
	{
		return -1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_296(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_422 = iParam1;
}

void func_297(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_1 = iParam1;
}

void func_298(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_422.f_2 = iParam1;
}

int func_299(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	if (!func_71(iParam0))
	{
		bVar0 = true;
	}
	bVar1 = func_88(iParam0);
	if (!bVar0)
	{
		if (!func_518(bVar1, 0))
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		iVar2 = func_629(bVar1, 0);
		if (!ENTITY::IS_ENTITY_A_PED(iVar2) && !ENTITY::_GET_IS_CARRIABLE_PELT(iVar2))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		return 0;
	}
	return 1;
}

bool func_300(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425;
}

bool func_301(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1 != -15;
}

var func_302(int iParam0)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1;
}

int func_303(int iParam0, int iParam1)
{
	int iVar0;

	if (func_630(iParam0, iParam1, 1))
	{
		iVar0 = (func_631(iParam0) - func_631(iParam1));
	}
	else
	{
		iVar0 = (func_631(iParam1) - func_631(iParam0));
	}
	while (iVar0 < 0)
	{
		iVar0 += 24;
	}
	while (iVar0 > 23)
	{
		iVar0 -= 24;
	}
	return iVar0;
}

void func_304(int iParam0, int iParam1)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_425 = iParam1;
}

void func_305(int iParam0, int iParam1)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_425.f_1 = iParam1;
}

void func_306(int iParam0)
{
	func_632(&(Global_1900383.f_317.f_38[iParam0 /*3*/]));
}

void func_307(int iParam0)
{
	func_633(&(Global_1900383.f_317.f_38[iParam0 /*3*/]));
}

bool func_308(int iParam0)
{
	return func_634(&(Global_1900383.f_317.f_38[iParam0 /*3*/]));
}

bool func_309(int iParam0, float fParam1)
{
	return func_635(&(Global_1900383.f_317.f_38[iParam0 /*3*/]), fParam1);
}

bool func_310(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return true;
	}
	return false;
}

struct<8> /*64*/ func_311(int iParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "");
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/];
}

char* func_312(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return "HORSE_NAME_BUELL_WARVETS";
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	}
	return "";
}

void func_313(int iParam0, struct<8> /*64*/ sParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/] = { sParam1 /*8*/ };
}

void func_314(int iParam0)
{
	int iVar0;
	char* sVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	sVar1 = func_636(func_311(iParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_PROMPT_NAME(iVar0, sVar1);
	}
}

void func_315(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_26));
	}
	Global_1900383[iParam0 /*45*/].f_25 = 0;
}

void func_316(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_638(func_637(255), joaat("COLOR_PURE_WHITE")));
	}
	else if (func_639())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_640();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_317(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_638(func_637(255), joaat("COLOR_PURE_WHITE")));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_639())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_640())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

void func_318(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_COMPASS_OBJECTIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_STOLEN"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_2"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_3"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_HORSE_REVIVE_4"));
}

void func_319(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_OVERLAY_SADDLE"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_PLAYER_HORSE_HITCHED"));
	MAP::BLIP_REMOVE_MODIFIER(iParam0, joaat("BLIP_MODIFIER_TEMP_HORSE_HITCHED"));
}

bool func_320(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(bParam0, joaat("PROP_HITCHINGPOST")))
	{
		return true;
	}
	return false;
}

int func_321(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_GET_CARRIER_AS_PED(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_322(int iParam0, int iParam1)
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	bVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(bVar0))
	{
		return;
	}
	if (!func_140(40))
	{
		if (func_173(iParam0, 128))
		{
			return;
		}
		if (func_641(iParam1, &uVar1))
		{
			iVar2 = func_642(iParam1);
			if (func_643(bVar0, iParam1) != iVar2)
			{
				func_644(bVar0, iParam1, iVar2);
			}
		}
		return;
	}
	if (func_390(bVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_645(iParam0, iParam1);
	if (fVar4 >= 30.0f)
	{
		func_646(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_578(iParam0, iParam1);
	func_647(bVar0, iParam0, iParam1);
	if (func_648(iParam0, iParam1) > 0.0f)
	{
		func_649(iParam0, iParam1);
	}
	else
	{
		func_650(bVar0, iParam0, iParam1);
		iVar6 = func_578(iParam0, iParam1);
		func_651(iParam0, iParam1, iVar5, iVar6);
	}
	func_646(iParam0, iParam1, iVar3);
}

void func_323(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	bVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(bVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(bVar0))
	{
		return;
	}
	if (!func_140(41))
	{
		if (func_652(iParam1, &iVar1))
		{
			iVar2 = func_653(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(bVar0, iVar1, iVar2);
		}
		return;
	}
	if (func_390(bVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_654(iParam0, iParam1);
	if (fVar4 >= 30.0f)
	{
		func_655(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_437(iParam0, iParam1);
	func_656(bVar0, iParam0, iParam1);
	if (func_657(iParam0, iParam1) > 0.0f)
	{
		func_658(iParam0, iParam1);
	}
	else
	{
		func_659(bVar0, iParam0, iParam1);
		iVar6 = func_437(iParam0, iParam1);
		func_660(iParam0, iParam1, iVar5, iVar6);
	}
	func_655(iParam0, iParam1, iVar3);
}

void func_324(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	struct<6> /*48*/ sVar9;
	int iVar15;
	struct<2> /*16*/ sVar16;
	struct<6> /*48*/ sVar38;
	int iVar45;
	struct<2> /*16*/ sVar46;
	struct<6> /*48*/ sVar68;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	float fVar80;
	float fVar81;
	float fVar82;

	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	fVar1 = 1.0f;
	fVar2 = 1.0f;
	fVar3 = 0.0f;
	fVar4 = 1.0f;
	fVar5 = 1.0f;
	fVar6 = 0.0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == func_201())
	{
		sVar9 = { func_355() /*6*/ };
		iVar15 = sVar9.f_1;
		if (func_284(iVar15, 0))
		{
			sVar16.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iVar15, &sVar16);
			iVar45 = 0;
			while (iVar45 < sVar16.f_0)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar16.f_1[iVar45], &sVar38);
				switch (sVar38.f_1)
				{
					case 2086291460:
						iVar8 += BUILTIN::FLOOR(((float)sVar38.f_2 * 0.01f));
						break;
					case -1620444701:
						iVar7 += BUILTIN::FLOOR(((float)sVar38.f_2 * 0.01f));
						break;
					case -225223329:
						fVar3 += (sVar38.f_5 * 0.01f);
						break;
					case 1167068375:
						fVar6 += (sVar38.f_5 * 0.01f);
						break;
					case -845587290:
						fVar5 -= (sVar38.f_5 * 0.01f);
						break;
					case 1605773431:
						fVar4 += (sVar38.f_5 * 0.01f);
						break;
				}
				iVar45++;
			}
		}
		iVar15 = sVar9.f_3;
		if (func_284(iVar15, 0))
		{
			sVar46.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iVar15, &sVar46);
			iVar75 = 0;
			while (iVar75 < sVar46.f_0)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar46.f_1[iVar75], &sVar68);
				switch (sVar68.f_1)
				{
					case 2086291460:
						iVar8 += BUILTIN::FLOOR(((float)sVar68.f_2 * 0.01f));
						break;
					case -1620444701:
						iVar7 += BUILTIN::FLOOR(((float)sVar68.f_2 * 0.01f));
						break;
					case -225223329:
						fVar3 += (sVar68.f_5 * 0.01f);
						break;
					case 1167068375:
						fVar6 += (sVar68.f_5 * 0.01f);
						break;
					case -845587290:
						fVar5 -= (sVar68.f_5 * 0.01f);
						break;
					case 1605773431:
						fVar4 += (sVar68.f_5 * 0.01f);
						break;
				}
				iVar75++;
			}
		}
	}
	if (func_661())
	{
		iVar7++;
	}
	func_662(0, fVar3);
	func_662(1, fVar6);
	iVar76 = func_663();
	iVar77 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar76);
	if (iVar77 != iVar7)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar76, iVar7);
	}
	iVar78 = func_664();
	iVar79 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78);
	if (iVar79 != iVar8)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78, iVar8);
	}
	fVar80 = PED::_GET_HEALTH_RECHARGE_MULTIPLIER(iVar0);
	if (fVar80 != fVar1)
	{
		PED::_SET_HEALTH_RECHARGE_MULTIPLIER(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar81 = PED::_GET_STAMINA_RECHARGE_MULTIPLIER(iVar0);
	if (fVar81 != fVar4)
	{
		PED::_SET_STAMINA_RECHARGE_MULTIPLIER(iVar0, fVar4);
	}
	fVar82 = PED::_GET_STAMINA_DEPLETION_MULTIPLIER(iVar0);
	if (fVar82 != fVar5)
	{
		PED::_SET_STAMINA_DEPLETION_MULTIPLIER(iVar0, fVar5);
	}
}

void func_325(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;
	int iVar6;
	int iVar7;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_273(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar2, bVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = sVar2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

void func_326(int iParam0, bool bParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/] = bParam1;
}

void func_327(int iParam0)
{
	Global_1900383.f_316 -= Global_1900383.f_316 & iParam0;
}

void func_328(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 108)
	{
		return;
	}
	Global_1913814.f_209[iParam0] = 0;
}

void func_329()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

struct<4> /*32*/ func_330(bool bParam0)
{
	return func_331(joaat("CHARACTER"), func_665(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> /*32*/ func_331(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_284(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_666(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

int func_332(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_331(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_666(bParam6), &sVar0, false);
	return iVar4;
}

void func_333(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_334(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_284(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_667(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_668(0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_666(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_335(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_668(0))
	{
		return func_669(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_670(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_666(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_336(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((func_173(iParam0, 2) || func_173(iParam0, 4)) || func_173(iParam0, 8))
	{
		return true;
	}
	return false;
}

Vector3 func_337(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (iParam0 >= 7)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1900383[iParam0 /*45*/].f_19;
}

float func_338(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_1900383[iParam0 /*45*/].f_22;
}

void func_339(int iParam0)
{
	func_671(iParam0);
	func_672(iParam0);
}

bool func_340()
{
	bool bVar0;

	bVar0 = PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_341(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_673(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_674(iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_342(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam0))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar0, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam0));
	return iVar0;
}

void func_343(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (func_389(bParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, false, true);
	}
	PED::_0xBCC76708E5677E1D(bParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_35, bParam0, false);
	PED::_0xB8B6430EAD2D2437(bParam0, joaat("PLAYER_HORSE"));
	iVar1 = ENTITY::GET_ENTITY_MODEL(bParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(bParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(bParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(bParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(bParam0, false);
	PLAYER::_0xDF93973251FB2CA5(iVar0, 1);
	PED::REQUEST_PED_VISIBILITY_TRACKING(bParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(bParam0, false);
	if (func_388(bParam0))
	{
		iVar3 = func_401(bParam0);
		if (func_675(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(bParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(bParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(bParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 24, false);
}

void func_344(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_352(iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "HorseGender", iVar0);
	iVar1 = func_115(iParam1);
	func_676(iParam0, iVar1);
	PED::_SET_MOUNT_BONDING_LEVEL(iParam0, iVar1);
	iVar2 = BUILTIN::FLOOR(func_367(iParam1));
	func_677(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (func_641(iVar4, &uVar3))
		{
			iVar5 = func_578(iParam1, iVar4);
			func_644(iParam0, iVar4, iVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_652(iVar7, &uVar6))
		{
			iVar5 = func_437(iParam1, iVar7);
			func_678(iParam0, iVar7, iVar5);
		}
		iVar7++;
	}
	iVar8 = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(iParam0, iVar8, func_679(iParam1));
	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(iVar8, func_680(iParam1));
		PED::_0x024EC9B649111915(iParam0, true);
	}
}

void func_345(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0], &(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar0]), 1);
		iVar0++;
	}
}

void func_346(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0);
	iVar2 = 0;
	while (iVar2 < 57)
	{
		iVar3 = func_681(iVar2, 1);
		iVar4 = iVar3;
		if (!func_284(iVar4, 0))
		{
		}
		else
		{
			iVar5 = (*uParam1)[iVar2];
			if (iVar5 <= 0)
			{
			}
			else
			{
				iVar6 = func_627(iVar1, iVar4, iVar5);
			}
		}
		iVar2++;
	}
}

void func_347(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/];
		if (func_284(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_1;
			uVar5 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

void func_348(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_682(iParam0);
	func_683();
}

float func_349(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_420.f_1;
}

void func_350(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_23 = iParam1;
}

int func_351(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_23;
}

int func_352(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_10;
}

void func_353(int iParam0, int iParam1)
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

struct<2> /*16*/ func_354(int iParam0)
{
	struct<2> /*16*/ sVar0;
	var uVar2;
	var uVar3;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return sVar0;
	}
	if (iParam0 >= 7)
	{
		return sVar0;
	}
	if (!func_684(iParam0, &uVar2))
	{
	}
	if (!func_685(iParam0, &uVar3))
	{
	}
	sVar0.f_0 = uVar2;
	sVar0.f_1 = uVar3;
	return sVar0;
}

struct<6> /*48*/ func_355()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_686(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_686(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_686(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_686(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_686(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_686(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

void func_356(var uParam0)
{
	func_687(uParam0);
	func_688(uParam0, 0);
	func_689(uParam0, 0);
	func_690(uParam0, 0);
	func_691(uParam0, 0);
	func_692(uParam0, 0);
	func_693(uParam0, 0);
}

int func_357(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return 0;
	}
	if (func_652(iParam1, &iVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(bParam0, iVar0);
	}
	return 0;
}

int func_358(int iParam0)
{
	int iVar0;

	iVar0 = 1745919061;
	if (iParam0 <= 0)
	{
		iVar0 = -2045421226;
	}
	else if (iParam0 < 5)
	{
		iVar0 = -1745814259;
	}
	else if (iParam0 < 10)
	{
		iVar0 = -325933489;
	}
	else if (iParam0 < 15)
	{
		iVar0 = -1065791927;
	}
	else if (iParam0 < 20)
	{
		iVar0 = -844699484;
	}
	else if (iParam0 < 25)
	{
		iVar0 = -1273449080;
	}
	else if (iParam0 < 30)
	{
		iVar0 = 927185840;
	}
	else if (iParam0 < 35)
	{
		iVar0 = 149872391;
	}
	else if (iParam0 < 40)
	{
		iVar0 = 399015098;
	}
	else if (iParam0 < 45)
	{
		iVar0 = -644349862;
	}
	else if (iParam0 < 50)
	{
		iVar0 = 1745919061;
	}
	else if (iParam0 < 55)
	{
		iVar0 = 1004225511;
	}
	else if (iParam0 < 60)
	{
		iVar0 = 1278600348;
	}
	else if (iParam0 < 65)
	{
		iVar0 = 502499352;
	}
	else if (iParam0 < 70)
	{
		iVar0 = -2093198664;
	}
	else if (iParam0 < 75)
	{
		iVar0 = -1837436619;
	}
	else if (iParam0 < 80)
	{
		iVar0 = 1736416063;
	}
	else if (iParam0 < 85)
	{
		iVar0 = 2040610690;
	}
	else if (iParam0 < 90)
	{
		iVar0 = -1173634986;
	}
	else if (iParam0 < 95)
	{
		iVar0 = -867801909;
	}
	else if (iParam0 >= 95)
	{
		iVar0 = 1960266524;
	}
	return iVar0;
}

void func_359(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_1 = iParam1;
}

bool func_360(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_433;
}

void func_361(int iParam0, bool bParam1)
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

void func_362(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return;
	}
	func_694(bParam0);
	func_695(bParam0, uParam1);
	func_468(bParam0);
	func_696(bParam0, uParam2);
	if (iParam3 != 0)
	{
		func_697(bParam0, iParam3, 0);
	}
	PED::_UPDATE_PED_VARIATION(bParam0, false, true, true, true, true);
}

void func_363(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	Vector3 vVar3;
	Vector3 vVar6;
	int iVar9;
	struct<94> /*752*/ sVar10;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	bVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bVar0) || PED::IS_PED_INJURED(bVar0))
	{
		return;
	}
	sVar10.f_10 = 10;
	iVar114 = 0;
	while (iVar114 < 3)
	{
		iVar112 = iVar114;
		func_272(&sVar10);
		func_274(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar112 /*94*/]), &sVar10);
		if (!STREAMING::IS_MODEL_VALID(sVar10.f_0))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(sVar10.f_0))
		{
		}
		else
		{
			switch (iVar114)
			{
				case 0:
					vVar6 = { 0.0f, -1.0f, 0.0f /*3*/ };
					break;
				case 1:
					vVar6 = { -1.0f, 0.0f, 0.0f /*3*/ };
					break;
				case 2:
					vVar6 = { 1.0f, 0.0f, 0.0f /*3*/ };
					break;
			}
			vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(bVar0, vVar6) /*3*/ };
			if (STREAMING::_IS_MODEL_AN_OBJECT(sVar10.f_0))
			{
				iVar1 = OBJECT::CREATE_OBJECT(sVar10.f_0, vVar3, true, true, false, false, true);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
				}
				else
				{
					iVar9 = func_698(iVar114);
					TASK::TASK_CARRIABLE(iVar1, sVar10.f_3, bVar0, iVar9, 0);
					ENTITY::_SET_ENTITY_CARCASS_TYPE(iVar1, sVar10.f_1);
					ENTITY::_0xEF259AA1E097E0AD(iVar1, sVar10.f_93);
					iVar115 = func_286(bVar0, iVar1);
					Jump @798; // curOff = 318
					if (STREAMING::IS_MODEL_A_PED(sVar10.f_0))
					{
						iVar2 = func_699(sVar10.f_0, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0);
						if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
						}
						else
						{
							if (ENTITY::GET_IS_ANIMAL(iVar2))
							{
								if (sVar10.f_6 == 2)
								{
									PERSISTENCE::_0x8DE104BEC243A73B(sVar10.f_0);
								}
								PED::_SET_PED_QUALITY(iVar2, sVar10.f_4);
								FLOCK::_SET_ANIMAL_RARITY(iVar2, sVar10.f_6);
								PED::_SET_PED_DAMAGE_CLEANLINESS(iVar2, sVar10.f_7);
							}
							if (sVar10.f_8 != 0)
							{
								PED::_EQUIP_META_PED_OUTFIT(iVar2, sVar10.f_8);
								if (sVar10.f_92)
								{
									iVar116 = joaat("META_OUTFIT_FIELD_DRESSING_001");
									if (PED::_DOES_METAPED_SUBOUTFIT_EXIST_FOR_PED_MODEL(sVar10.f_8, iVar116, sVar10.f_0))
									{
										PED::_EQUIP_META_PED_SUBOUTFIT(iVar2, iVar116, 0);
									}
								}
							}
							iVar113 = 0;
							while (iVar113 < sVar10.f_9)
							{
								iVar104 = sVar10.f_10[iVar113 /*8*/];
								iVar105 = sVar10.f_10[iVar113 /*8*/].f_1;
								iVar106 = sVar10.f_10[iVar113 /*8*/].f_2;
								iVar107 = sVar10.f_10[iVar113 /*8*/].f_3;
								iVar108 = sVar10.f_10[iVar113 /*8*/].f_4;
								iVar109 = sVar10.f_10[iVar113 /*8*/].f_5;
								iVar110 = sVar10.f_10[iVar113 /*8*/].f_6;
								iVar111 = sVar10.f_10[iVar113 /*8*/].f_7;
								PED::_SET_META_PED_TAG(iVar2, iVar104, iVar105, iVar106, iVar107, iVar108, iVar109, iVar110, iVar111);
								iVar113++;
							}
							PED::_UPDATE_PED_VARIATION(iVar2, false, true, true, true, false);
							if (sVar10.f_2 == 2)
							{
								ENTITY::SET_ENTITY_HEALTH(iVar2, 0, 0);
								PED::SET_PED_CONFIG_FLAG(iVar2, 517, true);
								PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar2, 0);
							}
							if (sVar10.f_92)
							{
								PED::SET_LOOTING_FLAG(iVar2, 0, false);
								ENTITY::_0x6BCF5F3D8FFE988D(iVar2, true);
							}
							iVar9 = func_698(iVar114);
							TASK::TASK_CARRIABLE(iVar2, sVar10.f_3, bVar0, iVar9, 0);
							ENTITY::_SET_ENTITY_CARCASS_TYPE(iVar2, sVar10.f_1);
							ENTITY::_0xEF259AA1E097E0AD(iVar2, sVar10.f_93);
							iVar117 = func_515(iVar2);
							if (func_284(iVar117, 0))
							{
								if (iVar117 != sVar10.f_1)
								{
									Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar112 /*94*/].f_1 = iVar117;
									sVar10.f_1 = iVar117;
								}
							}
							iVar118 = func_286(bVar0, iVar2);
							func_618(sVar10.f_1, 0, 0, 1);
						}
					}
				}
				iVar114++;
			}
		}
	}
}

void func_364(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = 0.0f;
}

void func_365(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_23 = 0;
}

void func_366(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_387(iParam0, 1);
}

float func_367(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_368(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_369()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

int func_370()
{
	return Global_1900383.f_378;
}

void func_371(int iParam0)
{
	Global_1900383.f_378.f_9 = iParam0;
}

void func_372(int iParam0)
{
	Global_1900383.f_378.f_10 = iParam0;
}

void func_373(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (Global_1900383.f_378.f_1[iParam0] != iParam1)
	{
	}
	Global_1900383.f_378.f_1[iParam0] = iParam1;
}

void func_374(int iParam0)
{
	Global_1900383.f_378.f_11 = iParam0;
}

bool func_375()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_376(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_198(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_377()
{
	int iVar0;

	iVar0 = Global_40.f_1095.f_1[5 /*436*/].f_11;
	switch (iVar0)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(func_88(6)) && func_187(Global_35, func_88(6), 1, 1) <= 80.0f)
			{
				func_381("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_381("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			func_381("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

bool func_378(int iParam0)
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
				return true;
		}
	}
	return false;
}

bool func_379(int iParam0)
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
				return true;
		}
	}
	return false;
}

bool func_380(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_71(iParam0))
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_381(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_382(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_26))
	{
		if (Global_1900383[iParam0 /*45*/].f_25 == 2)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE_WHISTLE"));
		}
		else if (Global_1900383[iParam0 /*45*/].f_25 == 1)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
			MAP::BLIP_ADD_MODIFIER(Global_1900383[iParam0 /*45*/].f_26, joaat("BLIP_MODIFIER_PLAYER_HORSE_IN_RANGE_WHISTLE"));
		}
	}
}

void func_383(int iParam0)
{
	struct<12> /*96*/ sVar0;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<12> /*96*/ sVar15;
	struct<12> /*96*/ sVar27;
	int iVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	struct<12> /*96*/ sVar44;
	int iVar56;
	int iVar57;
	Vector3 vVar58;
	float fVar61;
	Vector3 vVar62;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	bool bVar68;
	bool bVar69;
	bool bVar70;
	int iVar71;
	Vector3 vVar72;
	var uVar75;
	bool bVar76;
	int iVar77;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_21(iParam0, &sVar0);
	iVar12 = func_207(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar12))
	{
		func_373(iParam0, 6);
		return;
	}
	iVar13 = func_115(iParam0);
	iVar14 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar12, 7);
	func_21(0, &sVar15);
	func_21(1, &sVar27);
	if (iParam0 == 1 && !sVar27.f_2)
	{
		func_373(iParam0, 6);
		return;
	}
	iVar39 = MISC::GET_GAME_TIMER();
	bVar40 = false;
	if (iParam0 == 0)
	{
		bVar40 = true;
		if (!sVar15.f_11)
		{
			if (sVar27.f_11 && !sVar27.f_10)
			{
				bVar40 = false;
			}
		}
	}
	if (iParam0 == 1)
	{
		if (!sVar15.f_2)
		{
			bVar40 = true;
		}
	}
	if (bVar40)
	{
	}
	switch (func_384(iParam0))
	{
		case 0:
			func_373(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (func_84(0) == 1 && !func_71(0))
				{
					func_373(iParam0, 2);
					return;
				}
			}
			if (!func_71(iParam0))
			{
				func_373(iParam0, 6);
				return;
			}
			if (func_115(iParam0) < 1)
			{
				func_373(iParam0, 6);
				return;
			}
			if (!sVar0.f_11)
			{
				if (func_700())
				{
					func_373(iParam0, 2);
					return;
				}
				bVar41 = false;
				if (iParam0 == 0)
				{
					if (sVar27.f_10)
					{
						bVar41 = true;
					}
				}
				if (iParam0 == 1)
				{
					if (sVar15.f_10)
					{
						bVar41 = true;
					}
				}
				if (!bVar40 && bVar41)
				{
					bVar40 = true;
				}
				if (!func_280())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (func_490(1) < 3)
					{
						iVar42 = 1;
						if (iVar13 < iVar14)
						{
							iVar43 = 6;
						}
					}
					else
					{
						iVar42 = 2;
					}
					if (bVar41)
					{
						if (iParam0 == 0)
						{
							iVar42 = 3;
						}
						else if (iParam0 == 1)
						{
							iVar42 = 4;
						}
					}
					else
					{
						if (iParam0 == 0)
						{
							MISC::_COPY_MEMORY(&sVar44, &sVar27, 12);
						}
						else if (iParam0 == 1)
						{
							MISC::_COPY_MEMORY(&sVar44, &sVar15, 12);
						}
						if (sVar44.f_1)
						{
							if (!sVar44.f_11)
							{
								iVar42 = 5;
							}
						}
					}
					if (iVar43 != -1)
					{
						func_283(iVar43, 1);
					}
					if ((iVar42 == 1 || iVar42 == 3) || iVar42 == 4)
					{
						iVar56 = 0;
						if (iParam0 == 0)
						{
							iVar56 = joaat("BLIP_STYLE_PLAYER_HORSE");
						}
						else if (iParam0 == 1)
						{
							iVar56 = joaat("BLIP_STYLE_TEMPORARY_HORSE");
						}
						if (iVar56 != 0)
						{
							if (iParam0 == 0)
							{
								iVar57 = func_701();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_702();
							}
							if (!MAP::DOES_BLIP_EXIST(iVar57))
							{
								iVar57 = MAP::_BLIP_ADD_FOR_STYLE(iVar56);
								MAP::BLIP_ADD_MODIFIER(iVar57, joaat("BLIP_MODIFIER_PLAYER_HORSE_OUT_OF_RANGE"));
								if (iParam0 == 0)
								{
									func_703(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_704(&iVar57);
								}
							}
							func_464(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						func_283(iVar42, 1);
					}
				}
			}
			func_373(iParam0, 5);
			break;
		case 2:
			func_705(&(Global_1900383[iParam0 /*45*/].f_4));
			func_373(iParam0, 3);
		case 3:
			vVar62 = { func_706(iParam0) /*3*/ };
			if (!func_707(&(Global_1900383[iParam0 /*45*/].f_4), Global_36, vVar62, sVar0.f_0, 1065353216))
			{
				if (Global_1900383[iParam0 /*45*/].f_4.f_1)
				{
					if (!func_375())
					{
						func_381("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					func_315(iParam0);
					func_708(Global_35, "HORSE_NO_SHOW", joaat("SPEECH_PARAMS_STANDARD"), 0, 1, 0, 0, 1);
					func_373(iParam0, 6);
				}
				return;
			}
			vVar58 = { func_709(&(Global_1900383[iParam0 /*45*/].f_4)) /*3*/ };
			fVar61 = func_710(vVar58, Global_36, 1);
			if (!func_71(iParam0))
			{
				func_448(iParam0, vVar58, fVar61);
				func_447(iParam0);
			}
			func_373(iParam0, 4);
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(sVar0.f_0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(sVar0.f_0) || PED::IS_PED_INJURED(sVar0.f_0))
			{
				return;
			}
			vVar58 = { func_709(&(Global_1900383[iParam0 /*45*/].f_4)) /*3*/ };
			fVar61 = func_710(vVar58, Global_36, 1);
			ENTITY::FREEZE_ENTITY_POSITION(sVar0.f_0, false);
			ENTITY::SET_ENTITY_COORDS(sVar0.f_0, vVar58, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(sVar0.f_0, fVar61);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(sVar0.f_0, false);
			func_373(iParam0, 5);
		case 5:
			if (!sVar0.f_2)
			{
				func_373(iParam0, 6);
				return;
			}
			if (sVar0.f_10)
			{
				func_373(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (ENTITY::DOES_ENTITY_EXIST(sVar0.f_9))
			{
				if (func_456(sVar0.f_9))
				{
					if (func_76(256))
					{
					}
					else
					{
						bVar65 = true;
					}
				}
				if (func_711(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_712(iParam0, 1);
			}
			bVar66 = false;
			if (sVar0.f_11 || func_700())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				func_66(iParam0);
				func_382(iParam0);
				func_373(iParam0, 6);
				return;
			}
			bVar67 = false;
			if (func_76(32))
			{
				bVar67 = true;
			}
			bVar68 = true;
			bVar69 = func_713();
			bVar70 = func_172(iParam0);
			if (!bVar67)
			{
				if (bVar69)
				{
					if (bVar70)
					{
						iVar71 = func_170();
						if (!func_171(iVar71))
						{
							func_714(&vVar72, &uVar75);
							bVar76 = false;
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(sVar0.f_5, vVar72, true) < 3.0f)
							{
								bVar76 = true;
							}
							if (func_223(iParam0) || bVar76)
							{
								if (bVar40)
								{
									if (func_280())
									{
										func_283(9, 1);
									}
								}
							}
							else if (bVar40)
							{
								if (func_280())
								{
									func_283(8, 1);
								}
							}
							bVar68 = false;
						}
					}
				}
			}
			if (bVar68)
			{
				PHYSICS::_UNHITCH_HORSE(sVar0.f_0);
				ENTITY::FREEZE_ENTITY_POSITION(sVar0.f_0, false);
				if (func_715() == 0)
				{
					if (func_168(sVar0.f_0, joaat("SCRIPT_TASK_GO_TO_WHISTLE")))
					{
						func_371(1);
					}
				}
				iVar77 = func_715();
				TASK::TASK_GO_TO_WHISTLE(sVar0.f_0, Global_35, iVar77);
				FLOCK::_0xFF1E339CE40EAAAF(sVar0.f_0, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(sVar0.f_0, 48, false);
				func_374(iVar39);
			}
			func_66(iParam0);
			func_382(iParam0);
			func_373(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_384(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1900383.f_378.f_1[iParam0];
}

bool func_385(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_386(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1900383[iParam0 /*45*/].f_27))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1900383[iParam0 /*45*/].f_27));
	}
}

void func_387(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 -= Global_1900383[iParam0 /*45*/].f_24 & iParam1;
}

bool func_388(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_401(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_389(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (func_716(ENTITY::GET_ENTITY_MODEL(bParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_390(bool bParam0)
{
	char* sVar0;

	sVar0 = "HorseMission";
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(bParam0, sVar0))
	{
		return true;
	}
	return false;
}

bool func_391(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (!PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_IS_WILD(bParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_392(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_DONKEY_01"):
			return true;
	}
	return false;
}

bool func_393(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSEMULE_01"):
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return true;
	}
	return false;
}

int func_394()
{
	return Global_1900383.f_404;
}

void func_395(int iParam0)
{
	Global_1900383.f_404 = iParam0;
}

var func_396()
{
	return Global_1900383.f_404.f_6;
}

void func_397(int iParam0)
{
	Global_1900383.f_404.f_6 = iParam0;
}

bool func_398(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	float fVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = PED::_GET_ACTIVE_ANIMAL_OWNER(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	*uParam1 = iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_HOGTIED(iVar0))
	{
		return false;
	}
	if (fParam2 > 0.0f)
	{
		fVar1 = func_187(iParam0, iVar0, 0, 1);
		if (fVar1 > fParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_399(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_613(bParam1, bParam2, bParam3);
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

bool func_400(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (func_190(iParam0) == 0.0f)
	{
		return true;
	}
	return false;
}

int func_401(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (bParam0 == Global_1900383[iVar0 /*45*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_402(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_403(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	func_315(1);
	if (func_71(1))
	{
		func_202(1, 0);
	}
	func_203(1);
	func_717(iParam0, 1, 0);
	func_200(1, 1);
	if (func_115(1) == 0)
	{
		func_718(1, 1);
	}
	bVar1 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(PLAYER::PLAYER_ID(), iParam0);
	func_404();
}

void func_404()
{
	if (func_71(0))
	{
		func_66(0);
	}
	if (func_71(1))
	{
		func_66(1);
	}
	if (func_71(5))
	{
		func_66(5);
	}
	if (func_71(6))
	{
		func_315(6);
	}
}

void func_405(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		func_315(iVar0);
	}
	if (func_71(6))
	{
		func_202(6, 0);
	}
	func_203(6);
	func_717(iParam0, 6, 0);
	func_200(6, 1);
	if (!bParam1)
	{
		func_454(6, 0);
		func_482(MISC::GET_GAME_TIMER());
	}
	func_404();
}

void func_406(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_508), &(Global_40.f_1095.f_1[iParam1 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam1 /*436*/]), &(Global_40.f_1095.f_1[iParam0 /*436*/]), 436);
	MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/]), &(Global_1900383.f_508), 436);
}

void func_407(int iParam0, int iParam1)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_463), &(Global_1900383[iParam1 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam1 /*45*/]), &(Global_1900383[iParam0 /*45*/]), 45);
	MISC::_COPY_MEMORY(&(Global_1900383[iParam0 /*45*/]), &(Global_1900383.f_463), 45);
}

int func_408(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;
	bool bVar58;
	int iVar59;

	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!func_719(iParam0, &sVar0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_719(iParam1, &sVar29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_720(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_721(sVar0, sVar0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_722(sVar0, sVar29, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_409(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanCommonHorse"))
	{
		return true;
	}
	return false;
}

bool func_410(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanLivestock"))
	{
		return true;
	}
	return false;
}

bool func_411(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	sVar0 = "bHorseHasBeenStolen";
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return false;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

bool func_412()
{
	return (Global_1894899 & 1 != 0 && func_723() != -1);
}

void func_413(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	bVar1 = false;
	if (func_392(iVar0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (func_393(iVar0))
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!func_76((1 << 11)))
	{
		if (bVar1)
		{
			if (!func_458(bParam0, joaat("HONOR_EVENT_STEAL_DONKEY")))
			{
				iVar3 = joaat("HONOR_EVENT_STEAL_DONKEY");
			}
		}
		else if (bVar2)
		{
			if (!func_458(bParam0, joaat("HONOR_EVENT_STEAL_MULE")))
			{
				iVar3 = joaat("HONOR_EVENT_STEAL_MULE");
			}
		}
		else if (!func_458(bParam0, joaat("HONOR_EVENT_STEAL_HORSE")))
		{
			iVar3 = joaat("HONOR_EVENT_STEAL_HORSE");
		}
		if (iVar3 != 0)
		{
			func_243(0, iVar3, 0, 0, 0, 0, 1065353216, 0);
		}
	}
}

void func_414(bool bParam0)
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

void func_415(bool bParam0)
{
	Global_1900372.f_2 = 0;
	Global_1900372.f_1 = 0;
	Global_1900372.f_3 = 0;
	Global_1900372.f_4 = 0;
	Global_1900372.f_5 = 0;
	Global_1900372.f_6 = 0;
	Global_1900372.f_7 = 0;
	if (bParam0)
	{
		Global_1900372.f_8 = 0;
		Global_1900372.f_9 = 0;
		Global_1900372.f_10 = 0;
	}
}

void func_416(int iParam0)
{
	Global_1900372 = iParam0;
}

bool func_417()
{
	return Global_1900372.f_5;
}

var func_418()
{
	return Global_1900372.f_2;
}

var func_419()
{
	return Global_1900372.f_1;
}

bool func_420(int iParam0)
{
	if (func_724(iParam0))
	{
		return true;
	}
	if (func_725(iParam0))
	{
		return true;
	}
	if (func_726(iParam0))
	{
		return true;
	}
	if (func_727(iParam0))
	{
		return true;
	}
	if (func_728(iParam0))
	{
		return true;
	}
	if (func_729(iParam0))
	{
		return true;
	}
	if (func_730(iParam0))
	{
		return true;
	}
	return false;
}

bool func_421()
{
	int iVar0;
	int iVar1;

	iVar0 = func_418();
	iVar1 = func_419();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_35, iVar0))
	{
		return false;
	}
	if (!func_420(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(iVar0))
	{
		return false;
	}
	return true;
}

bool func_422(int iParam0, int iParam1)
{
	struct<18> /*144*/ sVar0;
	bool bVar25;
	int iVar26;
	int iVar27;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	sVar0.f_3 = -1;
	sVar0.f_12 = 4;
	sVar0.f_17 = 4;
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO(iParam1, &sVar0))
	{
	}
	bVar25 = false;
	iVar26 = sVar0.f_0;
	if (func_724(iParam1))
	{
		iVar26 = 0;
		iVar27 = joaat("INTERACTION_FOOD");
		bVar25 = true;
	}
	if ((func_726(iParam1) || func_727(iParam1)) || func_725(iParam1))
	{
		iVar26 = joaat("P_CS_SYRINGE01X");
		iVar27 = joaat("INTERACTION_INJECTION_QUICK");
		bVar25 = true;
	}
	if (func_728(iParam1))
	{
		iVar27 = joaat("INTERACTION_OINTMENT");
		bVar25 = true;
	}
	if (func_729(iParam1))
	{
		iVar27 = joaat("INTERACTION_BRUSH");
		bVar25 = true;
	}
	if (!bVar25)
	{
		return false;
	}
	TASK::TASK_ANIMAL_INTERACTION(Global_35, iParam0, iVar27, iVar26, false);
	return true;
}

void func_423(int iParam0)
{
	Global_1900372.f_3 = iParam0;
}

int func_424()
{
	return Global_1900372.f_3;
}

void func_425(int iParam0)
{
	Global_1900372.f_4 = iParam0;
}

void func_426(int iParam0)
{
	Global_1900372.f_8 = iParam0;
}

void func_427(int iParam0)
{
	Global_1900372.f_9 = iParam0;
}

void func_428(int iParam0)
{
	Global_1900372.f_10 = iParam0;
}

void func_429(int iParam0)
{
	Global_1900372.f_7 = iParam0;
}

bool func_430()
{
	return Global_1900372.f_7;
}

bool func_431(int iParam0, int iParam1)
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

int func_432(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	iVar3 = func_731(iParam0, 1);
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
			func_732(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_733(iParam0, 1, bParam4))
	{
		return 0;
	}
	sVar5 = { func_734(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_735(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_735(iParam0, 0, 0) - iParam1) < 0)
		{
			func_432(iParam0, func_735(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_736(iParam0) == joaat("WEAPON"))
	{
		if (!func_737(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_738(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_668(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_732(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_278(iParam0, iParam1);
	return 1;
}

void func_433(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_420(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	if (func_724(iParam1))
	{
		func_739(iParam0, iParam1);
		return;
	}
	if (func_725(iParam1))
	{
		func_740(iParam0, iParam1);
		return;
	}
	if (func_726(iParam1))
	{
		func_741(iParam0, iParam1);
		return;
	}
	if (func_727(iParam1))
	{
		func_504(iParam0, iParam1);
		return;
	}
	if (func_728(iParam1))
	{
		func_742(iParam0, iParam1);
		return;
	}
	if (func_730(iParam1))
	{
		func_743(iParam0, iParam1);
		return;
	}
	if (func_729(iParam1))
	{
		iVar0 = func_744();
		func_745(iParam0, iParam1, iVar0);
		return;
	}
}

bool func_434()
{
	return Global_1900372.f_6;
}

var func_435()
{
	return Global_1900372.f_8;
}

bool func_436()
{
	return Global_1900372.f_10;
}

int func_437(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/];
}

void func_438(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_437(iParam0, iParam1);
	func_746(iParam0, iParam1, (iVar0 + iParam2));
}

void func_439(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_357(bParam0, iParam1);
	func_678(bParam0, iParam1, (iVar0 + iParam2));
}

int func_440(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	return func_747(iParam0);
}

int func_441(Vector3 vParam0)
{
	return func_748(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_442(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_71(iParam0))
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return true;
	}
	return false;
}

void func_443(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iVar0, 0, 0);
}

void func_444()
{
	bool bVar0;

	bVar0 = func_211();
	if (!ENTITY::DOES_ENTITY_EXIST(bVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&bVar0);
	func_466(0);
}

int func_445(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_8;
}

void func_446(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_749(&iVar0, &iVar1, &iVar2);
	func_750(iParam0, iVar0);
	func_751(iParam0, iVar1);
	func_752(iParam0, iVar2);
	func_200(iParam0, 1);
	func_718(iParam0, 1);
}

void func_447(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_753(iParam0, 1);
}

void func_448(int iParam0, Vector3 vParam1, float fParam4)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_19 = { vParam1 /*3*/ };
	Global_1900383[iParam0 /*45*/].f_22 = fParam4;
}

void func_449(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_2 = 1;
	Global_1900383[iParam0 /*45*/].f_3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_450(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_181(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_183(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_183(iParam0);
	}
}

bool func_451(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_452(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

void func_453(int iParam0, float fParam1)
{
	char* sVar0;
	bool bVar1;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 11:
		case 12:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 13:
		case 14:
		case 15:
			sVar0 = "HORSE_XP_FED";
			break;
		case 16:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 17:
		case 18:
		case 19:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 20:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
		case 10:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 21:
		case 22:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_754(sVar0, "ITEMTYPE_TEXTURES", joaat("TRANSACTION_HORSE_BOND"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_454(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_140(43))
		{
			return;
		}
	}
	iVar0 = func_207(iParam0);
	if (func_392(iVar0) || func_393(iVar0))
	{
		return;
	}
	iVar1 = func_115(iParam0);
	if (iVar1 >= func_755(iVar0))
	{
		return;
	}
	if (func_470(iParam0, iParam1))
	{
		return;
	}
	if (func_756(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_757(iParam0, iParam1);
	fVar3 = func_758(iParam1);
	fVar3 *= (1.0f + Global_40.f_11095.f_68);
	switch (iParam1)
	{
		case 1:
			bVar4 = func_88(iParam0);
			if (func_518(bVar4, 0))
			{
				fVar3 *= 0.5f;
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 += fVar3;
			break;
		case 2:
		case 3:
			if (func_759())
			{
				fVar3 *= 2.0f;
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 += fVar3;
			break;
		case 4:
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 += fVar3;
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_367(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0.0f;
			}
			break;
		default:
			func_453(iParam1, fVar3);
			break;
	}
	func_760(iParam0, fVar3);
	func_472(iParam0, iParam1, (fVar2 + fVar3));
}

int func_455(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "not_enemy"))
	{
		return 0;
	}
	switch (PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SMUGGLERS"):
		case joaat("REL_GANG_LARAMIE_GANG"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_BOUNTY_HUNTER"):
		case joaat("REL_PLAYER_DISLIKE"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_COP"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
		case joaat("REL_PLAYER_ENEMY"):
			return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		if ((iVar0 == 6 || iVar0 == 4) || iVar0 == 5)
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "instigated_by_player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_456(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_2() != -1)
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

bool func_457(int iParam0, int iParam1)
{
	if ((((LAW::_0x40851BCC33ACD9AB(iParam0) && func_134() != 8) && !func_608(0, 0, 1)) && !func_458(iParam0, iParam1)) && !func_399(PLAYER::PLAYER_ID(), 0, 0, 1))
	{
		return true;
	}
	return false;
}

bool func_458(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		if (DECORATOR::DECOR_EXIST_ON(bParam0, "honor_block"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(bParam0, "honor_block");
			iVar1 = func_547(iParam1);
			if (iVar0 & iVar1 != 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_459()
{
	int iVar0;

	iVar0 = func_401(func_761(Global_35));
	if (iVar0 == -1)
	{
		return;
	}
}

void func_460(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_401(func_761(Global_35));
	if (iVar0 == -1)
	{
		return;
	}
}

void func_461(int iParam0)
{
	Global_1900372.f_6 = iParam0;
}

void func_462(int iParam0, Vector3 vParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_28 = { vParam1 /*3*/ };
}

void func_463()
{
	struct<6> /*48*/ sVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<6> /*48*/ sVar13;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	sVar0 = { func_355() /*6*/ };
	iVar6 = sVar0.f_0;
	iVar7 = sVar0.f_1;
	iVar8 = sVar0.f_2;
	iVar9 = sVar0.f_3;
	iVar10 = sVar0.f_4;
	iVar11 = sVar0.f_5;
	iVar12 = 3;
	iVar19 = joaat("BASE");
	if (func_762(iVar6))
	{
		iVar20 = iVar6;
		sVar13.f_0 = PED::_REQUEST_METAPED_COMPONENT(iVar12, iVar20, iVar19, 0, 0);
	}
	if (func_762(iVar7))
	{
		iVar21 = iVar7;
		sVar13.f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar12, iVar21, iVar19, 0, 0);
	}
	if (func_762(iVar8))
	{
		iVar22 = iVar8;
		sVar13.f_2 = PED::_REQUEST_METAPED_COMPONENT(iVar12, iVar22, iVar19, 0, 0);
	}
	if (func_762(iVar9))
	{
		iVar23 = iVar9;
		sVar13.f_3 = PED::_REQUEST_METAPED_COMPONENT(iVar12, iVar23, iVar19, 0, 0);
	}
	if (func_762(iVar10))
	{
		iVar24 = iVar10;
		sVar13.f_4 = PED::_REQUEST_METAPED_COMPONENT(iVar12, iVar24, iVar19, 0, 0);
	}
	if (func_762(iVar11))
	{
		iVar25 = iVar11;
		sVar13.f_5 = PED::_REQUEST_METAPED_COMPONENT(iVar12, iVar25, iVar19, 0, 0);
	}
	func_763(sVar13);
}

void func_464(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_524(iParam0, &iVar0, &iVar1);
	if (!func_623(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_764(iParam0, (1 << 10)))
	{
		return;
	}
	func_624(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_466(int iParam0)
{
	Global_1900383.f_393 = iParam0;
}

void func_467(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_345(iParam0, &uVar0);
	func_765(&uVar58);
	func_766(iParam0, &uVar0, 1);
	func_767(&uVar0, &uVar58, &uVar116);
	func_768(&uVar116);
	func_769(iParam0, &uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_770(iParam0, &uVar232);
	func_771(&uVar248);
	iVar280 = func_772(&uVar232);
	iVar281 = func_772(&uVar248);
	if (iVar281 > iVar280)
	{
		func_773(&uVar248);
	}
	else
	{
		func_773(&uVar232);
	}
	func_774(iParam0);
	func_775(iParam0, &uVar264);
}

void func_468(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_BLANKETS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_SADDLES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("SADDLE_HORNS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("SADDLE_STIRRUPS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_BEDROLLS"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_SADDLEBAGS"), 0, false);
}

void func_469(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_433 = iParam1;
}

bool func_470(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	fVar0 = func_471(iParam1);
	if (fVar0 == 1E+09f)
	{
		return false;
	}
	if (func_757(iParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

float func_471(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15.0f;
		case 4:
			return 1E+09f;
		case 1:
			return 1E+09f;
		case 2:
			return 1E+09f;
		case 3:
			return 1E+09f;
		case 5:
			return 100.0f;
		case 6:
			return 30.0f;
		case 7:
			return 1E+09f;
		case 8:
			return 1E+09f;
		case 9:
			return 1E+09f;
		case 10:
			return 1E+09f;
		case 11:
			return 1E+09f;
		case 12:
			return 1E+09f;
		case 13:
			return 1E+09f;
		case 14:
			return 1E+09f;
		case 15:
			return 1E+09f;
		case 16:
			return 1E+09f;
		case 17:
			return 1E+09f;
		case 18:
			return 1E+09f;
		case 19:
			return 1E+09f;
		case 20:
			return 1E+09f;
		case 21:
			return 1E+09f;
		case 22:
			return 1E+09f;
	}
	return 1E+09f;
}

void func_472(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iParam1] = fParam2;
}

void func_473(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = func_663();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(bParam0, iVar0, 0);
	iVar1 = func_664();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(bParam0, iVar1, 0);
	PED::_SET_HEALTH_RECHARGE_MULTIPLIER(bParam0, 1.0f);
	PED::_SET_STAMINA_RECHARGE_MULTIPLIER(bParam0, 1.0f);
	PED::_SET_STAMINA_DEPLETION_MULTIPLIER(bParam0, 1.0f);
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 3:
		case 4:
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_475(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (func_388(bParam0))
	{
		iVar0 = func_401(bParam0);
		func_315(iVar0);
	}
	func_315(0);
	func_717(bParam0, 0, 0);
	func_200(0, 1);
	func_776(0);
	PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(PLAYER::PLAYER_ID(), bParam0);
	if (func_201() == 0)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID(), bParam0);
		func_217(0);
		func_214(0);
	}
	PED::SET_PED_CONFIG_FLAG(bParam0, 136, false);
	func_404();
}

void func_476(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam0, 1522539835))
	{
		PED::REMOVE_TAG_FROM_META_PED(bParam0, 1522539835, 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam0, joaat("ACCESSORIES")))
	{
		PED::REMOVE_TAG_FROM_META_PED(bParam0, joaat("ACCESSORIES"), 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam0, -749728163))
	{
		PED::REMOVE_TAG_FROM_META_PED(bParam0, -749728163, 1);
	}
	if (PED::_IS_METAPED_USING_COMPONENT(bParam0, 149557334))
	{
		PED::REMOVE_TAG_FROM_META_PED(bParam0, 149557334, 1);
	}
}

void func_477(bool bParam0)
{
	int iVar0;
	Vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	vVar1 = { ENTITY::GET_ENTITY_COORDS(bParam0, true, false) /*3*/ };
	iVar4 = ENTITY::_GET_ENTITIES_NEAR_POINT(vVar1, 5.0f, iVar0, 3);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar5, iVar0);
		if (!ENTITY::IS_AN_ENTITY(iVar6))
		{
		}
		else
		{
			iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
			{
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar7, bParam0))
			{
			}
			else if (TASK::GET_IS_CARRIABLE_ENTITY(iVar7))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				iVar8 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar6);
				OBJECT::DELETE_OBJECT(&iVar8);
			}
		}
		iVar5++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

void func_478(int iParam0)
{
	var uVar0;
	var uVar58;
	var uVar116;
	var uVar174;
	var uVar232;
	var uVar248;
	var uVar264;
	int iVar280;
	int iVar281;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	uVar0 = 57;
	uVar58 = 57;
	uVar116 = 57;
	uVar174 = 57;
	func_765(&uVar0);
	func_345(iParam0, &uVar58);
	func_346(iParam0, &uVar0);
	func_767(&uVar0, &uVar58, &uVar116);
	func_769(iParam0, &uVar116);
	func_768(&uVar174);
	uVar232 = 3;
	uVar248 = 3;
	uVar264 = 3;
	func_771(&uVar232);
	func_770(iParam0, &uVar248);
	iVar280 = func_772(&uVar232);
	iVar281 = func_772(&uVar248);
	if (iVar281 > iVar280)
	{
		func_775(iParam0, &uVar248);
	}
	else
	{
		func_775(iParam0, &uVar232);
	}
	func_773(&uVar264);
	func_774(iParam0);
	func_777(iParam0);
}

void func_479()
{
	struct<6> /*48*/ sVar0;

	sVar0 = { func_778() /*6*/ };
	PED::_RELEASE_METAPED_ASSET_REQUEST(sVar0.f_0);
	PED::_RELEASE_METAPED_ASSET_REQUEST(sVar0.f_1);
	PED::_RELEASE_METAPED_ASSET_REQUEST(sVar0.f_2);
	PED::_RELEASE_METAPED_ASSET_REQUEST(sVar0.f_3);
	PED::_RELEASE_METAPED_ASSET_REQUEST(sVar0.f_4);
	PED::_RELEASE_METAPED_ASSET_REQUEST(sVar0.f_5);
	func_779();
}

int func_480()
{
	return Global_1900383.f_418;
}

void func_481(int iParam0)
{
	Global_1900383.f_418 = iParam0;
}

void func_482(int iParam0)
{
	Global_1900383.f_418.f_1 = iParam0;
}

void func_483(int iParam0)
{
	Global_1900383.f_418.f_2 = iParam0;
}

var func_484()
{
	return Global_1900383.f_418.f_1;
}

int func_485(int iParam0)
{
	if ((((func_780(iParam0) || func_320(iParam0)) || func_781(iParam0)) || func_782(iParam0)) || func_783(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_486(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
		return false;
	}
	if (!func_168(bParam0, joaat("SCRIPT_TASK_STAND_STILL")))
	{
		TASK::TASK_STAND_STILL(bParam0, -1);
	}
	FLOCK::_0xFF1E339CE40EAAAF(bParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 48, true);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(bParam0, 2);
	return true;
}

void func_487(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_115(iParam0);
	if (iVar0 < 2)
	{
		return;
	}
	bVar1 = false;
	iVar2 = MISC::GET_GAME_TIMER();
	iVar3 = func_784();
	if (iVar3 + 15000 > iVar2)
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		iVar4 = func_88(iParam0);
		if (PED::_GET_PED_STAMINA(iVar4) == PED::_GET_PED_MAX_STAMINA(iVar4))
		{
			return;
		}
		switch (iVar0)
		{
			case 2:
				fVar5 = 2.5f;
				break;
			case 3:
				fVar5 = 5.0f;
				break;
			case 4:
				fVar5 = 10.0f;
				break;
		}
		func_785(iVar4, fVar5);
		func_483(iVar2);
	}
}

bool func_488()
{
	return Global_40.f_1095.f_3134;
}

var func_489()
{
	return Global_1900383.f_444.f_18;
}

int func_490(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_524(iParam0, &iVar0, &iVar1);
	if (!func_764(iParam0, (1 << 16)) && !func_764(iParam0, (1 << 15)))
	{
		if (func_786(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar2 /*3*/].f_2 == iParam0)
		{
			return Global_40.f_7756[iVar2 /*3*/].f_1;
		}
		iVar2++;
	}
	return 0;
}

void func_491(int iParam0)
{
	Global_1900383.f_444.f_18 = iParam0;
}

void func_492(int iParam0)
{
	Global_40.f_1095.f_3134 = iParam0;
}

struct<2> /*16*/ func_493(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

void func_494(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_495(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_435 = iParam1;
}

void func_496(int iParam0)
{
	Global_1935689.f_18 = iParam0;
}

void func_497(int iParam0)
{
	Vector3 vVar0;
	int iVar10;
	bool bVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	bVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(bVar11) || PED::IS_PED_INJURED(bVar11))
	{
		return;
	}
	uVar12 = vVar0.x;
	iVar13 = uVar12;
	switch (iVar13)
	{
		case 31:
			iVar14 = 0;
			break;
		case 32:
			iVar14 = 1;
			break;
		case 33:
			iVar14 = 2;
			break;
		default:
			return;
	}
	iVar15 = -1;
	bVar16 = false;
	if (func_388(bVar11))
	{
		bVar16 = true;
		iVar15 = func_401(bVar11);
	}
	bVar17 = false;
	if (!bVar16)
	{
		if (iVar14 != 2)
		{
			return;
		}
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(bVar11, -1))
		{
			return;
		}
		if (func_389(bVar11))
		{
			bVar17 = true;
		}
		if (func_390(bVar11))
		{
			bVar17 = true;
		}
		if (func_320(bVar11))
		{
			bVar17 = true;
		}
		iVar18 = ENTITY::GET_ENTITY_POPULATION_TYPE(bVar11);
		if (iVar18 != 6 && iVar18 != 2)
		{
			bVar17 = true;
		}
	}
	if (bVar16)
	{
		if (func_232())
		{
			iVar19 = func_170();
			if (iVar19 == 22 || iVar19 == 37)
			{
				func_283(18, 1);
			}
			else
			{
				func_283(17, 1);
			}
			return;
		}
	}
	if (bVar16)
	{
		if (func_189(iVar15))
		{
			if (!func_194(16) && !func_196(16))
			{
				func_283(16, 1);
			}
			return;
		}
	}
	func_787(bVar11, iVar14, bVar17);
}

void func_498(int iParam0)
{
	Vector3 vVar0;
	int iVar10;
	bool bVar11;
	bool bVar12;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	bVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(bVar11) || PED::IS_PED_INJURED(bVar11))
	{
		return;
	}
	bVar12 = false;
	if (func_388(bVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (func_389(bVar11))
		{
			return;
		}
		if (func_390(bVar11))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar11))
		{
			return;
		}
	}
	func_788(joaat("KIT_HORSE_BRUSH"), bVar11);
}

void func_499(int iParam0)
{
	Vector3 vVar0;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;

	if (func_2() == 0)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return;
	}
	iVar10 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar10))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar10))
	{
		return;
	}
	bVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10);
	if (ENTITY::IS_ENTITY_DEAD(bVar11) || PED::IS_PED_INJURED(bVar11))
	{
		return;
	}
	bVar12 = false;
	if (func_388(bVar11))
	{
		bVar12 = true;
	}
	if (!bVar12)
	{
		if (func_389(bVar11))
		{
			return;
		}
		if (func_390(bVar11))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(bVar11))
		{
			return;
		}
	}
	iVar13 = func_789();
	if (iVar13 != 0)
	{
		func_788(iVar13, bVar11);
	}
}

void func_500()
{
	Global_40.f_1095.f_3135.f_2++;
}

void func_501(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_43 = 0;
}

void func_502(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_12 = iParam1;
}

void func_503(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_13 = iParam1;
}

int func_504(bool bParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!func_727(iParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			break;
	}
	func_790(bParam0, iParam1);
	func_494(func_791(joaat("HORSE_REVIVED")), 1);
	return 1;
}

bool func_505()
{
	if (func_733(joaat("CONSUMABLE_HORSE_REVIVER"), 1, 0) || func_733(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 1, 0))
	{
		return true;
	}
	return false;
}

int func_506()
{
	return Global_40.f_1095.f_3135.f_2;
}

var func_507()
{
	return Global_1900383.f_444.f_17;
}

void func_508(int iParam0)
{
	Global_1900383.f_444.f_17 = iParam0;
}

void func_509()
{
	Global_1900383.f_444.f_17 = 0;
}

int func_510(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			iVar0 = func_281(iVar1);
		}
	}
	return iVar0;
}

bool func_511(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_792(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = func_681(iVar0, 1);
		iVar2 = iVar1;
		if (iParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_284(iParam1, 0))
	{
		return;
	}
	if (!func_511(iParam1))
	{
		return;
	}
	iVar0 = func_793(iParam1);
	iVar1 = func_794(iVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] += iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = func_795(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

int func_513(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAR_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BEAR_01");
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BEAVER_01");
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return joaat("A_C_BIGHORNRAM_01");
		case joaat("PROVISION_WHITE_BUFFALO_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BUFFALO_01");
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return joaat("A_C_BOAR_01");
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BUCK_01");
		case joaat("PROVISION_TAKANTA_BUFFALO_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_BUFFALO_TATANKA_01");
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_SKIN_PRISTINE"):
			return joaat("A_C_ALLIGATOR_02");
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_COUGAR_01");
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_COYOTE_01");
		case joaat("PROVISION_ELK_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_ELK_01");
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_FOX_01");
		case joaat("PROVISION_MOOSE_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_MOOSE_01");
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_PANTHER_01");
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_PRONGHORN_01");
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return joaat("A_C_WOLF");
		default:
			break;
	}
	return 0;
}

bool func_514(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("A_C_BEAR_01"):
			*iParam1 = 0;
			return true;
		case joaat("A_C_BEAVER_01"):
			*iParam1 = 1;
			return true;
		case joaat("A_C_BIGHORNRAM_01"):
			*iParam1 = 2;
			return true;
		case joaat("A_C_BUFFALO_01"):
			*iParam1 = 3;
			return true;
		case joaat("A_C_BOAR_01"):
			*iParam1 = 4;
			return true;
		case joaat("A_C_BUCK_01"):
			*iParam1 = 5;
			return true;
		case joaat("A_C_BUFFALO_TATANKA_01"):
			*iParam1 = 6;
			return true;
		case joaat("A_C_ALLIGATOR_02"):
			*iParam1 = 7;
			return true;
		case joaat("A_C_COUGAR_01"):
			*iParam1 = 8;
			return true;
		case joaat("A_C_COYOTE_01"):
			*iParam1 = 9;
			return true;
		case joaat("A_C_ELK_01"):
			*iParam1 = 10;
			return true;
		case joaat("A_C_FOX_01"):
			*iParam1 = 11;
			return true;
		case joaat("A_C_MOOSE_01"):
			*iParam1 = 12;
			return true;
		case joaat("A_C_PANTHER_01"):
			*iParam1 = 13;
			return true;
		case joaat("A_C_PRONGHORN_01"):
			*iParam1 = 14;
			return true;
		case joaat("A_C_WOLF"):
			*iParam1 = 15;
			return true;
	}
	return false;
}

int func_515(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_276(iVar0, &iVar2, &uVar3, &iVar1, &uVar4);
	if (func_277(&uVar5, iVar0, iVar1, iVar2))
	{
	}
	return uVar5;
}

void func_516(int iParam0)
{
	if (func_796(iParam0))
	{
		if (func_94() && func_797(4))
		{
			if (!func_799(func_798(iParam0)))
			{
				if (func_801(func_800(iParam0)))
				{
					MAP::_MAP_DISCOVER_REGION(func_802(func_800(iParam0)));
					MAP::_MAP_DISCOVERY_SET_ENABLED(func_803(func_800(iParam0)));
				}
			}
		}
	}
}

int func_517(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam1) || ENTITY::_GET_IS_BIRD(iParam1))
	{
		iVar0 = func_515(iParam1);
		if (!func_284(iVar0, 0))
		{
			iVar0 = func_510(iParam1);
		}
	}
	else
	{
		iVar0 = func_510(iParam1);
	}
	iVar1 = func_285(iParam0, iVar0, 1, 1, joaat("REMOVE_REASON_DEFAULT"));
	return iVar1;
}

bool func_518(bool bParam0, int iParam1)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_273(iParam1);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar1, bParam0, iVar0, 0))
	{
		return false;
	}
	iVar5 = sVar1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return false;
	}
	return true;
}

bool func_519(int iParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(Global_1357549.f_3[iParam1]))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1357549.f_3[iParam1], true, 0);
}

bool func_520(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_519(func_88(iParam0), iParam1);
}

void func_521(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_387(iParam0, 32);
	func_404();
}

void func_522(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_682(iParam0);
	func_718(iParam0, 0);
	func_804(iParam0, 0.0f);
}

void func_523(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_524(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_525(var uParam0)
{
	*uParam0 = joaat("HORSE_EQUIPMENT_MANE_DEFAULT");
	uParam0->f_1 = joaat("HORSE_EQUIPMENT_TAIL_DEFAULT");
}

void func_526(int iParam0, struct<2> /*16*/ sParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_805(iParam0, sParam1.f_0))
	{
	}
	if (!func_806(iParam0, sParam1.f_1))
	{
	}
}

void func_527(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_272(uParam0[iVar0 /*94*/]);
		iVar0++;
	}
}

void func_528(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_529(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_530(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0.0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0.0f;
		}
		iVar0++;
	}
}

void func_531(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_532(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0.0f;
	uParam1->f_2 = 0.0f;
	uParam1->f_3 = 0;
}

void func_533(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1.0f;
}

void func_534(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_535(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_536(int iParam0)
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

void func_537(int iParam0)
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
			func_807(1);
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
			func_808(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_808(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_808(3);
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
			func_234(1);
			break;
		case 34:
			func_236(1);
			break;
		case 35:
			func_238(1);
			break;
		case 36:
			break;
		case 37:
			func_809(0);
			break;
		case 38:
			func_810(0);
			break;
		case 39:
			func_811(0);
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
			if ((!Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_283(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_283(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_283(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_94()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_812("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_283(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_2() == -1)
			{
				if (!func_813(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_814(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_640())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_733(iVar0, 1, 0))
					{
						func_815(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_816(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_733(1013902307, 1, 0))
				{
					func_815(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_733(1013902307, 1, 0))
				{
					func_815(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_733(142640135, 1, 0))
				{
					func_815(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_733(786809402, 1, 0))
				{
					func_815(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_2() == -1)
			{
				if (!func_733(786809402, 1, 0))
				{
					func_815(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_733(-518019409, 1, 0))
				{
					func_815(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_817();
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

bool func_538(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_539()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

bool func_540(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_330(0) /*4*/ };
	if (func_818(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_541(int iParam0)
{
	struct<10> /*80*/ sVar0;
	struct<5> /*40*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_719(iParam0, &sVar0))
	{
		return 0;
	}
	sVar29 = { sVar0.f_5 /*4*/ };
	sVar29.f_4 = sVar0.f_9;
	if (!func_819(sVar0.f_4, &sVar0, &sVar29, -1, joaat("REMOVE_REASON_DEFAULT"), 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_542(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("HORSE_BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_BLANKET");
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
			return joaat("HORSE_BREED_ARABIAN_BLACK");
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
			return joaat("HORSE_BREED_ARABIAN_WHITE");
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_GREY");
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
			return joaat("HORSE_BREED_MORGAN_BAY");
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
			return joaat("HORSE_BREED_MORGAN_PALOMINO");
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
			return joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
			return joaat("HORSE_DONKEY");
			return joaat("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE");
			return joaat("HORSE_BREED_ARABIAN_GREY");
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
			return joaat("HORSE_BREED_MUSTANG_GOLDENDUN");
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
			return -41062704;
			return joaat("HORSE_BREED_JOHN_ENDLESSSUMMER");
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_01");
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_02");
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_03");
			return 0;
		}

int func_543(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	var uVar6;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	if (!func_820(iParam1))
	{
		return 0;
	}
	if (func_540(iParam0))
	{
		return 0;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	sVar1 = { func_330(0) /*4*/ };
	sVar1.f_4 = iVar0;
	if (!func_334(iParam1, &uVar6, &sVar1, 1, joaat("ADD_REASON_DEFAULT"), 0))
	{
		return 0;
	}
	return 1;
}

float func_544(int iParam0)
{
	int iVar0;
	float fVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	if (!func_71(iParam0))
	{
		return 0.0f;
	}
	iVar0 = func_88(iParam0);
	fVar1 = func_190(iVar0);
	return fVar1;
}

int func_545(int iParam0, var uParam1)
{
	struct<29> /*232*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_719(iParam0, &sVar0))
	{
		return 0;
	}
	sVar0.f_14 = uParam1->f_14;
	sVar0.f_15 = uParam1->f_15;
	sVar0.f_16 = { uParam1->f_16 /*8*/ };
	sVar0.f_24 = uParam1->f_24;
	sVar0.f_25 = uParam1->f_25;
	sVar0.f_26 = uParam1->f_26;
	sVar0.f_27 = uParam1->f_27;
	sVar0.f_28 = uParam1->f_28;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(sVar0.f_16)))
	{
		strcpy_s(&(sVar0.f_16), 64, func_821());
	}
	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_666(0), &sVar0, &sVar0, 29))
	{
		return 0;
	}
	return 1;
}

void func_546()
{
	var uVar0;

	if (func_822())
	{
		uVar0 = func_823();
		MAP::REMOVE_BLIP(&uVar0);
		func_824(0);
	}
}

int func_547(int iParam0)
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

int func_548(int iParam0)
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

void func_549(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
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

	iVar0 = func_825();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = func_826(iParam0);
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
	if (func_140(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_640())
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
	Global_40.f_11095.f_35 = func_795(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_825();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = func_827(iVar1);
		func_829(func_828(), 0, 4000);
		func_830(Global_40.f_11095.f_35);
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
		func_831(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_494(func_832(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_548(14))
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
					sParam4 = func_833(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_494(func_832(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_548(4))
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
					sParam4 = func_833(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_754(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	sVar8 = { func_832(joaat("HONOR_CURRENT")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_834(10, 1);
	}
}

void func_550(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = iParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
}

int func_551()
{
	return Global_40.f_1095.f_3135.f_1;
}

var func_552()
{
	return Global_1900383.f_444.f_2;
}

void func_553()
{
	Global_1900383.f_444.f_2 = 0;
}

void func_554()
{
	Global_40.f_1095.f_3135.f_1++;
}

void func_555(int iParam0)
{
	Global_1900383.f_444.f_2 = iParam0;
}

bool func_556()
{
	return Global_1900383.f_444.f_3;
}

int func_557()
{
	return Global_1900383.f_444.f_4;
}

void func_558(int iParam0)
{
	Global_1900383.f_444.f_3 = iParam0;
}

void func_559()
{
	Global_1900383.f_444.f_4 = 0;
}

bool func_560(int iParam0)
{
	int iVar0;
	struct<37> /*296*/ sVar1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(iParam0);
	sVar1.f_4 = 15;
	sVar1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(iParam0, iVar48, &sVar1))
		{
			if (sVar1.f_2 == joaat("COST_TYPE_CRAFT") && !func_835(iParam0, sVar1.f_0, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

int func_561()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 0;
	}
	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iVar0, &iVar1, false, false))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_INJURED(iVar2))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar2))
	{
		return 0;
	}
	if (!func_391(iVar2))
	{
		return 0;
	}
	return iVar2;
}

var func_562()
{
	return Global_1900383.f_411.f_1;
}

void func_563(int iParam0)
{
	Global_1900383.f_411.f_1 = iParam0;
}

void func_564(int iParam0)
{
	Global_1900383.f_411 = iParam0;
}

void func_565()
{
	if (func_194(47))
	{
		func_195(47);
	}
	if (func_196(47))
	{
		func_197(47);
	}
	if (func_194(48))
	{
		func_195(48);
	}
	if (func_196(47))
	{
		func_197(47);
	}
	if (func_194(49))
	{
		func_195(49);
	}
	if (func_196(49))
	{
		func_197(49);
	}
	if (func_194(50))
	{
		func_195(50);
	}
	if (func_196(50))
	{
		func_197(50);
	}
	if (func_194(51))
	{
		func_195(51);
	}
	if (func_196(51))
	{
		func_197(51);
	}
}

bool func_566(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	iVar1 = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(bParam0, &iVar0);
	if (PLAYER::_0x0772F87D7B07719A(PLAYER::PLAYER_ID(), iVar0, iVar1))
	{
		return true;
	}
	return false;
}

void func_567(int iParam0)
{
	Global_1900383.f_411.f_2 = iParam0;
}

int func_568()
{
	return Global_1900383.f_411.f_2;
}

void func_569()
{
	func_564(0);
	func_563(0);
	func_567(0);
}

bool func_570()
{
	return Global_1900383.f_444.f_5;
}

int func_571()
{
	return Global_40.f_1095.f_3135.f_3;
}

int func_572()
{
	return Global_1900383.f_444.f_6;
}

void func_573(int iParam0)
{
	Global_1900383.f_444.f_5 = iParam0;
}

void func_574()
{
	Global_1900383.f_444.f_6 = 0;
}

void func_575(int iParam0)
{
	Global_1900383.f_444.f_9 = iParam0;
}

void func_576()
{
	Global_40.f_1095.f_3135.f_3++;
}

bool func_577()
{
	return Global_1900383.f_444.f_7;
}

int func_578(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/];
}

int func_579()
{
	return Global_1900383.f_444.f_8;
}

void func_580(int iParam0)
{
	Global_1900383.f_444.f_7 = iParam0;
}

void func_581()
{
	Global_1900383.f_444.f_8 = 0;
}

int func_582()
{
	return Global_1900383.f_444.f_9;
}

bool func_583()
{
	return Global_1900383.f_444.f_10;
}

void func_584(int iParam0)
{
	Global_1900383.f_444.f_10 = iParam0;
}

void func_585()
{
	Global_1900383.f_444.f_9 = 0;
}

bool func_586()
{
	return Global_40.f_1095.f_3135.f_4;
}

int func_587(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1.0f;
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (!func_588(iVar0))
		{
		}
		else if (func_836(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_837(iVar0))
			{
			}
			else
			{
				iVar2 = func_838(iVar0);
				if (bParam3)
				{
					if (!func_839(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_840(iVar2))
						{
						}
						else
						{
							fVar3 = func_841(Global_35, func_589(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1.0f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

bool func_588(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

Vector3 func_589(int iParam0)
{
	if (!func_588(iParam0))
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

void func_590(int iParam0)
{
	Global_1900383.f_444.f_11 = *iParam0;
}

var func_591()
{
	return Global_1900383.f_444.f_11;
}

bool func_592()
{
	if (func_380(7))
	{
		return true;
	}
	if (func_210())
	{
		return true;
	}
	return false;
}

bool func_593(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_211();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

bool func_594()
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_380(7))
	{
		if (func_595(7))
		{
			func_842();
			return true;
		}
	}
	if (func_380(7))
	{
		if (func_213() == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_88(7)))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(func_88(7)))
				{
					return true;
				}
			}
		}
	}
	if (func_593(Global_35))
	{
		return true;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_843();
	if (iVar1 == 0)
	{
		func_844(MISC::GET_GAME_TIMER());
		return true;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return true;
	}
	if (ENTITY::_0x383F64263F946E45(&uVar2, func_211(), 4, Global_35, 0, 1))
	{
		func_842();
		return true;
	}
	return false;
}

bool func_595(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_201())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

void func_596()
{
	Global_1900383.f_444.f_12 = 0;
}

var func_597()
{
	return Global_1900383.f_444.f_12;
}

void func_598(int iParam0)
{
	Global_1900383.f_444.f_12 = iParam0;
}

int func_599()
{
	return Global_1900383.f_441;
}

void func_600(bool bParam0)
{
	Global_1900383.f_441 = bParam0;
}

bool func_601()
{
	return Global_1900383.f_444.f_15;
}

void func_602(int iParam0)
{
	Global_1900383.f_444.f_15 = iParam0;
}

int func_603()
{
	return Global_40.f_1095.f_3135;
}

void func_604()
{
	Global_1900383.f_444.f_16++;
}

int func_605()
{
	return Global_1900383.f_444.f_16;
}

bool func_606(int iParam0)
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

bool func_607(int iParam0)
{
	int iVar0;

	if (func_399(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!func_400(iParam0))
	{
		return false;
	}
	if (func_398(iParam0, &iVar0, -1082130432))
	{
		if (PED::CAN_PED_SEE_ENTITY(iParam0, iVar0, false, false) == 1)
		{
			return false;
		}
		if (LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_608(int iParam0, bool bParam1, bool bParam2)
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
		if (func_845())
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
		iVar0 = func_846(Global_1898164.f_1[0 /*5*/]);
		if (func_847(iVar0) && func_848(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_269(Global_1898164.f_1[0 /*5*/]))
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

int func_609()
{
	if (!func_135(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_135(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_135(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_135(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_135(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_135(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_135(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

bool func_610()
{
	int iVar0;

	if (func_849())
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

int func_611(int iParam0)
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

int func_612(int iParam0)
{
	return iParam0 & 31;
}

int func_613(bool bParam0, bool bParam1, bool bParam2)
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

bool func_614()
{
	if (func_733(joaat("PROVISION_TRINKET_PRONGHORN_ANTLER"), 1, 0))
	{
		return true;
	}
	return false;
}

float func_615(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return -1.0f;
	}
	return func_187(Global_35, bParam0, bParam1, bParam2);
}

bool func_616()
{
	if (func_733(joaat("PROVISION_TRINKET_BEAVER_TOOTH"), 1, 0))
	{
		return true;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_2() == -1)
	{
		if (func_850(43))
		{
			if (func_431(iParam0, 412399755))
			{
				func_851(joaat("EXOTIC_STAGE_01"));
				if (func_852() == 0)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_850(44))
		{
			if (func_431(iParam0, 709057512))
			{
				func_851(joaat("EXOTIC_STAGE_02"));
				if (func_852() == 1)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(45))
		{
			if (func_431(iParam0, -1478961327))
			{
				func_851(joaat("EXOTIC_STAGE_03"));
				if (func_852() == 2)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(46))
		{
			if (func_431(iParam0, -1238404098))
			{
				func_851(joaat("EXOTIC_STAGE_04"));
				if (func_852() == 3)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_850(47))
		{
			if (func_431(iParam0, 1160548794))
			{
				func_851(joaat("EXOTIC_STAGE_05"));
				if (func_852() == 4)
				{
					func_853(0, 10);
					iVar0 = func_854(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_855(iParam0) < func_856(iParam0))
						{
							func_857(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_618(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_733(func_858(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_859(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_860(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_619(bool bParam0)
{
	if (func_861())
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
		if (!func_610())
		{
			return false;
		}
	}
	if (Global_16)
	{
		return false;
	}
	if (!func_862())
	{
		return false;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return false;
	}
	if (func_863())
	{
		return false;
	}
	return true;
}

int func_620(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1914319.f_17378.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1914319.f_17378.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

bool func_621(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == 61)
		{
			if (func_431(iParam0, joaat("CI_TAG_ITEM_ALCOHOL")))
			{
				return true;
			}
		}
	}
	return false;
}

int func_622(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	int iVar6;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_836(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_864(6, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = -815325344;
	sVar0.f_3 = func_865(iVar5);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		iVar6 = iParam0;
		sVar0.f_2 = 549615901;
		sVar0.f_3 = iVar6;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_623(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_786(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_866(iParam0))
	{
		return false;
	}
	if (func_867(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_764(iParam0, 1)) || func_17((1 << 15)))
	{
		if (!func_764(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_862())
	{
		return false;
	}
	return true;
}

void func_624(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

void func_625(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_793(iParam1);
	iVar1 = func_794(iVar0, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] -= iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1] = func_795(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar1], 0, 10);
}

int func_626(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> /*16*/ sVar3;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam4 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam4 == joaat("REMOVE_REASON_GIVEN");
	if (!func_868(iParam0, iParam1, 1))
	{
		return 0;
	}
	sVar3 = { func_734(iParam1) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar3))
	{
		if ((func_869(iParam0, iParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar3, iParam2);
		}
		else if ((func_869(iParam0, iParam1) - iParam2) < 0)
		{
			func_626(iParam0, iParam1, func_735(iParam1, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_870(iParam0, iParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!func_668(0))
	{
		bParam3 = true;
	}
	if (!bParam3 && iParam1 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_732(iParam1, -iParam2, bVar0, bVar1, bVar2);
	}
	return 1;
}

int func_627(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	sVar0 = { func_871(iParam0) /*5*/ };
	sVar5 = { func_872(iParam0, iParam1, sVar0, sVar0.f_4) /*4*/ };
	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &sVar5, &sVar0, iParam1, sVar0.f_4, iParam2, joaat("ADD_REASON_DEFAULT")))
	{
		if (func_431(iParam1, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_873(iParam1, 4))
		{
			if (!func_850(42))
			{
				func_874(iParam1);
			}
		}
		return 1;
	}
	return 0;
}

void func_628(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_630(iParam0, iParam1, 1))
	{
		iVar0 = func_875(iParam1);
		iVar1 = func_876(iParam0);
		iVar2 = (func_876(iParam0) - func_876(iParam1));
		iVar3 = (func_875(iParam0) - func_875(iParam1));
		iVar4 = (func_877(iParam0) - func_877(iParam1));
		iVar5 = (func_631(iParam0) - func_631(iParam1));
		iVar6 = (func_878(iParam0) - func_878(iParam1));
		iVar7 = (func_879(iParam0) - func_879(iParam1));
	}
	else
	{
		iVar0 = func_875(iParam0);
		iVar1 = func_876(iParam1);
		iVar2 = (func_876(iParam1) - func_876(iParam0));
		iVar3 = (func_875(iParam1) - func_875(iParam0));
		iVar4 = (func_877(iParam1) - func_877(iParam0));
		iVar5 = (func_631(iParam1) - func_631(iParam0));
		iVar6 = (func_878(iParam1) - func_878(iParam0));
		iVar7 = (func_879(iParam1) - func_879(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6--;
	}
	while (iVar7 > 59)
	{
		iVar7 -= 60;
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5--;
	}
	while (iVar6 > 59)
	{
		iVar6 -= 60;
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4--;
	}
	while (iVar5 > 23)
	{
		iVar5 -= 24;
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2--;
		}
		iVar4 += func_880(iVar0, iVar1);
		iVar3--;
		iVar0 = BUILTIN::ROUND(func_881(BUILTIN::TO_FLOAT(iVar0 + 1), 0.0f, 12.0f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2--;
	}
	while (iVar3 > 12)
	{
		iVar3 -= 12;
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

int func_629(bool bParam0, int iParam1)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_273(iParam1);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&sVar1, bParam0, iVar0, 0))
	{
		return 0;
	}
	iVar5 = sVar1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return 0;
	}
	return iVar5;
}

bool func_630(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_882(iParam1) || !func_882(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_631(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

void func_632(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_633(var uParam0)
{
	func_883(uParam0, 0.0f);
}

bool func_634(var uParam0)
{
	return func_884(*uParam0, 1);
}

int func_635(var uParam0, float fParam1)
{
	if (!func_634(uParam0))
	{
		return 0;
	}
	if (func_885(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

char* func_636(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_637(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_886(37, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1109000.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1109000.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1224589.f_16[iParam0])
	{
		return sVar0;
	}
	if (func_886(37, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1108108[iParam0 /*27*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1108108[iParam0 /*27*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1224589.f_115[iParam0]);
}

char* func_638(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_887(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_639()
{
	if (func_2() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

bool func_640()
{
	if (func_2() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_641(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}
	return 0;
}

int func_643(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return 0;
	}
	if (func_641(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(bParam0, iVar0);
	}
	return 0;
}

void func_644(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	if (func_641(iParam1, &iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(bParam0, iVar0, iParam2);
	}
}

float func_645(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3);
	iVar1 = func_795(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 0.001f);
	return fVar2;
}

void func_646(int iParam0, int iParam1, int iParam2)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_3 = iParam2;
}

void func_647(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (func_641(iParam2, &iVar1))
	{
		iVar0 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(bParam0, iVar1);
	}
	iVar2 = func_578(iParam1, iParam2);
	if (iVar2 != iVar0)
	{
		func_888(iParam1, iParam2, iVar0);
	}
}

float func_648(int iParam0, int iParam1)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_2;
}

void func_649(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_648(iParam0, iParam1);
	fVar1 = func_645(iParam0, iParam1);
	fVar0 -= fVar1;
	if (fVar0 < 0.0f)
	{
		fVar0 = 0.0f;
	}
	func_889(iParam0, iParam1, fVar0);
}

void func_650(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_84(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_320(bParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::GET_MOUNT(Global_35) == bParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (TASK::_IS_PED_LEADING_HORSE(Global_35))
	{
		if (TASK::_GET_LED_HORSE_FROM_PED(Global_35) == bParam0)
		{
			bVar3 = true;
		}
	}
	bVar6 = false;
	bVar7 = false;
	switch (iParam2)
	{
		case 0:
		case 1:
			iVar5 = func_578(iParam1, iParam2);
			if (bVar0)
			{
				if (iVar5 < 100)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar1)
			{
				if (iVar5 < 55)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar3)
			{
				if (iVar5 < 45)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (!bVar2)
			{
				if (iVar5 < 30)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (func_890(bParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -48.0f;
				fVar8 = func_891(iParam1, iParam2);
				fVar4 -= (fVar4 * fVar8);
			}
			break;
	}
	if (fVar4 < 0.0f)
	{
		if (func_76((1 << 13)))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (func_173(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1.0f;
		}
	}
	fVar9 = (fVar4 * 60.0f);
	fVar10 = func_645(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 100.0f);
	fVar12 = func_892(iParam1, iParam2);
	iVar13 = func_578(iParam1, iParam2);
	iVar14 = 0;
	if (!bVar7)
	{
		if ((fVar12 < 0.0f && fVar11 > 0.0f) || (fVar12 > 0.0f && fVar11 < 0.0f))
		{
			fVar12 = 0.0f;
		}
		fVar12 += fVar11;
		if (fVar12 >= 1.0f)
		{
			fVar12--;
			iVar14++;
		}
		else if (fVar12 <= -1.0f)
		{
			fVar12 += 1.0f;
			iVar14--;
		}
		func_893(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	func_888(iParam1, iParam2, (iVar13 + iVar14));
}

void func_651(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar12;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	func_21(0, &uVar0);
	func_21(1, &uVar12);
	bVar24 = false;
	if (func_140(40))
	{
		bVar24 = true;
	}
	bVar25 = false;
	bVar26 = false;
	switch (iParam1)
	{
		case 0:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
		case 1:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
	}
	if (bVar25)
	{
		func_580(1);
		func_894(MISC::GET_GAME_TIMER());
	}
	if (bVar26)
	{
		func_494(func_791(joaat("HORSE_CORE_DRAINED")), 1);
	}
}

bool func_652(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			return false;
	}
	return true;
}

int func_653(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			return 50;
	}
	return 0;
}

float func_654(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3);
	iVar1 = func_795(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 0.001f);
	return fVar2;
}

void func_655(int iParam0, int iParam1, int iParam2)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_3 = iParam2;
}

void func_656(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (func_652(iParam2, &iVar0))
	{
		iVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(bParam0, iVar0);
	}
	iVar2 = func_437(iParam1, iParam2);
	if (iVar2 != iVar1)
	{
		func_746(iParam1, iParam2, iVar1);
	}
}

float func_657(int iParam0, int iParam1)
{
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_2;
}

void func_658(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_657(iParam0, iParam1);
	fVar1 = func_654(iParam0, iParam1);
	fVar0 -= fVar1;
	if (fVar0 < 0.0f)
	{
		fVar0 = 0.0f;
	}
	func_895(iParam0, iParam1, fVar0);
}

void func_659(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_896(bParam0))
	{
		bVar0 = true;
	}
	if (func_84(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_320(bParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -48.0f;
			}
			else if (bVar1)
			{
				fVar3 = 192.0f;
			}
			else if (func_897(bParam0))
			{
				bVar2 = true;
			}
			else
			{
				fVar3 = 96.0f;
			}
			break;
		case 0:
			if (bVar0)
			{
				fVar3 = -48.0f;
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = func_437(iParam1, 2);
			iVar5 = (100 - func_437(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -96.0f;
			}
			else if (iVar4 > 50)
			{
				fVar3 = -48.0f;
			}
			else if (iVar4 < 50)
			{
				fVar3 = 48.0f;
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 60.0f);
	fVar7 = func_654(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 100.0f);
	fVar9 = func_898(iParam1, iParam2);
	iVar10 = func_437(iParam1, iParam2);
	iVar11 = 0;
	if (!bVar2)
	{
		fVar9 += fVar8;
		if (fVar9 >= 1.0f)
		{
			fVar9--;
			iVar11++;
		}
		else if (fVar9 <= -1.0f)
		{
			fVar9 += 1.0f;
			iVar11--;
		}
		func_899(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_900(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	func_746(iParam1, iParam2, (iVar10 + iVar11));
}

void func_660(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar12;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	func_21(0, &sVar0);
	func_21(1, &sVar12);
	iVar24 = func_88(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !sVar0.f_2))
	{
		if ((iParam0 == 0 && sVar0.f_10) || (iParam0 == 1 && sVar12.f_10))
		{
			if (func_140(41))
			{
				bVar25 = true;
			}
		}
	}
	bVar26 = false;
	iVar27 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
					bVar26 = true;
					iVar27 = 4;
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 2:
			iVar28 = func_357(iVar24, 2);
			iVar29 = func_901(iParam0);
			iVar30 = func_358(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = func_697(iVar24, iVar30, 1);
				if (bVar31)
				{
					func_359(iParam0, iVar30);
				}
			}
			if (iParam3 > 70)
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 100);
			}
			else
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 50);
			}
			break;
	}
	if (bVar26)
	{
		func_573(1);
		func_902(MISC::GET_GAME_TIMER());
	}
	if (iVar27 != 0)
	{
		ATTRIBUTE::_SET_STATUS_EFFECT_CORE_ICON(iVar27);
	}
}

bool func_661()
{
	return Global_40.f_1095.f_3140.f_1;
}

void func_662(int iParam0, float fParam1)
{
	Global_1900383.f_393.f_8[iParam0] = fParam1;
}

int func_663()
{
	return 5;
}

int func_664()
{
	return 6;
}

struct<4> /*32*/ func_665()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_666(bool bParam0)
{
	if (func_2() == -1)
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

bool func_667(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_903(&iParam0);
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (!func_668(0))
	{
		bParam3 = true;
	}
	if (func_904(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			sVar0 = { func_905(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_906(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_907(iParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_908(iParam0, 1))
			{
				if (!func_906(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_907(iParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_909(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_910(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_911(iParam0))
	{
		iVar28 = func_332(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_666(bParam4), iParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

bool func_668(bool bParam0)
{
	if (func_2() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_666(bParam0));
}

int func_669(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar15;
	struct<29> /*232*/ sVar16;
	struct<18> /*144*/ sVar45;
	struct<17> /*136*/ sVar63;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return iVar0;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	if (!func_670(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_736(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_912(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_913(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_914(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_915(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_916(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_917(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_670(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_666(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

void func_671(int iParam0)
{
	int iVar0;

	iVar0 = func_207(iParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
}

void func_672(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar1 /*94*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

bool func_673(int iParam0)
{
	int iVar0;

	iVar0 = func_207(iParam0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return false;
	}
	return true;
}

bool func_674(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_40.f_1095.f_1[iParam0 /*436*/].f_15[iVar1 /*94*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
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

bool func_675(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_676(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, 7, iParam1);
}

void func_677(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

void func_678(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	if (func_652(iParam1, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(bParam0, iVar0, iParam2);
	}
}

int func_679(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_431;
}

int func_680(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_432;
}

int func_681(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_FUR");
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
		case 5:
			return joaat("PROVISION_BOAR_SKIN");
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
		case 8:
			return joaat("PROVISION_BUCK_FUR");
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
		case 12:
			return joaat("PROVISION_COUGAR_FUR");
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
		case 16:
			return joaat("PROVISION_COYOTE_FUR");
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
		case 20:
			return joaat("PROVISION_DEER_HIDE");
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
		case 23:
			return joaat("PROVISION_FOX_FUR");
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
		case 27:
			return joaat("PROVISION_GOAT_HAIR");
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
		case 30:
			return joaat("PROVISION_JAVELINA_SKIN");
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
		case 33:
			return joaat("PROVISION_LOANSHARK_SKINS");
		case 34:
			return joaat("PROVISION_PANTHER_FUR");
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
		case 38:
			return joaat("PROVISION_PIG_SKIN");
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
		case 41:
			return joaat("PROVISION_PRONGHORN_FUR");
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
		case 45:
			return joaat("PROVISION_RAM_HIDE");
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
		case 49:
			return joaat("PROVISION_SHEEP_WOOL");
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
		case 52:
			return joaat("PROVISION_WOLF_FUR");
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
		case 56:
			return 0;
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

void func_682(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iVar0] = 0.0f;
		}
		iVar0++;
	}
}

void func_683()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1900383.f_317.f_2[iVar0 /*5*/] = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_1 = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_2 = 0.0f;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_3 = -1;
		Global_1900383.f_317.f_2[iVar0 /*5*/].f_4 = 0.0f;
		iVar0++;
	}
}

bool func_684(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_719(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_918(sVar0, joaat("SLOTID_HORSE_MANE"), 0);
	if (!func_284(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_685(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_719(iParam0, &sVar0))
	{
		return false;
	}
	*uParam1 = func_918(sVar0, joaat("SLOTID_HORSE_TAIL"), 0);
	if (!func_284(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_686(int iParam0, var uParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_919(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_81() /*4*/ };
	*uParam1 = func_918(sVar0, iParam0, 0);
	if (!func_284(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_687(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

void func_688(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_689(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_690(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_691(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_692(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_693(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_694(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_MANES"), 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(bParam0, joaat("HORSE_TAILS"), 0, false);
}

void func_695(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_920(bParam0, *uParam1);
	func_920(bParam0, uParam1->f_1);
}

void func_696(bool bParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	func_920(bParam0, *uParam1);
	func_920(bParam0, uParam1->f_1);
	func_920(bParam0, uParam1->f_2);
	func_920(bParam0, uParam1->f_3);
	func_920(bParam0, uParam1->f_4);
	func_920(bParam0, uParam1->f_5);
}

int func_697(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_READY_TO_RENDER(bParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_EQUIP_META_PED_OUTFIT(bParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(bParam0, true, true, true, true, false);
	}
	return 1;
}

int func_698(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_699(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_921(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_700()
{
	if (!func_76(8))
	{
		return false;
	}
	return true;
}

int func_701()
{
	return Global_1900383.f_444;
}

int func_702()
{
	return Global_1900383.f_444.f_1;
}

void func_703(int iParam0)
{
	Global_1900383.f_444 = *iParam0;
}

void func_704(int iParam0)
{
	Global_1900383.f_444.f_1 = *iParam0;
}

void func_705(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_922(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

Vector3 func_706(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	if (iParam0 >= 7)
	{
		return { 0.0f, 0.0f, 0.0f };
	}
	return Global_1900383[iParam0 /*45*/].f_38;
}

bool func_707(var uParam0, Vector3 vParam1, Vector3 vParam4, int iParam7, float fParam8)
{
	Vector3 vVar0;
	Vector3 vVar3;
	int iVar6;
	float fVar7;
	Vector3 vVar8;
	bool bVar11;
	var uVar12;

	iVar6 = 12;
	if (func_137(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) /*3*/ };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_710(vParam4, vParam1, 1);
	}
	fVar7 += ((BUILTIN::TO_FLOAT(uParam0->f_2) * 10.0f) * func_923((uParam0->f_2 % 2) == 0, 1.0f, -1.0f));
	vVar0 = { vParam1 + Vector(0.0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FloatToVector(((80.0f + 40.0f) * 0.5f)) * Vector(fParam8, fParam8, fParam8) /*3*/ };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_924(uParam0))
	{
		case 0:
			func_925(uParam0, 0.0f, 0.0f, 0.0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_926(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3.0f, 0.0f))
			{
				if (func_927(vVar3, vParam1, 0, 0))
				{
					func_925(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_926(uParam0, 3);
					}
					else
					{
						func_926(uParam0, 4);
					}
				}
				else
				{
					func_926(uParam0, 2);
				}
			}
			else
			{
				func_926(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_928(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 1127481344, 1101004800, -1138501878, -1138501878, 0))
			{
				if (func_927(func_709(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_926(uParam0, 3);
					}
					else
					{
						func_926(uParam0, 4);
					}
				}
				else
				{
					func_926(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_926(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::NAVMESH_REQUEST_PATH(iParam7, func_709(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_926(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_NAVMESH_QUERY_STATUS(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						func_926(uParam0, 5);
						break;
					case 1:
						uVar12 = PATHFIND::_0xF61CFEDEAB627BFA(uParam0->f_13);
						if (func_929(uVar12, 2) && iVar6 != 13)
						{
							func_926(uParam0, 5);
						}
						else
						{
							func_926(uParam0, 4);
						}
						PATHFIND::_0x661BB1E1FF77742D(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_930(&(uParam0->f_3.f_3), 1, 1, 0);
			func_926(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_926(uParam0, 0);
			break;
	}
	return false;
}

bool func_708(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = bParam3;
	sVar0.f_5 = iParam4;
	sVar0.f_6 = iParam7;
	return func_931(iParam0, &sVar0);
}

Vector3 func_709(var uParam0)
{
	return uParam0->f_3.f_3;
}

float func_710(struct<2> /*16*/ sParam0, int iParam2, struct<2> /*16*/ sParam3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (sParam3.f_0 - sParam0.f_0);
	fVar2 = (sParam3.f_1 - sParam0.f_1);
	if (fVar2 != 0.0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0.0f)
	{
		fVar0 = -90.0f;
	}
	else
	{
		fVar0 = 90.0f;
	}
	if (iParam6 == 1)
	{
		fVar0 *= -1.0f;
		if (fVar0 < 0.0f)
		{
			fVar0 += 360.0f;
		}
	}
	return fVar0;
}

bool func_711(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_71(iParam0))
	{
		return false;
	}
	iVar0 = func_88(iParam0);
	iVar1 = func_185(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::GET_MOUNT(iVar1) == iVar0)
	{
		return true;
	}
	return false;
}

void func_712(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1900383[iParam0 /*45*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
	iVar2 = PED::_GET_RIDER_OF_MOUNT(iVar0, true);
	if (iVar1 != iVar2)
	{
		return;
	}
	if (bParam1)
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 1;
	}
	TASK::TASK_HORSE_ACTION(iVar0, iVar3, 0, 0);
}

bool func_713()
{
	return func_932((1 << 30));
}

int func_714(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_170();
	switch (iVar0)
	{
		case 43:
			*uParam0 = { -1340.417f, 2447.74f, 307.6064f /*3*/ };
			*uParam1 = 69.2479f;
			break;
		case 71:
			*uParam0 = { -112.9493f, -14.3514f, 94.8418f /*3*/ };
			*uParam1 = 78.7552f;
			break;
		case 98:
			*uParam0 = { 676.6314f, -1223.84f, 43.8567f /*3*/ };
			*uParam1 = 174.642f;
			break;
		case 9:
			*uParam0 = { 1853.359f, -1835.935f, 42.0656f /*3*/ };
			*uParam1 = 25.3398f;
			break;
		case 4:
			*uParam0 = { 2279.679f, -753.1292f, 40.9928f /*3*/ };
			*uParam1 = 65.2774f;
			break;
		case 79:
			*uParam0 = { 2370.169f, 1336.931f, 105.273f /*3*/ };
			*uParam1 = 302.1729f;
			break;
		case 22:
			*uParam0 = { -2590.198f, 465.025f, 145.1573f /*3*/ };
			*uParam1 = 77.3385f;
			break;
		case 37:
			*uParam0 = { -1644.85f, -1376.873f, 82.9681f /*3*/ };
			*uParam1 = 340.856f;
			break;
		case 58:
			*uParam0 = { func_933(4) /*3*/ };
			*uParam1 = 0.0f;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_715()
{
	return Global_1900383.f_378.f_9;
}

bool func_716(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

void func_717(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (func_389(bParam0))
	{
		return;
	}
	if (func_390(bParam0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(bParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(bParam0, true, true);
	}
	func_326(iParam1, bParam0);
	func_934(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (bParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		func_469(iParam1, 0);
	}
	else
	{
		iVar1 = func_935(bParam0);
		func_469(iParam1, iVar1);
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		func_343(bParam0);
	}
	if (iParam1 == 0)
	{
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, bParam0);
	}
	else if (iParam1 == 1)
	{
		bVar2 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, bParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	if (func_540(iParam1))
	{
		func_541(iParam1);
	}
	iVar3 = func_207(iParam1);
	iVar4 = func_542(iVar3);
	func_543(iParam1, iVar4);
}

void func_718(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_749(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fVar4;
	func_936(iParam1);
	iVar5 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar5, 7, iVar6);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar5, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar7;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar5, iVar7);
}

bool func_719(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_540(iParam0))
	{
		return false;
	}
	iVar0 = func_720(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_330(0) /*4*/ };
	if (!func_937(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_938(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_721(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> /*96*/ sVar0;
	struct<4> /*32*/ sVar14;

	if (!func_668(bParam10))
	{
		return func_939(sParam0, sParam4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_670(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (func_940(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_666(0), &sParam0, &sParam4, iParam8, sVar0.f_11, &sVar14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_335(sVar14, 1))
		{
		}
	}
	return true;
}

bool func_722(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	int iVar28;

	if (!func_668(bParam9))
	{
		return func_941(sParam0, sParam4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return false;
	}
	if (func_940(&sParam0, &sParam4))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_670(sParam0, &sVar0, bParam9, 1) || !func_670(sParam4, &sVar14, bParam9, 1))
	{
		return false;
	}
	if (func_940(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return false;
	}
	iVar28 = func_666(0);
	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(iVar28, &sParam0, &sParam4))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam0, sVar14.f_10 | iParam8))
	{
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &sParam4, sVar0.f_10 | iParam8))
	{
	}
	return true;
}

int func_723()
{
	return Global_1894899.f_2;
}

bool func_724(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
		case joaat("CONSUMABLE_HERB_HUMMINGBIRD_SAGE"):
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_HERB_SAGE"):
		case joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"):
		case joaat("CONSUMABLE_BEETS"):
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
		case joaat("CONSUMABLE_PEPPERMINT"):
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
		case joaat("CONSUMABLE_CORN"):
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
		case joaat("CONSUMABLE_HERB_BLACK_CURRANT"):
		case joaat("CONSUMABLE_HERB_AMERICAN_GINSENG"):
		case joaat("CONSUMABLE_HERB_GOLDEN_CURRANT"):
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
		case joaat("CONSUMABLE_HERB_RED_SAGE"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
		case joaat("CONSUMABLE_PEACH"):
		case joaat("CONSUMABLE_HERB_DESERT_SAGE"):
		case joaat("CONSUMABLE_CARROT"):
		case joaat("CONSUMABLE_HERB_OREGANO"):
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
		case joaat("CONSUMABLE_HERB_CURRANT"):
		case joaat("CONSUMABLE_PEAR"):
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
		case joaat("CONSUMABLE_HERB_GINSENG"):
		case joaat("CONSUMABLE_HAYCUBE"):
		case joaat("CONSUMABLE_APPLE"):
		case joaat("CONSUMABLE_HERB_ALASKAN_GINSENG"):
		case joaat("CONSUMABLE_CELERY"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return true;
	}
	return false;
}

bool func_725(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			return true;
	}
	return false;
}

bool func_726(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_HORSE_STIMULANT_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"):
			return true;
	}
	return false;
}

bool func_727(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"):
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			return true;
	}
	return false;
}

bool func_728(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"):
			return true;
	}
	return false;
}

bool func_729(int iParam0)
{
	switch (iParam0)
	{
		case joaat("KIT_HORSE_BRUSH"):
			return true;
	}
	return false;
}

bool func_730(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HORSE_CARE_PACKAGE"):
			return true;
	}
	return false;
}

int func_731(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_431(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_942(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_732(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_284(iParam0, 0))
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
	if (!func_943())
	{
		func_944(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_945(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_945(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_873(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_736(iParam0);
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
	else if (!func_946(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_887(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_947(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_431(iParam0, 1443104131)) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_947(iParam0));
	}
	func_754(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

bool func_733(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_284(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_736(iParam0);
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
		if (!func_948(iParam0, 1))
		{
			return false;
		}
	}
	return func_735(iParam0, 0, bParam2) >= iParam1;
}

struct<2> /*16*/ func_734(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_284(iParam0, 0))
	{
		return sVar0;
	}
	if (func_431(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_2() == -1)
		{
			if (func_431(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_832(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_832(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_431(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_832(joaat("MEDICINE_ITEMS"));
	}
	if (func_431(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_832(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

int func_735(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_736(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_731(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_949(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_666(bParam2), iParam0, false);
	return iVar2;
}

int func_736(int iParam0)
{
	Vector3 vVar0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_737(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	sVar0 = { func_950(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_951(&sVar0, func_905(0));
	}
	if (!func_952(&sVar0, &iVar18, &iVar19, 0))
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
			if (!func_953(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_819(iParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_954(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_738(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_955(iParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_956(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_331(iParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_819(iParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

void func_739(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_724(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	func_957(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		bVar1 = true;
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10.0f);
	func_494(func_791(joaat("HORSE_FED")), 1);
	iVar2 = func_643(iParam0, 0);
	iVar3 = func_643(iParam0, 1);
	func_790(iParam0, iParam1);
	iVar4 = func_643(iParam0, 0);
	iVar5 = func_643(iParam0, 1);
	iVar6 = 0;
	iVar6 += (iVar4 - iVar2);
	iVar6 += (iVar5 - iVar3);
	func_114(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (func_958(iParam1))
	{
		func_494(func_791(joaat("HORSE_FED_MUSHROOM")), 1);
	}
	if (func_959(iParam1))
	{
		return;
	}
	if (func_960(iParam1))
	{
		func_454(iVar0, 16);
		return;
	}
	bVar7 = false;
	iVar8 = func_357(iParam0, 2);
	if (iVar8 < 30)
	{
		bVar7 = true;
	}
	iVar9 = -1;
	if (iVar6 >= 50 || bVar7)
	{
		iVar9 = 13;
	}
	else if (iVar6 >= 25)
	{
		iVar9 = 14;
	}
	else if (iVar6 >= 0)
	{
		iVar9 = 15;
	}
	if (iVar9 != -1)
	{
		func_454(iVar0, iVar9);
	}
	if (!func_205(43))
	{
		func_283(43, 0);
		func_575(MISC::GET_GAME_TIMER());
	}
}

void func_740(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_725(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_790(iParam0, iParam1);
}

void func_741(int iParam0, int iParam1)
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_726(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_494(func_791(joaat("HORSE_STIMULANT_GIVEN")), 1);
	func_790(iParam0, iParam1);
}

void func_742(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_728(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_957(iParam0);
	func_790(iParam0, iParam1);
	bVar1 = func_388(iParam0);
	if (bVar1)
	{
		iVar0 = func_401(iParam0);
	}
	func_114(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!func_890(iParam0, 1))
	{
		func_454(iVar0, 20);
	}
	iVar2 = func_961(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(func_962(iVar2)) + (48.0f * 60.0f));
	func_895(iVar0, 0, fVar3);
}

void func_743(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_730(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar1 = false;
	if (func_388(iParam0))
	{
		iVar0 = func_401(iParam0);
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar2 = func_961(iParam0);
		fVar3 = (BUILTIN::TO_FLOAT(func_962(iVar2)) + (48.0f * 60.0f));
		func_895(iVar0, 0, fVar3);
	}
	func_957(iParam0);
	func_790(iParam0, iParam1);
}

var func_744()
{
	return Global_1900372.f_9;
}

void func_745(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!func_729(iParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_957(iParam0);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10.0f);
	func_790(iParam0, iParam1);
	func_114(iParam0);
	bVar1 = func_388(iParam0);
	if (bVar1)
	{
		iVar0 = func_401(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = func_961(iParam0);
	iVar3 = func_962(iVar2);
	func_895(iVar0, 0, BUILTIN::TO_FLOAT(iVar3));
	bVar4 = false;
	iVar5 = MISC::GET_GAME_TIMER();
	iVar6 = func_963();
	if ((iVar6 + 45000) > iVar5)
	{
		bVar4 = true;
	}
	bVar7 = false;
	if (bVar4 && iVar6 + 15000 > iVar5)
	{
		bVar7 = true;
	}
	if (iParam2 >= 10)
	{
		iVar8 = 17;
	}
	else if (bVar4)
	{
		if (bVar7)
		{
			return;
		}
		else
		{
			iVar8 = 19;
		}
	}
	else
	{
		iVar8 = 18;
	}
	if (iVar8 != -1)
	{
		func_454(iVar0, iVar8);
		func_964(iVar5);
	}
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/] = iParam2;
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_678(iVar0, iParam1, iParam2);
}

int func_747(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_965(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

int func_749(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;

	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	if (func_94())
	{
		if (func_639())
		{
			bVar0 = false;
			if (!func_135(Global_1835011[15 /*74*/].f_1, 1) && !func_140(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*uParam0 = func_966();
				*iParam1 = func_967();
				*uParam2 = func_968();
				return 1;
			}
			else
			{
				*uParam0 = func_969();
				*iParam1 = func_970();
				*uParam2 = func_971();
				return 1;
			}
		}
		else if (func_640())
		{
			if (!func_135(Global_1835011[60 /*74*/].f_1, 1))
			{
				*uParam0 = func_972();
				*iParam1 = func_973();
				*uParam2 = func_974();
				return 1;
			}
			else
			{
				*uParam0 = func_975();
				*iParam1 = func_976();
				*uParam2 = func_977();
				return 1;
			}
		}
	}
	else if (func_639())
	{
		*uParam0 = func_978();
		*iParam1 = func_979();
		*uParam2 = func_980();
		return 1;
	}
	else if (func_640())
	{
		*uParam0 = func_981();
		*iParam1 = func_982();
		*uParam2 = func_983();
		return 1;
	}
	return 0;
}

void func_750(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_8 = iParam1;
}

void func_751(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_9 = iParam1;
}

void func_752(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_10 = iParam1;
}

void func_753(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1900383[iParam0 /*45*/].f_24 |= iParam1;
}

int func_754(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
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
	func_984(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_755(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

bool func_756(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return false;
	}
	iVar0 = func_88(iParam0);
	fVar1 = func_190(iVar0);
	if (fVar1 >= 0.1f)
	{
		return true;
	}
	return false;
}

float func_757(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0.0f;
	}
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_2[iParam1];
}

float func_758(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15.0f;
		case 4:
			return 4.0f;
		case 1:
			return 2.0f;
		case 2:
			return 1.0f;
		case 3:
			return 1.0f;
		case 5:
			return 100.0f;
		case 6:
			return 25.0f;
		case 7:
			return 5.0f;
		case 8:
			return 1.0f;
		case 9:
			return 15.0f;
		case 10:
			return 1.0f;
		case 11:
			return 15.0f;
		case 12:
			return 1.0f;
		case 13:
			return 15.0f;
		case 14:
			return 5.0f;
		case 15:
			return 1.0f;
		case 16:
			return 5.0f;
		case 17:
			return 15.0f;
		case 18:
			return 5.0f;
		case 19:
			return 1.0f;
		case 20:
			return 5.0f;
		case 21:
			return 15.0f;
		case 22:
			return 1.0f;
	}
	return 0.0f;
}

bool func_759()
{
	return Global_40.f_1095.f_3140;
}

void func_760(int iParam0, float fParam1)
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

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	iVar1 = func_115(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 += fParam1;
	iVar3 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	func_677(iVar3, BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1));
	iVar4 = func_402(iVar3);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar4;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar3, iVar4);
	func_936(iVar4);
	if (iVar4 > iVar1)
	{
		func_985(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_140(42))
				{
					func_283(19, 1);
				}
				else
				{
					func_283(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_283(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_283(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_283(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_961(iVar3);
			iVar6 = func_986();
			func_987(iVar6, iVar5 + 1);
			iVar7 = func_988(iVar3);
			iVar8 = func_989();
			func_987(iVar8, iVar7 + 1);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		func_494(func_791(joaat("HORSE_BOND_INCREASED")), 1);
		if (iVar4 == iVar2)
		{
			func_494(func_791(joaat("HORSES_REACHED_MAX_BOND")), 1);
		}
		func_853(0, -1);
	}
}

bool func_761(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return false;
}

bool func_762(int iParam0)
{
	if (PED::_GET_SHOP_PED_COMPONENT_CATEGORY(iParam0, 3, false) == 0)
	{
		return false;
	}
	return true;
}

void func_763(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	MISC::_COPY_MEMORY(&(Global_1900383.f_393.f_2), &uParam0, 6);
}

bool func_764(int iParam0, int iParam1)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1 != 0;
}

void func_765(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(uParam0[iVar0], &(Global_40.f_1095.f_3054.f_3[iVar0]), 1);
		iVar0++;
	}
}

void func_766(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 57)
	{
		iVar2 = func_681(iVar1, 1);
		iVar3 = iVar2;
		if (!func_284(iVar3, 0))
		{
		}
		else
		{
			iVar4 = (*uParam1)[iVar1];
			if (iVar4 <= 0)
			{
			}
			else
			{
				iVar5 = func_285(iVar0, iVar3, iVar4, bParam2, joaat("REMOVE_REASON_DEFAULT"));
			}
		}
		iVar1++;
	}
}

void func_767(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_528(uParam2);
	iVar0 = 0;
	while (iVar0 < 57)
	{
		iVar1 = 0;
		iVar1 += (*uParam0)[iVar0];
		iVar1 += (*uParam1)[iVar0];
		iVar1 = func_795(iVar1, 0, 10);
		(*uParam2)[iVar0] = iVar1;
		iVar0++;
	}
}

void func_768(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_3054.f_3[iVar0]), uParam0[iVar0], 1);
		iVar0++;
	}
}

void func_769(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 57)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[iVar0]), uParam1[iVar0], 1);
		iVar0++;
	}
}

void func_770(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*5*/], &(Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar0 /*5*/]), 5);
		iVar0++;
	}
}

void func_771(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(uParam0[iVar0 /*5*/], &(Global_40.f_1095.f_3054.f_61[iVar0 /*5*/]), 5);
		iVar0++;
	}
}

int func_772(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if ((*uParam0)[iVar1 /*5*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_773(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_3054.f_61[iVar0 /*5*/]), uParam0[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_774(int iParam0)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	func_990(iVar0);
}

void func_775(int iParam0, var uParam1)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		MISC::_COPY_MEMORY(&(Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar0 /*5*/]), uParam1[iVar0 /*5*/], 5);
		iVar0++;
	}
}

void func_776(int iParam0)
{
	Global_40.f_1095 = iParam0;
}

void func_777(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_71(iParam0))
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/];
		if (func_284(iVar2, 0))
		{
			iVar3 = iVar2;
			uVar4 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_1;
			uVar5 = Global_40.f_1095.f_1[iParam0 /*436*/].f_356[iVar1 /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(iVar0, iVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

struct<6> /*48*/ func_778()
{
	return Global_1900383.f_393.f_2;
}

void func_779()
{
	struct<6> /*48*/ sVar0;

	func_763(sVar0);
}

bool func_780(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGGROUND")))
	{
		return true;
	}
	return false;
}

bool func_781(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_HITCHINGTREE")))
	{
		return true;
	}
	return false;
}

bool func_782(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_ROUNDEDHITCHINGPOST")))
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, joaat("PROP_ROUNDEDHITCHINGPOSTTHATREQUIRESBEINGFACED")))
	{
		return true;
	}
	return false;
}

var func_784()
{
	return Global_1900383.f_418.f_2;
}

void func_785(bool bParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	fParam1 *= 0.01f;
	fVar1 = PED::_GET_PED_STAMINA(bParam0);
	fVar2 = PED::_GET_PED_MAX_STAMINA(bParam0);
	fVar0 = (fVar2 * fParam1);
	fVar3 = fVar0;
	if ((fVar1 + fVar0) > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	fVar4 = (fVar1 + fVar3);
	PED::_CHANGE_PED_STAMINA(bParam0, fVar3);
}

bool func_786(int iParam0, int iParam1)
{
	if (func_2() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

void func_787(bool bParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	struct<14> /*112*/ sVar2;
	int iVar19;
	int iVar20;

	if (func_2() == 0)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			if (func_180(bParam0, Global_35))
			{
				if (func_991(bParam0) == 2)
				{
					sVar0 = "HORSE_FOLLOW_ME_FEMALE";
				}
				else
				{
					sVar0 = "HORSE_FOLLOW_ME_MALE";
				}
				func_708(Global_35, sVar0, joaat("SPEECH_PARAMS_STANDARD"), bParam0, 1, 0, 0, 1);
				if (func_388(bParam0))
				{
					iVar1 = func_401(bParam0);
					func_178(iVar1, 0);
				}
			}
			break;
		case 2:
			if (func_992(bParam0, Global_35, bParam2))
			{
				func_708(Global_35, "HORSE_RUN_AWAY", joaat("SPEECH_PARAMS_ALLOW_REPEAT"), bParam0, 1, 0, 0, 1);
				sVar2.f_6 = -1082130432;
				sVar2.f_7 = -1082130432;
				sVar2.f_8 = -1082130432;
				sVar2.f_9 = -1082130432;
				sVar2.f_10 = -1082130432;
				sVar2.f_11 = -1082130432;
				sVar2.f_12 = -1;
				sVar2.f_13 = -1;
				sVar2.f_0 = joaat("EVENT_SHOCKING_HORSE_FLEE_FROM_PLAYER_PROMPT");
				sVar2.f_1 = bParam0;
				sVar2.f_2 = Global_35;
				EVENT::_CREATE_SHOCKING_EVENT(&sVar2);
				Global_1935630.f_42 = bParam0;
				Global_1935630.f_43 = func_993();
				if (func_388(bParam0))
				{
					iVar19 = func_401(bParam0);
					func_178(iVar19, 2);
				}
			}
			break;
		case 1:
			if (func_486(bParam0))
			{
				func_708(Global_35, "HORSE_STAY_HERE", joaat("SPEECH_PARAMS_STANDARD"), bParam0, 1, 0, 0, 1);
				if (func_388(bParam0))
				{
					iVar20 = func_401(bParam0);
					func_178(iVar20, 1);
				}
			}
			break;
	}
}

int func_788(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (func_727(iParam0))
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam1))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(bParam1))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(bParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (func_727(iParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_994(iVar0, iParam0))
		{
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	if (func_120() == 1)
	{
		func_995(iVar0);
		func_996(iParam0);
		func_997(1);
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_789()
{
	int iVar0[11];
	int iVar12;
	int iVar13[26];
	int iVar40;

	iVar0[0] = joaat("CONSUMABLE_HAYCUBE");
	iVar0[1] = joaat("CONSUMABLE_OAT_CAKES");
	iVar0[2] = joaat("CONSUMABLE_APPLE");
	iVar0[3] = joaat("CONSUMABLE_BEETS");
	iVar0[4] = joaat("CONSUMABLE_PEAR");
	iVar0[5] = joaat("CONSUMABLE_PEACH");
	iVar0[6] = joaat("CONSUMABLE_CELERY");
	iVar0[7] = joaat("CONSUMABLE_CARROT");
	iVar0[8] = joaat("CONSUMABLE_CORN");
	iVar0[9] = joaat("CONSUMABLE_PEPPERMINT");
	iVar0[10] = joaat("CONSUMABLE_SUGARCUBE");
	iVar12 = 0;
	while (iVar12 < iVar0)
	{
		if (func_735(iVar0[iVar12], 0, 0) > 0)
		{
			return iVar0[iVar12];
		}
		iVar12++;
	}
	iVar13[0] = joaat("CONSUMABLE_HERB_ALASKAN_GINSENG");
	iVar13[1] = joaat("CONSUMABLE_HERB_AMERICAN_GINSENG");
	iVar13[2] = joaat("CONSUMABLE_HERB_BAY_BOLETE");
	iVar13[3] = joaat("CONSUMABLE_HERB_BLACK_BERRY");
	iVar13[4] = joaat("CONSUMABLE_HERB_BLACK_CURRANT");
	iVar13[5] = joaat("CONSUMABLE_HERB_BURDOCK_ROOT");
	iVar13[6] = joaat("CONSUMABLE_HERB_CHANTERELLES");
	iVar13[7] = joaat("CONSUMABLE_HERB_CREEPING_THYME");
	iVar13[8] = joaat("CONSUMABLE_HERB_DESERT_SAGE");
	iVar13[9] = joaat("CONSUMABLE_HERB_HUMMINGBIRD_SAGE");
	iVar13[10] = joaat("CONSUMABLE_HERB_GOLDEN_CURRANT");
	iVar13[11] = joaat("CONSUMABLE_HERB_OLEANDER_SAGE");
	iVar13[12] = joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
	iVar13[13] = joaat("CONSUMABLE_HERB_RAMS_HEAD");
	iVar13[14] = joaat("CONSUMABLE_HERB_RED_RASPBERRY");
	iVar13[15] = joaat("CONSUMABLE_HERB_RED_SAGE");
	iVar13[16] = joaat("CONSUMABLE_HERB_WILD_FEVERFEW");
	iVar13[17] = joaat("CONSUMABLE_HERB_WILD_MINT");
	iVar13[18] = joaat("CONSUMABLE_HERB_GINSENG");
	iVar13[19] = joaat("CONSUMABLE_HERB_SAGE");
	iVar13[20] = joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
	iVar13[21] = joaat("CONSUMABLE_HERB_CURRANT");
	iVar13[22] = joaat("CONSUMABLE_HERB_OREGANO");
	iVar13[23] = joaat("CONSUMABLE_HERB_WILD_CARROTS");
	iVar13[24] = joaat("CONSUMABLE_HERB_COMMON_BULRUSH");
	iVar13[25] = joaat("CONSUMABLE_HERB_ENGLISH_MACE");
	iVar12 = 0;
	iVar12 = 0;
	while (iVar12 < iVar13)
	{
		iVar40 = iVar13[iVar12];
		if (func_724(iVar40) && func_735(iVar40, 0, 0) > 0)
		{
			return iVar40;
		}
		iVar12++;
	}
	return 0;
}

void func_790(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;
	struct<6> /*48*/ sVar24;
	var uVar31;
	float fVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;

	if (!func_420(iParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_388(bParam0))
	{
		iVar1 = func_401(bParam0);
		bVar0 = true;
	}
	sVar2.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iParam1, &sVar2);
	iVar33 = 0;
	while (iVar33 < sVar2.f_0)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar2.f_1[iVar33], &sVar24);
		switch (sVar24.f_1)
		{
			case joaat("EFFECT_HORSE_CALORIES"):
				iVar34 = sVar24.f_2;
				fVar35 = -sVar24.f_5;
				if (bVar0 && iVar34 > 0)
				{
					iVar36 = func_961(bParam0);
					iVar37 = func_998(iVar36);
					func_895(iVar1, 1, BUILTIN::TO_FLOAT(iVar37));
				}
				if (bVar0)
				{
					iVar38 = func_437(iVar1, 1);
				}
				else
				{
					iVar38 = func_357(bParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						func_438(iVar1, 2, iVar34);
					}
					else
					{
						func_439(bParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					func_438(iVar1, 1, BUILTIN::FLOOR(fVar35));
				}
				else
				{
					func_439(bParam0, 1, BUILTIN::FLOOR(fVar35));
				}
				break;
			case joaat("EFFECT_HORSE_HEALTH"):
				func_999(bParam0, sVar24.f_5);
				break;
			case joaat("EFFECT_HORSE_HEALTH_CORE"):
				if (func_641(0, &uVar31))
				{
					fVar39 = sVar24.f_5;
					if (bVar0)
					{
						func_1000(iVar1, 0, BUILTIN::FLOOR(fVar39));
					}
					else
					{
						func_1001(bParam0, 0, BUILTIN::FLOOR(fVar39));
					}
				}
				break;
			case joaat("EFFECT_HORSE_HEALTH_CORE_GOLD"):
				if (func_1002(0, &uVar31))
				{
					fVar32 = func_1003(BUILTIN::TO_FLOAT(sVar24.f_3), sVar24.f_4);
					if (bVar0)
					{
						func_1000(iVar1, 0, BUILTIN::FLOOR(100.0f));
					}
					else
					{
						func_1001(bParam0, 0, BUILTIN::FLOOR(100.0f));
					}
					func_1004(bParam0, 0, fVar32);
				}
				break;
			case joaat("EFFECT_HORSE_HEALTH_OVERPOWERED"):
				if (func_641(0, &uVar31))
				{
					fVar32 = func_1003(BUILTIN::TO_FLOAT(sVar24.f_3), sVar24.f_4);
					func_1005(bParam0, 0, fVar32);
				}
				break;
			case joaat("EFFECT_HORSE_STAMINA"):
				func_785(bParam0, sVar24.f_5);
				break;
			case joaat("EFFECT_HORSE_STAMINA_CORE"):
				if (func_641(1, &uVar31))
				{
					fVar40 = sVar24.f_5;
					if (bVar0)
					{
						func_1000(iVar1, 1, BUILTIN::FLOOR(fVar40));
					}
					else
					{
						func_1001(bParam0, 1, BUILTIN::FLOOR(fVar40));
					}
				}
				break;
			case joaat("EFFECT_HORSE_STAMINA_CORE_GOLD"):
				if (func_1002(1, &uVar31))
				{
					fVar32 = func_1003(BUILTIN::TO_FLOAT(sVar24.f_3), sVar24.f_4);
					if (bVar0)
					{
						func_1000(iVar1, 1, BUILTIN::FLOOR(100.0f));
					}
					else
					{
						func_1001(bParam0, 1, BUILTIN::FLOOR(100.0f));
					}
					func_1004(bParam0, 1, fVar32);
				}
				break;
			case joaat("EFFECT_HORSE_STAMINA_OVERPOWERED"):
				if (func_641(1, &uVar31))
				{
					fVar32 = func_1003(BUILTIN::TO_FLOAT(sVar24.f_3), sVar24.f_4);
					func_1005(bParam0, 1, fVar32);
				}
				break;
		}
		iVar33++;
	}
	func_1006(iParam1);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

struct<2> /*16*/ func_791(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

bool func_792(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(iParam0);
}

int func_793(int iParam0)
{
	if (!func_511(iParam0))
	{
		return 0;
	}
	return iParam0;
}

int func_794(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 0;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
		case joaat("PROVISION_DEER_HIDE"):
			return 20;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 30;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 49;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
		case joaat("PROVISION_BUCK_FUR"):
			return 8;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
		case joaat("PROVISION_RAM_HIDE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR"):
			return 34;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN"):
			return 38;
		case 0:
			return 56;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
		case joaat("PROVISION_FOX_FUR"):
			return 23;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 41;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
		case joaat("PROVISION_WOLF_FUR"):
			return 52;
		case joaat("PROVISION_COYOTE_FUR"):
			return 16;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
		case joaat("PROVISION_GOAT_HAIR"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 33;
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
		case joaat("PROVISION_BOAR_SKIN"):
			return 5;
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

int func_795(int iParam0, int iParam1, int iParam2)
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

bool func_796(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return true;
	}
	return false;
}

bool func_797(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_135(Global_1835011[iParam0 /*74*/].f_1, 1);
}

int func_798(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_01");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_02");
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_03");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_04");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			return joaat("LEGENDARY_FISH_05");
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			return joaat("LEGENDARY_FISH_06");
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			return joaat("LEGENDARY_FISH_07");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_08");
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_09");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISH_10");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			return joaat("LEGENDARY_FISH_11");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			return joaat("LEGENDARY_FISH_12");
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return joaat("LEGENDARY_FISH_13");
		default:
			break;
	}
	return 0;
}

bool func_799(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

int func_800(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_01");
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_02");
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_03");
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_04");
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_05");
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_06");
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_07");
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_08");
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_09");
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_10");
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_11");
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_12");
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return joaat("LEGENDARY_FISHING_SPOT_13");
		default:
			break;
	}
	return 0;
}

bool func_801(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_802(int iParam0)
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

int func_803(int iParam0)
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

void func_804(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1 = fParam1;
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR(Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1);
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar0, 7, iVar1);
	iVar2 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_372 = iVar2;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar0, iVar2);
	func_936(iVar2);
}

bool func_805(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_719(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_331(iParam1, sVar0, joaat("SLOTID_HORSE_MANE"), 0) /*4*/ };
	return func_335(sVar29, 1);
}

bool func_806(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_719(iParam0, &sVar0))
	{
		return false;
	}
	sVar29 = { func_331(iParam1, sVar0, joaat("SLOTID_HORSE_TAIL"), 0) /*4*/ };
	return func_335(sVar29, 1);
}

void func_807(bool bParam0)
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

void func_808(int iParam0)
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

void func_809(bool bParam0)
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

void func_810(bool bParam0)
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

void func_811(bool bParam0)
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

int func_812(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

bool func_813(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_1007(iParam0, 1) /*3*/] != Global_1946054.f_57[func_1007(iParam0, 1) /*11*/];
}

int func_814(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_1007(iParam0, 1) /*3*/];
}

bool func_815(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_955(iParam0, 0, 1) /*5*/ };
	sVar5 = { func_331(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_334(iParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

int func_816(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_955(iParam1, 1, 0) /*5*/ };
		iParam3 = func_1008(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_1009(iParam1, iParam2, func_1007(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1010(1, (func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && iParam1 != Global_1946054.f_57[func_1007(iParam3, 1) /*11*/])
			{
				func_1011(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_1012((1 << 15)) && iParam1 != Global_1946054.f_57[func_1007(iParam3, 1) /*11*/])
			{
				func_1013();
				func_1011(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1011(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1014(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1011(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_1015(0);
			func_1016(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1011(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_817()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_1017();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_1018(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_815(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_1018(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_815(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_818(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_666(bParam2), uParam0, iParam1);
}

bool func_819(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_1019(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_670(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_668(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_666(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_820(int iParam0)
{
	return func_736(iParam0) == joaat("HORSE");
}

char* func_821()
{
	return "UNNAMED_HORSE";
}

bool func_822()
{
	int iVar0;

	iVar0 = func_823();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

int func_823()
{
	return Global_1900383.f_393.f_1;
}

void func_824(int iParam0)
{
	Global_1900383.f_393.f_1 = iParam0;
}

int func_825()
{
	int iVar0;

	iVar0 = func_1020();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_826(int iParam0)
{
	float fVar0;
	float fVar1;

	if (func_2() != -1)
	{
		return iParam0;
	}
	if (Global_1347477.f_2 + 120000) < MISC::GET_GAME_TIMER()
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}
	fVar0 = 1.0f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3++;
	if (Global_1347477.f_3 >= 10)
	{
		fVar0 = 2.0f;
	}
	else if (Global_1347477.f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (BUILTIN::TO_FLOAT(iParam0) * fVar0);
	fVar1 = func_923(MISC::ABSF(fVar1) < 1.0f, func_923(fVar1 < 0.0f, -1.0f, 1.0f), fVar1);
	return BUILTIN::CEIL(fVar1);
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_828()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_829(int iParam0, bool bParam1, int iParam2)
{
	func_1021((MISC::GET_GAME_TIMER() + iParam2), !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, iParam0);
	func_1022(iParam0);
}

void func_830(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_1023(iParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
}

void func_831(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	bVar3 = false;
	if (func_1024(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1025(iVar5, &iVar2, &iVar0))
			{
				if (!func_284(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1026(iVar2);
					if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar1))
					{
						if (bParam0)
						{
							UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_736(iVar2) == joaat("WEAPON_MOD"))
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_825() <= -160;
								}
								else if (iVar0 == joaat("SHOP_HONOR_GOOD_4"))
								{
									bVar3 = func_825() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1027();
							}
							if (bVar3)
							{
								UNLOCK::UNLOCK_SET_UNLOCKED(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> /*16*/ func_832(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

char* func_833(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HONOR_EVENT_LOOT_INNOCENT"):
			return "HONOR_EVENT_LOOT_INNOCENT";
		case joaat("HONOR_EVENT_AMBIENT_KILL"):
			return "HONOR_EVENT_AMBIENT_KILL";
		case joaat("HONOR_EVENT_AMBIENT_KO"):
			return "HONOR_EVENT_AMBIENT_KO";
		case joaat("HONOR_EVENT_SCARE"):
			return "HONOR_EVENT_SCARE";
		case joaat("HONOR_EVENT_KILL_VERMIN"):
			return "HONOR_EVENT_KILL_VERMIN";
		case joaat("HONOR_EVENT_KILL_FARM_ANIMAL"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case joaat("HONOR_EVENT_KILL_HORSE"):
			return "HONOR_EVENT_KILL_HORSE";
		case joaat("HONOR_EVENT_STEAL_HORSE"):
			return "HONOR_EVENT_STEAL_HORSE";
		case joaat("HONOR_EVENT_STEAL_DONKEY"):
			return "HONOR_EVENT_STEAL_DONKEY";
		case joaat("HONOR_EVENT_STEAL_MULE"):
			return "HONOR_EVENT_STEAL_MULE";
		case joaat("HONOR_EVENT_STEAL_WAGON"):
			return "HONOR_EVENT_STEAL_WAGON";
		case joaat("HONOR_EVENT_TRAMPLED_INNOCENT"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case joaat("HONOR_EVENT_ABANDON_ANIMALS"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case joaat("HONOR_EVENT_ANTAGONIZE"):
			return "HONOR_EVENT_ANTAGONIZE";
		case joaat("HONOR_EVENT_THEFT"):
			return "HONOR_EVENT_THEFT";
		case joaat("HONOR_EVENT_INTERVENED"):
			return "HONOR_EVENT_INTERVENED";
		case joaat("HONOR_EVENT_WANTED_IN_CAMP"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case joaat("HONOR_EVENT_DONATED_GAME"):
			return "HONOR_EVENT_DONATED_GAME";
		case joaat("HONOR_EVENT_ITEM_REQUEST"):
			return "HONOR_EVENT_ITEM_REQUEST";
		case joaat("HONOR_EVENT_LONG_ABSENCE"):
			return "HONOR_EVENT_LONG_ABSENCE";
		case joaat("HONOR_EVENT_CRUEL_DEATH"):
			return "HONOR_EVENT_CRUEL_DEATH";
		case joaat("HONOR_EVENT_JUSTICE_SERVED"):
			return "HONOR_EVENT_JUSTICE_SERVED";
		case joaat("HONOR_EVENT_CHEAT"):
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

int func_834(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1028(iParam0))
	{
		return 0;
	}
	if (!func_94())
	{
		return 0;
	}
	if (!func_1029(iParam0, &iVar0, &iVar1))
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

bool func_835(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if ((bParam2 && func_2() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!func_1030(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

int func_836(int iParam0)
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

bool func_837(int iParam0)
{
	return !func_1031(iParam0, 1);
}

int func_838(int iParam0)
{
	if (!func_588(iParam0))
	{
		return -1;
	}
	if (iParam0 == 34 && func_723() == 128)
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

bool func_839(int iParam0)
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

bool func_840(int iParam0)
{
	if (!func_1032(iParam0))
	{
		return false;
	}
	return func_1033(iParam0, (1 << 25));
}

float func_841(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_842()
{
	Global_1900383.f_444.f_13 = 0;
}

var func_843()
{
	return Global_1900383.f_444.f_13;
}

void func_844(int iParam0)
{
	Global_1900383.f_444.f_13 = iParam0;
}

bool func_845()
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

int func_846(int iParam0)
{
	if (!func_269(iParam0))
	{
		return -1;
	}
	return func_1034(func_611(iParam0));
}

bool func_847(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_848(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

bool func_849()
{
	return Global_1905944.f_5693 != -1;
}

bool func_850(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	return func_135(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_851(int iParam0)
{
	if (!func_1035(iParam0))
	{
		func_1037(func_1036(iParam0));
	}
}

int func_852()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1035(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_853(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_1038(&Global_0, 8);
	}
	if (!func_94() || func_2() != -1)
	{
		return;
	}
	func_1038(&Global_0, 1);
}

int func_854(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_855(iVar9);
	iVar2 = func_855(iVar10);
	iVar3 = func_855(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_855(iVar12);
	}
	iVar5 = func_856(iVar9);
	iVar6 = func_856(iVar10);
	iVar7 = func_856(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_856(iVar12);
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

int func_855(int iParam0)
{
	int iVar0;

	if (func_733(iParam0, 1, 0))
	{
		iVar0 = func_735(iParam0, 0, 0);
	}
	return iVar0;
}

int func_856(int iParam0)
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

void func_857(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_94() && (func_1039(38) || func_850(38)))
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
			if (func_94() && (func_1039(39) || func_850(39)))
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
			iVar9 = func_1040(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_94() && (func_1039(41) || func_850(41)))
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
			iVar14 = 1995362678;
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_94() && (func_1039(49) || func_850(49)))
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
			iVar9 = func_1040(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_1041(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_1042(iParam0, iVar13, iVar14))
	{
	}
	if (func_1043(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1044(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1045(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1046(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1047(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

int func_858(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_864(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_859(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_858(iParam1, 5) || iParam0 == func_858(iParam1, 6)) || iParam0 == func_858(iParam1, 7)) || iParam0 == func_858(iParam1, 8)) || iParam0 == func_858(iParam1, 9))
	{
		func_1048(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_857(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1049(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_860(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 1;
	if ((((iParam0 == func_858(iParam1, 5) || iParam0 == func_858(iParam1, 6)) || iParam0 == func_858(iParam1, 7)) || iParam0 == func_858(iParam1, 8)) || iParam0 == func_858(iParam1, 9))
	{
		if (func_1048(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1049(51, 0, 0, iVar0, func_1040(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_857(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1049(51, 0, 0, iVar0, func_1040(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_861()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_862()
{
	return Global_1905944.f_5694;
}

bool func_863()
{
	var uVar0;

	uVar0 = Global_1905944.f_5695;
	Global_1905944.f_5695 = 0;
	return uVar0;
}

bool func_864(int iParam0, var uParam1)
{
	if (!func_1050(iParam0))
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

int func_865(int iParam0)
{
	return func_1051(iParam0);
}

bool func_866(int iParam0)
{
	if (func_2() != -1)
	{
		if (func_764(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_764(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_867(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_764(iParam0, (1 << 16)) && !func_764(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_764(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_764(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_868(int iParam0, int iParam1, int iParam2)
{
	if (!func_284(iParam1, 0))
	{
		return false;
	}
	return func_869(iParam0, iParam1) >= iParam2;
}

int func_869(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	sVar0 = { func_1052(iParam0, iParam1) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &sVar0, false);
	return iVar4;
}

int func_870(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_284(iParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	sVar0 = { func_871(iParam0) /*5*/ };
	sVar5 = { func_872(iParam0, iParam1, sVar0, sVar0.f_4) /*4*/ };
	return func_1053(iParam0, iParam1, &sVar5, iParam2, iParam3, bParam4);
}

struct<5> /*40*/ func_871(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_872(iParam0, joaat("CHARACTER"), func_665(), joaat("SLOTID_NONE")) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	return sVar0;
}

struct<4> /*32*/ func_872(int iParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_284(iParam1, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, iParam1, iParam6, &sVar0);
	return sVar0;
}

bool func_873(int iParam0, int iParam1)
{
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

void func_874(int iParam0)
{
	if (func_850(41))
	{
		func_283(363, 0);
	}
	else
	{
		func_283(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_01"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_02"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_03"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_04"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_05"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_06"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_07"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_08"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_09"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_10"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_11"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_12"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_13"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_853(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_1054(joaat("LEGENDARY_FISH_14"));
			func_1055(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_1056(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

int func_875(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_876(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1057(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_877(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_878(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_879(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_880(int iParam0, int iParam1)
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

float func_881(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 -= ((float)BUILTIN::ROUND(((fParam0 - fParam1) / fVar0)) * fVar0);
	if (fParam0 < fParam1)
	{
		fParam0 += fVar0;
	}
	return fParam0;
}

bool func_882(int iParam0)
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
	iVar0 = func_879(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_878(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_631(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_876(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_875(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_877(iParam0);
	if (iVar5 < 1 || iVar5 > func_880(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_883(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1058() - fParam1);
	func_1059(uParam0, 1);
	func_1060(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

bool func_884(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

float func_885(var uParam0)
{
	if (!func_634(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1061(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1058() - uParam0->f_1);
}

bool func_886(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1062(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 == func_1063())
	{
		return func_1062(&(Global_1109000.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1224589.f_16[iParam1])
	{
		return func_1062(&(Global_1108108[iParam1 /*27*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_887(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_888(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_795(iParam2, 0, 100);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/] = iParam2;
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_644(iVar0, iParam1, func_578(iParam0, iParam1));
	func_1064(iVar0, iParam1);
}

void func_889(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_1065(fParam2, 0.0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_2 = fParam2;
}

bool func_890(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_641(iParam1, &iVar0))
	{
		if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(bParam0, iVar0))
		{
			return true;
		}
	}
	return false;
}

float func_891(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0.0f;
	if (iParam1 == 0)
	{
		if (func_437(iParam0, 0) > 50)
		{
			fVar0 += 0.25f;
		}
	}
	if (func_733(joaat("PROVISION_TALISMAN_BOAR_TUSK"), 1, 0))
	{
		fVar0 += -0.1f;
	}
	if (func_213() == 0 && func_201() == iParam0)
	{
		fVar1 = func_1066(iParam1);
		fVar0 -= fVar1;
	}
	return fVar0;
}

float func_892(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_1;
}

void func_893(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_1065(fParam2, -1.0f, 1.0f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_1 = fParam2;
}

void func_894(int iParam0)
{
	Global_1900383.f_444.f_8 = iParam0;
}

void func_895(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_1065(fParam2, 0.0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_2 = fParam2;
}

bool func_896(bool bParam0)
{
	Vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return false;
	}
	vVar0 = { func_933(func_1067()) /*3*/ };
	fVar3 = func_1068();
	if (func_1069(ENTITY::GET_ENTITY_COORDS(bParam0, true, false), vVar0, fVar3, 0))
	{
		return true;
	}
	return false;
}

bool func_897(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(bParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING")) || PED::IS_PED_USING_SCENARIO_HASH(bParam0, joaat("WORLD_ANIMAL_HORSE_GRAZING_DOMESTIC")))
	{
		return true;
	}
	return false;
}

float func_898(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	return Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1;
}

void func_899(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_1065(fParam2, -1.0f, 1.0f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1 = fParam2;
}

void func_900(int iParam0, int iParam1)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_407[iParam1 /*4*/].f_1 = 0.0f;
}

int func_901(int iParam0)
{
	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/].f_1;
}

void func_902(int iParam0)
{
	Global_1900383.f_444.f_6 = iParam0;
}

int func_903(int iParam0)
{
	if (!func_284(*iParam0, 0))
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

bool func_904(int iParam0)
{
	return func_736(iParam0) == joaat("WEAPON");
}

struct<4> /*32*/ func_905(bool bParam0)
{
	int iVar0;

	iVar0 = func_666(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_331(joaat("CARRIED_WEAPONS"), func_330(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_331(joaat("CARRIED_WEAPONS"), func_330(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_331(joaat("CARRIED_WEAPONS"), func_330(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_906(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_332(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_907(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_1070(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

bool func_908(int iParam0, bool bParam1)
{
	if (func_1071(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_140(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_909(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_284(iParam0, 0))
	{
		return false;
	}
	sVar0 = { func_955(iParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1072((398 + iVar29), 1);
		if (func_906(iParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_907(iParam0, &sVar6, iVar5);
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

int func_910(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!func_668(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_911(iParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_666(bParam3), iParam0);
}

bool func_911(int iParam0)
{
	if (func_1073(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

struct<29> /*232*/ func_912(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<29> /*232*/ sVar0;
	struct<29> /*232*/ sVar29;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar29.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_666(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_916(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_913(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1074(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1075(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1075(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_1075(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_914(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<18> /*144*/ sVar0;
	struct<15> /*120*/ sVar18;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return sVar0;
	}
	sVar18.f_9 = joaat("SLOTID_NONE");
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_666(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_916(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_915(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1076(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1075(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1075(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_1075(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> /*136*/ func_916(var uParam0)
{
	struct<17> /*136*/ sVar0;

	sVar0.f_9 = 1;
	sVar0.f_11 = joaat("SLOTID_NONE");
	sVar0 = { *uParam0 /*4*/ };
	sVar0.f_4 = { uParam0->f_5 /*4*/ };
	sVar0.f_8 = uParam0->f_4;
	sVar0.f_9 = uParam0->f_11;
	sVar0.f_11 = uParam0->f_9;
	sVar0.f_10 = uParam0->f_10;
	return sVar0;
}

int func_917(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_1077(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_1075(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_1075(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_1075(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_918(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_1078(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_919(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_1071(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1079(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_920(bool bParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == joaat("HORSE_EQUIPMENT_MANE_DEFAULT") || iParam1 == joaat("HORSE_EQUIPMENT_TAIL_DEFAULT"))
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(bParam0, iVar0, false, false, false);
}

void func_921(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_1080(iParam1))
		{
			func_1081(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_1082(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
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
			func_361(iParam0, 0);
			bVar0 = true;
		}
		func_353(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_922(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0.0f, 0.0f, 0.0f /*3*/ };
	uParam0->f_6 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

float func_923(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_924(var uParam0)
{
	return *uParam0;
}

void func_925(var uParam0, Vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 /*3*/ };
}

void func_926(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_927(Vector3 vParam0, Vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5.0f);
	if (bParam6)
	{
		if (func_1083(vParam0 + Vector(0.2f, 0.0f, 0.0f)))
		{
			return false;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1.0f, 0.0f, 0.0f), &uVar1, false))
	{
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7.0f))
	{
		return false;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 10.0f))
			{
				return false;
			}
		}
		fVar2 = BUILTIN::VDIST(vParam0, vParam3);
		if (fVar2 > 40.0f && fVar2 < 80.0f)
		{
			return true;
		}
	}
	return false;
}

bool func_928(Vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, float fParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_1084(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, fParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_1085(&(iParam3->f_1), iParam5);
				if (!func_137(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_1086(iParam3->f_6));
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
						*bParam4 = 1;
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

bool func_929(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_930(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_1087(*uParam0, 0.0f, 0.0f, 0.0f))
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

bool func_931(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_932(int iParam0)
{
	switch (func_2())
	{
		case -1:
			return Global_1357549.f_1494 & iParam0 != 0;
	}
	return false;
}

Vector3 func_933(int iParam0)
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
			return func_1088();
		default:
			break;
	}
	return { 0.0f, 0.0f, 0.0f };
}

void func_934(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_88(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	iVar2 = func_1089(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_991(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	func_751(iParam0, iVar1);
	func_750(iParam0, iVar2);
	func_752(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = func_221();
	}
	func_199(iParam0, iParam1);
	func_502(iParam0, iVar4);
	func_503(iParam0, iVar5);
	iVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	func_718(iParam0, iVar6);
	func_804(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_652(iVar8, &iVar9))
		{
			iVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			func_746(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

int func_935(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(bParam0);
	if (!PED::_DOES_METAPED_OUTFIT_EXIST_FOR_PED_MODEL(joaat("META_HORSE_SADDLE_ONLY"), iVar0))
	{
		return 0;
	}
	iVar1 = joaat("META_HORSE_SADDLE_ONLY");
	if (PED::_IS_META_PED_OUTFIT_EQUIPPED(bParam0, iVar1))
	{
		return 1;
	}
	return 0;
}

void func_936(int iParam0)
{
	if (func_603() < iParam0)
	{
		func_1090(iParam0);
	}
}

bool func_937(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_666(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

bool func_938(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_666(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_939(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<12> /*96*/ sVar0;
	int iVar14;
	int iVar15;
	struct<17> /*136*/ sVar16;
	int iVar33;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_670(sParam0, &sVar0, 1, 0))
	{
		return -1;
	}
	if (func_940(&(sVar0.f_5), &sParam4) && sVar0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, iParam8))
	{
		return -1;
	}
	iVar14 = func_332(sVar0.f_4, sParam4, iParam8, 0);
	iVar15 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(sVar0.f_4, iParam8);
	if (iVar15 >= 0)
	{
		if (iVar14 >= iVar15)
		{
			return -1;
		}
		else if ((iVar14 + sVar0.f_11) > iVar15)
		{
			if (bParam11)
			{
				return -1;
			}
			sVar0.f_11 = (iVar15 - iVar14);
		}
	}
	sVar16 = { func_916(&sVar0) /*17*/ };
	sVar16.f_4 = { sParam4 /*4*/ };
	sVar16.f_11 = iParam8;
	sVar16.f_10 = bParam10;
	iVar33 = func_917(joaat("MOVEITEMS"), &sVar16, bParam9);
	if (iVar33 == -1)
	{
		return -1;
	}
	return iVar33;
}

bool func_940(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_941(struct<4> /*32*/ sParam0, struct<4> /*32*/ sParam4, int iParam8, bool bParam9)
{
	struct<11> /*88*/ sVar0;
	struct<11> /*88*/ sVar14;
	struct<17> /*136*/ sVar28;
	struct<17> /*136*/ sVar45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam4))
	{
		return -1;
	}
	if (func_940(&sParam0, &sParam4))
	{
		return -1;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	sVar14.f_9 = joaat("SLOTID_NONE");
	if (!func_670(sParam0, &sVar0, 1, 0) || !func_670(sParam4, &sVar14, 1, 0))
	{
		return -1;
	}
	if (func_940(&(sVar0.f_5), &(sVar14.f_5)) && sVar0.f_9 == sVar14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar0.f_4, sVar14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(sVar14.f_4, sVar0.f_9))
	{
		return -1;
	}
	sVar28 = { func_916(&sVar0) /*17*/ };
	sVar28.f_4 = { sVar14.f_5 /*4*/ };
	sVar28.f_11 = sVar14.f_9;
	sVar28.f_10 = sVar14.f_10 | iParam8;
	sVar45 = { func_916(&sVar14) /*17*/ };
	sVar45.f_4 = { sVar0.f_5 /*4*/ };
	sVar45.f_11 = sVar0.f_9;
	sVar45.f_10 = sVar0.f_10 | iParam8;
	iVar62 = -1;
	if (bParam9)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, joaat("BASKET"), joaat("MOVEITEMS")))
		{
			if (func_1077(iVar62, joaat("MOVEITEMS"), &sVar28) && func_1077(iVar62, joaat("MOVEITEMS"), &sVar45))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
				{
					func_1075(iVar62, 1);
				}
				else
				{
					NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
					return -1;
				}
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	else
	{
		iVar62 = func_917(joaat("MOVEITEMS"), &sVar28, 0);
		iVar62 = func_917(joaat("MOVEITEMS"), &sVar45, 0);
	}
	return iVar62;
}

void func_942(int iParam0, var uParam1, var uParam2)
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

bool func_943()
{
	return !Global_1911774;
}

void func_944(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_945(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_946(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_947(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

bool func_948(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_284(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_731(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_1091("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_953(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_1092(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_954(iVar1);
				return true;
			}
			iVar3++;
		}
		func_954(iVar1);
	}
	return false;
}

int func_949(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_950(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_951(&sVar0, func_905(0));
	}
	if (!func_952(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_954(iVar18);
	return iVar19;
}

struct<18> /*144*/ func_950(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_951(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_952(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_666(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_953(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_954(int iParam0)
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

struct<5> /*40*/ func_955(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_330(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_736(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_331(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_905(bParam1) /*4*/ };
			if (bParam2 && func_908(iParam0, 1))
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
			sVar0 = { func_1093(bParam1) /*4*/ };
			switch (func_1071(iParam0))
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
			if (func_1094(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_331(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_1094(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_331(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_670(sVar0, &sVar27, bParam1, 0))
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

bool func_956(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_1019(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_668(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_666(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_957(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iParam0, 3);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, true);
	}
	func_1095(iParam0, 0.0f, 0);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, false);
	}
}

bool func_958(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return true;
	}
	return false;
}

bool func_959(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return true;
	}
	return false;
}

bool func_960(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_PEPPERMINT"):
		case joaat("CONSUMABLE_SUGARCUBE"):
			return true;
	}
	return false;
}

int func_961(bool bParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(bParam0, func_986());
	return iVar0;
}

int func_962(int iParam0)
{
	return 20;
}

var func_963()
{
	return Global_1900383.f_421;
}

void func_964(int iParam0)
{
	Global_1900383.f_421 = iParam0;
}

int func_965(int iParam0)
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

int func_966()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_967()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_968()
{
	return 1;
}

int func_969()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_970()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_971()
{
	return 1;
}

int func_972()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_973()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_974()
{
	return 2;
}

int func_975()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_976()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_977()
{
	return 1;
}

int func_978()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_979()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_980()
{
	return 1;
}

int func_981()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_982()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_983()
{
	return 1;
}

void func_984(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_985(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iParam0 = func_87(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_207(iParam0);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_812(sVar2, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), joaat("HUD_TOASTS"), -961843223, -2, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_986()
{
	return 0;
}

void func_987(int iParam0, char* sParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;

	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = MISC::VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", sParam1);
	switch (iParam0)
	{
		case 0:
			iVar3 = joaat("TOAST_RPG_LEVEL_HEALTH_HORSE");
			break;
		case 1:
			iVar3 = joaat("TOAST_RPG_LEVEL_STAMINA_HORSE");
			break;
		default:
			return;
	}
	sVar4 = func_1097(func_1096(sParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_812(MISC::VAR_STRING(10, sVar0, sVar1), sVar2, iVar3, iVar5, -2, sVar7, sVar6, 0, 0, 1, 1);
}

int func_988(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_989());
	return iVar0;
}

int func_989()
{
	return 1;
}

void func_990(int iParam0)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar0[iVar5] = PED::_GET_PELT_FROM_HORSE(iParam0, iVar5);
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar6 = iVar0[iVar5];
		if (iVar6 == 0)
		{
		}
		else
		{
			PED::_CLEAR_PELT_FROM_HORSE(iParam0, iVar0[iVar5]);
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 3)
	{
		iVar4 = PED::_GET_PELT_FROM_HORSE(iParam0, iVar5);
		iVar7 = iVar4;
		iVar5++;
	}
}

int func_991(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 1;
	fVar1 = PED::_GET_PED_FACE_FEATURE(iParam0, 41611);
	if (fVar1 == 1.0f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_992(bool bParam0, int iParam1, bool bParam2)
{
	Vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) /*3*/ };
	fVar3 = func_187(iParam1, bParam0, 1, 1);
	if (bParam2)
	{
		fVar4 = func_190(bParam0);
		if (fVar4 >= 0.25f)
		{
			return false;
		}
		func_1095(bParam0, 0.25f, iParam1);
		return true;
	}
	else if (!PED::IS_PED_FLEEING(bParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar5);
		TASK::TASK_FLEE_COORD(0, vVar0, 3, (1 << 20), (100.0f - fVar3), -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar5);
		TASK::_TASK_PERFORM_SEQUENCE_2(bParam0, iVar5, 1.5f, 1.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iVar5);
	}
	FLOCK::_0xFF1E339CE40EAAAF(bParam0, 0);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(bParam0, 48, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(bParam0, 1);
	return true;
}

int func_993()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_994(int iParam0, int iParam1)
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_35))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 176, true);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	TASK::TASK_REVIVE_TARGET(Global_35, iParam0, iParam1);
	func_432(iParam1, 1, 0, joaat("REMOVE_REASON_DEFAULT"), 0);
	return true;
}

void func_995(int iParam0)
{
	Global_1900372.f_2 = iParam0;
}

void func_996(int iParam0)
{
	Global_1900372.f_1 = iParam0;
}

void func_997(int iParam0)
{
	Global_1900372.f_5 = iParam0;
}

int func_998(int iParam0)
{
	return 20;
}

void func_999(bool bParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0) || PED::IS_PED_INJURED(bParam0))
	{
	}
	fParam1 *= 0.01f;
	iVar1 = ENTITY::GET_ENTITY_HEALTH(bParam0);
	iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(bParam0, false);
	iVar0 = BUILTIN::FLOOR((fParam1 * (float)iVar2));
	iVar3 = iVar0;
	if ((iVar1 + iVar0) > iVar2)
	{
		iVar3 = (iVar2 - iVar1);
	}
	iVar4 = (iVar1 + iVar3);
	ENTITY::SET_ENTITY_HEALTH(bParam0, iVar4, 0);
}

void func_1000(int iParam0, int iParam1, int iParam2)
{
	func_888(iParam0, iParam1, (func_578(iParam0, iParam1) + iParam2));
}

void func_1001(bool bParam0, int iParam1, int iParam2)
{
	func_644(bParam0, iParam1, (func_643(bParam0, iParam1) + iParam2));
}

bool func_1002(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 19;
			break;
		case 1:
			*iParam1 = 18;
			break;
		default:
			return false;
	}
	return true;
}

float func_1003(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		case 1:
			return (fParam0 * 2.0f);
		case 2:
			return (fParam0 * 120.0f);
		case 3:
			return (fParam0 * 2880.0f);
		default:
			break;
	}
	return fParam0;
}

void func_1004(bool bParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (func_1002(iParam1, &iVar0))
	{
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(bParam0, iVar0, fParam2, false);
	}
}

void func_1005(bool bParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (func_641(iParam1, &iVar0))
	{
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(bParam0, iVar0, fParam2, false);
	}
}

void func_1006(int iParam0)
{
	if (func_1098(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}
	if (func_726(iParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA");
		return;
	}
}

int func_1007(int iParam0, int iParam1)
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

int func_1008(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_1099(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_1009(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_1100();
	if (iParam2 == 39)
	{
		sVar0 = { func_955(iParam0, 1, 0) /*5*/ };
		iParam2 = func_1007(func_1008(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_431(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_1101(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1012((1 << 15)) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_1102(func_1099(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1103(iParam2);
	func_1104(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_1105(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_1105(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_1106(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_1107(iParam0, iParam2, iParam1, func_2() != -1);
	if (bParam4)
	{
		func_1108(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_1108(&(Global_1946054.f_1378), 1, 0);
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
				func_1109(func_1099(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1010(bool bParam0, bool bParam1, bool bParam2)
{
	func_1110(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_1011(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_1111((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_1112(sVar0);
}

bool func_1012(int iParam0)
{
	return Global_1946054 & iParam0 != 0;
}

void func_1013()
{
	func_1113(&(Global_1946054.f_2776));
	func_1114((1 << 15));
	func_1109(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_1014(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_1007(iParam0, 1);
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

void func_1015(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_1115(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_1116(sVar0);
}

void func_1016(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_1116(sVar0);
}

void func_1017()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_1117(Global_35, &iVar0);
	sVar30 = { func_330(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_1118(0);
	func_1119(7);
	func_1120(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_1121() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_1120(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_1120(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_1122(Global_35, &iVar0);
}

void func_1018(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_1092(iParam0))
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

bool func_1019(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_1020()
{
	return Global_40.f_11095.f_35;
}

void func_1021(int iParam0, bool bParam1)
{
	Global_1954819.f_1 = iParam0;
	if (bParam1)
	{
		func_1123(bParam1);
	}
}

void func_1022(int iParam0)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HONORMETERVALUE"), iParam0);
}

char* func_1023(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_1024(int iParam0)
{
	Vector3 vVar0;

	if (!func_864(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vVar0);
		return true;
	}
	return false;
}

bool func_1025(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_864(23, &sVar0))
	{
		return false;
	}
	sVar0.f_2 = 1781729525;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
	{
		sVar0.f_2 = -57097983;
		sVar0.f_3 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(sVar0.f_1), &sVar0))
		{
			sVar0.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam1 = uVar5;
			sVar0.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_1026(int iParam0)
{
	return iParam0;
}

int func_1027()
{
	int iVar0;

	iVar0 = func_825();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
		default:
			break;
	}
	return joaat("SHOP_HONOR_AMORAL");
}

bool func_1028(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1029(int iParam0, int iParam1, int iParam2)
{
	if (!func_1028(iParam0))
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

bool func_1030(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> /*296*/ sVar0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_284(iParam0, 0))
	{
		return false;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &sVar0))
	{
		return false;
	}
	*uParam3 = sVar0.f_35;
	iVar47 = 0;
	while (iVar47 < sVar0.f_35)
	{
		(*uParam2)[iVar47] = sVar0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_1031(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return Global_1914319.f_15614[iParam0] & iParam1 != 0;
}

bool func_1032(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_1033(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_23118[iParam0 /*11*/] & iParam1 != 0;
	}
	return Global_1058888.f_40545[iParam0 /*11*/] & iParam1 != 0;
}

int func_1034(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

bool func_1035(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_1036(int iParam0)
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

void func_1037(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

void func_1038(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_1039(int iParam0)
{
	if (func_2() != -1)
	{
		return false;
	}
	if (!func_847(iParam0))
	{
		return false;
	}
	return func_1124(Global_1347702[iParam0 /*49*/].f_15);
}

int func_1040(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_864(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_1041(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_1125() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_1126(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_1127(), 12);
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
			else if (func_1128() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_1129(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_1128(), 30);
			}
			break;
		case -1531394072:
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
		case 1995362678:
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_1130(), 13);
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
			else if (func_1131() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_1132(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_1131(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1040(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1042(int iParam0, int iParam1, int iParam2)
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

bool func_1043(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_1044(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_1045(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_1133(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_733(iVar2, 1, 0) || func_1135(func_1134(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1136(func_1133(iVar0))), func_1136(func_1133(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1128() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1129() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1137(iVar0)), func_1137(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_858(iParam3, func_1138(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_855(iVar2) - iParam7) >= func_1040(iParam3, func_1139(iVar0));
				}
				else
				{
					bVar1 = func_855(iVar2) >= func_1040(iParam3, func_1139(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_855(iVar2) + iParam7) >= func_1040(iParam3, func_1139(iVar0));
			}
			else
			{
				bVar1 = func_855(iVar2) >= func_1040(iParam3, func_1139(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1140(iVar2)), func_1140(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_799(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, 1995362678, 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1141(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_1141(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1131() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1142(iVar0)), func_1142(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1132() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1142(iVar0)), func_1142(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1142(iVar0)), func_1142(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_858(iParam3, func_1138(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_855(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1143(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1143(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_1144(iVar2)), func_1144(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1046(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1130() >= 13)
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

bool func_1047(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_269(func_268(0)) && ((func_167(0) == 1 || func_167(0) == 8) || func_167(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == 1995362678) || iParam2 == joaat("ROCK_CARVINGS"))
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

bool func_1048(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1143(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1143(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1143(iVar0))
		{
			*iParam2++;
		}
		if (func_1143(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_1143(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1143(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1143(iVar0))
		{
			*iParam2++;
		}
		if (func_1143(iVar1))
		{
			*iParam2++;
		}
		if (func_1143(iVar0) && func_1143(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_1143(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1143(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1143(iVar0))
		{
			*iParam2++;
		}
		if (func_1143(iVar1))
		{
			*iParam2++;
		}
		if (func_1143(iVar2))
		{
			*iParam2++;
		}
		if ((func_1143(iVar0) && func_1143(iVar1)) && func_1143(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1143(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1143(iParam1))
			{
				*iParam2 -= iParam4;
			}
		}
		if (func_1143(iVar0))
		{
			*iParam2++;
		}
		if (func_1143(iVar1))
		{
			*iParam2++;
		}
		if (func_1143(iVar2))
		{
			*iParam2++;
		}
		if (func_1143(iVar3))
		{
			*iParam2++;
		}
		if (((func_1143(iVar0) && func_1143(iVar1)) && func_1143(iVar2)) && func_1143(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1049(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_94() && (func_1039(38) || func_850(38)))
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
			if (func_94() && (func_1039(39) || func_850(39)))
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
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_94() && (func_1039(49) || func_850(49)))
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
		if (func_94() && (func_1039(38) || func_850(38)))
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
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_812(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_1136(func_1146(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_94() && (func_1039(39) || func_850(39)))
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
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_94() && (func_1039(49) || func_850(49)))
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
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1145(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

bool func_1050(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_1051(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("ST_DOCTOR");
		case 3:
			return joaat("ST_GENERAL");
		case 4:
			return joaat("ST_FENCE");
		case 6:
			return joaat("ST_GUNSMITH");
		case 7:
			return joaat("ST_TAILOR");
		case 8:
			return joaat("ST_BARBER");
		case 1:
			return joaat("ST_TRAIN_STATION");
		case 2:
			return joaat("ST_POST_OFFICE");
		case 9:
			return joaat("ST_HORSE_SHOP");
		case 10:
			return joaat("ST_BUTCHER");
		case 11:
			return joaat("ST_DYNAMIC");
		case 26:
			return joaat("ST_QUARTERMASTER");
		case 27:
			return joaat("ST_HORSE_TRAINER");
		case 28:
			return joaat("ST_BLACKSMITH");
		case 29:
			return joaat("ST_BOUNTYHUNTING_MP_RETURN");
		case 30:
			return joaat("ST_COACH");
		case 31:
			return joaat("ST_HORSE_FENCE_MP");
		case 5:
			return joaat("ST_HORSE_FENCE");
		case 15:
			return joaat("ST_BANK");
		case 17:
			return joaat("ST_BAIT");
		case 33:
			return joaat("ST_BARTENDER");
		case 12:
			return joaat("ST_MARKET");
		case 13:
			return joaat("ST_FRENCH_MARKET");
		case 14:
			return -1227686818;
		case 18:
			return joaat("ST_TRAPPER");
		case 19:
			return joaat("ST_PEARSON");
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
		case 20:
			return joaat("ST_HOTEL");
		case 32:
			return joaat("ST_WILDERNESS_SUPPLIES");
		case 34:
			return joaat("ST_HANDHELD");
		case 23:
			return joaat("ST_WEAPON_MOD_STORE");
		case 24:
			return joaat("ST_CLOTHING");
		case 25:
			return joaat("ST_CAMP_SHAVING");
		case 21:
			return joaat("ST_PHOTO_STUDIO");
		default:
			break;
	}
	return 0;
}

struct<4> /*32*/ func_1052(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_871(iParam0) /*5*/ };
	return func_872(iParam0, iParam1, sVar0, sVar0.f_4);
}

int func_1053(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> /*96*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return 0;
	}
	if (func_1019(iParam1))
	{
		return 0;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_1147(iParam0, *uParam2, &sVar0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = sVar0.f_11;
	}
	else if (iParam3 > sVar0.f_11)
	{
		iParam3 = sVar0.f_11;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, uParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_1054(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_1055(int iParam0)
{
	if (!func_801(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_1056(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

int func_1057(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

float func_1058()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

void func_1059(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_1060(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

bool func_1061(var uParam0)
{
	return func_884(*uParam0, 2);
}

bool func_1062(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1063()
{
	return Global_1109000.f_245;
}

void func_1064(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_641(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_1148(iParam1);
	sVar2 = func_1149(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		if (iVar3 <= 20)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iParam0, sVar2, true, -1);
		}
		else
		{
			PED::_REMOVE_PED_BLACKBOARD_BOOL(iParam0, sVar2);
		}
	}
}

float func_1065(float fParam0, float fParam1, float fParam2)
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

float func_1066(int iParam0)
{
	var uVar0;

	uVar0 = Global_1900383.f_393.f_8[iParam0];
	return uVar0;
}

int func_1067()
{
	return Global_40.f_4283;
}

float func_1068()
{
	int iVar0;

	iVar0 = func_170();
	switch (iVar0)
	{
		case 79:
			return 50.0f;
		case 58:
			return 50.0f;
		case 71:
			return 50.0f;
		case 43:
			return 50.0f;
		case 4:
			return 50.0f;
		case 9:
			return 50.0f;
		case 22:
			return 120.0f;
		case 98:
			return 60.0f;
		case 37:
			return 120.0f;
	}
	return 25.0f;
}

bool func_1069(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_1150(vParam0, vParam3) <= (fParam6 * fParam6);
}

bool func_1070(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_666(0);
	*uParam1 = { func_331(iParam0, func_905(0), iParam3, 0) /*4*/ };
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

int func_1071(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_1072(int iParam0, int iParam1)
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
			return 1635590003;
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
			return 1158805436;
		case 41:
			return -559473670;
		case 42:
			return -797147251;
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
			return 892816668;
		case 350:
			return -1994943603;
		case 351:
			return 603133554;
		case 352:
			return -30160144;
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
			return -1410671073;
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
			return 61132362;
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return 1136146715;
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
			return 1471419228;
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return 1911050315;
		case 462:
			return -1343525599;
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return 526744654;
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return 853355463;
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return -585289073;
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
			return -2145069367;
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return -2117214398;
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
			return 302954672;
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
			return 293062146;
		case 532:
			return 95360094;
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
			return 1670843243;
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
			return -832337898;
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
			return 1380479304;
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

int func_1073(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

bool func_1074(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_1075(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1223212)
	{
		if (Global_1223212.f_1[iVar0 /*9*/] == iParam0)
		{
			if (Global_1223212.f_1[iVar0 /*9*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1223212.f_1[iVar0 /*9*/].f_1 = iParam1;
			}
			return;
		}
		iVar0++;
	}
	func_1151(iParam0, iParam1);
}

bool func_1076(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_1077(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

bool func_1078(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_666(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_670(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

int func_1079(int iParam0)
{
	int iVar0;

	if (!func_284(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1071(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_1080(int iParam0)
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

void func_1081(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1152(iParam0, iParam1))
		{
			if (func_1153(iParam0, iParam1))
			{
				if (func_1154(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1155(iParam0);
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

void func_1082(int iParam0, int iParam1, bool bParam2)
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

bool func_1083(Vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1084(var uParam0, int iParam1, Vector3 vParam2, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_137(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, fParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 90.0f);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 180.0f);
			break;
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
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, fParam6);
			if (fParam10 != 0.0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
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
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, (1 << 14));
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((80.0f - 40.0f) / 2.0f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0.0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6.0f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18.0f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55.0f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15.0f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40.0f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80.0f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150.0f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150.0f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20.0f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100.0f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80.0f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6.0f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45.0f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25.0f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20.0f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140.0f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125.0f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10.0f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60.0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80.0f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(10.0f, 40.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(40.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(50.0f, 90.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 10.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 30.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(30.0f, 60.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(50.0f, 80.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(0.0f, 10.0f, 1.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(5.0f, 15.0f, 1.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(60.0f, 120.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(100.0f, 130.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 20.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 10.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(10.0f, 35.0f, 5.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(25.0f, 50.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 20.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 40.0f);
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(50.0f, 80.0f, 10.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(75.0f, 95.0f, 5.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 15.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_1156(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_1156(95.0f, 90.0f, 80.0f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_1156(125.0f, 115.0f, 100.0f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5.0f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 10.0f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1.0f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5.0f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5.0f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15.0f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15.0f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35.0f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1.0f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65.0f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35.0f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160.0f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65.0f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_1085(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 25.0f);
			TASK::_0x450080DDEDB91258(*uParam0, 25.0f);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 46:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 40.0f);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
			TASK::_0x19BC99C678FBA139(*uParam0, 2, 1);
		case 44:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 47:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 28, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
	}
}

Vector3 func_1086(Vector3 vParam0)
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

bool func_1087(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_1088()
{
	if (func_95(70))
	{
		return { -1634.252f, -1358.577f, 83.9077f };
	}
	if (func_95(73))
	{
		return { -1665.419f, -1346.258f, 84.11175f };
	}
	return { -1641.1f, -1359.979f, 83.4932f };
}

int func_1089(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("BREED_MANGY_BACKUP");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("BREED_AMERICANPAINT_OVERO");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("BREED_AMERICANPAINT_TOBIANO");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("BREED_AMERICANPAINT_SPLASHEDWHITE");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("BREED_AMERICANPAINT_GREYOVERO");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("BREED_AMERICANSTANDARDBRED_BLACK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("BREED_ANDALUSIAN_DARKBAY");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("BREED_ANDALUSIAN_ROSEGRAY");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("BREED_ANDALUSIAN_PERLINO");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("BREED_APPALOOSA_BLANKET");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("BREED_APPALOOSA_FEWSPOTTED_PC");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("BREED_ARABIAN_REDCHESTNUT_PC");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("BREED_ARABIAN_WARPEDBRINDLE_PC");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("BREED_MORGAN_LIVERCHESTNUT_PC");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("BREED_THOROUGHBRED_BLACKCHESTNUT");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("BREED_TURKOMAN_SILVER");
		case joaat("A_C_DONKEY_01"):
			return joaat("BREED_DONKEY");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("BREED_MULE");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("BREED_MULE_PAINTED");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return joaat("BREED_SHIRE_RAVENBLACK");
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return joaat("BREED_BUELL_WARVETS");
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return joaat("BREED_JOHN_ENDLESSSUMMER");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("BREED_MURFREEBROOD_MANGE_03");
		case joaat("A_C_HORSE_WINTER02_01"):
			return joaat("BREED_WINTER02_01");
		case joaat("A_C_HORSE_EAGLEFLIES"):
			return joaat("BREED_EAGLEFLIES");
		case joaat("A_C_HORSE_GANG_BILL"):
			return joaat("BREED_GANG_BILL");
		case joaat("A_C_HORSE_GANG_CHARLES"):
			return joaat("BREED_GANG_CHARLES");
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return joaat("BREED_GANG_CHARLES_ENDLESSSUMMER");
		case joaat("A_C_HORSE_GANG_DUTCH"):
			return joaat("BREED_GANG_DUTCH");
		case joaat("A_C_HORSE_GANG_HOSEA"):
			return joaat("BREED_GANG_HOSEA");
		case joaat("A_C_HORSE_GANG_JAVIER"):
			return joaat("BREED_GANG_JAVIER");
		case joaat("A_C_HORSE_GANG_JOHN"):
			return joaat("BREED_GANG_JOHN");
		case joaat("A_C_HORSE_GANG_KAREN"):
			return joaat("BREED_GANG_KAREN");
		case joaat("A_C_HORSE_GANG_KIERAN"):
			return joaat("BREED_GANG_KIERAN");
		case joaat("A_C_HORSE_GANG_LENNY"):
			return joaat("BREED_GANG_LENNY");
		case joaat("A_C_HORSE_GANG_MICAH"):
			return joaat("BREED_GANG_MICAH");
		case joaat("A_C_HORSE_GANG_SADIE"):
			return joaat("BREED_GANG_SADIE");
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
			return joaat("BREED_GANG_SADIE_ENDLESSSUMMER");
		case joaat("A_C_HORSE_GANG_SEAN"):
			return joaat("BREED_GANG_SEAN");
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
			return joaat("BREED_GANG_TRELAWNEY");
		case joaat("A_C_HORSE_GANG_UNCLE"):
			return joaat("BREED_GANG_UNCLE");
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
			return joaat("BREED_GANG_UNCLE_ENDLESSSUMMER");
		default:
			break;
	}
	return 0;
}

void func_1090(int iParam0)
{
	Global_40.f_1095.f_3135 = iParam0;
}

bool func_1091(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_666(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1092(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

struct<4> /*32*/ func_1093(bool bParam0)
{
	int iVar0;

	iVar0 = func_666(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_331(joaat("EMOTE_ITEM"), func_330(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_331(joaat("EMOTE_ITEM"), func_330(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_1094(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1071(iParam0);
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

void func_1095(bool bParam0, float fParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(bParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(bParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(bParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(bParam0))
	{
		return;
	}
	PED::_SET_PED_MOTIVATION(bParam0, 3, fParam1, iParam2);
}

struct<4> /*32*/ func_1096(int iParam0)
{
	char cVar0[32];

	strcpy_s(&cVar0, 32, "TOAST_RPG_LEVEL_");
	StringIntConCat(&cVar0, iParam0, 32);
	strcat_s(&cVar0, 32, "_");
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

char* func_1097(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_1098(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"):
			return true;
	}
	return false;
}

int func_1099(int iParam0, int iParam1)
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

void func_1100()
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

int func_1101(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_431(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_431(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_431(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_431(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_431(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_431(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

void func_1102(int iParam0)
{
	func_1109(iParam0, 8, 6);
}

void func_1103(int iParam0)
{
	func_1157(&(Global_1946054.f_2589), iParam0);
}

void func_1104(int iParam0, int iParam1)
{
	func_1158(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_1105(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

void func_1106(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_1071(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1159(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1104(iVar1, iVar3);
		}
	}
	if (func_813(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_1159(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_1104(iVar1, iVar3);
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
						func_1104(iVar1, iVar3);
					}
				}
			}
			func_1160(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_1160(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1104(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_1160(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_1104(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_1104(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_1160(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_1160(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1104(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_1160(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1104(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1104(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_1071(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1104(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1161(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_1071(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1104(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_431(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1104(iVar1, iVar3);
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
						func_1104(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_1161(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_431(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_1104(iVar1, iVar3);
					}
				}
			}
			switch (func_1071(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_1071(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1104(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_1071(uParam0->f_1[iVar1 /*3*/]) || func_431(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_1104(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_1107(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_1162(0);
	if (iParam2 != 0 && func_1163(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_1164(iParam0, func_1099(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_1108(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_2() != -1;
	iVar7 = func_1162(0);
	if (func_1012((1 << 15)))
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
			iVar5 = func_1099(iVar0, 1);
			if (func_1165(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_1165(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_1166(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_1167(uParam0);
				if (iVar3 > 0)
				{
					if (!func_1012((1 << 19)))
					{
						func_1111((1 << 19));
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
							iVar5 = func_1099(iVar0, 1);
							if (func_1165(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_1165(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_1166(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_1104(iVar0, iParam2);
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
					func_1114((1 << 19));
				}
			}
		}
	}
}

void func_1109(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_1007(iParam0, 1) /*11*/].f_10 -= Global_1946054.f_57[func_1007(iParam0, 1) /*11*/].f_10 & iParam1;
}

void func_1110(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_1168(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_2() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_1169(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_1170(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_1170(Global_40.f_7729);
				Global_1946054.f_1378 = func_1170(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_1171(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_1172(0, 1);
	}
}

void func_1111(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_1112(struct<4> /*32*/ sParam0)
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
			if (func_1173(sParam0.f_0))
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
			func_1174(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_1111(8);
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
			if (func_1173(sParam0.f_0))
			{
				return;
			}
			func_1174(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_1111(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1016(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_1113(var uParam0)
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

void func_1114(int iParam0)
{
	Global_1946054 -= Global_1946054 & iParam0;
}

bool func_1115(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

void func_1116(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_1173(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_1173(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_1174(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_1111(8);
}

void func_1117(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_1092(iVar31))
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

void func_1118(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_284(iVar1, 0))
		{
			func_1175(iVar1, 0, bParam0);
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

void func_1119(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_2() == -1)
	{
		func_1176(352481484);
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
		if (func_1071(iVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_1177(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_1178(iVar2, 0))
		{
			func_1179(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_1120(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_1180(iParam0))
	{
		return;
	}
	iVar0 = func_1071(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_1181(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_1181(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_1181(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_1181(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_1181(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_1181(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_1182(0))
	{
		func_1183(iParam0, 1);
		if (func_1121() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_1183(func_1182(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_1183(func_1182(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_1184();
	if (func_1185(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_666(0), iParam0, 0);
	}
	func_1179(iParam0, bParam3);
	if (bParam2)
	{
		func_1172(0, 0);
	}
}

int func_1121()
{
	return Global_1946054.f_1;
}

void func_1122(int iParam0, int iParam1)
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
				if (func_1186((*iParam1)[iVar0]))
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

void func_1123(bool bParam0)
{
	func_1187(bParam0);
	Global_1954819.f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	}
}

bool func_1124(int iParam0)
{
	int iVar0;

	iVar0 = func_440(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_1125()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_733(func_1188(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1126()
{
	return func_1189(Global_40.f_12019);
}

int func_1127()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1188(iVar1);
		if (func_733(iVar2, 1, 0) || func_1135(func_1134(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1128()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1190(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1129()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1191(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1130()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_799(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1131()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

int func_1132()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_1133(int iParam0)
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

int func_1134(int iParam0)
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

bool func_1135(int iParam0)
{
	return Global_40.f_12019 & iParam0 != 0;
}

char* func_1136(int iParam0)
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

char* func_1137(int iParam0)
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

int func_1138(int iParam0)
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

int func_1139(int iParam0)
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

char* func_1140(int iParam0)
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

char* func_1141(int iParam0)
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

char* func_1142(int iParam0)
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

bool func_1143(int iParam0)
{
	if (func_1192(iParam0) && func_733(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_1193(iParam0) & func_1194(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1144(int iParam0)
{
	if (!func_284(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_947(iParam0));
}

int func_1145(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

int func_1146(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_1147(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, uParam5, !bParam6))
	{
		return false;
	}
	return true;
}

char* func_1148(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_1149(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

float func_1150(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_1151(int iParam0, int iParam1)
{
	int iVar0;
	struct<9> /*72*/ sVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1223212 < 20)
	{
		Global_1223212++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223212.f_1[iVar0 /*9*/] = { Global_1223212.f_1[iVar0 + 1 /*9*/] /*9*/ };
			iVar0++;
		}
	}
	sVar1 = -1;
	sVar1.f_0 = iParam0;
	sVar1.f_1 = iParam1;
	Global_1223212.f_1[(Global_1223212 - 1) /*9*/] = { sVar1 /*9*/ };
}

bool func_1152(int iParam0, int iParam1)
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

bool func_1153(int iParam0, int iParam1)
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

bool func_1154(int iParam0, int iParam1)
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
	if (!func_1152(iParam0, iVar0))
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

void func_1155(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

float func_1156(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 += (fParam2 * (float)iParam3);
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

void func_1157(var uParam0, int iParam1)
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
			if ((func_1195(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_1195(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_1196(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_1158(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_1197(uParam0, 1))
	{
		func_1198(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

bool func_1159(int iParam0, int iParam1)
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1 != 0;
}

void func_1160(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_1104(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_1104(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_1104(iVar2, iVar0);
		}
	}
}

bool func_1161(int iParam0)
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

int func_1162(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_1121();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1163(int iParam0, int iParam1, int iParam2, bool bParam3)
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

bool func_1164(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

bool func_1165(int iParam0, int iParam1)
{
	return Global_1946054.f_57[func_1007(iParam0, 1) /*11*/].f_10 & iParam1 != 0;
}

int func_1166(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_1007(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1012((1 << 19)))
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

int func_1167(var uParam0)
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

void func_1168(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_2() == -1)
	{
		func_1199(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_1200(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_1169(int iParam0, int iParam1)
{
	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return Global_26796.f_26[iParam1 /*120*/] & iParam0 != 0;
		}
		return false;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return Global_36638.f_45.f_350.f_26[iParam1 /*120*/] & iParam0 != 0;
	}
	return false;
}

int func_1170(int iParam0)
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

void func_1171(int iParam0, bool bParam1, int iParam2)
{
	func_1201(&(Global_1946054.f_1378), iParam0);
	func_1202(2, iParam0, 6);
	if (bParam1)
	{
		func_1172(0, 1);
	}
}

void func_1172(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1203(0);
	}
	if (bParam0)
	{
		func_1111(8);
		func_1111((1 << 9));
	}
	else
	{
		func_1111(8);
		func_1111(16);
	}
}

bool func_1173(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_1174(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_1175(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_1071(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_1204(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_1204(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_1204(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_1204(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_1204(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_1204(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1184();
	}
	if (bParam1)
	{
		func_1172(0, 0);
	}
}

void func_1176(int iParam0)
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
	sVar2 = { func_950(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_952(&sVar2, &iVar0, &iVar1, 0))
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
		func_954(iVar0);
	}
}

void func_1177(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_1205(iParam2, *uParam0);
	func_1206(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_1178(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_955(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_331(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_332(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_666(0), &sVar5, bParam1);
	return true;
}

void func_1179(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_955(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_331(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_332(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_666(0), &sVar5, bParam1);
}

bool func_1180(int iParam0)
{
	if (func_2() == -1)
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

int func_1181(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_1207(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_1178(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_1071(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_1177(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_1182(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1121();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_1183(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_955(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_331(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_332(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_666(0), &sVar5);
	return 1;
}

void func_1184()
{
	int iVar0;

	if (func_2() == -1)
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

bool func_1185(int iParam0)
{
	return func_1209(func_1208(iParam0));
}

bool func_1186(int iParam0)
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

void func_1187(bool bParam0)
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HONORMETERVISIBLE"), bParam0);
}

int func_1188(int iParam0)
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

int func_1189(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 &= (iParam0 - 1);
		iVar0++;
	}
	return iVar0;
}

bool func_1190(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

bool func_1191(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_1192(int iParam0)
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

int func_1193(int iParam0)
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

int func_1194(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_1210(&iVar0, 0, iVar95, &sVar1) && !func_1210(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_1211(iVar0, &sVar1);
			if (func_284(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

bool func_1195(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_1196(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_1197(var uParam0, int iParam1)
{
	return uParam0->f_1 & iParam1 != 0;
}

void func_1198(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

void func_1199(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_1200(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
}

void func_1201(var uParam0, int iParam1)
{
	int iVar0;

	if (func_2() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_1199(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_1200(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_1202(int iParam0, int iParam1, int iParam2)
{
	if (func_2() == -1)
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

void func_1203(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

int func_1204(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_1207(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_1071(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_1212(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_1071(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_1212(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_1178(iParam0, 1);
	return 1;
}

void func_1205(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_1206(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_1213(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_1007(func_1214(iParam1), 1);
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
		func_1215(uParam0);
	}
}

bool func_1207(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_1208(int iParam0)
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

bool func_1209(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_6 & iParam0 != 0;
}

bool func_1210(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_71(iParam1) && !func_380(iParam1))
	{
		bVar0 = func_88(iParam1);
	}
	else
	{
		return false;
	}
	func_272(uParam3);
	iVar5 = func_273(iParam2);
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

void func_1211(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_276(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_277(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_1212(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1216(iParam1);
	func_1217(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_1218(&(uParam0->f_26), iVar1);
		if (func_1219(uParam0->f_26, &iVar0))
		{
			func_1220(iVar0, iVar1);
		}
	}
}

void func_1213(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_1221(&(uParam0->f_3));
}

int func_1214(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_955(iParam0, 1, 0) /*5*/ };
	return func_1008(sVar0.f_4);
}

void func_1215(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_1222(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

var func_1216(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_1217(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_1218(var uParam0, int iParam1)
{
	*uParam0--;
	func_1213(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_1219(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_1220(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_1221(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_1222(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_1223(func_1121());
	if (*uParam0)
	{
		func_1221(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, iParam1, 0, func_2() != -1, iParam2);
	*uParam0 = 1;
}

int func_1223(int iParam0)
{
	if (func_2() == -1)
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

