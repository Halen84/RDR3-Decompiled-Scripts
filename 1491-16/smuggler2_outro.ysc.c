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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	int iLocal_23[2] = { 0, 0 };
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	Vector3 vLocal_32 = { 0.0f, 0.0f, 0.0f };
	Vector3 vLocal_35 = { 0.0f, 0.0f, 0.0f };
	int iLocal_38 = 0;
	bool bLocal_39 = false;
	bool bLocal_40 = false;
	bool bLocal_41 = false;
	int iLocal_42[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = false;
	bool bLocal_57 = false;
	bool bLocal_58 = false;
	struct<4> /*32*/ sLocal_59 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
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
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	vLocal_32 = { 920.4003f, -6726.304f, 35.7346f /*3*/ };
	vLocal_35 = { 18.4472f, 24.1111f, 177.789f /*3*/ };
	iLocal_38 = -1;
	iLocal_53 = joaat("A_C_SONGBIRD_01");
	iLocal_54 = joaat("S_M_M_FUSSARHENCHMAN_01");
	iLocal_55 = joaat("CS_HERCULE");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&sLocal_59);
	}
	func_2(&sLocal_59, &uScriptParam_0);
	while (!func_3(&sLocal_59))
	{
		func_4(&sLocal_59);
		switch (func_5(sLocal_59))
		{
			case 0:
				if (func_6(&sLocal_59))
				{
					func_7(&sLocal_59, 1);
				}
				break;
			case 1:
				if (func_8(&sLocal_59))
				{
					func_7(&sLocal_59, 2);
				}
				break;
			case 2:
				if (func_9(&sLocal_59))
				{
					func_7(&sLocal_59, 3);
				}
				break;
			case 3:
				func_1(&sLocal_59);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&sLocal_59);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_10();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_12(iVar1) && func_13(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (func_14(iVar1))
				{
					func_15(iVar1, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_16(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		func_18(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		func_18(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_3(var uParam0)
{
	if (func_20(Global_1935630, (1 << 14)))
	{
		return true;
	}
	if (!func_16(uParam0, 8))
	{
		if (func_20(Global_1935630, (1 << 15)))
		{
			return true;
		}
	}
	return false;
}

void func_4(var uParam0)
{
	if (!func_16(uParam0, 4))
	{
		if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false)) && !CAM::IS_GAMEPLAY_CAM_RENDERING())
		{
			MISC::SET_BIT(&(Global_1955830.f_1), 5);
			func_18(uParam0, 4);
		}
	}
	else if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2, false)) || CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		MISC::CLEAR_BIT(&(Global_1955830.f_1), 5);
		func_17(uParam0, 4);
	}
}

int func_5(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return uParam0;
}

bool func_6(var uParam0)
{
	bool bVar0;

	bLocal_57 = true;
	bVar0 = true;
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_53))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_54))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_55))
	{
		bVar0 = false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_21(1)))
	{
		bVar0 = false;
	}
	if ((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(0)) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(1))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED(func_22(2)))
	{
		bVar0 = false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_23[0], true, false))
	{
		bVar0 = false;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_23[1], true, false))
	{
		bVar0 = false;
	}
	if (!CAM::_0xAA235E2F2C09E952(func_23()))
	{
		bVar0 = false;
	}
	if (!STREAMING::IS_SRL_LOADED())
	{
		bVar0 = false;
	}
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_24()))
	{
		bVar0 = false;
	}
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
	if (!bVar0)
	{
		return false;
	}
	if (bLocal_56)
	{
		bLocal_56 = false;
	}
	if (!func_25(3, iLocal_54, 984.3f, -6777.9f, 49.5f, -27.3f))
	{
		bLocal_57 = false;
	}
	if (!func_25(4, iLocal_54, 982.5f, -6781.3f, 49.5f, 158.8f))
	{
		bLocal_57 = false;
	}
	if (!func_25(5, iLocal_54, 981.6f, -6784.6f, 49.4f, -105.7f))
	{
		bLocal_57 = false;
	}
	if (!func_25(6, iLocal_54, 981.7f, -6791.9f, 49.5f, 28.1f))
	{
		bLocal_57 = false;
	}
	if (!func_25(7, iLocal_54, 984.7f, -6784.1f, 49.6f, 28.1f))
	{
		bLocal_57 = false;
	}
	if (!func_25(8, iLocal_54, 982.5f, -6782.7f, 50.4f, 161.0f))
	{
		bLocal_57 = false;
	}
	if (!bLocal_57)
	{
		bVar0 = false;
	}
	if (!bVar0)
	{
		return false;
	}
	func_26(3);
	func_26(4);
	func_26(5);
	func_26(6);
	func_26(7);
	func_26(8);
	GRAPHICS::_ADD_BLOOD_POOL(983.9f, -6777.3f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(984.7f, -6779.5f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(983.4f, -6781.5f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(982.2f, -6788.4f, 49.1f, true);
	GRAPHICS::_ADD_BLOOD_POOL(982.3f, -6789.4f, 49.2f, true);
	GRAPHICS::_ADD_BLOOD_POOL(984.1f, -6786.1f, 49.0f, true);
	GRAPHICS::_ADD_BLOOD_POOL(979.8f, -6791.7f, 49.2f, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_23[0], "ARTHUR", Global_35, 0);
	return true;
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_8(var uParam0)
{
	if ((!func_16(uParam0, 2) && SCRIPTS::DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_27(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_28())
	{
		iVar0 = 0;
	}
	if (!func_29(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_10()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_12(iVar0) && func_14(iVar0))
		{
			func_30(iVar0, 56, 1);
		}
		iVar0++;
	}
	func_31(&(Global_1359489.f_40), 1);
}

int func_11(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_42[iVar0]));
		}
		iVar0++;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	AUDIO::_0x43037ABFE214A851();
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(2), false, 1.0f, 1.0f, true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_31);
	}
	func_32(iLocal_28);
	func_32(iLocal_27);
	func_32(iLocal_29);
	func_32(iLocal_30);
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(0));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(1));
	TASK::REMOVE_WAYPOINT_RECORDING(func_22(2));
	ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_23[0]);
	CAM::_UNLOAD_CINEMATIC_CAMERA_LOCATION(func_23());
	HUD::_TEXT_BLOCK_DELETE(func_24());
	func_33(0);
	return 1;
}

