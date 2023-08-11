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
					case joaat("BLIP") /* GXTEntry: "Blip" */:
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
			UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP") /* GXTEntry: "Map" */, joaat("SHOW_INFO"));
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
		case joaat("AMBARINO") /* GXTEntry: "Ambarino" */:
			return joaat("REGION_AMBARINO");
		case joaat("LEMOYNE") /* GXTEntry: "Lemoyne" */:
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
		case joaat("GUARMA") /* GXTEntry: "Guarma" */:
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
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M" /* GXTEntry: "~COLOR_RED~Wanted Dead or Alive~s~" */);
		}
		else
		{
			sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F" /* GXTEntry: "~COLOR_RED~Wanted Dead or Alive~s~" */);
		}
		bVar0 = true;
	}
	else if (func_46(iVar5))
	{
		iVar1 = func_47(iVar5);
		if (iVar1 > 0)
		{
			bVar0 = true;
			sVar2 = MISC::VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH" /* GXTEntry: "~COLOR_RED~BOUNTY ~1$~" */, iVar1);
		}
	}
	if (!bVar0)
	{
		if ((56 == uParam0->f_14 && !func_48(52)) || (func_49(44) && (105 == uParam0->f_14 || 95 == uParam0->f_14)))
		{
			sVar2 = MISC::VAR_STRING(2, "NO_WEAPON_REGION" /* GXTEntry: "Weapons Forbidden" */);
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
			iVar17 = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY" /* GXTEntry: "This police station serves the Blackwater region. You can check in to see if ther" +
    "e are any bounties available." */);
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
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("MAP") /* GXTEntry: "Map" */, joaat("HIDE_INFO")))
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
			sVar0 = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER" /* GXTEntry: "~1~, ~2~" */, iVar1, iVar2);
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(iVar3))
		{
			sVar0 = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER" /* GXTEntry: "~1~, ~2~" */, iVar2, iVar3);
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
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /* GXTEntry: "Blip" */);
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
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360 /* GXTEntry: "Bounty:" */);
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
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /* GXTEntry: "Blip" */);
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
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360 /* GXTEntry: "Bounty:" */);
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
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY" /* GXTEntry: "BOUNTY" */);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", iVar2);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY" /* GXTEntry: "No Bounty" */);
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
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /* GXTEntry: "Blip" */);
	sVar2 = { func_66(PLAYER::INT_TO_PLAYERINDEX(iVar1)) /*2*/ };
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", func_67(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(iVar1)), joaat("COLOR_PURE_WHITE")));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(func_69(0, &sVar2, func_68(0))));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646 /* GXTEntry: "Player Rank" */);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_70(iVar1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
}

void func_34(int iParam0, var uParam1)
{
	var uVar0;
	int iVar1;

	MAP::SET_BLIP_FLASHES(iParam0, &uVar0, &iVar1);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /* GXTEntry: "Blip" */);
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
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /* GXTEntry: "Blip" */);
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
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /* GXTEntry: "Blip" */);
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
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /* GXTEntry: "Blip" */);
	strcpy_s(&cVar17, 128, func_73(iParam0));
	switch (func_74(iParam0))
	{
		case 1:
			sVar1 = { func_54(uParam1->f_19, iParam0, &iVar0) /*16*/ };
			if (iParam0 == 16)
			{
				strcpy_s(&sVar1, 128, "MAP_CARD_BOUNTY" /* GXTEntry: "Collect this bounty poster to begin hunting an outlaw." */);
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
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_BEECHERSHOPE" /* GXTEntry: "A brand new home in Great Plains for John, Abigail, and Jack Marston." */);
			break;
		case 65:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_FOOD" /* GXTEntry: "A daily meal of soup is prepared in the camp made with the best parts of the late" +
    "st hunted game. The soups help to revitalize the gang members and can provide a " +
    "variety of health benefits." */);
			break;
		case 66:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_TITHING_BOX" /* GXTEntry: @"A box set up by Dutch for camp members to donate towards a communal fund. Trinkets and cash donated here will be used to improve the quality of life for everyone in the camp. Strauss keeps a ledger by the box which contains records of all donations as well as notes on potential purchases that could be beneficial." */);
			break;
		case 67:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_BUTCHER" /* GXTEntry: @"Pearson is the camp butcher and leather worker. Any hunted game should be brought to him to work with. Meat will be stored in his chuckwagon to be used in soups, fine skins and bones will be kept for crafting camp furnishings and satchels, and all other animal parts will be donated to the camp funds." */);
			break;
		case 68:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_HORSE_HITCH" /* GXTEntry: "An area for camp members to manage their horses. Many camp members have strong bo" +
    "nds with their horses and some even keep more than one at a time." */);
			break;
		case 69:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_SUPPLY_AMMO" /* GXTEntry: "Arthur\'s lodging is used to store the camp\'s ammunition supplies. Any camp member" +
    " is free to take items from this wagon. If supplies are low this may lower the m" +
    "orale of the camp so it is in everyone\'s best interest to keep the wagon well st" +
    "ocked." */);
			break;
		case 70:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_SUPPLY_MEDICINE" /* GXTEntry: "Strauss\' wagon is used to store the camp\'s medical supplies. Any camp member is f" +
    "ree to take items from this wagon. If supplies are low this may lower the morale" +
    " of the camp so it is in everyone\'s best interest to keep the wagon well stocked" +
    "." */);
			break;
		case 71:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_SUPPLY_PROVISIONS" /* GXTEntry: "Pearson\'s wagon is used to store the camp\'s food supplies. Any camp member is fre" +
    "e to take items from this wagon. If supplies are low this may lower the morale o" +
    "f the camp so it is in everyone\'s best interest to keep the wagon well stocked." */);
			break;
		case 72:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_MINIGAME_POKER" /* GXTEntry: "If camp members need to unwind, they\'ll often play games of poker." */);
			break;
		case 73:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER" /* GXTEntry: "If camp members need to unwind, they\'ll often challenge each other to rounds of f" +
    "ive finger fillet." */);
			break;
		case 74:
			strcpy_s(&sVar0, 128, "MAP_CARD_CAMP_MINIGAME_DOMINOES" /* GXTEntry: "If camp members need to unwind, they\'ll often play games of dominoes." */);
			break;
	}
	return sVar0;
}

