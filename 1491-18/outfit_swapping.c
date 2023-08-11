#pragma region Local_Variables
	struct<6> /*48*/ sLocal_0 = { 0, 0, 0, 1088421888, 0, 0 } ;
	struct<2> /*16*/ sScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#pragma endregion

void __SCRIPT()
{
	sLocal_0.f_4 = func_1(sScriptParam_0.f_1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_2();
	}
	if (sLocal_0.f_4 != -1 && sLocal_0.f_4 != Global_40.f_7729)
	{
		sLocal_0.f_5 = func_3(sLocal_0.f_4);
		if (func_4(Global_35, sLocal_0.f_5))
		{
			if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits"))
			{
				sLocal_0.f_2 = DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits");
			}
			Global_1905943 = 1;
			sLocal_0.f_1 = 1;
			Global_1905941 = sLocal_0.f_4;
			if ((((sLocal_0.f_2 || Global_1935630.f_2 != Global_40.f_39) || ENTITY::GET_ENTITY_MODEL(Global_35) != Global_40.f_39) || PLAYER::IS_PLAYER_TELEPORT_ACTIVE()) || Global_1879534.f_1)
			{
				func_5(&sLocal_0, 3);
			}
			while (sLocal_0.f_0 < 3)
			{
				func_6(&sLocal_0);
				BUILTIN::WAIT(0);
			}
		}
	}
	func_2();
}

int func_1(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT") /* GXTEntry: "Fancy Suit" */:
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */:
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT") /* GXTEntry: "Winter Outfit" */:
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */:
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT") /* GXTEntry: "Island Outfit" */:
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT") /* GXTEntry: "Robbery Outfit" */:
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT") /* GXTEntry: "The Wittemore" */:
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT") /* GXTEntry: "Police Outfit" */:
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT") /* GXTEntry: "Custom Outfit" */:
			return 0;
		case joaat("CLOTHING_OUTFIT_OWNED_001") /* GXTEntry: "Brawler\'s Outfit" */:
			return 24;
		case joaat("CLOTHING_OUTFIT_OWNED_002") /* GXTEntry: "The Ruffian" */:
			return 25;
		case joaat("CLOTHING_OUTFIT_OWNED_003") /* GXTEntry: "The Rebel" */:
			return 26;
		case joaat("CLOTHING_OUTFIT_OWNED_005") /* GXTEntry: "The Innocent" */:
			return 27;
		case joaat("CLOTHING_OUTFIT_OWNED_006") /* GXTEntry: "The Pursuer" */:
			return 28;
		case joaat("CLOTHING_SP_OUTFIT_SONY_001") /* GXTEntry: "The Grizzlies Outlaw" */:
			return 21;
		case joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001") /* GXTEntry: "The Nuevo Paraiso" */:
			return 22;
		case 1784889667:
			return 13;
		case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */:
			return 8;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_ONE") /* GXTEntry: "Saved Custom Outfit One" */:
			return 1;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_TWO") /* GXTEntry: "Saved Custom Outfit Two" */:
			return 2;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_THREE") /* GXTEntry: "Saved Custom Outfit Three" */:
			return 3;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR") /* GXTEntry: "Saved Custom Outfit Four" */:
			return 4;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE") /* GXTEntry: "Saved Custom Outfit Five" */:
			return 5;
		case 1902428294 /* GXTEntry: "The Wittemore" */:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332 /* GXTEntry: "Island Outfit" */:
			return 11;
		case 1788874135 /* GXTEntry: "Island Outfit Shackles" */:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555 /* GXTEntry: "The Homesteader" */:
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER") /* GXTEntry: "The Winter Cowboy" */:
			return 70;
		case 890706995 /* GXTEntry: "The Cowhand" */:
			return 93;
		case 1156438275 /* GXTEntry: "The Rancher" */:
			return 90;
		case joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT") /* GXTEntry: "The Rancher" */:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */:
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM") /* GXTEntry: "The Homesteader" */:
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H") /* GXTEntry: "The Chevalier" */:
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L") /* GXTEntry: "The Heartlands" */:
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H") /* GXTEntry: "The Gambler" */:
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L") /* GXTEntry: "The Earl" */:
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H") /* GXTEntry: "The McLaughlin" */:
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L") /* GXTEntry: "The Josiah" */:
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H") /* GXTEntry: "The Farrier" */:
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L") /* GXTEntry: "The Donegal" */:
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H") /* GXTEntry: "The Bulldogger" */:
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L") /* GXTEntry: "The Ranch Hand" */:
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H") /* GXTEntry: "The Scrapper" */:
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L") /* GXTEntry: "The Armadillo" */:
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H") /* GXTEntry: "The Valentine" */:
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L") /* GXTEntry: "The Vaquero" */:
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H") /* GXTEntry: "The Dewberry Creek" */:
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L") /* GXTEntry: "The Clairmont" */:
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H") /* GXTEntry: "The Roscoe" */:
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L") /* GXTEntry: "The Estate Boss" */:
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H") /* GXTEntry: "The Drover" */:
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L") /* GXTEntry: "The Calumet" */:
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H") /* GXTEntry: "The Cowpuncher" */:
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L") /* GXTEntry: "The Tumbleweed" */:
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H") /* GXTEntry: "The Drifter" */:
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L") /* GXTEntry: "The Leatherman" */:
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H") /* GXTEntry: "The Cumberland" */:
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L") /* GXTEntry: "The Millesani" */:
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H") /* GXTEntry: "The Faulkton" */:
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L") /* GXTEntry: "The Dolton" */:
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H") /* GXTEntry: "The Corson" */:
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L") /* GXTEntry: "The Saint Denis" */:
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H") /* GXTEntry: "The Deauville" */:
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L") /* GXTEntry: "The Bretagne" */:
			return 60;
		case joaat("CLOTHING_SP_NUDE"):
			return 23;
		default:
			break;
	}
	return -1;
}