bool func_12(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_13(int iParam0)
{
	return func_34(iParam0, 16, 1);
}

bool func_14(int iParam0)
{
	if (!func_12(iParam0))
	{
		return false;
	}
	if (!func_13(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_129 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_15(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (Global_1360165[iParam0 /*1157*/].f_129 != 0 && Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_30(iParam0, 56, 1);
		func_31(&(Global_1359489.f_40), 1);
	}
	func_35(iParam0, 0);
	func_36(iParam0, 4, 0);
	func_37(iParam0);
	func_38(iParam0);
	func_39(iParam0, 37, 1);
	bVar0 = func_40(Global_1360165[iParam0 /*1157*/], 0);
	iVar1 = func_41(iParam0, 0);
	bVar2 = PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar1);
	if (PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, true) && (Global_1359489.f_16 & (1 << 23)) == 0)
	{
		PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503 /*PCF_DisableSpecialGreetChains*/, false);
	}
	if (func_42(iParam0, 64, 1))
	{
		func_39(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_39(iParam0, 33, 1);
		func_39(iParam0, 34, 1);
		func_43(iParam0, 1056964608, -1, 1061158912);
		func_44(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_30(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_30(iParam0, 35, 1);
			if (bParam8)
			{
				func_30(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_45(iParam0, 0);
			if (PED::IS_PED_IN_GROUP(Global_1360165[iParam0 /*1157*/]))
			{
				PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
			}
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(Global_1360165[iParam0 /*1157*/], 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
		}
		if (bVar2)
		{
			PERSCHAR::_0xBB68908CD11AEBDC(iVar1);
		}
		func_39(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			PED::SET_PED_KEEP_TASK(Global_1360165[iParam0 /*1157*/], true);
		}
		func_30(iParam0, 33, 1);
		func_44(iParam0, 0, 1, 0);
		if (fParam4 > 0.0f)
		{
			Global_1360165[iParam0 /*1157*/].f_133 = fParam4;
			func_31(&(Global_1360165[iParam0 /*1157*/].f_130), 1);
		}
		else
		{
			func_46(&(Global_1360165[iParam0 /*1157*/].f_130));
		}
		if (bParam9)
		{
			func_30(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		{
			func_47(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], false);
	}
	if (func_42(iParam0, 45, 1))
	{
		func_39(iParam0, 45, 1);
	}
	func_48(iParam0, 16, 1);
	func_39(iParam0, 44, 1);
	Global_1360165[iParam0 /*1157*/].f_129 = 0;
	Global_40.f_4942[iParam0 /*60*/].f_4 = 0;
	if (bParam5)
	{
		if (func_40(func_49(iParam0), 0))
		{
			func_50(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

bool func_16(var uParam0, int iParam1)
{
	return (uParam0->f_3 & iParam1) != 0;
}

void func_17(var uParam0, int iParam1)
{
	uParam0->f_3 -= (uParam0->f_3 & iParam1);
}

void func_18(var uParam0, int iParam1)
{
	uParam0->f_3 |= iParam1;
}

void func_19(var uParam0)
{
	func_51(&Global_1935630, (1 << 20));
	iLocal_23[0] = iLocal_23[0];
	PED::_RESERVE_AMBIENT_PEDS(9);
	STREAMING::REQUEST_MODEL(iLocal_53, false);
	STREAMING::REQUEST_MODEL(iLocal_54, false);
	STREAMING::REQUEST_MODEL(iLocal_55, false);
	STREAMING::REQUEST_ANIM_DICT(func_21(1));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(0));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(1));
	TASK::REQUEST_WAYPOINT_RECORDING(func_22(2));
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2))
	{
		iLocal_23[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(0, 1), 0, func_52(0, 0), false, true);
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23[0]);
	}
	else
	{
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		iLocal_23[0] = uParam0->f_2;
	}
	iLocal_23[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_52(1, 1), 2, func_52(1, 0), false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_23[1]);
	CAM::_LOAD_CINEMATIC_CAM_LOCATION(func_23());
	STREAMING::END_SRL();
	STREAMING::PREFETCH_SRL(func_53(0));
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
	func_18(uParam0, 8);
}

bool func_20(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

char* func_21(bool bParam0)
{
	if (bParam0)
	{
		return "script_shows@cancandance@p1";
	}
	return "cancandance_fem0";
}

char* func_22(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "smg2_cme1";
		case 1:
			return "smg2_cme2";
		case 2:
			return "smg2_cme3";
	}
	return "";
}

char* func_23()
{
	return "script@story@Smuggler2@beach_walk";
}

char* func_24()
{
	return "SMG2";
}

bool func_25(int iParam0, int iParam1, Vector3 vParam2, float fParam5)
{
	bool bVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[iParam0]))
	{
		return true;
	}
	if (bLocal_56)
	{
		return false;
	}
	bVar0 = true;
	if (iParam0 == 1)
	{
		bVar0 = 2;
	}
	iLocal_42[iParam0] = func_54(iParam1, vParam2, fParam5, 1, 1, bVar0, 1, 1, 1, 0, 0, 0, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_42[iParam0], true);
	if (iParam1 == iLocal_54)
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_42[iParam0], Global_35, false);
	}
	bLocal_56 = true;
	return true;
}

void func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[iParam0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_42[iParam0]))
		{
			AUDIO::STOP_PED_SPEAKING(iLocal_42[iParam0], true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_42[iParam0], true, true);
			GRAPHICS::_ADD_BLOOD_POOL(ENTITY::GET_ENTITY_COORDS(iLocal_42[iParam0], true, false), true);
			ENTITY::SET_ENTITY_HEALTH(iLocal_42[iParam0], 0, 0);
		}
	}
}

int func_27(var uParam0)
{
	func_55();
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	func_56(0);
	Global_16 = 1;
	func_33(1);
	func_57(0);
	Global_43838 = 0;
	func_58();
	PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
	return 1;
}

bool func_28()
{
	int iVar0;

	iVar0 = 1;
	return iVar0;
}

bool func_29(var uParam0)
{
	int iVar0;
	struct<4> /*32*/ sVar1;
	int iVar5;
	int iVar6;
	struct<10> /*80*/ sVar7;

	func_55();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	if (bLocal_56)
	{
		bLocal_56 = false;
	}
	func_59(43, 1, 1);
	func_58();
	HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_IN_MISSION_CUTSCENE"));
	CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
	CAM::_REQUEST_LETTER_BOX_OVERTIME(0, 0, false, 17, true, false);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_31) && !ENTITY::IS_ENTITY_DEAD(iLocal_31))
	{
		if (!func_60(vLocal_32))
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_31, vLocal_32, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iLocal_31, vLocal_35, 2, true);
			ENTITY::SET_ENTITY_COLLISION(iLocal_31, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
		}
	}
	if (!bLocal_39)
	{
		bLocal_39 = AUDIO::LOAD_STREAM("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
	}
	switch (iLocal_26)
	{
		case 0:
			MISC::_0x1096603B519C905F("SMG2");
			MISC::SET_WEATHER_TYPE(joaat("FOG"), true, true, true, 60.0f, false);
			CLOCK::PAUSE_CLOCK(true, 0);
			iLocal_27 = VOLUME::CREATE_VOLUME_BOX(984.2063f, -6781.292f, 49.91065f, 0.0f, 0.0f, -20f, 5.0f, 30.0f, 4.0f);
			iLocal_28 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLBOX"), 987.4385f, -6772.322f, 49.94096f, 0.0f, 0.0f, -20f, 8.0f, 5.0f, 2.0f);
			iLocal_29 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLBOX"), 985.287f, -6785.009f, 49.76819f, 0.0f, 0.0f, -19.99999f, 1.0f, 30.0f, 4.0f);
			iLocal_30 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("VOLBOX"), 981.1976f, -6783.522f, 49.76819f, 0.0f, 0.0f, -19.99999f, 1.0f, 30.0f, 4.0f);
			CAM::DO_SCREEN_FADE_IN(1000);
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_23[0], false))
			{
				ANIMSCENE::START_ANIM_SCENE(iLocal_23[0]);
			}
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(1));
			func_56(1);
		case 1:
			bLocal_57 = true;
			if (!func_25(0, iLocal_53, 984.0f, -6769.4f, 54.4f, 175.0f))
			{
				bLocal_57 = false;
			}
			if (!func_25(1, iLocal_53, 984.0f, -6769.4f, 54.4f, 175.0f))
			{
				bLocal_57 = false;
			}
			if (!func_25(2, iLocal_55, 988.0f, -6771.0f, 50.0f, -130.0f))
			{
				bLocal_57 = false;
			}
			bLocal_57 = bLocal_57;
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
			{
				iLocal_31 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(iLocal_23[0], "Warship", false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_31))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_31, true, true);
				}
			}
			if (ANIMSCENE::IS_ENTITY_EXITING_ANIM_SCENE_THIS_FRAME(iLocal_23[0], "ARTHUR"))
			{
				ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iLocal_23[0], "Warship", &sVar7, false, 0, 2);
				vLocal_32 = { sVar7.f_6 /*3*/ };
				vLocal_35 = { sVar7.f_9 /*3*/ };
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_23[0], "Warship", iLocal_31);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_31, vLocal_32, false, true, true);
				ENTITY::SET_ENTITY_ROTATION(iLocal_31, vLocal_35, 2, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_31, false, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_31, true);
				func_31(&uLocal_20, 0);
				func_56(2);
			}
			break;
		case 2:
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), true, 1.0f, 1.0f, true);
			TASK::TASK_FLY_TO_COORD(iLocal_42[0], 2.0f, 983.9f, -6775.8f, 50.0f, true, true);
			TASK::TASK_FLY_TO_COORD(iLocal_42[1], 2.0f, 984.0f, -6775.6f, 50.0f, true, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iLocal_42[2], false);
			TASK::TASK_PLAY_ANIM(iLocal_42[2], func_21(1), func_21(0), 1000.0f, -1000.0f, -1, 132, 0.474f, false, 0, false, 0, false);
			func_56(3);
			break;
		case 3:
			if (!bLocal_58)
			{
				if (func_61(Global_35, 983.2f, -6785.1f, 49.5f, 2.0f, 1, 1))
				{
					TASK::TASK_FLY_TO_COORD(iLocal_42[0], 2.0f, 975.7f, -6819.1f, 51.0f, true, true);
					TASK::TASK_FLY_TO_COORD(iLocal_42[1], 2.0f, 975.7f, -6819.1f, 51.0f, true, true);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_42[8], 5000, 48, 51, 1);
					func_62(Global_35, "COUGH_SICK_SMALL", joaat("SPEECH_PARAMS_FORCE_NORMAL_CRITICAL"), 0, 1, 0, 0, 1);
					bLocal_58 = true;
				}
			}
			func_63(0);
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_42[2], func_21(1), func_21(0), 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_42[2], func_21(1), func_21(0)) >= 0.75f)
				{
					ENTITY::_SET_ENTITY_ANIM_CURRENT_TIME(iLocal_42[2], func_21(1), func_21(0), 0.474f);
				}
			}
			sVar1 = { func_64(1) /*4*/ };
			STREAMING::REQUEST_COLLISION_AT_COORD(sVar1);
			if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_27, true, 0))
			{
				func_56(4);
			}
			break;
		case 4:
			if (func_65(iLocal_52))
			{
				func_66(&iLocal_52, 1, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_42[2]))
			{
				PED::DELETE_PED(&(iLocal_42[2]));
			}
			sVar1 = { func_64(1) /*4*/ };
			STREAMING::REQUEST_COLLISION_AT_COORD(sVar1);
			func_67(1);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, sVar1, sVar1.f_3, true, false, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_35, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(1), 0, (1 << 22), -1, false, 0, -1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
			AUDIO::_0x5E3CCF03995388B5(MISC::GET_HASH_KEY(func_68(1)), ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
			CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(func_23(), func_69(1), 5);
			func_31(&uLocal_14, 1);
			CLOCK::SET_CLOCK_TIME(19, 40, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(func_22(0), false, 1.0f, 1.0f, true);
			STREAMING::END_SRL();
			STREAMING::PREFETCH_SRL(func_53(2));
			func_56(5);
			break;
		case 5:
			sVar1 = { func_64(2) /*4*/ };
			STREAMING::REQUEST_COLLISION_AT_COORD(sVar1);
			iVar0 = (func_70(1) - func_71(&uLocal_14));
			if (func_73(2, func_72(2), iVar0))
			{
				func_56(6);
			}
			break;
		case 6:
			sVar1 = { func_64(2) /*4*/ };
			STREAMING::REQUEST_COLLISION_AT_COORD(sVar1);
			func_67(2);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Global_35, sVar1, sVar1.f_3, true, false, true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Global_35, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Global_35, func_22(2), 0, (1 << 22), -1, false, 0, -1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Global_35, true, false);
			PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_WALK"), false, 0, false);
			CAM::_CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT_2(func_23(), func_69(2), 5);
			func_31(&uLocal_14, 1);
			CLOCK::SET_CLOCK_TIME(20, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			STREAMING::END_SRL();
			func_74(joaat("WS_GUARMA3_TOWER_FRAG"));
			func_74(joaat("WS_GUARMA3_TOWER_DESTROYED"));
			func_75(joaat("WS_GUARMA3_TOWER_NORMAL"));
			func_76(-217646849);
			func_76(-694809996);
			func_76(-2053475031);
			func_77(-279703229);
			func_77(-623091266);
			Global_43838 = 1;
			func_56(7);
			break;
		case 7:
			iVar0 = ((func_70(1) - func_71(&uLocal_14)) - BUILTIN::FLOOR((1.6f * 1000.0f)));
			if (func_73(3, func_72(2), iVar0))
			{
				if (func_65(iLocal_52))
				{
					func_66(&iLocal_52, 1, 1);
				}
				ANIMSCENE::START_ANIM_SCENE(iLocal_23[1]);
				if (bLocal_39)
				{
					iLocal_38 = AUDIO::_GET_LOADED_STREAM_ID_FROM_CREATION("CLOUD_BED", "DEATH_FAIL_RESPAWN_SOUNDS");
					AUDIO::PLAY_STREAM_FRONTEND(iLocal_38);
				}
				AUDIO::_START_AUDIO_SCENESET("Clouds", "Death_Fail_Respawn_Scenes");
				func_56(8);
			}
			break;
		case 8:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_23[1]) >= 1.6f)
			{
				AUDIO::_0x43037ABFE214A851();
				ENTITY::SET_ENTITY_COORDS(Global_35, 1303.8f, -6845.3f, 42.8f, true, false, true, true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_56(9);
			}
			break;
		case 9:
			iVar5 = func_78(43);
			iVar6 = func_79(iVar5);
			if ((ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_23[1]) >= (ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_23[1]) - 1.6f) && func_80(iVar5)) && func_81(iVar6, 128))
			{
				if (func_81(iVar6, (1 << 9)))
				{
					func_82(iVar6, (1 << 9));
				}
				MISC::_0x1096603B519C905F("");
				func_56(10);
			}
			break;
		case 10:
			if (func_83())
			{
				func_56(11);
				if (iLocal_38 != -1)
				{
					AUDIO::STOP_STREAM(iLocal_38);
					iLocal_38 = -1;
				}
				AUDIO::_STOP_AUDIO_SCENESET("Death_Fail_Respawn_Scenes");
			}
			break;
		case 11:
			if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_23[1]) >= ANIMSCENE::_GET_ANIM_SCENE_DURATION(iLocal_23[1]))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_30(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return;
		}
	}
	func_85(iParam1, &iVar0, &iVar1);
	MISC::SET_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

