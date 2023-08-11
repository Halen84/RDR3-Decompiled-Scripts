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
	int iScriptParam_0 = 0;
#pragma endregion

void __SCRIPT()
{
	struct<4> /*32*/ sVar0;
	struct<4> /*32*/ sVar4;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	sVar4.f_13 = -1;
	sVar4.f_24 = -1;
	sVar4.f_25 = -1;
	sVar4.f_26 = -1;
	sVar4.f_27 = -1;
	sVar4.f_28 = 1;
	func_1(&sVar4);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_2(&sVar4);
	}
	while (true)
	{
		while (UIEVENTS::EVENTS_UI_IS_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iScriptParam_0, &sVar0))
			{
				func_3(&sVar0, &sVar4);
				switch (sVar0.f_2)
				{
					case joaat("ZONE"):
						sVar4.f_4 = { sVar0 /*4*/ };
						sVar4 = { sVar0 /*4*/ };
						switch (sVar0.f_0)
						{
							case joaat("ITEM_FOCUSED"):
								func_4(&sVar4);
								break;
							case joaat("ITEM_UNFOCUSED"):
								sVar4.f_24 = -1;
								sVar4.f_25 = -1;
								func_5(&sVar4);
								break;
						}
						sVar4.f_28 = 1;
						break;
					case joaat("BLIP"):
						sVar4 = { sVar0 /*4*/ };
						switch (sVar0.f_0)
						{
							case joaat("ITEM_FOCUSED"):
								func_6(&sVar4);
								break;
							case joaat("ITEM_UNFOCUSED"):
								func_7(&sVar4);
								sVar4 = { sVar4.f_4 /*4*/ };
								func_4(&sVar4);
								break;
							case joaat("ITEM_SELECTED"):
								func_8(&sVar4);
								break;
						}
						break;
				}
				UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
			}
		}
		func_9(&sVar4);
		func_10(&sVar4);
		BUILTIN::WAIT(0);
	}
	func_2(&sVar4);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	struct<30> /*240*/ sVar0;

	sVar0.f_13 = -1;
	sVar0.f_24 = -1;
	sVar0.f_25 = -1;
	sVar0.f_26 = -1;
	sVar0.f_27 = -1;
	sVar0.f_28 = 1;
	*uParam0 = { sVar0 /*30*/ };
	uParam0->f_14 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", false);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::TEXT_BLOCK_REQUEST("FMMC");
	if (TXD::DOES_STREAMED_TXD_EXIST(joaat("MAP_CARD_STRANGERS")))
	{
		TXD::REQUEST_STREAMED_TXD(joaat("MAP_CARD_STRANGERS"), false);
	}
	uParam0->f_28 = 1;
}

