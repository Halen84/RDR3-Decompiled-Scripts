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
	char* sLocal_14 = NULL;
	char* sLocal_15 = NULL;
	char* sLocal_16 = NULL;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = -1;
	var uLocal_26 = 0;
	char* sLocal_27 = NULL;
	int iLocal_28 = 0;
	struct<168> /*1344*/ sLocal_29 = { 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#pragma endregion

void __SCRIPT()
{
	int iVar0;
	int iVar1;
	struct<30> /*240*/ sVar2;
	var uVar32;
	bool bVar33;
	int iVar34;

	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	sLocal_14 = "mech_skin@BUCK_BUTCHER";
	sLocal_15 = "PBL_BASE";
	sLocal_16 = "PBL_DUMP";
	sLocal_17 = "PBL_DROP_IN";
	sLocal_27 = "beat_gang_camp_reminder";
	iLocal_28 = 23;
	TXD::REQUEST_STREAMED_TEXTURE_DICT("pausemenu_player_update", false);
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", false);
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuAllowedToReplay", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo"), "isArthur", !func_1());
	sLocal_29.f_156 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", false);
	sLocal_29.f_157 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", true);
	if (func_2())
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", true);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", func_3());
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", false);
		DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", false);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1935689.f_9467))
	{
		sLocal_29.f_166 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689.f_9467);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9467, false);
	}
	sVar2 = { Global_40.f_9 /*30*/ };
	if (TXD::DOES_STREAMED_TXD_EXIST(joaat("PAUSEMENU_COMPLETION")))
	{
		TXD::REQUEST_STREAMED_TXD(joaat("PAUSEMENU_COMPLETION"), false);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		if (!Global_20)
		{
			Global_40.f_9 = { sVar2 /*30*/ };
		}
		func_4(iVar0, iVar1);
	}
	Global_0.f_14 = func_5();
	if (Global_0.f_14)
	{
		Global_20 = 0;
		func_6(0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iVar0, true);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iVar1, func_7());
	func_8(&sLocal_29);
	BUILTIN::WAIT(0);
	func_9(&sLocal_29);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	Global_43890 = -1;
	func_10();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 0);
	func_11(1, BUILTIN::TO_FLOAT(iVar34), 0);
	func_12();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 1);
	func_11(2, BUILTIN::TO_FLOAT(iVar34), 0);
	func_13();
	iVar34 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(Global_35, 2);
	func_11(3, BUILTIN::TO_FLOAT(iVar34), 0);
	func_14();
	while (((!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && !func_15(Global_43890)) && !bVar33) && !sLocal_29.f_167)
	{
		func_16(&sLocal_29);
		Global_43890 = func_17(&sLocal_29, &uVar32);
		bVar33 = func_18();
		BUILTIN::WAIT(0);
	}
	func_19(&sLocal_29);
	if (!Global_20)
	{
		Global_40.f_9 = { sVar2 /*30*/ };
	}
	if (bVar33)
	{
		func_20();
		SCRIPTS::BAIL_TO_LANDING_PAGE(0);
		AUDIO::_START_AUDIO_SCENESET("Main_Menu", "Load_Menu_Scenes");
	}
	if (func_15(Global_43890))
	{
		UIAPPS::_CLOSE_ALL_UIAPPS();
		CAM::DO_SCREEN_FADE_OUT(0);
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CAMERA_PHOTOMODE")) > 0)
		{
			func_21(joaat("CAMERA_PHOTOMODE"), 523);
		}
	}
	if (func_2())
	{
		if (sLocal_29.f_167)
		{
			UIAPPS::_CLOSE_ALL_UIAPPS();
			func_22();
		}
	}
	func_4(iVar0, iVar1);
}

bool func_1()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_THREE"))
	{
		return true;
	}
	return false;
}

bool func_2()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"));
}

int func_3()
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("SHOP_MENU")))
	{
		return 0;
	}
	if (((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh01") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh03")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh04")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh05")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh06")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh08Epi01")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh09Epi02"))
	{
		return 0;
	}
	if (((((((((((((((((((GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewDaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewHoursLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewMonthsLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_FewWeeksLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupledayslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_couplemonthslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_coupleweekslater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_daylater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_somedaysLater_onblack")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("Title_Gen_someyearsLater_onblack"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		if (DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
		{
			return 0;
		}
	}
	if (func_24(Global_1935630, (1 << 12)))
	{
		return 0;
	}
	if (Global_1392040.f_6)
	{
		return 0;
	}
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
		return 0;
	}
	if (func_24(Global_1935630, (1 << 14)) || STREAMING::_0x99F92061EFE908BA())
	{
		return 0;
	}
	if (func_27(func_26(func_25())))
	{
		if (Global_40.f_9384[func_26(func_25()) /*2*/] == 256)
		{
			return 0;
		}
	}
	if ((GRAPHICS::ANIMPOSTFX_IS_RUNNING("MissionChoice") || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHonorChoiceGood")) || GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerHonorChoiceBad"))
	{
		return 0;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FINALE3")) > 0)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			return 0;
		}
	}
	if (func_28() || func_29())
	{
		return 0;
	}
	if (CAM::IS_DEATH_FAIL_CAMERA_RUNNING())
	{
		return 0;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return 0;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_MENU")) > 0)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SPD_ARMADILLOTOWNCRIER")) > 0)
	{
		if (func_30(Global_35, -3704.772f, -2616.527f, -14.9239f, 1) < 4.0f)
		{
			return 0;
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SPD_ANDERSHELGERSON")) > 0)
	{
		if (func_30(Global_35, 2435.137f, -1225.753f, 44.8932f, 1) < 4.0f)
		{
			return 0;
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SPD_BLANDPREACHER")) > 0)
	{
		if (func_30(Global_35, -1786.264f, -423.6425f, 154.3952f, 1) < 4.0f)
		{
			return 0;
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SPD_EUGENICSPROPONENT")) > 0)
	{
		if (func_30(Global_35, 2674.925f, -1389.901f, 45.4948f, 1) < 4.0f)
		{
			return 0;
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SPD_MADSCIENTIST")) > 0)
	{
		if (func_30(Global_35, 2944.418f, 1337.022f, 43.1089f, 1) < 4.0f)
		{
			return 0;
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SPD_TIMOTHYDONAHUE1")) > 0)
	{
		if (func_30(Global_35, 2644.537f, -1209.317f, 52.3504f, 1) < 4.0f)
		{
			return 0;
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("SPD_VAMPIRE")) > 0)
	{
		if (func_30(Global_35, 2780.151f, -1310.231f, 45.5924f, 1) < 4.0f)
		{
			return 0;
		}
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BEAT_PEEPING_TOM")) > 0)
	{
		if (func_30(Global_35, -283.7343f, 865.7388f, 120.1339f, 1) < 10.0f)
		{
			return 0;
		}
	}
	return 1;
}

void func_4(int iParam0, int iParam1)
{
	if (func_15(Global_43890))
	{
		AUDIO::_0x64B956F4E761DF5C(1);
		func_31();
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sLocal_29.f_156);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sLocal_29.f_157);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(sLocal_29.f_158);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1935689.f_9467))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1935689.f_9467, sLocal_29.f_166);
	}
	if (func_23() == -1)
	{
		func_32();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_5()
{
	int iVar0;

	if (func_33(0, 1, 0))
	{
		return 0;
	}
	if (func_34(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_35, Global_36, 50.0f, 0) > 0)
	{
		return 0;
	}
	if (!func_35())
	{
		return 0;
	}
	if (func_36())
	{
		return 0;
	}
	if (func_37() > 0)
	{
		return 0;
	}
	if (Global_1914319.f_18941.f_17)
	{
		return 0;
	}
	iVar0 = func_38(0);
	if (func_15(iVar0) && func_39(iVar0) == 8)
	{
		return 0;
	}
	if (func_40(16) || func_41((1 << 13)))
	{
		return 0;
	}
	return 1;
}

void func_6(bool bParam0, bool bParam1)
{
	Vector3 vVar0;
	var uVar3;
	var uVar4;

	if (func_23() == -1)
	{
		func_42();
	}
	else
	{
		return;
	}
	func_43();
	Global_40.f_9.f_14 = func_44();
	Global_40.f_9.f_20 = LAW::GET_BOUNTY(PLAYER::GET_PLAYER_INDEX());
	Global_40.f_11999 = SAVE::_0xB00CE33465B5406D(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_45())
		{
			func_46(Global_1310720.f_1);
		}
		else if (func_47() == func_48(Global_36, 1) && func_49() != 2)
		{
			func_46(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_46(Global_36);
		}
		func_50(Global_36, &vVar0, &uVar4);
		if (!func_45())
		{
			if (func_51(vVar0, Global_36) < func_51(Global_40.f_9.f_7, Global_36))
			{
				func_46(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_48(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_50(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		MISC::OVERRIDE_SAVE_HOUSE(true, Global_40.f_9.f_7, 0.0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_52(&Global_1935630, (1 << 13));
	}
	func_53();
}

int func_7()
{
	if (func_33(0, 0, 1))
	{
		return 0;
	}
	if (func_54())
	{
		return 0;
	}
	if (func_34(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (PLAYER::_0x72AD59F7B7FB6E24(PLAYER::GET_PLAYER_INDEX(), 5000))
	{
		return 0;
	}
	if (PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_35, Global_36, 50.0f, 0) > 0)
	{
		return 0;
	}
	if (Global_1934266.f_60)
	{
		return 0;
	}
	if (Global_16)
	{
		return 0;
	}
	if (Global_1914319.f_18969)
	{
		return 0;
	}
	if (Global_1955834)
	{
		return 0;
	}
	if (func_55(0))
	{
		return 0;
	}
	if (func_56())
	{
		return 0;
	}
	if (func_57())
	{
		return 0;
	}
	if (Global_1357549.f_1641 > 1)
	{
		return 0;
	}
	if (func_15(Global_43890))
	{
		return 0;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PAUSE_MENU_REPLAY_LAUNCHER")) > 0)
	{
		return 0;
	}
	if (func_58())
	{
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(Global_35, true))
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1900073, false))
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (Global_36560 >= 2 && Global_36560 <= 5)
	{
		return 0;
	}
	if (func_41((1 << 12)))
	{
		return 0;
	}
	if (func_40(16) || func_41((1 << 13)))
	{
		return 0;
	}
	return 1;
}

void func_8(var uParam0)
{
	if (Global_43891)
	{
		return;
	}
}

void func_9(var uParam0)
{
	struct<2> /*16*/ sVar0;
	float fVar2;
	int iVar3;

	if (func_60(76))
	{
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP1")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 6);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP2")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 22);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP3")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 19);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP4")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 12);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP5")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 6);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP6")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 18);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP7")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 1);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP8")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 8);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("MISSIONS_CHP9")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 15);
		sVar0 = { func_61(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS")) /*2*/ };
		STATS::_0x91A4F58E01ED5E4C(&sVar0, 107);
		func_53();
	}
	uParam0->f_158 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "progress");
	fVar2 = func_64(func_63(func_62(joaat("TOTAL_PROGRESS_MADE"))), 1, 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "completionPercent", MISC::VAR_STRING(6, "PM_SCR_PROG_PERCENT", fVar2));
	uParam0->f_161 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "label", "");
	uParam0->f_162 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "description", "");
	uParam0->f_163 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_158, "descriptionVisible", false);
	uParam0->f_164 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_158, "textureName", "");
	uParam0->f_165 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_158, "textureTxd", joaat("PAUSEMENU_COMPLETION"));
	uParam0->f_159 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_158, "itemList");
	iVar3 = 0;
	while (iVar3 < 40)
	{
		func_65(uParam0, iVar3);
		iVar3++;
	}
}

float func_10()
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

	if (func_66())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_67(0);
	}
	fVar0 = ((float)Global_40.f_11095.f_48 * 60.0f);
	if (func_68())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_54 + 1.0f));
	}
	else if (func_69())
	{
		fVar0 = ((10.0f * 60.0f) * (Global_40.f_11095.f_53 + 1.0f));
	}
	else if (Global_1347477.f_119)
	{
		return func_67(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10.0f * 60.0f);
	}
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_74());
	fVar7 = (func_67(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_75(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_76(1, fVar9, fVar9 > 100.0f);
	if (fVar7 <= -100.0f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1.0f)
	{
		return func_67(0);
	}
	return func_77(fVar7, -100.0f, 100.0f);
}

void func_11(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_78(iParam0, 0, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[0], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[0], bParam2);
}

float func_12()
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

	if (func_66())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_67(1);
	}
	if (Global_1347477.f_119)
	{
		return func_67(1);
	}
	fVar0 = ((float)Global_40.f_11095.f_47 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_74());
	fVar7 = (func_67(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_75(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_76(2, fVar9, fVar9 > 100.0f);
	return func_77(fVar7, -100.0f, 100.0f);
}

float func_13()
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

	if (func_66())
	{
		return 0.0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_67(2);
	}
	if (Global_1347477.f_119)
	{
		return func_67(2);
	}
	fVar0 = ((float)Global_40.f_11095.f_46 * 60.0f);
	fVar0 /= BUILTIN::TO_FLOAT(7);
	fVar1 = func_70();
	fVar2 = func_71();
	fVar3 = func_72();
	fVar4 = func_73();
	fVar5 = (1.0f / (1.0f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 *= fVar5;
	fVar6 = (200.0f / fVar0);
	fVar6 *= (30.0f / func_74());
	fVar7 = (func_67(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60.0f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100.0f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100.0f) / 200.0f);
	func_75(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_76(3, fVar9, fVar9 > 100.0f);
	return func_77(fVar7, -100.0f, 100.0f);
}

void func_14()
{
	func_79(2, 3, 0);
	func_79(6, 18, 0);
	func_79(34, 13, 1);
	func_79(34, 19, 1);
	func_79(34, 26, 1);
	func_79(34, 13, 0);
	func_79(34, 19, 0);
	func_79(34, 26, 0);
}

bool func_15(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_16(var uParam0)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	iVar4 = joaat("PAUSE_MENU");
	while (UIEVENTS::EVENTS_UI_IS_PENDING(iVar4))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iVar4, &sVar0))
		{
			switch (sVar0.f_0)
			{
				case joaat("NEW_PAGE"):
					switch (sVar0.f_2)
					{
						case 1979383369:
							break;
						case 2084001267:
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
					break;
				case joaat("ITEM_FOCUSED"):
					switch (sVar0.f_2)
					{
						case -1330172908:
							break;
						case 1238474784:
							break;
						case 248393197:
							func_80(sVar0.f_3);
							break;
						case 1537860827:
							func_81(uParam0, &sVar0);
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
					break;
				case joaat("ITEM_SELECTED"):
					switch (sVar0.f_2)
					{
						case joaat("PAUSE_UI_RPG_DETAIL_GENERAL_SELECT_EVENT"):
							func_82();
							break;
						case joaat("PAUSE_UI_RPG_DETAIL_HEALTH_SELECT_EVENT"):
							func_83();
							break;
						case joaat("PAUSE_UI_RPG_DETAIL_STAMINA_SELECT_EVENT"):
							func_84();
							break;
						case joaat("PAUSE_UI_RPG_DETAIL_DEADEYE_SELECT_EVENT"):
							func_85();
							break;
						case joaat("PAUSE_UI_RPG_DETAIL_HORSE_SELECT_EVENT"):
							func_86();
							break;
						case -1332231262:
							break;
						case 2096096105:
							break;
						case -1086656831:
							break;
						case 1777696068:
							break;
						case 891622121:
							break;
						case 792408241:
							break;
						case 1070621771:
							break;
						case 1320195282:
							uParam0->f_167 = 1;
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
					break;
				default:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
					break;
			}
		}
	}
}

int func_17(var uParam0, var uParam1)
{
	Vector3 vVar0;
	int iVar4;

	iVar4 = joaat("UI_EVENT_CHANNEL_PROGRESS_MENU");
	while (UIEVENTS::EVENTS_UI_IS_PENDING(iVar4))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case joaat("ITEM_SELECTED"):
					if (vVar0.z == 270525852)
					{
						uParam0->f_155 = !uParam0->f_155;
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_156, uParam0->f_155);
					}
					else if (vVar0.z == 920946524)
					{
						if (func_15(*uParam1))
						{
							return *uParam1;
						}
					}
					break;
				case joaat("ITEM_FOCUSED"):
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_157, STATS::_0x4DAC398297981B87(vVar0.z));
					*uParam1 = func_87(vVar0.z);
					break;
				default:
					break;
			}
			UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
		}
	}
	return -1;
}

int func_18()
{
	int iVar0;
	int iVar4;

	iVar4 = -37892458;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(iVar4))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iVar4, &iVar0))
		{
			switch (iVar0)
			{
				case joaat("ITEM_SELECTED"):
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
					return 1;
				case joaat("ITEM_FOCUSED"):
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
					break;
				default:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iVar4);
					break;
			}
		}
	}
	return 0;
}

void func_19(var uParam0)
{
}

void func_20()
{
	func_88(1);
	func_89();
}

void func_21(int iParam0, int iParam1)
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

void func_22()
{
	struct<10> /*80*/ sVar0;
	struct<16> /*128*/ sVar10;

	if (func_2())
	{
		MISC::CLEAR_BIT(&Global_1357505, 8);
		ANIMSCENE::_0xCDCD7B2D49AEE73A(true);
		GRAPHICS::_0xEC3D8C228FE553D7(false);
		Global_1357503 = 1;
		sVar10 = { sVar0 /*10*/ };
		strcpy_s(&(sVar10.f_10), 32, "camera_photomode");
		sVar10.f_14 = (1 << 10);
		sVar10.f_15 = 0;
		func_90(sVar10, 0);
	}
}

int func_23()
{
	return Global_1572887.f_12;
}

bool func_24(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_25()
{
	return Global_1894899.f_2;
}

int func_26(int iParam0)
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

bool func_27(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_28()
{
	return (Global_1935689.f_1 || Global_1935689 == 1);
}

bool func_29()
{
	return Global_1935689.f_1;
}

float func_30(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_31()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_36 /*3*/ };
	func_91(&Global_0);
}

void func_32()
{
	if (func_23() != -1)
	{
		return;
	}
	func_92();
	func_93();
	func_94();
	func_95();
	func_96();
	func_97();
	func_98();
}

bool func_33(int iParam0, bool bParam1, bool bParam2)
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
		if (func_99())
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
		iVar0 = func_100(Global_1898164.f_1[0 /*5*/]);
		if (func_101(iVar0) && func_102(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_15(Global_1898164.f_1[0 /*5*/]))
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

int func_34(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_103(bParam1, bParam2, bParam3);
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

bool func_35()
{
	return true;
	if (Global_1572887.f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_36()
{
	return Global_1425247.f_53;
}

int func_37()
{
	int iVar0;
	int iVar1;

	if (Global_1572887.f_12 != -1)
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 50)
	{
		if (Global_1357549.f_1252[iVar1 /*3*/] != 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_38(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_39(int iParam0)
{
	if (!func_15(iParam0))
	{
		return 0;
	}
	return func_105(func_104(iParam0));
}

bool func_40(int iParam0)
{
	return (Global_1392040 & iParam0) != 0;
}

bool func_41(int iParam0)
{
	return (Global_1392040.f_1 & iParam0) != 0;
}

void func_42()
{
	if (func_23() != -1)
	{
		return;
	}
	if (!func_35())
	{
		return;
	}
	func_106(&(Global_40.f_40));
}

void func_43()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1))
		{
			Global_40.f_11029[iVar0 /*5*/].f_1 = { VEHICLE::_GET_TRAIN_POSITION_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1) /*3*/ };
			Global_40.f_11029[iVar0 /*5*/].f_4 = VEHICLE::_GET_TRAIN_DIRECTION_FROM_INDEX(Global_1425371[iVar0 /*373*/].f_1);
		}
		iVar0++;
	}
}

int func_44()
{
	return Global_1899515;
}

bool func_45()
{
	return !func_107(Global_1310720.f_1);
}

void func_46(Vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 /*3*/ };
}

int func_47()
{
	return Global_40.f_4283.f_1;
}

int func_48(Vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_25();
	if (func_108(iVar0))
	{
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[iVar0 /*35*/].f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_109(vParam0, iParam3);
}

int func_49()
{
	return Global_40.f_4283.f_4;
}

void func_50(Vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;

	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_110())
	{
		fVar0 = func_111(vParam0, Global_40.f_6);
	}
	if (func_40((1 << 25)))
	{
		if (!func_112(Global_40.f_2, 0.0f, 0.0f, 0.0f, 1056964608, 1))
		{
			fVar1 = func_111(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150.0f && fVar0 > 150.0f)
	{
		*uParam3 = { Global_36 /*3*/ };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 /*3*/ };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 /*3*/ };
		*uParam4 = 3;
	}
}

float func_51(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_52(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_53()
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

	if (!func_24(Global_1935630, (1 << 13)))
	{
		return;
	}
	if (func_113((1 << 15)))
	{
		return;
	}
	func_114(&Global_1935630, (1 << 13));
	fVar0 = 0.0f;
	fVar0 += (0.9259259f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP1"))));
	fVar0 += (0.2525252f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP2"))));
	fVar0 += (0.2923976f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP3"))));
	fVar0 += (0.462963f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP4"))));
	fVar0 += (0.9259259f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP5"))));
	fVar0 += (0.308642f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP6"))));
	fVar0 += (5.555555f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP7"))));
	fVar0 += (0.6944444f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP8"))));
	fVar0 += (0.3703704f * BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("MISSIONS_CHP9"))));
	fVar0 += (0.5f * func_116(10.0f, BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("RC_STRANDS")))));
	fVar0 += (0.6f * func_116(5.0f, BUILTIN::TO_FLOAT(func_115(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")))));
	fVar0 += (0.2f * func_116(25.0f, BUILTIN::TO_FLOAT(func_117(joaat("UNIQUE_BEATS_COMPLETED")))));
	fVar0 += (2.0f * func_116(1.0f, BUILTIN::TO_FLOAT(func_117(joaat("GANG_AMBUSH_ENCOUNTERED")))));
	fVar0 += (0.3333333f * func_116(6.0f, BUILTIN::TO_FLOAT(func_117(joaat("GANG_HIDEOUT_COMPLETED")))));
	fVar0 += (3.0f * func_116(1.0f, BUILTIN::TO_FLOAT(func_117(joaat("DISCOVERABLE_FOUND")))));
	iVar1 = func_118();
	fVar0 += (0.1111111f * func_116(9.0f, BUILTIN::TO_FLOAT(iVar1)));
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES"))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS")))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES"))) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES")))));
	fVar0 += func_116(1.0f, fVar2);
	fVar0 += (0.05f * func_116(BUILTIN::TO_FLOAT(20), BUILTIN::TO_FLOAT(func_120())));
	if (func_121(40))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_121(42))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_121(48))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_121(50))
	{
		fVar0 += (1.0f * 1.0f);
	}
	if (func_121(52))
	{
		fVar0 += (1.0f * 1.0f);
	}
	fVar2 = (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 499813453)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 499813453)));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 666607663)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 666607663))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), -220219788)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), -220219788))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 218622660)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 218622660))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 390004462)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 390004462))));
	fVar2 = func_119(fVar2, (BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("TREASURE_HUNTER"), 6410548)) / BUILTIN::TO_FLOAT(COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("TREASURE_HUNTER"), 6410548))));
	fVar0 += (1.0f * func_116(1.0f, fVar2));
	fVar0 += (0.2f * func_116(5.0f, BUILTIN::TO_FLOAT(func_117(joaat("SHACK_FOUND")))));
	fVar0 += (0.2f * func_116(5.0f, BUILTIN::TO_FLOAT(func_115(joaat("KILLS"), joaat("LEGENDARY_ANIMALS")))));
	fVar0 += (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("ANIMALS")), 50)) / BUILTIN::TO_FLOAT(50));
	fVar0 += (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("EQUIPMENT")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("FISH")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += COMPENDIUM::_0x725D52F21A5E9E22(joaat("GANGS"));
	fVar0 += (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HERBS")), 20)) / BUILTIN::TO_FLOAT(20));
	fVar0 += (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HORSES")), 10)) / BUILTIN::TO_FLOAT(10));
	fVar0 += (BUILTIN::TO_FLOAT(func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("WEAPONS")), 48)) / BUILTIN::TO_FLOAT(48));
	func_123(&iVar3, &iVar4);
	fVar0 += (2.0f * func_116((BUILTIN::TO_FLOAT(iVar3) / BUILTIN::TO_FLOAT(iVar4)), 1.0f));
	fVar0 += (2.0f * func_116(1.0f, BUILTIN::TO_FLOAT(func_124(joaat("HORSES_REACHED_MAX_BOND")))));
	fVar5 = BUILTIN::TO_FLOAT(func_125());
	fVar0 += ((3.0f * fVar5) / BUILTIN::TO_FLOAT(9));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ATTEMPTS"), joaat("BLACKJACK")))));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ATTEMPTS"), joaat("DOMINOES_HAND")))));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ATTEMPTS"), joaat("FIVE_FINGER")))));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ATTEMPTS"), joaat("POKER_HAND")))));
	fVar0 += (0.2f * func_116(5.0f, BUILTIN::TO_FLOAT(func_117(joaat("SPECIAL_PED_INTERACTION")))));
	fVar0 += (0.5f * func_116(1.0f, BUILTIN::TO_FLOAT(func_117(joaat("BATHS_TAKEN")))));
	fVar0 += (0.5f * func_116(1.0f, BUILTIN::TO_FLOAT(func_117(joaat("SHOWS_SEEN")))));
	fVar0 += (0.5f * func_116(1.0f, BUILTIN::TO_FLOAT(func_117(joaat("THEATRE_VISITS")))));
	fVar0 += ((0.5f / 6.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")))));
	fVar0 += ((0.5f / 6.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")))));
	fVar0 += ((0.5f / 6.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")))));
	fVar0 += ((0.5f / 6.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")))));
	fVar0 += ((0.5f / 6.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")))));
	fVar0 += ((0.5f / 6.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")))));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ROB_COMPLETED"), joaat("COACH")))));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ROB_COMPLETED"), joaat("HOME")))));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ROB_COMPLETED"), joaat("SHOP")))));
	fVar0 += ((1.0f / 4.0f) * func_116(1.0f, BUILTIN::TO_FLOAT(func_115(joaat("ROB_COMPLETED"), joaat("TRAIN")))));
	sVar6 = { func_62(joaat("TOTAL_PROGRESS_MADE")) /*2*/ };
	fVar8 = func_63(sVar6);
	STATS::_0xE141F6B40B1E3683(&sVar6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_15(Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < Global_1898329)
		{
			if (!func_15(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_126(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_127(Global_1898330[iVar61]);
				}
				else
				{
					func_128(iVar61, 0);
					if (func_39(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_129(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_129(Global_1347702[Global_40.f_450[iVar63] /*49*/].f_15);
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
										TELEMETRY::_TELEMETRY_GAME_PROGRESS(func_129(Global_1898437), &iVar9);
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

bool func_54()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_35())
	{
		return false;
	}
	if (!func_130(Global_1835011[1 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_130(Global_1835011[2 /*74*/].f_1, 1) && func_130(Global_1347702[120 /*49*/].f_15, 1)) && !func_130(Global_1835011[4 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_130(Global_1835011[37 /*74*/].f_1, 1) && !func_130(Global_1835011[39 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_130(Global_1835011[57 /*74*/].f_1, 1) && !func_130(Global_1835011[60 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_130(Global_1835011[26 /*74*/].f_1, 1) && !func_130(Global_1347702[67 /*49*/].f_15, 1))
	{
		return true;
	}
	if ((func_130(Global_1835011[62 /*74*/].f_1, 1) && func_130(Global_1835011[63 /*74*/].f_1, 1)) && !func_130(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if (func_130(Global_1835011[75 /*74*/].f_1, 1) && !func_130(Global_1347702[1 /*49*/].f_15, 1))
	{
		return true;
	}
	if (func_130(Global_1835011[76 /*74*/].f_1, 1) && !func_130(Global_1835011[77 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_130(Global_1835011[40 /*74*/].f_1, 1) && func_130(Global_1835011[41 /*74*/].f_1, 1)) && !func_130(Global_1835011[44 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_130(Global_1835011[62 /*74*/].f_1, 1) && func_130(Global_1835011[63 /*74*/].f_1, 1)) && !func_130(Global_1835011[64 /*74*/].f_1, 1))
	{
		return true;
	}
	if ((func_130(Global_1835011[65 /*74*/].f_1, 1) && func_130(Global_1835011[66 /*74*/].f_1, 1)) && !func_130(Global_1835011[67 /*74*/].f_1, 1))
	{
		return true;
	}
	return false;
}

bool func_55(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319.f_17370;
	}
	return (Global_1914319.f_17370 || Global_1914319.f_18996.f_1);
}

bool func_56()
{
	return MISC::IS_BIT_SET(Global_1357549.f_1893, 0);
}

bool func_57()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CAMERA_ITEM")) > 0)
	{
		return true;
	}
	return false;
}

bool func_58()
{
	return Global_1935436 == 2;
}

bool func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		return false;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (PERSISTENCE::_0xCFDA2518F322D836(iVar1))
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return true;
		}
		iVar2++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return false;
}

bool func_60(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887.f_12 == -1)
	{
		return func_130(Global_1835011[iParam0 /*74*/].f_1, 1);
	}
	return (UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2));
}

struct<2> /*16*/ func_61(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	return sVar0;
}

struct<2> /*16*/ func_62(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

float func_63(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_FLOAT(&uParam0, &uVar0);
	return uVar0;
}

float func_64(float fParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	bVar0 = fParam0 >= 0.0f;
	iVar1 = BUILTIN::FLOOR(BUILTIN::POW(10.0f, BUILTIN::TO_FLOAT(iParam1)));
	fVar2 = (fParam0 * (float)iVar1);
	if (bParam2)
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::CEIL(fVar2));
	}
	else
	{
		fVar2 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar2));
	}
	fVar3 = (fVar2 / (float)iVar1);
	if (fVar3 < 0.0f && bVar0)
	{
		fVar3 *= -1.0f;
	}
	return fVar3;
}

void func_65(var uParam0, int iParam1)
{
	char cVar0[32];
	int iVar4;
	int iVar5;

	MISC::_INT_TO_STRING(iParam1, "%u", &cVar0);
	iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_158, &cVar0);
	if (func_131(iParam1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "label", func_132(iParam1));
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_159, iParam1, "itemEntryGroup", iVar4);
	}
	else
	{
		strcpy_s(&cVar0, 32, func_133(iParam1, &iVar5));
		switch (iVar5)
		{
			case 0:
			case 2:
				if (func_134(iParam1, iVar5))
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "label", func_132(iParam1));
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "value", &cVar0);
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "isActive", true);
				}
				else
				{
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "label", func_135(iParam1));
					DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "value", "");
					DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "isActive", false);
				}
				break;
			case 1:
				DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "label", func_132(iParam1));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "isActive", false);
				DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "value", "");
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar4, "textureName", joaat("CHECK"));
				DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar4, "textureTxd", joaat("HUD_TEXTURES"));
				DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "textureVisible", true);
				break;
		}
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar4, "focus_event_hash", 1537860827);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_159, iParam1, "itemEntry", iVar4);
	}
}

bool func_66()
{
	if (Global_1572887.f_12 != -1)
	{
		return false;
	}
	return Global_1347477.f_203;
}

float func_67(int iParam0)
{
	return Global_40.f_11095[iParam0];
}

bool func_68()
{
	return func_136(12) <= -99.0f;
}

bool func_69()
{
	return func_136(12) >= 99.0f;
}

float func_70()
{
	float fVar0;
	int iVar1;

	fVar0 = func_136(13);
	iVar1 = func_137(fVar0);
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

float func_71()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0.0f;
}

float func_72()
{
	if (func_138())
	{
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
		{
			return 0.2f;
		}
	}
	return 0.0f;
}

float func_73()
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

float func_74()
{
	return Global_1954815.f_3;
}

void func_75(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_78(iParam0, 1, 0, 0);
	sVar0 = MISC::VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
}

void func_76(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_78(iParam0, 2, 0, 0);
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

float func_77(float fParam0, float fParam1, float fParam2)
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

char* func_78(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_139(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				case 2:
					return func_139(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_140(iParam0);
	iVar1 = func_140(iParam1);
	if (func_141(func_61(joaat("PICK"), iVar1)) < 0)
	{
		return;
	}
	if (func_141(func_61(joaat("PICK"), iVar0)) > 0)
	{
		if (func_141(func_61(joaat("USED_IN_RECIPE"), iVar0)) >= func_141(func_61(joaat("PICK"), iVar0)))
		{
			iVar2 = (func_141(func_61(joaat("PICK"), iVar1)) - func_141(func_61(joaat("EATEN"), iVar1)));
			if (func_141(func_61(joaat("USED_IN_RECIPE"), iVar1)) < iVar2)
			{
				iVar3 = ((func_141(func_61(joaat("USED_IN_RECIPE"), iVar0)) - func_141(func_61(joaat("PICK"), iVar0))) - func_141(func_61(joaat("EATEN"), iVar0)));
				if (iVar3 > 0)
				{
					iVar4 = func_122(iVar3, iVar2);
					iVar4 = func_122((iVar2 - func_141(func_61(joaat("USED_IN_RECIPE"), iVar1))), iVar4);
					func_142(func_61(joaat("USED_IN_RECIPE"), iVar1), iVar4);
					func_143(func_61(joaat("USED_IN_RECIPE"), iVar0), iVar4);
				}
			}
		}
		else if ((func_141(func_61(joaat("USED_IN_RECIPE"), iVar0)) > 0 && func_141(func_61(joaat("PICK"), iVar1)) > 0) && func_141(func_61(joaat("USED_IN_RECIPE"), iVar1)) <= 0)
		{
			func_142(func_61(joaat("USED_IN_RECIPE"), iVar1), 1);
			func_143(func_61(joaat("USED_IN_RECIPE"), iVar0), 1);
		}
	}
	else
	{
		iVar5 = func_141(func_61(joaat("USED_IN_RECIPE"), iVar0));
		if (iVar5 > 0)
		{
			iVar6 = (func_141(func_61(joaat("PICK"), iVar1)) - func_141(func_61(joaat("EATEN"), iVar1)));
			if (func_141(func_61(joaat("USED_IN_RECIPE"), iVar1)) < iVar6)
			{
				if (!bParam2 || func_141(func_61(joaat("USED_IN_RECIPE"), iVar1)) < 1)
				{
					iVar7 = func_122(iVar5, iVar6);
					if (bParam2)
					{
						iVar7 = 1;
					}
					else
					{
						iVar7 = func_122((iVar6 - func_141(func_61(joaat("USED_IN_RECIPE"), iVar1))), iVar7);
					}
					func_142(func_61(joaat("USED_IN_RECIPE"), iVar1), iVar7);
					func_143(func_61(joaat("USED_IN_RECIPE"), iVar0), iVar7);
				}
			}
		}
	}
}

void func_80(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "rpg_pause_item_index");
	switch (Global_1954819.f_5.f_747)
	{
		case 0:
			func_144(iVar0);
			break;
		case 1:
			func_145(iVar0);
			break;
		case 2:
			func_146(iVar0);
			break;
		case 3:
			func_147(iVar0);
			break;
		case 4:
			func_148(iVar0);
			break;
	}
}

void func_81(var uParam0, var uParam1)
{
	int iVar0;
	char* sVar1;
	char cVar2[128];

	iVar0 = uParam1->f_1;
	sVar1 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(uParam1->f_3, "label");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_161, sVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_163, true);
	if (func_149(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_163, false);
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_160))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_160);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, func_150(iVar0));
		uParam0->f_160 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_158, "checklist");
		func_151(uParam0, iVar0);
	}
	else
	{
		strcpy_s(&cVar2, 128, func_132(iVar0));
		strcat_s(&cVar2, 128, "_DESC");
		if (HUD::DOES_TEXT_LABEL_EXIST(&cVar2) && !MISC::_DOES_STRING_EXIST_IN_STRING(sVar1, "Unknown"))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_162, &cVar2);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, func_150(iVar0));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_162, "");
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_164, "UNDISCOVERED");
		}
	}
}