void func_31(var uParam0, bool bParam1)
{
	if (bParam1 || !func_86(uParam0))
	{
		func_87(uParam0);
	}
}

void func_32(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_33(bool bParam0)
{
	Global_1955834 = bParam0;
	if (bParam0)
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(false, 0);
	}
	else
	{
		MAP::_SET_MINIMAP_FOW_SHOULD_UPDATE(true, 0);
	}
}

bool func_34(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0 /*60*/] & iParam1) != 0;
}

void func_35(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_88(&(Global_1360165[iParam0 /*1157*/].f_12), 1))
		{
			func_36(iParam0, 1, 0);
		}
	}
	func_36(iParam0, 16, bParam1);
}

void func_36(int iParam0, int iParam1, bool bParam2)
{
	if (!func_84(iParam0))
	{
		return;
	}
	func_89(&(Global_1360165[iParam0 /*1157*/].f_13), iParam1, bParam2);
}

void func_37(int iParam0)
{
	func_36(iParam0, 8, 0);
}

void func_38(int iParam0)
{
	func_30(iParam0, 36, 1);
}

void func_39(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return;
		}
	}
	func_85(iParam1, &iVar0, &iVar1);
	MISC::CLEAR_BIT(&(Global_1360165[iParam0 /*1157*/].f_58[iVar0]), iVar1);
}