void func_2(var uParam0)
{
	func_11(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(int iParam0, var uParam1)
{
	switch (iParam0->f_2)
	{
		case joaat("DISTRICT"):
			switch (*iParam0)
			{
				case joaat("ITEM_FOCUSED"):
					uParam1->f_24 = func_13(func_12(iParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
		case joaat("TEXT_WRITTEN"):
			switch (*iParam0)
			{
				case joaat("ITEM_FOCUSED"):
					uParam1->f_26 = func_12(iParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
		case joaat("TEXT_PRINTED"):
			switch (*iParam0)
			{
				case joaat("ITEM_FOCUSED"):
					uParam1->f_27 = func_12(iParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
		case joaat("TOWN"):
			switch (*iParam0)
			{
				case joaat("ITEM_FOCUSED"):
					uParam1->f_25 = func_14(func_12(iParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
	}
}

int func_4(var uParam0)
{
	uParam0->f_13 = uParam0->f_1;
	switch (func_15(uParam0))
	{
		case 2:
			uParam0->f_16 = func_16(uParam0->f_13);
			break;
		case 0:
			uParam0->f_16 = func_17(uParam0->f_14);
			break;
		case 1:
			uParam0->f_16 = func_18(uParam0->f_15);
			break;
		default:
			func_19(uParam0);
			return 0;
	}
	func_19(uParam0);
	return 1;
}

void func_5(var uParam0)
{
	func_19(uParam0);
}

int func_6(var uParam0)
{
	uParam0->f_19 = uParam0->f_1;
	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}
	switch (uParam0->f_17)
	{
		case 63:
			if (func_21(uParam0->f_19, &(uParam0->f_22)))
			{
				uParam0->f_20 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1835011[uParam0->f_22 /*74*/].f_8)));
			}
			else
			{
				uParam0->f_20 = joaat("MBLIP_SHOP_GENERAL");
			}
			break;
		case 64:
			if (func_22(uParam0->f_19, &(uParam0->f_23)))
			{
				uParam0->f_20 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1347702[uParam0->f_23 /*49*/].f_3)));
			}
			else
			{
				uParam0->f_20 = -1;
			}
			break;
		case 62:
			switch (func_15(uParam0))
			{
				case 0:
					uParam0->f_16 = func_17(uParam0->f_14);
					uParam0->f_20 = func_23(uParam0->f_13);
					if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20))
					{
						uParam0->f_20 = func_24();
					}
					break;
			}
			break;
		default:
			uParam0->f_20 = func_25(uParam0->f_17, uParam0->f_19);
			break;
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		TXD::REQUEST_STREAMED_TXD(uParam0->f_20, true);
		uParam0->f_21 = 1;
		return 1;
	}
	return 0;
}

void func_7(var uParam0)
{
	struct<2> /*16*/ sVar0;

	func_26(uParam0);
	uParam0->f_17 = { sVar0 /*2*/ };
	uParam0->f_17 = 0;
	uParam0->f_19 = 0;
	uParam0->f_22 = -1;
	uParam0->f_23 = -1;
	func_27(uParam0);
}

int func_8(var uParam0)
{
	if (uParam0->f_19 != uParam0->f_1)
	{
		return 0;
	}
	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		if (!uParam0->f_21)
		{
			uParam0->f_29 = 0;
			UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP"), joaat("SHOW_INFO"));
			return 1;
		}
	}
	return 0;
}

void func_9(var uParam0)
{
	if (uParam0->f_28)
	{
		func_28(uParam0);
		uParam0->f_28 = 0;
	}
}

void func_10(var uParam0)
{
	if (func_29(uParam0))
	{
		switch (uParam0->f_17)
		{
			case 63:
				func_30(uParam0->f_19, uParam0);
				break;
			case 64:
				func_31(uParam0->f_19, uParam0);
				break;
			case 62:
				func_32(uParam0->f_13, uParam0);
				break;
			case 82:
				func_33(uParam0->f_19, uParam0);
				break;
			case 83:
				func_34(uParam0->f_19, uParam0);
				break;
			case 84:
				func_35(uParam0->f_19, uParam0);
				break;
			case 85:
				func_36(uParam0->f_19, uParam0);
				break;
			case 86:
				func_37(uParam0->f_17, uParam0);
				break;
			default:
				func_37(uParam0->f_17, uParam0);
				break;
		}
	}
}

void func_11(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
}

int func_12(int iParam0)
{
	if (iParam0->f_1 != 0)
	{
		return iParam0->f_1;
	}
	return -1;
}

int func_13(int iParam0)
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

int func_14(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ANNESBURG"):
			return 78;
		case joaat("ARMADILLO"):
			return 120;
		case joaat("BEECHERSHOPE"):
			return 37;
		case joaat("BLACKWATER"):
			return 38;
		case joaat("BRAITHWAITE"):
			return 93;
		case joaat("BUTCHER"):
			return 82;
		case joaat("CALIGA"):
			return 95;
		case joaat("CORNWALL"):
			return 65;
		case joaat("EMERALD"):
			return 69;
		case joaat("LAGRAS"):
			return 3;
		case joaat("MANZANITA"):
			return 110;
		case joaat("RHODES"):
			return 105;
		case joaat("STDENIS"):
			return 5;
		case joaat("SISKA"):
			return 32;
		case joaat("STRAWBERRY"):
			return 26;
		case joaat("TUMBLEWEED"):
			return 115;
		case joaat("VALENTINE"):
			return 76;
		case joaat("VANHORN"):
			return 92;
		case joaat("WALLACE"):
			return 35;
		case joaat("WAPITI"):
			return 56;
		case joaat("AGUASDULCESVILLA"):
		case joaat("AGUASDULCESRUINS"):
		case joaat("AGUASDULCESFARM"):
			return 57;
		case joaat("MANICATO"):
			return 61;
	}
	return -1;
}

int func_15(var uParam0)
{
	if (uParam0->f_13 == -1)
	{
		return -1;
	}
	uParam0->f_16 = func_16(uParam0->f_13);
	if (uParam0->f_16 != 0)
	{
		return 2;
	}
	uParam0->f_14 = func_14(uParam0->f_13);
	if (func_38(uParam0->f_14))
	{
		return 0;
	}
	uParam0->f_15 = func_13(uParam0->f_13);
	if (func_39(uParam0->f_15))
	{
		return 1;
	}
	return -1;
}

int func_16(int iParam0)
{
	switch (iParam0)
	{
		case joaat("AMBARINO"):
			return joaat("REGION_AMBARINO");
		case joaat("LEMOYNE"):
			return joaat("REGION_LEMOYNE");
		case joaat("NEWAUSTIN"):
			return joaat("REGION_NEW_AUSTIN");
		case joaat("NEWHANOVER"):
			return joaat("REGION_NEW_HANOVER");
		case joaat("WESTELIZABETH"):
			return joaat("REGION_WEST_ELIZABETH");
		case joaat("LOWERWESTELIZABETH"):
			return joaat("REGION_LOWER_WEST_ELIZABETH");
		case joaat("UPPERWESTELIZABETH"):
			return joaat("REGION_UPPER_WEST_ELIZABETH");
		case joaat("GUARMA"):
			return joaat("REGION_GUARMA");
		default:
			break;
	}
	return 0;
}

int func_17(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("REGION_BAY_CRAWDADWILLIES");
		case 1:
			return joaat("REGION_BAY_MACOMBS_END");
		case 2:
			return joaat("REGION_BAY_MERKINSWALLER");
		case 3:
			return joaat("REGION_BAY_LAGRAS");
		case 4:
			return joaat("REGION_BAY_LAKAY");
		case 5:
			return joaat("REGION_BAY_SAINT_DENIS");
		case 6:
			return joaat("REGION_BAY_ORANGE_PLANTATION");
		case 7:
			return joaat("REGION_BAY_SERIAL_KILLER");
		case 8:
			return joaat("REGION_BAY_SERENDIPITY");
		case 9:
			return joaat("REGION_BAY_SHADYBELLE");
		case 10:
			return joaat("REGION_BAY_SILTWATERSTRAND");
		case 11:
			return joaat("REGION_BGV_APPLESEEDTIMBER");
		case 12:
			return joaat("REGION_BGV_BERYLS_DREAM");
		case 13:
			return joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER");
		case 14:
			return joaat("REGION_BGV_DAKOTARIVER_TRAPPER");
		case 15:
			return joaat("REGION_BGV_FORTRIGGS");
		case 16:
			return joaat("REGION_BGV_HANGINGDOG");
		case 17:
			return joaat("REGION_BGV_LONEMULESTEAD");
		case 18:
			return joaat("REGION_BGV_MISSING_HUSBAND");
		case 19:
			return joaat("REGION_BGV_MONTO_REST");
		case 20:
			return joaat("REGION_BGV_OWANJILA_DAM");
		case 21:
			return joaat("REGION_BGV_PAINTEDSKY");
		case 22:
			return joaat("REGION_BGV_PRONGHORN");
		case 24:
			return joaat("REGION_BGV_SHACK");
		case 23:
			return joaat("REGION_BGV_RIGGS_STATION");
		case 25:
			return joaat("REGION_BGV_SHEPHERDS_RISE");
		case 26:
			return joaat("REGION_BGV_STRAWBERRY");
		case 27:
			return joaat("REGION_BGV_VALLEY_VIEW");
		case 28:
			return joaat("REGION_BGV_WALLACE_STATION");
		case 29:
			return joaat("REGION_BGV_WATSONSCABIN");
		case 30:
			return joaat("REGION_BLU_CANEBREAK_MANOR");
		case 31:
			return joaat("REGION_BLU_COPPERHEAD");
		case 32:
			return joaat("REGION_BLU_SISIKA");
		case 33:
			return joaat("REGION_CML_BACCHUSBRIDGE");
		case 34:
			return joaat("REGION_CML_DINO_LADY");
		case 35:
			return joaat("REGION_CML_OLDFORTWALLACE");
		case 36:
			return joaat("REGION_CML_SIXPOINTCABIN");
		case 37:
			return joaat("REGION_GRT_BEECHERS");
		case 38:
			return joaat("REGION_GRT_BLACKWATER");
		case 39:
			return joaat("REGION_GRT_QUAKERS_COVE");
		case 40:
			return joaat("REGION_GRZ_ADLERRANCH");
		case 41:
			return joaat("REGION_GRZ_DEAD_RIVAL");
		case 50:
			return joaat("REGION_GRZ_CALUMETRAVINE");
		case 51:
			return joaat("REGION_GRE_CIVIL_WAR_BRIDE");
		case 42:
			return joaat("REGION_GRZ_CHEZPORTER");
		case 52:
			return joaat("REGION_GRZ_COHUTTA");
		case 43:
			return joaat("REGION_GRZ_COLTER");
		case 44:
			return joaat("REGION_GRZ_FROZEN_EXPLORER");
		case 53:
			return joaat("REGION_GRZ_GUNFIGHT");
		case 45:
			return joaat("REGION_GRZ_MILLESANI_CLAIM");
		case 46:
			return joaat("REGION_GRZ_MOUNTAIN_MAN");
		case 47:
			return joaat("REGION_GRZ_STARVING_CHILDREN");
		case 48:
			return joaat("REGION_GRZ_TEMPEST_RIM");
		case 54:
			return joaat("REGION_GRZ_THELOFT");
		case 55:
			return joaat("REGION_GRE_VETERAN");
		case 56:
			return joaat("REGION_GRZ_WAPITI");
		case 49:
			return joaat("REGION_GRZ_WINTERMINING_TOWN");
		case 57:
			return joaat("REGION_GUA_AGUASDULCES");
		case 58:
			return joaat("REGION_GUA_CAMP");
		case 59:
			return joaat("REGION_GUA_CINCOTORRES");
		case 60:
			return joaat("REGION_GUA_LACAPILLA");
		case 61:
			return joaat("REGION_GUA_MANICATO");
		case 62:
			return joaat("REGION_HRT_ABANDONED_MILL");
		case 64:
			return joaat("REGION_HRT_CARMODYDELL");
		case 65:
			return joaat("REGION_HRT_CORNWALLKEROSENE");
		case 66:
			return joaat("REGION_HRT_CROP_FARM");
		case 67:
			return joaat("REGION_HRT_CUMBERLANDFALLS");
		case 68:
			return joaat("REGION_HRT_DOWNSRANCH");
		case 69:
			return joaat("REGION_HRT_EMERALDRANCH");
		case 70:
			return joaat("REGION_HRT_GRANGERS_HOGGERY");
		case 71:
			return joaat("REGION_HRT_HORSESHOEOVERLOOK");
		case 72:
			return joaat("REGION_HRT_LARNEDSOD");
		case 73:
			return joaat("REGION_HRT_LOONY_CULT");
		case 74:
			return joaat("REGION_HRT_LUCKYSCABIN");
		case 75:
			return joaat("REGION_HRT_SWANSONS_STATION");
		case 76:
			return joaat("REGION_HRT_VALENTINE");
		case 77:
			return joaat("REGION_ROA_ABERDEENPIGFARM");
		case 78:
			return joaat("REGION_ROA_ANNESBURG");
		case 79:
			return joaat("REGION_ROA_BEAVERHOLLOW");
		case 63:
			return joaat("REGION_ROA_BEECHERS_C");
		case 80:
			return joaat("REGION_ROA_BLACK_BALSAM_RISE");
		case 81:
			return joaat("REGION_ROA_BRANDYWINE_DROP");
		case 82:
			return joaat("REGION_ROA_BUTCHERCREEK");
		case 83:
			return joaat("REGION_ROA_DOVERHILL");
		case 84:
			return joaat("REGION_ROA_HAPPY_FAMILY");
		case 85:
			return joaat("REGION_ROA_ISOLATIONIST");
		case 86:
			return joaat("REGION_ROA_MACLEANSHOUSE");
		case 87:
			return joaat("REGION_ROA_MOSSY_FLATS");
		case 88:
			return joaat("REGION_ROA_ROANOKE_VALLEY");
		case 89:
			return joaat("REGION_ROA_ROCKYSEVEN");
		case 90:
			return joaat("REGION_ROA_TRAPPER");
		case 91:
			return joaat("REGION_ROA_VANHORNMANSION");
		case 92:
			return joaat("REGION_ROA_VANHORNPOST");
		case 93:
			return joaat("REGION_SCM_BRAITHWAITEMANOR");
		case 94:
			return joaat("REGION_SCM_BULGERGLADE");
		case 95:
			return joaat("REGION_SCM_CALIGAHALL");
		case 96:
			return joaat("REGION_SCM_CATFISHJACKSONS");
		case 97:
			return joaat("REGION_SCM_CLEMENSCOVE");
		case 98:
			return joaat("REGION_SCM_CLEMENSPOINT");
		case 99:
			return joaat("REGION_SCM_COMPSONS_STEAD");
		case 100:
			return joaat("REGION_SCM_DAIRY_FARM");
		case 101:
			return joaat("REGION_SCM_HORSE_SHOP");
		case 102:
			return joaat("REGION_SCM_LONNIESSHACK");
		case 103:
			return joaat("REGION_SCM_LOVE_TRIANGLE");
		case 104:
			return joaat("REGION_SCM_RADLEYS_PASTURE");
		case 105:
			return joaat("REGION_SCM_RHODES");
		case 106:
			return joaat("REGION_SCM_SLAVE_PEN");
		case 107:
			return joaat("REGION_TAL_AURORA_BASIN");
		case 109:
			return joaat("REGION_TAL_COCHINAY");
		case 110:
			return joaat("REGION_TAL_MANZANITAPOST");
		case 111:
			return joaat("REGION_TAL_PACIFICUNIONRR");
		case 112:
			return joaat("REGION_TAL_TANNERSREACH");
		case 108:
			return joaat("REGION_TAL_DEAD_SETTLER");
		case 113:
			return joaat("REGION_TAL_TRAPPER");
		case 126:
			return joaat("REGION_HEN_MACFARLANES_RANCH");
		case 127:
			return joaat("REGION_HEN_THIEVES_LANDING");
		case 120:
			return joaat("REGION_CHO_ARMADILLO");
		case 121:
			return joaat("REGION_CHO_COOTS_CHAPEL");
		case 122:
			return joaat("REGION_CHO_DON_JULIO_HOUSE");
		case 124:
			return joaat("REGION_CHO_RIDGEWOOD_FARM");
		case 123:
			return joaat("REGION_CHO_RILEYS_CHARGE");
		case 125:
			return joaat("REGION_CHO_TWIN_ROCKS");
		case 114:
			return joaat("REGION_GAP_GAPTOOTH_BREACH");
		case 115:
			return joaat("REGION_GAP_TUMBLEWEED");
		case 116:
			return joaat("REGION_GAP_RATHSKELLER_FORK");
		case 129:
			return joaat("REGION_GAP_SOLOMONS_FOLLY");
		case 117:
			return joaat("REGION_RIO_BENEDICT_POINT");
		case 118:
			return joaat("REGION_RIO_FORT_MERCER");
		case 119:
			return joaat("REGION_RIO_PLAIN_VIEW");
		case 128:
			return joaat("REGION_CENTRALUNIONRR");
		default:
			break;
	}
	return 0;
}