void func_2()
{
	if (sLocal_0.f_1)
	{
		Global_1905943 = 0;
		func_7(2);
		func_7(1);
		STREAMING::REMOVE_ANIM_DICT(func_8());
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return joaat("META_OUTFIT_NUDE");
		default:
			break;
	}
	return joaat("META_OUTFIT_COOL_WEATHER");
}

bool func_4(int iParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	bVar0 = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, ENTITY::GET_ENTITY_MODEL(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

void func_5(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

void func_6(int iParam0)
{
	switch (*iParam0)
	{
		case 0:
			iParam0->f_3 -= MISC::GET_FRAME_TIME();
			if (func_9() || iParam0->f_3 <= 0.0f)
			{
				func_10(1);
				func_7(2);
				func_5(iParam0, 1);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return;
			}
			func_11();
			if (func_13(func_12(iParam0->f_4)))
			{
				INVENTORY::_0x46743BBFEDBC859E(func_14(0), func_12(iParam0->f_4), true);
			}
			func_15(Global_35, iParam0->f_4, 0, 1, 0);
			func_16(iParam0->f_4);
			func_17(MISC::VAR_STRING(10, "OUT_SWAP" /* GXTEntry: "Swapped to ~1~." */, MISC::VAR_STRING(0, func_12(iParam0->f_4))), 10000, 0, 0, 0, 1);
			func_5(iParam0, 2);
			break;
		case 2:
			if (ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return;
			}
			func_18(Global_1905941, (1 << 12));
			func_19(Global_40.f_7729, (1 << 12));
			Global_40.f_7729 = iParam0->f_4;
			func_20(26, 0, 0, 0, 0);
			func_5(iParam0, 3);
			break;
	}
}

void func_7(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

char* func_8()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_9()
{
	STREAMING::REQUEST_ANIM_DICT(func_8());
	if (STREAMING::HAS_ANIM_DICT_LOADED(func_8()))
	{
		func_10(1);
		return true;
	}
	return false;
}

void func_10(int iParam0)
{
	Global_1946054 |= iParam0;
}

int func_11()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;

	iVar5 = PLAYER::PLAYER_PED_ID();
	bVar3 = WEAPON::GET_CURRENT_PED_WEAPON(iVar5, &iVar0, true, 0, false);
	bVar4 = WEAPON::GET_CURRENT_PED_WEAPON(iVar5, &iVar1, true, 1, false);
	if ((func_21(iVar0) || func_21(iVar1)) || WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
	{
		return 0;
	}
	if (PED::GET_PED_RESET_FLAG(iVar5, 267 /*PRF_0x8F5BB50B*/))
	{
		return 0;
	}
	if (bVar3)
	{
		iVar2 = func_22(iVar0);
		switch (iVar2)
		{
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				func_23(1);
				return 1;
			case joaat("GROUP_PISTOL"):
				return 0;
			case joaat("GROUP_REVOLVER"):
				return 0;
			default:
				break;
		}
		if (iVar0 == joaat("WEAPON_UNARMED"))
		{
			func_23(2);
		}
	}
	if (bVar4)
	{
		if (iVar1 != joaat("WEAPON_UNARMED"))
		{
			func_23(0);
		}
		return 1;
	}
	func_23(2);
	return 1;
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return joaat("CLOTHING_FANCY_SUIT") /* GXTEntry: "Fancy Suit" */;
		case 6:
			return joaat("CLOTHING_GUNSLINGER_OUTFIT") /* GXTEntry: "The Gunslinger" */;
		case 7:
			return joaat("CLOTHING_WINTER_OUTFIT") /* GXTEntry: "Winter Outfit" */;
		case 8:
			return joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT") /* GXTEntry: "The Winter Gunslinger" */;
		case 9:
			return joaat("CLOTHING_WARM_WEATHER_OUTFIT") /* GXTEntry: "The Summer Gunslinger" */;
		case 10:
			return joaat("CLOTHING_ISLAND_OUTFIT") /* GXTEntry: "Island Outfit" */;
		case 11:
			return 294553332 /* GXTEntry: "Island Outfit" */;
		case 12:
			return 1788874135 /* GXTEntry: "Island Outfit Shackles" */;
		case 15:
			return joaat("CLOTHING_ROBBERY_OUTFIT") /* GXTEntry: "Robbery Outfit" */;
		case 16:
			return joaat("CLOTHING_HEIST_OUTFIT") /* GXTEntry: "The Wittemore" */;
		case 17:
			return 1902428294 /* GXTEntry: "The Wittemore" */;
		case 18:
			return -2114499732;
		case 19:
			return 800827126;
		case 20:
			return joaat("CLOTHING_POLICE_OUTFIT") /* GXTEntry: "Police Outfit" */;
		case 0:
			return joaat("CLOTHING_CUSTOM_ONE_OUTFIT") /* GXTEntry: "Custom Outfit" */;
		case 1:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_ONE") /* GXTEntry: "Saved Custom Outfit One" */;
		case 2:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_TWO") /* GXTEntry: "Saved Custom Outfit Two" */;
		case 3:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_THREE") /* GXTEntry: "Saved Custom Outfit Three" */;
		case 4:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR") /* GXTEntry: "Saved Custom Outfit Four" */;
		case 5:
			return joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE") /* GXTEntry: "Saved Custom Outfit Five" */;
		case 24:
			return joaat("CLOTHING_OUTFIT_OWNED_001") /* GXTEntry: "Brawler\'s Outfit" */;
		case 25:
			return joaat("CLOTHING_OUTFIT_OWNED_002") /* GXTEntry: "The Ruffian" */;
		case 26:
			return joaat("CLOTHING_OUTFIT_OWNED_003") /* GXTEntry: "The Rebel" */;
		case 27:
			return joaat("CLOTHING_OUTFIT_OWNED_005") /* GXTEntry: "The Innocent" */;
		case 28:
			return joaat("CLOTHING_OUTFIT_OWNED_006") /* GXTEntry: "The Pursuer" */;
		case 21:
			return joaat("CLOTHING_SP_OUTFIT_SONY_001") /* GXTEntry: "The Grizzlies Outlaw" */;
		case 22:
			return joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001") /* GXTEntry: "The Nuevo Paraiso" */;
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
			return -272211555 /* GXTEntry: "The Homesteader" */;
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
			return joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER") /* GXTEntry: "The Winter Cowboy" */;
		case 93:
			return 890706995 /* GXTEntry: "The Cowhand" */;
		case 90:
			return 1156438275 /* GXTEntry: "The Rancher" */;
		case 91:
			return joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT") /* GXTEntry: "The Rancher" */;
		case 92:
			return 594312243;
		case 94:
			return -978578725;
		case 13:
			return 1784889667;
		case 62:
			return joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER") /* GXTEntry: "The Cowboy" */;
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
			return joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM") /* GXTEntry: "The Homesteader" */;
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H") /* GXTEntry: "The Chevalier" */;
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L") /* GXTEntry: "The Heartlands" */;
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H") /* GXTEntry: "The Gambler" */;
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L") /* GXTEntry: "The Earl" */;
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H") /* GXTEntry: "The McLaughlin" */;
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L") /* GXTEntry: "The Josiah" */;
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H") /* GXTEntry: "The Farrier" */;
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L") /* GXTEntry: "The Donegal" */;
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H") /* GXTEntry: "The Bulldogger" */;
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L") /* GXTEntry: "The Ranch Hand" */;
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H") /* GXTEntry: "The Scrapper" */;
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L") /* GXTEntry: "The Armadillo" */;
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H") /* GXTEntry: "The Valentine" */;
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L") /* GXTEntry: "The Vaquero" */;
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H") /* GXTEntry: "The Dewberry Creek" */;
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L") /* GXTEntry: "The Clairmont" */;
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H") /* GXTEntry: "The Roscoe" */;
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L") /* GXTEntry: "The Estate Boss" */;
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H") /* GXTEntry: "The Drover" */;
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L") /* GXTEntry: "The Calumet" */;
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H") /* GXTEntry: "The Cowpuncher" */;
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L") /* GXTEntry: "The Tumbleweed" */;
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H") /* GXTEntry: "The Drifter" */;
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L") /* GXTEntry: "The Leatherman" */;
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H") /* GXTEntry: "The Cumberland" */;
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L") /* GXTEntry: "The Millesani" */;
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H") /* GXTEntry: "The Faulkton" */;
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L") /* GXTEntry: "The Dolton" */;
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H") /* GXTEntry: "The Corson" */;
		case 58:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L") /* GXTEntry: "The Saint Denis" */;
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H") /* GXTEntry: "The Deauville" */;
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L") /* GXTEntry: "The Bretagne" */;
		default:
			break;
	}
	return 0;
}

int func_13(int iParam0)
{
	var uVar0;

	return func_24(iParam0, &uVar0);
}

int func_14(bool bParam0)
{
	if (func_25() == -1)
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

int func_15(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_12(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_26(iParam1);
	}
	if ((bParam3 && func_27(iParam1, (1 << 12))) && Global_1946054.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_28(iVar0, Global_1946054.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_19(Global_40.f_7729, (1 << 12));
		func_18(Global_1905941, (1 << 12));
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_29(iParam0);
	}
	func_30();
	if (!func_31(iParam1))
	{
		func_33(iVar0, iParam0, func_32(iParam1), 1, 0, 1);
	}
	func_34(iParam0);
	return 1;
}

void func_16(int iParam0)
{
	if (!func_35(iParam0))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(Global_35, "outfit_tags"))
	{
		DECORATOR::DECOR_REMOVE(Global_35, "outfit_tags");
	}
	DECORATOR::DECOR_SET_INT(Global_35, "outfit_tags", Global_40.f_7157[iParam0 /*3*/].f_2);
}

int func_17(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_18(int iParam0, int iParam1)
{
	if (!func_35(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

void func_19(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_35(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] & iParam1);
	Global_40.f_7157[iParam0 /*3*/] -= iVar0;
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_10((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_36(sVar0);
}

bool func_21(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_22(int iParam0)
{
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		return joaat("GROUP_PISTOL");
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		return joaat("GROUP_REVOLVER");
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iParam0))
	{
		return joaat("GROUP_REPEATER");
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		return joaat("GROUP_RIFLE");
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		return joaat("GROUP_SHOTGUN");
	}
	else if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
	{
		return joaat("GROUP_SNIPER");
	}
	return 0;
}

void func_23(int iParam0)
{
	Global_1946054.f_859 = iParam0;
}

int func_24(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_25()
{
	return Global_1572887.f_12;
}

int func_26(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_37();
	}
	if (func_25() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

bool func_27(int iParam0, int iParam1)
{
	if (!func_35(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

bool func_28(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_38(iParam1);
	func_39(&(Global_1946054.f_964), iVar0, iParam0, joaat("PLAYER_TYPE"), 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

void func_29(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_30()
{
	char* sVar0;

	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		return;
	}
	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
	{
		return;
	}
	if (!func_40(1))
	{
		return;
	}
	sVar0 = "outfit_change_unarmed";
	switch (Global_1946054.f_859)
	{
		case 1:
			sVar0 = "outfit_change_longarms";
			break;
		case 0:
			sVar0 = "outfit_change_offhand";
			break;
		case 2:
			sVar0 = "outfit_change_unarmed";
			break;
	}
	TASK::TASK_PLAY_ANIM(Global_35, func_8(), sVar0, 8.0f, -8.0f, -1, 67108880, 0.0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_7(1);
	STREAMING::REMOVE_ANIM_DICT(func_8());
}

bool func_31(int iParam0)
{
	return false;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 1;
		case 3:
			return 1;
		case 4:
			return 1;
		case 5:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_33(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = iParam0;
	iVar3 = -1;
	iVar4 = func_1(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_25() != -1)
	{
		return;
	}
	func_41();
	if (bParam5)
	{
		if (!func_42(&(Global_1946054.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_40((1 << 15)) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
	{
		func_43();
	}
	func_44(iVar3, 1, 1, 1, 1, 1);
	func_20(31, 0, 0, 0, 0);
	func_45(0);
	if (!bParam3)
	{
		return;
	}
	if (bVar0)
	{
		iVar1 = 8;
	}
	if (!bParam4)
	{
		if (PED::IS_PED_A_PLAYER(iParam1))
		{
			func_20(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_20(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_46(&(Global_1946054.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_34(int iParam0)
{
	PED::_SET_PED_DIRT_CLEANED(iParam0, 0.0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

bool func_35(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_36(struct<4> /*32*/ sParam0)
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
			if (func_47(sParam0.f_0))
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
			func_48(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_10(8);
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
			if (func_47(sParam0.f_0))
			{
				return;
			}
			func_48(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_10(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_49(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

int func_37()
{
	if (func_25() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

int func_38(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_50();
	}
	if (func_25() == -1)
	{
		if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

void func_39(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_40(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_41()
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

bool func_42(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_51(uParam0, iParam3, iParam2) && !func_52(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_40((1 << 15)))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/]))
		{
			func_53(joaat("MP_COMPONENT_TYPE_HEADWEAR"));
		}
		else
		{
			func_54(joaat("MP_COMPONENT_TYPE_HEADWEAR"));
		}
	}
	func_55(uParam0, 0, 0);
	func_56(iParam5);
	return true;
}

void func_43()
{
	func_57(&(Global_1946054.f_2776));
	func_7((1 << 15));
	func_58(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

void func_44(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_37()) || bParam5)
		{
			func_59();
		}
	}
	if (func_25() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_60(Global_1946054.f_1497))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_12(Global_40.f_7729);
				Global_1946054.f_1378 = func_12(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_32(iVar0);
	}
	if (iParam3 & iVar1)
	{
		func_61(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_62(0, 1);
	}
	func_56(0);
}

void func_45(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_63(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_64(sVar0);
}

void func_46(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_25() != -1;
	Global_1946054.f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(iParam1);
		if (!bVar4)
		{
			if (Global_1347477.f_189 != 0)
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam1, Global_1347477.f_189);
			}
			if ((Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK")) && Global_1347477.f_190 != 0)
			{
				PED::_EQUIP_META_PED_OUTFIT(iParam1, Global_1347477.f_190);
			}
			func_10((1 << 18));
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_65(iParam1, 29, bVar4, 1, 0);
			func_65(iParam1, 31, bVar4, 1, 0);
			func_65(iParam1, 30, bVar4, 1, 0);
			func_65(iParam1, 22, bVar4, 1, 0);
			func_65(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_40((1 << 15)) && func_66(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8)) && func_67(10, iParam3))
	{
		func_68(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = Global_1946054.f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_69(iVar1, 1);
			if (func_66(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_67(iVar1, iParam3))
				{
				}
				else if ((func_66(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
				{
					if (!func_66(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_65(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = joaat("REMOVE_COMPONENT");
						}
						func_70(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_2456[iVar1 /*2*/]) && uParam0->f_1[iVar1 /*3*/].f_1 == Global_1946054.f_2456[iVar1 /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[iVar1 /*11*/].f_1 > 1)
							{
								func_65(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_66(iVar3, 1))
							{
								func_58(iVar3, 1, 6);
							}
							Global_1946054.f_857++;
							PED::_APPLY_SHOP_ITEM_TO_PED(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1 /*3*/].f_1 != 0)
							{
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(iParam1, iVar2, uParam0->f_1[iVar1 /*3*/].f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946054.f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							PED::_0xAAB86462966168CE(iParam1, bVar4);
							PED::_UPDATE_PED_VARIATION(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_47(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_48(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

void func_49(var uParam0, var uParam1, var uParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = uParam2;
	sVar0.f_0 = uParam0;
	sVar0.f_2 = uParam1;
	func_64(sVar0);
}

int func_50()
{
	return Global_1946054.f_1;
}

bool func_51(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_26(iParam1) != iParam2)
	{
		return false;
	}
	if (func_71(2, iParam1))
	{
		func_72(uParam0, iParam1);
		return true;
	}
	return false;
}

bool func_52(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;

	sVar4.f_0 = func_38(iParam6);
	sVar4.f_1 = iParam1;
	sVar4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar4);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar4))
	{
		return false;
	}
	DATAFILE::_PARSEDDATA_GET_BOOL(&bVar2, &sVar4, joaat("PARTIAL"));
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, joaat("PERSISTENT_TAGS"));
	*bParam2 = bVar2;
	Global_1946054.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_74(uParam0, func_73(iVar0), 1);
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, joaat("COMPONENT_TYPE")))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_75(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = iVar1;
				Global_1946054.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; // curOff = 278
						if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, 1194786549))
						{
							if (func_76(iVar3) & func_77(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946054.f_2652)
						{
							func_78(uParam0, uParam0->f_1[Global_1946054.f_2612[iVar1] /*3*/], Global_1946054.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_53(int iParam0)
{
	func_58(iParam0, 8, 6);
}

void func_54(int iParam0)
{
	func_70(iParam0, 8, 6);
}

void func_55(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_25() != -1;
	iVar7 = func_79(0);
	if (func_40((1 << 15)))
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
			iVar5 = func_69(iVar0, 1);
			if (func_66(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_66(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_80(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_81(uParam0);
				if (iVar3 > 0)
				{
					if (!func_40((1 << 19)))
					{
						func_10((1 << 19));
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
							iVar5 = func_69(iVar0, 1);
							if (func_66(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_66(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_80(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_82(iVar0, iParam2);
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
					func_7((1 << 19));
				}
			}
		}
	}
}

void func_56(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

void func_57(var uParam0)
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
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_58(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 & iParam1);
}

void func_59()
{
	int iVar0;

	Global_1946054.f_1497 = Global_1946054.f_1378;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1946054.f_1497.f_1[iVar0 /*3*/] = { Global_1946054.f_1378.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

bool func_60(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_38(0);
	iVar1 = 0;
	func_39(&(Global_1946054.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_PARSEDDATA_GET_BOOL(&iVar1, &(Global_1946054.f_964), joaat("PARTIAL")))
	{
		return false;
	}
	return iVar1;
}

void func_61(int iParam0, bool bParam1, int iParam2)
{
	func_83(&(Global_1946054.f_1378), iParam0);
	func_84(2, iParam0, 6);
	if (bParam1)
	{
		func_62(0, 1);
	}
}

void func_62(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_56(0);
	}
	if (bParam0)
	{
		func_10(8);
		func_10((1 << 9));
	}
	else
	{
		func_10(8);
		func_10(16);
	}
}

bool func_63(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_64(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_47(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_47(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_48(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_10(8);
}

void func_65(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_69(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == joaat("MP_COMPONENT_TYPE_HEADWEAR"))
		{
			iVar1 = func_85(iParam4);
		}
		else if (iParam4 != Global_1946054.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_57[iParam1 /*11*/].f_1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0] != iVar1)
			{
				PED::REMOVE_TAG_FROM_META_PED(iParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[iVar0], 0);
			}
			iVar0++;
		}
	}
}

bool func_66(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

bool func_67(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_66(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 6))
	{
		if (bParam2)
		{
			func_65(iParam0, iVar0, func_25() != -1, 0, 0);
			func_70(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(iParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_58(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

int func_69(int iParam0, int iParam1)
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

void func_70(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_75(iParam0, 1) /*11*/].f_10 |= iParam1;
}

bool func_71(int iParam0, int iParam1)
{
	if (func_25() == -1)
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

void func_72(var uParam0, int iParam1)
{
	int iVar0;

	if (func_25() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		*uParam0 = Global_26796.f_26[iParam1 /*120*/].f_1;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uParam0->f_1[iVar0 /*3*/] = { Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] /*3*/ };
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

int func_73(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return (1 << 9);
		case joaat("MPC_SYSTEM_TAG_INFO_EQUIPMENT"):
			return (1 << 10);
		case joaat("MPC_SYSTEM_TAG_INFO_HAND_APPAREL"):
			return (1 << 11);
		case joaat("MPC_SYSTEM_TAG_INFO_SATCHEL"):
			return (1 << 12);
		case joaat("MPC_SYSTEM_TAG_INFO_BASE_GUNBELT"):
			return (1 << 13);
		case joaat("MPC_SYSTEM_TAG_INFO_SECONDARY_HOLSTER"):
			return (1 << 14);
		case joaat("MPC_SYSTEM_TAG_INFO_NECKWEAR"):
			return (1 << 15);
		case -2125161702:
			return (1 << 17);
		case 1929486675:
			return (1 << 18);
		case joaat("MPC_SYSTEM_TAG_INFO_TORSO_APPAREL"):
			return (1 << 16);
		case 315750675:
			return (1 << 19);
		case joaat("MPC_SYSTEM_TAG_INFO_ALL"):
			return -1;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY"):
			return 112;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BUT_SATCHEL"):
			return 1136;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_SATCHEL"):
			return 4208;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_BASE_GUNBELT"):
			return 8304;
		case joaat("MPC_SYSTEM_TAG_INFO_SATCHEL_AND_SECONDARY_HOLSTER"):
			return 20480;
		case joaat("MPC_SYSTEM_TAG_INFO_BARBER_SHOP"):
			return 32833;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_HEAD"):
			return 96;
		case joaat("MPC_SYSTEM_TAG_INFO_ALL_BODY_AND_SHACKLES"):
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case joaat("MPC_SYSTEM_TAG_INFO_NULL"):
			return 0;
		default:
			break;
	}
	return 0;
}

void func_74(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_86(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_69(iVar0, 1);
			if (func_67(iVar0, iParam1))
			{
				vVar4 = { func_87(iVar0, -1) /*3*/ };
				if ((vVar4.x != Global_1946054.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 /*3*/ };
				}
				if (func_66(iVar7, 4))
				{
					func_58(iVar7, 4, 6);
				}
			}
			else
			{
				func_70(iVar7, 4, 6);
				Jump @201; // curOff = 167
				if (bParam2)
				{
					vVar1.x = Global_1946054.f_57[iVar0 /*11*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 /*3*/ };
				}
			}
			iVar0++;
		}
	}
}

int func_75(int iParam0, int iParam1)
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

int func_76(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946054.f_964.f_2 = 0;
	if (func_25() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_39(&(Global_1946054.f_964), iVar0, -367421157, joaat("COMPONENT_TYPE"), 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1946054.f_964), joaat("COMPONENT_TYPE")))
	{
		return 0;
	}
	return 1;
}

int func_77(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return 1;
}

void func_78(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_88(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_67(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_82(iVar1, iVar3);
		}
	}
	if (func_89(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_67(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_82(iVar1, iVar3);
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
						func_82(iVar1, iVar3);
					}
				}
			}
			func_90(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_90(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_82(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_90(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_82(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_82(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_90(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_90(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_82(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_90(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_82(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_82(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_88(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_82(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_91(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_88(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_82(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_92(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_82(iVar1, iVar3);
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
						func_82(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_91(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_92(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_82(iVar1, iVar3);
					}
				}
			}
			switch (func_88(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_88(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_82(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_88(uParam0->f_1[iVar1 /*3*/]) || func_92(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_82(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_79(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_50();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_80(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_75(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_40((1 << 19)))
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

int func_81(var uParam0)
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

void func_82(int iParam0, int iParam1)
{
	func_93(&(Global_1946054.f_2589), iParam0, iParam1);
}

void func_83(var uParam0, int iParam1)
{
	int iVar0;

	if (func_25() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_94(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_95(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_84(int iParam0, int iParam1, int iParam2)
{
	if (func_25() == -1)
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

int func_85(int iParam0)
{
	int iVar0;

	iVar0 = func_88(iParam0);
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return joaat("HATS");
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return joaat("MASKS_LARGE");
		default:
			break;
	}
	return 0;
}

bool func_86(var uParam0, int iParam1)
{
	return (uParam0->f_2 & iParam1) != 0;
}

Vector3 func_87(int iParam0, int iParam1)
{
	if (func_25() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

int func_88(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_96(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_89(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_75(iParam0, 1) /*3*/] != Global_1946054.f_57[func_75(iParam0, 1) /*11*/];
}

void func_90(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_82(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_82(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_82(iVar2, iVar0);
		}
	}
}

bool func_91(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_HL_PLAYER_BOOT_007_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_009_1"):
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_2") /* GXTEntry: "Legendary Moose Moccasins" */:
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_3") /* GXTEntry: "Moccasins" */:
			return true;
		case joaat("CLOTHING_HL_PLAYER_BOOT_022_4") /* GXTEntry: "Two Toned Moccasins" */:
			return true;
		default:
			break;
	}
	return false;
}

bool func_92(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(iParam0, iParam1, joaat("TAG_ITEM_PROPERTY")))
	{
		return true;
	}
	return false;
}

void func_93(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_97(uParam0, 1))
	{
		func_98(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_94(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

bool func_96(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

bool func_97(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