void func_82()
{
	char* sVar0;
	Vector3 vVar1[24];
	bool bVar4;

	func_152(1, 1);
	Global_1954819.f_5.f_747 = 0;
	func_154(MISC::VAR_STRING(2, func_153(0)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HONOR", "", 1, 0, 1, func_157(Global_40.f_11095.f_35), "pausemenu_player");
	func_155(3, "PMPLAYER_CONDITIONS");
	strcpy_s(&cVar1, 24, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[0]));
	bVar4 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar4)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar4, &cVar1, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1]);
	if (func_69())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (func_68())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", MISC::VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, joaat("PROVISION_TALISMAN_RAVEN_CLAW"), "PROVISION_TALISMAN_RAVEN_CLAW");
	func_159(10, joaat("PROVISION_TRINKET_BEAVER_TOOTH"), "PROVISION_TRINKET_BEAVER_TOOTH");
	func_159(11, joaat("PROVISION_TRINKET_FOX_CLAW"), "PROVISION_TRINKET_FOX_CLAW");
	func_159(12, joaat("PROVISION_TRINKET_BUCK_ANTLER"), "PROVISION_TRINKET_BUCK_ANTLER");
	func_159(13, joaat("PROVISION_TRINKET_RAM_HORN"), "PROVISION_TRINKET_RAM_HORN");
	func_159(14, joaat("PROVISION_TRINKET_WOLF_HEART"), "PROVISION_TRINKET_WOLF_HEART");
	func_159(15, joaat("PROVISION_TRINKET_PRONGHORN_ANTLER"), "PROVISION_TRINKET_PRONGHORN_ANTLER");
	if (func_138())
	{
		func_159(16, joaat("PROVISION_TALISMAN_EAGLE_TALON"), "PROVISION_TALISMAN_EAGLE_TALON");
	}
	if (func_2())
	{
		func_159(17, joaat("PROVISION_TRINKET_CAT_EYE"), "PROVISION_TRINKET_CAT_EYE");
		func_159(18, joaat("PROVISION_TRINKET_SHARK_TOOTH"), "PROVISION_TRINKET_SHARK_TOOTH");
		func_159(19, joaat("PROVISION_TRINKET_CROW_BEAK"), "PROVISION_TRINKET_CROW_BEAK");
	}
	func_159(20, joaat("PROVISION_DISCO_ARROWHEAD_02"), "PROVISION_DISCO_ARROWHEAD_02");
	func_159(21, joaat("DOCUMENT_FIELD_MANUAL"), "DOCUMENT_FIELD_MANUAL");
	func_159(22, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_144(1);
}