int func_18(int iParam0)
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
		case 13:
			return joaat("DISTRICT_GAPTOOTH_RIDGE");
		case 14:
			return joaat("DISTRICT_RIO_BRAVO");
		case 15:
			return joaat("DISTRICT_CHOLLA_SPRINGS");
		case 16:
			return joaat("DISTRICT_HENNIGANS_STEAD");
		default:
			break;
	}
	return 0;
}

void func_19(var uParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	bVar0 = false;
	iVar1 = 0;
	sVar2 = "";
	iVar3 = func_14(uParam0->f_13);
	iVar4 = uParam0->f_24;
	if (!func_39(iVar4))
	{
		iVar4 = func_13(uParam0->f_13);
	}
	if (!func_39(iVar4))
	{
		iVar5 = func_41(func_40(iVar3, 1, 1));
	}
	else
	{
		iVar5 = func_42(iVar4);
	}
	if ((func_43(iVar4) || func_44(iVar5)) || func_45(iVar3))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
		{
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		}
		else
		{
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
		}
		bVar0 = true;
	}
	else if (func_46(iVar5))
	{
		iVar1 = func_47(iVar5);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", iVar1);
		}
	}
	if (!bVar0)
	{
		if ((56 == uParam0->f_14 && !func_48(52)) || (func_49(44) && (105 == uParam0->f_14 || 95 == uParam0->f_14)))
		{
			sVar2 = MISC::VAR_STRING(2, "NO_WEAPON_REGION");
			bVar0 = true;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, sVar2);
}

bool func_20(int iParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	bool bVar2;

	bVar2 = MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &uVar1);
	*uParam1 = uVar0;
	uParam1->f_1 = uVar1;
	return bVar2;
}

bool func_21(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (!func_50(Global_1898330[iVar0]))
		{
		}
		else if (Global_1898346[iVar0 /*6*/].f_3 == 1)
		{
			*uParam1 = Global_1898346[iVar0 /*6*/].f_4;
			if ((func_51(*uParam1) && MAP::DOES_BLIP_EXIST(Global_1835011[*uParam1 /*74*/].f_27)) && Global_1835011[*uParam1 /*74*/].f_27 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_22(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (((func_52(Global_40.f_450[iVar0]) && MAP::DOES_BLIP_EXIST(Global_1347702[Global_40.f_450[iVar0] /*49*/].f_37)) && Global_1347702[Global_40.f_450[iVar0] /*49*/].f_37 == iParam0) && !func_53(Global_1347702[Global_40.f_450[iVar0] /*49*/].f_12, (1 << 24)))
		{
			*uParam1 = Global_40.f_450[iVar0];
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_23(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LAGRAS"):
			return joaat("ZONE_LAGRAS");
		case joaat("STDENIS"):
			return joaat("ZONE_SAINT_DENIS");
		case joaat("STRAWBERRY"):
			return joaat("ZONE_STRAWBERRY");
		case joaat("BLACKWATER"):
			return joaat("ZONE_BLACKWATER");
		case joaat("EMERALD"):
			return joaat("ZONE_EMERALD_RANCH");
		case joaat("VALENTINE"):
			return joaat("ZONE_VALENTINE");
		case joaat("ANNESBURG"):
			return joaat("ZONE_ANNESBURG");
		case joaat("VANHORN"):
			return joaat("ZONE_VAN_HORN_TRADING_POST");
		case joaat("RHODES"):
			return joaat("ZONE_RHODES");
		case joaat("ARMADILLO"):
			return joaat("ZONE_ARMADILLO");
		case joaat("TUMBLEWEED"):
			return joaat("ZONE_TUMBLEWEED");
		default:
			break;
	}
	return -1;
}

int func_24()
{
	return joaat("ZONE_VALENTINE");
}

int func_25(int iParam0, int iParam1)
{
	var uVar0;
	struct<16> /*128*/ sVar1;
	int iVar17;
	var uVar18;
	int iVar19;

	iVar17 = -1;
	switch (iParam0)
	{
		case 13:
			return -834434971;
		case 14:
			return joaat("MBLIP_JOB_LOANSHARKING_VICTIM");
		case 15:
			return -1131397804;
		case 17:
			return joaat("MBLIP_PROC_COACHROBBERY");
		case 18:
			return joaat("MBLIP_PROC_TRAINROBBERY");
		case 19:
			return joaat("MBLIP_PROC_BOATROBBERY");
		case 47:
			return joaat("MBLIP_HOUSE_PURCHASABLE");
		case 48:
			return joaat("MBLIP_HOUSE_RENTABLE");
		case 49:
			return joaat("MBLIP_BOUNTY_PAY");
		case 53:
			return joaat("MBLIP_EVENT_AREA_APPLESEED");
		case 54:
			return joaat("MBLIP_EVENT_AREA_CASTORS_POND");
		case 55:
			return joaat("MBLIP_EVENT_AREA_UNION_RAILROAD");
		case 56:
			return joaat("MBLIP_EVENT_AREA_RIGGS_CAMP");
		case 57:
			return joaat("MBLIP_HIDEOUT");
		case 58:
			return joaat("MBLIP_HOME_ROBBERY");
		case 59:
			return joaat("MBLIP_FISHING");
		case 82:
			return joaat("MBLIP_SHOP_GENERAL");
		case 83:
			return joaat("MBLIP_SHOP_GENERAL");
		case 84:
			return joaat("MBLIP_SHOP_GENERAL");
		case 85:
			return joaat("MBLIP_SHOP_GENERAL");
		case 86:
			return joaat("MBLIP_SHOP_GENERAL");
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
		case 30:
		case 31:
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
		case 51:
		case 60:
		case 61:
			sVar1 = { func_54(iParam1, iParam0, &uVar0) /*16*/ };
			iVar17 = MISC::GET_HASH_KEY(&sVar1);
			break;
		case 16:
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
		case 50:
			sVar1 = { func_55() /*16*/ };
			iVar17 = MISC::GET_HASH_KEY(&sVar1);
			break;
		case 46:
		case 52:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
			sVar1 = { func_56(iParam0, iParam1, &uVar0) /*16*/ };
			iVar17 = MISC::GET_HASH_KEY(&sVar1);
			break;
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
			strcpy_s(&sVar1, 128, func_57(iParam0));
			iVar17 = MISC::GET_HASH_KEY(&sVar1);
			break;
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			MAP::SET_BLIP_FLASHES(iParam1, &uVar18, &iVar19);
			strcpy_s(&sVar1, 128, func_58(iVar19));
			iVar17 = MISC::GET_HASH_KEY(&sVar1);
			break;
	}
	if (iVar17 != -1)
	{
		return iVar17;
	}
	return -1;
}

void func_26(var uParam0)
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
}

void func_27(var uParam0)
{
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP"), joaat("HIDE_INFO")))
	{
		uParam0->f_29 = 1;
	}
	else
	{
		uParam0->f_29 = 0;
	}
}

void func_28(var uParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	sVar0 = func_59(uParam0->f_26, uParam0->f_27);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		if (uParam0->f_25 != -1)
		{
			iVar1 = func_60(uParam0->f_25);
		}
		if (uParam0->f_24 != -1)
		{
			iVar2 = func_61(uParam0->f_24);
			iVar3 = func_62(uParam0->f_24);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar1) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar2))
		{
			sVar0 = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar1, iVar2);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar3))
		{
			sVar0 = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", iVar2, iVar3);
		}
		else
		{
			sVar0 = "";
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, sVar0);
}