bool func_40(int iParam0, int iParam1)
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
	if (func_90(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_90(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_90(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11 /*PCF_Knockedout*/, false))
		{
			return false;
		}
	}
	if (func_90(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_90(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_90(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_90(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_90(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_41(int iParam0, bool bParam1)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1))
		{
			func_91(iParam0);
		}
	}
	return Global_1360165[iParam0 /*1157*/].f_1;
}

bool func_42(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
		if (!func_84(iParam0))
		{
			return false;
		}
	}
	func_85(iParam1, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[iVar0], iVar1);
}

void func_43(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (func_12(iParam0))
	{
		iVar1 = func_92(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			iVar0 = PED::GET_PED_MAX_HEALTH(iVar1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 179 /*PCF_0x605C7288*/, true);
			func_93(iParam0);
		}
	}
	if (func_42(iParam0, 5, 1))
	{
		PED::SET_PED_CONFIG_FLAG(func_92(iParam0), 137 /*PCF_0xE18960DE*/, true);
	}
}

void func_44(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_39(iParam0, 50, 1);
		func_39(iParam0, 48, 1);
		func_39(iParam0, 49, 1);
		func_39(iParam0, 51, 1);
		func_39(iParam0, 52, 1);
		func_39(iParam0, 54, 1);
		func_39(iParam0, 55, 1);
	}
	else
	{
		func_30(iParam0, 50, 1);
		func_30(iParam0, 48, 1);
		func_30(iParam0, 49, 1);
		func_30(iParam0, 51, 1);
		if (bParam3)
		{
			func_30(iParam0, 54, 1);
		}
		else
		{
			func_39(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_30(iParam0, 52, 1);
			if (bParam3)
			{
				func_30(iParam0, 55, 1);
			}
		}
		else
		{
			func_39(iParam0, 52, 1);
			if (!bParam3)
			{
				func_39(iParam0, 55, 1);
			}
		}
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::SET_PED_CONFIG_FLAG(func_92(iParam0), 204 /*PCF_0x435F091E*/, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(func_92(iParam0), 204 /*PCF_0x435F091E*/, false);
	}
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0.0f;
	uParam0->f_2 = 0.0f;
	*uParam0 = 0;
}

void func_47(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_12(iParam0))
	{
		return;
	}
	if (func_13(iParam0))
	{
		if (!func_14(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_42(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_41(iParam0, 0);
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(iVar0))
	{
		return;
	}
	iVar1 = func_92(iParam0);
	if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && func_94(iParam0) < 10000.0f) && !bParam3) && !CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_ATTACHED(iVar1))
	{
		if (((TASK::IS_PED_ACTIVE_IN_SCENARIO(iVar1, 1) || TASK::IS_PED_EXITING_SCENARIO(iVar1, true)) || PED::IS_PED_ON_MOUNT(iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
		{
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, true, true);
		}
		ENTITY::DETACH_ENTITY(iVar1, true, true);
	}
	if (bParam4)
	{
		func_30(iParam0, 2, 1);
	}
	else
	{
		func_95(iParam0);
		func_30(iParam0, 1, 1);
	}
}

void func_48(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] -= (Global_40.f_4942[iParam0 /*60*/] & iParam1);
}

int func_49(int iParam0)
{
	if (!func_12(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/].f_70))
	{
		Global_1360165[iParam0 /*1157*/].f_70 = 0;
	}
	return Global_1360165[iParam0 /*1157*/].f_70;
}

void func_50(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (!func_84(iParam1))
	{
		return;
	}
	iVar0 = func_49(iParam1);
	if (func_96(iParam1))
	{
		if (!func_97(iParam1))
		{
			return;
		}
	}
	func_39(iParam1, 39, 1);
	func_98(iParam1, 64, 0);
	Global_1360165[iParam1 /*1157*/].f_70.f_11 = 0;
	func_98(iParam1, 8, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!bParam2)
		{
			func_98(iParam1, (1 << 9), 1);
			PED::SET_PED_KEEP_TASK(iVar0, true);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			func_30(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_99(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

char* func_52(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_100(bParam1, "script@story@SMG2@IG@IG_CME_Start@smuggler2_cme", "");
		case 1:
			return func_100(bParam1, "script@timelapse@sad3_ext_timelapse", "");
	}
	return "";
}

char* func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@cme@SMG2_CME_SHOT1_srl";
		case 1:
			return "script@cme@SMG2_CME_SHOT2_srl";
		case 2:
			return "script@cme@SMG2_CME_SHOT3_srl";
	}
	return "";
}

int func_54(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_101(iVar0, iParam0, bParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_55()
{
	Global_1905944.f_5695 = 1;
}

void func_56(int iParam0)
{
	iLocal_26 = iParam0;
}

void func_57(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_102(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_51(&Global_1935630, (1 << 22));
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

void func_58()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_COVER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_EMOTE_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
}

int func_59(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!func_103(iParam0))
	{
		return 1;
	}
	if (func_104((1 << 15)))
	{
		return 1;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1835011[iParam0 /*74*/].f_16, false))
	{
		return 1;
	}
	iVar0 = func_79(func_78(iParam0));
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 1;
	}
	if (!func_80(func_78(iParam0)))
	{
		func_105(iParam0, 0, 0, -1);
	}
	if (func_106(iVar0))
	{
		if (!Global_1835011[iParam0 /*74*/].f_71)
		{
			if (bParam1)
			{
				func_107(iVar0, 256);
			}
			if (bParam2)
			{
				func_107(iVar0, (1 << 9));
			}
			Global_1835011[iParam0 /*74*/].f_71 = 1;
			return 1;
		}
	}
	return 0;
}

bool func_60(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

bool func_61(int iParam0, Vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_108(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_62(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> /*56*/ sVar0;

	sVar0.f_5 = 1;
	sVar0.f_6 = 1;
	sVar0.f_0 = sParam1;
	sVar0.f_1 = iParam5;
	sVar0.f_2 = iParam6;
	sVar0.f_3 = iParam2;
	sVar0.f_4 = iParam3;
	sVar0.f_5 = iParam4;
	sVar0.f_6 = iParam7;
	return func_109(iParam0, &sVar0);
}

void func_63(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	Vector3 vVar4;
	Vector3 vVar7;

	func_31(&uLocal_17, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	if (((!PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_LR")) == 0.0f || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_RIGHT_ONLY")) == 0.0f) || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_UP_ONLY")) == 0.0f) || !PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MOVE_DOWN_ONLY")) == 0.0f)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (func_65(iLocal_52) && func_110(iLocal_52, 1))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_87(&uLocal_20);
		if (func_65(iLocal_52))
		{
			func_66(&iLocal_52, 1, 1);
		}
		if (func_71(&uLocal_17) >= 60)
		{
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(func_22(iParam0), &iVar1);
			iVar2 = func_111(Global_35, func_22(iParam0), &vVar4);
			iVar3 = func_112(iVar2 + 2, 0, (iVar1 - 1));
			TASK::WAYPOINT_RECORDING_GET_COORD(func_22(iParam0), iVar3, &vVar7);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1.0f, 60, func_113(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vVar7), false, true);
			func_87(&uLocal_17);
		}
	}
	else if (!func_65(iLocal_52))
	{
		if (func_114(&uLocal_20) >= 5.0f)
		{
			if (!bLocal_40)
			{
				HUD::TEXT_BLOCK_REQUEST(func_24());
				bLocal_40 = true;
			}
			else if (!bLocal_41)
			{
				if (HUD::TEXT_BLOCK_IS_LOADED(func_24()))
				{
					bLocal_41 = true;
				}
			}
			else
			{
				iLocal_52 = func_115("SMG2_O_HLP_WALK", joaat("INPUT_MOVE_UD"), joaat("INPUT_MOVE_LR"), 16);
				func_116(iLocal_52, 10, 1, 1);
				func_116(iLocal_52, 11, 1, 1);
				func_116(iLocal_52, 14, 1, 1);
			}
		}
	}
}

struct<4> /*32*/ func_64(int iParam0)
{
	struct<4> /*32*/ sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = { 986.7128f, -6775.761f, 49.9186f /*3*/ };
			sVar0.f_3 = 167.688f;
			break;
		case 1:
			sVar0 = { 998.3f, -6913.8f, 41.6f /*3*/ };
			sVar0.f_3 = -154.6f;
			break;
		case 2:
			sVar0 = { 1008.8f, -6948.5f, 41.9f /*3*/ };
			sVar0.f_3 = -160.0f;
			break;
		default:
			break;
	}
	return sVar0;
}

bool func_65(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((Global_1945188[iParam0 /*18*/].f_1 & 2) == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

void func_66(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_65(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_117(*iParam0);
	if (Global_1945188[iVar0 /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_118(iVar0);
	*iParam0 = 0;
}

void func_67(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_64(iParam0) /*4*/ };
	MISC::CLEAR_AREA(vVar0, 10.0f, 1131016);
}

char* func_68(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1_CAM";
		case 2:
			return "3_BEACH_2_CAM";
	}
	return "";
}

char* func_69(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "2_BEACH_1";
		case 2:
			return "3_BEACH_2";
	}
	return "";
}

int func_70(int iParam0)
{
	int iVar0;

	iVar0 = CAM::_0xEA113BF9B0C0C5D7(func_23(), func_69(iParam0), 5);
	return iVar0;
}

int func_71(var uParam0)
{
	if (!func_86(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1000.0f));
	}
	if (func_119(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1000.0f));
	}
	return (func_120() - BUILTIN::ROUND((uParam0->f_1 * 1000.0f)));
}

Vector3 func_72(int iParam0)
{
	Vector3 vVar0;

	vVar0 = { func_64(iParam0) /*4*/ };
	switch (iParam0)
	{
		case 1:
			return vVar0;
		case 2:
			return vVar0;
	}
	return { 0.0f, 0.0f, 0.0f };
}

bool func_73(int iParam0, Vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (!iParam0 == 3)
	{
		iVar0 = MISC::GET_HASH_KEY(func_68(iParam0));
		iVar1 = CAM::_0x465F04F68AD38197(func_23(), func_69(iParam0), 5);
	}
	else
	{
		iVar1 = CAM::_0x465F04F68AD38197(func_23(), func_69(2), 5);
	}
	bVar2 = AUDIO::_0xFFE9C53DEEA3DB0B(iParam4, iVar0, vParam1, STREAMING::IS_SRL_LOADED(), iVar1);
	return bVar2;
}

void func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_121(iParam0, 1);
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

void func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_121(iParam0, 1);
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

void func_76(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REMOVE_IPL_HASH(iParam0);
	}
}

void func_77(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		STREAMING::REQUEST_IPL_HASH(iParam0);
	}
}

int func_78(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_79(int iParam0)
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

bool func_80(int iParam0)
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
		iVar0 = func_122(iParam0);
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

bool func_81(int iParam0, int iParam1)
{
	return (func_106(iParam0) && (Global_1898346[iParam0 /*6*/].f_1 & iParam1) != 0);
}

void func_82(int iParam0, int iParam1)
{
	if (!func_106(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 -= (Global_1898346[iParam0 /*6*/].f_1 & iParam1);
}

bool func_83()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_43800) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_43800, false));
}

bool func_84(int iParam0)
{
	return iParam0 > -1;
}

int func_85(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

bool func_86(var uParam0)
{
	return func_123(*uParam0, 1);
}

void func_87(var uParam0)
{
	func_124(uParam0, 0.0f);
}

bool func_88(var uParam0, int iParam1)
{
	return (*uParam0 & iParam1) != 0;
}

void func_89(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 |= iParam1;
	}
	else
	{
		*uParam0 -= (*uParam0 & iParam1);
	}
}

bool func_90(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_91(int iParam0)
{
	int iVar0;

	if (!func_84(iParam0))
	{
		return;
	}
	if (!MISC::_IS_BASE_A_PERSISTENT_CHARACTER(Global_1360165[iParam0 /*1157*/].f_1))
	{
		iVar0 = func_125(iParam0);
		if (iVar0 != 0)
		{
			Global_1360165[iParam0 /*1157*/].f_1 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
			PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_1);
		}
		else
		{
			Global_1360165[iParam0 /*1157*/].f_1 = 0;
		}
	}
}

int func_92(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
	{
		Global_1360165[iParam0 /*1157*/] = 0;
	}
	return Global_1360165[iParam0 /*1157*/];
}

void func_93(int iParam0)
{
	if (func_12(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_92(iParam0)))
		{
			func_126(iParam0, (1 << 26), 1);
			func_39(iParam0, 19, 1);
		}
	}
}

float func_94(int iParam0)
{
	if (!func_84(iParam0))
	{
		return 0.0f;
	}
	return Global_1360165[iParam0 /*1157*/].f_134;
}