void func_83()
{
	char* sVar0;
	int iVar1;
	Vector3 vVar2[24];
	bool bVar5;

	Global_1954819.f_5.f_747 = 1;
	func_152(1, 1);
	func_154(MISC::VAR_STRING(2, func_153(1)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(0);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	strcpy_s(&cVar2, 24, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[0]));
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[1]);
	if (func_69())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player");
	}
	else if (func_68())
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player");
	}
	else
	{
		func_156(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0);
	}
	if (Global_40.f_11095.f_43)
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", MISC::VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0);
	}
	func_158(7);
	func_155(8, "PMPLAYER_PERKS");
	func_159(9, joaat("PROVISION_TRINKET_BISON_HORN"), "PROVISION_TRINKET_BISON_HORN");
	func_159(10, joaat("PROVISION_TRINKET_MOOSE_ANTLER"), "PROVISION_TRINKET_MOOSE_ANTLER");
	func_159(11, joaat("PROVISION_TALISMAN_BEAR_CLAW"), "PROVISION_TALISMAN_BEAR_CLAW");
	func_159(12, joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER");
	if (func_138())
	{
		func_159(13, joaat("PROVISION_TRINKET_IGUANA_SCALE"), "PROVISION_TRINKET_IGUANA_SCALE");
	}
	if (func_2())
	{
		func_159(14, joaat("PROVISION_TRINKET_TURTLE_SHELL"), "PROVISION_TRINKET_TURTLE_SHELL");
	}
	func_159(15, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_145(1);
	func_163("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_84()
{
	char* sVar0;
	int iVar1;
	Vector3 vVar2[24];
	bool bVar5;

	Global_1954819.f_5.f_747 = 2;
	func_152(1, 1);
	func_154(MISC::VAR_STRING(2, func_153(2)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(1);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	strcpy_s(&cVar2, 24, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[0]));
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, joaat("PROVISION_TRINKET_LION_PAW"), "PROVISION_TRINKET_LION_PAW");
	func_159(8, joaat("PROVISION_TRINKET_COUGAR_FANG"), "PROVISION_TRINKET_COUGAR_FANG");
	func_159(9, joaat("PROVISION_TALISMAN_BUFFALO_HORN"), "PROVISION_TALISMAN_BUFFALO_HORN");
	func_159(10, joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER");
	if (func_2())
	{
		func_159(11, joaat("PROVISION_TRINKET_HAWK_TALON"), "PROVISION_TRINKET_HAWK_TALON");
	}
	func_159(12, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_146(1);
	func_163("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_85()
{
	char* sVar0;
	int iVar1;
	Vector3 vVar2[24];
	bool bVar5;

	Global_1954819.f_5.f_747 = 3;
	func_152(1, 1);
	func_154(MISC::VAR_STRING(2, func_153(3)));
	func_155(0, "PMPLAYER_STATISTICS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	iVar1 = func_162(2);
	func_156(2, "PMPLAYER_PROGRESSION", MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", iVar1 + 1), 1, 0, 0, 0, 0);
	func_155(3, "PMPLAYER_CONDITIONS");
	strcpy_s(&cVar2, 24, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[0]));
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_12[0]);
	if (bVar5)
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player");
	}
	else
	{
		func_156(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0);
	}
	func_158(5);
	func_155(6, "PMPLAYER_PERKS");
	func_159(7, joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"), "PROVISION_TALISMAN_ALLIGATOR_TOOTH");
	func_159(8, joaat("PROVISION_TRINKET_COYOTE_FANG"), "PROVISION_TRINKET_COYOTE_FANG");
	func_159(9, joaat("PROVISION_TRINKET_PANTHER_EYE"), "PROVISION_TRINKET_PANTHER_EYE");
	func_159(10, joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER");
	func_159(11, joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), "CLOTHING_LEGENDARY_EAST_OUTFIT");
	func_160(0);
	func_161(0);
	func_147(1);
	func_163("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_86()
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	char cVar18[64];
	char cVar26[64];
	char cVar34[64];
	float fVar42;
	int iVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	int iVar48;
	struct<8> /*64*/ sVar50;
	char* sVar58;

	func_152(1, 1);
	Global_1954819.f_5.f_747 = 4;
	iVar0 = -1;
	iVar1 = -1;
	if (func_164(0))
	{
		iVar0 = 0;
	}
	if (func_164(1))
	{
		iVar1 = 1;
	}
	if (func_166(Global_35, func_165(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	strcpy_s(&cVar2, 64, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", func_167(iVar0)));
	iVar47 = func_168(iVar0, 0);
	if (iVar47 <= 50)
	{
		strcpy_s(&cVar10, 64, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"));
	}
	else if (iVar47 < 100)
	{
		strcpy_s(&cVar10, 64, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"));
		bVar45 = true;
	}
	else
	{
		strcpy_s(&cVar10, 64, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"));
		bVar45 = true;
	}
	fVar42 = func_169(iVar0);
	if (fVar42 > 0.0f)
	{
		strcpy_s(&cVar18, 64, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"));
		bVar46 = true;
	}
	else
	{
		strcpy_s(&cVar18, 64, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"));
	}
	if (func_170(joaat("SLOTID_HORSE_SADDLE"), &iVar43))
	{
		if (func_171(iVar43, &iVar48, joaat("LABEL_TYPE_ALT_NAME"), 0))
		{
			strcpy_s(&cVar26, 64, HUD::GET_STRING_FROM_HASH_KEY(iVar48));
		}
	}
	if (func_170(joaat("SLOTID_HORSE_STIRRUP"), &iVar44))
	{
		strcpy_s(&cVar34, 64, func_172(iVar44));
	}
	sVar50 = { func_173(iVar0) /*8*/ };
	sVar58 = MISC::VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar50))
	{
		sVar58 = func_174(&sVar50);
	}
	func_154(sVar58);
	func_155(0, "PMPLAYER_STATS");
	func_156(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0);
	func_156(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0);
	func_156(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar2, 1, 0, 0, 0, 0);
	func_156(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0);
	func_156(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0);
	func_155(6, "PMPLAYER_CONDITIONS");
	func_156(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar10, 1, bVar45, bVar45, "rpg_horse_dirty", "pausemenu_player");
	func_156(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar18, 1, bVar46, bVar46, "rpg_horse_agitation", "pausemenu_player");
	func_155(9, "PMPLAYER_HORSE_TACK");
	func_156(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar26, 1, 0, 0, 0, 0);
	func_156(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar34, 1, 0, 0, 0, 0);
	func_148(1);
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = -1;
	iVar1 = func_175(iParam0);
	if (func_176(iVar1))
	{
		iVar0 = Global_1835011[iVar1 /*74*/].f_1;
	}
	else
	{
		iVar2 = func_177(iParam0);
		if (func_101(iVar2))
		{
			iVar0 = Global_1347702[iVar2 /*49*/].f_15;
		}
		else if (iParam0 == joaat("CABR01"))
		{
			iVar0 = func_178(0, 10, 11, joaat("CABR01"));
		}
	}
	return iVar0;
}

void func_88(bool bParam0)
{
	int iVar0;

	if (Global_1898077.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_23() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077.f_2 == 4 && Global_1898077.f_12 != Global_1898077.f_13) && !bParam0)
	{
		Global_1898077.f_1 = Global_1898077.f_2;
		Global_1898077.f_12 = Global_1898077.f_13;
		func_179(iVar0, Global_1898077.f_12);
	}
	else
	{
		Global_1898077.f_1 = 0;
		Global_1898077.f_7 = iVar0;
		Global_1898077.f_8 = func_180();
		Global_1898077.f_9 = func_181(Global_1894899.f_2);
		func_182(Global_1898077.f_7, Global_1898077.f_8, Global_1898077.f_9);
	}
	Global_1898077.f_2 = 0;
}

void func_89()
{
	var uVar0;

	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &uVar0, 1, 0);
}

void func_90(struct<16> /*128*/ sParam0, int iParam16)
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
	if (!func_183(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(sParam0.f_10))) > 0 || func_184(&(sParam0.f_10)))
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
			func_185(iParam16);
			return;
		}
		iVar0++;
	}
}

void func_91(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_92()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("CABR01"), 0);
			func_186(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			func_187();
		}
		return;
	}
	if (!func_130(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	func_188();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_MISSIONDATA_SET_MISSION_RATING(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_186(1);
}

void func_93()
{
	if (!func_130(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_189(joaat("CLOTHING_SP_OUTFIT_SONY_001"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_94()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_190(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!func_130(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_190(1);
}

void func_95()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			func_191(15000, 0, 0, 0, 1);
			func_190(0);
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!func_130(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	func_192(15000, 0, 1065353216, 1, 0, 0, 1, joaat("ADD_REASON_DEFAULT"));
	func_190(1);
}

void func_96()
{
	bool bVar0;

	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!func_193(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !func_194(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_189(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
			if (!func_195(1))
			{
				func_196(1);
			}
		}
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!func_193(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !func_194(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_189(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
			if (!func_195(2))
			{
				func_196(2);
			}
		}
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !func_195(4))
		{
			func_196(4);
		}
		if (func_195(0))
		{
			func_197(0);
		}
	}
	else
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (func_193(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_198(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
			}
		}
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (func_193(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_198(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 0);
			}
		}
		if (func_195(1))
		{
			func_197(1);
		}
		if (func_195(2))
		{
			func_197(2);
		}
		if (func_195(4))
		{
			func_197(4);
		}
		if (!func_195(0))
		{
			func_196(0);
		}
	}
}

void func_97()
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar15;
	int iVar16;

	bVar0 = UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER"));
	if (!bVar0)
	{
		return;
	}
	if (!func_130(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED")))
	{
		return;
	}
	sVar1 = { func_199() /*14*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar1))
	{
		func_200(joaat("WEAPON_REVOLVER_DOUBLEACTION"));
		if (func_201(joaat("WEAPON_REVOLVER_DOUBLEACTION"), 0, 0, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0))
		{
			sVar1 = { func_199() /*14*/ };
		}
	}
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar1))
	{
		func_202(joaat("COMPONENT_REVOLVER_DOUBLEACTION_GRIP_PEARL"), sVar1, joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_GRIP"));
		func_202(joaat("COMPONENT_REVOLVER_DOUBLEACTION_BARREL_LONG"), sVar1, joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL"));
		func_202(joaat("COMPONENT_SHORTARM_BARREL_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_BARREL_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_CYLINDER_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_HAMMER_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_HAMMER_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_SIGHT_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_SIGHT_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_TRIGGER_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_TRIGGER_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_1"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING"));
		func_202(joaat("COMPONENT_SHORTARM_FRAME_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_FRAME_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_FRAME_ENGRAVING_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_FRAME_ENGRAVING_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_1"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING"));
		func_202(joaat("COMPONENT_SHORTARM_BARREL_ENGRAVING_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_BARREL_ENGRAVING_MATERIAL"));
		func_202(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_1"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING"));
		func_202(joaat("COMPONENT_SHORTARM_CYLINDER_ENGRAVING_MATERIAL_7"), sVar1, joaat("SLOTID_WEAPON_SHORTARM_CYLINDER_ENGRAVING_MATERIAL"));
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_35, -1) && !func_203())
		{
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar15, false, 2, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar16, false, 0, false);
			if (func_204(iVar16))
			{
				if (iVar16 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
				{
					if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar16))
					{
						if (func_205(24))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar16, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 0, false, false);
					}
					else if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar16))
					{
						if ((func_205(24) && func_204(iVar15)) && iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
						}
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
					}
				}
			}
			else if (!func_204(iVar15))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
			else if (iVar15 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
				if (func_205(24))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar15, true, 3, false, false);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_DOUBLEACTION"), true, 2, false, false);
			}
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_CROSS_PROMOTION_REVOLVER_REDEEMED"), true);
	}
}

void func_98()
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE")))
	{
		return;
	}
	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PC_TIMED_EXCLUSIVE"), true);
	}
}

bool func_99()
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

int func_100(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_206(func_104(iParam0));
}

bool func_101(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_102(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_103(bool bParam0, bool bParam1, bool bParam2)
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

int func_104(int iParam0)
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

int func_105(int iParam0)
{
	return (iParam0 & 31);
}

void func_106(int* iParam0)
{
	MISC::COPY_SCRIPT_STRUCT(iParam0, &(Global_1879534.f_7301), 243);
}

bool func_107(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_108(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_109(Vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_207(vParam0);
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

bool func_110()
{
	if (func_60(43) && !func_60(44))
	{
		return false;
	}
	if (func_60(67) && func_208() != 8)
	{
		return false;
	}
	return true;
}

float func_111(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_112(Vector3 vParam0, Vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0.0f)
	{
		fParam6 = 0.0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_113(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

void func_114(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

int func_115(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_61(iParam0, iParam1) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

float func_116(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_117(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_62(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

int func_118()
{
	int iVar0;

	if (func_209(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_209(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_119(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_210(iVar0);
		if (func_209(func_211(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_121(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_101(iParam0))
	{
		return false;
	}
	return func_130(Global_1347702[iParam0 /*49*/].f_15, 1);
}

int func_122(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_123(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	ENTITY::IS_ENTITY_DEAD(Global_35);
	*iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*iParam0 += ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1);
	*iParam0 += ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2);
	*iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*iParam1 += ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1);
	*iParam1 += ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2);
	*iParam1 += 6;
	iVar0 = func_212(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = func_212(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = func_212(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*iParam0 += ((iVar0 + iVar1) + iVar2);
}

int func_124(int iParam0)
{
	var uVar0;
	struct<2> /*16*/ sVar1;

	sVar1 = { func_213(iParam0) /*2*/ };
	STATS::STAT_ID_GET_INT(&sVar1, &uVar0);
	return uVar0;
}

int func_125()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_214(iVar0);
		if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(iVar2) >= STATS::CHAL_GET_MAX_RANKS(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_126(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_215(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

void func_127(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<6> /*48*/ sVar2;

	if (Global_1898329 <= 0)
	{
		return;
	}
	if (!func_15(iParam0))
	{
		return;
	}
	if (func_216(iParam0))
	{
		func_217(iParam0, 0, 2);
	}
	iVar0 = func_218(iParam0);
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

void func_128(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_104(Global_1898330[iParam0]);
		func_219(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

int func_129(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

bool func_130(int iParam0, bool bParam1)
{
	switch (func_220(iParam0))
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

bool func_131(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
		case 18:
		case 26:
		case 30:
			return true;
	}
	return false;
}

char* func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PM_PROG_EVENTS";
		case 1:
			return "PM_PROG_EVENT_STORY";
		case 2:
			return "PM_PROG_EVENT_STRANGER";
		case 3:
			return "PM_PROG_EVENT_BOUNTY";
		case 4:
			return "PM_PROG_EVENT_RANDOM";
		case 5:
			return "PM_PROG_EVENT_AMBUSH";
		case 6:
			return "PM_PROG_EVENT_HIDEOUT";
		case 7:
			return "PM_PROG_COLLECTABLES";
		case 8:
			return "PM_PROG_COLLECT_DISCOVERABLES";
		case 9:
			return "PM_PROG_COLLECT_GRAVES";
		case 10:
			return "PM_PROG_COLLECT_CARDS";
		case 11:
			return "PM_PROG_COLLECT_BONES";
		case 12:
			return "PM_PROG_COLLECT_FISH";
		case 13:
			return "PM_PROG_COLLECT_EXOTICS";
		case 14:
			return "PM_PROG_COLLECT_ROCKS";
		case 15:
			return "PM_PROG_COLLECT_TAXIDERMY";
		case 16:
			return "PM_PROG_COLLECT_TREASURE";
		case 17:
			return "PM_PROG_COLLECT_DREAMCATCHER";
		case 31:
			return "PM_PROG_LOC_SHACKS";
		case 32:
			return "PM_PROG_LOC_LEG_ANIMALS";
		case 18:
			return "PM_PROG_COMPENDIUM";
		case 19:
			return "PM_PROG_COMP_ANIMALS";
		case 20:
			return "PM_PROG_COMP_EQUIP";
		case 21:
			return "PM_PROG_COMP_FISH";
		case 22:
			return "PM_PROG_COMP_GANGS";
		case 23:
			return "PM_PROG_COMP_HORSES";
		case 24:
			return "PM_PROG_COMP_PLANTS";
		case 25:
			return "PM_PROG_COMP_WEAPONS";
		case 26:
			return "PM_PROG_CHARACTER";
		case 27:
			return "PM_PROG_CHAR_RPG";
		case 28:
			return "PM_PROG_CHAR_BOND";
		case 29:
			return "PM_PROG_CHAR_CHALLENGES";
		case 30:
			return "PM_PROG_MISCELLANEOUS";
		case 33:
			return "PM_PROG_MISC_TABLE";
		case 34:
			return "PM_PROG_MISC_SPD";
		case 35:
			return "PM_PROG_MISC_BATH";
		case 36:
			return "PM_PROG_MISC_SHOW";
		case 37:
			return "PM_PROG_MISC_THEATRE";
		case 38:
			return "PM_PROG_MISC_CRAFT";
		case 39:
			return "PM_PROG_MISC_ROBBERY";
		default:
			break;
	}
	return "";
}

char* func_133(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 1:
			iVar0 = func_115(joaat("COMPLETED"), joaat("REQUIRED_MISSIONS"));
			iVar1 = 107;
			if (iVar0 >= iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return MISC::VAR_STRING(2, "PM_PROG_STORY_VAR_STRING", iVar0);
		case 2:
			iVar0 = func_122(func_115(joaat("COMPLETED"), joaat("RC_STRANDS")), 10);
			iVar1 = 10;
			break;
		case 3:
			iVar0 = func_122(func_115(joaat("COMPLETED"), joaat("RC_STRANDS_BOUNTY")), 5);
			iVar1 = 5;
			break;
		case 4:
			iVar0 = func_122(func_117(joaat("UNIQUE_BEATS_COMPLETED")), 25);
			iVar1 = 25;
			break;
		case 5:
			iVar0 = func_122(func_117(joaat("GANG_AMBUSH_ENCOUNTERED")), 1);
			iVar1 = 1;
			break;
		case 6:
			iVar0 = func_122(func_117(joaat("GANG_HIDEOUT_COMPLETED")), 6);
			iVar1 = 6;
			break;
		case 8:
			iVar0 = func_122(func_117(joaat("DISCOVERABLE_FOUND")), 1);
			iVar1 = 1;
			break;
		case 9:
			iVar0 = func_118();
			iVar1 = 9;
			break;
		case 10:
			if (((((((((((COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ACTRESSES")) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_AMERICANS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ANIMALS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_ARTISTS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GIRLS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_GUNSLINGERS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_HORSES"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_INVENTIONS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_LANDMARKS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_PLANTS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_SPORTS"))) || COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES")) >= COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), joaat("CARD_SET_VEHICLES")))
			{
				*iParam1 = 1;
				return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
			}
			else
			{
				if (COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0) > 0)
				{
					*iParam1 = 0;
				}
				else
				{
					*iParam1 = 2;
				}
				return "";
			}
			break;
		case 11:
			if (func_121(39))
			{
				if (func_121(40))
				{
					*iParam1 = 1;
					return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 12:
			if (func_121(41))
			{
				if (func_121(42))
				{
					*iParam1 = 1;
					return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 13:
			if (func_121(43))
			{
				if (func_121(48))
				{
					*iParam1 = 1;
					return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 14:
			if (func_121(49))
			{
				if (func_121(50))
				{
					*iParam1 = 1;
					return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 15:
			if (func_121(51))
			{
				if (func_121(52))
				{
					*iParam1 = 1;
					return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 16:
			if (func_221() > 0)
			{
				if (((((func_222(499813453) || func_222(666607663)) || func_222(-220219788)) || func_222(218622660)) || func_222(390004462)) || func_222(6410548))
				{
					*iParam1 = 1;
					return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", 1, 1);
				}
				else
				{
					*iParam1 = 0;
					return "";
				}
			}
			else
			{
				*iParam1 = 2;
				return "";
			}
			break;
		case 17:
			iVar0 = func_120();
			iVar1 = 20;
			break;
		case 31:
			iVar0 = func_122(func_117(joaat("SHACK_FOUND")), 5);
			iVar1 = 5;
			break;
		case 32:
			iVar0 = func_122(func_115(joaat("KILLS"), joaat("LEGENDARY_ANIMALS")), 5);
			iVar1 = 5;
			break;
		case 19:
			iVar0 = func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("ANIMALS")), 50);
			iVar1 = 50;
			break;
		case 20:
			iVar0 = func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("EQUIPMENT")), 10);
			iVar1 = 10;
			break;
		case 21:
			iVar0 = func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("FISH")), 10);
			iVar1 = 10;
			break;
		case 22:
			iVar0 = COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("GANGS"));
			iVar1 = COMPENDIUM::_0x729D52461AEA9E22(joaat("GANGS"));
			break;
		case 23:
			iVar0 = func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HORSES")), 10);
			iVar1 = 10;
			break;
		case 24:
			iVar0 = func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("HERBS")), 20);
			iVar1 = 20;
			break;
		case 25:
			iVar0 = func_122(COMPENDIUM::_COMPENDIUM_GET_NUM_OF_ENTRIES_IN_CATEGORY(joaat("WEAPONS")), 48);
			iVar1 = 48;
			break;
		case 27:
			func_123(&iVar0, &iVar1);
			if (iVar0 == iVar1)
			{
				*iParam1 = 1;
			}
			else
			{
				*iParam1 = 0;
			}
			return "";
		case 28:
			iVar0 = func_122(1, func_124(joaat("HORSES_REACHED_MAX_BOND")));
			iVar1 = 1;
			break;
		case 29:
			iVar0 = func_125();
			iVar1 = 9;
			break;
		case 33:
			iVar0 = func_122(1, func_115(joaat("ATTEMPTS"), joaat("BLACKJACK")));
			iVar0 += func_122(1, func_115(joaat("ATTEMPTS"), joaat("DOMINOES_HAND")));
			iVar0 += func_122(1, func_115(joaat("ATTEMPTS"), joaat("FIVE_FINGER")));
			iVar0 += func_122(1, func_115(joaat("ATTEMPTS"), joaat("POKER_HAND")));
			iVar1 = 4;
			break;
		case 34:
			iVar0 = func_122(5, func_117(joaat("SPECIAL_PED_INTERACTION")));
			iVar1 = 5;
			break;
		case 35:
			iVar0 = func_122(1, func_117(joaat("BATHS_TAKEN")));
			iVar1 = 1;
			break;
		case 36:
			iVar0 = func_122(1, func_117(joaat("SHOWS_SEEN")));
			iVar1 = 1;
			break;
		case 37:
			iVar0 = func_122(1, func_117(joaat("THEATRE_VISITS")));
			iVar1 = 1;
			break;
		case 38:
			iVar0 = func_122(1, func_115(joaat("MADE_RECIPE_TYPE"), joaat("AMMO")));
			iVar0 += func_122(1, func_115(joaat("MADE_RECIPE_TYPE"), joaat("FOOD")));
			iVar0 += func_122(1, func_115(joaat("MADE_RECIPE_TYPE"), joaat("HORSE_CARE")));
			iVar0 += func_122(1, func_115(joaat("MADE_RECIPE_TYPE"), joaat("REMEDIES")));
			iVar0 += func_122(1, func_115(joaat("MADE_RECIPE_TYPE"), joaat("WEAPONS")));
			iVar0 += func_122(1, func_115(joaat("MADE_RECIPE_TYPE"), joaat("HUNTING")));
			iVar1 = 6;
			break;
		case 39:
			iVar0 = func_122(1, func_115(joaat("ROB_COMPLETED"), joaat("COACH")));
			iVar0 += func_122(1, func_115(joaat("ROB_COMPLETED"), joaat("HOME")));
			iVar0 += func_122(1, func_115(joaat("ROB_COMPLETED"), joaat("SHOP")));
			iVar0 += func_122(1, func_115(joaat("ROB_COMPLETED"), joaat("TRAIN")));
			iVar1 = 4;
			break;
	}
	if (iVar0 > 0)
	{
		if (iVar0 == iVar1)
		{
			*iParam1 = 1;
		}
		else
		{
			*iParam1 = 0;
		}
	}
	else
	{
		*iParam1 = 2;
	}
	if (iVar1 == 1 && iVar0 == 0)
	{
		return "";
	}
	return MISC::VAR_STRING(2, "PM_PROG_VAR_STRING", iVar0, iVar1);
}

bool func_134(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 9:
			return func_60(76);
		case 3:
		case 5:
		case 11:
		case 12:
		case 13:
		case 14:
			return iParam1 == 0;
		case 15:
			return (func_212(joaat("DOCUMENT_TAXIDERMY_ORDER_1"), 0, 0) > 0 || func_223() >= 1);
	}
	return true;
}

char* func_135(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return "PM_PROG_EVENT_UNKNOWN";
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
			return "PM_PROG_COLLECT_UNKNOWN";
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
			return "PM_PROG_COMP_UNKNOWN";
		case 27:
		case 28:
		case 29:
			return "PM_PROG_CHAR_UNKNOWN";
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			return "PM_PROG_MISC_UNKNOWN";
	}
	return "";
}

float func_136(int iParam0)
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_137(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100.0f) * BUILTIN::TO_FLOAT(10)));
}

bool func_138()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

char* func_139(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_140(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return joaat("HERB_ALASKAN_GINSENG");
		case 3:
			return joaat("HERB_AMERICAN_GINSENG");
		case 4:
			return joaat("HERB_BAY_BOLETE");
		case 5:
			return joaat("HERB_BLACK_BERRY");
		case 6:
			return joaat("HERB_BLACK_CURRANT");
		case 7:
			return joaat("HERB_BURDOCK_ROOT");
		case 8:
			return joaat("HERB_CHANTERELLES");
		case 11:
			return joaat("HERB_COMMON_BULRUSH");
		case 12:
			return joaat("HERB_CREEPING_THYME");
		case 13:
			return joaat("HERB_DESERT_SAGE");
		case 15:
			return joaat("HERB_ENGLISH_MACE");
		case 16:
			return joaat("HERB_EVERGREEN_HUCKLEBERRY");
		case 18:
			return joaat("HERB_GOLDEN_CURRANT");
		case 19:
			return joaat("HERB_HUMMINGBIRD_SAGE");
		case 20:
			return joaat("HERB_INDIAN_TOBACCO");
		case 23:
			return joaat("HERB_MILKWEED");
		case 26:
			return joaat("HERB_OLEANDER_SAGE");
		case 27:
			return joaat("HERB_OREGANO");
		case 28:
			return joaat("HERB_PARASOL_MUSHROOM");
		case 29:
			return joaat("HERB_PRAIRIE_POPPY");
		case 31:
			return joaat("HERB_RAMS_HEAD");
		case 33:
			return joaat("HERB_RED_RASPBERRY");
		case 34:
			return joaat("HERB_RED_SAGE");
		case 37:
			return joaat("HERB_VANILLA_FLOWER");
		case 38:
			return joaat("HERB_VIOLET_SNOWDROP");
		case 39:
			return joaat("HERB_WILD_CARROTS");
		case 40:
			return joaat("HERB_WILD_FEVERFEW");
		case 41:
			return joaat("HERB_WILD_MINT");
		case 42:
			return joaat("HERB_WINTERGREEN_BERRY");
		case 43:
			return joaat("HERB_YARROW");
		case 1:
			return joaat("HERB_ACUNAS_STAR_ORCHID");
		case 9:
			return joaat("HERB_CIGAR_ORCHID");
		case 10:
			return joaat("HERB_CLAMSHELL_ORCHID");
		case 14:
			return joaat("HERB_DRAGONS_MOUTH_ORCHID");
		case 17:
			return joaat("HERB_GHOST_ORCHID");
		case 21:
			return joaat("HERB_LADY_OF_NIGHT_ORCHID");
		case 22:
			return joaat("HERB_LADY_SLIPPER_ORCHID");
		case 24:
			return joaat("HERB_MOCCASIN_FLOWER_ORCHID");
		case 25:
			return joaat("HERB_NIGHT_SCENTED_ORCHID");
		case 30:
			return joaat("HERB_QUEENS_ORCHID");
		case 32:
			return joaat("HERB_RAT_TAIL_ORCHID");
		case 35:
			return joaat("HERB_SPARROWS_EGG_ORCHID");
		case 36:
			return joaat("HERB_SPIDER_ORCHID");
	}
	return 0;
}

int func_141(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

void func_142(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_143(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_DECREMENT_INT(&uParam0, iParam2);
}

void func_144(int iParam0)
{
	float fVar0;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(0, 0), 0);
			func_232(func_231(0));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_GENERAL_OVERVIEW_HAIR"), MISC::VAR_STRING(2, func_234()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_GENERAL_OVERVIEW_FACIAL_HAIR"), MISC::VAR_STRING(2, func_236()), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_OVERVIEW_TOOLTIP");
			func_224(1);
			func_225(1);
			func_226(1);
			break;
		case 2:
			if (func_1())
			{
				func_230("PLAYER_JOHN_HONOR", 0);
			}
			else
			{
				func_230("PLAYER_ARTHUR_HONOR", 0);
			}
			func_232("PMPLAYER_GENERAL_HONOR_DESC");
			func_233("PMPLAYER_HONOR");
			func_152(0, 1);
			fVar0 = ((1.0f - func_237()) * 100.0f);
			if (fVar0 == 0.0f)
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_GENERAL_HONOR_STORE_PRICES"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(fVar0)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(0);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_244());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 1, 1);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(joaat("PROVISION_TALISMAN_RAVEN_CLAW"), "PROVISION_TALISMAN_RAVEN_CLAW", "PROVISION_TALISMAN_RAVEN_CLAW_DESC", "TALISMAN_RAVEN_CLAW", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_BEAVER_TOOTH"), "PROVISION_TRINKET_BEAVER_TOOTH", "PROVISION_TRINKET_BEAVER_TOOTH_DESC", "TRINKET_BEAVER_TOOTH", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(joaat("PROVISION_TRINKET_FOX_CLAW"), "PROVISION_TRINKET_FOX_CLAW", "PROVISION_TRINKET_FOX_CLAW_DESC", "TRINKET_FOX_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(joaat("PROVISION_TRINKET_BUCK_ANTLER"), "PROVISION_TRINKET_BUCK_ANTLER", "PROVISION_TRINKET_BUCK_ANTLER_DESC", "TRINKET_BUCK_ANTLER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(joaat("PROVISION_TRINKET_RAM_HORN"), "PROVISION_TRINKET_RAM_HORN", "PROVISION_TRINKET_RAM_HORN_DESC", "TRINKET_RAM_HORN", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(joaat("PROVISION_TRINKET_WOLF_HEART"), "PROVISION_TRINKET_WOLF_HEART", "PROVISION_TRINKET_WOLF_HEART_DESC", "TRINKET_WOLF_HEART", 0);
			func_152(0, 1);
			break;
		case 15:
			func_248(joaat("PROVISION_TRINKET_PRONGHORN_ANTLER"), "PROVISION_TRINKET_PRONGHORN_ANTLER", "PROVISION_TRINKET_PRONGHORN_ANTLER_DESC", "TRINKET_PRONGHORN_ANTLER", 0);
			func_152(0, 1);
			break;
		case 16:
			func_248(joaat("PROVISION_TALISMAN_EAGLE_TALON"), "PROVISION_TALISMAN_EAGLE_TALON", "PROVISION_TALISMAN_EAGLE_TALON_DESC", "TALISMAN_EAGLE_TALON", 0);
			func_152(0, 1);
			break;
		case 17:
			func_248(joaat("PROVISION_TRINKET_CAT_EYE"), "PROVISION_TRINKET_CAT_EYE", "PROVISION_TRINKET_CAT_EYE_DESC", "PROVISION_TRINKET_CAT_EYE", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 18:
			func_248(joaat("PROVISION_TRINKET_SHARK_TOOTH"), "PROVISION_TRINKET_SHARK_TOOTH", "PROVISION_TRINKET_SHARK_TOOTH_DESC", "PROVISION_TRINKET_SHARK_TOOTH", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 19:
			func_248(joaat("PROVISION_TRINKET_CROW_BEAK"), "PROVISION_TRINKET_CROW_BEAK", "PROVISION_TRINKET_CROW_BEAK_DESC", "PROVISION_TRINKET_CROW_BEAK", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 20:
			func_248(joaat("PROVISION_DISCO_ARROWHEAD_02"), "PROVISION_DISCO_ARROWHEAD_02", "PROVISION_DISCO_ARROWHEAD_02_DESC", "PERK_ARROWHEAD", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 21:
			func_248(joaat("DOCUMENT_FIELD_MANUAL"), "DOCUMENT_FIELD_MANUAL", "DOCUMENT_FIELD_MANUAL_DESC", "PERK_MANUAL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 22:
			func_152(0, 1);
			func_249(-1);
			break;
	}
}

void func_145(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(1, 0), 0);
			func_232(func_231(1));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[1 /*36*/].f_12[0]);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[1 /*36*/].f_12[1]);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[1 /*36*/].f_12[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[1 /*36*/].f_16[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[1 /*36*/].f_32[2]);
			func_235(2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_224(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(1, 0), 0);
			func_232("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_163("PMPLAYER_HEALTH_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(1);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_240(), func_241());
			func_232("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_233("PMPLAYER_CONDITION_TEMPERATURE");
			func_152(0, 1);
			func_242();
			func_163("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_230(func_243(), func_244());
			func_232("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_233("PMPLAYER_CONDITION_TOXICITY");
			func_152(0, 1);
			func_245();
			func_163("PMPLAYER_CONDITION_TOXICITY_TOOLTIP");
			break;
		case 7:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(1, 0, 0);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 9:
			func_248(joaat("PROVISION_TRINKET_BISON_HORN"), "PROVISION_TRINKET_BISON_HORN", "PROVISION_TRINKET_BISON_HORN_DESC", "TRINKET_BISON_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_MOOSE_ANTLER"), "PROVISION_TRINKET_MOOSE_ANTLER", "PROVISION_TRINKET_MOOSE_ANTLER_DESC", "TRINKET_MOOSE_ANTLER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(joaat("PROVISION_TALISMAN_BEAR_CLAW"), "PROVISION_TALISMAN_BEAR_CLAW", "PROVISION_TALISMAN_BEAR_CLAW_DESC", "TALISMAN_BEAR_CLAW", 0);
			func_152(0, 1);
			break;
		case 12:
			func_248(joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 13:
			func_248(joaat("PROVISION_TRINKET_IGUANA_SCALE"), "PROVISION_TRINKET_IGUANA_SCALE", "PROVISION_TRINKET_IGUANA_SCALE_DESC", "TRINKET_IGUANA_SCALE", 0);
			func_152(0, 1);
			break;
		case 14:
			func_248(joaat("PROVISION_TRINKET_TURTLE_SHELL"), "PROVISION_TRINKET_TURTLE_SHELL", "PROVISION_TRINKET_TURTLE_SHELL_DESC", "PROVISION_TRINKET_TURTLE_SHELL", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 15:
			func_152(0, 1);
			func_249(0);
			break;
	}
}

void func_146(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(2, 0), 0);
			func_232(func_231(2));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[2 /*36*/].f_12[0]);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[2 /*36*/].f_12[1]);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[2 /*36*/].f_12[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[2 /*36*/].f_16[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[2 /*36*/].f_32[2]);
			func_235(2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0.0f, 0.0f, 0.0f, "RPG_Stamina");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_225(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(2, 0), 0);
			func_232("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_163("PMPLAYER_STAMINA_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(2);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 1, 0);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(joaat("PROVISION_TRINKET_LION_PAW"), "PROVISION_TRINKET_LION_PAW", "PROVISION_TRINKET_LION_PAW_DESC", "TRINKET_LION_PAW", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(joaat("PROVISION_TRINKET_COUGAR_FANG"), "PROVISION_TRINKET_COUGAR_FANG", "PROVISION_TRINKET_COUGAR_FANG_DESC", "TRINKET_COUGAR_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(joaat("PROVISION_TALISMAN_BUFFALO_HORN"), "PROVISION_TALISMAN_BUFFALO_HORN", "PROVISION_TALISMAN_BUFFALO_HORN_DESC", "TALISMAN_BUFFALO_HORN", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_248(joaat("PROVISION_TRINKET_HAWK_TALON"), "PROVISION_TRINKET_HAWK_TALON", "PROVISION_TRINKET_HAWK_TALON_DESC", "PROVISION_TRINKET_HAWK_TALON", "pausemenu_player_update");
			func_152(0, 1);
			break;
		case 12:
			func_152(0, 1);
			func_249(1);
			break;
	}
}

void func_147(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(3, 0), 0);
			func_232(func_231(3));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[3 /*36*/].f_12[0]);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[3 /*36*/].f_12[1]);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1954819.f_5.f_2[3 /*36*/].f_12[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[3 /*36*/].f_16[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1954819.f_5.f_2[3 /*36*/].f_32[2]);
			func_235(2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0.0f, 0.0f, 0.0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_250(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_250(2, "RPG_ARROW_UP", 0);
			}
			func_226(1);
			func_163("");
			break;
		case 2:
			func_230(func_229(3, 0), 0);
			func_232("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_233("PMPLAYER_PROGRESSION");
			func_152(0, 1);
			func_251(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_163("PMPLAYER_DEADEYE_PROGRESSION_TOOLTIP");
			break;
		case 4:
			func_230(func_238(), 0);
			func_232("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_152(0, 1);
			func_239(3);
			func_163("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_230(func_246(), 0);
			func_232("PMPLAYER_CONDITION_WELLBEING_DESC");
			func_233("PMPLAYER_CONDITION_WELLBEING");
			func_152(0, 1);
			func_247(0, 0, 1);
			if (func_1())
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_JOHN_TOOLTIP");
			}
			else
			{
				func_163("PMPLAYER_CONDITION_WELLBEING_TOOLTIP");
			}
			break;
		case 7:
			func_248(joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"), "PROVISION_TALISMAN_ALLIGATOR_TOOTH", "PROVISION_TALISMAN_ALLIGATOR_TOOTH_DESC", "TALISMAN_ALLIGATOR_TOOTH", 0);
			func_152(0, 1);
			break;
		case 8:
			func_248(joaat("PROVISION_TRINKET_COYOTE_FANG"), "PROVISION_TRINKET_COYOTE_FANG", "PROVISION_TRINKET_COYOTE_FANG_DESC", "TRINKET_COYOTE_FANG", 0);
			func_152(0, 1);
			break;
		case 9:
			func_248(joaat("PROVISION_TRINKET_PANTHER_EYE"), "PROVISION_TRINKET_PANTHER_EYE", "PROVISION_TRINKET_PANTHER_EYE_DESC", "TRINKET_PANTHER_EYE", 0);
			func_152(0, 1);
			break;
		case 10:
			func_248(joaat("PROVISION_TRINKET_OWL_FEATHER"), "PROVISION_TRINKET_OWL_FEATHER", "PROVISION_TRINKET_OWL_FEATHER_DESC", "TRINKET_OWL_FEATHER", 0);
			func_152(0, 1);
			break;
		case 11:
			func_152(0, 1);
			func_249(2);
			break;
	}
}

void func_148(int iParam0)
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
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	int iVar16;
	int iVar17;
	char cVar18[32];
	int iVar22;
	int iVar23;
	int iVar24;

	iVar0 = -1;
	iVar1 = -1;
	if (func_164(0))
	{
		iVar0 = 0;
	}
	if (func_164(1))
	{
		iVar1 = 1;
	}
	if (func_166(Global_35, func_165(iVar1), 0) || iVar0 == -1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_252(iVar0);
	iVar3 = func_165(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		iVar4 = func_253(iVar3);
		iVar6 = func_254(iVar3);
	}
	else
	{
		iVar4 = func_255(iVar2);
		iVar6 = func_256(iVar2);
	}
	iVar5 = func_257(iVar0, 0);
	iVar7 = func_257(iVar0, 1);
	func_224(0);
	func_225(0);
	func_226(0);
	func_160(0);
	func_161(0);
	func_227(0);
	func_228(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_230(func_229(4, 0), 0);
			func_232(func_231(4));
			func_233("PMPLAYER_OVERVIEW");
			func_152(0, 1);
			if (iVar0 == 0 && func_258() == iVar0)
			{
				func_259(&iVar8, &iVar9);
				iVar8 = BUILTIN::FLOOR(((float)iVar8 * 0.01f));
				iVar9 = BUILTIN::FLOOR(((float)iVar9 * 0.01f));
			}
			if (func_260())
			{
				iVar8++;
			}
			fVar10 = ((float)func_261(iVar2) + 1 * 10.0f);
			fVar11 = (fVar10 + (BUILTIN::TO_FLOAT(iVar8) * 10.0f));
			fVar12 = ((fVar10 + (3.0f * 10.0f)) * 0.01f);
			fVar13 = ((float)func_262(iVar2) + 1 * 10.0f);
			fVar14 = (fVar13 + (BUILTIN::TO_FLOAT(iVar9) * 10.0f));
			fVar15 = ((fVar13 + (2.0f * 10.0f)) * 0.01f);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar10, fVar11, fVar12, 0);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar13, fVar14, fVar15, 0);
			func_235(2, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::VAR_STRING(2, func_264(func_263(iVar2))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_160(1);
			func_161(1);
			func_227(1);
			func_265(10, ((float)iVar4 + 1 / 10.0f), BUILTIN::ROUND((((float)iVar5 / 100.0f) * 15.0f)));
			func_266(10, ((float)iVar6 + 1 / 10.0f), BUILTIN::ROUND((((float)iVar7 / 100.0f) * 15.0f)));
			func_163("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_230(func_229(4, 0), 0);
			func_232("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_233("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_152(0, 1);
			iVar16 = func_267(iVar2);
			if (!ENTITY::IS_ENTITY_DEAD(iVar3))
			{
				iVar17 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar3, 13);
			}
			else
			{
				iVar17 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar2, 13);
			}
			if (iVar17 < 10)
			{
				strcpy_s(&cVar18, 32, "HORSE_WEIGHT_MALNOURISHED");
			}
			else if (iVar17 < 30)
			{
				strcpy_s(&cVar18, 32, "HORSE_WEIGHT_THIN");
			}
			else if (iVar17 < 70)
			{
				strcpy_s(&cVar18, 32, "HORSE_WEIGHT_FIT");
			}
			else if (iVar17 < 90)
			{
				strcpy_s(&cVar18, 32, "HORSE_WEIGHT_OVERWEIGHT");
			}
			else
			{
				strcpy_s(&cVar18, 32, "HORSE_WEIGHT_OBESE");
			}
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::VAR_STRING(2, func_269(func_268(iVar2), iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::VAR_STRING(2, func_270(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(2, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::VAR_STRING(2, func_272(func_271(iVar0))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(3, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::VAR_STRING(2, &cVar18), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(4, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::VAR_STRING(2, func_273(iVar16)), 0, 0, 0, 0, 0, 0, 0, 0);
			func_163("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			if (func_1())
			{
				func_230("JOHN_HORSE_BONDING", 0);
			}
			else
			{
				func_230("HORSE_BONDING", 0);
			}
			func_232("PMPLAYER_HORSE_BONDING_DESC");
			func_233("PMPLAYER_HORSE_BONDING_TITLE");
			func_152(0, 1);
			iVar22 = func_167(iVar0);
			iVar23 = BUILTIN::FLOOR(func_274(iVar0));
			iVar24 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar2, 7, iVar22 + 1);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar22, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			if (iVar22 < 4)
			{
				func_235(1, MISC::VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar23, iVar24), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_163("PMPLAYER_HORSE_BONDING_TIP");
			func_227(1);
			break;
		case 4:
			func_230("HORSE_HEALTH", 0);
			func_232("PMPLAYER_HORSE_HEALTH_DESC");
			func_233("PMPLAYER_HORSE_HEALTH_TITLE");
			func_152(0, 1);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar4 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar5), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_275(2, iVar0, 0);
			func_163("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_230("HORSE_STAMINA", 0);
			func_232("PMPLAYER_HORSE_STAMINA_DESC");
			func_233("PMPLAYER_HORSE_STAMINA_TITLE");
			func_152(0, 1);
			func_235(0, MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar6 + 1, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_235(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar7), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_275(2, iVar0, 1);
			func_163("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			if (func_1())
			{
				func_230("JOHN_HORSE_CLEANLINESS", 0);
			}
			else
			{
				func_230("HORSE_CLEANLINESS", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_152(0, 1);
			if (func_168(iVar0, 0) > 50)
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((0.25f * 100.0f)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			func_163("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_230(func_229(4, 0), 0);
			func_232("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_233("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_152(0, 1);
			func_276();
			func_163("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			if (func_1())
			{
				func_230("JOHN_HORSE_TEMPERAMENT", 0);
			}
			else
			{
				func_230("HORSE_TEMPERAMENT", 0);
			}
			func_232("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_233("PMPLAYER_HORSE_CONDITION_MOOD");
			func_152(0, 1);
			func_163("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_230("HORSE_TACK_STIRRUPS", 0);
			func_232("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_233("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_152(0, 1);
			func_277();
			func_163("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
	}
}

bool func_149(int iParam0)
{
	return false;
	switch (iParam0)
	{
		case 6:
		case 29:
		case 33:
		case 38:
		case 39:
			return true;
	}
	return false;
}

char* func_150(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "STORY_MISSIONS";
		case 2:
			return "RANDOM_CHARACTER_MISSIONS";
		case 3:
			return "BOUNTY_HUNTER_MISSIONS";
		case 4:
			return "RANDOM_EVENTS";
		case 5:
			return "RIVAL_GANGS_AMBUSH";
		case 6:
			return "RIVAL_GANGS_HIDEOUTS";
		case 8:
			return "COLLECTABLES_DISCOVERABLES";
		case 9:
			return "COLLECTABLES_GRAVES";
		case 10:
			return "COLLECTABLES_CIG_CARDS";
		case 11:
			return "COLLECTABLES_DINO";
		case 12:
			return "COLLECTABLES_FISH";
		case 13:
			return "COLLECTABLES_EXOTICS";
		case 14:
			return "COLLECTABLES_ROCKS";
		case 15:
			return "COLLECTABLES_TAXIDERMY";
		case 16:
			return "COLLECTABLES_TREASURE";
		case 17:
			return "COLLECTABLES_DREAMCATCHERS";
		case 31:
			return "LOCATION_SHACKS";
		case 32:
			return "LOCATION_LEGENDARY_ANIMALS";
		case 19:
			return "COMPENDIUM_DISCOVER_ANIMALS";
		case 20:
			return "COMPENDIUM_DISCOVER_EQUIPMENT";
		case 21:
			return "COMPENDIUM_DISCOVER_FISH";
		case 22:
			return "COMPENDIUM_DISCOVER_GANGS";
		case 23:
			return "COMPENDIUM_DISCOVER_HORSES";
		case 24:
			return "COMPENDIUM_DISCOVER_PLANTS";
		case 25:
			return "COMPENDIUM_DISCOVER_WEAPONS";
		case 27:
			return "CHARACTER_MAX_RPG_TANKS";
		case 28:
			return "CHARACTER_HORSE_BOND";
		case 29:
			return "CHARACTER_CHALLENGES";
		case 33:
			return "MISC_TABLE_GAMES";
		case 34:
			return "MISC_SPECIAL_PEDS";
		case 35:
			return "MISC_BATH";
		case 36:
			return "MISC_SHOW";
		case 37:
			return "MISC_THEATRE";
		case 38:
			return "MISC_CRAFT_EACH_RECIPE";
		case 39:
			return "MISC_ROBBERIES";
		default:
			break;
	}
	return "STORY_MISSIONS";
}

void func_151(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 33:
			func_278(uParam0, 0, "MAP_CARD_MINIGAMES_BLACKJACK", 1);
			func_278(uParam0, 1, "MAP_CARD_MINIGAMES_DOMINOES_DRAW", 1);
			func_278(uParam0, 2, "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC", 1);
			func_278(uParam0, 3, "MAP_CARD_MINIGAMES_POKER", 1);
			break;
	}
}

void func_152(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1954819.f_5.f_147.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1954819.f_5.f_147.f_21);
	}
}

char* func_153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_154(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147, sParam0);
}

void func_155(int iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_147.f_22, iParam0, "player_group_item", Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_15);
}

void func_156(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_21, sParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_147.f_22, iParam0, "player_list_item", Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_15);
}

char* func_157(int iParam0)
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

void func_158(int iParam0)
{
	if (func_1())
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
		return;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", MISC::VAR_STRING(2, "PMPLAYER_CONDITION_WELLBEING_SICK2"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else if (Global_40.f_11095.f_67 >= 7)
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", MISC::VAR_STRING(2, "PMPLAYER_CONDITION_WELLBEING_SICK1"), 1, 1, 1, "rpg_sick", "pausemenu_player");
	}
	else
	{
		func_156(iParam0, "PMPLAYER_CONDITION_WELLBEING", "", 0, 0, 0, 0, 0);
	}
}

void func_159(int iParam0, int iParam1, char* sParam2)
{
	if (func_193(iParam1, 1, 0))
	{
		func_156(iParam0, sParam2, "", 1, 0, 0, 0, 0);
	}
	else
	{
		func_156(iParam0, "PMPLAYER_PERK_UNDISCOVERED_TALISMAN", "", 0, 0, 0, 0, 0);
	}
}

void func_160(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_9, bParam0);
}

void func_161(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_10, bParam0);
}

int func_162(int iParam0)
{
	return func_279(Global_40.f_11095.f_11[iParam0]);
}

void func_163(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_5, sParam0);
}

bool func_164(int iParam0)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_281(iParam0) == 0)
	{
		return false;
	}
	return true;
}

int func_165(int iParam0)
{
	iParam0 = func_280(iParam0);
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

bool func_166(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

int func_167(int iParam0)
{
	iParam0 = func_280(iParam0);
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

int func_168(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

float func_169(int iParam0)
{
	int iVar0;
	float fVar1;

	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return 0.0f;
	}
	if (iParam0 >= 7)
	{
		return 0.0f;
	}
	if (!func_282(iParam0))
	{
		return 0.0f;
	}
	iVar0 = func_165(iParam0);
	fVar1 = func_283(iVar0);
	return fVar1;
}

bool func_170(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;

	if (!func_284(856287005, iParam0))
	{
		return false;
	}
	sVar0 = { func_285() /*4*/ };
	*iParam1 = func_286(sVar0, iParam0, 0);
	if (!func_287(*iParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_171(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> /*152*/ sVar1;

	sVar1.f_2 = 5;
	sVar1.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(iParam0, &sVar1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && sVar1.f_18[iVar0 /*2*/].f_1 != iParam2)
			{
				Jump @117; // curOff = 67
			}
			else if (iParam3 != 0 && sVar1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*iParam1 = { sVar1.f_18[iVar0 /*2*/] /*2*/ };
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

char* func_172(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(func_288(iParam0));
}

struct<8> /*64*/ func_173(int iParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, "");
	iParam0 = func_280(iParam0);
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

char[] func_174(char[4] cParam0)
{
	return cParam0;
}

int func_175(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1835011)
	{
		if (MISC::GET_HASH_KEY(&(Global_1835011[iVar0 /*74*/].f_8)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_176(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

int func_177(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1347702)
	{
		if (MISC::GET_HASH_KEY(&(Global_1347702[iVar0 /*49*/].f_3)) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_289())
	{
		iVar2 = func_289();
	}
	iVar5 = func_290(iVar3, iVar4, iParam2);
	if (Global_1572887.f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_104(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_104(iVar6) == 0)
			{
				return func_291(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_104(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_104(iVar6) == 0)
			{
				return func_291(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_291(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

void func_179(int iParam0, var uParam1)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	sVar0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &sVar0, 2, 2);
}

int func_180()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.0f, 1.0f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_181(int iParam0)
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

void func_182(var uParam0, var uParam1, var uParam2)
{
	Vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

bool func_183(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

bool func_184(char* sParam0)
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

void func_185(int iParam0)
{
	if (func_183(iParam0, 1))
	{
		func_292(1);
	}
}

void func_186(bool bParam0)
{
	struct<6> /*48*/ sVar0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (bParam0)
	{
		func_189(joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_187();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_293(joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"));
		func_294(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_198(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_295(146323340, func_285());
		sVar0 = { func_296() /*6*/ };
		if (func_297(&sVar0) == -1387633835)
		{
			func_298(&sVar0);
			func_299(sVar0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		func_300(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_301(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				func_302(iVar6, iVar7);
				func_303(iVar6, iVar8);
				func_304(iVar6, iVar9);
				func_305(iVar6, 0);
				if (func_306(iVar6))
				{
					func_307(iVar6);
				}
				iVar10 = func_308(iVar8);
				func_309(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

int func_187()
{
	if (!func_310(-1898635967, func_285(), 1))
	{
		return 0;
	}
	if (func_138())
	{
		if (!func_310(146323340, func_285(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_188()
{
	func_311(joaat("WEAPON_PISTOL_VOLCANIC"));
	func_311(joaat("WEAPON_SHOTGUN_PUMP"));
	func_311(joaat("WEAPON_RIFLE_VARMINT"));
}

int func_189(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> /*104*/ sVar11;
	int iVar34;
	struct<2> /*16*/ sVar35;
	bool bVar37;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_312(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_313(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_314(iParam0, bParam2);
	iVar2 = 0;
	if (func_212(iParam0, 0, 0) == 0)
	{
		if (func_315(iParam0))
		{
			iVar5 = func_316(iParam0);
			iVar6 = func_317(iVar5);
			iVar7 = func_318(iVar6) + 1;
			func_319(iVar5);
			if (func_320(38))
			{
				func_321(483, 0);
			}
			else
			{
				func_321(482, 0);
			}
			if (iVar7 == func_322(iVar6))
			{
				func_189(func_323(iVar6), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				if (func_35() && func_324(4))
				{
					if (func_35() && (func_325(38) || func_320(38)))
					{
						func_327(38, func_323(iVar6), 0, 0, func_326(), 0, -1, 0);
						func_328(2);
					}
					else
					{
						func_327(38, func_323(iVar6), 0, 0, func_326(), 0, -1, 0);
						func_328(1);
					}
				}
			}
			else if (func_35() && func_324(4))
			{
				if (func_35() && (func_325(38) || func_320(38)))
				{
					func_327(38, 0, 0, 0, func_326(), 0, -1, 0);
					func_328(2);
				}
				else
				{
					func_327(38, 0, 0, 0, func_326(), 0, -1, 0);
					func_328(1);
				}
			}
			if (func_35() && func_324(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (func_35() && (func_325(38) || func_320(38)))
					{
						func_329(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), iVar6), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_329(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_330(iParam0) == joaat("CLOTHING"))
	{
		if ((!func_331(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && !func_331(iParam0, joaat("CI_TAG_ITEM_UPGRADE"))) && !func_331(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			bVar3 = true;
		}
	}
	if (func_332(iParam0, (1 << 23)) && !func_205(28))
	{
		func_333(28);
	}
	if (!bVar3)
	{
		if (func_331(iParam0, joaat("CI_TAG_ITEM_THROWN")))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_334(iParam0) == joaat("CI_CATEGORY_AMMO"))
			{
				iVar1 = func_336(func_335(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (func_23() == -1)
					{
						func_200(iVar1);
					}
					if (func_337(0) && func_201(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_338(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (func_23() == -1)
					{
						func_200(iParam0);
					}
					if (func_337(0) && func_201(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_338(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_330(iParam0) == joaat("WEAPON"))
		{
			if (!func_339(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_330(iParam0) == joaat("AMMO") && func_340(iParam0))
		{
			if (!func_341(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_TALISMAN")))
		{
			func_342(iParam0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_TRINKET")))
		{
			func_343(iParam0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_ANIMAL_CLAW")))
		{
			func_142(func_213(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			func_142(func_61(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_VALUABLE")) && !func_331(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (func_130(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_321(498, 0);
				}
			}
			if (func_331(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_331(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
			{
				func_344(iParam0);
			}
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_CANNED")))
		{
			if (func_331(iParam0, joaat("CI_TAG_ITEM_FRUIT")))
			{
			}
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_USED")) && func_331(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")))
		{
			func_321(484, 0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_CONSUMABLE")) && func_331(iParam0, joaat("CI_TAG_ITEM_SNACK")))
		{
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_CONFECTIONARY")))
		{
		}
		else if (func_331(iParam0, 589988438))
		{
			if (func_345())
			{
				func_346(joaat("REWARD_SMALL"), 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_LETTER_INVITATION")) && func_331(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_347(iParam0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_DINO_BONES")))
		{
			func_348(iParam0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_ROCK_CARVINGS")))
		{
			func_349(iParam0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_331(iParam0, joaat("CI_TAG_ITEM_DOCUMENT")))
		{
			func_350(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_TREASURE_HUNTER_MAP")))
		{
			func_351();
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_352(iParam0, iParam1);
			func_353(iParam0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_331(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_354(iParam0, 0, 0, 0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT")) || func_331(iParam0, joaat("CI_TAG_ITEM_TRINKET_INGREDIENT")))
		{
			func_344(iParam0);
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_MONEY")))
		{
			if (func_23() != -1)
			{
				return 0;
			}
			func_355(iParam0, iParam5, iParam8);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_FISHING_LURE")))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_193(215778062, 1, 0))
					{
						func_189(215778062, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_193(670273567, 1, 0))
					{
						func_189(670273567, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_193(-967317137, 1, 0))
					{
						func_189(-967317137, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_193(526074061, 1, 0))
					{
						func_189(526074061, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_193(-1045488665, 1, 0))
					{
						func_189(-1045488665, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_193(471514780, 1, 0))
					{
						func_189(471514780, 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")) && func_332(iParam0, 4))
		{
			if (!func_320(42))
			{
				func_356(iParam0);
			}
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
		{
			func_357(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_331(iParam0, joaat("CI_TAG_ITEM_IS_SATCHEL")))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_189(iVar8, 1, 1, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_333(24);
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
				{
					func_358(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (func_359(&iVar9, 0))
				{
					func_201(iVar9, 0, 0, bParam4, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (func_23() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
				{
					func_358(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				func_321(415, 0);
				Global_40.f_11095.f_60 += 0.1f;
				func_360();
				Global_40.f_11095.f_61 += 0.1f;
				func_361();
				Global_40.f_11095.f_55 += 0.1f;
				Global_40.f_11095.f_57 += 0.1f;
				Global_40.f_11095.f_56 += 0.1f;
				Global_40.f_11095.f_58 += 0.5f;
				func_362();
				Global_40.f_11095.f_63 += 0.1f;
				func_363();
				Global_40.f_11095.f_49 += 0.1f;
				Global_40.f_11095.f_50 += 0.1f;
				Global_40.f_11095.f_51 += 0.1f;
				func_364();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_365(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				func_366(499813453, 0);
				func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_365(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				func_366(499813453, 0);
				func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_365(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				func_366(499813453, 0);
				func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_365(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				func_366(666607663, 0);
				func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_365(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				func_366(666607663, 0);
				func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_365(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				func_366(666607663, 0);
				func_368(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_365(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				func_366(-220219788, 0);
				func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_365(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				func_366(-220219788, 0);
				func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_365(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				func_366(-220219788, 0);
				func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_365(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				func_366(218622660, 0);
				func_196(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_365(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				func_366(218622660, 0);
				func_196(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_365(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				func_366(390004462, 0);
				func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_365(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				func_366(390004462, 0);
				func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_365(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				func_366(390004462, 0);
				func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_365(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				func_366(6410548, 0);
				func_371(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_365(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				func_366(6410548, 0);
				func_371(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_365(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				func_366(6410548, 0);
				func_371(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_365(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				func_366(6410548, 0);
				func_371(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_372(242, func_288(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_372(240, func_288(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_372(241, func_288(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_373(594, joaat("TF_FORTIFY_TANK1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_373(594, joaat("TF_FORTIFY_TANK2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_373(594, joaat("TF_FORTIFY_TANK3"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_373(594, joaat("TF_FORTIFY_TANK4"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_373(595, joaat("TF_FORTIFY_CORE1"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_9447 + 60000))
				{
					func_373(595, joaat("TF_FORTIFY_CORE2"), 1, 1);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_321(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_321(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				func_321(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)) % 3) == 0)
				{
					func_189(func_374(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				else
				{
					func_189(func_375(), 1, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_205(1))
				{
					func_321(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_321(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_23() == -1)
				{
					iParam0 = joaat("UPGRADE_UPG_MORTAR_PESTLE_SP");
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_321(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		func_376(&iVar10);
		if (!func_377(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_337(0))
		{
			return 1;
		}
		if (func_330(iParam0) == joaat("CLOTHING"))
		{
			func_378(iParam0);
		}
		if (func_331(iParam0, joaat("CI_TAG_ITEM_UPGRADE")))
		{
			func_379(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_337(0))
		{
			sVar11.f_1 = 10;
			sVar11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, false, false, iVar2, &sVar11, 0);
			iVar34 = 0;
			while (iVar34 < sVar11.f_0)
			{
				func_189(sVar11.f_1[iVar34], sVar11.f_12[iVar34], 0, 0, 0, joaat("ADD_REASON_LOOTED"), 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_380(iVar2, 0);
		}
	}
	sVar35 = { func_381(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&sVar35, iVar0);
	}
	func_382(iParam0);
	if (fParam6 > 0.0f)
	{
		if (func_331(iParam0, joaat("CI_TAG_ITEM_MEAT_FISH")))
		{
			func_383(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == joaat("ADD_REASON_PURCHASED");
		func_384(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_190(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0)
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_189(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		func_189(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, joaat("ADD_REASON_DEFAULT"), 0, 0, 0, 0);
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_198(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("PROVISION_ANIMAL_FAT"), 5, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		func_198(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		func_300(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_301(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				func_302(iVar0, iVar1);
				func_303(iVar0, iVar2);
				func_304(iVar0, iVar3);
				func_305(iVar0, 0);
				if (func_306(iVar0))
				{
					func_307(iVar0);
				}
				iVar4 = func_308(iVar2);
				func_309(iVar0, iVar4);
			}
			iVar0++;
		}
		func_187();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

void func_191(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_385(iParam0);
	if (bParam3)
	{
		func_386(iParam0, sParam1, iParam2);
	}
}

void func_192(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_387(iParam0, sParam4, iParam5);
	}
	func_388(iParam0, bParam1, fParam2, iParam3, iParam7);
}

bool func_193(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_330(iParam0);
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
		if (!func_389(iParam0, 1))
		{
			return false;
		}
	}
	return func_212(iParam0, 0, bParam2) >= iParam1;
}

bool func_194(int iParam0)
{
	int iVar0;

	iVar0 = func_220(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_195(int iParam0)
{
	return (Global_40.f_12004.f_10 & iParam0) != 0;
}

void func_196(int iParam0)
{
	Global_40.f_12004.f_10 |= iParam0;
}

void func_197(int iParam0)
{
	Global_40.f_12004.f_10 -= (Global_40.f_12004.f_10 & iParam0);
}

int func_198(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> /*16*/ sVar5;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == joaat("REMOVE_REASON_USED");
	bVar1 = iParam3 == joaat("REMOVE_REASON_SOLD");
	bVar2 = iParam3 == joaat("REMOVE_REASON_GIVEN");
	iVar3 = func_390(iParam0, 1);
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
			func_384(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_193(iParam0, 1, bParam4))
	{
		return 0;
	}
	sVar5 = { func_381(iParam0) /*2*/ };
	if (STATS::STAT_ID_IS_VALID(&sVar5))
	{
		if ((func_212(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&sVar5, iParam1);
		}
		else if ((func_212(iParam0, 0, 0) - iParam1) < 0)
		{
			func_198(iParam0, func_212(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_330(iParam0) == joaat("WEAPON"))
	{
		if (!func_391(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_392(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!func_337(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		func_384(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_393(iParam0, iParam1);
	return 1;
}

struct<14> /*112*/ func_199()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> /*112*/ sVar3;
	struct<10> /*80*/ sVar17;
	struct<14> /*112*/ sVar39;

	sVar3.f_9 = joaat("SLOTID_NONE");
	sVar17.f_9 = joaat("SLOTID_NONE");
	if (func_394("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_395(&sVar3, iVar2, iVar0, iVar1))
			{
				Jump @136; // curOff = 80
			}
			else if (sVar3.f_4 != joaat("WEAPON_REVOLVER_DOUBLEACTION"))
			{
			}
			else if (func_396(sVar3.f_4, &sVar17, sVar3.f_9))
			{
			}
			else
			{
				func_397(iVar0);
				return sVar3;
			}
			iVar2++;
		}
		func_397(iVar0);
	}
	sVar39.f_9 = joaat("SLOTID_NONE");
	return sVar39;
}

void func_200(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	if (!func_204(iParam0))
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

bool func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> /*32*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	int iVar28;
	struct<4> /*32*/ sVar29;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		sVar0 = { func_398(iParam0, 0, 1) /*5*/ };
		iVar5 = joaat("SLOTID_WEAPON_0");
		sVar6.f_9 = joaat("SLOTID_NONE");
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_399((398 + iVar28), 1);
			if (func_400(iParam0, &sVar0, iVar5, 0))
			{
				if (func_396(iParam0, &sVar6, iVar5))
				{
					sVar29 = { func_401(iParam0, sVar0, iVar5, 0) /*4*/ };
					func_402(iParam0, &sVar29, &sVar0, 1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_337(0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_338(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					func_403(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::GIVE_WEAPON_TO_PED(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1.0f, iParam6, bParam7, 0.0f, false);
				return true;
			}
		}
	}
}

void func_202(int iParam0, struct<4> /*32*/ sParam1, int iParam5)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<4> /*32*/ sVar19;

	sVar0 = { sParam1 /*4*/ };
	sVar0.f_4 = iParam5;
	sVar5.f_9 = joaat("SLOTID_NONE");
	if (func_404(sParam1, iParam5, &sVar5, 0))
	{
		func_402(sVar5.f_4, &sVar5, &sVar0, -1, joaat("REMOVE_REASON_DEFAULT"), 1, 0);
	}
	func_405(iParam0, &sVar19, &sVar0, 1, joaat("ADD_REASON_DEFAULT"), 0);
	func_406(sVar19, 1);
}

bool func_203()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_204(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("WEAPON_UNARMED"));
}

bool func_205(int iParam0)
{
	if (!func_407(iParam0))
	{
		return false;
	}
	return func_408(iParam0);
}

int func_206(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

int func_207(Vector3 vParam0)
{
	int iVar0;

	iVar0 = func_409(vParam0, 0.0f, 0.0f, 0, 2);
	return func_409(vParam0, Global_1894052[iVar0 /*3*/].f_1, Global_1894052[iVar0 /*3*/].f_2, Global_1894052[iVar0 /*3*/], 4);
}

int func_208()
{
	return Global_40.f_4283;
}

bool func_209(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_210(int iParam0)
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

var func_211()
{
	return Global_40.f_8863.f_148;
}

int func_212(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
	{
		iVar1 = func_390(iParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == joaat("WEAPON"))
	{
		return func_410(iParam0, 0);
	}
	iVar2 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_411(bParam2), iParam0, false);
	return iVar2;
}

struct<2> /*16*/ func_213(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_1 = iParam0;
	return sVar0;
}

int func_214(int iParam0)
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

int func_215(int iParam0)
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

bool func_216(int iParam0)
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
		iVar0 = func_126(iParam0);
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

void func_217(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (!func_15(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_194(iParam0) && !func_216(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_129(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_194(iParam0))
	{
		iParam2 = -1;
	}
	if (func_126(iParam0) == 3 || (func_126(iParam0) == 1 && STATS::STATSTRACKER_IS_INITIALIZED(func_129(iParam0))))
	{
		func_412(func_39(iParam0), func_129(iParam0), iParam2);
		if ((!func_15(Global_1572864.f_8) && !func_33(0, 1, 0)) && !func_24(Global_1935630, (1 << 15)))
		{
			iVar0 = func_413(iParam0);
			if (iVar0 != -1)
			{
				func_88(0);
			}
			else if (func_39(iParam0) == 8)
			{
				iVar0 = func_414();
				if (iVar0 != -1)
				{
					func_88(0);
				}
			}
		}
	}
	func_415(iParam0, 0);
	if (func_38(0) == iParam0)
	{
		func_416(1);
		func_417(0);
		func_418(1);
	}
	func_419(iParam0, 1);
	func_420(iParam0);
}

int func_218(int iParam0)
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

void func_219(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_105(iParam0);
	*uParam1 = func_206(iParam0);
	*uParam2 = func_421(iParam0);
}

int func_220(int iParam0)
{
	if (!func_15(iParam0))
	{
		return -1;
	}
	return func_126(iParam0);
}

int func_221()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (COLLECTION::_COLLECTABLE_GET_NUM_FOUND(func_422(iVar1)) > 0)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_222(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 499813453:
			iVar0 = joaat("TREASURE_HUNT_LOOT_04");
			break;
		case 666607663:
			iVar0 = joaat("TREASURE_HUNT_LOOT_08");
			break;
		case -220219788:
			iVar0 = joaat("TREASURE_HUNT_LOOT_12");
			break;
		case 218622660:
			iVar0 = joaat("TREASURE_HUNT_LOOT_15");
			break;
		case 390004462:
			iVar0 = joaat("TREASURE_HUNT_LOOT_19");
			break;
		case 6410548:
			iVar0 = joaat("TREASURE_HUNT_LOOT_24");
			break;
		default:
			return false;
	}
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iVar0) > 0;
}

int func_223()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
}

void func_224(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_6, bParam0);
}

void func_225(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_7, bParam0);
}

void func_226(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_8, bParam0);
}

void func_227(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_11, bParam0);
}

void func_228(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_20, sParam2);
}

char* func_229(int iParam0, bool bParam1)
{
	if (Global_40.f_39 == joaat("PLAYER_THREE") || bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_JOHN_GENERAL";
			case 1:
				return "PLAYER_JOHN_HEALTH";
			case 2:
				return "PLAYER_JOHN_STAMINA";
			case 3:
				return "PLAYER_JOHN_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "PLAYER_ARTHUR_GENERAL";
			case 1:
				return "PLAYER_ARTHUR_HEALTH";
			case 2:
				return "PLAYER_ARTHUR_STAMINA";
			case 3:
				return "PLAYER_ARTHUR_DEADEYE";
			case 4:
				return "HORSE_GENERAL";
			default:
				break;
		}
	}
	return "";
}

void func_230(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_423();
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_4, sParam1);
}

char* func_231(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_232(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_2, sParam0);
}

void func_233(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_1, sParam0);
}

char* func_234()
{
	if (Global_40.f_7748.f_1 >= 7)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (Global_40.f_7748.f_1 >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

void func_235(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, float fParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_8, fParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_9, fParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_10, fParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_147.f_21, iParam0, "player_attribute_item", Global_1954819.f_5.f_147.f_24[iParam0 /*23*/]);
}

char* func_236()
{
	if (Global_40.f_7731[0 /*5*/] >= 8 || Global_40.f_7731[2 /*5*/] >= 8)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_LONG";
	}
	else if (Global_40.f_7731[0 /*5*/] >= 4 || Global_40.f_7731[2 /*5*/] >= 4)
	{
		return "PMPLAYER_GENERAL_OVERVIEW_HAIR_MEDIUM";
	}
	return "PMPLAYER_GENERAL_OVERVIEW_HAIR_SHORT";
}

float func_237()
{
	int iVar0;
	float fVar1;

	iVar0 = func_424();
	fVar1 = 1.0f;
	if (iVar0 < 80)
	{
		return fVar1;
	}
	if (iVar0 >= 280)
	{
		fVar1 -= 0.5f;
	}
	else if (iVar0 >= 200)
	{
		fVar1 -= 0.25f;
	}
	else
	{
		fVar1 -= 0.1f;
	}
	return fVar1;
}

char* func_238()
{
	if (func_1())
	{
		return "PLAYER_JOHN_WEIGHT";
	}
	return "PLAYER_ARTHUR_WEIGHT";
}

void func_239(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	switch (iParam0)
	{
		case 0:
			fVar0 = (MISC::ABSF(Global_40.f_11095.f_45) * 100.0f);
			fVar1 = (MISC::ABSF(Global_40.f_11095.f_62) * 100.0f);
			if (Global_40.f_11095.f_45 == 0.0f)
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Stamina");
				func_235(1, MISC::VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
			}
			else if (Global_40.f_11095.f_45 > 0.0f)
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar0), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_UP", 0);
				func_235(1, MISC::VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar1), 1, 0, 1, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
				func_250(1, "RPG_ARROW_DOWN", 0);
			}
			else
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", fVar0), 1, 0, 1, 0, 0.0f, 0.0f, 0.0f, "RPG_Stamina");
				func_250(0, "RPG_ARROW_DOWN", 0);
				func_235(1, MISC::VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_MINUS_VALUE", fVar1), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
				func_250(1, "RPG_ARROW_UP", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			fVar2 = func_70();
			if (fVar2 < 0.0f)
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100.0f * fVar2)))), 1, 0, 1, 0, 0.0f, 0.0f, 0.0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0.0f)
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100.0f * fVar2)))), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, func_425(iParam0));
			}
			else
			{
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((100.0f * fVar2)))), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, func_425(iParam0));
				func_250(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_240()
{
	if (func_1())
	{
		return "PLAYER_JOHN_TEMPERATURE";
	}
	return "PLAYER_ARTHUR_TEMPERATURE";
}

char* func_241()
{
	if (func_1())
	{
		return "pausemenu_player_update";
	}
	return "pausemenu_player";
}

void func_242()
{
	if (func_68() || func_69())
	{
		func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
	}
}

char* func_243()
{
	if (func_1())
	{
		return "PLAYER_JOHN_TOXICITY";
	}
	return "PLAYER_ARTHUR_TOXICITY";
}

char* func_244()
{
	if (func_1())
	{
		return "pausemenu_player_update";
	}
	return "pausemenu_player";
}

void func_245()
{
	if (Global_40.f_11095.f_43)
	{
		func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
		func_250(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
	}
}

char* func_246()
{
	if (func_1())
	{
		return "PLAYER_JOHN_WELLBEING";
	}
	return "PLAYER_ARTHUR_WELLBEING";
}

void func_247(bool bParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;

	fVar0 = 0.0f;
	sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
	if (!func_1())
	{
		if (Global_40.f_11095.f_67 >= 7)
		{
			fVar0 = MISC::ABSF((100.0f * func_73()));
			sVar1 = "PMPLAYER_CORE_PC_PLUS_VALUE";
			bVar2 = true;
		}
	}
	if (bParam0)
	{
		func_235(iVar3, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0.0f, 0.0f, 0.0f, "RPG_Health");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam1)
	{
		func_235(iVar3, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0.0f, 0.0f, 0.0f, "RPG_Stamina");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
		iVar3++;
	}
	if (bParam2)
	{
		func_235(iVar3, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, sVar1, BUILTIN::ROUND(fVar0)), 1, 0, bVar2, 0, 0.0f, 0.0f, 0.0f, "RPG_Dead_Eye");
		if (bVar2)
		{
			func_250(iVar3, "RPG_ARROW_DOWN", 0);
		}
	}
}

void func_248(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!func_193(iParam0, 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230(sParam3, sParam4);
		func_232(sParam2);
		func_233(sParam1);
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_249(int iParam0)
{
	if (!func_193(joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"), 1, 0))
	{
		func_230("UNDISCOVERED", 0);
		func_232("PMPLAYER_PERK_UNDISCOVERED_TALISMAN_DESC");
		func_233("PMPLAYER_PERK_UNDISCOVERED_TALISMAN");
	}
	else
	{
		func_230("PERK_LEGEND_OUTFIT", "pausemenu_player_update");
		func_232("CLOTHING_LEGENDARY_EAST_OUTFIT_DESC");
		func_233("CLOTHING_LEGENDARY_EAST_OUTFIT");
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, func_426(iParam0));
				func_235(1, MISC::VAR_STRING(2, "PMPLAYER_XP_BONUS"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0.0f, 0.0f, 0.0f, func_426(iParam0));
				break;
			default:
				func_235(0, MISC::VAR_STRING(2, "PMPLAYER_WEAPON_CONDITION"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(1, MISC::VAR_STRING(2, "PMPLAYER_LOOT_BONUS"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(2, MISC::VAR_STRING(2, "PMPLAYER_MELEE_RESIST"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(3, MISC::VAR_STRING(2, "PMPLAYER_HORSE_DAMAGE_RESIST"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", 10), 1, 0, 0, 0, 0, 0, 0, 0);
				func_235(4, MISC::VAR_STRING(2, "PMPLAYER_EAGLE_EYE_DURATION"), MISC::VAR_STRING(2, "PMPLAYER_TIME_VALUE_SECONDS", 5), 1, 0, 0, 0, 0, 0, 0, 0);
				break;
		}
	}
	func_163("PMPLAYER_PERK_TOOLTIP");
}

void func_250(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_147.f_24[iParam0 /*23*/].f_12, true);
}

void func_251(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	char* sVar5;

	fVar0 = Global_40.f_11095.f_11[iParam0];
	iVar1 = func_279(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(func_427(iVar1 + 1));
	if (iVar1 == 7)
	{
		fVar2 = BUILTIN::TO_FLOAT(1100);
	}
	func_235(0, MISC::VAR_STRING(2, sParam1), MISC::VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
	func_235(1, MISC::VAR_STRING(2, sParam2), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar1 + 1, 7 + 1), 0, 0, 0, 0, 0, 0, 0, 0);
	switch (iParam0)
	{
		case 0:
			iVar3 = func_212(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::VAR_STRING(2, "PMPLAYER_HEALTH_PROGRESSION_STAT_BONUS"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 1:
			iVar3 = func_212(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::VAR_STRING(2, "PMPLAYER_STAMINA_PROGRESSION_STAT_BONUS"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
		case 2:
			iVar3 = func_212(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
			if (iVar3 > 0)
			{
				func_235(2, MISC::VAR_STRING(2, "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_BONUS"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, 2), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			break;
	}
	iVar4 = (iVar1 + iVar3) + 1;
	sVar5 = func_429(func_428(iVar4, 0));
	func_228(1, sVar5, sParam3);
}

int func_252(int iParam0)
{
	iParam0 = func_280(iParam0);
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

int func_253(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_430());
	return iVar0;
}

int func_254(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_431());
	return iVar0;
}

int func_255(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_430());
	return iVar0;
}

int func_256(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_431());
	return iVar0;
}

int func_257(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

int func_258()
{
	return Global_40.f_1095.f_3054;
}

int func_259(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0;
	Vector3 vVar22;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;

	*iParam0 = 0;
	*iParam1 = 0;
	sVar0.f_1 = 20;
	iVar31 = func_432(856287005);
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		iVar30 = func_433(856287005, iVar32);
		if (iVar30 != 0)
		{
			if (func_170(iVar30, &iVar29))
			{
				if (func_287(iVar29, 0))
				{
					if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iVar29, &sVar0) && sVar0.f_0 > 0)
					{
						iVar33 = 0;
						while (iVar33 < sVar0.f_0)
						{
							if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar0.f_1[iVar33], &vVar22))
							{
								if (vVar22.y == 2086291460)
								{
									*iParam1 += vVar22.z;
								}
								else if (vVar22.y == -1620444701)
								{
									*iParam0 += vVar22.z;
								}
							}
							iVar33++;
						}
					}
				}
			}
		}
		iVar32++;
	}
	return 1;
}

bool func_260()
{
	return Global_40.f_1095.f_3140.f_1;
}

int func_261(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_434());
	return iVar0;
}

int func_262(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_435());
	return iVar0;
}

int func_263(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = func_436(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_264(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

void func_265(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_5.f_147.f_12, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954819.f_5.f_147.f_13, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_5.f_147.f_14, iParam2);
}

void func_266(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_5.f_147.f_15, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1954819.f_5.f_147.f_16, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_5.f_147.f_17, iParam2);
}

int func_267(int iParam0)
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

int func_268(int iParam0)
{
	if (iParam0 == joaat("A_C_HORSE_MP_MANGY_BACKUP"))
	{
		return joaat("HORSE_CLASS_INVALID");
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_DONKEY_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULE_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return joaat("HORSE_CLASS_OTHER");
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("HORSE_CLASS_SUPERIOR");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("HORSE_CLASS_WAR");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("HORSE_CLASS_MULTI");
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return joaat("HORSE_CLASS_DRAFT");
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("HORSE_CLASS_RIDING");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("HORSE_CLASS_WORK");
		case joaat("A_C_HORSE_WINTER02_01"):
			return joaat("HORSE_CLASS_RACE");
		case joaat("A_C_HORSE_EAGLEFLIES"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_BILL"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_CHARLES"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_DUTCH"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_HOSEA"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_JAVIER"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_JOHN"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_KAREN"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_KIERAN"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_LENNY"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_MICAH"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_SADIE"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_SEAN"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_UNCLE"):
			return joaat("HORSE_CLASS_INVALID");
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
			return joaat("HORSE_CLASS_INVALID");
		default:
			break;
	}
	return joaat("HORSE_CLASS_INVALID");
}

char* func_269(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return "HORSE_CLASS_RIDING";
		case joaat("HORSE_CLASS_DRAFT"):
			return "HORSE_CLASS_DRAFT";
		case joaat("HORSE_CLASS_RACE"):
			return "HORSE_CLASS_RACE";
		case joaat("HORSE_CLASS_WAR"):
			return "HORSE_CLASS_WAR";
		case joaat("HORSE_CLASS_WORK"):
			return "HORSE_CLASS_WORK";
		case joaat("HORSE_CLASS_MULTI"):
			return func_437(iParam1);
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char[] func_270(int iParam0)
{
	char cVar0[64];

	strcpy_s(&cVar0, 64, func_438(iParam0));
	strcat_s(&cVar0, 64, "_BREED");
	return func_174(&cVar0);
}

int func_271(int iParam0)
{
	iParam0 = func_280(iParam0);
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

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "COAT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "COAT_TOB";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "COAT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "COAT_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "COAT_PALDAP";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "COAT_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "COAT_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "COAT_LEOPBLANKET";
		case joaat("BREED_APPALOOSA_FEWSPOTTED_PC"):
			return "COAT_FEWSPOTTED";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "COAT_BRLEOP";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "COAT_LEOP";
		case joaat("BREED_ARABIAN_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_ARABIAN_REDCHESTNUT_PC"):
			return "COAT_REDCH";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "COAT_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WARPEDBRINDLE_PC"):
			return "COAT_WARPEDBRINDLE";
		case joaat("BREED_ARABIAN_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "COAT_STRAWR";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "COAT_IRONGREYR";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "COAT_BLONDCH";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "COAT_MEALYCH";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "COAT_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "COAT_CHOCR";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "COAT_PIETOB";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "COAT_DAPDARKGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return "COAT_BUTTERMILKBUCKSKIN";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "COAT_CHPIN";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "COAT_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "COAT_AMBCHA";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "COAT_SILVERDAPPINT";
		case joaat("BREED_MORGAN_BAY"):
			return "COAT_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_MORGAN_LIVERCHESTNUT_PC"):
			return "COAT_LIVERCH";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "COAT_PAL";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "COAT_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "COAT_TIGSTRBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "COAT_BLUER";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "COAT_WHITER";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "COAT_REVDAPR";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "COAT_LGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "COAT_BLACKRAB";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "COAT_CH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "COAT_DAPBAY";
		case joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return "COAT_GOLDPALOMINO";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "COAT_FLAXR";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "COAT_BLBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "COAT_DAPGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "COAT_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "COAT_BLACKCH";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "COAT_REVDAPBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "COAT_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_DONKEY"):
			return "COAT_NONE";
		case joaat("BREED_MULE"):
			return "COAT_NONE";
		case joaat("BREED_MULE_PAINTED"):
			return "COAT_NONE";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "COAT_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "COAT_BLACKSNO";
		case joaat("BREED_ARABIAN_GREY"):
			return "COAT_GREY";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "COAT_LIVERCH";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "COAT_SABLECHAMP";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "COAT_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "COAT_MAHBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "COAT_RAVBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "COAT_CHEMGOLD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "COAT_SEALBR";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "COAT_BLANKET";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "COAT_BLUER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "COAT_BLACKRAB";
		case joaat("BREED_WINTER02_01"):
			return "COAT_SILVERBAY";
		case joaat("BREED_EAGLEFLIES"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_GANG_BILL"):
			return "COAT_BROWNR";
		case joaat("BREED_GANG_CHARLES"):
			return "COAT_GREYSNOWCAPSPOTTED";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "COAT_GREYROANSABINO";
		case joaat("BREED_GANG_DUTCH"):
			return "COAT_ALBINO";
		case joaat("BREED_GANG_HOSEA"):
			return "COAT_SILVER";
		case joaat("BREED_GANG_JAVIER"):
			return "COAT_GREYOVERO";
		case joaat("BREED_GANG_JOHN"):
			return "COAT_SILVERDARKBAY";
		case joaat("BREED_GANG_KAREN"):
			return "COAT_SMOKYBLACK";
		case joaat("BREED_GANG_KIERAN"):
			return "COAT_FLAXR";
		case joaat("BREED_GANG_LENNY"):
			return "COAT_LIGHTPALOMINO";
		case joaat("BREED_GANG_MICAH"):
			return "COAT_BLACK";
		case joaat("BREED_GANG_SADIE"):
			return "COAT_GOLDDAP";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "COAT_DARKBAYROAN";
		case joaat("BREED_GANG_SEAN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "COAT_BRLEOP";
		case joaat("BREED_GANG_UNCLE"):
			return "COAT_SABINO";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "COAT_FEWSPOTBUCKSKIN";
		case joaat("BREED_MANGY_BACKUP"):
			return "COAT_NONE";
		default:
			break;
	}
	return "";
}

float func_274(int iParam0)
{
	iParam0 = func_280(iParam0);
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

void func_275(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	char* sVar1;

	fVar0 = (func_439(iParam1, iParam2) * 100.0f);
	sVar1 = func_139(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0.0f)
	{
		func_235(iParam0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0.0f)
	{
		func_235(iParam0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_235(iParam0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_250(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_276()
{
	int iVar0;
	struct<2> /*16*/ sVar1;
	struct<6> /*48*/ sVar23;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	int iVar34;
	int iVar35;
	char* sVar36;

	if (!func_170(joaat("SLOTID_HORSE_SADDLE"), &iVar0))
	{
		return;
	}
	sVar1.f_1 = 20;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iVar0, &sVar1))
	{
		return;
	}
	iVar34 = 0;
	while (iVar34 < sVar1.f_0)
	{
		if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar1.f_1[iVar34], &sVar23))
		{
		}
		else
		{
			switch (sVar23.f_1)
			{
				case -225223329:
					fVar30 = sVar23.f_5;
					break;
				case 1167068375:
					fVar31 = sVar23.f_5;
					break;
				case -845587290:
					fVar32 = sVar23.f_5;
					break;
				case 1605773431:
					fVar33 = sVar23.f_5;
					break;
			}
		}
		iVar34++;
	}
	iVar35 = 0;
	sVar36 = "";
	if (fVar30 < 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar30)));
	}
	else if (fVar30 > 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar30)));
	}
	if (fVar30 != 0.0f)
	{
		func_235(iVar35, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		iVar35++;
	}
	if (fVar31 < 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar31)));
	}
	else if (fVar31 > 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar31)));
	}
	if (fVar31 != 0.0f)
	{
		func_235(iVar35, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar32 < 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar32)));
	}
	else if (fVar32 > 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar32)));
	}
	if (fVar32 != 0.0f)
	{
		func_235(iVar35, MISC::VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
	if (fVar33 > 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar33)));
	}
	else if (fVar33 < 0.0f)
	{
		sVar36 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar33)));
	}
	if (fVar33 != 0.0f)
	{
		func_235(iVar35, MISC::VAR_STRING(2, "PMPLAYER_REGEN_RATE"), sVar36, 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		iVar35++;
	}
}

void func_277()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	struct<2> /*16*/ sVar4;
	struct<6> /*48*/ sVar26;
	int iVar33;

	if (func_170(joaat("SLOTID_HORSE_STIRRUP"), &iVar0))
	{
		sVar4.f_1 = 20;
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(iVar0, &sVar4);
		iVar33 = 0;
		while (iVar33 < sVar4.f_0)
		{
			ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(sVar4.f_1[iVar33], &sVar26);
			switch (sVar26.f_1)
			{
				case 2086291460:
					iVar1 += BUILTIN::FLOOR(((float)sVar26.f_2 * 0.01f));
					break;
				case -1620444701:
					iVar2 += BUILTIN::FLOOR(((float)sVar26.f_2 * 0.01f));
					break;
				case -845587290:
					fVar3 += sVar26.f_5;
					break;
			}
			iVar33++;
		}
		func_235(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
		func_235(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		if (fVar3 <= 0.0f)
		{
			func_235(2, MISC::VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar3)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
		else
		{
			func_235(2, MISC::VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar3))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		}
	}
}

void func_278(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	char cVar0[32];
	int iVar4;

	IntToString(&cVar0, iParam1, 32);
	iVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_158, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar4, "labelText", sParam2);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar4, "isComplete", bParam3);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_160, iParam1, "story_checklist_item", iVar4);
}

int func_279(float fParam0)
{
	if (fParam0 <= (float)-1)
	{
		return -1;
	}
	if (fParam0 < (float)50)
	{
		return 0;
	}
	if (fParam0 < (float)100)
	{
		return 1;
	}
	if (fParam0 < (float)200)
	{
		return 2;
	}
	if (fParam0 < (float)350)
	{
		return 3;
	}
	if (fParam0 < (float)550)
	{
		return 4;
	}
	if (fParam0 < (float)800)
	{
		return 5;
	}
	if (fParam0 < (float)1100)
	{
		return 6;
	}
	return 7;
}

int func_280(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_281(int iParam0)
{
	iParam0 = func_280(iParam0);
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

bool func_282(int iParam0)
{
	iParam0 = func_280(iParam0);
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

float func_283(int iParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0.0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0.0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0.0f;
	}
	fVar0 = PED::_GET_PED_MOTIVATION(iParam0, 3, 0);
	return fVar0;
}

bool func_284(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 != 0)
	{
		iVar5 = func_334(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_432(iParam0);
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

struct<4> /*32*/ func_285()
{
	struct<4> /*32*/ sVar0;

	sVar0 = { func_440(0) /*4*/ };
	return func_401(856287005, sVar0, joaat("SLOTID_CARRIED_HORSE_EQUIPMENT"), 0);
}

int func_286(struct<4> /*32*/ sParam0, int iParam4, int iParam5)
{
	struct<10> /*80*/ sVar0;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (func_404(sParam0, iParam4, &sVar0, iParam5))
	{
		return sVar0.f_4;
	}
	return 0;
}

bool func_287(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(iParam0, iParam1);
}

int func_288(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

int func_289()
{
	if (Global_1572887.f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_290(int iParam0, int iParam1, int iParam2)
{
	return (iParam2 & 31) | BUILTIN::SHIFT_LEFT((iParam0 & 1023), 5) | BUILTIN::SHIFT_LEFT((iParam1 & 16383), 15);
}

int func_291(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (!func_441(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_289())
	{
		return -1;
	}
	iVar0 = func_290(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_442(iVar1, 0);
	func_443(iVar1, 0);
	func_444(iVar1, 0);
	func_445(iVar1, 0);
	func_446(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_447(iVar1, iParam4);
	}
	return iVar1;
}

void func_292(int iParam0)
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

void func_293(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;

	func_198(iParam0, 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
	iVar34 = func_448(iParam0, &uVar18);
	func_449(iParam0, &uVar18, &iVar34, 1);
	if (func_450() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR"))
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	func_451(iParam0, &(Global_26796.f_627.f_121.f_20));
	func_452(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_198(uVar18[iVar36], 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
		switch (func_334(uVar18[iVar36]))
		{
			case joaat("CI_CATEGORY_WARDROBE_HAT"):
				func_451(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case joaat("CI_CATEGORY_WARDROBE_MASK"):
				func_451(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
				func_451(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
				func_451(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case joaat("CI_CATEGORY_WARDROBE_BADGE"):
				func_451(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		func_452(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = func_454(func_453(uVar18[iVar36]), 1);
		iVar36++;
	}
	func_455(&(Global_1946054.f_1616));
	func_456(&(Global_1946054.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_457(8, 0) /*3*/ };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_457(9, 0) /*3*/ };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_457(0, 0) /*3*/ };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_457(2, 0) /*3*/ };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_457(3, 0) /*3*/ };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_457(1, 0) /*3*/ };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_457(5, 0) /*3*/ };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_457(6, 0) /*3*/ };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_457(7, 0) /*3*/ };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == func_458(iVar0[iVar36], iVar35))
			{
				func_452(func_459(iVar35), 1, 1);
				func_460(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!func_461(&(Global_1946054.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							func_462(&(Global_1946054.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946054.f_1497.f_1[iVar37 /*3*/] = { Global_1946054.f_1616.f_1[iVar37 /*3*/] /*3*/ };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946054.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == func_463(iParam0))
	{
		if (!func_464(8))
		{
			if (func_450() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR"))
			{
				if (bVar17)
				{
					func_456(&(Global_1946054.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
					Global_1946054.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_465(&(Global_1946054.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_466(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_463(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					func_456(&(Global_1946054.f_1616), joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), &uVar39, 0, 1, 0, joaat("MPC_PLAYER_TYPE_SP_MARSTON"));
					Global_1946054.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					func_465(&(Global_1946054.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						func_466(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == func_463(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == func_463(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					func_467(Global_40.f_7729, (1 << 12));
					func_468(Global_1905941, (1 << 12));
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					func_469(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	func_456(&(Global_1946054.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
	func_456(&(Global_1946054.f_1616), 2020890174, &uVar39, 1, 0, 0, joaat("MPC_PLAYER_TYPE_SP_ARTHUR"));
	Global_1946054.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] /*3*/ };
	Global_1946054.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] /*3*/ };
	Global_26796.f_627 = Global_1946054.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946054.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946054.f_1616.f_1[iVar36 /*3*/] /*3*/ };
		iVar36++;
	}
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	Vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;

	func_198(iParam0, 1, 1, joaat("REMOVE_REASON_DEFAULT"), 1);
	if (func_470(iParam0))
	{
		func_452(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_454(func_453(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_471(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946054.f_57[iVar1 /*11*/];
		Global_1946054.f_1616.f_1[iVar1 /*3*/] = { vVar4 /*3*/ };
		Global_1946054.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946054.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946054.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (func_450() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR"))
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_456(&(Global_1946054.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_456(&(Global_1946054.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946054.f_1616.f_1[8 /*3*/] = { func_457(8, 0) /*3*/ };
	Global_1946054.f_1616.f_1[9 /*3*/] = { func_457(9, 0) /*3*/ };
	Global_1946054.f_1616.f_1[0 /*3*/] = { func_457(0, 0) /*3*/ };
	Global_1946054.f_1616.f_1[2 /*3*/] = { func_457(2, 0) /*3*/ };
	Global_1946054.f_1616.f_1[3 /*3*/] = { func_457(3, 0) /*3*/ };
	Global_1946054.f_1616.f_1[1 /*3*/] = { func_457(1, 0) /*3*/ };
	Global_1946054.f_1616.f_1[5 /*3*/] = { func_457(5, 0) /*3*/ };
	Global_1946054.f_1616.f_1[6 /*3*/] = { func_457(6, 0) /*3*/ };
	Global_1946054.f_1616.f_1[7 /*3*/] = { func_457(7, 0) /*3*/ };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_458(iVar8, iVar0))
				{
					func_462(&(Global_1946054.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_458(iVar8, iVar0))
		{
			func_462(&(Global_1946054.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946054.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946054.f_1497.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946054.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946054.f_1497.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946054.f_1616.f_1[iVar8 /*3*/] /*3*/ };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946054.f_1378.f_1[iVar1 /*3*/] = { Global_1946054.f_1616.f_1[iVar1 /*3*/] /*3*/ };
		iVar1++;
	}
}

int func_295(int iParam0, struct<4> /*32*/ sParam1)
{
	int iVar0;
	var uVar1;
	struct<2> /*16*/ sVar3;
	var uVar7;
	int iVar11;
	struct<5> /*40*/ sVar12;

	if (iParam0 == 0)
	{
		return 0;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	sVar12 = { sParam1 /*4*/ };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &sVar3))
		{
			if (func_287(sVar3.f_0, 0))
			{
				sVar12.f_4 = sVar3.f_1;
				if (func_472(sVar3.f_0, sParam1, sVar12.f_4, 0) > 0)
				{
				}
				else
				{
					func_473(&uVar7);
					if (func_402(sVar3.f_0, &uVar7, &sVar12, -1, joaat("REMOVE_REASON_DEFAULT"), 0, 0))
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 1;
}

struct<6> /*48*/ func_296()
{
	struct<6> /*48*/ sVar0;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;

	if (func_170(joaat("SLOTID_HORSE_BEDROLL"), &uVar6))
	{
		sVar0.f_4 = uVar6;
	}
	if (func_170(joaat("SLOTID_HORSE_BLANKET"), &uVar7))
	{
		sVar0.f_0 = uVar7;
	}
	if (func_170(joaat("SLOTID_HORSE_HORN"), &uVar8))
	{
		sVar0.f_2 = uVar8;
	}
	if (func_170(joaat("SLOTID_HORSE_SADDLEBAG"), &uVar9))
	{
		sVar0.f_5 = uVar9;
	}
	if (func_170(joaat("SLOTID_HORSE_STIRRUP"), &uVar10))
	{
		sVar0.f_3 = uVar10;
	}
	if (func_170(joaat("SLOTID_HORSE_SADDLE"), &uVar11))
	{
		sVar0.f_1 = uVar11;
	}
	return sVar0;
}

int func_297(var uParam0)
{
	return uParam0->f_1;
}

void func_298(var uParam0)
{
	func_474(uParam0);
	func_476(uParam0, func_475(joaat("CI_CATEGORY_HORSE_BLANKET")));
	func_477(uParam0, func_475(joaat("CI_CATEGORY_HORSE_SADDLE")));
	func_478(uParam0, func_475(joaat("CI_CATEGORY_HORSE_HORN")));
	func_479(uParam0, func_475(joaat("CI_CATEGORY_HORSE_STIRRUP")));
	func_480(uParam0, func_475(joaat("CI_CATEGORY_HORSE_BEDROLL")));
	func_481(uParam0, func_475(joaat("CI_CATEGORY_HORSE_SADDLEBAG")));
}

void func_299(struct<6> /*48*/ sParam0)
{
	if (!func_482(sParam0.f_4, 1))
	{
	}
	if (!func_482(sParam0.f_0, 1))
	{
	}
	if (!func_482(sParam0.f_2, 1))
	{
	}
	if (!func_482(sParam0.f_5, 1))
	{
	}
	if (!func_482(sParam0.f_3, 1))
	{
	}
	if (!func_482(sParam0.f_1, 1))
	{
	}
}

int func_300(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;

	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_35())
	{
		if (func_483())
		{
			bVar0 = false;
			if (!func_130(Global_1835011[15 /*74*/].f_1, 1) && !func_205(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_484();
				*iParam1 = func_485();
				*iParam2 = func_486();
				return 1;
			}
			else
			{
				*iParam0 = func_487();
				*iParam1 = func_488();
				*iParam2 = func_489();
				return 1;
			}
		}
		else if (func_1())
		{
			if (!func_130(Global_1835011[60 /*74*/].f_1, 1))
			{
				*iParam0 = func_490();
				*iParam1 = func_491();
				*iParam2 = func_492();
				return 1;
			}
			else
			{
				*iParam0 = func_493();
				*iParam1 = func_494();
				*iParam2 = func_495();
				return 1;
			}
		}
	}
	else if (func_483())
	{
		*iParam0 = func_496();
		*iParam1 = func_497();
		*iParam2 = func_498();
		return 1;
	}
	else if (func_1())
	{
		*iParam0 = func_499();
		*iParam1 = func_500();
		*iParam2 = func_501();
		return 1;
	}
	return 0;
}

int func_301(int iParam0)
{
	iParam0 = func_280(iParam0);
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

void func_302(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

void func_303(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

void func_304(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
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

void func_305(int iParam0, int iParam1)
{
	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0 /*436*/].f_434 = iParam1;
}

bool func_306(int iParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;

	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1 = { func_440(0) /*4*/ };
	if (func_503(&sVar1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_307(int iParam0)
{
	struct<10> /*80*/ sVar0;
	struct<5> /*40*/ sVar29;

	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_504(iParam0, &sVar0))
	{
		return 0;
	}
	sVar29 = { sVar0.f_5 /*4*/ };
	sVar29.f_4 = sVar0.f_9;
	if (!func_402(sVar0.f_4, &sVar0, &sVar29, -1, joaat("REMOVE_REASON_DEFAULT"), 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_308(int iParam0)
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
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARDBLANKET");
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
			return joaat("HORSE_BREED_APPALOOSA_FEWSPOTTED");
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_BROWNLEOPARD");
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return joaat("HORSE_BREED_APPALOOSA_LEOPARD");
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return joaat("HORSE_BREED_ARABIAN_BLACK");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT");
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
			return joaat("HORSE_BREED_ARABIAN_REDCHESTNUT_PC");
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return joaat("HORSE_BREED_ARABIAN_ROSEGREYBAY");
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return joaat("HORSE_BREED_ARABIAN_WARPEDBRINDLE");
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return joaat("HORSE_BREED_ARABIAN_WHITE");
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return joaat("HORSE_BREED_ARDENNES_BAYROAN");
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return joaat("HORSE_BREED_ARDENNES_STRAWBERRYROAN");
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return joaat("HORSE_BREED_ARDENNES_IRONGREYROAN");
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_BLONDCHESTNUT");
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return joaat("HORSE_BREED_BELGIAN_MEALYCHESTNUT");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_SEALBROWN");
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return joaat("HORSE_BREED_DUTCHWARMBLOOD_CHOCOLATEROAN");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BLACK");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_CHESTNUTPINTO");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_GREY");
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return joaat("HORSE_BREED_KENTUCKYSADDLE_SILVERBAY");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO");
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return joaat("HORSE_BREED_MORGAN_BAY");
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return joaat("HORSE_BREED_MORGAN_BAYROAN");
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return joaat("HORSE_BREED_MORGAN_FLAXENCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
			return joaat("HORSE_BREED_MORGAN_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return joaat("HORSE_BREED_MORGAN_PALOMINO");
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return joaat("HORSE_BREED_MUSTANG_GRULLODUN");
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return joaat("HORSE_BREED_MUSTANG_WILDBAY");
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return joaat("HORSE_BREED_MUSTANG_TIGERSTRIPEDBAY");
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return joaat("HORSE_BREED_NOKOTA_BLUEROAN");
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return joaat("HORSE_BREED_NOKOTA_WHITEROAN");
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return joaat("HORSE_BREED_NOKOTA_REVERSEDAPPLEROAN");
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return joaat("HORSE_BREED_SHIRE_DARKBAY");
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return joaat("HORSE_BREED_SHIRE_LIGHTGREY");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_SORREL");
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return joaat("HORSE_BREED_SUFFOLKPUNCH_REDCHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_BLACKRABICANO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_CHESTNUT");
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_DAPPLEBAY");
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_GOLDPALOMINO");
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_REDROAN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_FLAXENROAN");
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return joaat("HORSE_BREED_THOROUGHBRED_BLOODBAY");
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return joaat("HORSE_BREED_THOROUGHBRED_DAPPLEGREY");
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return joaat("HORSE_BREED_THOROUGHBRED_BRINDLE");
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return joaat("HORSE_BREED_THOROUGHBRED_REVERSEDAPPLEBLACK");
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return joaat("HORSE_BREED_TURKOMAN_DARKBAY");
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return joaat("HORSE_BREED_TURKOMAN_GOLD");
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return joaat("HORSE_BREED_TURKOMAN_SILVER");
		case joaat("A_C_DONKEY_01"):
			return joaat("HORSE_DONKEY");
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return joaat("HORSE_BREED_APPALOOSA_BLACKSNOWFLAKE");
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return joaat("HORSE_BREED_ARABIAN_GREY");
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return joaat("HORSE_BREED_HUNGARIANHALFBRED_LIVERCHESTNUT");
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return joaat("HORSE_BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE");
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return joaat("HORSE_BREED_MUSTANG_GOLDENDUN");
		case joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY"):
			return joaat("HORSE_BREED_TENNESSEEWALKER_MAHOGANYBAY");
		case joaat("A_C_HORSE_SHIRE_RAVENBLACK"):
			return joaat("HORSE_BREED_SHIRE_RAVENBLACK");
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return -41062704;
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return joaat("HORSE_BREED_JOHN_ENDLESSSUMMER");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_01");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_02");
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return joaat("HORSE_BREED_MURFREEBROOD_MANGE_03");
		default:
			break;
	}
	return 0;
}

int func_309(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> /*40*/ sVar1;
	var uVar6;

	if (!func_287(iParam1, 0))
	{
		return 0;
	}
	if (!func_505(iParam1))
	{
		return 0;
	}
	if (func_306(iParam0))
	{
		return 0;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	sVar1 = { func_440(0) /*4*/ };
	sVar1.f_4 = iVar0;
	if (!func_405(iParam1, &uVar6, &sVar1, 1, joaat("ADD_REASON_DEFAULT"), 0))
	{
		return 0;
	}
	return 1;
}

bool func_310(int iParam0, struct<4> /*32*/ sParam1, bool bParam5)
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
			if (func_287(sVar3.f_0, 0))
			{
				sVar12.f_4 = sVar3.f_1;
				if (func_472(sVar3.f_0, sParam1, sVar12.f_4, 0) > 0)
				{
				}
				else
				{
					func_473(&sVar7);
					if (func_405(sVar3.f_0, &sVar7, &sVar12, 1, joaat("ADD_REASON_DEFAULT"), 1))
					{
						if (bParam5)
						{
							func_406(sVar7, 1);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_311(int iParam0)
{
	int iVar0;

	if (!func_204(iParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_VISIBLE(iVar0, true);
}

bool func_312(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_23() == -1)
	{
		if (func_506(iParam0) && func_507(iParam0))
		{
			func_508(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_313(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_509(iParam0, iParam1);
	sVar0 = { func_398(iParam0, 0, 1) /*5*/ };
	iVar5 = func_510(iParam0, &sVar0, 0, 0);
	iVar6 = func_511(iParam0, 0);
	if ((iVar5 > 1 && !func_54()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_331(iParam0, joaat("CI_TAG_ITEM_ANIMAL_PART")))
		{
			func_321(583, 1);
		}
		else
		{
			func_321(582, 0);
		}
	}
	if (func_512(iParam0, &sVar0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_314(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_513(iParam0, joaat("TAG_INTERACTION_TYPE")))
	{
		case joaat("CI_TAG_PAPER_W15_24_H10_16"):
		case joaat("CI_TAG_PAPER_W11_5_H20_5"):
		case -1239610997:
		case joaat("CI_TAG_PAPER_W18_9_H28_2_FOLDVERTICALX2"):
		case joaat("CI_TAG_PAPER_W32_2_H48_2_FOLDVERTICALHORIZONTAL"):
		case -873135685:
		case joaat("CI_TAG_PAPER_W12_7_H17_78"):
		case 10252101:
		case 24248412:
		case joaat("CI_TAG_PAPER_NEWSPAPER"):
		case 632545869:
		case joaat("CI_TAG_PAPER_W10_16_H15_24"):
		case joaat("CI_TAG_PAPER_D2_H32_ROLLED"):
		case joaat("CI_TAG_PAPER_W48_2_H32_2_FOLDVERTICALHORIZONTAL"):
		case joaat("CI_TAG_PAPER_W15_1_H24_FOLDVERTICAL"):
		case joaat("CI_TAG_PAPER_W17_78_H12_7"):
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = iParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_315(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_316(iParam0) != 0;
}

int func_316(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_514())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_515(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_317(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(iParam0);
}

int func_318(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < func_514())
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("CIGARETTE_CARDS"), 0);
		if (iParam0 == func_317(iVar0))
		{
			if (func_193(func_515(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_319(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	func_516(48);
	func_517(0, -1);
}

bool func_320(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_130(Global_1347702[iParam0 /*49*/].f_15, 1);
}

void func_321(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_520(iVar0, iVar1);
}

int func_322(int iParam0)
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_323(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

bool func_324(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	return func_130(Global_1835011[iParam0 /*74*/].f_1, 1);
}

bool func_325(int iParam0)
{
	if (func_23() != -1)
	{
		return false;
	}
	if (!func_101(iParam0))
	{
		return false;
	}
	return func_194(Global_1347702[iParam0 /*49*/].f_15);
}

int func_326()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_193(func_521(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
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
			if (func_35() && (func_325(38) || func_320(38)))
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
			if (func_35() && (func_325(39) || func_320(39)))
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
			iVar9 = func_522(iParam3, 19);
			iVar14 = joaat("EXOTIC_ITEMS");
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = joaat("COL_EX_INTRO");
			break;
		case 41:
			if (func_35() && (func_325(41) || func_320(41)))
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
			iVar14 = joaat("LEGENDARY_FISH");
			iVar11 = joaat("BLIP_RC_JEREMY_GILL");
			iVar13 = joaat("COL_LF_INTRO");
			break;
		case 49:
			if (func_35() && (func_325(49) || func_320(49)))
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
			iVar9 = func_522(iParam3, 20);
			iVar14 = joaat("TAXIDERMY");
			iVar11 = joaat("BLIP_RC_HOBBS");
			iVar13 = joaat("COL_TX_INTRO");
			break;
	}
	sVar2 = func_523(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_524(iParam0, iVar13, iVar14))
	{
	}
	if (func_525(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_526(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_527(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_528(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_529(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_328(int iParam0)
{
	Global_40.f_12004 |= iParam0;
}

void func_329(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
			if (func_35() && (func_325(38) || func_320(38)))
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
			if (func_35() && (func_325(39) || func_320(39)))
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
			iVar7 = joaat("EXOTIC_ITEMS");
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = joaat("COL_EX_INTRO");
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = joaat("LEGENDARY_FISH");
			iVar4 = joaat("BLIP_RC_JEREMY_GILL");
			iVar6 = joaat("COL_LF_INTRO");
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = joaat("ROCK_CARVINGS");
			if (func_35() && (func_325(49) || func_320(49)))
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
		if (func_35() && (func_325(38) || func_320(38)))
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
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_532(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, func_531(func_323(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("DINO_BONES"))
	{
		if (func_35() && (func_325(39) || func_320(39)))
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
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == joaat("ROCK_CARVINGS"))
	{
		if (func_35() && (func_325(49) || func_320(49)))
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
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_530(MISC::VAR_STRING(2, sVar0), MISC::VAR_STRING(2, sVar1), iVar5, iVar4, joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar2), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_330(int iParam0)
{
	Vector3 vVar0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_331(int iParam0, int iParam1)
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

bool func_332(int iParam0, int iParam1)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, iParam1);
}

void func_333(int iParam0)
{
	if (!func_407(iParam0))
	{
		return;
	}
	func_533(iParam0);
	func_534(iParam0);
}

int func_334(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

int func_335(int iParam0, bool bParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			iVar0 = joaat("WEAPON_THROWN_THROWING_KNIVES");
			break;
		case joaat("AMMO_DYNAMITE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_DYNAMITE");
			break;
		case joaat("AMMO_MOLOTOV"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			iVar0 = joaat("WEAPON_THROWN_MOLOTOV");
			break;
		case joaat("AMMO_TOMAHAWK"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT");
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			iVar0 = joaat("WEAPON_THROWN_TOMAHAWK");
			break;
		case joaat("AMMO_HATCHET"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET");
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER");
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HUNTER_RUSTED");
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			iVar0 = joaat("WEAPON_MELEE_ANCIENT_HATCHET");
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			iVar0 = joaat("WEAPON_MELEE_CLEAVER");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT");
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_DOUBLE_BIT_RUSTED");
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_HEWING");
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			iVar0 = joaat("WEAPON_MELEE_HATCHET_VIKING");
			break;
		default:
			break;
	}
	if (func_287(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_535(iVar0) || func_536(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_336(int iParam0, bool bParam1)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

bool func_337(bool bParam0)
{
	if (func_23() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_411(bParam0));
}

bool func_338(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_340(iParam0))
	{
		return false;
	}
	if (!func_337(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_339(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;

	iVar0 = func_336(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (func_23() == -1)
		{
			func_200(iVar0);
			if (iParam1 == joaat("ADD_REASON_PURCHASED"))
			{
				func_537(iVar0);
			}
		}
		if (!func_512(iParam0, &uVar1, 1, 0, 0))
		{
			func_508(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_538(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_201(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_201(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_201(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !func_1())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(iParam0))
				{
				}
				else if (!func_539(iVar0))
				{
					func_201(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_201(iVar0, WEAPON::GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = func_540(Global_35, 2, 0, 1);
				if ((((func_204(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_205(24)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_204(iVar7) && func_205(24))
				{
					if (!func_201(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_201(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_201(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == joaat("ADD_REASON_PURCHASED"))
	{
		func_321(480, 1);
	}
	return true;
}

bool func_340(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_341(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_340(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (func_204(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_193(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == joaat("ADD_REASON_LOOTED"))
	{
		iVar6 = BUILTIN::CEIL(((float)iVar6 * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_372(func_541(iParam0), func_288(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_23() == -1)
		{
			if (func_130(Global_1835011[14 /*74*/].f_1, 1))
			{
				func_321(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_337(0))
	{
		if (func_338(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_377(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_342(int iParam0)
{
	var uVar0;

	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !func_138()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_542(Global_35, iParam0, &uVar0))
		{
			func_358(PLAYER::PLAYER_PED_ID(), iParam0, 0, joaat("MP_COMPONENT_TYPE_END"), 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 += 0.1f;
			func_364();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 += 0.1f;
			func_364();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 += 0.1f;
			func_364();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 += 0.5f;
			func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 += 0.2f;
			func_360();
			break;
	}
}

void func_343(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_TRINKET_BEAVER_TOOTH"):
			Global_40.f_11095.f_60 += 0.1f;
			func_360();
			break;
		case joaat("PROVISION_TRINKET_BISON_HORN"):
			Global_40.f_11095.f_61 += 0.1f;
			func_361();
			break;
		case joaat("PROVISION_TRINKET_COUGAR_FANG"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_COYOTE_FANG"):
			Global_40.f_11095.f_56 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_FOX_CLAW"):
			Global_40.f_11095.f_58 += 0.5f;
			func_362();
			break;
		case joaat("PROVISION_TRINKET_IGUANA_SCALE"):
			Global_40.f_11095.f_63 += 0.1f;
			func_363();
			break;
		case joaat("PROVISION_TRINKET_LION_PAW"):
			Global_40.f_11095.f_57 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_MOOSE_ANTLER"):
			Global_40.f_11095.f_55 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_OWL_FEATHER"):
			Global_40.f_11095.f_49 += 0.15f;
			Global_40.f_11095.f_50 += 0.15f;
			Global_40.f_11095.f_51 += 0.15f;
			func_364();
			break;
		case joaat("PROVISION_TRINKET_HAWK_TALON"):
			Global_40.f_11095.f_64 += 0.3f;
			func_543();
			break;
		case joaat("PROVISION_TRINKET_SHARK_TOOTH"):
			Global_40.f_11095.f_68 += 0.1f;
			break;
		case joaat("PROVISION_TRINKET_TURTLE_SHELL"):
			Global_40.f_11095.f_69 += 0.1f;
			func_544();
			break;
		case joaat("PROVISION_TRINKET_CAT_EYE"):
			Global_40.f_11095.f_70 += 0.2f;
			break;
	}
}

void func_344(int iParam0)
{
	bool bVar0;

	bVar0 = func_331(iParam0, joaat("CI_TAG_ITEM_TALISMAN_INGREDIENT"));
	if (func_545() < 3)
	{
		if (bVar0)
		{
			if (func_547(func_546(iParam0), iParam0))
			{
				func_372(79, func_288(func_546(iParam0)), 1);
			}
			else
			{
				func_372(78, func_288(func_546(iParam0)), 1);
			}
		}
		else
		{
			func_372(80, func_288(func_548(iParam0)), 1);
		}
	}
}

bool func_345()
{
	if (((((func_549(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_549(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_549(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_549(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_549(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_549(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_346(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = func_550(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_387(iVar0, sParam4, iParam5);
	}
	iVar1 = joaat("ADD_REASON_DEFAULT");
	if (bParam6)
	{
		iVar1 = joaat("ADD_REASON_LOOTED");
	}
	func_388(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_347(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_327(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), 0, 0, 4, 0);
			func_329(51, 0, 0, 0, 0, -1, 0);
			func_551((1 << 13));
			break;
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_327(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), 0, 0, 1, 0);
			func_329(51, 0, 0, 0, 0, -1, 0);
			func_551((1 << 19));
			break;
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_327(39, 0, 0, 0, 0, 0, 1, 0);
			func_329(39, 0, 0, 0, 0, -1, 0);
			func_552(16);
			break;
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_327(41, 0, 0, 0, 0, 0, 1, 0);
			func_329(41, 0, 0, 0, 0, -1, 0);
			func_553(8);
			break;
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_327(49, 0, 0, 0, 0, 0, 1, 0);
			func_329(49, 0, 0, 0, 0, -1, 0);
			func_554(16);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_327(43, 0, 0, joaat("EXOTIC_STAGE_01"), func_555(1), 0, -1, 0);
			func_556(1);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_327(43, 0, 0, joaat("EXOTIC_STAGE_02"), func_555(2), 0, -1, 0);
			func_556(2);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_327(43, 0, 0, joaat("EXOTIC_STAGE_03"), func_555(4), 0, -1, 0);
			func_556(4);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_327(43, 0, 0, joaat("EXOTIC_STAGE_04"), func_555(8), 0, -1, 0);
			func_556(8);
			break;
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_327(43, 0, 0, joaat("EXOTIC_STAGE_05"), func_555(16), 0, -1, 0);
			func_556(16);
			break;
	}
}

void func_348(int iParam0)
{
	if (func_557() == 1)
	{
		if (func_320(39))
		{
			func_321(342, 0);
		}
		else
		{
			func_321(343, 0);
			func_552(1);
		}
	}
	if (func_557() >= 30)
	{
		func_321(344, 0);
	}
	func_327(39, 0, 0, 0, 0, 0, -1, 0);
	func_329(39, 0, 0, func_557(), 30, 1, 0);
}

void func_349(int iParam0)
{
	if (func_558() == 1)
	{
		if (func_320(49))
		{
			func_321(409, 0);
		}
		else
		{
			func_321(410, 0);
			func_554(1);
		}
	}
	if (func_558() >= 10)
	{
		func_321(411, 0);
	}
	func_327(49, 0, 0, 0, 0, 0, -1, 0);
	func_329(49, 0, 0, func_558(), 10, 1, 0);
}

void func_350(int iParam0)
{
	char[] cVar0[8];

	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_01"), 1);
			func_321(437, 0);
			func_321(440, 0);
			func_559(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &cVar0, 1, 0, 0);
			func_327(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), cVar0, 0, -1, 0);
			func_329(51, 0, 0, cVar0, func_522(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			func_551(1);
			func_560(joaat("WS_TAXIDERMY_NOTICES"), 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_02"), 1);
			func_559(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &cVar0, 1, 0, 0);
			func_327(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), cVar0, 0, -1, 0);
			func_329(51, 0, 0, cVar0, func_522(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			func_551(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_03"), 1);
			func_559(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &cVar0, 1, 0, 0);
			func_327(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), cVar0, 0, -1, 0);
			func_329(51, 0, 0, cVar0, func_522(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			func_551(64);
			Jump @494; // curOff = 309
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_04"), 1);
			func_559(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &cVar0, 1, 0, 0);
			func_327(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), cVar0, 0, -1, 0);
			func_329(51, 0, 0, cVar0, func_522(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			func_551((1 << 9));
			Jump @494; // curOff = 390
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("TAXIDERMY_ORDER_05"), 1);
			func_321(438, 0);
			func_559(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &cVar0, 1, 0, 0);
			func_327(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), cVar0, 0, -1, 0);
			func_329(51, 0, 0, cVar0, func_522(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			func_551((1 << 15));
			Jump @494; // curOff = 480
			func_321(439, 0);
		}

void func_351()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("SP_CHAL_EXPL_ROOT")) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("SP_CHAL_EXPL_ROOT"), joaat("ACW_EXPL_RANK_01_TREASURE"), 1);
	}
}

void func_352(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (func_23() == -1)
	{
		if (!func_320(43))
		{
			if (iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
			{
				func_321(348, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
			{
				func_321(350, 0);
			}
			else if (iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
			{
				func_321(352, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
			{
				func_321(400, 0);
			}
		}
		else if (func_331(iParam0, 412399755))
		{
			func_561(joaat("EXOTIC_STAGE_01"));
			if (func_562() == 0)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 1);
				if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_320(44))
		{
			if (iParam0 == joaat("PROVISION_HERON_FEATHER"))
			{
				func_321(354, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER"))
			{
				func_321(399, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
			{
				func_321(401, 0);
			}
		}
		else if (func_331(iParam0, 709057512))
		{
			func_561(joaat("EXOTIC_STAGE_02"));
			if (func_562() == 1)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 2);
				if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_320(45))
		{
			if (iParam0 == joaat("PROVISION_GATOR_EGG"))
			{
				func_321(359, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR"))
			{
				func_321(394, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR"))
			{
				func_321(395, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
			{
				func_321(398, 0);
			}
		}
		else if (func_331(iParam0, -1478961327))
		{
			func_561(joaat("EXOTIC_STAGE_03"));
			if (func_562() == 2)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 4);
				if (iParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!func_566(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
					{
						func_567(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
						func_516(48);
					}
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR") || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_320(46))
		{
			if (iParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
			{
				func_321(356, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED"))
			{
				func_321(402, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL"))
			{
				func_321(404, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
			{
				func_321(406, 0);
			}
		}
		else if (func_331(iParam0, -1238404098))
		{
			func_561(joaat("EXOTIC_STAGE_04"));
			if (func_562() == 3)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 8);
				if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_320(47))
		{
			if (iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL"))
			{
				func_321(396, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS"))
			{
				func_321(397, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS"))
			{
				func_321(405, 0);
			}
			else if (iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
			{
				func_321(403, 0);
			}
		}
		else if (func_331(iParam0, 1160548794))
		{
			func_561(joaat("EXOTIC_STAGE_05"));
			if (func_562() == 4)
			{
				func_517(0, 10);
				iVar1 = func_563(iParam0, iParam1, 16);
				if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
				{
					if (func_564(iParam0) < func_565(iParam0))
					{
						func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar1, 0, -1, 0);
						func_329(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_353(int iParam0)
{
	int iVar0;

	if (iParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!func_566(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0)) >= 25)
		{
			func_567(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("GATOR_EGGS"), 0), 1);
			func_516(48);
		}
	}
}

void func_354(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char[] cVar2[8];

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_ORDER"));
		if (func_193(func_568(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_569(iParam0, iVar0, cVar2, iParam1, bParam2);
			}
			else
			{
				func_570(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_355(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_346(0, 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case joaat("MONEY_ONE_DOLLAR"):
			func_346(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_FIVE_DOLLARS"):
			func_346(joaat("REWARD_FIVE_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_TEN_DOLLARS"):
			func_346(joaat("REWARD_TEN_DOLLARS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD"):
			func_346(joaat("REWARD_BILLFOLD"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLFOLD_SML"):
			func_346(joaat("REWARD_BILLFOLD_SML"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_BILLSTACK"):
			func_346(joaat("REWARD_BILLSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COIN"):
			func_346(joaat("REWARD_COIN"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINPURSE"):
			func_346(joaat("REWARD_COINPURSE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSACK"):
			func_346(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINSTACK"):
			func_346(joaat("REWARD_COINS"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYCLIP"):
			func_346(joaat("REWARD_MONEYCLIP"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK"):
			func_346(joaat("REWARD_MONEYSTACK"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_571())
			{
				func_346(joaat("REWARD_MONEYSTACK_LARGE"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			}
			break;
		case joaat("MONEY_COINCUP_SM"):
			func_346(joaat("REWARD_COINCUP_SM"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_COINCUP_LG"):
			func_346(joaat("REWARD_COINCUP_LG"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("CURRENCY_CASH"):
			func_346(joaat("REWARD_BILL"), 0, 1065353216, 1, 0, 0, iParam1 == joaat("ADD_REASON_LOOTED"), -1);
			break;
		case joaat("MONEY_CARD_SET_COMMON"):
			func_346(joaat("REWARD_CARD_SET_COMMON"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_RARE"):
			func_346(joaat("REWARD_CARD_SET_RARE"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CARD_SET_ALL"):
			func_346(joaat("REWARD_CARD_SET_ALL"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_RARE_FISH"):
			func_346(joaat("REWARD_RARE_FISH"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_346(joaat("REWARD_TAXIDERMY_STAGE_1"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_346(joaat("REWARD_TAXIDERMY_STAGE_2"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_346(joaat("REWARD_TAXIDERMY_STAGE_3"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_346(joaat("REWARD_TAXIDERMY_STAGE_4"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_346(joaat("REWARD_TAXIDERMY_STAGE_5"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_346(joaat("REWARD_CALLOWAY_LETTER"), 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_356(int iParam0)
{
	if (func_320(41))
	{
		func_321(363, 0);
	}
	else
	{
		func_321(362, 0);
	}
	switch (iParam0)
	{
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_01"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_01"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_02"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_02"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_03"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_03"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_04"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_04"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_05"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_05"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_MUSKIE_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_06"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_06"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_PERCH_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_07"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_07"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_08"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_08"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_09"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_09"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_10"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_10"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_11"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_11"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_12"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_12"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_13"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_13"));
			func_517(0, 10);
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_LEGENDARY"):
			func_572(joaat("LEGENDARY_FISH_14"));
			func_573(joaat("LEGENDARY_FISHING_SPOT_14"));
			func_574(joaat("LEGENDARY_FISHING_SPOT_14"));
			break;
	}
}

void func_357(int iParam0, int iParam1)
{
	var uVar0;

	func_575(iParam0, iParam1, &uVar0);
}

int func_358(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> /*40*/ sVar0;
	int iVar5;

	if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
	{
		sVar0 = { func_398(iParam1, 1, 0) /*5*/ };
		iParam3 = func_576(sVar0.f_4);
		if (iParam3 == joaat("MP_COMPONENT_TYPE_END"))
		{
			return 0;
		}
	}
	if (!func_577(iParam1, iParam2, func_454(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_578(1, (func_23() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"):
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (bParam8 && iParam1 != Global_1946054.f_57[func_454(iParam3, 1) /*11*/])
			{
				func_579(31, 0, 0, 0, 0);
			}
			break;
		case joaat("MP_COMPONENT_TYPE_HEADWEAR"):
			if (func_580((1 << 15)) && iParam1 != Global_1946054.f_57[func_454(iParam3, 1) /*11*/])
			{
				func_581();
				func_579(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_579(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_582(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_579(19, 0, iVar5, 0, 0);
		if ((iParam3 == joaat("MP_COMPONENT_TYPE_NECKWEAR_1") || iParam3 == joaat("MP_COMPONENT_TYPE_HEADWEAR")) || iParam3 == joaat("MP_COMPONENT_TYPE_HAND_ATTIRE"))
		{
			func_583(0);
			func_584(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_579(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_359(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> /*80*/ sVar3;
	bool bVar17;
	int iVar18;
	int iVar19;

	sVar3.f_9 = joaat("SLOTID_NONE");
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_540(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_540(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_394("ALL WEAPONS", &iVar0, &iVar1, joaat("SLOTID_NONE"), 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_395(&sVar3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(sVar3.f_4))
				{
					if (!bParam1)
					{
						if (sVar3.f_4 == iVar18 || sVar3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = sVar3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_397(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_360()
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_60));
}

void func_361()
{
	float fVar0;
	float fVar1;

	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f - fVar0), (1.0f - fVar1));
}

void func_362()
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), (1.0f / (1.0f + Global_40.f_11095.f_58)));
}

void func_363()
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), (1.0f - Global_40.f_11095.f_63));
}

void func_364()
{
	func_13();
	func_12();
	func_10();
}

void func_365(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	Vector3 vVar4;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f /*3*/ };
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	switch (iParam1)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::VAR_STRING(2, sVar3));
}

void func_366(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;

	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = joaat("COL_TH_SUB_JACK_HALL");
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = joaat("COL_TH_SUB_HIGH_STAKES");
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = joaat("COL_TH_SUB_POISONOUS_TRAIL");
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = joaat("COL_TH_SUB_TRESOR_DES_MORTS");
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = joaat("COL_TH_SUB_ELEMENTAL_TRAIL");
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = joaat("COL_TH_SUB_LANDMARKS_OF_RICHES");
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_530(MISC::VAR_STRING(2, sVar1), MISC::VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("PLAYER_MENU"), MISC::VAR_STRING(2, sVar3), joaat("SP_MISSIONS"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_367(int iParam0)
{
	Global_40.f_12004.f_7 |= iParam0;
}

void func_368(int iParam0)
{
	Global_40.f_12004.f_8 |= iParam0;
}

void func_369(int iParam0)
{
	Global_40.f_12004.f_9 |= iParam0;
}

void func_370(int iParam0)
{
	Global_40.f_12004.f_11 |= iParam0;
}

void func_371(int iParam0)
{
	Global_40.f_12004.f_12 |= iParam0;
}

void func_372(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_585(iParam0, (1 << 10)))
	{
		return;
	}
	func_520(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_373(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_518(iParam0, &iVar0, &iVar1);
	if (!func_519(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_585(iParam0, (1 << 10)))
	{
		return;
	}
	func_520(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

int func_374()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);
	if (iVar0 == func_514())
	{
		return func_375();
	}
	iVar4 = (func_514() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_514())
	{
		iVar1 = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar2, joaat("CIGARETTE_CARDS"), 0);
		if (!func_586(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_515(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_375()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_514());
	return func_515(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("CIGARETTE_CARDS"), 0));
}

void func_376(int iParam0)
{
	switch (*iParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX");
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*iParam0 = joaat("CONSUMABLE_CHEWING_TOBACCO");
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*iParam0 = joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP");
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*iParam0 = joaat("CONSUMABLE_COCAINE_CHEWING_GUM");
			break;
	}
}

bool func_377(int iParam0, int iParam1, int iParam2)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_398(iParam0, 0, 1) /*5*/ };
	sVar5 = { func_401(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	return func_405(iParam0, &sVar5, &sVar0, iParam1, iParam2, 0);
}

void func_378(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_23() != -1)
	{
		return;
	}
	switch (func_334(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			if (iParam0 == joaat("KIT_BANDANA") && func_587(joaat("CI_CATEGORY_WARDROBE_MASK"), 0) <= 0)
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				func_579(32, iParam0, 0, 0, 0);
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = func_463(iParam0);
			if (func_588(iVar0))
			{
				func_589(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_579(30, iParam0, 0, 0, 0);
			}
			if (func_450() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR") || func_450() == joaat("MPC_PLAYER_TYPE_SP_ARTHUR_SICK"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_450() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
						func_579(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			if (!func_590(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), 0))
			{
				if (func_591(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"), &iVar1))
				{
					func_579(33, iVar1, 0, 0, 0);
				}
			}
			func_579(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!func_592(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_358(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_333(24);
		if (func_359(&iVar2, 0))
		{
			func_201(iVar2, 0, 0, 1, 3, 0, joaat("ADD_REASON_DEFAULT"), 0);
		}
	}
}

void func_379(int iParam0)
{
	if (func_331(iParam0, 943695443))
	{
		func_593(0, iParam0);
	}
	else if (func_331(iParam0, -2096528786))
	{
		func_593(1, iParam0);
	}
	else if (func_331(iParam0, -1094167013))
	{
		func_593(2, iParam0);
	}
	else if (func_331(iParam0, 1936654645))
	{
		func_593(3, iParam0);
	}
	else if (func_331(iParam0, 1306489306))
	{
		func_593(4, iParam0);
	}
	else if (func_331(iParam0, 435762317))
	{
		func_593(5, iParam0);
	}
	else if (func_331(iParam0, 1259363210))
	{
		func_593(6, iParam0);
	}
	else if (func_331(iParam0, 881398259))
	{
		func_593(7, iParam0);
	}
	else if (func_331(iParam0, -541549214))
	{
		func_593(8, iParam0);
	}
	else if (func_331(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_593(-1, iParam0);
	}
}

int func_380(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar4;

	sVar4.f_1 = 10;
	func_594(&sVar4, joaat("LOOT_TYPE_NORMAL"));
	return func_595(iParam0, &sVar4, &uVar0, iParam1);
}

struct<2> /*16*/ func_381(int iParam0)
{
	struct<2> /*16*/ sVar0;
	struct<2> /*16*/ sVar2;

	if (!func_287(iParam0, 0))
	{
		return sVar0;
	}
	if (func_331(iParam0, joaat("CI_TAG_ITEM_DEADEYE")))
	{
		if (func_23() == -1)
		{
			if (func_331(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
			{
				return func_62(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			}
			else
			{
				return func_62(joaat("DEADEYE_ITEMS"));
			}
		}
	}
	else if (func_331(iParam0, joaat("CI_TAG_ITEM_MEDICINE")))
	{
		return func_62(joaat("MEDICINE_ITEMS"));
	}
	if (func_331(iParam0, joaat("CI_TAG_ITEM_LOCK_BREAKER")))
	{
		return func_62(joaat("LOCK_BREAKER_ITEMS"));
	}
	return sVar2;
}

void func_382(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			if (func_23() == -1)
			{
				if (func_130(Global_1835011[4 /*74*/].f_1, 1))
				{
					func_321(109, 1);
				}
			}
			break;
	}
}

void func_383(int iParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_597(func_596(0));
	func_599(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_598(iParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_384(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (!func_287(iParam0, 0))
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
	if (!func_600())
	{
		func_601(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	strcpy_s(&cVar2, 32, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			strcpy_s(&cVar2, 32, func_139(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"));
		}
		else if (bParam2 && func_332(iParam0, (1 << 21)))
		{
			strcpy_s(&cVar2, 32, "ITEM_READ_PUMP_MULT");
		}
		bVar0 = true;
	}
	iVar6 = func_330(iParam0);
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
	else if (!func_602(iParam0, &sVar7, iVar11, iVar10, 0, joaat("UI_ITEMVIEWER")))
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
	sVar15 = func_603(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, func_288(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_331(iParam0, joaat("CI_TAG_SMOKING_CIGARETTE"))) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP")) || iParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"))
	{
		sVar15 = MISC::VAR_STRING(0, func_288(iParam0));
	}
	func_599(sVar15, sVar7.f_1, MISC::GET_HASH_KEY(sVar7.f_0), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

void func_385(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_604(1) < iParam0)
	{
		iParam0 = func_604(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_62(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_386(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_599(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

void func_387(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_599(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
}

void func_388(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_605())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 += iVar2;
		iVar1 += iVar2;
		func_599(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_TOTAL_TAKE"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
		iParam0 -= iVar0;
		if (iVar0 > 0)
		{
			func_606(iVar0);
			func_607(iVar0, 0, 0);
		}
		func_599(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_142(func_62(joaat("CAREER_CASH")), iVar1);
	}
}

bool func_389(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> /*80*/ sVar4;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630.f_12)
	{
		return false;
	}
	iVar0 = func_390(iParam0, iParam1);
	sVar4.f_9 = joaat("SLOTID_NONE");
	if (func_394("ALL WEAPONS", &iVar1, &iVar2, joaat("SLOTID_NONE"), 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_395(&sVar4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_204(sVar4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(sVar4.f_4) == iVar0)
			{
				func_397(iVar1);
				return true;
			}
			iVar3++;
		}
		func_397(iVar1);
	}
	return false;
}

int func_390(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_330(iParam0);
	if (iVar0 == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
	}
	else if (iVar0 == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(iParam0))
	{
		return iParam0;
	}
	if (func_331(iParam0, joaat("CI_TAG_ITEM_AMMOBOX")))
	{
		func_575(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

bool func_391(int iParam0, int iParam1, bool bParam2, int iParam3)
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
	sVar0 = { func_608(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam2)
	{
		func_610(&sVar0, func_609(0));
	}
	if (!func_611(&sVar0, &iVar18, &iVar19, 0))
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
			if (!func_395(&sVar20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				sVar34.f_4 = sVar20.f_9;
				sVar34 = { sVar20.f_5 /*4*/ };
				if (func_402(iParam0, &sVar20, &sVar34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_397(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_392(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_398(iParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_612(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	sVar5 = { func_401(iParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_402(iParam0, &sVar5, &sVar0, iParam1, iParam2, bParam3, bParam4);
}

void func_393(int iParam0, int iParam1)
{
	if (!Global_1901328.f_94)
	{
		if (func_331(iParam0, joaat("CI_TAG_ITEM_COLLECTIBLE")))
		{
			func_613(iParam0, iParam1);
		}
		if (func_331(iParam0, joaat("CI_TAG_ITEM_TAXIDERMY")) && func_331(iParam0, joaat("CI_TAG_ITEM_MATERIAL")))
		{
			func_354(iParam0, iParam1, 1, 0);
		}
	}
}

bool func_394(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_411(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_395(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_396(int iParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_614(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

int func_397(int iParam0)
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

struct<5> /*40*/ func_398(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_440(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_330(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_401(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_609(bParam1) /*4*/ };
			if (bParam2 && func_615(iParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_400(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_400(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_396(iParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_616(bParam1) /*4*/ };
			switch (func_334(iParam0))
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
			if (func_617(iParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_401(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(iParam0, joaat("KIT_CAMP"));
			}
			else if (func_617(iParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_401(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
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
				if (!func_618(sVar0, &sVar27, bParam1, 0))
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

int func_399(int iParam0, int iParam1)
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
			return joaat("SLOTID_CARD_PROGRESSION");
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
			return joaat("SLOTID_CHALLENGE_PROGRESSION");
		case 41:
			return joaat("SLOTID_CHARACTER_0");
		case 42:
			return joaat("SLOTID_CHARACTER_1");
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
			return joaat("SLOTID_WARDROBE_FACE_PAINT");
		case 350:
			return -1994943603;
		case 351:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_1");
		case 352:
			return joaat("SLOTID_WARDROBE_FOOTWEAR_2");
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
			return joaat("SLOTID_WARDROBE_HEADWEAR");
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
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_CLIP");
		case 446:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_GRIP");
		case 447:
			return joaat("SLOTID_WEAPON_PISTOL_VOLCANIC_SIGHT");
		case 448:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_CLIP");
		case 449:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_GRIP");
		case 450:
			return joaat("SLOTID_WEAPON_REPEATER_CARBINE_LEVER");
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
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_LEVER");
		case 459:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_SIGHT");
		case 460:
			return joaat("SLOTID_WEAPON_REPEATER_HENRY_WRAP1");
		case 461:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_CLIP");
		case 462:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_GRIP");
		case 463:
			return joaat("SLOTID_WEAPON_REPEATER_PUMPACTION_SIGHT");
		case 464:
			return 763162704;
		case 465:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_GRIP");
		case 466:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_LEVER");
		case 467:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_SIGHT");
		case 468:
			return joaat("SLOTID_WEAPON_REPEATER_WINCHESTER_WRAP1");
		case 469:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_BARREL");
		case 470:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_CLIP");
		case 471:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_GRIP");
		case 472:
			return joaat("SLOTID_WEAPON_REVOLVER_CATTLEMAN_SIGHT");
		case 473:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_BARREL");
		case 474:
			return joaat("SLOTID_WEAPON_REVOLVER_DOUBLEACTION_CLIP");
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
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_CLIP");
		case 491:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_GRIP");
		case 492:
			return joaat("SLOTID_WEAPON_REVOLVER_SCHOFIELD_SCOPE");
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
			return joaat("SLOTID_WEAPON_RIFLE_ELEPHANT_CLIP");
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
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP");
		case 532:
			return joaat("SLOTID_WEAPON_SHOTGUN_DOUBLEBARREL_CLIP_EXOTIC");
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
			return joaat("SLOTID_WEAPON_SHOTGUN_PUMPACTION_BARREL");
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
			return joaat("SLOTID_TEMPORARY_HORSE");
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
			return joaat("SLOTID_WARDROBE_FOOTWEAR_3");
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

bool func_400(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_472(iParam0, *uParam1, iParam2, bParam3) > 0;
}

struct<4> /*32*/ func_401(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_287(iParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_411(bParam6), &uParam1, iParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_402(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_619(iParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_618(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_337(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_411(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_403(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(iParam0))
	{
		iVar1 = func_122(WEAPON::GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
	}
}

bool func_404(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(func_411(bParam6), &uParam0, iParam4, &sVar0))
	{
		return false;
	}
	if (!func_618(sVar0, uParam5, bParam6, 0))
	{
		return false;
	}
	return true;
}

bool func_405(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_287(iParam0, 0))
	{
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam2))
	{
		return false;
	}
	if (func_512(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_337(0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_411(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_406(struct<4> /*32*/ sParam0, bool bParam4)
{
	struct<11> /*88*/ sVar0;

	if (!func_337(0))
	{
		return func_620(sParam0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_618(sParam0, &sVar0, 0, 0))
	{
		return false;
	}
	if (sVar0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_411(0), &sParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_407(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_408(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

int func_409(struct<2> /*16*/ sParam0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_410(int iParam0, bool bParam1)
{
	struct<18> /*144*/ sVar0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return 0;
	}
	sVar0 = { func_608(iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	if (bParam1)
	{
		func_610(&sVar0, func_609(0));
	}
	if (!func_611(&sVar0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_397(iVar18);
	return iVar19;
}

int func_411(bool bParam0)
{
	if (func_23() == -1)
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

void func_412(int iParam0, int iParam1, int iParam2)
{
	Vector3 vVar0;

	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_23() == 0)
	{
		vVar0.x = Global_265073.f_73815.f_208.f_12;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

int func_413(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (func_39(iParam0))
	{
		case 1:
			iVar0 = func_100(iParam0);
			return func_621(iVar0);
		case 8:
			iVar1 = func_100(iParam0);
			if (func_102(Global_1347702[iVar1 /*49*/].f_12, 1))
			{
				return func_622(iVar1);
			}
			break;
	}
	return -1;
}

int func_414()
{
	if (!func_130(Global_1835011[4 /*74*/].f_1, 1))
	{
		return 0;
	}
	else if (!func_130(Global_1347702[66 /*49*/].f_15, 1))
	{
		return 1;
	}
	else if (!func_130(Global_1347702[67 /*49*/].f_15, 1))
	{
		return 2;
	}
	else if (!func_130(Global_1835011[38 /*74*/].f_1, 1))
	{
		return 3;
	}
	else if (!func_130(Global_1347702[68 /*49*/].f_15, 1))
	{
		return 4;
	}
	else if (!func_130(Global_1835011[59 /*74*/].f_1, 1))
	{
		return 5;
	}
	else if (!func_130(Global_1835011[67 /*74*/].f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_415(int iParam0, int iParam1)
{
	if (!func_15(iParam0))
	{
		return;
	}
	func_442(iParam0, iParam1);
}

void func_416(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_114(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_52(&Global_1935630, (1 << 22));
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

int func_417(bool bParam0)
{
	if (!bParam0 && func_623(joaat("WS_GUARMA_EXISTS")))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_418(int iParam0)
{
	Global_1898164 |= iParam0;
}

void func_419(int iParam0, bool bParam1)
{
	if (func_23() != -1)
	{
		return;
	}
	if (func_38(0) != iParam0)
	{
		return;
	}
	if (func_624(iParam0))
	{
		if (bParam1)
		{
			func_625(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
		else
		{
			func_626(joaat("CI_CATEGORY_WARDROBE_BIG_MASK"));
		}
	}
}

int func_420(int iParam0)
{
	return func_628(func_627(iParam0));
}

int func_421(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

int func_422(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("TREASURE_HUNT_LOOT_01");
		case 1:
			return joaat("TREASURE_HUNT_LOOT_02");
		case 2:
			return joaat("TREASURE_HUNT_LOOT_03");
		case 3:
			return joaat("TREASURE_HUNT_LOOT_04");
		case 4:
			return joaat("TREASURE_HUNT_LOOT_05");
		case 5:
			return joaat("TREASURE_HUNT_LOOT_06");
		case 6:
			return joaat("TREASURE_HUNT_LOOT_07");
		case 7:
			return joaat("TREASURE_HUNT_LOOT_08");
		case 8:
			return joaat("TREASURE_HUNT_LOOT_09");
		case 9:
			return joaat("TREASURE_HUNT_LOOT_10");
		case 10:
			return joaat("TREASURE_HUNT_LOOT_11");
		case 11:
			return joaat("TREASURE_HUNT_LOOT_12");
		case 12:
			return joaat("TREASURE_HUNT_LOOT_13");
		case 13:
			return joaat("TREASURE_HUNT_LOOT_14");
		case 14:
			return joaat("TREASURE_HUNT_LOOT_15");
		case 15:
			return joaat("TREASURE_HUNT_LOOT_16");
		case 16:
			return joaat("TREASURE_HUNT_LOOT_17");
		case 17:
			return joaat("TREASURE_HUNT_LOOT_18");
		case 18:
			return joaat("TREASURE_HUNT_LOOT_19");
		case 19:
			return joaat("TREASURE_HUNT_LOOT_20");
		case 20:
			return joaat("TREASURE_HUNT_LOOT_21");
		case 21:
			return joaat("TREASURE_HUNT_LOOT_22");
		case 22:
			return joaat("TREASURE_HUNT_LOOT_23");
		case 23:
			return joaat("TREASURE_HUNT_LOOT_24");
		default:
			break;
	}
	return 0;
}

char* func_423()
{
	return "pausemenu_player";
}

int func_424()
{
	int iVar0;

	iVar0 = func_629();
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

char* func_425(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

char* func_426(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		case 0:
			return "RPG_HEALTH";
		case 2:
			return "RPG_DEADEYE";
		default:
			break;
	}
	return "";
}

int func_427(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 50;
		case 2:
			return 100;
		case 3:
			return 200;
		case 4:
			return 350;
		case 5:
			return 550;
		case 6:
			return 800;
		case 7:
			return 1100;
		default:
			break;
	}
	return 0;
}

struct<4> /*32*/ func_428(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	strcpy_s(&cVar0, 32, "TOAST_RPG_LEVEL_");
	StringIntConCat(&cVar0, iParam0, 32);
	strcat_s(&cVar0, 32, "_");
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_429(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_430()
{
	return 0;
}

int func_431()
{
	return 1;
}

int func_432(int iParam0)
{
	int iVar0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_334(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (iParam0 != 0)
	{
		iVar0 = func_334(iParam0);
		if (iVar0 != 0)
		{
			if (iParam1 >= 0 && iParam1 < func_432(iParam0))
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar0, iParam1, &uVar1))
				{
					return uVar1;
				}
			}
		}
	}
	return 0;
}

int func_434()
{
	return 5;
}

int func_435()
{
	return 6;
}

int func_436(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_630());
	return iVar0;
}

char* func_437(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "HORSE_CLASS_RACEWORK";
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "HORSE_CLASS_WARWORK";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "HORSE_CLASS_RACEWAR";
	}
	return "HORSE_CLASS_MULTI";
}

char* func_438(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_FEWSPOTTED_PC"):
			return "BREED_APPALOOSA_FEWSPOTTED_PC";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_ARABIAN_REDCHESTNUT_PC"):
			return "BREED_ARABIAN_REDCHESTNUT_PC";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WARPEDBRINDLE_PC"):
			return "BREED_ARABIAN_WARPEDBRINDLE_PC";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
			return "BREED_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_LIVERCHESTNUT_PC"):
			return "BREED_MORGAN_LIVERCHESTNUT_PC";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_GOLDPALOMINO_PC"):
			return "BREED_TENNESSEEWALKER_GOLDPALOMINO_PC";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

float func_439(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0.0f;
	if (iParam1 == 0)
	{
		if (func_168(iParam0, 0) > 50)
		{
			fVar0 += 0.25f;
		}
	}
	if (func_193(joaat("PROVISION_TALISMAN_BOAR_TUSK"), 1, 0))
	{
		fVar0 += -0.1f;
	}
	if (func_631() == 0 && func_258() == iParam0)
	{
		fVar1 = func_632(iParam1);
		fVar0 -= fVar1;
	}
	return fVar0;
}

struct<4> /*32*/ func_440(bool bParam0)
{
	return func_401(joaat("CHARACTER"), func_633(), joaat("SLOTID_NONE"), bParam0);
}

bool func_441(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_442(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_634(iParam0);
	}
	else
	{
		func_635(iParam0, iParam1);
	}
	func_636();
}

void func_443(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_2 = iParam1;
}

void func_444(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_3 = iParam1;
}

void func_445(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0 /*7*/].f_4 = iParam1;
}

void func_446(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/] = iParam1;
}

void func_447(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = iParam1;
		return;
	}
	Global_1058888.f_428[iParam0 /*2*/].f_1 = iParam1;
}

int func_448(int iParam0, var uParam1)
{
	var uVar0;
	struct<2> /*16*/ sVar1;
	int iVar8;

	iVar8 = 0;
	if (!func_637(iParam0, func_450()))
	{
		return 0;
	}
	sVar1.f_0 = func_638(func_450());
	sVar1.f_1 = iParam0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar1);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		return 0;
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar1))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar0, &sVar1, joaat("COMPONENT")))
		{
		}
		else
		{
			(*uParam1)[iVar8] = uVar0;
			iVar8++;
		}
	}
	return iVar8;
}

int func_449(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<10> /*80*/ sVar5;
	int iVar19;
	struct<18> /*144*/ sVar20;

	sVar5.f_9 = joaat("SLOTID_NONE");
	iVar19 = func_638(func_450());
	sVar20 = { func_608(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("CI_CATEGORY_WARDROBE_OUTFIT"), 0) /*18*/ };
	if (!func_611(&sVar20, &iVar0, &iVar1, bParam3))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_395(&sVar5, iVar2, iVar0, iVar1))
		{
		}
		else if (iParam0 == sVar5.f_4)
		{
		}
		else
		{
			iVar4 = func_463(sVar5.f_4);
			if (iVar4 >= 0 && iVar4 <= 5)
			{
			}
			else
			{
				iVar3 = (*iParam2 - 1);
				while (iVar3 >= 0)
				{
					func_639(&(Global_1946054.f_964), iVar19, sVar5.f_4, joaat("COMPONENT"), 1, (*uParam1)[iVar3]);
					DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
					if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
					{
					}
					else
					{
						*iParam2--;
						(*uParam1)[iVar3] = (*uParam1)[*iParam2];
						(*uParam1)[*iParam2] = 0;
					}
					iVar3 += -1;
				}
			}
		}
		iVar2++;
	}
	func_397(iVar0);
	return 1;
}

int func_450()
{
	return Global_1946054.f_1;
}

void func_451(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = iParam0;
	if (!func_640(iVar2, &iVar0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_26796.f_627.f_121.f_19)
	{
		if (iVar2 == Global_26796.f_627.f_121[iVar0])
		{
			bVar1 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar1)
	{
		return;
	}
	if (Global_26796.f_627.f_121.f_19 == 1)
	{
		Global_26796.f_627.f_121.f_19 = 0;
		*uParam1 = 0;
		Global_26796.f_627.f_121[0] = 0;
		return;
	}
	Global_26796.f_627.f_121.f_19--;
	*uParam1--;
	Global_26796.f_627.f_121[iVar0] = Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19];
	Global_26796.f_627.f_121[Global_26796.f_627.f_121.f_19] = 0;
}

void func_452(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	switch (func_334(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar0 = func_641(iParam0, &(Global_1946054.f_2657.f_21));
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar0 = func_641(iParam0, &(Global_1946054.f_2657.f_23));
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar0 = func_641(iParam0, &(Global_1946054.f_2657.f_20));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar0 = func_641(iParam0, &(Global_1946054.f_2657.f_22));
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar0 = func_641(iParam0, &(Global_1946054.f_2657.f_24));
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar0 = func_641(iParam0, &(Global_1946054.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_642();
	}
	if (bParam1)
	{
		func_643(0, 0);
	}
}

int func_453(int iParam0)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { func_398(iParam0, 1, 0) /*5*/ };
	return func_576(sVar0.f_4);
}

int func_454(int iParam0, int iParam1)
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

void func_455(var uParam0)
{
	int iVar0;

	*uParam0 = Global_1946054.f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uParam0->f_1[iVar0 /*3*/] = { Global_1946054.f_1497.f_1[iVar0 /*3*/] /*3*/ };
		iVar0++;
	}
}

bool func_456(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> /*32*/ sVar4;

	sVar4.f_0 = func_638(iParam6);
	sVar4.f_1 = iParam1;
	sVar4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar4);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &sVar4, joaat("PARTIAL"));
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, joaat("PERSISTENT_TAGS"));
	*bParam2 = bVar2;
	Global_1946054.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_645(uParam0, func_644(iVar0), 1);
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &sVar4, joaat("COMPONENT_TYPE")))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_454(iVar3, 1);
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
							if (func_646(iVar3) && func_647(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
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
							func_648(uParam0, uParam0->f_1[Global_1946054.f_2612[iVar1] /*3*/], Global_1946054.f_2612[iVar1], 0, 0);
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

Vector3 func_457(int iParam0, int iParam1)
{
	if (func_23() == -1)
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

int func_458(int iParam0, int iParam1)
{
	Vector3 vVar0;

	vVar0 = { func_457(iParam0, iParam1) /*3*/ };
	return vVar0.x;
}

int func_459(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_649();
	}
	if (func_23() == -1)
	{
		return Global_26796.f_26[iParam0 /*120*/].f_1;
	}
	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

void func_460(int iParam0)
{
	int iVar0;
	var uVar1;

	if (func_23() == -1)
	{
		Global_26796.f_26[iParam0 /*120*/] = 0;
		Global_26796.f_26[iParam0 /*120*/].f_1 = 0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			uVar1 = Global_1946054.f_57[iVar0 /*11*/];
			func_462(&uVar1, iVar0, iParam0);
			iVar0++;
		}
		return;
	}
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/] = 0;
	Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		uVar1 = Global_1946054.f_57[iVar0 /*11*/];
		func_650(&uVar1, iVar0, iParam0);
		iVar0++;
	}
}

bool func_461(var uParam0, int iParam1)
{
	return (uParam0->f_2 & iParam1) != 0;
}

void func_462(var uParam0, int iParam1, int iParam2)
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CLOTHING_FANCY_SUIT"):
			return 14;
		case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
			return 6;
		case joaat("CLOTHING_WINTER_OUTFIT"):
			return 7;
		case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
			return 9;
		case joaat("CLOTHING_ISLAND_OUTFIT"):
			return 10;
		case joaat("CLOTHING_ROBBERY_OUTFIT"):
			return 15;
		case joaat("CLOTHING_HEIST_OUTFIT"):
			return 16;
		case joaat("CLOTHING_POLICE_OUTFIT"):
			return 20;
		case joaat("CLOTHING_CUSTOM_ONE_OUTFIT"):
			return 0;
		case joaat("CLOTHING_OUTFIT_OWNED_001"):
			return 24;
		case joaat("CLOTHING_OUTFIT_OWNED_002"):
			return 25;
		case joaat("CLOTHING_OUTFIT_OWNED_003"):
			return 26;
		case joaat("CLOTHING_OUTFIT_OWNED_005"):
			return 27;
		case joaat("CLOTHING_OUTFIT_OWNED_006"):
			return 28;
		case joaat("CLOTHING_SP_OUTFIT_SONY_001"):
			return 21;
		case joaat("CLOTHING_SP_OUTFIT_SPCLEDITION_001"):
			return 22;
		case 1784889667:
			return 13;
		case joaat("CLOTHING_WINTER_OPEN_COAT_OUTFIT"):
			return 8;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_ONE"):
			return 1;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_TWO"):
			return 2;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_THREE"):
			return 3;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FOUR"):
			return 4;
		case joaat("CLOTHING_SP_OUTFIT_SAVE_FIVE"):
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_COLD_WEATHER"):
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case joaat("CLOTHING_SP_MAR_OUTFIT_RANCHER_ALT"):
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"):
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
		case joaat("CLOTHING_SP_MAR_OUTFIT_ENDLESS_SUMMER_FREEROAM"):
			return 65;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_L"):
			return 58;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
		case joaat("CLOTHING_SP_NUDE"):
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_464(int iParam0)
{
	return (Global_26796.f_774 & iParam0) != 0;
}

void func_465(var uParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_462(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
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
		func_650(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_466(int iParam0, int iParam1, int iParam2)
{
	if (func_23() == -1)
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

void func_467(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_588(iParam0))
	{
		return;
	}
	iVar0 = (Global_40.f_7157[iParam0 /*3*/] & iParam1);
	Global_40.f_7157[iParam0 /*3*/] -= iVar0;
}

void func_468(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] |= iParam1;
}

int func_469(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
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
	iVar0 = func_651(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_459(iParam1);
	}
	if ((bParam3 && func_652(iParam1, (1 << 12))) && Global_1946054.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_637(iVar0, Global_1946054.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_467(Global_40.f_7729, (1 << 12));
		func_468(Global_1905941, (1 << 12));
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		func_653(iParam0);
	}
	func_654();
	if (!func_655(iParam1))
	{
		func_657(iVar0, iParam0, func_656(iParam1), 1, 0, 1);
	}
	func_658(iParam0);
	return 1;
}

bool func_470(int iParam0)
{
	switch (func_334(iParam0))
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return true;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return true;
		default:
			break;
	}
	return false;
}

void func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> /*32*/ sVar2;

	if (func_23() == -1)
	{
		sVar2.f_0 = -1394038466;
	}
	else
	{
		sVar2.f_0 = 545953470;
	}
	sVar2.f_1 = iParam0;
	sVar2.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&sVar2);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&sVar2))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar1, &sVar2, joaat("META_TYPE")))
		{
			return;
		}
		iVar0 = func_454(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_659(&(Global_1946054.f_1378.f_1[iVar0 /*3*/]), 2, 6);
		}
	}
}

int func_472(int iParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_401(iParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_411(bParam6), &sVar0, false);
	return iVar4;
}

void func_473(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_474(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

int func_475(int iParam0)
{
	if (func_483())
	{
		switch (iParam0)
		{
			case joaat("CI_CATEGORY_HORSE_BLANKET"):
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_00_NEW_000");
			case joaat("CI_CATEGORY_HORSE_SADDLE"):
				return joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_STOCK_NEW_SADDLE_000");
			case joaat("CI_CATEGORY_HORSE_HORN"):
				return joaat("HORSE_EQUIPMENT_HORN_NEW_000");
			case joaat("CI_CATEGORY_HORSE_STIRRUP"):
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_000");
			case joaat("CI_CATEGORY_HORSE_BEDROLL"):
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_01_USED_000");
			case joaat("CI_CATEGORY_HORSE_SADDLEBAG"):
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_USED_000");
		}
	}
	else if (func_1())
	{
		switch (iParam0)
		{
			case joaat("CI_CATEGORY_HORSE_BLANKET"):
				return joaat("HORSE_EQUIPMENT_HORSE_BLANKET_09_NEW_001");
			case joaat("CI_CATEGORY_HORSE_SADDLE"):
				return joaat("HORSE_EQUIPMENT_WESTERN_04_STOCK_NEW_SADDLE_005");
			case joaat("CI_CATEGORY_HORSE_HORN"):
				return joaat("HORSE_EQUIPMENT_HORN_NEW_012");
			case joaat("CI_CATEGORY_HORSE_STIRRUP"):
				return joaat("HORSE_EQUIPMENT_STIRRUP_NEW_006");
			case joaat("CI_CATEGORY_HORSE_BEDROLL"):
				return joaat("HORSE_EQUIPMENT_HORSE_BEDROLL_00_USED_003");
			case joaat("CI_CATEGORY_HORSE_SADDLEBAG"):
				return joaat("HORSE_EQUIPMENT_HORSE_SADDLEBAG_NEW_003");
		}
	}
	return 0;
}

void func_476(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_477(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_478(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_479(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_480(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_481(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

bool func_482(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> /*32*/ sVar10;
	struct<4> /*32*/ sVar14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (!func_660(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	sVar10 = { func_285() /*4*/ };
	sVar14 = { func_401(iParam0, sVar10, iVar9, 0) /*4*/ };
	if (func_406(sVar14, iParam1))
	{
		if (func_661(iParam0))
		{
			if (func_170(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_482(iVar18, 0))
				{
				}
			}
		}
		else if (func_662(iParam0))
		{
			if (func_170(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_482(iVar19, 0))
				{
				}
			}
			if (func_170(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_482(iVar20, 0))
				{
				}
			}
			iVar21 = func_663(iParam0);
			if (func_287(iVar21, 0))
			{
				if (func_482(iVar21, 1))
				{
				}
			}
		}
		func_664();
		return true;
	}
	return false;
}

bool func_483()
{
	if (func_23() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == joaat("PLAYER_ZERO"))
	{
		return true;
	}
	return false;
}

int func_484()
{
	return joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_485()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_MAHOGANYBAY");
}

int func_486()
{
	return 1;
}

int func_487()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_488()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_489()
{
	return 1;
}

int func_490()
{
	return joaat("BREED_JOHN_ENDLESSSUMMER");
}

int func_491()
{
	return joaat("A_C_HORSE_JOHN_ENDLESSSUMMER");
}

int func_492()
{
	return 2;
}

int func_493()
{
	return joaat("BREED_TENNESSEEWALKER_CHESTNUT");
}

int func_494()
{
	return joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
}

int func_495()
{
	return 1;
}

int func_496()
{
	return joaat("BREED_MORGAN_BAY");
}

int func_497()
{
	return joaat("A_C_HORSE_MORGAN_BAY");
}

int func_498()
{
	return 1;
}

int func_499()
{
	return joaat("BREED_KENTUCKYSADDLE_GREY");
}

int func_500()
{
	return joaat("A_C_HORSE_KENTUCKYSADDLE_GREY");
}

int func_501()
{
	return 1;
}

int func_502(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return joaat("SLOTID_ACTIVE_HORSE");
		case 1:
			return joaat("SLOTID_TEMPORARY_HORSE");
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

int func_503(var uParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_411(bParam2), uParam0, iParam1);
}

bool func_504(int iParam0, var uParam1)
{
	int iVar0;
	struct<10> /*80*/ sVar1;
	struct<4> /*32*/ sVar15;

	if (!func_306(iParam0))
	{
		return false;
	}
	iVar0 = func_502(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	sVar1.f_9 = joaat("SLOTID_NONE");
	sVar15 = { func_440(0) /*4*/ };
	if (!func_665(sVar15, iVar0, &sVar1, 0, 0))
	{
		return false;
	}
	if (!func_666(&sVar1, uParam1))
	{
		return false;
	}
	return true;
}

bool func_505(int iParam0)
{
	return func_330(iParam0) == joaat("HORSE");
}

bool func_506(int iParam0)
{
	return func_330(iParam0) == joaat("WEAPON");
}

bool func_507(int iParam0)
{
	var uVar0;

	if (func_23() != -1)
	{
		return false;
	}
	if (func_332(iParam0, (1 << 20)))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_512(iParam0, &uVar0, 1, 0, 0);
	}
	return func_193(iParam0, 1, 0);
}

void func_508(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;

	if (func_330(iParam0) != joaat("WEAPON"))
	{
		return;
	}
	iVar0 = func_336(iParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (bParam2 || !func_536(iVar0))
	{
		if (func_23() == -1)
		{
			func_200(iVar0);
		}
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, false) && func_212(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == joaat("ADD_REASON_PURCHASED"))
			{
				func_384(iParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_509(int iParam0, int iParam1)
{
	int iVar0;

	if (func_331(iParam0, joaat("CI_TAG_ITEM_MULTIPLE_USES")))
	{
		func_667(iParam0, joaat("COST_SHOP_DEFAULT"), &iVar0, 1);
		*iParam1 *= iVar0;
	}
}

int func_510(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	if (!func_337(0))
	{
		bParam2 = true;
	}
	if (bParam2 || !func_668(iParam0))
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(iParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_411(bParam3), iParam0);
}

int func_511(int iParam0, bool bParam1)
{
	if (func_340(iParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_411(bParam1), iParam0, false);
}

bool func_512(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;
	struct<10> /*80*/ sVar4;
	var uVar26;
	int iVar27;
	int iVar28;

	func_669(&iParam0);
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (!func_337(0))
	{
		bParam3 = true;
	}
	if (func_506(iParam0) && WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			sVar0 = { func_609(0) /*4*/ };
			sVar4.f_9 = joaat("SLOTID_NONE");
			if (!func_400(iParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
			{
				return false;
			}
			else if (func_396(iParam0, &sVar4, joaat("SLOTID_WEAPON_0")))
			{
				return false;
			}
			if (func_615(iParam0, 1))
			{
				if (!func_400(iParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					return false;
				}
				else if (func_396(iParam0, &sVar4, joaat("SLOTID_WEAPON_1")))
				{
					return false;
				}
			}
		}
		else if (!func_670(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_510(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3 || !func_668(iParam0))
	{
		iVar28 = func_472(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_411(bParam4), iParam0, false);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_513(int iParam0, int iParam1)
{
	struct<2> /*16*/ sVar0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(iParam0, &sVar0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (sVar0[iVar42 /*2*/].f_1 == iParam1)
			{
				return sVar0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_514()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

int func_515(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_516(int iParam0)
{
	int iVar0;
	float fVar1;

	if (func_23() != -1)
	{
		return;
	}
	iVar0 = func_671(iParam0);
	fVar1 = func_672(iParam0);
	if ((Global_1347477.f_117 || !func_205(31)) || !func_673(iVar0))
	{
		return;
	}
	if (fVar1 <= 0.0f)
	{
		return;
	}
	if (func_162(iVar0) >= 7)
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
	func_674(iVar0, (Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_599(MISC::VAR_STRING(6, func_675(iParam0), fVar1), "itemtype_textures", func_676(iVar0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_517(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_677(&Global_0, 8);
	}
	if (!func_35() || func_23() != -1)
	{
		return;
	}
	func_677(&Global_0, 1);
}

void func_518(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_519(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_678(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_679(iParam0))
	{
		return false;
	}
	if (func_680(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_585(iParam0, 1)) || func_113((1 << 15)))
	{
		if (!func_585(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_681())
	{
		return false;
	}
	return true;
}

void func_520(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

int func_521(int iParam0)
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

int func_522(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_682(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar5, &sVar0);
	return uVar5;
}

char* func_523(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_326() >= 12)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_683(), 12);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_684(), 12);
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
			else if (func_557() >= 30)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_685(), 30);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_557(), 30);
			}
			break;
		case joaat("EXOTIC_ITEMS"):
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
		case joaat("LEGENDARY_FISH"):
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_686(), 13);
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
			else if (func_558() >= 10)
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_687(), 10);
			}
			else
			{
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_558(), 10);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_522(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_524(int iParam0, int iParam1, int iParam2)
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

bool func_525(int iParam0, int iParam1, Vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return true;
}

bool func_526(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

bool func_527(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
			iVar2 = func_688(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_193(iVar2, 1, 0) || func_690(func_689(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_531(func_688(iVar0))), func_531(func_688(iVar0)), bVar1, true, false);
		}
		if (iParam2 == joaat("DINO_BONES"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_557() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_691(iVar0)), func_691(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_685() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_691(iVar0)), func_691(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_691(iVar0)), func_691(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("EXOTIC_ITEMS"))
		{
			iVar2 = func_568(iParam3, func_692(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_564(iVar2) - iParam7) >= func_522(iParam3, func_693(iVar0));
				}
				else
				{
					bVar1 = func_564(iVar2) >= func_522(iParam3, func_693(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_564(iVar2) + iParam7) >= func_522(iParam3, func_693(iVar0));
			}
			else
			{
				bVar1 = func_564(iVar2) >= func_522(iParam3, func_693(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_694(iVar2)), func_694(iVar2), bVar1, true, false);
		}
		if (iParam2 == joaat("LEGENDARY_FISH"))
		{
			if (func_695(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, joaat("LEGENDARY_FISH"), 0)))
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
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_696(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0))), func_696(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == joaat("ROCK_CARVINGS"))
		{
			if (iVar0 == 0)
			{
				bVar1 = func_558() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_697(iVar0)), func_697(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_687() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_697(iVar0)), func_697(iVar0), bVar1, true, false);
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
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_697(iVar0)), func_697(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == joaat("TAXIDERMY"))
		{
			iVar2 = func_568(iParam3, func_692(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_564(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_698(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_698(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_172(iVar2)), func_172(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_528(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iParam2 == joaat("EXOTIC_ITEMS"))
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == joaat("LEGENDARY_FISH"))
	{
		if (func_686() >= 13)
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

bool func_529(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_15(func_38(0)) && ((func_699(0) == 1 || func_699(0) == 8) || func_699(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == joaat("DINO_BONES") || iParam2 == joaat("LEGENDARY_FISH")) || iParam2 == joaat("ROCK_CARVINGS"))
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

int func_530(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
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

char* func_531(int iParam0)
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

int func_532(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

void func_533(int iParam0)
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

void func_534(int iParam0)
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
			func_700(1);
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
			func_701(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_701(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_701(3);
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
			func_702(1);
			break;
		case 34:
			func_703(1);
			break;
		case 35:
			func_704(1);
			break;
		case 36:
			break;
		case 37:
			func_705(0);
			break;
		case 38:
			func_706(0);
			break;
		case 39:
			func_707(0);
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
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_321(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_321(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_321(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && func_35()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_532("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_321(589, 0);
			break;
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			if (func_23() == -1)
			{
				if (!func_592(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_708(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_1())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!func_193(iVar0, 1, 0))
					{
						func_377(iVar0, 1, joaat("ADD_REASON_DEFAULT"));
					}
					func_358(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_23() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_377(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 50:
			if (func_23() == -1)
			{
				if (!func_193(1013902307, 1, 0))
				{
					func_377(1013902307, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_193(142640135, 1, 0))
				{
					func_377(142640135, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 49:
			if (func_23() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_377(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
			}
			break;
		case 51:
			if (func_23() == -1)
			{
				if (!func_193(786809402, 1, 0))
				{
					func_377(786809402, 1, joaat("ADD_REASON_DEFAULT"));
				}
				if (!func_193(-518019409, 1, 0))
				{
					func_377(-518019409, 1, joaat("ADD_REASON_DEFAULT"));
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
			func_709();
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

bool func_535(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_536(int iParam0)
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

void func_537(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, iParam0);
	iVar2 = func_44();
	func_710(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_538(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_711(iParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("AMMO_ARROW")) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(iParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(iParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 -= iVar1;
		}
	}
	return iVar0;
}

bool func_539(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0));
}

int func_540(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_541(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_205(50))
			{
				if (!func_205(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_205(51))
			{
				if (!func_205(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_542(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	if (!func_287(iParam1, 0))
	{
		return false;
	}
	if (func_330(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = func_23() != -1;
	iVar2 = PED::_GET_META_PED_TYPE(iParam0);
	if (func_334(iParam1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		return true;
	}
	iVar4 = func_453(iParam1);
	if (iVar4 == joaat("MP_COMPONENT_TYPE_END"))
	{
		*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_ITEM_META_TYPE_MISSING");
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_331(iParam1, joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar5 = func_454(iVar4, 1);
		if (func_712(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case joaat("MP_COMPONENT_TYPE_NECKWEAR_1"):
			if (PED::_GET_SHOP_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_SHIRT_DOES_NOT_SUPPORT_NECKTIES");
				return false;
			}
			iVar5 = 10;
			iVar3 = func_334(Global_1946054.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == joaat("CI_CATEGORY_WARDROBE_BIG_MASK"))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NECKWEAR_DOES_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_1"):
			iVar5 = 35;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] != Global_1946054.f_57[iVar5 /*11*/] && func_331(iParam1, -1638171711))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_CHAPS_DO_NOT_SUPPORT_THIS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_FOOTWEAR_2"):
			iVar5 = 36;
			if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOT_DOES_NOT_SUPPORT_SPURS");
				return false;
			}
			break;
		case joaat("MP_COMPONENT_TYPE_WRIST_ATTIRE"):
			if (func_713(joaat("CI_CATEGORY_WARDROBE_COATS"), &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case joaat("MP_COMPONENT_TYPE_LOADOUT_7"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_5"):
		case joaat("MP_COMPONENT_TYPE_LOADOUT_6"):
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = func_714(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_714(Global_1946054.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; // curOff = 583
				iVar3 = func_334(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_331(Global_1946054.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
					return false;
				}
				if (iVar3 == joaat("CI_CATEGORY_WARDROBE_CHAPS") || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946054.f_57[iVar6 /*11*/] && func_715(Global_1946054.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_BOOTS_DO_NOT_SUPPORT_THIS");
						return false;
					}
					if (Global_1946054.f_1497.f_1[iVar5 /*3*/] == Global_1946054.f_57[iVar5 /*11*/])
					{
						*uParam2 = joaat("MPC_ACTION_NOT_AVAILABLE_NEED_BOOTS");
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_543()
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), (1.0f - (Global_40.f_11095.f_64 + Global_1347477.f_175)));
}

void func_544()
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

int func_545()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_193(func_716(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BRACELET_GOLD"):
		case joaat("PROVISION_CC_VINTAGE_HANDCUFFS"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH");
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("PROVISION_BRACELET_SILVER"):
		case joaat("PROVISION_RC_QUARTZ_CHUNK"):
			return joaat("PROVISION_TALISMAN_BEAR_CLAW");
		case joaat("PROVISION_RF_WOOD_COBALT"):
		case joaat("PROVISION_EARRING_GOLD"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("PROVISION_TALISMAN_BOAR_TUSK");
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("PROVISION_EARRING_SILVER"):
		case joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"):
			return joaat("PROVISION_TALISMAN_BUFFALO_HORN");
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("PROVISION_TALISMAN_RAVEN_CLAW");
	}
	return 0;
}

bool func_547(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			if (iParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				iVar0 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_CC_VINTAGE_HANDCUFFS"))
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_BRACELET_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				iVar1 = joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
			}
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			if (iParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				iVar0 = joaat("PROVISION_RC_QUARTZ_CHUNK");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RC_QUARTZ_CHUNK"))
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_BRACELET_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				iVar1 = joaat("PROVISION_RC_QUARTZ_CHUNK");
			}
			break;
		case joaat("PROVISION_TALISMAN_BOAR_TUSK"):
			if (iParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RF_WOOD_COBALT");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else if (iParam1 == joaat("PROVISION_RF_WOOD_COBALT"))
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_GOLD");
			}
			else
			{
				iVar0 = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				iVar1 = joaat("PROVISION_RF_WOOD_COBALT");
			}
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			if (iParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				iVar0 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else if (iParam1 == joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT"))
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_EARRING_SILVER");
			}
			else
			{
				iVar0 = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				iVar1 = joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
			}
			break;
	}
	if (func_193(iVar0, 1, 0) && func_193(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("PROVISION_TRINKET_FOX_CLAW");
		case joaat("PROVISION_LIONS_PAW"):
			return joaat("PROVISION_TRINKET_LION_PAW");
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_RAM_HORN");
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("PROVISION_TRINKET_WOLF_HEART");
		default:
			break;
	}
	return 0;
}

bool func_549(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_717(iParam0);
	if (iVar0 != -15)
	{
		func_710(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_718(iVar0, 1);
	}
	return false;
}

int func_550(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> /*104*/ sVar1;
	int iVar24;
	int iVar25;

	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1.0f;
	if (bParam1 && func_193(joaat("PROVISION_TRINKET_ELK_ANTLER"), 1, 0))
	{
		fVar0 += 0.1f;
	}
	sVar1.f_1 = 10;
	sVar1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, true, true, iParam0, &sVar1, 0);
	iVar24 = 0;
	while (iVar24 < sVar1.f_0)
	{
		if (sVar1.f_1[iVar24] == joaat("CURRENCY_CASH"))
		{
			return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
		}
		else
		{
			iVar25 = sVar1.f_1[iVar24];
			if (func_287(iVar25, 0) && func_331(iVar25, joaat("CI_TAG_ITEM_MONEY")))
			{
				return BUILTIN::CEIL(((float)sVar1.f_12[iVar24] * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_551(int iParam0)
{
	Global_40.f_12004.f_6 |= iParam0;
}

void func_552(int iParam0)
{
	Global_40.f_12004.f_1 |= iParam0;
}

void func_553(int iParam0)
{
	Global_40.f_12004.f_3 |= iParam0;
}

void func_554(int iParam0)
{
	Global_40.f_12004.f_5 |= iParam0;
}

int func_555(int iParam0)
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
	switch (iParam0)
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
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_564(iVar12);
		iVar8 = func_565(iVar12);
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
	if (iParam0 != 2)
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

void func_556(int iParam0)
{
	Global_40.f_12004.f_2 |= iParam0;
}

int func_557()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_719(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_558()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("ROCK_CARVINGS"), 0);
}

bool func_559(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_02"))
	{
		if (bParam3)
		{
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar1))
		{
			*sParam2++;
		}
		if (func_698(iVar0) && func_698(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == joaat("TAXIDERMY_ORDER_03"))
	{
		if (bParam3)
		{
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar1))
		{
			*sParam2++;
		}
		if (func_698(iVar2))
		{
			*sParam2++;
		}
		if ((func_698(iVar0) && func_698(iVar1)) && func_698(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_698(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_698(iParam1))
			{
				*sParam2 -= iParam4;
			}
		}
		if (func_698(iVar0))
		{
			*sParam2++;
		}
		if (func_698(iVar1))
		{
			*sParam2++;
		}
		if (func_698(iVar2))
		{
			*sParam2++;
		}
		if (func_698(iVar3))
		{
			*sParam2++;
		}
		if (((func_698(iVar0) && func_698(iVar1)) && func_698(iVar2)) && func_698(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_560(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case joaat("WS_DOWNS_RANCH_DOWNS"):
			func_720(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_721(joaat("WS_DOWNS_RANCH_EDITH"));
			func_721(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_721(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EDITH"):
			func_721(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_720(joaat("WS_DOWNS_RANCH_EDITH"));
			func_721(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_721(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_EMPTY"):
			func_721(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_721(joaat("WS_DOWNS_RANCH_EDITH"));
			func_720(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_721(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_DOWNS_RANCH_REPOPULATED"):
			func_721(joaat("WS_DOWNS_RANCH_DOWNS"));
			func_721(joaat("WS_DOWNS_RANCH_EDITH"));
			func_721(joaat("WS_DOWNS_RANCH_EMPTY"));
			func_720(joaat("WS_DOWNS_RANCH_REPOPULATED"));
			break;
		case joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"):
		case joaat("WS_PRONGHORN_RANCH_EXIST"):
		case joaat("WS_PRONGHORN_RANCH_EMPTY"):
			func_721(joaat("WS_PRONGHORN_RANCH_EXIST"));
			func_721(joaat("WS_PRONGHORN_RANCH_EMPTY"));
			func_721(joaat("WS_PRONGHORN_RANCH_FENCE_FIXED"));
			func_720(iParam0);
			break;
		case joaat("WS_COLTER_STAGE_THAWED_SNOW"):
		case joaat("WS_COLTER_STAGE_CABIN_BURNING"):
		case joaat("WS_COLTER_STAGE_WINTER1_INTRO"):
		case joaat("WS_COLTER_STAGE_HIGH_SNOW"):
		case joaat("WS_COLTER_STAGE_MP"):
		case joaat("WS_COLTER_STAGE_MEDIUM_SNOW"):
		case joaat("WS_COLTER_STAGE_MUDTOWN1"):
			func_722();
			func_720(iParam0);
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
			func_723();
			func_720(iParam0);
			break;
		case joaat("WS_GUARMA3_TOWER_NORMAL"):
			func_721(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_721(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_720(joaat("WS_GUARMA3_TOWER_NORMAL"));
			break;
		case joaat("WS_GUARMA3_TOWER_FRAG"):
			func_721(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_721(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_720(joaat("WS_GUARMA3_TOWER_FRAG"));
			break;
		case joaat("WS_GUARMA3_TOWER_DESTROYED"):
			func_721(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_721(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_720(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			break;
		case joaat("WS_RHODES_GRAVE_NORMAL"):
			func_721(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_721(joaat("WS_RHODES_GRAVE_OPEN"));
			func_720(joaat("WS_RHODES_GRAVE_NORMAL"));
			break;
		case joaat("WS_RHODES_GRAVE_FRESHLY_DUG"):
			func_721(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_721(joaat("WS_RHODES_GRAVE_OPEN"));
			func_720(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			break;
		case joaat("WS_RHODES_GRAVE_OPEN"):
			func_721(joaat("WS_RHODES_GRAVE_NORMAL"));
			func_721(joaat("WS_RHODES_GRAVE_FRESHLY_DUG"));
			func_720(joaat("WS_RHODES_GRAVE_OPEN"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_UP"):
			func_721(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			func_720(joaat("WS_RHODES_SALOON_TABLE_UP"));
			break;
		case joaat("WS_RHODES_SALOON_TABLE_DOWN"):
			func_721(joaat("WS_RHODES_SALOON_TABLE_UP"));
			func_720(joaat("WS_RHODES_SALOON_TABLE_DOWN"));
			break;
		case joaat("WS_UTOPIA_TREE_STANDING"):
			func_721(joaat("WS_UTOPIA_TREE_MISSION"));
			func_721(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_721(joaat("WS_UTOPIA_TREE_STUMP"));
			func_720(joaat("WS_UTOPIA_TREE_STANDING"));
			break;
		case joaat("WS_UTOPIA_TREE_MISSION"):
			func_721(joaat("WS_UTOPIA_TREE_STANDING"));
			func_721(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_721(joaat("WS_UTOPIA_TREE_STUMP"));
			func_720(joaat("WS_UTOPIA_TREE_MISSION"));
			break;
		case joaat("WS_UTOPIA_TREE_FALLEN"):
			func_721(joaat("WS_UTOPIA_TREE_STANDING"));
			func_721(joaat("WS_UTOPIA_TREE_MISSION"));
			func_721(joaat("WS_UTOPIA_TREE_STUMP"));
			func_720(joaat("WS_UTOPIA_TREE_FALLEN"));
			break;
		case joaat("WS_UTOPIA_TREE_STUMP"):
			func_721(joaat("WS_UTOPIA_TREE_STANDING"));
			func_721(joaat("WS_UTOPIA_TREE_MISSION"));
			func_721(joaat("WS_UTOPIA_TREE_FALLEN"));
			func_720(joaat("WS_UTOPIA_TREE_STUMP"));
			break;
		case joaat("WS_MICAH_CAMP_EMPTY"):
			func_721(joaat("WS_MICAH_CAMP"));
			func_721(joaat("WS_MICAH_CAMP_POST"));
			func_720(joaat("WS_MICAH_CAMP_EMPTY"));
			break;
		case joaat("WS_MICAH_CAMP"):
			func_721(joaat("WS_MICAH_CAMP_EMPTY"));
			func_721(joaat("WS_MICAH_CAMP_POST"));
			func_720(joaat("WS_MICAH_CAMP"));
			break;
		case joaat("WS_MICAH_CAMP_POST"):
			func_721(joaat("WS_MICAH_CAMP_EMPTY"));
			func_721(joaat("WS_MICAH_CAMP"));
			func_720(joaat("WS_MICAH_CAMP_POST"));
			break;
		case joaat("WS_NBX_ART_EXHIBIT_OPEN"):
			if (bParam1)
			{
				func_721(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				func_720(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
			}
			else
			{
				func_721(joaat("WS_NBX_ART_EXHIBIT_OPEN"));
				func_721(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
			}
			break;
		case joaat("WS_NBX_ART_EXHIBIT_CANCELLED"):
			if (func_623(joaat("WS_NBX_ART_EXHIBIT_OPEN")))
			{
				if (bParam1)
				{
					func_720(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
				else
				{
					func_721(joaat("WS_NBX_ART_EXHIBIT_CANCELLED"));
				}
			}
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"):
			func_721(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			func_720(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			break;
		case joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"):
			func_721(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_OFF"));
			func_720(joaat("WS_HERE_KITTY_3_CLUE_TRAIL_ON"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_GONE"):
			func_721(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_720(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_TRASHED"):
			func_721(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_720(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"):
			func_721(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_720(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"):
			func_721(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			func_720(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			break;
		case joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"):
			func_721(joaat("WS_HERE_KITTY_WAGONS_GONE"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_TRASHED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_PART_FIXED"));
			func_721(joaat("WS_HERE_KITTY_WAGONS_FIXED_WITH_CAMP"));
			func_720(joaat("WS_HERE_KITTY_WAGONS_FIXED_NO_CAMP"));
			break;
		case joaat("WS_NEW_COM_BANK_BEFORE"):
			func_721(joaat("WS_NEW_COM_BANK_START"));
			func_721(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_721(joaat("WS_NEW_COM_BANK_AFTER"));
			func_721(joaat("WS_NEW_COM_BANK_POST"));
			func_720(joaat("WS_NEW_COM_BANK_BEFORE"));
			break;
		case joaat("WS_NEW_COM_BANK_START"):
			func_721(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_721(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_721(joaat("WS_NEW_COM_BANK_AFTER"));
			func_721(joaat("WS_NEW_COM_BANK_POST"));
			func_720(joaat("WS_NEW_COM_BANK_START"));
			break;
		case joaat("WS_NEW_COM_BANK_SHOOTOUT"):
			func_721(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_721(joaat("WS_NEW_COM_BANK_START"));
			func_721(joaat("WS_NEW_COM_BANK_AFTER"));
			func_721(joaat("WS_NEW_COM_BANK_POST"));
			func_720(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			break;
		case joaat("WS_NEW_COM_BANK_AFTER"):
			func_721(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_721(joaat("WS_NEW_COM_BANK_START"));
			func_721(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_721(joaat("WS_NEW_COM_BANK_POST"));
			func_720(joaat("WS_NEW_COM_BANK_AFTER"));
			break;
		case joaat("WS_NEW_COM_BANK_POST"):
			func_721(joaat("WS_NEW_COM_BANK_BEFORE"));
			func_721(joaat("WS_NEW_COM_BANK_START"));
			func_721(joaat("WS_NEW_COM_BANK_SHOOTOUT"));
			func_721(joaat("WS_NEW_COM_BANK_AFTER"));
			func_720(joaat("WS_NEW_COM_BANK_POST"));
			break;
		case joaat("WS_NO_ANIMALS_GRIZZLIES"):
			func_721(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_720(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_LIGHT_ANIMALS_GRIZZLIES"):
			func_721(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_720(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"):
			func_721(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			func_720(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_NORMAL_ANIMALS_GRIZZLIES"):
			func_721(joaat("WS_NO_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_LIGHT_ANIMALS_GRIZZLIES"));
			func_721(joaat("WS_MEDIUM_ANIMALS_GRIZZLIES"));
			func_720(joaat("WS_NORMAL_ANIMALS_GRIZZLIES"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_0"):
			func_720(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_1"):
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_720(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_2"):
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_720(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_STRAWBERRY_HOUSE_STAGE_3"):
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_0"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_1"));
			func_721(joaat("WS_STRAWBERRY_HOUSE_STAGE_2"));
			func_720(joaat("WS_STRAWBERRY_HOUSE_STAGE_3"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_START"):
			func_720(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"):
			func_720(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNING"):
			func_720(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			break;
		case joaat("WS_CALIGA_HALL_TABACCO_BURNT"):
			func_720(joaat("WS_CALIGA_HALL_TABACCO_BURNT"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_START"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_DURING_MISSION"));
			func_721(joaat("WS_CALIGA_HALL_TABACCO_BURNING"));
			break;
		case joaat("WS_VALENTINE_BURIAL_DRUNK"):
			func_720(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			func_721(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_DRUNK"):
			func_720(joaat("WS_VALENTINE_BURIAL_POST_DRUNK"));
			func_721(joaat("WS_VALENTINE_BURIAL_DRUNK"));
			break;
		case joaat("WS_VALENTINE_BURIAL_MURDER"):
			func_720(joaat("WS_VALENTINE_BURIAL_MURDER"));
			func_721(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			break;
		case joaat("WS_VALENTINE_BURIAL_POST_MURDER"):
			func_720(joaat("WS_VALENTINE_BURIAL_POST_MURDER"));
			func_721(joaat("WS_VALENTINE_BURIAL_MURDER"));
			break;
		case 0:
			func_720(0);
			func_721(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_721(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_BURNED"):
			func_720(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			func_721(0);
			func_721(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			break;
		case joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"):
			func_720(joaat("WS_BRAITHWAITE_MANSION_ENDLESS_SUMMER"));
			func_721(0);
			func_721(joaat("WS_BRAITHWAITE_MANSION_BURNED"));
			break;
		case joaat("WS_GRAVE_ARTHUR_GOOD"):
			func_720(joaat("WS_GRAVE_ARTHUR_GOOD"));
			func_721(joaat("WS_GRAVE_ARTHUR_BAD"));
			break;
		case joaat("WS_GRAVE_ARTHUR_BAD"):
			func_720(joaat("WS_GRAVE_ARTHUR_BAD"));
			func_721(joaat("WS_GRAVE_ARTHUR_GOOD"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT"):
			func_720(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"):
			func_720(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"):
			func_720(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			break;
		case joaat("WS_OLDFORTWALLACE_WALL_BROKEN"):
			func_720(joaat("WS_OLDFORTWALLACE_WALL_BROKEN"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_INTACT_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_BROKEN_NTS3"));
			func_721(joaat("WS_OLDFORTWALLACE_WALL_INTACT"));
			break;
		case joaat("WS_SHADY_BELLE_HIDEOUT"):
			if (bParam1)
			{
				func_720(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			else
			{
				func_721(joaat("WS_SHADY_BELLE_HIDEOUT"));
			}
			func_721(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_721(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_SHADY_BELLE_ABANDON"):
			func_720(joaat("WS_SHADY_BELLE_ABANDON"));
			func_721(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_721(joaat("WS_SHADY_BELLE_HIDEOUT"));
			break;
		case joaat("WS_SHADY_BELLE_GANG_0_2"):
			func_720(joaat("WS_SHADY_BELLE_GANG_0_2"));
			func_721(joaat("WS_SHADY_BELLE_HIDEOUT"));
			func_721(joaat("WS_SHADY_BELLE_ABANDON"));
			break;
		case joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_720(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_721(joaat("WS_BLACKWATER_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		case joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"):
			if (bParam1)
			{
				func_720(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			else
			{
				func_721(joaat("WS_SAINT_DENIS_PHOTOGRAPHER_FURNITURE"));
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_623(iParam0))
				{
					func_720(iParam0);
				}
			}
			else if (func_623(iParam0))
			{
				func_721(iParam0);
			}
			break;
	}
}

void func_561(int iParam0)
{
	if (!func_724(iParam0))
	{
		func_726(func_725(iParam0));
	}
}

int func_562()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_724(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("EXOTIC_ITEMS"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_563(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_564(iVar12);
		iVar8 = func_565(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 += iVar5;
		}
		else
		{
			iVar0 += (iVar1 + iParam1);
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 += iVar5;
	}
	else
	{
		iVar0 += iVar1;
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 += iVar6;
		}
		else
		{
			iVar0 += (iVar2 + iParam1);
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 += iVar6;
	}
	else
	{
		iVar0 += iVar2;
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 += iVar7;
		}
		else
		{
			iVar0 += (iVar3 + iParam1);
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 += iVar7;
	}
	else
	{
		iVar0 += iVar3;
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 += iVar8;
			}
			else
			{
				iVar0 += (iVar4 + iParam1);
			}
		}
		else if (iVar4 >= iVar8)
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

int func_564(int iParam0)
{
	int iVar0;

	if (func_193(iParam0, 1, 0))
	{
		iVar0 = func_212(iParam0, 0, 0);
	}
	return iVar0;
}

int func_565(int iParam0)
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

int func_566(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0);
}

void func_567(int iParam0, int iParam1)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, iParam1);
}

int func_568(int iParam0, int iParam1)
{
	struct<4> /*32*/ sVar0;
	var uVar5;

	if (!func_682(17, &sVar0))
	{
		return 0;
	}
	sVar0.f_2 = iParam1;
	sVar0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &sVar0);
	return uVar5;
}

void func_569(int iParam0, int iParam1, char[4] cParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_568(iParam1, 5) || iParam0 == func_568(iParam1, 6)) || iParam0 == func_568(iParam1, 7)) || iParam0 == func_568(iParam1, 8)) || iParam0 == func_568(iParam1, 9))
	{
		func_559(iParam1, iParam0, &cParam2, 0, iParam3, bParam4);
		func_327(51, 0, 0, iParam1, cParam2, 0, -1, 0);
		func_329(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_570(int iParam0, int iParam1, bool bParam2)
{
	char[] cVar0[8];

	cVar0 = 1;
	if ((((iParam0 == func_568(iParam1, 5) || iParam0 == func_568(iParam1, 6)) || iParam0 == func_568(iParam1, 7)) || iParam0 == func_568(iParam1, 8)) || iParam0 == func_568(iParam1, 9))
	{
		if (func_559(iParam1, iParam0, &cVar0, 0, 0, 0))
		{
			func_327(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_329(51, 0, 0, cVar0, func_522(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_327(51, iParam0, 0, iParam1, cVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_329(51, 0, 0, cVar0, func_522(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_571()
{
	if (func_194(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
	{
		return true;
	}
	return false;
}

void func_572(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
}

void func_573(int iParam0)
{
	if (!func_727(iParam0))
	{
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(iParam0, 1);
	}
}

void func_574(int iParam0)
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(iParam0, 1);
}

void func_575(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REVOLVER");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REVOLVER_EXPRESS");
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REVOLVER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REVOLVER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = joaat("PISTOL_AMMO_BOX");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_PISTOL_EXPRESS");
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("PISTOL_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_PISTOL_HIGH_VELOCITY");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = joaat("RIFLE_AMMO_BOX");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_RIFLE_EXPRESS");
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("RIFLE_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_RIFLE_HIGH_VELOCITY");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = joaat("REPEATER_AMMO_BOX");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_REPEATER");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_EXPRESS");
			*uParam2 = joaat("AMMO_REPEATER_EXPRESS");
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = joaat("REPEATER_AMMO_BOX_HIGH_VELOCITY");
			*uParam2 = joaat("AMMO_REPEATER_HIGH_VELOCITY");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_USED");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = joaat("SHOTGUN_AMMO_BOX_SLUG");
			*uParam2 = joaat("AMMO_SHOTGUN_SLUG");
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = joaat("22_AMMO_BOX");
			*uParam2 = joaat("AMMO_22");
			break;
	}
}

int func_576(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946054.f_57[iVar0 /*11*/].f_8 == iParam0)
		{
			return func_728(iVar0, 1);
		}
		iVar0++;
	}
	return joaat("MP_COMPONENT_TYPE_END");
}

bool func_577(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	int iVar6;

	func_729();
	if (iParam2 == 39)
	{
		sVar0 = { func_398(iParam0, 1, 0) /*5*/ };
		iParam2 = func_454(func_576(sVar0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_331(iParam0, joaat("CI_TAG_ITEM_TALISMAN")) && func_712(&(Global_1946054.f_1378)) >= 2)
	{
		return false;
	}
	if ((func_580((1 << 15)) && iParam2 == 10) && iParam0 != Global_1946054.f_57[iParam2 /*11*/])
	{
		func_730(func_728(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_731(iParam2);
	func_732(iParam2, iVar5);
	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_659(&(Global_1946054.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		func_659(&(Global_1946054.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	func_648(&(Global_1946054.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946054.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_733(iParam0, iParam2, iParam1, func_23() != -1);
	if (bParam4)
	{
		func_734(&(Global_1946054.f_1378), 1, 3);
	}
	else
	{
		func_734(&(Global_1946054.f_1378), 1, 0);
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
				func_735(func_728(Global_1946054.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_578(bool bParam0, bool bParam1, bool bParam2)
{
	func_736(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
}

void func_579(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> /*32*/ sVar0;

	if (bParam4)
	{
		func_737((1 << 14));
	}
	sVar0.f_0 = iParam0;
	sVar0.f_1 = iParam1;
	sVar0.f_2 = iParam2;
	sVar0.f_3 = iParam3;
	func_738(sVar0);
}

bool func_580(int iParam0)
{
	return (Global_1946054 & iParam0) != 0;
}

void func_581()
{
	func_739(&(Global_1946054.f_2776));
	func_740((1 << 15));
	func_735(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8, 6);
}

int func_582(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_454(iParam0, 1);
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

void func_583(int iParam0)
{
	struct<4> /*32*/ sVar0;

	if (func_741(iParam0, (1 << 12)))
	{
		Global_1946054.f_858++;
	}
	if (Global_1946054.f_858 <= 0)
	{
		return;
	}
	sVar0.f_1 = iParam0;
	sVar0.f_0 = 34;
	func_742(sVar0);
}

void func_584(int iParam0, int iParam1, int iParam2)
{
	struct<4> /*32*/ sVar0;

	sVar0.f_1 = iParam2;
	sVar0.f_0 = iParam0;
	sVar0.f_2 = iParam1;
	func_742(sVar0);
}

bool func_585(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

bool func_586(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_587(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			return Global_1946054.f_2657.f_21;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			return Global_1946054.f_2657.f_23;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			return Global_1946054.f_2657.f_22;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			return Global_1946054.f_2657.f_24;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			return Global_1946054.f_2657.f_25;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (bParam1)
			{
				return Global_1946054.f_2657.f_20;
			}
			else
			{
				return func_743();
			}
			break;
	}
	return 0;
}

bool func_588(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_589(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_588(iParam0))
	{
		return;
	}
	if (func_744(iParam0))
	{
		return;
	}
	if (!func_745(iParam0))
	{
		func_746(iParam0, 1, 0);
	}
	iVar0 = func_651(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_652(iParam0, (1 << 9)))
		{
			func_579(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_747() && !bParam1) && !func_33(0, 0, 1))
	{
		func_748(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_468(iParam0, 6);
	if (bParam2)
	{
		if (!func_33(0, 0, 1))
		{
			func_517(1, 4);
		}
	}
}

bool func_590(int iParam0, bool bParam1)
{
	return func_587(iParam0, 0) < func_749(iParam0, bParam1);
}

bool func_591(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_592(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return false;
	}
	return Global_1946054.f_1497.f_1[func_454(iParam0, 1) /*3*/] != Global_1946054.f_57[func_454(iParam0, 1) /*11*/];
}

void func_593(int iParam0, int iParam1)
{
	if (func_331(iParam1, joaat("CI_TAG_ITEM_EQUIPMENT")))
	{
		func_750(iParam1, 0);
	}
	else if (func_331(iParam1, 930141731))
	{
		func_750(iParam1, 1);
		func_751(iParam0);
	}
}

void func_594(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_FEMALE")) || (iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[iVar0] == joaat("LOOTER_PED_IS_MALE"))) || (iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_SKINNING"))) || (iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[iVar0] == joaat("LOOT_TYPE_NORMAL")))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_595(int iParam0, var uParam1, var uParam2, int iParam3)
{
	var uVar0;
	struct<14> /*112*/ sVar1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_752(uParam1);
	LOCAL_STORE_S(&uVar0, iParam0);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	sVar1.f_2.f_1 = 10;
	sVar1.f_0 = iParam3;
	sVar1.f_2 = { *uParam1 /*12*/ };
	func_753(uParam2, iParam0, sVar1);
	return 1;
}

int func_596(int iParam0)
{
	return Global_1900073.f_159[iParam0];
}

char* func_597(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_598(int iParam0)
{
	var uVar0;

	if (!func_754(iParam0, &uVar0, joaat("INVENTORY"), 0, 0, joaat("UI_ITEMVIEWER")))
	{
		return joaat("_PLACEHOLDER");
	}
	return uVar0;
}

int func_599(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_755(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_600()
{
	return !Global_1911774;
}

void func_601(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_602(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_603(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_604(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_605()
{
	if (func_138())
	{
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();
	}
	return false;
}

void func_606(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_756((Global_40.f_4283.f_325 + iParam0));
}

void func_607(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_605())
	{
		func_599(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS_SPECIAL"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
	else
	{
		func_599(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_GANG_SAVINGS"), 0, joaat("COLOR_GOLD"), 0, 0, 0, 1);
	}
}

struct<18> /*144*/ func_608(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> /*32*/ func_609(bool bParam0)
{
	int iVar0;

	iVar0 = func_411(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_401(joaat("CARRIED_WEAPONS"), func_440(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_401(joaat("CARRIED_WEAPONS"), func_440(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_401(joaat("CARRIED_WEAPONS"), func_440(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

void func_610(var uParam0, struct<4> /*32*/ sParam1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&sParam1))
	{
		uParam0->f_9 = { sParam1 /*4*/ };
	}
}

bool func_611(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_411(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_612(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_619(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_337(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_411(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_613(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	if (func_23() == -1)
	{
		if (func_320(43))
		{
			if (func_331(iParam0, 412399755))
			{
				func_561(joaat("EXOTIC_STAGE_01"));
				if (func_562() == 0)
				{
					func_517(0, 10);
					iVar0 = func_757(iParam0, iParam1, 1);
					if (((iParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || iParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH")) || iParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY")) || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_OF_NIGHT"))
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_01"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_320(44))
		{
			if (func_331(iParam0, 709057512))
			{
				func_561(joaat("EXOTIC_STAGE_02"));
				if (func_562() == 1)
				{
					func_517(0, 10);
					iVar0 = func_757(iParam0, iParam1, 2);
					if ((iParam0 == joaat("PROVISION_HERON_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_LADY_SLIPPER")) || iParam0 == joaat("PROVISION_RO_FLOWER_MOCCASIN"))
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_02"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(45))
		{
			if (func_331(iParam0, -1478961327))
			{
				func_561(joaat("EXOTIC_STAGE_03"));
				if (func_562() == 2)
				{
					func_517(0, 10);
					iVar0 = func_757(iParam0, iParam1, 4);
					if (((iParam0 == joaat("PROVISION_GATOR_EGG") || iParam0 == joaat("PROVISION_RO_FLOWER_ACUNAS_STAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_CIGAR")) || iParam0 == joaat("PROVISION_RO_FLOWER_GHOST"))
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_03"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(46))
		{
			if (func_331(iParam0, -1238404098))
			{
				func_561(joaat("EXOTIC_STAGE_04"));
				if (func_562() == 3)
				{
					func_517(0, 10);
					iVar0 = func_757(iParam0, iParam1, 8);
					if (((iParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || iParam0 == joaat("PROVISION_RO_FLOWER_NIGHT_SCENTED")) || iParam0 == joaat("PROVISION_RO_FLOWER_RAT_TAIL")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPIDER"))
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_04"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_320(47))
		{
			if (func_331(iParam0, 1160548794))
			{
				func_561(joaat("EXOTIC_STAGE_05"));
				if (func_562() == 4)
				{
					func_517(0, 10);
					iVar0 = func_757(iParam0, iParam1, 16);
					if (((iParam0 == joaat("PROVISION_RO_FLOWER_CLAMSHELL") || iParam0 == joaat("PROVISION_RO_FLOWER_DRAGONS")) || iParam0 == joaat("PROVISION_RO_FLOWER_SPARROWS")) || iParam0 == joaat("PROVISION_RO_FLOWER_QUEENS"))
					{
						if (func_564(iParam0) < func_565(iParam0))
						{
							func_327(43, iParam0, iParam1, joaat("EXOTIC_STAGE_05"), iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_614(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_411(0);
	*uParam1 = { func_401(iParam0, func_609(0), iParam3, 0) /*4*/ };
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

bool func_615(int iParam0, bool bParam1)
{
	if (func_334(iParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
	{
		if (bParam1)
		{
			return func_205(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> /*32*/ func_616(bool bParam0)
{
	int iVar0;

	iVar0 = func_411(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_401(joaat("EMOTE_ITEM"), func_440(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_401(joaat("EMOTE_ITEM"), func_440(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

bool func_617(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_334(iParam0);
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

bool func_618(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_411(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_619(int iParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(iParam0))
	{
		return true;
	}
	return false;
}

int func_620(struct<4> /*32*/ sParam0, bool bParam4, bool bParam5)
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
	if (!func_618(sParam0, &sVar1, 1, 0))
	{
		return iVar0;
	}
	if (sVar1.f_10 == bParam4)
	{
		return iVar0;
	}
	iVar15 = func_330(sVar1.f_4);
	if (iVar15 == joaat("HORSE"))
	{
		sVar16 = { func_758(sParam0, 1) /*29*/ };
		sVar16.f_10 = bParam4;
		iVar0 = func_759(joaat("UPDATE"), &sVar16, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == joaat("CLOTHING"))
	{
		sVar45 = { func_760(sParam0, 1) /*18*/ };
		sVar45.f_10 = bParam4;
		iVar0 = func_761(joaat("UPDATE"), &sVar45, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		sVar63 = { func_762(&sVar1) /*17*/ };
		sVar63.f_10 = bParam4;
		iVar0 = func_763(joaat("UPDATE"), &sVar63, bParam5);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_621(int iParam0)
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

int func_622(int iParam0)
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

bool func_623(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_764(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40497[iVar1], iVar2);
}

bool func_624(int iParam0)
{
	if (!func_15(iParam0))
	{
		return false;
	}
	switch (func_39(iParam0))
	{
		case 1:
			switch (func_100(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_100(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_625(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iVar2, iVar1);
		}
		iVar0++;
	}
	func_766(func_765(iParam0), 6);
}

void func_626(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_411(0);
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_334(iVar1) == iParam0)
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_767(func_765(iParam0), 6);
}

int func_627(int iParam0)
{
	int iVar0;

	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1898164.f_1[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_628(int iParam0)
{
	struct<5> /*40*/ sVar0;

	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164.f_162 == 1)
	{
		Global_1898164.f_162 = 0;
		Global_1898164.f_1[0 /*5*/] = { sVar0 /*5*/ };
		return 1;
	}
	Global_1898164.f_1[iParam0 /*5*/] = { sVar0 /*5*/ };
	Global_1898164.f_162--;
	func_768(iParam0, Global_1898164.f_162);
	return 1;
}

int func_629()
{
	return Global_40.f_11095.f_35;
}

int func_630()
{
	return 4;
}

int func_631()
{
	return Global_40.f_1095.f_3054.f_1;
}

float func_632(int iParam0)
{
	var uVar0;

	uVar0 = Global_1900383.f_393.f_8[iParam0];
	return uVar0;
}

struct<4> /*32*/ func_633()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

int func_634(int iParam0)
{
	int iVar0;

	iVar0 = func_215(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_769(iVar0);
}

int func_635(int iParam0, int iParam1)
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
			func_770(iVar2);
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

void func_636()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

bool func_637(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_638(iParam1);
	func_639(&(Global_1946054.f_964), iVar0, iParam0, joaat("PLAYER_TYPE"), 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

int func_638(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	if (func_23() == -1)
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

void func_639(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_640(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (iParam0 == Global_1946054.f_2657[*iParam1])
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

int func_641(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (!func_640(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_334(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_771(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
		}
		Global_1946054.f_2657[0] = 0;
		return 1;
	}
	Global_1946054.f_2657.f_19--;
	*uParam1--;
	Global_1946054.f_2657[iVar0] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;
	if (func_334(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_771(&(Global_1946054.f_2657.f_26), iVar0, Global_1946054.f_2657.f_19);
	}
	func_772(iParam0, 1);
	return 1;
}

void func_642()
{
	int iVar0;

	if (func_23() == -1)
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

void func_643(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_773(0);
	}
	if (bParam0)
	{
		func_737(8);
		func_737((1 << 9));
	}
	else
	{
		func_737(8);
		func_737(16);
	}
}

int func_644(int iParam0)
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

void func_645(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	Vector3 vVar1;
	Vector3 vVar4;
	int iVar7;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_461(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			iVar7 = func_728(iVar0, 1);
			if (func_774(iVar0, iParam1))
			{
				vVar4 = { func_457(iVar0, -1) /*3*/ };
				if ((vVar4.x != Global_1946054.f_57[iVar0 /*11*/] && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 /*3*/ };
				}
				if (func_775(iVar7, 4))
				{
					func_735(iVar7, 4, 6);
				}
			}
			else
			{
				func_776(iVar7, 4, 6);
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

bool func_646(int iParam0)
{
	int iVar0;
	var uVar1;

	Global_1946054.f_964.f_2 = 0;
	if (func_23() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_639(&(Global_1946054.f_964), iVar0, -367421157, joaat("COMPONENT_TYPE"), 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1946054.f_964), joaat("COMPONENT_TYPE")))
	{
		return false;
	}
	return true;
}

bool func_647(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = joaat("BASE");
	return true;
}

void func_648(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = 12;
	iVar2 = func_334(uParam0->f_1[iParam2 /*3*/]);
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_774(iParam2, (1 << 16)) && uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_732(iVar1, iVar3);
		}
	}
	if (func_592(joaat("MP_COMPONENT_TYPE_LOADOUT_9")) && func_774(iParam2, (1 << 19)))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
		uParam0->f_1[iVar1 /*3*/].f_1 = 0;
		if (bParam4)
		{
			func_732(iVar1, iVar3);
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
						func_732(iVar1, iVar3);
					}
				}
			}
			func_777(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case joaat("CI_CATEGORY_WARDROBE_SHIRT"):
			func_777(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_732(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 525
				func_777(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("BASE"))
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("CLOSED_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_732(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1 /*3*/].f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/].f_1 = joaat("OPEN_COLLAR_ROLLED_SLEEVE");
					if (bParam4)
					{
						func_732(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 656
				func_777(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; // curOff = 691
				func_777(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
					uParam0->f_1[iVar1 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_732(iVar1, iVar3);
					}
				}
				Jump @1415; // curOff = 786
				func_777(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_732(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_732(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (joaat("CI_CATEGORY_WARDROBE_SPATS") == func_334(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_732(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_715(iParam1) && uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/]) && joaat("CI_CATEGORY_WARDROBE_SPATS") == func_334(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_732(iVar1, iVar3);
						}
					}
				}
				Jump @1415; // curOff = 1130
				iVar1 = 36;
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_331(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_732(iVar1, iVar3);
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
						func_732(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && (func_715(Global_1946054.f_1497.f_1[iVar1 /*3*/]) || func_331(Global_1946054.f_1497.f_1[iVar1 /*3*/], -1638171711)))
				{
					uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
					uParam0->f_1[iParam2 /*3*/].f_1 = 0;
					if (bParam4)
					{
						func_732(iVar1, iVar3);
					}
				}
			}
			switch (func_334(iParam1))
			{
				case joaat("CI_CATEGORY_WARDROBE_MASK"):
					iVar1 = 10;
					if (joaat("CI_CATEGORY_WARDROBE_BIG_MASK") == func_334(uParam0->f_1[iVar1 /*3*/]))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_732(iVar1, iVar3);
						}
					}
					break;
				case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
					iVar1 = 12;
					if (joaat("CI_CATEGORY_WARDROBE_MASK") == func_334(uParam0->f_1[iVar1 /*3*/]) || func_331(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
					{
						uParam0->f_1[iVar1 /*3*/] = Global_1946054.f_57[iVar1 /*11*/];
						uParam0->f_1[iVar1 /*3*/].f_1 = 0;
						if (bParam4)
						{
							func_732(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

int func_649()
{
	if (func_23() == -1)
	{
		return Global_26796.f_776;
	}
	return Global_36638.f_45.f_350.f_1011;
}

void func_650(var uParam0, int iParam1, int iParam2)
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 /*3*/ };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 -= (Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1);
}

int func_651(int iParam0)
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

bool func_652(int iParam0, int iParam1)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] & iParam1) != 0;
}

void func_653(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

void func_654()
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
	if (!func_580(1))
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
	TASK::TASK_PLAY_ANIM(Global_35, func_778(), sVar0, 8.0f, -8.0f, -1, 67108880, 0.0f, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_740(1);
	STREAMING::REMOVE_ANIM_DICT(func_778());
}

bool func_655(int iParam0)
{
	return false;
}

int func_656(int iParam0)
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

void func_657(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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
	iVar4 = func_463(iParam0);
	if (iVar4 >= 0 && iVar4 <= 5)
	{
		iVar3 = iVar4;
	}
	if (func_23() != -1)
	{
		return;
	}
	func_729();
	if (bParam5)
	{
		if (!func_779(&(Global_1946054.f_1378), &bVar0, iVar2, iVar3, 1, 0))
		{
			return;
		}
	}
	if (func_580((1 << 15)) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
	{
		func_581();
	}
	func_780(iVar3, 1, 1, 1, 1, 1);
	func_579(31, 0, 0, 0, 0);
	func_583(0);
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
			func_579(2, iVar1, 2, 0, 0);
		}
		else
		{
			func_579(2, iVar1, 3, iParam1, 0);
		}
	}
	else
	{
		func_781(&(Global_1946054.f_1497), iParam1, 1, -1, 1, 1, 1);
	}
}

void func_658(int iParam0)
{
	PED::_SET_PED_DIRT_CLEANED(iParam0, 0.0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(iParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
}

void func_659(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 |= iParam1;
}

bool func_660(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar5;
	struct<10> /*80*/ sVar6;
	struct<4> /*32*/ sVar20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> /*40*/ sVar37;
	struct<4> /*32*/ sVar42;

	if (iParam0 != 0 && iParam1 != 0)
	{
		iVar1 = func_334(iParam1);
		iVar5 = func_432(iParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
			{
				if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
				{
					*uParam4 = { func_398(iParam1, 0, 0) /*5*/ };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_401(iParam1, *uParam4, uParam4->f_4, 0) /*4*/ };
					*iParam2 = uVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			sVar6.f_9 = joaat("SLOTID_NONE");
			sVar20.f_9 = joaat("SLOTID_NONE");
			iVar34 = func_411(0);
			sVar37 = { func_398(iParam1, 0, 0) /*5*/ };
			if (iParam6 != 0)
			{
				sVar37.f_4 = iParam6;
			}
			sVar42 = { func_401(iParam1, sVar37, sVar37.f_4, 0) /*4*/ };
			iVar35 = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(iVar34, &sVar42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(iVar34, &sVar42, iVar36, &sVar6))
				{
					iVar1 = func_334(sVar6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &uVar2))
						{
							if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(iParam0, iVar1, uVar2))
							{
								if (func_404(sVar42, sVar6.f_9, &sVar20, 0))
								{
									uParam4->f_4 = sVar6.f_9;
									*uParam4 = { sVar6.f_5 /*4*/ };
									*uParam3 = { sVar20 /*4*/ };
									*iParam2 = uVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*iParam2 = 0;
	return false;
}

bool func_661(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
	}
	if (func_331(iParam0, 162787671))
	{
		return true;
	}
	return false;
}

bool func_662(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, joaat("CI_TAG_ITEM_HORSE_SADDLE_SPECIAL")))
	{
		return true;
	}
	return false;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 263080063;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -34331381;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -993578318;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 579268144;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 1104489688;
	}
	return 0;
}

int func_664()
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar14;
	bool bVar15;
	struct<4> /*32*/ sVar16;
	int iVar20;
	int iVar21;

	sVar0 = { func_398(856287005, 0, 0) /*5*/ };
	sVar5 = { func_401(856287005, sVar0, sVar0.f_4, 0) /*4*/ };
	iVar10 = func_334(856287005);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		iVar14 = func_286(sVar5, joaat("SLOTID_HORSE_SADDLE"), 0);
	}
	if (!func_287(iVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_432(856287005);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			iVar21 = func_286(sVar5, iVar11, 0);
			if (!func_287(iVar21, 0))
			{
				if (iVar11 == joaat("SLOTID_HORSE_HORN"))
				{
					if (func_662(iVar14) || func_661(iVar14))
					{
					}
					else
					{
						Jump @219; // curOff = 194
						if (iVar11 == joaat("SLOTID_HORSE_STIRRUP"))
						{
							if (func_662(iVar14))
							{
							}
							else
							{
								bVar15 = true;
								Jump @259; // curOff = 222
								if (iVar11 == joaat("SLOTID_HORSE_BLANKET"))
								{
									if (!func_662(iVar14) && func_782(iVar21))
									{
										bVar15 = true;
									}
								}
								if (bVar15)
								{
									if (func_783(iVar11, &sVar16, 1))
									{
										if (!func_406(sVar16, 1))
										{
										}
									}
								}
							}
							iVar9++;
							return 1;
						}
					}
				}
			}
		}
	}
}

bool func_665(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_411(bParam7);
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

bool func_666(var uParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_411(0), uParam0, uParam1, 29, 1))
	{
		return false;
	}
	return true;
}

int func_667(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<37> /*296*/ sVar0;

	if (!func_287(iParam0, 0))
	{
		return 0;
	}
	sVar0.f_4 = 15;
	sVar0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(iParam0, iParam1, &sVar0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = sVar0.f_1;
	return 1;
}

bool func_668(int iParam0)
{
	if (func_784(iParam0, joaat("DEFAULT")) == 0)
	{
		return false;
	}
	return true;
}

int func_669(int iParam0)
{
	if (!func_287(*iParam0, 0))
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

bool func_670(int iParam0, var uParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	int iVar5;
	struct<10> /*80*/ sVar6;
	bool bVar28;
	int iVar29;

	if (!func_287(iParam0, 0))
	{
		return false;
	}
	sVar0 = { func_398(iParam0, 0, 1) /*5*/ };
	iVar5 = joaat("SLOTID_WEAPON_0");
	sVar6.f_9 = joaat("SLOTID_NONE");
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_399((398 + iVar29), 1);
		if (func_400(iParam0, &sVar0, iVar5, 0))
		{
			bVar28 = func_396(iParam0, &sVar6, iVar5);
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

int func_671(int iParam0)
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

float func_672(int iParam0)
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
			return func_785(iParam0);
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
			return func_785(iParam0);
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
			return func_785(iParam0);
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

bool func_673(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_205(18);
		case 2:
			return func_205(20);
		case 1:
			return func_205(19);
		default:
			break;
	}
	return true;
}

void func_674(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	if (func_23() != -1)
	{
		return;
	}
	if (Global_1347477.f_117 || !func_205(31))
	{
		return;
	}
	iVar0 = func_162(iParam0);
	fVar1 = Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_162(iParam0);
	if (func_786(iParam0) & func_787(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_788(fVar1, fParam1);
			if (fParam1 > (float)func_789(iParam0) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_321(func_790(iParam0), 0);
					}
					func_791(iParam0, iVar2, iVar3);
					func_792(iParam0, 7000);
				}
				Global_1347477.f_8 = 1;
			}
		}
	}
	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_675(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_676(int iParam0)
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

void func_677(var uParam0, int iParam1)
{
	uParam0->f_2 |= iParam1;
}

bool func_678(int iParam0, int iParam1)
{
	if (func_23() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_679(int iParam0)
{
	if (func_23() != -1)
	{
		if (func_585(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_585(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_585(iParam0, (1 << 16)) && !func_585(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_585(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_585(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_681()
{
	return Global_1905944.f_5694;
}

bool func_682(int iParam0, var uParam1)
{
	if (!func_793(iParam0))
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

int func_683()
{
	return func_794(Global_40.f_12019);
}

int func_684()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_521(iVar1);
		if (func_193(iVar2, 1, 0) || func_690(func_689(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_685()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_795(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("DINO_BONES"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_686()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_695(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(iVar1, joaat("LEGENDARY_FISH"), 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_687()
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("ROCK_CARVINGS"), 0);
}

int func_688(int iParam0)
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

int func_689(int iParam0)
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

bool func_690(int iParam0)
{
	return (Global_40.f_12019 & iParam0) != 0;
}

char* func_691(int iParam0)
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

int func_692(int iParam0)
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

int func_693(int iParam0)
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

char* func_694(int iParam0)
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

bool func_695(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

char* func_696(int iParam0)
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

char* func_697(int iParam0)
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

bool func_698(int iParam0)
{
	if (func_796(iParam0) && func_193(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_797(iParam0) & func_798(iParam0))
	{
		return true;
	}
	return false;
}

int func_699(int iParam0)
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_700(bool bParam0)
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

void func_701(int iParam0)
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

void func_702(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440 /*PCF_0xDBD31C9C*/, !bParam0);
}

void func_703(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439 /*PCF_0x8519377E*/, !bParam0);
}

void func_704(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438 /*PCF_0x14013CF9*/, !bParam0);
}

void func_705(bool bParam0)
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

void func_706(bool bParam0)
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

void func_707(bool bParam0)
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

int func_708(int iParam0)
{
	if (iParam0 == joaat("MP_COMPONENT_TYPE_END"))
	{
		return 0;
	}
	return Global_1946054.f_1497.f_1[func_454(iParam0, 1) /*3*/];
}

void func_709()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_799();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_200(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_377(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		func_200(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_377(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, joaat("ADD_REASON_DEFAULT"));
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_800(*iParam0);
	iVar1 = func_801(*iParam0);
	iVar2 = func_802(*iParam0);
	iVar3 = func_803(*iParam0);
	iVar4 = func_804(*iParam0);
	iVar5 = func_805(*iParam0);
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
	iVar6 = func_806(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 -= iVar6;
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 -= 12;
		}
		iVar6 = func_806(iVar1, iVar0);
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
	func_807(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_711(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_712(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 22;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_331(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_331(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_331(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_331(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_331(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (uParam0->f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/] && func_331(uParam0->f_1[iVar1 /*3*/], joaat("CI_TAG_ITEM_TALISMAN")))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_713(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = func_454(func_808(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1946054.f_1497.f_1[iVar1 /*3*/] != 0 && Global_1946054.f_1497.f_1[iVar1 /*3*/] != Global_1946054.f_57[iVar1 /*11*/])
	{
		iVar0 = Global_1946054.f_1497.f_1[iVar1 /*3*/];
		if (func_334(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

int func_714(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (iParam0 == Global_1946054.f_57[func_454(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_580((1 << 19)))
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

bool func_715(int iParam0)
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

int func_716(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
		case 7:
			return joaat("PROVISION_LIONS_PAW");
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
		case 14:
			return joaat("PROVISION_CC_VINTAGE_HANDCUFFS");
		case 15:
			return joaat("PROVISION_BRACELET_GOLD");
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
		case 17:
			return joaat("PROVISION_RC_QUARTZ_CHUNK");
		case 18:
			return joaat("PROVISION_BRACELET_SILVER");
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
		case 20:
			return joaat("PROVISION_RF_WOOD_COBALT");
		case 21:
			return joaat("PROVISION_EARRING_GOLD");
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
		case 23:
			return joaat("PROVISION_RS_ABALONE_SHELL_FRAGMENT");
		case 24:
			return joaat("PROVISION_EARRING_SILVER");
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
		default:
			break;
	}
	return 0;
}

int func_717(int iParam0)
{
	return func_809(iParam0, -1);
}

bool func_718(int iParam0, bool bParam1)
{
	return func_810(func_44(), iParam0, bParam1);
}

bool func_719(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

void func_720(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_764(iParam0, 1);
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

void func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_764(iParam0, 1);
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

void func_722()
{
	func_721(joaat("WS_COLTER_STAGE_WINTER1_INTRO"));
	func_721(joaat("WS_COLTER_STAGE_CABIN_BURNING"));
	func_721(joaat("WS_COLTER_STAGE_HIGH_SNOW"));
	func_721(joaat("WS_COLTER_STAGE_MEDIUM_SNOW"));
	func_721(joaat("WS_COLTER_STAGE_THAWED_SNOW"));
	func_721(joaat("WS_COLTER_STAGE_MUDTOWN1"));
	func_721(joaat("WS_COLTER_STAGE_MP"));
}

void func_723()
{
	func_721(joaat("WS_BEECHERS_SHACK"));
	func_721(joaat("WS_BEECHERS_SHACK_WITH_FIRE"));
	func_721(joaat("WS_BEECHERS_CAMP_WITH_SHACK"));
	func_721(joaat("WS_BEECHERS_CAMP_WITH_RUBBLE"));
	func_721(joaat("WS_BEECHERS_CAMP_WITH_SUPPLIES"));
	func_721(joaat("WS_BEECHERS_HOUSE_FINISHED"));
	func_721(joaat("WS_BEECHERS_BARN_FINISHED"));
	func_721(joaat("WS_BEECHERS_HOUSE_DECORATED"));
	func_721(joaat("WS_BEECHERS_HOUSE_ABIGAIL3"));
	func_721(joaat("WS_BEECHERS_HOUSE_FULLY_DECORATED"));
}

bool func_724(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_725(int iParam0)
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

void func_726(int iParam0)
{
	Global_40.f_12019.f_43 |= iParam0;
}

bool func_727(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(iParam0) > 0;
}

int func_728(int iParam0, int iParam1)
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

void func_729()
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

void func_730(int iParam0)
{
	func_735(iParam0, 8, 6);
}

void func_731(int iParam0)
{
	func_811(&(Global_1946054.f_2589), iParam0);
}

void func_732(int iParam0, int iParam1)
{
	func_812(&(Global_1946054.f_2589), iParam0, iParam1);
}

int func_733(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_813(0);
	if (iParam2 != 0 && func_814(iParam0, iVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_647(iParam0, func_728(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_734(var uParam0, bool bParam1, int iParam2)
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

	bVar6 = func_23() != -1;
	iVar7 = func_813(0);
	if (func_580((1 << 15)))
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
			iVar5 = func_728(iVar0, 1);
			if (func_775(iVar5, 8))
			{
			}
			else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_775(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_714(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 += iVar4;
					iVar2++;
				}
				iVar8 = func_815(uParam0);
				if (iVar3 > 0)
				{
					if (!func_580((1 << 19)))
					{
						func_737((1 << 19));
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
							iVar5 = func_728(iVar0, 1);
							if (func_775(iVar5, 8))
							{
							}
							else if (Global_1946054.f_57[iVar0 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_775(iVar5, 6) || uParam0->f_1[iVar0 /*3*/] == Global_1946054.f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_714(uParam0->f_1[iVar0 /*3*/], iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = Global_1946054.f_57[iVar0 /*11*/];
									uParam0->f_1[iVar0 /*3*/].f_1 = 0;
									if (bParam1)
									{
										func_732(iVar0, iParam2);
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
					func_740((1 << 19));
				}
			}
		}
	}
}

void func_735(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_454(iParam0, 1) /*11*/].f_10 -= (Global_1946054.f_57[func_454(iParam0, 1) /*11*/].f_10 & iParam1);
}

void func_736(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_816(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2);
		iVar0++;
	}
	if (func_23() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_817(2, Global_26796.f_776)) || Global_1946054.f_1497 != func_651(0))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_651(Global_40.f_7729);
				Global_1946054.f_1378 = func_651(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_818(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_643(0, 1);
	}
}

void func_737(int iParam0)
{
	Global_1946054 |= iParam0;
}

void func_738(struct<4> /*32*/ sParam0)
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
			if (func_819(sParam0.f_0))
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
			func_820(sParam0.f_0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_850++;
			Global_1946054.f_856 += 1 % 25;
			func_737(8);
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
			if (func_819(sParam0.f_0))
			{
				return;
			}
			func_820(sParam0.f_0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { sParam0 /*4*/ };
			Global_1946054.f_851++;
			func_737(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_584(sParam0.f_0, sParam0.f_1, sParam0.f_2);
			break;
	}
}

void func_739(var uParam0)
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

void func_740(int iParam0)
{
	Global_1946054 -= (Global_1946054 & iParam0);
}

bool func_741(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_742(struct<4> /*32*/ sParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1946054.f_852 >= 20)
	{
		return;
	}
	if (func_819(sParam0.f_0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946054.f_852)
		{
			iVar1 = ((Global_1946054.f_853 + iVar0) % 20);
			if (((Global_1946054.f_769[iVar1 /*4*/] == sParam0.f_0 && Global_1946054.f_769[iVar1 /*4*/].f_2 == sParam0.f_2) && Global_1946054.f_769[iVar1 /*4*/].f_3 == sParam0.f_3) && Global_1946054.f_769[iVar1 /*4*/].f_1 == sParam0.f_1)
			{
				return;
			}
			if (Global_1946054.f_769[iVar1 /*4*/] == 34 && func_819(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_820(sParam0.f_0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { sParam0 /*4*/ };
	Global_1946054.f_852++;
	Global_1946054.f_854 += 1 % 20;
	func_737(8);
}

int func_743()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946054.f_2657.f_19)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_334(iVar1) == joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			if (func_821() != iVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_744(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_652(iParam0, 4))
	{
		return true;
	}
	return false;
}

bool func_745(int iParam0)
{
	if (!func_588(iParam0))
	{
		return false;
	}
	if (func_652(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_746(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_588(iParam0))
	{
		return;
	}
	if (!func_745(iParam0))
	{
		func_468(iParam0, 2);
		if (bParam2)
		{
			if (!func_33(0, 0, 1))
			{
				func_517(1, 4);
			}
		}
		if ((!func_747() && !bParam1) && !func_33(0, 0, 1))
		{
			func_748(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_822(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_747()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

int func_748(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_749(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			iVar0 = Global_1946054.f_2657.f_26.f_1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			iVar0 = Global_1946054.f_2657.f_26.f_2;
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			iVar0 = 1;
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			iVar0 = Global_1946054.f_2657.f_26;
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			if (iVar0 > 0 && !bParam1)
			{
				iVar0--;
			}
			break;
	}
	return iVar0;
}

void func_750(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_823(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_333(50);
			}
			else
			{
				func_333(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_333(51);
			}
			else
			{
				func_333(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!func_824(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 += 0.1f;
				func_360();
			}
			break;
		case 3:
			func_333(24);
			if (bParam1)
			{
				if (!func_824(iVar0))
				{
					Global_40.f_11095.f_60 += 0.1f;
					func_360();
				}
			}
			break;
	}
}

void func_751(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_825(0))
			{
				iVar0++;
			}
			if (func_825(2))
			{
				iVar0++;
			}
			if (func_825(4))
			{
				iVar0++;
			}
			if (!func_826(16))
			{
				if (iVar0 == 1)
				{
					func_827();
					func_321(456, 1);
					func_828(16);
				}
			}
			if (!func_826(32))
			{
				if (iVar0 >= 3)
				{
					func_827();
					func_321(456, 1);
					func_828(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (func_825(1))
			{
				iVar0++;
			}
			if (func_825(3))
			{
				iVar0++;
			}
			if (func_825(7))
			{
				iVar0++;
			}
			if (!func_826(1))
			{
				if (iVar0 == 1)
				{
					func_829();
					func_321(457, 1);
					func_828(1);
				}
			}
			if (!func_826(2))
			{
				if (iVar0 >= 3)
				{
					func_829();
					func_321(457, 1);
					func_828(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (func_825(5))
			{
				iVar0++;
			}
			if (func_825(6))
			{
				iVar0++;
			}
			if (func_825(8))
			{
				iVar0++;
			}
			if (!func_826(4))
			{
				if (iVar0 == 1)
				{
					func_830();
					func_321(455, 1);
					func_828(4);
				}
			}
			if (!func_826(8))
			{
				if (iVar0 >= 3)
				{
					func_830();
					func_321(455, 1);
					func_828(8);
				}
			}
			break;
	}
}

void func_752(var uParam0)
{
	func_594(uParam0, joaat("MULTIPLAYER_GAME"));
	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
	{
		func_594(uParam0, joaat("LOOTER_PED_IS_MALE"));
	}
	else
	{
		func_594(uParam0, joaat("LOOTER_PED_IS_FEMALE"));
	}
}

void func_753(var uParam0, int iParam1, struct<14> /*112*/ sParam2)
{
	int iVar0;
	struct<21> /*168*/ sVar1;

	if (!func_831(uParam0))
	{
		return;
	}
	if (Global_1223851 < 20)
	{
		Global_1223851++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1223851.f_1[iVar0 /*21*/] = { Global_1223851.f_1[iVar0 + 1 /*21*/] /*21*/ };
			iVar0++;
		}
	}
	sVar1.f_7.f_2.f_1 = 10;
	sVar1 = { *uParam0 /*4*/ };
	sVar1.f_4 = iParam1;
	sVar1.f_6 = 1;
	sVar1.f_7 = { sParam2 /*14*/ };
	Global_1223851.f_1[(Global_1223851 - 1) /*21*/] = { sVar1 /*21*/ };
}

bool func_754(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; // curOff = 56
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
					Jump @230; // curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; // curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; // curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_755(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

void func_756(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	sVar0 = { func_62(joaat("GANG_SAVINGS_CASH")) /*2*/ };
	STATS::STAT_ID_SET_INT(&sVar0, iParam0, true);
}

int func_757(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_564(iVar9);
	iVar2 = func_564(iVar10);
	iVar3 = func_564(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_564(iVar12);
	}
	iVar5 = func_565(iVar9);
	iVar6 = func_565(iVar10);
	iVar7 = func_565(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_565(iVar12);
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

struct<29> /*232*/ func_758(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_411(bParam4), &uParam0, &sVar29, 29, 1))
	{
		return sVar0;
	}
	sVar0 = { func_762(&sVar29) /*17*/ };
	sVar0.f_17 = { sVar29.f_16 /*8*/ };
	sVar0.f_25 = sVar29.f_25;
	sVar0.f_26 = sVar29.f_27;
	sVar0.f_27 = sVar29.f_28;
	sVar0.f_28 = sVar29.f_24;
	return sVar0;
}

int func_759(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_832(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_833(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_833(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 29))
	{
		func_833(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<18> /*144*/ func_760(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_411(bParam4), &uParam0, &sVar18, 15, 1))
	{
		return sVar0;
	}
	sVar0 = { func_762(&sVar18) /*17*/ };
	sVar0.f_17 = sVar18.f_14;
	return sVar0;
}

int func_761(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_834(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_833(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_833(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 18))
	{
		func_833(iVar0, 1);
		return iVar0;
	}
	return -1;
}

struct<17> /*136*/ func_762(var uParam0)
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

int func_763(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, joaat("BASKET"), iParam0))
		{
			if (func_835(iVar0, iParam0, uParam1))
			{
				if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar0))
				{
					func_833(iVar0, 1);
					return iVar0;
				}
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iVar0) == 0)
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar0);
			}
			func_833(iVar0, 2);
			return -1;
		}
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, uParam1, 17))
	{
		func_833(iVar0, 1);
		return iVar0;
	}
	return -1;
}

int func_764(int iParam0, int iParam1)
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

int func_765(int iParam0)
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

void func_766(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 -= (Global_1946054.f_2657.f_26.f_6 & iParam0);
}

void func_767(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_6 |= iParam0;
}

void func_768(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_836((iVar0 - 1), iVar0);
			iVar0--;
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_836(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_15(Global_1898164.f_1[0 /*5*/]))
	{
		func_415(Global_1898164.f_1[0 /*5*/], 3);
	}
}

int func_769(int iParam0)
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

int func_770(int iParam0)
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

void func_771(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = func_837(iParam1);
	func_838(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_839(&(uParam0->f_26), iVar1);
		if (func_840(uParam0->f_26, &iVar0))
		{
			func_841(iVar0, iVar1);
		}
	}
}

bool func_772(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_398(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_401(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_472(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_411(0), &sVar5, bParam1);
	return true;
}

void func_773(int iParam0)
{
	Global_1946054.f_978 = iParam0;
}

bool func_774(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[iParam0 /*11*/].f_9 & iParam1) != 0;
}

bool func_775(int iParam0, int iParam1)
{
	return (Global_1946054.f_57[func_454(iParam0, 1) /*11*/].f_10 & iParam1) != 0;
}

void func_776(int iParam0, int iParam1, int iParam2)
{
	Global_1946054.f_57[func_454(iParam0, 1) /*11*/].f_10 |= iParam1;
}

void func_777(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
			func_732(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_732(iVar3, iVar0);
		}
	}
	if (uParam0->f_1[iVar2 /*3*/].f_1 == -1333118809 || uParam0->f_1[iVar2 /*3*/].f_1 == joaat("CUSTOM"))
	{
		uParam0->f_1[iVar2 /*3*/].f_1 = joaat("BASE");
		if (bParam3)
		{
			func_732(iVar2, iVar0);
		}
	}
}

char* func_778()
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

bool func_779(var uParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (!func_842(uParam0, iParam3, iParam2) && !func_456(uParam0, iParam2, bParam1, 0, bParam4, 0, 0))
	{
		return false;
	}
	iVar0 = 10;
	if (func_580((1 << 15)))
	{
		if (!*bParam1 || (*bParam1 && uParam0->f_1[iVar0 /*3*/] != Global_1946054.f_57[iVar0 /*11*/]))
		{
			func_730(joaat("MP_COMPONENT_TYPE_HEADWEAR"));
		}
		else
		{
			func_843(joaat("MP_COMPONENT_TYPE_HEADWEAR"));
		}
	}
	func_734(uParam0, 0, 0);
	func_773(iParam5);
	return true;
}

void func_780(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	if (bParam2)
	{
		if ((iParam0 == -1 || iParam0 == func_649()) || bParam5)
		{
			func_844();
		}
	}
	if (func_23() == -1)
	{
		iVar0 = Global_40.f_7729;
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
		{
			iVar0 = Global_1905941;
		}
		if ((bParam4 && iVar0 > 5) && func_845(Global_1946054.f_1497))
		{
			if ((Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 9)) != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] -= (Global_40.f_7157[Global_40.f_7729 /*3*/] & (1 << 12));
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				iVar0 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= (1 << 12);
				Global_1946054.f_1497 = func_651(Global_40.f_7729);
				Global_1946054.f_1378 = func_651(Global_40.f_7729);
				iParam3 = 1;
			}
		}
		iVar1 = func_656(iVar0);
	}
	if (iParam3 & iVar1)
	{
		func_818(iParam0, 0, 6);
	}
	if (bParam1)
	{
		func_643(0, 1);
	}
	func_773(0);
}

void func_781(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	bVar4 = func_23() != -1;
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
			func_737((1 << 18));
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_846(iParam1, 29, bVar4, 1, 0);
			func_846(iParam1, 31, bVar4, 1, 0);
			func_846(iParam1, 30, bVar4, 1, 0);
			func_846(iParam1, 22, bVar4, 1, 0);
			func_846(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_580((1 << 15)) && func_775(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 8)) && func_774(10, iParam3))
	{
		func_847(iParam1, 0, 1);
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
			iVar3 = func_728(iVar1, 1);
			if (func_775(iVar3, 8))
			{
			}
			else if (Global_1946054.f_57[iVar1 /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[iVar1 /*3*/] == 0)
			{
			}
			else
			{
				iVar2 = uParam0->f_1[iVar1 /*3*/];
				if (!func_774(iVar1, iParam3))
				{
				}
				else if ((func_775(iVar3, 6) || uParam0->f_1[iVar1 /*3*/] == Global_1946054.f_57[iVar1 /*11*/]) || uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
				{
					if (!func_775(iVar3, 1) || bParam2)
					{
						Global_1946054.f_857++;
						if (!bParam6)
						{
							func_846(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1 /*3*/].f_1 == joaat("REMOVE_COMPONENT"))
						{
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = joaat("REMOVE_COMPONENT");
						}
						func_776(iVar3, 1, 6);
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
								func_846(iParam1, iVar1, bVar4, 1, uParam0->f_1[iVar1 /*3*/]);
							}
							Global_1946054.f_2456[iVar1 /*2*/] = uParam0->f_1[iVar1 /*3*/];
							Global_1946054.f_2456[iVar1 /*2*/].f_1 = uParam0->f_1[iVar1 /*3*/].f_1;
							if (func_775(iVar3, 1))
							{
								func_735(iVar3, 1, 6);
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

bool func_782(int iParam0)
{
	if ((((iParam0 == 263080063 || iParam0 == -34331381) || iParam0 == -993578318) || iParam0 == 579268144) || iParam0 == 1104489688)
	{
		return true;
	}
	return false;
}

bool func_783(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<18> /*144*/ sVar2;
	struct<4> /*32*/ sVar20;
	int iVar34;

	if (iParam0 == 0)
	{
		return false;
	}
	sVar2 = { func_608(0, iParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) /*18*/ };
	func_610(&sVar2, func_285());
	if (func_611(&sVar2, &iVar0, &iVar1, 0))
	{
		sVar20.f_9 = joaat("SLOTID_NONE");
		iVar34 = 0;
		while (iVar34 < iVar1)
		{
			if (func_395(&sVar20, iVar34, iVar0, iVar1))
			{
				if (func_287(sVar20.f_4, 0) && !sVar20.f_10)
				{
					if (bParam2 && func_782(sVar20.f_4))
					{
					}
					else
					{
						*uParam1 = { sVar20 /*4*/ };
						func_397(iVar0);
						return true;
					}
				}
			}
			iVar34++;
		}
		func_397(iVar0);
	}
	return false;
}

int func_784(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

float func_785(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = func_671(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = Global_40.f_11095.f_11[iVar4];
			iVar5 = func_279(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_427(iVar6) - func_427(iVar5));
			fVar2 = ((float)iVar1 * 0.25f);
			return fVar2;
		default:
			break;
	}
	return -1.0f;
}

int func_786(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 4:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 1;
		case 2:
			return 1;
		case 8:
			return 1;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 13:
			return 1;
		case 14:
			return 1;
		case 16:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_788(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_279(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_427(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_427(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4.0f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4.0f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_789(int iParam0)
{
	int iVar0;

	if (func_848(iParam0, &iVar0))
	{
		return func_427(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_849())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 0:
			if (func_849())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		case 2:
			if (func_849())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		case 4:
			return 0;
	}
	return 0;
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		case 2:
			return 247;
		case 1:
			return 248;
		default:
			break;
	}
	return -1;
}

void func_791(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> /*48*/ sVar10;

	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 += func_850(iParam0);
	sVar4 = func_429(func_428(iVar3, iParam2));
	sVar6 = func_851(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::VAR_STRING(10, sVar0, func_426(iParam0));
	iVar8 = func_852(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		sVar10.f_0 = sVar7;
		sVar10.f_1 = sVar1;
		sVar10.f_3 = iVar9;
		sVar10.f_2 = iVar8;
		sVar10.f_4 = 1;
		sVar10.f_5 = func_853(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&sVar10);
	}
	func_530(sVar7, sVar1, iVar8, iVar9, joaat("STATS_MENU"), "INPUT_FEED_INTERACT_GENERIC", func_854(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_792(int iParam0, int iParam1)
{
	Global_1347477.f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

bool func_793(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_794(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 & (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_795(int iParam0)
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(iParam0) > 0;
}

bool func_796(int iParam0)
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

int func_797(int iParam0)
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

int func_798(int iParam0)
{
	int iVar0;
	struct<11> /*88*/ sVar1;
	int iVar95;

	sVar1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_855(&iVar0, 0, iVar95, &sVar1) && !func_855(&iVar0, 1, iVar95, &sVar1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(sVar1.f_0))
		{
			func_856(iVar0, &sVar1);
			if (func_287(sVar1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

void func_799()
{
	int iVar0;
	struct<4> /*32*/ sVar30;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
	{
		return;
	}
	iVar0 = 29;
	func_857(Global_35, &iVar0);
	sVar30 = { func_440(0) /*4*/ };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &sVar30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, joaat("REMOVE_REASON_DEFAULT"));
	func_858(0);
	func_859(7);
	func_860(joaat("KIT_BANDANA"), 1, 1, 0);
	if (func_450() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		func_860(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_860(joaat("CLOTHING_SP_MAR_OUTFIT_GUNSLINGER"), 1, 1, 1);
	}
	func_861(Global_35, &iVar0);
}

int func_800(int iParam0)
{
	return ((BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31) * func_862(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_801(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15);
}

int func_802(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31);
}

int func_803(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_804(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63);
}

int func_805(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63);
}

int func_806(int iParam0, int iParam1)
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

void func_807(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_863(iParam0, iParam6);
	func_864(iParam0, iParam5);
	func_865(iParam0, iParam4);
	func_866(iParam0, iParam3);
	func_867(iParam0, iParam2);
	func_868(iParam0, iParam1);
}

int func_808(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return joaat("MP_COMPONENT_TYPE_END");
	}
	return func_576(iVar0);
}

int func_809(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;

	if (iParam1 < 0)
	{
		iParam1 = func_411(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_863(&uVar6, iVar0);
	func_864(&uVar6, iVar1);
	func_865(&uVar6, iVar2);
	func_866(&uVar6, iVar3);
	func_867(&uVar6, iVar4);
	func_868(&uVar6, iVar5);
	return uVar6;
}

bool func_810(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_869(iParam1) || !func_869(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_811(var uParam0, int iParam1)
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
			if ((func_870(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { sVar2 /*2*/ };
			}
			else
			{
				if (func_870(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_871(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_812(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_872(uParam0, 1))
	{
		func_873(uParam0, 1);
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

int func_813(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	iVar0 = 0;
	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_814(int iParam0, int iParam1, int iParam2, bool bParam3)
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

int func_815(var uParam0)
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

void func_816(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] /*3*/ };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_23() == -1)
	{
		func_462(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_26796.f_776);
	}
	else
	{
		func_650(&(Global_1946054.f_1497.f_1[iParam0 /*3*/]), iParam0, Global_36638.f_45.f_350.f_1011);
	}
}

bool func_817(int iParam0, int iParam1)
{
	if (func_23() == -1)
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

void func_818(int iParam0, bool bParam1, int iParam2)
{
	func_465(&(Global_1946054.f_1378), iParam0);
	func_466(2, iParam0, 6);
	if (bParam1)
	{
		func_643(0, 1);
	}
}

bool func_819(int iParam0)
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_820(int iParam0)
{
	Global_1946054.f_529[iParam0]++;
}

int func_821()
{
	return Global_1946054.f_1497;
}

char* func_822(int iParam0)
{
	int iVar0;

	iVar0 = func_651(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_172(iVar0);
}

int func_823(int iParam0)
{
	int iVar0;

	if (func_874(iParam0))
	{
		iVar0 = 0;
	}
	else if (func_875(iParam0))
	{
		iVar0 = 1;
	}
	else if (func_876(iParam0))
	{
		iVar0 = 2;
	}
	else if (func_877(iParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

bool func_824(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_193(func_878(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return true;
	}
	return false;
}

bool func_825(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_193(func_879(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return true;
	}
	return false;
}

bool func_826(int iParam0)
{
	return (Global_40.f_12003 & iParam0) != 0;
}

void func_827()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_377(joaat("UPGRADE_STAMINA_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_162(1);
	func_791(1, iVar0, 0);
}

void func_828(int iParam0)
{
	Global_40.f_12003 |= iParam0;
}

void func_829()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_377(joaat("UPGRADE_DEADEYE_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_162(2);
	func_791(2, iVar0, 0);
}

void func_830()
{
	int iVar0;

	if (func_23() != -1)
	{
		return;
	}
	func_377(joaat("UPGRADE_HEALTH_TANK_1"), 1, joaat("ADD_REASON_DEFAULT"));
	iVar0 = func_162(0);
	func_791(0, iVar0, 0);
}

bool func_831(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_832(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 29, uParam2, 0);
}

void func_833(int iParam0, int iParam1)
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
	func_880(iParam0, iParam1);
}

bool func_834(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 18, uParam2, 0);
}

bool func_835(int iParam0, int iParam1, var uParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

void func_836(int iParam0, int iParam1)
{
	struct<5> /*40*/ sVar0;

	sVar0 = { Global_1898164.f_1[iParam0 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam0 /*5*/] = { Global_1898164.f_1[iParam1 /*5*/] /*5*/ };
	Global_1898164.f_1[iParam1 /*5*/] = { sVar0 /*5*/ };
}

int func_837(int iParam0)
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_838(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_839(var uParam0, int iParam1)
{
	*uParam0--;
	func_881(&(uParam0->f_1[iParam1 /*5*/]));
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] /*5*/ };
}

bool func_840(int iParam0, int iParam1)
{
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*iParam1] == iParam0)
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_841(int iParam0, int iParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
}

bool func_842(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 != 0 && func_459(iParam1) != iParam2)
	{
		return false;
	}
	if (func_817(2, iParam1))
	{
		func_882(uParam0, iParam1);
		return true;
	}
	return false;
}

void func_843(int iParam0)
{
	func_776(iParam0, 8, 6);
}

void func_844()
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

bool func_845(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_638(0);
	iVar1 = 0;
	func_639(&(Global_1946054.f_964), iVar0, iParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
	{
		return false;
	}
	if (!DATAFILE::_0xA63CD20F19B961AB(&iVar1, &(Global_1946054.f_964), joaat("PARTIAL")))
	{
		return false;
	}
	return iVar1;
}

void func_846(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_728(iParam1, 1);
	if (!bParam2 && iVar2 == joaat("MP_COMPONENT_TYPE_BEARD"))
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == joaat("MP_COMPONENT_TYPE_HEADWEAR"))
		{
			iVar1 = func_883(iParam4);
		}
		else if (iParam4 != Global_1946054.f_57[iParam1 /*11*/])
		{
			iVar1 = PED::_GET_SHOP_PED_COMPONENT_CATEGORY(iParam4, PED::_GET_META_PED_TYPE(iParam0), bParam2);
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

void func_847(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 10;
	if (func_775(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 6))
	{
		if (bParam2)
		{
			func_846(iParam0, iVar0, func_23() != -1, 0, 0);
			func_776(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(iParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_735(joaat("MP_COMPONENT_TYPE_HEADWEAR"), 1, 6);
	}
	Global_1946054.f_857++;
	if (!bParam1)
	{
		return;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}

bool func_848(int iParam0, int iParam1)
{
	return false;
}

bool func_849()
{
	return false;
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_411(0), joaat("UPGRADE_HEALTH_TANK_1"), false);
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_411(0), joaat("UPGRADE_STAMINA_TANK_1"), false);
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_411(0), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}
	return 0;
}

char* func_851(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		case 0:
			return "stamina";
		case 2:
			return "dead_eye_level_up";
		default:
			break;
	}
	return "";
}

int func_852(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("TOAST_RPG_LEVEL_STAMINA");
		case 0:
			return joaat("TOAST_RPG_LEVEL_HEALTH");
		case 2:
			return joaat("TOAST_RPG_LEVEL_DEADEYE");
		default:
			break;
	}
	return 0;
}

int func_853(int iParam0)
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

int func_854(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		case 1:
			return 304419444;
		case 2:
			return 1497019382;
		default:
			break;
	}
	return 0;
}

bool func_855(int iParam0, int iParam1, int iParam2, var uParam3)
{
	bool bVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;

	if (func_282(iParam1) && !func_884(iParam1))
	{
		bVar0 = func_165(iParam1);
	}
	else
	{
		return false;
	}
	func_885(uParam3);
	iVar5 = func_886(iParam2);
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

void func_856(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_887(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_888(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

void func_857(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::COPY_SCRIPT_STRUCT(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_204(iVar31))
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

void func_858(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946054.f_2657[iVar0];
		if (func_287(iVar1, 0))
		{
			func_452(iVar1, 0, bParam0);
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

void func_859(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;
	if (func_23() == -1)
	{
		func_889(352481484);
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
		if (func_334(iVar2) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
		{
			func_890(&(Global_1946054.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_772(iVar2, 0))
		{
			func_891(iVar2, Global_1946054.f_1497.f_1[iVar1 /*3*/] == Global_1946054.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_860(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;

	if (!func_892(iParam0))
	{
		return;
	}
	iVar0 = func_334(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case joaat("CI_CATEGORY_WARDROBE_HAT"):
			bVar1 = func_893(iParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_MASK"):
			bVar1 = func_893(iParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_OUTFIT"):
			bVar1 = func_893(iParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BIG_MASK"):
			bVar1 = func_893(iParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_GLOVES"):
			bVar1 = func_893(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
		case joaat("CI_CATEGORY_WARDROBE_BADGE"):
			bVar1 = func_893(iParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == func_894(0))
	{
		func_895(iParam0, 1);
		if (func_450() == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
		{
			func_895(func_894(joaat("MPC_PLAYER_TYPE_SP_ARTHUR")), 0);
		}
		else
		{
			func_895(func_894(joaat("MPC_PLAYER_TYPE_SP_MARSTON")), 0);
		}
	}
	func_642();
	if (func_896(iVar0))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_411(0), iParam0, 0);
	}
	func_891(iParam0, bParam3);
	if (bParam2)
	{
		func_643(0, 0);
	}
}

void func_861(int iParam0, int iParam1)
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
				if (func_536((*iParam1)[iVar0]))
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

int func_862(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_863(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((1898 - iParam1), 26);
		*iParam0 |= (1 << 31);
	}
	else
	{
		*iParam0 |= BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26);
		*iParam0 -= (*iParam0 & (1 << 31));
	}
}

void func_864(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 62914560);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 22);
}

void func_865(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_801(*iParam0);
	iVar1 = func_800(*iParam0);
	if (iParam1 < 1 || iParam1 > func_806(iVar0, iVar1))
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4063232);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 17);
}

void func_866(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 126976);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 12);
}

void func_867(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 4032);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 6);
}

void func_868(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 -= (*iParam0 & 63);
	*iParam0 |= BUILTIN::SHIFT_LEFT(iParam1, 0);
}

bool func_869(int iParam0)
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
	iVar0 = func_805(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_804(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_803(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_800(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_801(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_802(iParam0);
	if (iVar5 < 1 || iVar5 > func_806(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_870(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_871(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 |= iParam1;
}

bool func_872(var uParam0, int iParam1)
{
	return (uParam0->f_1 & iParam1) != 0;
}

void func_873(var uParam0, int iParam1)
{
	uParam0->f_1 |= iParam1;
}

bool func_874(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, -1066545920))
	{
		return true;
	}
	return false;
}

bool func_875(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, -284267618))
	{
		return true;
	}
	return false;
}

bool func_876(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_HOLSTER")))
	{
		return true;
	}
	return false;
}

bool func_877(int iParam0)
{
	if (!func_287(iParam0, 0))
	{
		return false;
	}
	if (func_331(iParam0, joaat("CI_TAG_ITEM_EQUIPMENT_OFFHAND")))
	{
		return true;
	}
	return false;
}

int func_878(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_897(iParam0);
		case 1:
			return func_898(iParam0);
		case 2:
			return func_899(iParam0);
		case 3:
			return func_900(iParam0);
	}
	return 0;
}

int func_879(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_901(iParam0);
		case 1:
			return func_902(iParam0);
		case 2:
			return func_903(iParam0);
		case 3:
			return func_904(iParam0);
		case 4:
			return func_905(iParam0);
		case 5:
			return func_906(iParam0);
		case 6:
			return func_907(iParam0);
		case 7:
			return func_908(iParam0);
		case 8:
			return func_909(iParam0);
	}
	return 0;
}

void func_880(int iParam0, int iParam1)
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

void func_881(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_910(&(uParam0->f_3));
}

void func_882(var uParam0, int iParam1)
{
	int iVar0;

	if (func_23() == -1)
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

int func_883(int iParam0)
{
	int iVar0;

	iVar0 = func_334(iParam0);
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

bool func_884(int iParam0)
{
	int iVar0;

	iParam0 = func_280(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_282(iParam0))
	{
		return false;
	}
	iVar0 = func_165(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

void func_885(var uParam0)
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

int func_886(int iParam0)
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

void func_887(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
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

bool func_888(int iParam0, int iParam1, int iParam2, int iParam3)
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

void func_889(int iParam0)
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
	sVar2 = { func_608(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) /*18*/ };
	if (func_611(&sVar2, &iVar0, &iVar1, 0))
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
		func_397(iVar0);
	}
}

void func_890(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_911(iParam2, *uParam0);
	func_912(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

void func_891(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_398(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_401(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_472(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_411(0), &sVar5, bParam1);
}

bool func_892(int iParam0)
{
	if (func_23() == -1)
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

int func_893(int iParam0, var uParam1, int iParam2, bool bParam3)
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
	if (func_640(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_772(iParam0, 0))
	{
		return 0;
	}
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = iVar1;
	if (func_334(iParam0) != joaat("CI_CATEGORY_WARDROBE_OUTFIT"))
	{
		func_890(&(Global_1946054.f_2657.f_26.f_26), iParam0, Global_1946054.f_2657.f_19);
	}
	Global_1946054.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_894(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_450();
	}
	if (iParam0 == joaat("MPC_PLAYER_TYPE_SP_MARSTON"))
	{
		return joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000");
	}
	return joaat("CLOTHING_ITEM_HAT_PZERO_000");
}

int func_895(int iParam0, bool bParam1)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	sVar0 = { func_398(iParam0, 0, 0) /*5*/ };
	sVar5 = { func_401(iParam0, sVar0, sVar0.f_4, 0) /*4*/ };
	if (func_472(iParam0, sVar0, sVar0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(bParam1, func_411(0), &sVar5);
	return 1;
}

bool func_896(int iParam0)
{
	return func_913(func_765(iParam0));
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_899(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_900(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		case 4:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		case 5:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		case 6:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		case 7:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		case 8:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

int func_901(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_GATOR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_GATOR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_GATOR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_GATOR");
		default:
			break;
	}
	return 0;
}

int func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BEAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BEAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BEAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BEAR");
		default:
			break;
	}
	return 0;
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BOAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BOAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BOAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BOAR");
		default:
			break;
	}
	return 0;
}

int func_904(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_BUFFALO");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_BUFFALO");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_BUFFALO");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_BUFFALO");
		default:
			break;
	}
	return 0;
}

int func_905(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_COUGAR");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_COUGAR");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_COUGAR");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_COUGAR");
		default:
			break;
	}
	return 0;
}

int func_906(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_DEER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_DEER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_DEER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_DEER");
		default:
			break;
	}
	return 0;
}

int func_907(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_PANTHER");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_PANTHER");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_PANTHER");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_PANTHER");
		default:
			break;
	}
	return 0;
}

int func_908(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_RABBIT");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_RABBIT");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_RABBIT");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_RABBIT");
		default:
			break;
	}
	return 0;
}

int func_909(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_REINFORCED_BANDOLIER_SNAKE");
		case 1:
			return joaat("PROVISION_REINFORCED_GUNBELT_SNAKE");
		case 2:
			return joaat("PROVISION_REINFORCED_HOLSTER_SNAKE");
		case 3:
			return joaat("PROVISION_REINFORCED_OFFHAND_SNAKE");
		default:
			break;
	}
	return 0;
}

void func_910(var uParam0)
{
	if (*uParam0 && PED::_IS_METAPED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_METAPED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_911(int iParam0, var uParam1)
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_912(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_IS_METAPED_ASSET_VALID(uParam0->f_3.f_1))
	{
		func_881(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_454(func_453(iParam1), 1);
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
		func_914(uParam0);
	}
}

bool func_913(int iParam0)
{
	return (Global_1946054.f_2657.f_26.f_6 & iParam0) != 0;
}

void func_914(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_915(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_915(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_916(func_450());
	if (*uParam0)
	{
		func_910(uParam0);
	}
	uParam0->f_1 = PED::_REQUEST_METAPED_COMPONENT(iVar0, uParam1, 0, func_23() != -1, iParam2);
	*uParam0 = 1;
}

int func_916(int iParam0)
{
	if (func_23() == -1)
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