bool func_29(var uParam0)
{
	if (uParam0->f_29)
	{
		func_27(uParam0);
	}
	if (!uParam0->f_21)
	{
		return false;
	}
	if (uParam0->f_17 == 0)
	{
		uParam0->f_21 = 0;
		return false;
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20) && TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_20))
	{
		uParam0->f_21 = 0;
		return true;
	}
	return false;
}

void func_30(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;

	if (!func_51(uParam1->f_22))
	{
		if (!func_21(iParam0, &(uParam1->f_22)))
		{
			return;
		}
	}
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1835011[uParam1->f_22 /*74*/].f_26);
	MemCopy(&cVar0, {Global_1835011[uParam1->f_22 /*74*/].f_8}, 2);
	strcat_s(&cVar0, 16, "_DESC_PM");
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		strcpy_s(&cVar0, 16, "");
	}
	iVar2 = MISC::GET_HASH_KEY(&(Global_1835011[uParam1->f_22 /*74*/].f_8));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(iVar2));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_31(int iParam0, var uParam1)
{
	char cVar0[16];
	int iVar2;

	if (!func_52(uParam1->f_23))
	{
		if (!func_22(iParam0, &(uParam1->f_23)))
		{
			return;
		}
	}
	else if (func_53(Global_1347702[uParam1->f_23 /*49*/].f_12, (1 << 24)))
	{
		return;
	}
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1347702[uParam1->f_23 /*49*/].f_36);
	MemCopy(&cVar0, {Global_1347702[uParam1->f_23 /*49*/].f_3}, 2);
	strcat_s(&cVar0, 16, "_DESC_PM");
	if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
	{
		MemCopy(&cVar0, {Global_1347702[uParam1->f_23 /*49*/].f_3}, 2);
		strcat_s(&cVar0, 16, "_DESC");
	}
	iVar2 = MISC::GET_HASH_KEY(&(Global_1347702[uParam1->f_23 /*49*/].f_3));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
	if (!func_53(Global_1347702[uParam1->f_23 /*49*/].f_12, 1) && (func_53(Global_1347702[uParam1->f_23 /*49*/].f_12, 2) || Global_1347702[uParam1->f_23 /*49*/].f_36 == joaat("BLIP_RC")))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", joaat("MAP_CARD_STRANGERS"));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", joaat("IMAGE"));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(iVar2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(iVar2));
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_32(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_20 = func_23(iParam0);
	iVar0 = func_63(uParam1->f_14);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_64(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(func_61(iVar0)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_65(iParam0));
	if (TXD::DOES_STREAMED_TXD_EXIST(uParam1->f_20))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_23(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_23(iParam0));
	}
	else
	{
		uParam1->f_20 = func_24();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_20);
	}
	iVar1 = func_42(iVar0);
	if (func_46(iVar1))
	{
		iVar2 = func_47(iVar1);
		if (iVar2 > 0)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", iVar2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
}

void func_33(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	struct<2> /*16*/ sVar2;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	sVar2 = { func_66(PLAYER::INT_TO_PLAYERINDEX(iVar1)) /*2*/ };
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", func_67(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar1)), joaat("COLOR_PURE_WHITE")));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(func_69(0, &sVar2, func_68(0))));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_70(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_34(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(func_71(iVar1)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_35(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1058888.f_43853.f_283[iVar1 /*306*/]);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_36(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_72(iVar1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

void func_37(int iParam0, var uParam1)
{
	int iVar0;
	struct<16> /*128*/ sVar1;
	char cVar17[128];
	char cVar33[128];
	var uVar49;
	int iVar50;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
	strcpy_s(&cVar17, 128, func_73(iParam0));
	switch (func_74(iParam0))
	{
		case 1:
			sVar1 = { func_54(uParam1->f_19, iParam0, &iVar0) /*16*/ };
			if (iParam0 == 16)
			{
				strcpy_s(&sVar1, 128, "MAP_CARD_BOUNTY");
			}
			strcpy_s(&cVar33, 128, func_60(iVar0));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&cVar17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&sVar1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 2:
			strcpy_s(&sVar1, 128, func_57(iParam0));
			iVar0 = func_75(MAP::GET_BLIP_COORDS(uParam1->f_19), 1);
			strcpy_s(&cVar33, 128, func_60(iVar0));
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&sVar1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 3:
			sVar1 = { func_56(iParam0, uParam1->f_19, &iVar0) /*16*/ };
			strcpy_s(&cVar33, 128, func_60(iVar0));
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&sVar1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 4:
			MAP::SET_BLIP_FLASHES(uParam1->f_19, &uVar49, &iVar50);
			strcpy_s(&cVar17, 128, func_77(func_76(iVar50)));
			strcpy_s(&sVar1, 128, func_78(iVar50));
			iVar0 = func_75(MAP::GET_BLIP_COORDS(uParam1->f_19), 1);
			strcpy_s(&cVar33, 128, func_60(iVar0));
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&sVar1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&cVar33));
			break;
		case 5:
			sVar1 = { func_79(iVar0) /*16*/ };
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&sVar1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
		default:
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &cVar17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&sVar1));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(iParam0, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", 0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}

bool func_38(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_39(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 76:
			if (func_80(iParam0))
			{
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			}
			else
			{
				return joaat("LAW_REGION_VALENTINE");
			}
			break;
		case 105:
			if (func_80(iParam0))
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
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_BLACKWATER");
			}
			if (func_49(45))
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
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			if (func_49(45))
			{
				return joaat("LAW_REGION_THIEVES_LANDING");
			}
			else
			{
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			}
			break;
		case 22:
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			if (func_82(Global_1835011[59 /*74*/].f_1, 1))
			{
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			}
			else
			{
				return joaat("LAW_REGION_BIG_VALLEY");
			}
			break;
		case 37:
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			if (func_82(Global_1347702[9 /*49*/].f_15, 1))
			{
				return joaat("LAW_REGION_BEECHERS_HOPE");
			}
			else if (func_49(45))
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
			if (iParam0 == func_83())
			{
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			}
			break;
		case 110:
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_MANZANITA_POST");
			}
			if (func_49(45))
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
		iVar0 = func_84(iParam0);
		if (iVar0 != -1)
		{
			return func_85(iVar0, bParam1);
		}
	}
	return 0;
}

int func_41(int iParam0)
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

int func_42(int iParam0)
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

bool func_43(int iParam0)
{
	if (!func_39(iParam0))
	{
		return false;
	}
	return func_86(iParam0, 2);
}

bool func_44(int iParam0)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	return func_87(iParam0, 2);
}

bool func_45(int iParam0)
{
	if (!func_38(iParam0))
	{
		return false;
	}
	return func_88(iParam0, (1 << 24));
}