void func_95(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_92(iParam0);
	iVar1 = func_41(iParam0, 0);
	func_127(iParam0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
		{
			PED::_RESERVE_AMBIENT_PEDS_TOTAL(1);
			bVar2 = true;
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
		}
		PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar1);
		if (bVar2)
		{
			PED::_UNRESERVE_AMBIENT_PEDS(1);
		}
	}
	PERSCHAR::_0xFCC6DB8DBE709BC8(iVar1);
}

bool func_96(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	if (Global_1360165[iParam0 /*1157*/].f_70.f_11 == 0 || Global_1360165[iParam0 /*1157*/].f_70.f_11 == Global_1360165[iParam0 /*1157*/].f_128)
	{
		return false;
	}
	return true;
}

bool func_97(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return Global_1360165[iParam0 /*1157*/].f_70.f_11 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_98(int iParam0, int iParam1, bool bParam2)
{
	if (!func_84(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 |= iParam1;
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_70.f_1 -= (Global_1360165[iParam0 /*1157*/].f_70.f_1 & iParam1);
	}
}

int func_99(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_84(iParam0))
	{
		return 0;
	}
	iVar0 = func_49(iParam0);
	if (func_40(iVar0, 0))
	{
		if (func_40(PED::_GET_RIDER_OF_MOUNT(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_96(iParam0)) || func_97(iParam0))
		{
			if (bParam2 || !(ENTITY::IS_ENTITY_ON_SCREEN(iVar0) && func_128(PLAYER::PLAYER_PED_ID(), iVar0, 1) < 10000.0f))
			{
				iVar1 = func_129(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
					}
					func_130(iParam0);
					PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_131(iParam0, 0));
					PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(iParam0, 0));
					func_132(iParam0);
				}
			}
			else
			{
				if (func_34(iParam0, (1 << 15), 1))
				{
					iVar2 = func_131(iParam0, 0);
					PERSCHAR::_0xB65E7F733956CF25(iVar2);
					PERSCHAR::_0xFCC6DB8DBE709BC8(iVar2);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_40(Global_1360165[iParam0 /*1157*/].f_124, 0))
		{
			if (func_34(iParam0, (1 << 15), 1))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_130(iParam0);
				PERSCHAR::_FORCE_DESPAWN_PERSCHAR(func_131(iParam0, 0));
				PERSCHAR::_0xFCC6DB8DBE709BC8(func_131(iParam0, 0));
			}
			else
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				func_130(iParam0);
				PED::DELETE_PED(&(Global_1360165[iParam0 /*1157*/].f_124));
			}
		}
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_1 = 0;
	func_133(iParam0, 0);
	return 1;
}

char* func_100(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_101(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
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
		if (func_134(iParam1))
		{
			func_135(iParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_136(iParam0, 0, 1);
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
			func_137(iParam0, 0);
			bVar0 = true;
		}
		func_138(iParam0, bParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_102(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

bool func_103(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_104(int iParam0)
{
	return (Global_1572864.f_3 & iParam0) != 0;
}

int func_105(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!func_139(iParam0))
	{
		return 0;
	}
	if ((func_140(Global_1347702[59 /*49*/].f_15, 1) && !func_140(Global_1347702[61 /*49*/].f_15, 1)) && (Global_40.f_9052.f_21 & 2) == 0)
	{
		return 0;
	}
	if (func_141(PLAYER::PLAYER_ID(), 1, 0))
	{
		if ((!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && !func_142(iParam0)) && !Global_43891)
		{
			func_144(iParam0, BUILTIN::VDIST2(func_143(iParam0), Global_36), -1, 1, 1);
			func_145(&(Global_1835011[iParam0 /*74*/]), 2);
		}
		return 0;
	}
	if (bParam2)
	{
		if (!func_147(func_146(iParam0), func_78(iParam0), 0, Global_1835011[iParam0 /*74*/].f_21, iParam3))
		{
			return 0;
		}
		if (func_148(1) > 1)
		{
			if (Global_1835011[iParam0 /*74*/].f_73 <= 0)
			{
				Global_1835011[iParam0 /*74*/].f_73 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - Global_1835011[iParam0 /*74*/].f_73) < 60000)
			{
				if (func_149(iParam0, 0, 1))
				{
					return 0;
				}
				if ((iParam0 == 15 && (Global_1357549.f_1494 & (1 << 15)) != 0) && func_61(Global_35, func_150(iParam0), 50.0f, 1, 1))
				{
					if (!GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
					{
						Global_1835011[iParam0 /*74*/].f_72 = GRAPHICS::CREATE_TRACKED_POINT();
						GRAPHICS::SET_TRACKED_POINT_INFO(Global_1835011[iParam0 /*74*/].f_72, func_150(iParam0), 5.0f);
					}
					if (CAM::IS_SCREEN_FADED_IN() && (GRAPHICS::IS_TRACKED_POINT_VISIBLE(Global_1835011[iParam0 /*74*/].f_72) || CAM::IS_SPHERE_VISIBLE(func_150(iParam0), 2.5f)))
					{
						return 0;
					}
				}
			}
		}
	}
	iVar0 = func_151(Global_1835011[iParam0 /*74*/].f_1);
	if (!func_106(iVar0))
	{
		return 0;
	}
	else if (Global_1835011[iParam0 /*74*/].f_73 != 0)
	{
		Global_1835011[iParam0 /*74*/].f_73 = 0;
		func_152(iParam0);
		if (GRAPHICS::_IS_TRACKED_POINT_VALID(Global_1835011[iParam0 /*74*/].f_72))
		{
			GRAPHICS::DESTROY_TRACKED_POINT(Global_1835011[iParam0 /*74*/].f_72);
		}
	}
	if (bParam1)
	{
		func_153(Global_1835011[iParam0 /*74*/].f_1);
	}
	else if (!Global_1879534)
	{
		func_154(4);
	}
	return 1;
}

bool func_106(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 15)
	{
		return false;
	}
	return true;
}

void func_107(int iParam0, int iParam1)
{
	if (!func_106(iParam0))
	{
		return;
	}
	Global_1898346[iParam0 /*6*/].f_1 |= iParam1;
}

float func_108(Vector3 vParam0, Vector3 vParam3)
{
	vParam0.f_2 = 0.0f;
	vParam3.f_2 = 0.0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_109(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_110(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_65(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[iVar0 /*18*/].f_3);
}

int func_111(int iParam0, char* sParam1, Vector3* vParam2)
{
	int iVar0;
	bool bVar1;
	Vector3 vVar2;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			bVar1 = false;
		}
		else
		{
			bVar1 = true;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, bVar1, false) /*3*/ };
		if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sParam1, vVar2, &iVar0))
		{
			if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, iVar0, vParam2))
			{
				return iVar0;
			}
		}
	}
	return iVar0;
}

int func_112(int iParam0, int iParam1, int iParam2)
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

float func_113(struct<2> /*16*/ sParam0, var uParam2, struct<2> /*16*/ sParam3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((sParam3.f_0 - sParam0.f_0), (sParam3.f_1 - sParam0.f_1));
}