char* func_57(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK" /* GXTEntry: "An exciting card game in which the aim is to score as close as possible to, but n" +
    "ot over, 21." */;
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING" /* GXTEntry: "Fence Building ---}" */;
		case 3:
			return "MAP_CARD_MINIGAMES_POKER" /* GXTEntry: "Try your luck at poker, the popular card game of skill and chance. The aim is to " +
    "win chips either by having the best hand of cards, or by bluffing so that the ot" +
    "her players drop out." */;
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING" /* GXTEntry: "Go to the barn to milk the cows, for happy animals and healthy milk." */;
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS" /* GXTEntry: "Go to the barn to muck out the livestock stalls with Jack, for happy animals and " +
    "useful fertilizer." */;
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK" /* GXTEntry: "The classic game of linking tiles. In this Block variation, players do not draw n" +
    "ew tiles when they cannot move." */;
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES" /* GXTEntry: "The classic game of linking tiles. In this All Threes variation, points can be ea" +
    "rned when the total number of pips at either end of the domino chain is a multip" +
    "le of three." */;
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES" /* GXTEntry: "The classic game of linking tiles. In this All Fives variation, points can be ear" +
    "ned when the total number of pips at either end of the domino chain is a multipl" +
    "e of five." */;
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW" /* GXTEntry: "The classic game of linking tiles. The aim of Draw dominoes is to be the first pl" +
    "ayer to down all of your dominoes." */;
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC" /* GXTEntry: "A test of nerve in which players must complete a sequence of knife stabs between " +
    "the fingers of an outstretched hand. In Classic mode, you get five lives." */;
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT" /* GXTEntry: "A test of nerve in which players must complete a sequence of knife stabs between " +
    "the fingers of an outstretched hand. In this Burnout variation, you get only one" +
    " life and 30 seconds to complete as many rounds as you can." */;
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS" /* GXTEntry: "A test of nerve in which players must complete a sequence of knife stabs between " +
    "the fingers of an outstretched hand. In this Guts variation, you get unlimited l" +
    "ives, but must aim to complete perfect rounds in a 20 second time limit." */;
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
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_FISHING_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_FISHING_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_HUNTING_06"):
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_DOMINOES_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_COACH_ROBBERY_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_COACH_ROBBERY_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_BANK_ROBBERY_01"):
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_COACH_ROBBERY_03"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_COACH_ROBBERY_04"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_RUSTLING_02"):
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE" /* GXTEntry: "Placeholder - needs description." */;
		case joaat("HAI_HOME_ROBBERY_01"):
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER" /* GXTEntry: "Placeholder - needs description." */;
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
			return "BAY" /* GXTEntry: "Bayou Nwa" */;
		case 1:
			return "BGV" /* GXTEntry: "Big Valley" */;
		case 2:
			return "BLU" /* GXTEntry: "Bluewater Marsh" */;
		case 3:
			return "CML" /* GXTEntry: "Cumberland Forest" */;
		case 4:
			return "GRT" /* GXTEntry: "Great Plains" */;
		case 5:
			return "GRZ" /* GXTEntry: "The Grizzlies" */;
		case 6:
			return "GRE" /* GXTEntry: "Grizzlies East" */;
		case 7:
			return "GRW" /* GXTEntry: "Grizzlies West" */;
		case 8:
			return "GUA" /* GXTEntry: "Guarma" */;
		case 9:
			return "HRT" /* GXTEntry: "Heartlands" */;
		case 10:
			return "ROA" /* GXTEntry: "Roanoke Ridge" */;
		case 11:
			return "SCM" /* GXTEntry: "Scarlett Meadows" */;
		case 12:
			return "TAL" /* GXTEntry: "Tall Trees" */;
		case 15:
			return "CHO" /* GXTEntry: "Cholla Springs" */;
		case 13:
			return "GAP" /* GXTEntry: "Gaptooth Ridge" */;
		case 16:
			return "HEN" /* GXTEntry: "Hennigan\'s Stead" */;
		case 14:
			return "RIO" /* GXTEntry: "Rio Bravo" */;
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
			return "LEMOYNE" /* GXTEntry: "Lemoyne" */;
		case 1:
			return "WEST_ELIZ" /* GXTEntry: "West Elizabeth" */;
		case 2:
			return "LEMOYNE" /* GXTEntry: "Lemoyne" */;
		case 3:
			return "NEW_HANOV" /* GXTEntry: "New Hanover" */;
		case 4:
			return "WEST_ELIZ" /* GXTEntry: "West Elizabeth" */;
		case 5:
			return "AMBARINO" /* GXTEntry: "Ambarino" */;
		case 6:
			return "AMBARINO" /* GXTEntry: "Ambarino" */;
		case 7:
			return "AMBARINO" /* GXTEntry: "Ambarino" */;
		case 8:
			return "GUARMA" /* GXTEntry: "Guarma" */;
		case 9:
			return "NEW_HANOV" /* GXTEntry: "New Hanover" */;
		case 10:
			return "NEW_HANOV" /* GXTEntry: "New Hanover" */;
		case 11:
			return "LEMOYNE" /* GXTEntry: "Lemoyne" */;
		case 12:
			return "WEST_ELIZ" /* GXTEntry: "West Elizabeth" */;
		case 13:
			return "NEW_AUST" /* GXTEntry: "New Austin" */;
		case 14:
			return "NEW_AUST" /* GXTEntry: "New Austin" */;
		case 15:
			return "NEW_AUST" /* GXTEntry: "New Austin" */;
		case 16:
			return "NEW_AUST" /* GXTEntry: "New Austin" */;
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
		return MISC::VAR_STRING(10, "PLAYER_STRING" /* GXTEntry: "~fg~~1p~~fo~" */, sParam0);
	}
	return func_99(MISC::VAR_STRING(10, "PLAYER_STRING" /* GXTEntry: "~fg~~1p~~fo~" */, sParam0), iParam1);
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
			sVar0 = NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(uParam1, 0);
			break;
		case 1:
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (iVar1 < 0)
			{
				sVar0 = NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD(uParam1, 0);
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
			return "NM_PLAYLIST_ADVERSARY_MEDIUM" /* GXTEntry: "Showdown Series" */;
		case 3:
			return "NM_PLAYLIST_ADVERSARY_LARGE" /* GXTEntry: "Showdown Series Large" */;
		case 4:
			return "NM_PLAYLIST_SPECIAL_MODES_1";
		case 5:
			return "NM_PLAYLIST_SPECIAL_MODES_2";
		case 0:
			return "NM_PLAYLIST_RACE" /* GXTEntry: "Race Series" */;
		case 6:
			return "NM_PLAYLIST_NOMINATED" /* GXTEntry: "Nominated Series" */;
		case 7:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL" /* GXTEntry: "Nominated Series, 4 Player" */;
		case 8:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM" /* GXTEntry: "Nominated Series, 16 Player" */;
		case 9:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE" /* GXTEntry: "Nominated Series, 32 Player" */;
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
			return "BLIP_MG_POKER" /* GXTEntry: "Poker" */;
		case 1:
			return "BLIP_MG_BLACKJACK" /* GXTEntry: "Blackjack" */;
		case 2:
			return "BLIP_MG_DOMINOES" /* GXTEntry: "Dominoes" */;
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET" /* GXTEntry: "Five Finger Fillet" */;
		case 5:
			return "BLIP_SUMMER_COW" /* GXTEntry: "Cow Milking" */;
		case 6:
			return "BLIP_SUMMER_HORSE" /* GXTEntry: "Cleaning Stalls" */;
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S" /* GXTEntry: "Dominoes: All Threes" */;
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S" /* GXTEntry: "Dominoes: All Fives" */;
		case 10:
			return "BLIP_MG_DOMINOES_DRAW" /* GXTEntry: "Dominoes: Draw" */;
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT" /* GXTEntry: "FFF: Burnout" */;
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS" /* GXTEntry: "FFF: Guts" */;
		case 14:
			return "BLIP_PROC_LOANSHARK" /* GXTEntry: "Debtor" */;
		case 13:
			return "BLIP_AMBIENT_HERD" /* GXTEntry: "Herd" */;
		case 15:
			return "BLIP_PROC_BANK" /* GXTEntry: "Bank" */;
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER" /* GXTEntry: "Bounty Poster" */;
		case 17:
			return "BLIP_AMBIENT_COACH" /* GXTEntry: "Wagon" */;
		case 18:
			return "BLIP_AMBIENT_TRAIN" /* GXTEntry: "Train" */;
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT" /* GXTEntry: "Riverboat" */;
		case 20:
			return "BLIP_SHOP_STORE" /* GXTEntry: "General Store" */;
		case 21:
			return "BLIP_SHOP_SHADY_STORE" /* GXTEntry: "Fence" */;
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER" /* GXTEntry: "Wilderness Outfitters" */;
		case 23:
			return "BLIP_SHOP_GUNSMITH" /* GXTEntry: "Gunsmith" */;
		case 24:
			return "BLIP_SHOP_COACH_FENCING" /* GXTEntry: "Wagon Fence" */;
		case 25:
			return "BLIP_SHOP_DOCTOR" /* GXTEntry: "Doctor" */;
		case 26:
			return "BLIP_SHOP_TAILOR" /* GXTEntry: "Tailor" */;
		case 28:
			return "BLIP_SHOP_BLACKSMITH" /* GXTEntry: "Blacksmith" */;
		case 29:
			return "BLIP_SHOP_TRAINER" /* GXTEntry: "Stable" */;
		case 33:
			return "BLIP_POST_OFFICE" /* GXTEntry: "Post Office" */;
		case 34:
			return "BLIP_POST_OFFICE_REC" /* GXTEntry: "Post Office" */;
		case 30:
			return "BLIP_SHOP_TRAIN" /* GXTEntry: "Train Station" */;
		case 31:
			return "BLIP_SHOP_BARBER" /* GXTEntry: "Barber" */;
		case 32:
			return "BLIP_SHOP_BUTCHER" /* GXTEntry: "Butcher" */;
		case 35:
			return "BLIP_SHOP_TACKLE" /* GXTEntry: "Bait Shop" */;
		case 36:
			return "BLIP_SHOP_ANIMAL_TRAPPER" /* GXTEntry: "Trapper" */;
		case 37:
			return "BLIP_SHOP_HORSE" /* GXTEntry: "Stable" */;
		case 38:
			return "BLIP_SHOP_HORSE_FENCING" /* GXTEntry: "Horse Fence" */;
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE" /* GXTEntry: "Stable" */;
		case 40:
			return "BLIP_AMBIENT_NEWSPAPER" /* GXTEntry: "Newspaper Seller" */;
		case 41:
			return "BLIP_SHOP_MARKET_STALL" /* GXTEntry: "Market" */;
		case 42:
			return "BLIP_SHOP_MARKET_STALL" /* GXTEntry: "Market" */;
		case 43:
			return "BLIP_HOTEL_BED" /* GXTEntry: "Hotel" */;
		case 44:
			return "BLIP_PHOTO_STUDIO" /* GXTEntry: "Photo Studio" */;
		case 27:
			return "BLIP_SALOON" /* GXTEntry: "Saloon" */;
		case 45:
			return "BLIP_STABLE" /* GXTEntry: "Stable" */;
		case 46:
			return "BLIP_PROC_HOME" /* GXTEntry: "Bed" */;
		case 47:
			return "BLIP_PROC_HOME_LOCKED" /* GXTEntry: "Locked Property" */;
		case 48:
			return "BLIP_PROC_HOME" /* GXTEntry: "Bed" */;
		case 49:
			return "BLIP_AMBIENT_TELEGRAPH" /* GXTEntry: "Telegraph Office" */;
		case 50:
			return "BLIP_AMBIENT_COACH_TAXI" /* GXTEntry: "Stagecoach" */;
		case 51:
			return "BLIP_AMBIENT_THEATRE" /* GXTEntry: "Show" */;
		case 52:
			return "BLIP_REGION_CARAVAN" /* GXTEntry: "Caravan Camp" */;
		case 65:
			return "BLIP_CAMP_EAT" /* GXTEntry: "Grub" */;
		case 66:
			return "BLIP_AMBIENT_TITHING" /* GXTEntry: "Donate to Camp" */;
		case 67:
			return "BLIP_SHOP_PEARSON" /* GXTEntry: "Pearson" */;
		case 68:
			return "BLIP_CAMP_HITCH" /* GXTEntry: "Horse Station" */;
		case 69:
			return "BLIP_SUPPLIES_AMMO" /* GXTEntry: "Ammunition" */;
		case 70:
			return "BLIP_SUPPLIES_HEALTH" /* GXTEntry: "Health Supplies" */;
		case 71:
			return "BLIP_SUPPLIES_FOOD" /* GXTEntry: "Provisions" */;
		case 72:
			return "BLIP_MG_POKER" /* GXTEntry: "Poker" */;
		case 73:
			return "BLIP_MG_FIVE_FINGER_FILLET" /* GXTEntry: "Five Finger Fillet" */;
		case 74:
			return "BLIP_MG_DOMINOES" /* GXTEntry: "Dominoes" */;
		case 75:
			return "BLIP_REGION_HUNTING" /* GXTEntry: "Hunting Ground" */;
		case 76:
			return "BLIP_MG_FISHING" /* GXTEntry: "Fishing" */;
		case 77:
			return "BLIP_ROBBERY_COACH";
		case 78:
			return "BLIP_REGION_HUNTING" /* GXTEntry: "Hunting Ground" */;
		case 79:
			return "BLIP_ROBBERY_BANK";
		case 80:
			return "BLIP_MG_DOMINOES" /* GXTEntry: "Dominoes" */;
		case 81:
			return "BLIP_AMBIENT_HERD" /* GXTEntry: "Herd" */;
		case 53:
			return "BLIP_EVENT_APPLESEED" /* GXTEntry: "Appleseed Timber Co." */;
		case 54:
			return "BLIP_EVENT_CASTOR" /* GXTEntry: "Castor\'s Ridge" */;
		case 55:
			return "BLIP_EVENT_RAILROAD_CAMP" /* GXTEntry: "Central Union Railroad Camp" */;
		case 56:
			return "BLIP_EVENT_RIGGS_CAMP" /* GXTEntry: "Fort Riggs" */;
		case 57:
			return "BLIP_REGION_HIDEOUT" /* GXTEntry: "Gang Hideout" */;
		case 58:
			return "BLIP_PROC_HOME" /* GXTEntry: "Bed" */;
		case 59:
			return "BLIP_MG_FISHING" /* GXTEntry: "Fishing" */;
		case 60:
			return "BLIP_AMBIENT_THEATRE" /* GXTEntry: "Show" */;
		case 61:
			return "BLIP_AMBIENT_THEATRE" /* GXTEntry: "Show" */;
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
			return "ACT_ANY_LABEL" /* GXTEntry: "Any" */;
		case 234527101:
			return "ACT_NONE_LABEL" /* GXTEntry: "No Activity" */;
		case joaat("CA_HUNTING"):
			return "ACT_HUNTING_LABEL" /* GXTEntry: "Hunting" */;
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL" /* GXTEntry: "Five Finger Fillet" */;
		case joaat("CA_FISHING"):
			return "ACT_FISHING_LABEL" /* GXTEntry: "Fishing" */;
		case joaat("CA_KIDNAPPING"):
			return "ACT_KIDNAPPING_LABEL" /* GXTEntry: "Kidnapping" */;
		case joaat("CA_DRINKSHOOT_CAMP"):
			return "ACT_DRINKSHOOT_CAMP_LABEL";
		case 1193949598:
			return "ACT_SALOON_LABEL" /* GXTEntry: "Saloon" */;
		case 754620122:
			return "ACT_RUSTLING_LABEL" /* GXTEntry: "Rustling" */;
		case joaat("CA_POKER"):
			return "ACT_POKER_LABEL" /* GXTEntry: "Poker" */;
		case joaat("CA_POKER_CAMP"):
			return "ACT_POKER_CAMP_LABEL" /* GXTEntry: "Poker in Camp" */;
		case joaat("CA_COACH"):
			return "ACT_COACH_LABEL" /* GXTEntry: "Coach Robbery" */;
		case joaat("CA_BANK"):
			return "ACT_BANK_LABEL" /* GXTEntry: "Bank Robbery" */;
		case joaat("CA_TRAIN"):
			return "ACT_TRAIN_LABEL" /* GXTEntry: "Train Robbery" */;
		case joaat("CA_HOMEROBBERY"):
			return "ACT_HOMEROB_LABEL" /* GXTEntry: "Home Robbery" */;
		case joaat("CA_BLACKJACK"):
			return "ACT_BLACKJACK_LABEL" /* GXTEntry: "Blackjack" */;
		case 1523333387:
			return "ACT_CRAPS_LABEL";
		case joaat("CA_HIDEOUT"):
			return "ACT_HIDEOUT_LABEL" /* GXTEntry: "Hideout" */;
		case joaat("CA_DOMINOES_CAMP"):
			return "ACT_DOMINOES_CAMP_LABEL" /* GXTEntry: "Dominoes" */;
		case joaat("CA_RETURN_TO_CAMP"):
			return "ACT_RETURN_LABEL" /* GXTEntry: "Return to Camp" */;
		case joaat("CA_MISSION"):
			return "ACT_MISSION_LABEL" /* GXTEntry: "Mission Activity" */;
		default:
			break;
	}
	return "ACT_NONE_LABEL" /* GXTEntry: "No Activity" */;
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "CAHT02_DESC" /* GXTEntry: "Charles takes Arthur hunting for bison." */;
		case joaat("HAI_FISHING_01"):
			return "CAFS01_DESC" /* GXTEntry: "Javier and Arthur ride to a nearby fishing hole hoping to catch some Smallmouth B" +
    "ass." */;
		case joaat("HAI_FISHING_02"):
			return "CAFS02_DESC" /* GXTEntry: "Kieran and Arthur head out together to fish along the shores of Flat Iron Lake." */;
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "CAFFF05_DESC" /* GXTEntry: "Lenny wants to play Five Finger Fillet." */;
		case joaat("HAI_HUNTING_06"):
			return "CAHT06_DESC" /* GXTEntry: "Pearson invites Arthur to help him search for crayfish in the swamps near Shady B" +
    "elle." */;
		case joaat("HAI_DOMINOES_01"):
			return "CADM05_DESC" /* GXTEntry: "Play Dominoes with Tilly." */;
		case joaat("HAI_COACH_ROBBERY_01"):
			return "CACR02_DESC" /* GXTEntry: "Arthur, Sean and Mary Beth head out to rob a banking coach together." */;
		case joaat("HAI_COACH_ROBBERY_02"):
			return "CACR03_DESC" /* GXTEntry: "Bill takes Arthur and Tilly to help rob an armored banking coach." */;
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MGFFF_DESC" /* GXTEntry: "Micah wants to play Five Finger Fillet." */;
		case joaat("HAI_BANK_ROBBERY_01"):
			return "CABR01_DESC" /* GXTEntry: "Charles has purchased some plans for the Rhodes Bank, which show a structural wea" +
    "kness in one of the walls. Arthur, Charles and Uncle plan to destroy the wall wi" +
    "th dynamite, and rob the safes inside." */;
		case joaat("HAI_COACH_ROBBERY_03"):
			return "CACR01_DESC" /* GXTEntry: "Micah and Bill plan to ambush a banking coach riding through the swamps and invit" +
    "e Arthur to join them." */;
		case joaat("HAI_COACH_ROBBERY_04"):
			return "CACR04_DESC" /* GXTEntry: "Arthur decides to help Lenny attempt to rob a banking coach." */;
		case joaat("HAI_RUSTLING_02"):
			return "CARS02_DESC" /* GXTEntry: "Uncle and Arthur head to Hill Haven Ranch to rustle some cattle to sell to Clay a" +
    "nd Clive for cash." */;
		case joaat("HAI_HOME_ROBBERY_01"):
			return "PHHOM_DESC" /* GXTEntry: "Javier takes Arthur to Chez Porter to rob the family that lives there." */;
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
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_RHODES" /* GXTEntry: "Return to a location that you have previously visited for a fee." */);
			break;
		case 5:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_SAINTDENIS" /* GXTEntry: "Return to a location that you have previously visited for a fee." */);
			break;
		case 76:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_VALENTINE" /* GXTEntry: "Return to a location that you have previously visited for a fee." */);
			break;
		case 26:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_STRAWBERRY" /* GXTEntry: "Return to a location that you have previously visited for a fee." */);
			break;
		case 38:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_BLACKWATER" /* GXTEntry: "Return to a location that you have previously visited for a fee." */);
			break;
		default:
			strcpy_s(&cVar0, 128, "MAP_CARD_TAXI_RHODES" /* GXTEntry: "Return to a location that you have previously visited for a fee." */);
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
			return "GUARMA" /* GXTEntry: "Guarma" */;
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
		case joaat("W_4_ABANDONED_MISSION") /* GXTEntry: "Abandoned Mission, Gaptooth Ridge, NA" */:
			return joaat("MAP_DISCOVERABLETEXT_ABANDONED_MISSION");
		case joaat("W_4_ABANDONED_TRADING_POST") /* GXTEntry: "Abandoned Trading Post, Roanoke Ridge, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_ABANDONED_TRADING_POST");
		case joaat("W_4_FIRE_LOOKOUT_TOWER") /* GXTEntry: "Fire Lookout Tower, Roanoke Ridge, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_FIRE_LOOKOUT_TOWER");
		case joaat("W_4_FLATTENED_CABIN") /* GXTEntry: "Flattened Cabin, Grizzlies, AM" */:
			return joaat("MAP_DISCOVERABLETEXT_FLATTENED_CABIN");
		case joaat("W_5_FORT_BRENNAND") /* GXTEntry: "Fort Brennand, Roanoke Ridge, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_CIVIL_WAR_FORT");
		case joaat("W_5_LIMPANY") /* GXTEntry: "Limpany, The Heartlands, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_BURNED_SETTLEMENT");
		case joaat("W_4_METEOR_HOUSE") /* GXTEntry: "Meteor House, Roanoke Ridge, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_METEOR_HOUSE");
		case joaat("W_4_OIL_DERRICK") /* GXTEntry: "Oil Derrick, The Heartlands, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_ABANDONED_OIL_WELL");
		case joaat("W_4_PLEASANCE") /* GXTEntry: "Pleasance, Scarlett Meadows, LE" */:
			return joaat("MAP_DISCOVERABLETEXT_DEAD_TOWN");
		case joaat("W_4_ROADSIDE_BROTHEL") /* GXTEntry: "Roadside Brothel, Roanoke Ridge, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_ROADSIDE_BROTHEL");
		case joaat("W_4_THE_OLD_BACCHUS_PLACE") /* GXTEntry: "The Old Bacchus Place, Hennigan\'s Stead, NA" */:
			return joaat("MAP_DISCOVERABLETEXT_OLD_DIRTY_CABIN");
		case joaat("W_4_TRADING_POST") /* GXTEntry: "Trading Post, The Heartlands, NH" */:
			return joaat("MAP_DISCOVERABLETEXT_TRADING_POST");
		case joaat("W_4_TWO_CROWS") /* GXTEntry: "Two Crows, Cholla Springs, NA" */:
			return joaat("MAP_DISCOVERABLETEXT_DESERTED_FARM");
		case joaat("W_4_UTOPIAN_COLONY_BUILDING") /* GXTEntry: "Mysterious Hill Home, Grizzlies, AM" */:
			return joaat("MAP_DISCOVERABLETEXT_UTOPIAN_COLONY_BUILDING");
		case joaat("W_4_WITCHES_CAULDRON") /* GXTEntry: "Witches Cauldron, Grizzlies, AM" */:
			return joaat("MAP_DISCOVERABLETEXT_WITCHES_CAULDRON");
		case joaat("W_4_APPLESEED_TIMBER_COMPANY") /* GXTEntry: "Appleseed Timber Co., Big Valley, WE" */:
			return joaat("MAP_EVENTAREA_APPLESEED_TIMBER_COMPANY");
		case joaat("W_4_CASTORS_RIDGE") /* GXTEntry: "Castor\'s Ridge, The Heartlands, NH" */:
			return joaat("MAP_EVENTAREA_CASTORS_POND");
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1") /* GXTEntry: "Central Union Railroad, Roanoke Ridge, NH" */:
			return joaat("MAP_SPECIAL_EVENTAREA_CENTRAL_UNION_RAILROAD_1");
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2") /* GXTEntry: "Central Union Railroad, Roanoke Ridge, NH" */:
			return joaat("MAP_SPECIAL_EVENTAREA_CENTRAL_UNION_RAILROAD_2");
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3") /* GXTEntry: "Central Union Railroad, Roanoke Ridge, NH" */:
			return joaat("MAP_SPECIAL_EVENTAREA_CENTRAL_UNION_RAILROAD_3");
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP") /* GXTEntry: "Fort Riggs Holding Camp, Big Valley, WE" */:
			return joaat("MAP_EVENTAREA_FORT_RIGGS");
		case joaat("W_5_BEAVER_HOLLOW") /* GXTEntry: "Beaver Hollow, Roanoke Ridge, NH" */:
			return joaat("MAP_HIDEOUT_BEAVER_HOLLOW");
		case joaat("W_4_CLEMENS_POINT") /* GXTEntry: "Clemens Point, Scarlett Meadows, LE" */:
			return joaat("MAP_HIDEOUT_CLEMENS_POINT");
		case joaat("W_4_COLTER") /* GXTEntry: "Colter, Grizzlies, AM" */:
			return joaat("MAP_HIDEOUT_COLTER");
		case joaat("W_4_GAPTOOTH_BREACH") /* GXTEntry: "Gaptooth Breach, Gaptooth Ridge, NA" */:
			return joaat("MAP_HIDEOUT_GAPTOOTH_BREACH");
		case joaat("W_4_HANGING_DOG_RANCH") /* GXTEntry: "Hanging Dog Ranch, Big Valley, WE" */:
			return joaat("MAP_HIDEOUT_HANGING_DOG_RANCH");
		case joaat("W_4_HORSESHOE_OVERLOOK") /* GXTEntry: "Horseshoe Overlook, The Heartlands, NH" */:
			return joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK");
		case joaat("W_4_PIKES_BASIN") /* GXTEntry: "Pike\'s Basin, Hennigan\'s Stead, NA" */:
			return joaat("MAP_HIDEOUT_PIKES_BASIN");
		case joaat("W_4_SHADY_BELLE") /* GXTEntry: "Shady Belle, Bayou Nwa, LE" */:
			return joaat("MAP_HIDEOUT_SHADY_BELLE");
		case joaat("W_4_SIX_POINT_CABIN") /* GXTEntry: "Six Point Cabin, Cumberland Forest, NH" */:
			return joaat("MAP_HIDEOUT_SIX_POINT_CABIN");
		case joaat("W_4_SOLOMONS_FOLLY") /* GXTEntry: "Solomon\'s Folly, Gaptooth Ridge, NA" */:
			return joaat("MAP_HIDEOUT_SOLOMONS_FOLLY");
		case joaat("W_4_ABERDEEN_PIG_FARM") /* GXTEntry: "Aberdeen Pig Farm, Scarlett Meadows, LE" */:
			return joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM");
		case joaat("W_4_ADLER_RANCH") /* GXTEntry: "Adler Ranch, Grizzlies, AM" */:
			return joaat("MAP_HOMESTEAD_ADLER_RANCH");
		case joaat("W_4_CARMODY_DELL") /* GXTEntry: "Carmody Dell, The Heartlands, NH" */:
			return joaat("MAP_HOMESTEAD_CARMODY_DELL");
		case joaat("W_4_CATFISH_JACKSONS") /* GXTEntry: "Catfish Jacksons, Scarlett Meadows, LE" */:
			return joaat("MAP_HOMESTEAD_CATFISH_JACKSONS");
		case joaat("W_4_CHEZ_PORTER") /* GXTEntry: "Chez Porter, Grizzlies, AM" */:
			return joaat("MAP_HOMESTEAD_CHEZ_PORTER");
		case joaat("W_4_LARNED_SOD") /* GXTEntry: "Larned Sod, The Heartlands, NH" */:
			return joaat("MAP_HOMESTEAD_LARNED_SOD");
		case joaat("W_4_LONNIES_SHACK") /* GXTEntry: "Lonnie\'s Shack, Scarlett Meadows, LE" */:
			return joaat("MAP_HOMESTEAD_LONNIES_SHACK");
		case joaat("W_4_MACLEANS_HOUSE") /* GXTEntry: "Maclean\'s House, Roanoke Ridge, NH" */:
			return joaat("MAP_HOMESTEAD_MACLEANS_HOUSE");
		case joaat("W_4_PAINTED_SKY") /* GXTEntry: "Painted Sky, Big Valley, WE" */:
			return joaat("MAP_HOMESTEAD_PAINTED_SKY");
		case joaat("W_4_RIDGEWOOD_FARM") /* GXTEntry: "Ridgewood Farm, Cholla Springs, NA" */:
			return joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM");
		case joaat("W_4_VAN_HORN_MANSION") /* GXTEntry: "Van Horn Mansion, Roanoke Ridge, NH" */:
			return joaat("MAP_HOMESTEAD_VAN_HORN_MANSION");
		case joaat("W_4_WATSONS_CABIN") /* GXTEntry: "Watson\'s Cabin, Big Valley, WE" */:
			return joaat("MAP_HOMESTEAD_WATSONS_CABIN");
		case joaat("W_4_WILLARDS_REST") /* GXTEntry: "Willard\'s Rest, Roanoke Ridge, NH" */:
			return joaat("MAP_HOMESTEAD_WILLARDS_REST");
		case joaat("W_5_BERYLS_DREAM") /* GXTEntry: "Beryl\'s Dream, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_BERYLS_DREAM");
		case joaat("W_5_BLACK_BALSAM_RISE") /* GXTEntry: "Black Balsam Rise, Roanoke Ridge, NH" */:
			return joaat("MAP_LANDMARK_BLACK_BALSAM_RISE");
		case joaat("W_5_BLACK_BONE_FOREST") /* GXTEntry: "Black Bone Forest, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_BLACK_BONE_FOREST");
		case joaat("W_4_BRITTLEBRUSH_TRAWL") /* GXTEntry: "Brittlebrush Trawl, Hennigan\'s Stead, NA" */:
			return joaat("MAP_LANDMARK_BRITTLEBRUSH_TRAWL");
		case joaat("W_5_BROKEN_TREE") /* GXTEntry: "Broken Tree, Great Plains, WE" */:
			return joaat("MAP_LANDMARK_BROKEN_TREE");
		case joaat("W_4_CANEBREAK_MANOR") /* GXTEntry: "Canebreak Manor, Bluewater Marsh, LE" */:
			return joaat("MAP_LANDMARK_CANEBREAK_MANOR");
		case joaat("W_5_CHADWICK_FARM") /* GXTEntry: "Chadwick Farm, The Heartlands, NH" */:
			return joaat("MAP_LANDMARK_CHADWICK_FARM");
		case joaat("W_4_CLINGMAN") /* GXTEntry: "Clingman, Roanoke Ridge, NH" */:
			return joaat("MAP_LANDMARK_CLINGMAN");
		case joaat("W_4_COCHINAY") /* GXTEntry: "Cochinay, Tall Trees, WE" */:
			return joaat("MAP_LANDMARK_COCHINAY");
		case joaat("W_4_COMPSONS_STEAD") /* GXTEntry: "Compsons Stead, Scarlett Meadows, LE" */:
			return joaat("MAP_LANDMARK_COMPSONS_STEAD");
		case joaat("W_4_COPPERHEAD_LANDING") /* GXTEntry: "Copperhead Landing, Bluewater Marsh, LE" */:
			return joaat("MAP_LANDMARK_COPPERHEAD_LANDING");
		case joaat("W_4_CUEVA_SECA") /* GXTEntry: "Cueva Seca, Gaptooth Ridge, NA" */:
			return joaat("MAP_LANDMARK_CUEVO_SECO");
		case joaat("W_4_DOVERHILL") /* GXTEntry: "Doverhill, Roanoke Ridge, NH" */:
			return joaat("MAP_LANDMARK_DOVERHILL");
		case joaat("W_4_DOWNES_RANCH") /* GXTEntry: "Downes Ranch, The Heartlands, NH" */:
			return joaat("MAP_LANDMARK_DOWNES_RANCH");
		case joaat("W_4_EVELYN_MILLER_CAMP") /* GXTEntry: "Evelyn Miller Camp, Tall Trees, WE" */:
			return joaat("MAP_SPECIAL_LANDMARK_EVELYN_MILLER_CAMP");
		case joaat("W_4_FACE_ROCK") /* GXTEntry: "Face Rock, Scarlett Meadows, LE" */:
			return joaat("MAP_LANDMARK_FACE_ROCK");
		case joaat("W_4_FIRWOOD_RISE") /* GXTEntry: "Firwood Rise, Cumberland Forest, NH" */:
			return joaat("MAP_LANDMARK_FIRWOOD_RISE");
		case joaat("W_5_FISHINGSPOT") /* GXTEntry: "Fishing Spot, Bayou Nwa, LE" */:
			return joaat("MAP_LANDMARK_FISHING_SPOT");
		case joaat("W_4_GREENHOLLOW") /* GXTEntry: "Greenhollow, Hennigan\'s Stead, NA" */:
			return joaat("MAP_LANDMARK_GREENHOLLOW");
		case joaat("W_4_GUTHRIE_FARM") /* GXTEntry: "Guthrie Farm, The Heartlands, NH" */:
			return joaat("MAP_LANDMARK_GUTHRIE_FARM");
		case joaat("W_4_HAGEN_ORCHARDS") /* GXTEntry: "Hagen Orchards, Bayou Nwa, LE" */:
			return joaat("MAP_LANDMARK_HAGEN_ORCHARDS");
		case joaat("W_4_HILL_HAVEN_RANCH") /* GXTEntry: "Hill Haven Ranch, Scarlett Meadows, LE" */:
			return joaat("MAP_LANDMARK_HILL_HAVEN_RANCH");
		case joaat("W_4_HOUSEBOAT") /* GXTEntry: "Houseboat, Bluewater Marsh, LE" */:
			return joaat("MAP_LANDMARK_HOUSEBOAT");
		case joaat("W_4_LAKE_DON_JULIO_HOUSE") /* GXTEntry: "Lake Don Julio House, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE");
		case joaat("W_4_LONE_MULE_STEAD") /* GXTEntry: "Lone Mule Stead, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_LONE_MULE_STEAD");
		case joaat("W_4_LUCKYS_CABIN") /* GXTEntry: "Lucky\'s Cabin, The Heartlands, NH" */:
			return joaat("MAP_LANDMARK_LUCKYS_CABIN");
		case joaat("W_4_MACOMBS_END") /* GXTEntry: "Macomb\'s End, Bayou Nwa, LE" */:
			return joaat("MAP_LANDMARK_MACOMBS_END");
		case joaat("W_4_MERKINS_WALLER") /* GXTEntry: "Merkins Waller, Bayou Nwa, LE" */:
			return joaat("MAP_LANDMARK_MERKINS_WALLER");
		case joaat("W_4_MICAHS_HIDEOUT") /* GXTEntry: "Micah\'s Hideout, Grizzlies, AM" */:
			return joaat("MAP_LANDMARK_MICAHS_HIDEOUT");
		case joaat("W_4_MILLESANI_CLAIM") /* GXTEntry: "Millesani Claim, Grizzlies, AM" */:
			return joaat("MAP_LANDMARK_MILLESANI_CLAIM");
		case joaat("W_4_MOSSY_FLATS") /* GXTEntry: "Mossy Flats, Roanoke Ridge, NH" */:
			return joaat("MAP_LANDMARK_MOSSY_FLATS");
		case joaat("W_4_NEKOTI_ROCK") /* GXTEntry: "Nekoti Rock, Tall Trees, WE" */:
			return joaat("MAP_LANDMARK_NEKOTI_ROCK");
		case joaat("W_4_ODDFELLOWS_REST") /* GXTEntry: "Oddfellow\'s Rest, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_ODDFELLOWS_REST");
		case joaat("W_4_OLD_GREENBANK_MILL") /* GXTEntry: "Old Greenbank Mill, Scarlett Meadows, LE" */:
			return joaat("MAP_LANDMARK_OLD_GREENBANK_MILL");
		case joaat("W_4_OLD_TOMS_BLIND") /* GXTEntry: "Old Tom\'s Blind, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_OLD_TOMS_BLIND");
		case joaat("W_4_PLEASANCE_HOUSE") /* GXTEntry: "Pleasance House, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_PLEASANCE_HOUSE");
		case joaat("W_4_PRINZ_CO") /* GXTEntry: "Prinz & Co., Bayou Nwa, LE" */:
			return joaat("MAP_LANDMARK_PRINZ_CO");
		case joaat("W_6_RADLEYS_HOUSE") /* GXTEntry: "Radley\'s House, Scarlett Meadows, LE" */:
			return joaat("MAP_LANDMARK_RADLEYS_HOUSE");
		case joaat("W_5_RADLEYS_PASTURE") /* GXTEntry: "Radley\'s Pasture, Scarlett Meadows, LE" */:
			return joaat("MAP_LANDMARK_RADLEYS_PASTURE");
		case joaat("W_4_RATTLESNAKE_HOLLOW") /* GXTEntry: "Rattlesnake Hollow, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_RATTLESNAKE_HOLLOW");
		case joaat("W_4_REPENTANCE") /* GXTEntry: "Repentance, Rio Bravo, NA" */:
			return joaat("MAP_LANDMARK_REPENTANCE");
		case joaat("W_4_RILEYS_CHARGE") /* GXTEntry: "Riley\'s Charge, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_RILEYS_CHARGE");
		case joaat("W_4_RIO_DEL_LOBO_HOUSE") /* GXTEntry: "Rio del Lobo House, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_RIO_DEL_LOBO_HOUSE");
		case joaat("W_4_SCRATCHING_POST") /* GXTEntry: "Scratching Post, Gaptooth Ridge, NA" */:
			return joaat("MAP_LANDMARK_SCRATCHING_POST");
		case joaat("W_4_SILENT_STEAD") /* GXTEntry: "Silent Stead, Gaptooth Ridge, NA" */:
			return joaat("MAP_LANDMARK_SILENT_STEAD");
		case joaat("W_4_SILTWATER_STRAND") /* GXTEntry: "Siltwater Strand, Scarlett Meadows, LE" */:
			return joaat("MAP_LANDMARK_SILTWATER_STRAND");
		case joaat("W_4_STILLWATER_CABIN") /* GXTEntry: "Stillwater Cabin, Hennigan\'s Stead, NA" */:
			return joaat("MAP_LANDMARK_STILLWATER_CABIN");
		case joaat("W_4_STILT_SHACK") /* GXTEntry: "Stilt Shack, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_STILT_SHACK");
		case joaat("W_4_TANNERS_REACH") /* GXTEntry: "Tanner\'s Reach, Tall Trees, WE" */:
			return joaat("MAP_LANDMARK_TANNERS_REACH");
		case joaat("W_4_TAXIDERMIST_HOUSE") /* GXTEntry: "Taxidermist House, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_TAXIDERMIST_HOUSE");
		case joaat("W_4_THE_HANGING_ROCK") /* GXTEntry: "The Hanging Rock, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_THE_HANGING_ROCK");
		case joaat("W_4_THE_LOFT") /* GXTEntry: "The Loft, Grizzlies, AM" */:
			return joaat("MAP_LANDMARK_THE_LOFT");
		case joaat("W_5_VALLEY_VIEW") /* GXTEntry: "Valley View, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_VALLEY_VIEW");
		case joaat("W_4_VENTERS_PLACE") /* GXTEntry: "Venter\'s Place, Cholla Springs, NA" */:
			return joaat("MAP_LANDMARK_VENTERS_PLACE");
		case joaat("W_4_VETERANS_HOMESTEAD") /* GXTEntry: "Veteran\'s Homestead, Grizzlies, AM" */:
			return joaat("MAP_LANDMARK_VETERANS_HOMESTEAD");
		case joaat("W_4_WALLACE_OVERLOOK") /* GXTEntry: "Wallace Overlook, Big Valley, WE" */:
			return joaat("MAP_LANDMARK_WALLACE_OVERLOOK");
		case joaat("W_5_ARGIL_RISE") /* GXTEntry: "Argil Rise, Scarlett Meadows, LE" */:
			return joaat("MAP_SPECIAL_SHACK_BEECHERS_B");
		case joaat("W_4_BAYGALL_EDGE") /* GXTEntry: "Baygall Edge, Bayou Nwa, LE" */:
			return joaat("MAP_SHACK_SERIAL_KILLER");
		case joaat("W_4_BEAR_CLAW") /* GXTEntry: "Bear Claw, Tall Trees, WE" */:
			return joaat("MAP_SHACK_GRIZZLIES3");
		case joaat("W_4_CAIRN_LODGE") /* GXTEntry: "Cairn Lodge, Grizzlies, AM" */:
			return joaat("MAP_SHACK_STARVING_CHILDREN");
		case joaat("W_4_CLAWSONS_REST") /* GXTEntry: "Clawson\'s Rest, Grizzlies, AM" */:
			return joaat("MAP_SHACK_BEAR_CLAW");
		case joaat("W_4_CRAWDAD_WILLIES") /* GXTEntry: "Crawdad Willies, Bayou Nwa, LE" */:
			return joaat("MAP_SHACK_CRAWDAD_WILLIES");
		case joaat("W_5_DEER_COTTAGE") /* GXTEntry: "Deer Cottage, Roanoke Ridge, NH" */:
			return joaat("MAP_SHACK_IDENTICAL_TWINS_02");
		case joaat("W_4_DODDS_BLUFF") /* GXTEntry: "Dodd\'s Bluff, Grizzlies, AM" */:
			return joaat("MAP_SHACK_DEAD_RIVALS");
		case joaat("W_4_DORMIN_CREST") /* GXTEntry: "Dormin Crest, Grizzlies, AM" */:
			return joaat("MAP_SHACK_MISSING_MOUNTAIN_MAN");
		case joaat("W_4_FAIRVALE_SHANTY") /* GXTEntry: "Fairvale Shanty, Grizzlies, AM" */:
			return joaat("MAP_SHACK_GUN_FIGHT");
		case joaat("W_4_GILL_LANDING") /* GXTEntry: "Gill Landing, The Heartlands, NH" */:
			return joaat("MAP_SHACK_RARE_FISH_SHACK");
		case joaat("W_4_GRANGERS_HOGGERY") /* GXTEntry: "Granger\'s Hoggery, The Heartlands, NH" */:
			return joaat("MAP_SHACK_GRANGERS_HOGGERY");
		case joaat("W_4_HANIS_BETHEL") /* GXTEntry: "Hani\'s Bethel, The Heartlands, NH" */:
			return joaat("MAP_SHACK_LOONEY_CULT");
		case joaat("W_5_HURON_GLEN") /* GXTEntry: "Huron Glen, Roanoke Ridge, NH" */:
			return joaat("MAP_SHACK_POISON_LEAK");
		case joaat("W_5_LENORA_VIEW") /* GXTEntry: "Lenora View, Big Valley, WE" */:
			return joaat("MAP_SHACK_MISSING_HUSBAND");
		case joaat("W_4_MANITO_GLADE") /* GXTEntry: "Manito Glade, Roanoke Ridge, NH" */:
			return joaat("MAP_SHACK_ANGRY_ISOLATIONIST");
		case joaat("W_4_MARTHAS_SWAIN") /* GXTEntry: "Martha\'s Swain, Grizzlies, AM" */:
			return joaat("MAP_SHACK_CIVIL_WAR_BRIDE");
		case joaat("W_4_OLD_HARRY_FEN") /* GXTEntry: "Old Harry Fen, Scarlett Meadows, LE" */:
			return joaat("MAP_SHACK_SLAVE_PEN");
		case joaat("W_4_OLD_TRAIL_RISE") /* GXTEntry: "Old Trail Rise, Scarlett Meadows, LE" */:
			return joaat("MAP_SHACK_UNDERGROUND_RAILROAD");
		case joaat("W_4_OSMAN_GROVE") /* GXTEntry: "Osman Grove, Roanoke Ridge, NH" */:
			return joaat("MAP_SHACK_HAPPY_FAMILY");
		case joaat("W_4_PLANTERS_BAWN") /* GXTEntry: "Planter\'s Bawn, Grizzlies, AM" */:
			return joaat("MAP_SHACK_FROZEN_EXPLORERS");
		case joaat("W_6_REED_COTTAGE") /* GXTEntry: "Reed Cottage, Roanoke Ridge, NH" */:
			return joaat("MAP_SHACK_IDENTICAL_TWINS_01");
		case joaat("W_4_RIDGE_VIEW") /* GXTEntry: "Ridge View, The Heartlands, NH" */:
			return joaat("MAP_SPECIAL_SHACK_BEECHERS_C");
		case joaat("W_4_ROBARD_FARM") /* GXTEntry: "Robard Farm, Scarlett Meadows, LE" */:
			return joaat("MAP_SHACK_LOVE_TRIANGLE");
		case joaat("W_4_SAWBONE_CLEARING") /* GXTEntry: "Sawbone Clearing, Roanoke Ridge, NH" */:
			return joaat("MAP_SHACK_29");
		case joaat("W_4_SHEPHERDS_RISE") /* GXTEntry: "Shepherds Rise, Big Valley, WE" */:
			return joaat("MAP_SPECIAL_SHACK_SHEPHERDS_RISE");
		case joaat("W_4_SWADBASS_POINT") /* GXTEntry: "Swadbass Point, Tall Trees, WE" */:
			return joaat("MAP_SHACK_AURORA_BASIN");
		case joaat("W_4_TRAPPERS_CABIN") /* GXTEntry: "Trapper\'s Cabin, Bluewater Marsh, LE" */:
			return joaat("MAP_SHACK_TRAPPERS_CABIN");
		case joaat("W_5_VETTERS_ECHO") /* GXTEntry: "Vetter\'s Echo, Big Valley, WE" */:
			return joaat("MAP_SHACK_HUNGRY_BEAR");
		case joaat("W_4_BEECHERS_HOPE") /* GXTEntry: "Beecher\'s Hope, Great Plains, WE" */:
			return joaat("MAP_SETTLEMENT_BEECHERS_HOPE");
		case joaat("W_4_BUTCHER_CREEK") /* GXTEntry: "Butcher Creek, Roanoke Ridge, NH" */:
			return joaat("MAP_SETTLEMENT_BUTCHER_CREEK");
		case joaat("W_4_COOTS_CHAPEL") /* GXTEntry: "Coots Chapel, Cholla Springs, NA" */:
			return joaat("MAP_SETTLEMENT_COOTS_CHAPEL");
		case joaat("W_4_CORNWALL_KEROSENE_TAR") /* GXTEntry: "Cornwall Kerosene & Tar, The Heartlands, NH" */:
			return joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR");
		case joaat("W_4_EWING_BASIN") /* GXTEntry: "Ewing Basin, Grizzlies, AM" */:
			return joaat("MAP_SETTLEMENT_EWING_BASIN");
		case joaat("W_5_GRAND_KORRIGAN_DOCKED") /* GXTEntry: "Grand Korrigan, Lannahechee River" */:
			return joaat("MAP_SPECIAL_SETTLEMENT_THE_GRAND_KORRIGAN_DOCKED");
		case joaat("W_5_GRAND_KORRIGAN_SEA") /* GXTEntry: "Grand Korrigan, Lannahechee River" */:
			return joaat("MAP_SPECIAL_SETTLEMENT_THE_GRAND_KORRIGAN_SEA");
		case joaat("W_4_PRONGHORN_RANCH") /* GXTEntry: "Pronghorn Ranch, Big Valley, WE" */:
			return joaat("MAP_SPECIAL_SETTLEMENT_PRONGHORN_RANCH");
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
			return "VHT" /* GXTEntry: "Van Horn Trading Post" */;
		case joaat("EMERALD"):
			return "EMR" /* GXTEntry: "Emerald Ranch" */;
		case joaat("ANNESBURG"):
			return "ANN" /* GXTEntry: "Annesburg" */;
		case joaat("LAGRAS"):
			return "LAG" /* GXTEntry: "Lagras" */;
		case joaat("RHODES"):
			return "RHO" /* GXTEntry: "Rhodes" */;
		case joaat("STRAWBERRY"):
			return "STR" /* GXTEntry: "Strawberry" */;
		case joaat("BLACKWATER"):
			return "BLA" /* GXTEntry: "Blackwater" */;
		case joaat("STDENIS"):
			return "NBX" /* GXTEntry: "Saint Denis" */;
		case joaat("VALENTINE"):
			return "VAL" /* GXTEntry: "Valentine" */;
		case joaat("ARMADILLO"):
			return "AMD" /* GXTEntry: "Armadillo" */;
		case joaat("TUMBLEWEED"):
			return "TBL" /* GXTEntry: "Tumbleweed" */;
		default:
			break;
	}
	return "";
}

char* func_99(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING" /* GXTEntry: "~HC_~1p~~~2~~s~" */, MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
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
	return NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD(iParam0, 0);
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