bool func_46(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_47(int iParam0)
{
	return func_89(iParam0);
}

bool func_48(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_82(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

bool func_49(int iParam0)
{
	if (!func_90(iParam0))
	{
		return false;
	}
	return func_91(iParam0);
}

bool func_50(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_51(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_52(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_53(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

struct<16> /*128*/ func_54(int iParam0, int iParam1, var uParam2)
{
	struct<16> /*128*/ sVar0;
	Vector3 vVar16;
	char cVar19[128];

	if (!MAP::DOES_BLIP_EXIST(iParam0))
	{
		return sVar0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam0) /*3*/ };
	*uParam2 = func_75(vVar16, 1);
	while (vVar16.z < 200.0f && !func_38(*uParam2))
	{
		vVar16.f_2 = (vVar16.z + 25.0f);
		*uParam2 = func_75(vVar16, 1);
	}
	if (!func_38(*uParam2))
	{
		return sVar0;
	}
	strcpy_s(&sVar0, 128, "MAP_CARD_");
	cVar19.f_0 = func_92(*uParam2);
	strcat_s(&sVar0, 128, &cVar19);
	strcat_s(&sVar0, 128, "_");
	strcat_s(&sVar0, 128, func_93(iParam1, *uParam2, vVar16));
	return sVar0;
}

struct<16> /*128*/ func_55()
{
	char cVar0[128];

	strcpy_s(&cVar0, 128, "MAP_CARD_NBX_STAGECOACH");
	return cVar0;
}

struct<16> /*128*/ func_56(int iParam0, int iParam1, int iParam2)
{
	struct<16> /*128*/ sVar0;
	Vector3 vVar16;

	if (!MAP::DOES_BLIP_EXIST(iParam1))
	{
		return sVar0;
	}
	vVar16 = { MAP::GET_BLIP_COORDS(iParam1) /*3*/ };
	if (vVar16.z == 0.0f)
	{
		func_94(&vVar16, 50, 10, 0);
	}
	if (vVar16.z == 0.0f)
	{
		vVar16.f_2 = Global_36.f_2;
	}
	*iParam2 = func_75(vVar16, 1);
	if (!func_38(*iParam2))
	{
		return sVar0;
	}
	switch (iParam0)
	{
		case 52:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_");
			strcat_s(&sVar0, 128, func_95(*iParam2));
			break;
		case 46:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_BEECHERSHOPE");
			break;
		case 65:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_FOOD");
			break;
		case 66:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_TITHING_BOX");
			break;
		case 67:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_BUTCHER");
			break;
		case 68:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_HORSE_HITCH");
			break;
		case 69:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_SUPPLY_AMMO");
			break;
		case 70:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_SUPPLY_MEDICINE");
			break;
		case 71:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_SUPPLY_PROVISIONS");
			break;
		case 72:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_MINIGAME_POKER");
			break;
		case 73:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER");
			break;
		case 74:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_MINIGAME_DOMINOES");
			break;
	}
	return sVar0;
}

char* func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
		default:
			break;
	}
	return "";
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
		case joaat("HAI_FISHING_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
		case joaat("HAI_FISHING_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
		case joaat("HAI_HUNTING_06"):
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
		case joaat("HAI_DOMINOES_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
		case joaat("HAI_COACH_ROBBERY_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
		case joaat("HAI_COACH_ROBBERY_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
		case joaat("HAI_BANK_ROBBERY_01"):
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
		case joaat("HAI_COACH_ROBBERY_03"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
		case joaat("HAI_COACH_ROBBERY_04"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
		case joaat("HAI_RUSTLING_02"):
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
		case joaat("HAI_HOME_ROBBERY_01"):
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
		default:
			break;
	}
	return "";
}

char* func_59(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1;
	if (iParam0 != -1)
	{
		iVar1 = func_96(iParam0);
		if (iVar1 == 0 || MAP::_MAP_IS_DISCOVERY_ACTIVE(iVar1))
		{
			iVar0 = iParam0;
		}
	}
	if (iVar0 == -1)
	{
		return "";
	}
	return MISC::VAR_STRING(0, iVar0);
}

char* func_60(int iParam0)
{
	if (!func_38(iParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
		{
			return "FMMC_INV_ALID";
		}
		return "REGION_INV";
	}
	return func_97(Global_1888801[iParam0 /*35*/].f_22);
}

char* func_61(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "BGV";
		case 2:
			return "BLU";
		case 3:
			return "CML";
		case 4:
			return "GRT";
		case 5:
			return "GRZ";
		case 6:
			return "GRE";
		case 7:
			return "GRW";
		case 8:
			return "GUA";
		case 9:
			return "HRT";
		case 10:
			return "ROA";
		case 11:
			return "SCM";
		case 12:
			return "TAL";
		case 15:
			return "CHO";
		case 13:
			return "GAP";
		case 16:
			return "HEN";
		case 14:
			return "RIO";
		default:
			break;
	}
	return "No District Label!";
}

char* func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE";
		case 1:
			return "WEST_ELIZ";
		case 2:
			return "LEMOYNE";
		case 3:
			return "NEW_HANOV";
		case 4:
			return "WEST_ELIZ";
		case 5:
			return "AMBARINO";
		case 6:
			return "AMBARINO";
		case 7:
			return "AMBARINO";
		case 8:
			return "GUARMA";
		case 9:
			return "NEW_HANOV";
		case 10:
			return "NEW_HANOV";
		case 11:
			return "LEMOYNE";
		case 12:
			return "WEST_ELIZ";
		case 13:
			return "NEW_AUST";
		case 14:
			return "NEW_AUST";
		case 15:
			return "NEW_AUST";
		case 16:
			return "NEW_AUST";
		default:
			break;
	}
	return "No State Label!";
}

int func_63(int iParam0)
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

int func_64(int iParam0)
{
	char* sVar0;

	sVar0 = func_98(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sVar0);
}

int func_65(int iParam0)
{
	char cVar0[64];
	char cVar8[64];

	strcpy_s(&cVar0, 64, func_98(iParam0));
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return 0;
	}
	strcpy_s(&cVar8, 64, "MAP_CARD_");
	strcat_s(&cVar8, 64, &cVar0);
	strcat_s(&cVar8, 64, "_DESC");
	return MISC::GET_HASH_KEY(&cVar8);
}

struct<2> /*16*/ func_66(int iParam0)
{
	struct<2> /*16*/ sVar0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &sVar0);
	return sVar0;
}

char* func_67(char* sParam0, int iParam1)
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_99(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

char[] func_68(int iParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, func_100());
	strcat_s(&cVar0, 64, func_101(iParam0));
	return func_102(cVar0);
}

char* func_69(int iParam0, var uParam1, char* sParam2)
{
	char* sVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(uParam1))
	{
		return "Invalid Handle";
	}
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
		default:
			sVar0 = "Unknown Type";
			break;
			sVar0 = NETWORK::_REQUEST_PEDSHOT_TEXTURE_DOWNLOAD(uParam1, 0);
			break;
		case 1:
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (iVar1 < 0)
			{
				sVar0 = NETWORK::_0xCAF4CA2F87779F8F(uParam1, 0);
			}
			else
			{
				sVar0 = func_103(iVar1);
			}
			break;
	}
	return sVar0;
}

int func_70(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1139587[iParam0 /*19*/];
}

char* func_71(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
		case 4:
			return "NM_PLAYLIST_SPECIAL_MODES_1";
		case 5:
			return "NM_PLAYLIST_SPECIAL_MODES_2";
		case 0:
			return "NM_PLAYLIST_RACE";
		case 6:
			return "NM_PLAYLIST_NOMINATED";
		case 7:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
		case 8:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
		case 9:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
		case 11:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
		case 12:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
		case 13:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

var func_72(int iParam0)
{
	int iVar0;

	if (func_105(func_104(iParam0)))
	{
		iVar0 = joaat("GIVER_NAME");
	}
	else
	{
		iVar0 = joaat("GIVER_STRANGER_NAME");
	}
	return Global_1115725[iParam0 /*44*/].f_11.f_7[func_106(iVar0, 1)];
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "BLIP_MG_POKER";
		case 1:
			return "BLIP_MG_BLACKJACK";
		case 2:
			return "BLIP_MG_DOMINOES";
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 5:
			return "BLIP_SUMMER_COW";
		case 6:
			return "BLIP_SUMMER_HORSE";
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
		case 14:
			return "BLIP_PROC_LOANSHARK";
		case 13:
			return "BLIP_AMBIENT_HERD";
		case 15:
			return "BLIP_PROC_BANK";
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
		case 17:
			return "BLIP_AMBIENT_COACH";
		case 18:
			return "BLIP_AMBIENT_TRAIN";
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
		case 20:
			return "BLIP_SHOP_STORE";
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
		case 23:
			return "BLIP_SHOP_GUNSMITH";
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
		case 25:
			return "BLIP_SHOP_DOCTOR";
		case 26:
			return "BLIP_SHOP_TAILOR";
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
		case 29:
			return "BLIP_SHOP_TRAINER";
		case 33:
			return "BLIP_POST_OFFICE";
		case 34:
			return "BLIP_POST_OFFICE_REC";
		case 30:
			return "BLIP_SHOP_TRAIN";
		case 31:
			return "BLIP_SHOP_BARBER";
		case 32:
			return "BLIP_SHOP_BUTCHER";
		case 35:
			return "BLIP_SHOP_TACKLE";
		case 36:
			return "BLIP_SHOP_ANIMAL_TRAPPER";
		case 37:
			return "BLIP_SHOP_HORSE";
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
		case 40:
			return "BLIP_AMBIENT_NEWSPAPER";
		case 41:
			return "BLIP_SHOP_MARKET_STALL";
		case 42:
			return "BLIP_SHOP_MARKET_STALL";
		case 43:
			return "BLIP_HOTEL_BED";
		case 44:
			return "BLIP_PHOTO_STUDIO";
		case 27:
			return "BLIP_SALOON";
		case 45:
			return "BLIP_STABLE";
		case 46:
			return "BLIP_PROC_HOME";
		case 47:
			return "BLIP_PROC_HOME_LOCKED";
		case 48:
			return "BLIP_PROC_HOME";
		case 49:
			return "BLIP_AMBIENT_TELEGRAPH";
		case 50:
			return "BLIP_AMBIENT_COACH_TAXI";
		case 51:
			return "BLIP_AMBIENT_THEATRE";
		case 52:
			return "BLIP_REGION_CARAVAN";
		case 65:
			return "BLIP_CAMP_EAT";
		case 66:
			return "BLIP_AMBIENT_TITHING";
		case 67:
			return "BLIP_SHOP_PEARSON";
		case 68:
			return "BLIP_CAMP_HITCH";
		case 69:
			return "BLIP_SUPPLIES_AMMO";
		case 70:
			return "BLIP_SUPPLIES_HEALTH";
		case 71:
			return "BLIP_SUPPLIES_FOOD";
		case 72:
			return "BLIP_MG_POKER";
		case 73:
			return "BLIP_MG_FIVE_FINGER_FILLET";
		case 74:
			return "BLIP_MG_DOMINOES";
		case 75:
			return "BLIP_REGION_HUNTING";
		case 76:
			return "BLIP_MG_FISHING";
		case 77:
			return "BLIP_ROBBERY_COACH";
		case 78:
			return "BLIP_REGION_HUNTING";
		case 79:
			return "BLIP_ROBBERY_BANK";
		case 80:
			return "BLIP_MG_DOMINOES";
		case 81:
			return "BLIP_AMBIENT_HERD";
		case 53:
			return "BLIP_EVENT_APPLESEED";
		case 54:
			return "BLIP_EVENT_CASTOR";
		case 55:
			return "BLIP_EVENT_RAILROAD_CAMP";
		case 56:
			return "BLIP_EVENT_RIGGS_CAMP";
		case 57:
			return "BLIP_REGION_HIDEOUT";
		case 58:
			return "BLIP_PROC_HOME";
		case 59:
			return "BLIP_MG_FISHING";
		case 60:
			return "BLIP_AMBIENT_THEATRE";
		case 61:
			return "BLIP_AMBIENT_THEATRE";
		default:
			return "";
	}
	return "";
}

int func_74(int iParam0)
{
	switch (iParam0)
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
			return 2;
		case 16:
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
		case 30:
		case 31:
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
		case 51:
		case 60:
		case 61:
			return 1;
		case 46:
		case 52:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
			return 3;
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			return 4;
		case 50:
			return 5;
		default:
			break;
	}
	return 0;
	return 0;
}

int func_75(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_107();
	if (func_38(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_108(vParam0, iParam3);
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return joaat("CA_HUNTING");
		case joaat("HAI_FISHING_01"):
			return joaat("CA_FISHING");
		case joaat("HAI_FISHING_02"):
			return joaat("CA_FISHING");
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return -1511391406;
		case joaat("HAI_HUNTING_06"):
			return joaat("CA_HUNTING");
		case joaat("HAI_DOMINOES_01"):
			return joaat("CA_DOMINOES_CAMP");
		case joaat("HAI_COACH_ROBBERY_01"):
			return joaat("CA_COACH");
		case joaat("HAI_COACH_ROBBERY_02"):
			return joaat("CA_COACH");
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return -1511391406;
		case joaat("HAI_BANK_ROBBERY_01"):
			return joaat("CA_BANK");
		case joaat("HAI_COACH_ROBBERY_03"):
			return joaat("CA_COACH");
		case joaat("HAI_COACH_ROBBERY_04"):
			return joaat("CA_COACH");
		case joaat("HAI_RUSTLING_02"):
			return 754620122;
		case joaat("HAI_HOME_ROBBERY_01"):
			return joaat("CA_HOMEROBBERY");
		default:
			break;
	}
	return 234527101;
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CA_ANY"):
			return "ACT_ANY_LABEL";
		case 234527101:
			return "ACT_NONE_LABEL";
		case joaat("CA_HUNTING"):
			return "ACT_HUNTING_LABEL";
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL";
		case joaat("CA_FISHING"):
			return "ACT_FISHING_LABEL";
		case joaat("CA_KIDNAPPING"):
			return "ACT_KIDNAPPING_LABEL";
		case joaat("CA_DRINKSHOOT_CAMP"):
			return "ACT_DRINKSHOOT_CAMP_LABEL";
		case 1193949598:
			return "ACT_SALOON_LABEL";
		case 754620122:
			return "ACT_RUSTLING_LABEL";
		case joaat("CA_POKER"):
			return "ACT_POKER_LABEL";
		case joaat("CA_POKER_CAMP"):
			return "ACT_POKER_CAMP_LABEL";
		case joaat("CA_COACH"):
			return "ACT_COACH_LABEL";
		case joaat("CA_BANK"):
			return "ACT_BANK_LABEL";
		case joaat("CA_TRAIN"):
			return "ACT_TRAIN_LABEL";
		case joaat("CA_HOMEROBBERY"):
			return "ACT_HOMEROB_LABEL";
		case joaat("CA_BLACKJACK"):
			return "ACT_BLACKJACK_LABEL";
		case 1523333387:
			return "ACT_CRAPS_LABEL";
		case joaat("CA_HIDEOUT"):
			return "ACT_HIDEOUT_LABEL";
		case joaat("CA_DOMINOES_CAMP"):
			return "ACT_DOMINOES_CAMP_LABEL";
		case joaat("CA_RETURN_TO_CAMP"):
			return "ACT_RETURN_LABEL";
		case joaat("CA_MISSION"):
			return "ACT_MISSION_LABEL";
		default:
			break;
	}
	return "ACT_NONE_LABEL";
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "CAHT02_DESC";
		case joaat("HAI_FISHING_01"):
			return "CAFS01_DESC";
		case joaat("HAI_FISHING_02"):
			return "CAFS02_DESC";
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "CAFFF05_DESC";
		case joaat("HAI_HUNTING_06"):
			return "CAHT06_DESC";
		case joaat("HAI_DOMINOES_01"):
			return "CADM05_DESC";
		case joaat("HAI_COACH_ROBBERY_01"):
			return "CACR02_DESC";
		case joaat("HAI_COACH_ROBBERY_02"):
			return "CACR03_DESC";
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MGFFF_DESC";
		case joaat("HAI_BANK_ROBBERY_01"):
			return "CABR01_DESC";
		case joaat("HAI_COACH_ROBBERY_03"):
			return "CACR01_DESC";
		case joaat("HAI_COACH_ROBBERY_04"):
			return "CACR04_DESC";
		case joaat("HAI_RUSTLING_02"):
			return "CARS02_DESC";
		case joaat("HAI_HOME_ROBBERY_01"):
			return "PHHOM_DESC";
		default:
			break;
	}
	return "";
}

struct<16> /*128*/ func_79(int iParam0)
{
	char cVar0[128];

	switch (iParam0)
	{
		case 105:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_RHODES");
			break;
		case 5:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_SAINTDENIS");
			break;
		case 76:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_VALENTINE");
			break;
		case 26:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_STRAWBERRY");
			break;
		case 38:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_BLACKWATER");
			break;
		default:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_RHODES");
			break;
	}
	return cVar0;
}

bool func_80(int iParam0)
{
	if (!func_38(iParam0))
	{
		return false;
	}
	return func_88(iParam0, (1 << 25));
}

int func_81()
{
	return Global_1572887.f_12;
}

bool func_82(int iParam0, bool bParam1)
{
	switch (func_109(iParam0))
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

int func_83()
{
	return Global_40.f_4283.f_1;
}

int func_84(int iParam0)
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

int func_85(int iParam0, bool bParam1)
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
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_GREAT_PLAINS");
			}
			if (func_49(45))
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
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_TALL_TREES");
			}
			if (func_49(45))
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
			if (!bParam1 || func_81() != -1)
			{
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			}
			if (func_49(45))
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

bool func_86(int iParam0, int iParam1)
{
	if (!func_39(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_431[iParam0] & iParam1) != 0;
	}
	return (Global_1058888.f_42269[iParam0] & iParam1) != 0;
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_46(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return (Global_40.f_358[iParam0 /*12*/].f_5 & iParam1) != 0;
	}
	return (Global_1058888.f_42196[iParam0 /*12*/].f_5 & iParam1) != 0;
}

bool func_88(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		return (Global_23118[iParam0 /*11*/] & iParam1) != 0;
	}
	return (Global_1058888.f_40545[iParam0 /*11*/] & iParam1) != 0;
}