float func_114(var uParam0)
{
	if (!func_86(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_119(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_155() - uParam0->f_1);
}

int func_115(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_156(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_157(iVar1, iParam1, sParam0, 0, 3, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, (1 << 30), 0, 1065353216, 0, 0, iParam2, joaat("SHORT_TIMED_EVENT"), 0);
		return iVar1;
	}
	return 0;
}

void func_116(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_65(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1945188[iVar0 /*18*/].f_3, iParam1, bParam2);
}

int func_117(int iParam0)
{
	return iParam0;
}

void func_118(int iParam0)
{
	if (!func_158(iParam0))
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

bool func_119(var uParam0)
{
	return func_123(*uParam0, 2);
}

int func_120()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

int func_121(int iParam0, int iParam1)
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

int func_122(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_1;
	}
	iVar0 = func_159(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888.f_40431.f_1[iVar0 /*2*/].f_1;
}

bool func_123(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

void func_124(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_155() - fParam1);
	func_160(uParam0, 1);
	func_161(uParam0, 2);
	uParam0->f_2 = 0.0f;
}

int func_125(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return joaat("PERSCHAR_COMP_JOHN");
		case 0:
			return joaat("PERSCHAR_COMP_DUTCH");
		case 6:
			return joaat("PERSCHAR_COMP_MICAH");
		case 3:
			return joaat("PERSCHAR_COMP_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_CHARLES");
		case 4:
			return joaat("PERSCHAR_COMP_UNCLE");
		case 2:
			return joaat("PERSCHAR_COMP_JAVIER");
		case 5:
			return joaat("PERSCHAR_COMP_HOSEA");
		case 8:
			return joaat("PERSCHAR_COMP_SEAN");
		case 9:
			return joaat("PERSCHAR_COMP_LENNY");
		case 13:
			return joaat("PERSCHAR_COMP_ABIGAIL");
		case 14:
			return joaat("PERSCHAR_COMP_JACK");
		case 15:
			return joaat("PERSCHAR_COMP_MARYBETH");
		case 16:
			return joaat("PERSCHAR_COMP_MOLLY");
		case 17:
			return joaat("PERSCHAR_COMP_PEARSON");
		case 18:
			return joaat("PERSCHAR_COMP_STRAUSS");
		case 19:
			return joaat("PERSCHAR_COMP_GRIMSHAW");
		case 20:
			return joaat("PERSCHAR_COMP_KAREN");
		case 21:
			return joaat("PERSCHAR_COMP_SWANSON");
		case 22:
			return joaat("PERSCHAR_COMP_TILLY");
		case 23:
			return joaat("PERSCHAR_COMP_TRELAWNY");
		case 10:
			return joaat("PERSCHAR_COMP_KIERAN");
		case 24:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_1");
		case 25:
			return joaat("PERSCHAR_CAMP_MICAH_GOON_2");
		case 26:
			return joaat("PERSCHAR_COMP_EAGLEFLIES");
		case 11:
			return joaat("PERSCHAR_COMP_SADIE");
		case 12:
			return joaat("PERSCHAR_COMP_DOG");
	}
	return 0;
}

void func_126(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_12(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0 /*60*/] |= iParam1;
}

void func_127(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		func_162(iParam1);
	}
}

float func_128(int iParam0, int iParam1, bool bParam2)
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
	return func_108(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_129(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (Global_1360165[iParam0 /*1157*/].f_127 != 0)
	{
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	switch (iParam0)
	{
		case 3:
			return joaat("PERSCHAR_COMP_HORSE_BILL");
		case 7:
			return joaat("PERSCHAR_COMP_HORSE_CHARLES");
		case 0:
			return joaat("PERSCHAR_COMP_HORSE_DUTCH");
		case 5:
			return joaat("PERSCHAR_COMP_HORSE_HOSEA");
		case 2:
			return joaat("PERSCHAR_COMP_HORSE_JAVIER");
		case 1:
			return joaat("PERSCHAR_COMP_HORSE_JOHN");
		case 9:
			return joaat("PERSCHAR_COMP_HORSE_LENNY");
		case 6:
			return joaat("PERSCHAR_COMP_HORSE_MICAH");
		case 11:
			return joaat("PERSCHAR_COMP_HORSE_SADIE");
		case 8:
			return joaat("PERSCHAR_COMP_HORSE_SEAN");
		case 23:
			return joaat("PERSCHAR_COMP_HORSE_TRELAWNEY");
		case 20:
			return joaat("PERSCHAR_COMP_HORSE_KAREN");
		case 4:
			return joaat("PERSCHAR_COMP_HORSE_UNCLE");
		case 10:
			return joaat("PERSCHAR_COMP_HORSE_ODRISCOLL");
		case 26:
			return joaat("PERSCHAR_COMP_HORSE_EAGLE_FLIES");
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_127 = func_163(iParam0);
		return Global_1360165[iParam0 /*1157*/].f_127;
	}
	return 0;
}

void func_130(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_49(iParam0);
	if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar1))
	{
		iVar3 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar1));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
		{
		}
		else
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar3))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar3, true, true);
			}
			ENTITY::_DELETE_CARRIABLE(&iVar3);
		}
		iVar2++;
	}
}

int func_131(int iParam0, bool bParam1)
{
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126) && bParam1)
	{
		Global_1360165[iParam0 /*1157*/].f_126 = func_164(iParam0);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

void func_132(int iParam0)
{
	int iVar0;

	if (!func_84(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549.f_1675[iVar0 /*5*/].f_1 == iParam0)
		{
			Global_1357549.f_1675[iVar0 /*5*/].f_1 = -1;
			Global_1360165[iParam0 /*1157*/].f_127 = 0;
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!func_84(iParam0))
	{
		return;
	}
	Global_1360165[iParam0 /*1157*/].f_70.f_12 = iParam1;
}

bool func_134(int iParam0)
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

void func_135(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_165(iParam0, iParam1))
		{
			if (func_166(iParam0, iParam1))
			{
				if (func_167(iParam0, iParam1))
				{
					PED::_APPLY_PED_METAPED_OUTFIT(DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_168(iParam0);
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

void func_136(int iParam0, int iParam1, bool bParam2)
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

void func_137(int iParam0, bool bParam1)
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

void func_138(int iParam0, bool bParam1)
{
	if (bParam1 == 1)
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 0.0f);
	}
	else
	{
		PED::_SET_PED_FACE_FEATURE(iParam0, 41611, 1.0f);
	}
}

bool func_139(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	return func_169(Global_1835011[iParam0 /*74*/].f_1);
}

bool func_140(int iParam0, bool bParam1)
{
	switch (func_170(iParam0))
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

bool func_141(int iParam0, bool bParam1, bool bParam2)
{
	if (func_171(iParam0, bParam1, bParam2, 1))
	{
		return true;
	}
	return false;
}

bool func_142(int iParam0)
{
	return func_172(iParam0);
}

Vector3 func_143(int iParam0)
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

int func_144(int iParam0, float fParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	char cVar7[16];

	if (func_104((1 << 15)))
	{
		return 0;
	}
	iVar0 = func_173();
	if ((iParam4 && func_174(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 9))) && !func_174(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 10)))
	{
		if (func_175())
		{
			return 0;
		}
	}
	if (Global_1835011[iParam0 /*74*/].f_71)
	{
		return 0;
	}
	if (!func_176(iParam0))
	{
		return 0;
	}
	if (iVar0 == -1)
	{
		if (iParam0 == 19)
		{
			if ((func_140(Global_1835011[20 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[20 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_177()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 20)
		{
			if ((func_140(Global_1835011[19 /*74*/].f_1, 1) && Global_1879514.f_1 == Global_1835011[19 /*74*/].f_1) && (MISC::GET_GAME_TIMER() - func_177()) <= 2000)
			{
				return 0;
			}
		}
		else if (iParam0 == 14)
		{
			if (!func_140(Global_1347702[62 /*49*/].f_15, 1))
			{
				return 0;
			}
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		bVar3 = Global_1835011[iParam0 /*74*/].f_70;
		if (func_178(iParam0, iVar0) && !bVar3)
		{
			if (bParam3 || func_179(&(Global_1835011[iParam0 /*74*/]), 2))
			{
				if (func_180(iParam0))
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_181(iParam0));
					bVar2 = true;
				}
				else
				{
					Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_182(iParam0));
				}
			}
			else if (func_180(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::_BLIP_ADD_FOR_AREA(joaat("BLIP_STYLE_MISSION"), func_181(iParam0), func_183(iParam0), func_184(iParam0));
				bVar2 = true;
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_RADIUS(joaat("BLIP_STYLE_MISSION"), func_185(iParam0), func_186(iParam0));
			}
		}
		else if (bVar3)
		{
			if (!func_180(iParam0))
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_143(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_181(iParam0));
				bVar2 = true;
			}
		}
		else if (func_142(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_RCM"), func_182(iParam0));
			}
			else
			{
				Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_182(iParam0));
			}
		}
		else
		{
			Global_1835011[iParam0 /*74*/].f_27 = MAP::BLIP_ADD_FOR_COORDS(joaat("BLIP_STYLE_MISSION"), func_182(iParam0));
		}
		Global_1835011[iParam0 /*74*/].f_28 = joaat("BLIP_STYLE_MISSION");
		bVar1 = true;
		if (iParam2 != -1)
		{
			if (bVar2 || func_180(iParam0))
			{
				func_107(iParam2, (1 << 22));
			}
			else
			{
				func_82(iParam2, (1 << 22));
			}
		}
		MAP::SET_BLIP_FLASH_TIMER(Global_1835011[iParam0 /*74*/].f_27, 63, iParam0);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27))
	{
		return 0;
	}
	if (bVar1)
	{
		MAP::SET_BLIP_SPRITE(Global_1835011[iParam0 /*74*/].f_27, Global_1835011[iParam0 /*74*/].f_26, true);
		if (iVar0 != -1)
		{
			MAP::_SET_BLIP_NAME(Global_1835011[iParam0 /*74*/].f_27, &(Global_1835011[iParam0 /*74*/].f_39));
		}
		if (!func_174(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 10)) && !func_142(iParam0))
		{
			MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_URGENT_ALERT"));
			func_187(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 10));
		}
	}
	if (iVar0 != -1)
	{
		return 1;
	}
	if (!func_142(iParam0))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
	}
	if (bParam3 || func_179(&(Global_1835011[iParam0 /*74*/]), 2))
	{
		MAP::BLIP_ADD_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1835011[iParam0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
	}
	iVar4 = func_188(Global_40.f_4283);
	if (func_189(iVar4) && func_190(Global_1888801[iVar4 /*35*/].f_13))
	{
		bVar5 = true;
		bVar6 = func_191(iVar4);
	}
	if (func_192(iParam0, bVar5, iVar4))
	{
		func_193(Global_1835011[iParam0 /*74*/].f_1, bVar6, bVar5, iVar4);
	}
	if (iParam0 == 7 && !func_194(579))
	{
		func_195(579, Global_1835011[iParam0 /*74*/].f_27, 0);
	}
	if (iParam0 == 2)
	{
		return 1;
	}
	if (((((((func_174(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 12)) && !func_174(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 13))) && (float)func_177() >= 10.0f) && !Global_1935630.f_12) && !Global_16) && !func_196(Global_35, joaat("PROP_PLAYER_SLEEP_TENT_A_FRAME"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED"))) && !PED::IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_SLEEP_BEDROLL")))
	{
		if (!func_178(iParam0, iVar0) || (fParam1 >= (func_197(iParam0) * func_197(iParam0)) && !Global_1835011[iParam0 /*74*/].f_70))
		{
			MemCopy(&cVar7, {Global_1835011[iParam0 /*74*/].f_8}, 2);
			strcat_s(&cVar7, 16, "_FIRST");
			func_198(&cVar7, 10000, 0, 0, 0, 1);
			func_187(&(Global_1835011[iParam0 /*74*/].f_29), (1 << 13));
		}
	}
	return 1;
}

void func_145(var uParam0, int iParam1)
{
	uParam0->f_63 |= iParam1;
}

int func_146(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 0;
	}
	return Global_1835011[iParam0 /*74*/].f_30;
}

bool func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	if (func_173() != -1)
	{
		return true;
	}
	if (iParam2 == 0 && func_199(0, 1, 1))
	{
		return false;
	}
	if (Global_1879534)
	{
		return false;
	}
	if (func_200(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_201(iVar0, &iParam0))
		{
			Global_40.f_4942[iVar0 /*60*/].f_59 = iParam1;
			if (iParam3 == iParam4)
			{
				func_126(iVar0, (1 << 9), 1);
			}
			else
			{
				func_48(iVar0, (1 << 9), 1);
			}
		}
		iVar0++;
	}
	return true;
}