int func_89(int iParam0)
{
	if (!func_46(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_12 == -1)
	{
		return Global_40.f_358[iParam0 /*12*/];
	}
	return Global_1058888.f_42196[iParam0 /*12*/];
}

bool func_90(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

char[] func_92(int iParam0)
{
	char[] cVar0[8];

	if (!func_38(iParam0))
	{
		strcpy_s(&cVar0, 8, "UNK");
		return cVar0;
	}
	return Global_1888801[iParam0 /*35*/].f_22;
}

char* func_93(int iParam0, int iParam1, Vector3 vParam2)
{
	switch (iParam0)
	{
		case 20:
			return "GENERALSTORE";
		case 21:
			return "FENCE";
		case 23:
			return "GUNSMITH";
		case 25:
			return "DOCTOR";
		case 26:
			return "TAILOR";
		case 28:
			return "BLACKSMITH";
		case 33:
			switch (iParam1)
			{
				case 105:
					return "TRAINSTATION";
				default:
					return "DEPOT";
			}
			break;
		case 34:
			return "DEPOT";
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
				default:
					return "TRAINSTATION";
			}
			break;
		case 31:
			return "BARBER";
		case 32:
			return "BUTCHER";
		case 35:
			return "BAITSHOP";
		case 36:
			return "TRAPPER";
		case 37:
			return "HORSESHOP";
		case 38:
			return "HORSESHOP";
		case 40:
			return "NEWSPAPER";
		case 41:
			return "MARKET";
		case 42:
			return "MARKET";
		case 43:
			return "HOTEL";
		case 44:
			return "PHOTOGRAPHER";
		case 51:
			return "MAGICLANTERN";
		case 60:
			return "VAUDEVILLE";
		case 61:
			return "VAUDEVILLE";
		case 50:
			return "STAGECOACH";
		case 27:
			switch (iParam1)
			{
				case 5:
					if (BUILTIN::VDIST(vParam2, 2796.0f, -1167.0f, vParam2.z) <= 25.0f)
					{
						return "SLUMSALOON";
					}
					else
					{
						return "NICESALOON";
					}
					break;
				case 76:
					if (BUILTIN::VDIST(vParam2, -308.0f, 807.05f, vParam2.z) <= 25.0f)
					{
						return "SALOON_BARBER";
					}
					else
					{
						return "SALOON2";
					}
					break;
				default:
					return "SALOON";
			}
			break;
		case 16:
			return "BOUNTY";
	}
	return "";
}

int func_94(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	Vector3 vVar4;

	if (func_110(*uParam0, 0.0f, 0.0f, 0.0f))
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

char* func_95(int iParam0)
{
	switch (func_111(iParam0))
	{
		case 6:
			return "BEAVERHOLLOW";
		case 2:
			return "CLEMENSPOINT";
		case 0:
			return "COLTER";
		case 4:
			return "GUARMA";
		case 1:
			return "HORSESHOE";
		case 5:
			return "LAKAY";
		case 3:
			return "SHADYBELLE";
		case 7:
			return "PRONGHORN";
	}
	return "";
}

int func_96(int iParam0)
{
	switch (iParam0)
	{
		case joaat("W_4_ABANDONED_MISSION"):
			return 993246734;
		case joaat("W_4_ABANDONED_TRADING_POST"):
			return 1352537560;
		case joaat("W_4_FIRE_LOOKOUT_TOWER"):
			return -1262808306;
		case joaat("W_4_FLATTENED_CABIN"):
			return 1582457845;
		case joaat("W_5_FORT_BRENNAND"):
			return 460210291;
		case joaat("W_5_LIMPANY"):
			return 2021420613;
		case joaat("W_4_METEOR_HOUSE"):
			return 1195199040;
		case joaat("W_4_OIL_DERRICK"):
			return -1212881551;
		case joaat("W_4_PLEASANCE"):
			return -2011320133;
		case joaat("W_4_ROADSIDE_BROTHEL"):
			return -1988847961;
		case joaat("W_4_THE_OLD_BACCHUS_PLACE"):
			return 2056389698;
		case joaat("W_4_TRADING_POST"):
			return -942443338;
		case joaat("W_4_TWO_CROWS"):
			return 539572870;
		case joaat("W_4_UTOPIAN_COLONY_BUILDING"):
			return 66159563;
		case joaat("W_4_WITCHES_CAULDRON"):
			return 387869270;
		case joaat("W_4_APPLESEED_TIMBER_COMPANY"):
			return -496244122;
		case joaat("W_4_CASTORS_RIDGE"):
			return -238119963;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1"):
			return 1028223611;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2"):
			return 730222325;
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3"):
			return -597970767;
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP"):
			return -732274047;
		case joaat("W_5_BEAVER_HOLLOW"):
			return -1368676121;
		case joaat("W_4_CLEMENS_POINT"):
			return 759314201;
		case joaat("W_4_COLTER"):
			return 1826504111;
		case joaat("W_4_GAPTOOTH_BREACH"):
			return 1728445882;
		case joaat("W_4_HANGING_DOG_RANCH"):
			return -12216052;
		case joaat("W_4_HORSESHOE_OVERLOOK"):
			return -431488293;
		case joaat("W_4_PIKES_BASIN"):
			return 1474106589;
		case joaat("W_4_SHADY_BELLE"):
			return -353968602;
		case joaat("W_4_SIX_POINT_CABIN"):
			return -918096609;
		case joaat("W_4_SOLOMONS_FOLLY"):
			return 1979340260;
		case joaat("W_4_ABERDEEN_PIG_FARM"):
			return 1472232821;
		case joaat("W_4_ADLER_RANCH"):
			return 462373845;
		case joaat("W_4_CARMODY_DELL"):
			return -1836330842;
		case joaat("W_4_CATFISH_JACKSONS"):
			return -1150244084;
		case joaat("W_4_CHEZ_PORTER"):
			return -1727895786;
		case joaat("W_4_LARNED_SOD"):
			return -1101810198;
		case joaat("W_4_LONNIES_SHACK"):
			return 2143316225;
		case joaat("W_4_MACLEANS_HOUSE"):
			return 121074776;
		case joaat("W_4_PAINTED_SKY"):
			return -2086563810;
		case joaat("W_4_RIDGEWOOD_FARM"):
			return -1332669948;
		case joaat("W_4_VAN_HORN_MANSION"):
			return 85299473;
		case joaat("W_4_WATSONS_CABIN"):
			return -1813267128;
		case joaat("W_4_WILLARDS_REST"):
			return 458479023;
		case joaat("W_5_BERYLS_DREAM"):
			return -678676588;
		case joaat("W_5_BLACK_BALSAM_RISE"):
			return 1602161184;
		case joaat("W_5_BLACK_BONE_FOREST"):
			return -656861063;
		case joaat("W_4_BRITTLEBRUSH_TRAWL"):
			return 1735191955;
		case joaat("W_5_BROKEN_TREE"):
			return 2073023198;
		case joaat("W_4_CANEBREAK_MANOR"):
			return -1941572412;
		case joaat("W_5_CHADWICK_FARM"):
			return 215480587;
		case joaat("W_4_CLINGMAN"):
			return 545498183;
		case joaat("W_4_COCHINAY"):
			return 820139809;
		case joaat("W_4_COMPSONS_STEAD"):
			return 2063457042;
		case joaat("W_4_COPPERHEAD_LANDING"):
			return 1006072805;
		case joaat("W_4_CUEVA_SECA"):
			return 428613469;
		case joaat("W_4_DOVERHILL"):
			return -161135375;
		case joaat("W_4_DOWNES_RANCH"):
			return -1276637644;
		case joaat("W_4_EVELYN_MILLER_CAMP"):
			return -960425936;
		case joaat("W_4_FACE_ROCK"):
			return 532401286;
		case joaat("W_4_FIRWOOD_RISE"):
			return -1347759053;
		case joaat("W_5_FISHINGSPOT"):
			return 1542246539;
		case joaat("W_4_GREENHOLLOW"):
			return 1740117339;
		case joaat("W_4_GUTHRIE_FARM"):
			return 770074951;
		case joaat("W_4_HAGEN_ORCHARDS"):
			return -237206861;
		case joaat("W_4_HILL_HAVEN_RANCH"):
			return 1877776161;
		case joaat("W_4_HOUSEBOAT"):
			return 1837393665;
		case joaat("W_4_LAKE_DON_JULIO_HOUSE"):
			return 1603579970;
		case joaat("W_4_LONE_MULE_STEAD"):
			return -1456731677;
		case joaat("W_4_LUCKYS_CABIN"):
			return -1344767066;
		case joaat("W_4_MACOMBS_END"):
			return 1092217275;
		case joaat("W_4_MERKINS_WALLER"):
			return 1855549007;
		case joaat("W_4_MICAHS_HIDEOUT"):
			return -875696111;
		case joaat("W_4_MILLESANI_CLAIM"):
			return -91026072;
		case joaat("W_4_MOSSY_FLATS"):
			return 1876184276;
		case joaat("W_4_NEKOTI_ROCK"):
			return -876779166;
		case joaat("W_4_ODDFELLOWS_REST"):
			return -1116738159;
		case joaat("W_4_OLD_GREENBANK_MILL"):
			return 415864829;
		case joaat("W_4_OLD_TOMS_BLIND"):
			return -1408667066;
		case joaat("W_4_PLEASANCE_HOUSE"):
			return -1730421200;
		case joaat("W_4_PRINZ_CO"):
			return 1374995365;
		case joaat("W_6_RADLEYS_HOUSE"):
			return -1393093729;
		case joaat("W_5_RADLEYS_PASTURE"):
			return -1623232489;
		case joaat("W_4_RATTLESNAKE_HOLLOW"):
			return -1394664008;
		case joaat("W_4_REPENTANCE"):
			return -325788416;
		case joaat("W_4_RILEYS_CHARGE"):
			return -1807212021;
		case joaat("W_4_RIO_DEL_LOBO_HOUSE"):
			return -792566558;
		case joaat("W_4_SCRATCHING_POST"):
			return -2089448537;
		case joaat("W_4_SILENT_STEAD"):
			return 82527577;
		case joaat("W_4_SILTWATER_STRAND"):
			return -1354901649;
		case joaat("W_4_STILLWATER_CABIN"):
			return -1585921053;
		case joaat("W_4_STILT_SHACK"):
			return 222265732;
		case joaat("W_4_TANNERS_REACH"):
			return 1561007383;
		case joaat("W_4_TAXIDERMIST_HOUSE"):
			return 1104975149;
		case joaat("W_4_THE_HANGING_ROCK"):
			return 1515744307;
		case joaat("W_4_THE_LOFT"):
			return 893855320;
		case joaat("W_5_VALLEY_VIEW"):
			return 235472255;
		case joaat("W_4_VENTERS_PLACE"):
			return -1173041902;
		case joaat("W_4_VETERANS_HOMESTEAD"):
			return 326709244;
		case joaat("W_4_WALLACE_OVERLOOK"):
			return -1337880478;
		case joaat("W_5_ARGIL_RISE"):
			return 205568929;
		case joaat("W_4_BAYGALL_EDGE"):
			return 276890716;
		case joaat("W_4_BEAR_CLAW"):
			return -2110824426;
		case joaat("W_4_CAIRN_LODGE"):
			return 43681669;
		case joaat("W_4_CLAWSONS_REST"):
			return 562599937;
		case joaat("W_4_CRAWDAD_WILLIES"):
			return 1822876181;
		case joaat("W_5_DEER_COTTAGE"):
			return -683043834;
		case joaat("W_4_DODDS_BLUFF"):
			return 532503220;
		case joaat("W_4_DORMIN_CREST"):
			return 379859357;
		case joaat("W_4_FAIRVALE_SHANTY"):
			return 1610646968;
		case joaat("W_4_GILL_LANDING"):
			return 1268001912;
		case joaat("W_4_GRANGERS_HOGGERY"):
			return 653958186;
		case joaat("W_4_HANIS_BETHEL"):
			return -1917132299;
		case joaat("W_5_HURON_GLEN"):
			return -134804027;
		case joaat("W_5_LENORA_VIEW"):
			return 1116308524;
		case joaat("W_4_MANITO_GLADE"):
			return 1625008147;
		case joaat("W_4_MARTHAS_SWAIN"):
			return -727372692;
		case joaat("W_4_OLD_HARRY_FEN"):
			return 1354284392;
		case joaat("W_4_OLD_TRAIL_RISE"):
			return 1871337449;
		case joaat("W_4_OSMAN_GROVE"):
			return -1249289544;
		case joaat("W_4_PLANTERS_BAWN"):
			return 1714554710;
		case joaat("W_6_REED_COTTAGE"):
			return -443207523;
		case joaat("W_4_RIDGE_VIEW"):
			return -33677540;
		case joaat("W_4_ROBARD_FARM"):
			return -763271696;
		case joaat("W_4_SAWBONE_CLEARING"):
			return 2027689141;
		case joaat("W_4_SHEPHERDS_RISE"):
			return -1484929764;
		case joaat("W_4_SWADBASS_POINT"):
			return -1430883057;
		case joaat("W_4_TRAPPERS_CABIN"):
			return 2133877879;
		case joaat("W_5_VETTERS_ECHO"):
			return -508074447;
		case joaat("W_4_BEECHERS_HOPE"):
			return -507075109;
		case joaat("W_4_BUTCHER_CREEK"):
			return 147256338;
		case joaat("W_4_COOTS_CHAPEL"):
			return 929640770;
		case joaat("W_4_CORNWALL_KEROSENE_TAR"):
			return 648073069;
		case joaat("W_4_EWING_BASIN"):
			return 653799702;
		case joaat("W_5_GRAND_KORRIGAN_DOCKED"):
			return -296815465;
		case joaat("W_5_GRAND_KORRIGAN_SEA"):
			return 1944800674;
		case joaat("W_4_PRONGHORN_RANCH"):
			return 221661572;
		default:
			break;
	}
	return 0;
}

char* func_97(var uParam0)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_98(int iParam0)
{
	switch (iParam0)
	{
		case joaat("VANHORN"):
			return "VHT";
		case joaat("EMERALD"):
			return "EMR";
		case joaat("ANNESBURG"):
			return "ANN";
		case joaat("LAGRAS"):
			return "LAG";
		case joaat("RHODES"):
			return "RHO";
		case joaat("STRAWBERRY"):
			return "STR";
		case joaat("BLACKWATER"):
			return "BLA";
		case joaat("STDENIS"):
			return "NBX";
		case joaat("VALENTINE"):
			return "VAL";
		case joaat("ARMADILLO"):
			return "AMD";
		case joaat("TUMBLEWEED"):
			return "TBL";
		default:
			break;
	}
	return "";
}

char* func_99(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

char* func_100()
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "share/");
	strcat_s(&cVar0, 64, NETWORK::_NETWORK_GET_ROS_TITLE_NAME());
	strcat_s(&cVar0, 64, "/pedshots/");
	return func_102(cVar0);
}

char* func_101(int iParam0)
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
	return func_102(cVar0);
}

char* func_102(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_103(int iParam0)
{
	return NETWORK::_0x356F9FB0698C1FEB(iParam0, 0);
}

int func_104(int iParam0)
{
	return Global_1115725[iParam0 /*44*/];
}

bool func_105(int iParam0)
{
	return func_114(func_113(func_112(iParam0), joaat("HAS_BEEN_INTERACTED_WITH")));
}

int func_106(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("GIVER_NAME"):
			return 0;
		case joaat("GIVER_STRANGER_NAME"):
			return 1;
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

int func_107()
{
	return Global_1894899.f_2;
}

int func_108(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_115(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1894065[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[iVar4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[iVar4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2--;
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_109(int iParam0)
{
	if (!func_50(iParam0))
	{
		return -1;
	}
	return func_116(iParam0);
}

bool func_110(Vector3 vParam0, Vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 4:
			return 5;
		case 79:
			return 6;
		case 43:
			return 0;
		case 98:
			return 2;
		case 58:
			return 4;
		case 71:
			return 1;
		case 9:
			return 3;
		case 22:
			return 7;
		case 37:
			return 8;
		default:
			break;
	}
	return -1;
}

int func_112(int iParam0)
{
	int iVar0;

	iVar0 = func_117(iParam0);
	return iVar0;
}

struct<2> /*16*/ func_113(int iParam0, int iParam1)
{
	return func_118(iParam1, iParam0);
}

int func_114(var uParam0, var uParam1)
{
	var uVar0;

	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return 0;
	}
	else if (!STATS::STAT_ID_GET_BOOL(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

int func_115(Vector3 vParam0)
{
	int iVar0;

	iVar0 = func_119(vParam0, 0.0f, 0.0f, 0, 2);
	return func_119(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_116(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_120(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

int func_117(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WAR_VET"):
			return joaat("GFH_WAR_VET");
		case joaat("FLACO_HERNANDEZ"):
			return joaat("GFH_FLACO_HERNANDEZ");
		case joaat("JOSIAH_TRELAWNY"):
			return joaat("GFH_JOSIAH_TRELAWNY");
		case joaat("JOE"):
			return joaat("GFH_JOE");
		case joaat("SEAN_MACQUIRE"):
			return joaat("GFH_SEAN_MACQUIRE");
		case joaat("BLACK_BELLE"):
			return joaat("GFH_BLACK_BELLE");
		case joaat("SADIE_ADLER"):
			return joaat("GFH_SADIE_ADLER");
		case joaat("MAMMA_WATSON"):
			return joaat("GFH_MAMMA_WATSON");
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return joaat("GFH_THOMAS_SKIFF_CAPTAIN");
		case joaat("OBEDIAH_HINTON"):
			return joaat("GFH_OBEDIAH_HINTON");
		case joaat("LANGTON"):
			return joaat("GFH_LANGTON");
		case joaat("BONNIE"):
			return joaat("GFH_BONNIE");
		case joaat("SHAKY"):
			return joaat("GFH_SHAKY");
		case joaat("WALLACE_TRAIN_CLERK"):
			return joaat("GFH_TRAIN_CLERK_WALLACE");
		default:
			break;
	}
	return 0;
}

struct<2> /*16*/ func_118(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (iParam0 == 0)
	{
		return sVar2;
	}
	if (iParam1 == 0)
	{
		return sVar2;
	}
	sVar0 = { func_121(iParam0, iParam1) /*2*/ };
	if (!STATS::STAT_ID_IS_VALID(&sVar0))
	{
		return sVar2;
	}
	return sVar0;
}

int func_119(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (sParam0.f_0 < fParam3)
	{
		if (sParam0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (sParam0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

int func_120(int iParam0)
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

struct<2> /*16*/ func_121(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