int func_148(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case 987244216:
						iVar1 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
						if (func_202(Global_1347702[iVar1 /*49*/].f_12, 1))
						{
							iVar0++;
						}
						break;
				}
			}
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar3 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/])
				{
					case joaat("FLOW_DO_MISSION_AT_BLIP"):
						if (!bParam0)
						{
							iVar0++;
						}
						else
						{
							iVar2 = Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar3 /*4*/].f_1 /*3*/].f_2;
							if (func_103(iVar2) && !func_172(iVar2))
							{
								iVar0++;
							}
						}
						break;
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

bool func_149(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	iVar0 = func_146(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_201(iVar1, &iVar0))
		{
			iVar2 = func_92(func_203(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				if (bParam1 && func_42(iVar1, 67, 1))
				{
					return true;
				}
				if (bParam2 && func_42(iVar1, 47, 1))
				{
					return true;
				}
				if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar2))
				{
					PED::REQUEST_PED_VISIBILITY_TRACKING(iVar2);
				}
				if (PED::IS_TRACKED_PED_VISIBLE(iVar2))
				{
					return true;
				}
			}
		}
		iVar1++;
	}
	return false;
}

Vector3 func_150(int iParam0)
{
	return func_182(iParam0);
}

int func_151(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> /*48*/ sVar3;

	if (Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_169(iParam0))
	{
		return -1;
	}
	if (func_173() != -1)
	{
		iVar2 = func_79(iParam0);
		if (iVar2 >= 0)
		{
			func_204(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = Global_1898329;
			Global_1898330[iVar1] = iParam0;
			Global_1898346[iVar1 /*6*/] = { sVar3 /*6*/ };
			func_205(iVar1, 1);
			func_204(iParam0, 1);
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
		iVar2 = func_79(iParam0);
		if (iVar2 >= 0)
		{
			func_204(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < Global_1898330)
			{
				if (!func_206(Global_1898330[iVar0]))
				{
					Global_1898330[iVar0] = iParam0;
					Global_1898346[iVar0 /*6*/] = { sVar3 /*6*/ };
					func_205(iVar0, 1);
					func_204(iParam0, 1);
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

void func_152(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_146(iParam0);
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (func_201(iVar1, &iVar0))
		{
			iVar2 = func_92(func_203(iParam0));
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else if (PED::_IS_PED_VISIBILITY_TRACKED(iVar2))
			{
				PED::RELEASE_PED_VISIBILITY_TRACKING(iVar2);
			}
		}
		iVar1++;
	}
}

void func_153(int iParam0)
{
	func_207(iParam0);
}

void func_154(int iParam0)
{
	Global_1898164 |= iParam0;
}

float func_155()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000.0f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000.0f);
}

bool func_156(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1945188[iParam0 /*18*/].f_1 & iParam1) != 0;
}

void func_157(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, Vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1945188[iParam0 /*18*/].f_4 = iParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { vParam6 /*3*/ };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = iParam10;
	Global_1945188[iParam0 /*18*/].f_11 = iParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0.0f, 0.0f, 0.0f /*3*/ };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0.0f, 0.0f, 0.0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1.0f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0.0f, fParam19);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1945188[iParam0 /*18*/].f_3 = iVar0;
	func_208(iParam0, 1);
	func_209(iParam0, 1);
	func_210(iParam0, 128);
}

bool func_158(int iParam0)
{
	return func_156(iParam0, 2);
}

int func_159(int iParam0)
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

void func_160(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

void func_161(var uParam0, int iParam1)
{
	*uParam0 -= (*uParam0 & iParam1);
}

void func_162(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "metaped_outfit_request");
	if (PED::_IS_METAPED_OUTFIT_REQUEST_VALID(iVar0))
	{
		PED::_RELEASE_METAPED_OUTFIT_REQUEST(iVar0);
	}
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

int func_163(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!func_84(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549.f_1675[iVar1 /*5*/].f_1 == iParam0)
			{
				Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
				return Global_1357549.f_1675[iVar1 /*5*/];
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (Global_1357549.f_1675[iVar1 /*5*/] != 0 && Global_1357549.f_1675[iVar1 /*5*/].f_1 == -1)
		{
			iVar0 = Global_1357549.f_1675[iVar1 /*5*/];
			Jump @165; // curOff = 150
		}
		iVar1++;
	}
	if (!func_84(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549.f_1675[iVar1 /*5*/].f_1 = iParam0;
			Global_1360165[iParam0 /*1157*/].f_126 = Global_1357549.f_1675[iVar1 /*5*/].f_4;
		}
	}
	return iVar0;
}

int func_164(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_84(iParam0))
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_126))
	{
		iVar0 = func_129(iParam0, 1);
		iVar1 = PERSCHAR::_GET_PERSCHAR_MODEL_NAME(iVar0);
		if (Global_40.f_4942[iParam0 /*60*/].f_7 != 0 && iVar1 != Global_40.f_4942[iParam0 /*60*/].f_7)
		{
			PERSCHAR::_0x8BC555034A5A5E8C(iVar0, Global_40.f_4942[iParam0 /*60*/].f_7);
		}
		Global_1360165[iParam0 /*1157*/].f_126 = PERSCHAR::_CREATE_PERSISTENT_CHARACTER(iVar0);
		PERSCHAR::_0xFCC6DB8DBE709BC8(Global_1360165[iParam0 /*1157*/].f_126);
	}
	return Global_1360165[iParam0 /*1157*/].f_126;
}

bool func_165(int iParam0, int iParam1)
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

bool func_166(int iParam0, int iParam1)
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

bool func_167(int iParam0, int iParam1)
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
	if (!func_165(iParam0, iVar0))
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

void func_168(int iParam0)
{
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(iParam0, "metaped_outfit_request_name");
}

bool func_169(int iParam0)
{
	return func_170(iParam0) == 0;
}

int func_170(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_122(iParam0);
}

bool func_171(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> /*88*/ sVar0;
	int iVar17;
	struct<11> /*88*/ sVar18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_211(bParam1, bParam2, bParam3);
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

bool func_172(int iParam0)
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return true;
	}
	return false;
}

int func_173()
{
	return Global_1572887.f_12;
}

bool func_174(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = (*uParam0 & iParam1);
	if (!iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_175()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_176(int iParam0)
{
	if (func_173() == 0)
	{
		return true;
	}
	switch (iParam0)
	{
		case 18:
			return func_140(Global_1347702[21 /*49*/].f_15, 1);
		case 44:
			return func_140(Global_1347702[83 /*49*/].f_15, 1);
	}
	return true;
}

int func_177()
{
	return Global_1898438;
}

bool func_178(int iParam0, int iParam1)
{
	if (iParam1 != -1)
	{
		return false;
	}
	if (func_180(iParam0))
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

bool func_179(var uParam0, int iParam1)
{
	return (uParam0->f_63 & iParam1) != 0;
}

bool func_180(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_212(&(Global_1835011[iParam0 /*74*/]));
	}
	return false;
}

Vector3 func_181(int iParam0)
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

Vector3 func_182(int iParam0)
{
	if (func_180(iParam0))
	{
		return func_181(iParam0);
	}
	return Global_1835011[iParam0 /*74*/].f_18;
}

Vector3 func_183(int iParam0)
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

int func_184(int iParam0)
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

Vector3 func_185(int iParam0)
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

float func_186(int iParam0)
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

void func_187(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_188(int iParam0)
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

bool func_189(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_190(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);
	}
	return false;
}

bool func_191(int iParam0)
{
	if (!func_213(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		{
			return true;
		}
		if (func_214(iParam0))
		{
			if (BUILTIN::VDIST(Global_36, func_215(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
			{
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_215(iParam0), false) <= func_216();
			}
		}
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_216();
	}
	return func_217();
}

bool func_192(int iParam0, bool bParam1, int iParam2)
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

void func_193(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_206(iParam0))
	{
		return;
	}
	switch (func_218(iParam0))
	{
		case 1:
			iVar0 = func_219(iParam0);
			if (func_220(iVar0, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				if ((func_178(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && (Global_1835011[iVar0 /*74*/].f_63 & 2) == 0)
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				}
				else
				{
					iVar2 = joaat("BLIP_STYLE_MISSION_HIDDEN");
				}
			}
			else if ((func_178(iVar0, -1) && !Global_1835011[iVar0 /*74*/].f_70) && (Global_1835011[iVar0 /*74*/].f_63 & 2) == 0)
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
				if (!func_142(iVar0))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
				}
				if (func_179(&(Global_1835011[iVar0 /*74*/]), 2))
				{
					MAP::BLIP_ADD_MODIFIER(Global_1835011[iVar0 /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
				}
				Global_1835011[iVar0 /*74*/].f_28 = iVar2;
			}
			break;
		case 8:
			iVar1 = func_219(iParam0);
			if (func_221(iVar1, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_222(iVar1))
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
				iVar2 = func_222(iVar1);
			}
			if (Global_1347702[iVar1 /*49*/].f_38 != iVar2)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[iVar1 /*49*/].f_37, iVar2);
				func_223(iVar1);
				Global_1347702[iVar1 /*49*/].f_38 = iVar2;
			}
			break;
	}
}

bool func_194(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_173() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iVar1], iVar2);
}

void func_195(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_224(iParam0, &iVar0, &iVar1);
	if (!func_225(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_226(iParam0, (1 << 10)))
	{
		return;
	}
	func_227(iVar0, iVar1);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = uParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

bool func_196(int iParam0, int iParam1)
{
	return PED::IS_PED_USING_SCENARIO_HASH(iParam0, iParam1);
}

float func_197(int iParam0)
{
	return (func_186(iParam0) / 2.0f);
}

int func_198(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_199(int iParam0, bool bParam1, bool bParam2)
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
		if (func_228())
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
		iVar0 = func_219(Global_1898164.f_1[0 /*5*/]);
		if (func_229(iVar0) && func_202(Global_1347702[iVar0 /*49*/].f_12, (1 << 17)))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_206(Global_1898164.f_1[0 /*5*/]))
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

bool func_200(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_201(iVar0, &iParam0))
		{
			if (Global_40.f_4942[iVar0 /*60*/].f_59 != 0 && Global_40.f_4942[iVar0 /*60*/].f_59 != iParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_201(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_12(iParam0))
	{
		return false;
	}
	iVar0 = func_230(iParam0);
	return (*iParam1 & iVar0) != 0;
}

bool func_202(int iParam0, int iParam1)
{
	return (iParam0 & iParam1) != 0;
}

int func_203(int iParam0)
{
	if (!func_103(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

void func_204(int iParam0, bool bParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (!func_169(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_231(iParam0) == 0)
		{
		}
		else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_231(iParam0)))
		{
			STATS::_0xCA41E86545413B5B(func_218(iParam0), func_219(iParam0), func_232(iParam0), func_231(iParam0), Global_36);
		}
	}
	func_233(iParam0, 1);
	bParam1 = bParam1;
}

void func_205(int iParam0, bool bParam1)
{
	if (Global_1898346[iParam0 /*6*/].f_2 == 0 || bParam1)
	{
		Global_1898346[iParam0 /*6*/].f_2 = func_234(Global_1898330[iParam0]);
		func_235(Global_1898346[iParam0 /*6*/].f_2, &(Global_1898346[iParam0 /*6*/].f_4), &(Global_1898346[iParam0 /*6*/].f_5), &(Global_1898346[iParam0 /*6*/].f_3));
	}
}

bool func_206(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

void func_207(int iParam0)
{
	if (!func_206(iParam0))
	{
		return;
	}
	if (!func_80(iParam0))
	{
		return;
	}
	func_233(iParam0, 2);
}

void func_208(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_156(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);
		}
	}
}

void func_209(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);
	}
}

void func_210(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1945188[iParam0 /*18*/].f_1 |= iParam1;
}

int func_211(bool bParam0, bool bParam1, bool bParam2)
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

bool func_212(var uParam0)
{
	if (func_174(&(uParam0->f_29), 62))
	{
		switch (func_236())
		{
			case 1:
				if (!func_174(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_174(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_174(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_174(&(uParam0->f_29), 32))
				{
					if (func_174(&(uParam0->f_29), 2))
					{
						if (func_238(func_237()) < 5)
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

bool func_213(int iParam0)
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

bool func_214(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return true;
	}
	return false;
}

Vector3 func_215(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return { -2578.509f, 389.3037f, 148.3825f };
	}
	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_216()
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

bool func_217()
{
	return (Global_1894899 & 2) != 0;
}

int func_218(int iParam0)
{
	if (!func_206(iParam0))
	{
		return 0;
	}
	return func_239(func_234(iParam0));
}

int func_219(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_240(func_234(iParam0));
}

bool func_220(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_192(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

bool func_221(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!bParam1 && func_241(iParam0, bParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_222(int iParam0)
{
	int iVar0;

	iVar0 = joaat("BLIP_STYLE_RCM");
	if (!func_229(iParam0))
	{
		return iVar0;
	}
	if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		iVar0 = joaat("BLIP_STYLE_MISSION");
	}
	else if ((Global_1347702[iParam0 /*49*/].f_12 & (1 << 9)) != 0)
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

void func_223(int iParam0)
{
	if ((Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
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

void func_224(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_225(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_242(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_243(iParam0))
	{
		return false;
	}
	if (func_244(iParam0))
	{
		return false;
	}
	if ((Global_1898164.f_163 && !func_226(iParam0, 1)) || func_104((1 << 15)))
	{
		if (!func_226(iParam0, (1 << 18)) || !Global_1905944.f_5696)
		{
			return false;
		}
	}
	if (!func_245())
	{
		return false;
	}
	return true;
}

bool func_226(int iParam0, int iParam1)
{
	return (Global_1905944.f_22[iParam0 /*9*/].f_2 & iParam1) != 0;
}

void func_227(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1905944[iParam0] = uVar0;
}

bool func_228()
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

bool func_229(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

int func_230(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_231(int iParam0)
{
	if (Global_1572887.f_12 == -1)
	{
		return Global_12106[iParam0 /*7*/].f_5;
	}
	return Global_1058888.f_428[iParam0 /*2*/].f_1;
}

int func_232(int iParam0)
{
	if (!func_206(iParam0))
	{
		return -1;
	}
	return func_246(func_234(iParam0));
}

void func_233(int iParam0, int iParam1)
{
	if (!func_206(iParam0))
	{
		return;
	}
	func_247(iParam0, iParam1);
}

int func_234(int iParam0)
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

void func_235(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_239(iParam0);
	*uParam1 = func_240(iParam0);
	*uParam2 = func_246(iParam0);
}

int func_236()
{
	return Global_1899516;
}

int func_237()
{
	return Global_1899515;
}

int func_238(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31);
}

int func_239(int iParam0)
{
	return (iParam0 & 31);
}

int func_240(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023);
}

bool func_241(int iParam0, bool bParam1, int iParam2)
{
	if ((bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[iParam0 /*49*/].f_37)) && (Global_1347702[iParam0 /*49*/].f_12 & 1) != 0)
	{
		return Global_1347702[iParam0 /*49*/].f_27 == iParam2;
	}
	return false;
}

bool func_242(int iParam0, int iParam1)
{
	if (func_173() != -1)
	{
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);
	}
	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

bool func_243(int iParam0)
{
	if (func_173() != -1)
	{
		if (func_226(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_226(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_226(iParam0, (1 << 16)) && !func_226(iParam0, (1 << 15)))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_226(iParam0, (1 << 17)))
			{
				iVar3 = 2;
			}
			iVar2 = (iVar1 - Global_40.f_7756[iVar0 /*3*/]);
			if (Global_40.f_7756[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_226(iParam0, (1 << 15)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_245()
{
	return Global_1905944.f_5694;
}

int func_246(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 15) & 16383);
}

void func_247(int iParam0, int iParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_248(iParam0);
	}
	else
	{
		func_249(iParam0, iParam1);
	}
	func_250();
}

int func_248(int iParam0)
{
	int iVar0;

	iVar0 = func_159(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_251(iVar0);
}

int func_249(int iParam0, int iParam1)
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
			func_252(iVar2);
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

void func_250()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1058888.f_40431)
	{
		iVar0++;
	}
}

int func_251(int iParam0)
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

int func_252(int iParam0)
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

