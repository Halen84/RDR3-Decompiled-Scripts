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
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	struct<63> /*504*/ sLocal_26 = { 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	Vector3 vLocal_93 = { 0.0f, 0.0f, 0.0f };
	var uLocal_96 = 0;
	bool bLocal_97 = false;
	bool bLocal_98 = false;
	int iLocal_99 = 0;
	bool bLocal_100 = false;
	bool bLocal_101 = false;
	bool bLocal_102 = false;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	bool bLocal_106 = false;
	int iScriptParam_0 = 0;
#pragma endregion

void __EntryFunction__()
{
	fLocal_7 = 1.0f;
	fLocal_8 = 1.0f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (iScriptParam_0 == -1)
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	Global_1430221.f_4 = 1;
	iLocal_92 = iScriptParam_0;
	func_5(&sLocal_26, 0, 534, 749, 1025);
	func_5(&sLocal_26, 1, 1112, 1184, 1398);
	func_5(&sLocal_26, 2, 1410, 1495, 1707);
	func_5(&sLocal_26, 3, 1719, 1731, 1859);
	func_5(&sLocal_26, 4, 1871, 1889, 1988);
	func_5(&sLocal_26, 5, 2000, 2054, 2235);
	func_5(&sLocal_26, 6, 2255, 2419, 3349);
	func_5(&sLocal_26, 7, 3447, 3499, 3563);
	func_5(&sLocal_26, 8, 3571, 3579, 3597);
	func_30(&sLocal_26, 0);
	while (!func_31(1))
	{
		BUILTIN::WAIT(0);
		func_32();
		func_33(&sLocal_26);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1()
{
	int iVar0;

	Global_1430221.f_4 = 0;
	func_34(1);
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_97) && !ENTITY::IS_ENTITY_DEAD(bLocal_97))
	{
		iVar0 = VEHICLE::_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE(bLocal_97);
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(iVar0))
		{
			VEHICLE::_0x38E7DD70A242D5CB(iVar0, 1);
		}
	}
	func_36(func_35());
	func_36(func_37());
	if (iLocal_99 != -1)
	{
		func_38(iLocal_99);
		func_39(iLocal_99, (1 << 10));
	}
	if (func_41(joaat("DOCUMENT_TRAIN_TICKET"), func_40(0), joaat("SLOTID_SATCHEL"), 1) >= 1)
	{
		func_42(joaat("DOCUMENT_TRAIN_TICKET"), 1, joaat("REMOVE_REASON_DEFAULT"), 0, 0);
	}
	if (bLocal_106)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			STREAMING::LOAD_SCENE_STOP();
		}
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
		if (bLocal_100)
		{
			TASK::CLEAR_PED_TASKS(func_43(1), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), false);
		}
		if (bLocal_101)
		{
			TASK::CLEAR_PED_TASKS(func_43(7), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), false);
		}
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_105))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_105);
	}
	func_44(1);
	return 1;
}

void func_2()
{
	func_45();
	func_46(-1, 0, 0, 0, 0);
	LAW::_0xE94B5E938619712E();
	func_34(0);
	func_47(&(Global_1392581.f_3), 8);
	CAM::DO_SCREEN_FADE_OUT(2000);
	bLocal_102 = false;
	iLocal_91 = func_48();
	iLocal_99 = func_49(iLocal_92);
	bLocal_106 = true;
	if (func_51(Global_35, func_43(7), func_50(7), 1) && !TASK::IS_PED_IN_WRITHE(func_43(7)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), true);
		bLocal_101 = true;
	}
	if (func_51(Global_35, func_43(1), func_50(1), 1) && !TASK::IS_PED_IN_WRITHE(func_43(1)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), true);
		bLocal_100 = true;
	}
	func_52(iLocal_91, 0, &vLocal_93, &uLocal_96);
	if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_START_SPHERE(vLocal_93, 40.0f, 0);
	}
	func_53(func_37());
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_3()
{
	int iVar0;

	LAW::_0xE94B5E938619712E();
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return -1;
	}
	if (!bLocal_102)
	{
		func_54(iLocal_99);
		func_55(iLocal_99, (1 << 10));
		func_39(iLocal_99, 2);
		func_39(iLocal_99, (1 << 16));
		func_39(iLocal_99, (1 << 12));
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iVar0 != iLocal_99)
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar0 /*373*/].f_1, true);
				func_55(iVar0, 2);
				VEHICLE::_0x0D5FDF0D36FA10CD(Global_1425371[iVar0 /*373*/].f_1);
			}
			iVar0++;
		}
		VEHICLE::DELETE_ALL_TRAINS();
		func_57(func_56(PLAYER::PLAYER_ID()), 250.0f, 1, 0, 0, 0, 0);
		bLocal_102 = true;
	}
	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	if (Global_1310750.f_16037 != 0)
	{
		func_45();
		func_46(-1, 0, 0, 0, 0);
		return -1;
	}
	if (!STREAMING::IS_LOAD_SCENE_LOADED())
	{
		return -1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1)))
	{
		return -1;
	}
	return 1;
}

void func_4()
{
	LAW::_0xE94B5E938619712E();
	STREAMING::LOAD_SCENE_STOP();
	STREAMING::CLEAR_FOCUS();
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/] = iParam2;
	uParam0->f_1[iVar0 /*3*/].f_1 = iParam3;
	uParam0->f_1[iVar0 /*3*/].f_2 = iParam4;
}

void func_6()
{
	LAW::_0xE94B5E938619712E();
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
	}
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_7()
{
	LAW::_0xE94B5E938619712E();
	if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1)))
	{
		VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
		if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
		{
			return 8;
		}
		return -1;
	}
	else
	{
		bLocal_97 = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
		{
			VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
			VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
		}
	}
	if (!VEHICLE::_HAS_TRAIN_LOADED(bLocal_97))
	{
		return -1;
	}
	return 2;
}

void func_8()
{
	LAW::_0xE94B5E938619712E();
}

void func_9()
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();
	if (func_41(joaat("DOCUMENT_TRAIN_TICKET"), func_40(0), joaat("SLOTID_SATCHEL"), 1) >= 1)
	{
		func_42(joaat("DOCUMENT_TRAIN_TICKET"), 1, joaat("REMOVE_REASON_DEFAULT"), 0, 0);
	}
	bLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(bLocal_97, 4);
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_98))
	{
		ENTITY::_0x6C31B06E91518269(bLocal_98, 1);
	}
}

int func_10()
{
	Vector3 vVar0;
	int iVar3;

	LAW::_0xE94B5E938619712E();
	if (!ENTITY::DOES_ENTITY_EXIST(bLocal_98) || ENTITY::IS_ENTITY_DEAD(bLocal_98))
	{
		bLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(bLocal_97, 4);
		return -1;
	}
	else
	{
		if (!ENTITY::_0xC2E71D7E0A7B4C89(bLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(bLocal_98, 1);
			return -1;
		}
		vVar0 = { ENTITY::GET_ENTITY_COORDS(bLocal_98, true, false) /*3*/ };
		if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(vVar0, 5.0f, false, Global_35, false))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_103) > 20000)
			{
				return 8;
			}
			else
			{
				iVar3 = (MISC::GET_GAME_TIMER() - iLocal_103);
				return -1;
			}
		}
		if (!func_58(Global_35, joaat("SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS")))
		{
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(bLocal_98, true, false), 5.0f);
		}
	}
	if (func_58(Global_35, joaat("SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS")))
	{
		func_59(func_56(PLAYER::PLAYER_ID()), 2.0f, 0);
		CAM::SET_CINEMATIC_MODE_ACTIVE(true);
		iLocal_103 = MISC::GET_GAME_TIMER();
		return 3;
	}
	return -1;
}

void func_11()
{
	LAW::_0xE94B5E938619712E();
}

void func_12()
{
	LAW::_0xE94B5E938619712E();
}

int func_13()
{
	if (!CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		iLocal_103 = MISC::GET_GAME_TIMER();
	}
	LAW::_0xE94B5E938619712E();
	if ((MISC::GET_GAME_TIMER() - iLocal_103) > 3500)
	{
		VEHICLE::SET_VEHICLE_HANDBRAKE(bLocal_97, false);
		VEHICLE::_0xA72B1BF3857B94D7(bLocal_97, true);
		VEHICLE::_0xDD100CE1EBBF37E3(bLocal_97, 0);
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(bLocal_97, false);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 8.0f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 8.0f);
		VEHICLE::_0x34BCF6209B9668A7(Global_1425371[iLocal_99 /*373*/].f_1, 1);
		return 4;
	}
	return -1;
}

void func_14()
{
	LAW::_0xE94B5E938619712E();
}

void func_15()
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();
}

int func_16()
{
	LAW::_0xE94B5E938619712E();
	if ((MISC::GET_GAME_TIMER() - iLocal_103) > 6000)
	{
		if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(3000);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return 5;
		}
		return -1;
	}
	if ((CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()) && CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	return -1;
}

void func_17()
{
	LAW::_0xE94B5E938619712E();
}

void func_18()
{
	LAW::_0xE94B5E938619712E();
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_105))
	{
		iLocal_105 = ANIMSCENE::_CREATE_ANIM_SCENE(func_60(-1), 0, 0, false, true);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(iLocal_105, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(iLocal_105);
	}
}

int func_19()
{
	LAW::_0xE94B5E938619712E();
	if ((((ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_105) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_105, false)) && CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_IN()) && ANIMSCENE::IS_ANIM_SCENE_LOADED(iLocal_105, true, false))
	{
		ANIMSCENE::START_ANIM_SCENE(iLocal_105);
		func_52(iLocal_92, 1, &vLocal_93, &uLocal_96);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iLocal_105))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(iLocal_105, false) && CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_53(func_35());
			func_57(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 40.0f, 1, 0, 0, 0, 0);
		}
		if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(iLocal_105) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(iLocal_105, false))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			return 6;
		}
	}
	return -1;
}

void func_20()
{
	func_36(func_35());
	LAW::_0xE94B5E938619712E();
}

void func_21()
{
	int iVar0;
	int iVar1;

	LAW::_0xE94B5E938619712E();
	STREAMING::REQUEST_COLLISION_AT_COORD(vLocal_93);
	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
	}
	if (ENTITY::DOES_ENTITY_EXIST(bLocal_98))
	{
		ENTITY::_0x6C31B06E91518269(bLocal_98, 1);
	}
	VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(bLocal_97, true);
	VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
	VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
	iLocal_103 = MISC::GET_GAME_TIMER();
	iVar0 = func_61(iLocal_91, iLocal_92);
	func_62(iVar0, 0, 0, 0, 1);
	iVar1 = func_63(iLocal_91, 1);
	func_64(1, iVar1, -695085701, 1, iVar0);
}

int func_22()
{
	Vector3 vVar0;
	Vector3 vVar3;
	float fVar6;
	int iVar7;
	Vector3 vVar8;
	var uVar11;
	Vector3 vVar12;
	var uVar15;
	int iVar16;

	LAW::_0xE94B5E938619712E();
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_LOAD_SCENE_LOADED())
			{
				return -1;
			}
		}
		else if (func_65(Global_35, vLocal_93, 1) < 1000.0f)
		{
			vVar0 = { vLocal_93 /*3*/ };
			fVar6 = func_66(bLocal_97, vLocal_93, &vVar3);
			if (!func_67(vVar3))
			{
				vVar0 = { vVar3 /*3*/ };
			}
			STREAMING::LOAD_SCENE_START_SPHERE(vVar0, fVar6, 1);
			iLocal_103 = MISC::GET_GAME_TIMER();
			return -1;
		}
		else
		{
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
			{
				VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
			}
			if (!func_58(Global_35, joaat("SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS")))
			{
				ENTITY::SET_ENTITY_COORDS(Global_35, vLocal_93, true, false, true, true);
			}
			return -1;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(bLocal_98))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(bLocal_97))
			{
				bLocal_97 = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1);
				VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
				VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, vLocal_93, uLocal_96);
				return -1;
			}
			else
			{
				bLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(bLocal_97, 4);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
				return -1;
			}
		}
		else if (!ENTITY::_0xC2E71D7E0A7B4C89(bLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(bLocal_98, 1);
			return -1;
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_103) < 500)
	{
		return -1;
	}
	if (!func_58(Global_35, joaat("SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS")))
	{
		if (TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(bLocal_98, true, false), 5.0f, false, Global_35, false))
		{
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(bLocal_98, true, false), 5.0f);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return -1;
		}
	}
	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		func_59(func_56(PLAYER::PLAYER_ID()), 2.0f, 0);
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(bLocal_97, true);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 8.0f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 8.0f);
		iVar7 = VEHICLE::_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE(bLocal_97);
		VEHICLE::_0x34BCF6209B9668A7(iVar7, 1);
		VEHICLE::_0x38E7DD70A242D5CB(iVar7, 0);
		CAM::DO_SCREEN_FADE_IN(3000);
		if (bLocal_100)
		{
			func_68(iLocal_92, &vVar8, &uVar11, 1);
			func_69(func_43(1), vVar8, uVar11, 32, (1 << 30));
			TASK::TASK_STAND_STILL(func_43(1), -1);
		}
		if (bLocal_101)
		{
			func_68(iLocal_92, &vVar12, &uVar15, 0);
			func_69(func_43(7), vVar12, uVar15, 32, (1 << 30));
			TASK::TASK_STAND_STILL(func_43(7), -1);
		}
		STREAMING::LOAD_SCENE_STOP();
		STREAMING::CLEAR_FOCUS();
		iLocal_104 = MISC::GET_GAME_TIMER();
		return -1;
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || !ENTITY::DOES_ENTITY_EXIST(bLocal_97))
		{
			if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				STREAMING::LOAD_SCENE_STOP();
			}
			return 7;
		}
	}
	if (bLocal_100)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(func_43(1), 0.0f);
		if (!func_58(func_43(1), joaat("SCRIPT_TASK_STAND_STILL")))
		{
			TASK::TASK_STAND_STILL(func_43(1), -1);
		}
	}
	if (bLocal_101)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(func_43(7), 0.0f);
		if (!func_58(func_43(7), joaat("SCRIPT_TASK_STAND_STILL")))
		{
			TASK::TASK_STAND_STILL(func_43(7), -1);
		}
	}
	iVar16 = (MISC::GET_GAME_TIMER() - iLocal_104);
	if (iVar16 < 40000 && !VEHICLE::IS_TRAIN_WAITING_AT_STATION(bLocal_97))
	{
		return -1;
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(3000);
		STREAMING::CLEAR_FOCUS();
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			STREAMING::LOAD_SCENE_STOP();
		}
	}
	VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
	VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0.0f);
	return 7;
}

void func_23()
{
	if (bLocal_100)
	{
		TASK::CLEAR_PED_TASKS(func_43(1), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), false);
	}
	if (bLocal_101)
	{
		TASK::CLEAR_PED_TASKS(func_43(7), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), false);
	}
	LAW::_0xE94B5E938619712E();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
}

void func_24()
{
	bLocal_106 = false;
	LAW::_0xE94B5E938619712E();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_70(&(Global_1392581.f_3), 8);
	iLocal_103 = MISC::GET_GAME_TIMER();
	func_36(func_37());
}

int func_25()
{
	LAW::_0xE94B5E938619712E();
	if (((MISC::GET_GAME_TIMER() - iLocal_103) > 30000 || !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID(), 0) > 0)
	{
		return 8;
	}
	return -1;
}

void func_26()
{
}

void func_27()
{
}

int func_28()
{
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return -1;
}

void func_29()
{
}

void func_30(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 20)
	{
		return;
	}
	*uParam0 = iVar0;
	func_71(uParam0);
}

bool func_31(bool bParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	return false;
}

void func_32()
{
	if (sLocal_26.f_62 != 7 && sLocal_26.f_62 != 8)
	{
		if (sLocal_26.f_62 != -1)
		{
			VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.0f);
			if (sLocal_26.f_62 != 0 && sLocal_26.f_62 != 1)
			{
				CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::_0x5651516D947ABC53();
		}
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	}
}

void func_33(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/].f_1);
		uParam0->f_64 = StackVal;
	}
	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
		{
			Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/].f_2);
		}
		uParam0->f_62 = uParam0->f_64;
		Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/]);
		Stack.Invoke(uParam0->f_1[uParam0->f_62 /*3*/].f_1);
		uParam0->f_64 = StackVal;
		iVar0++;
		if (iVar0 > 10)
		{
		}
	else
	{
		}
	}
}

void func_34(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1.0f);
		func_72(&Global_1935630, (1 << 22));
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.0f);
		func_73(&Global_1935630, (1 << 22));
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

char* func_35()
{
	return "FastTravel_Train_Ticket_Clouds_Sequence_Scene";
}

void func_36(char* sParam0)
{
	AUDIO::STOP_AUDIO_SCENE(sParam0);
}

char* func_37()
{
	return "FastTravel_Train_Ticket_Sequence_Scene";
}

void func_38(int iParam0)
{
	func_39(iParam0, 16);
}

void func_39(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] -= Global_40.f_11029[iParam0 /*5*/] & iParam1;
}

struct<4> /*32*/ func_40(bool bParam0)
{
	return func_76(joaat("CHARACTER"), func_75(), joaat("SLOTID_NONE"), bParam0);
}

int func_41(bool bParam0, struct<4> /*32*/ sParam1, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;
	int iVar4;

	if (!func_77(bParam0, 0))
	{
		return 0;
	}
	sVar0 = { func_76(bParam0, sParam1, iParam5, bParam6) /*4*/ };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&sVar0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_78(bParam6), &sVar0, false);
	return iVar4;
}

bool func_42(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> /*40*/ sVar0;
	struct<4> /*32*/ sVar5;

	if (!func_77(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	sVar0 = { func_79(bParam0, bParam4, 1) /*5*/ };
	if (sVar0.f_4 == joaat("SLOTID_SATCHEL"))
	{
		return func_80(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	sVar5 = { func_76(bParam0, sVar0, sVar0.f_4, bParam4) /*4*/ };
	return func_81(bParam0, &sVar5, &sVar0, iParam1, iParam2, iParam3, bParam4);
}

int func_43(int iParam0)
{
	iParam0 = func_82(iParam0);
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

void func_44(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_55(iVar0, (1 << 12));
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iVar0 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar0 /*373*/].f_1, false);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iVar1 /*373*/].f_1))
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[iVar1 /*373*/].f_1, true);
			}
			iVar1++;
		}
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}
	if (func_83() == -1)
	{
		Global_1430221.f_1 = !bParam0;
	}
}

void func_45()
{
	if (!func_84(Global_1327479))
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
	func_85(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0.0f, 0.0f, 0.0f /*3*/ };
}

void func_46(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (bParam1)
	{
	}
	if (func_86() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = Global_1310750.f_13321[iVar0 /*9*/];
		if (((func_84(iVar1) && !func_87(iVar1, iParam2)) && (!bParam3 || !func_88(iVar1))) && (!bParam4 || !func_89(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_90(iVar0);
			}
		}
		iVar0++;
	}
}

void func_47(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

int func_48()
{
	return Global_1894899.f_2;
}

int func_49(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	}
	return 0;
}

float func_50(int iParam0)
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

	iParam0 = func_82(iParam0);
	if (iParam0 == -1)
	{
		return -1.0f;
	}
	if (iParam0 >= 7)
	{
		return -1.0f;
	}
	iVar0 = func_91(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1.0f;
	}
	iVar1 = func_92(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_92(iParam0) + 1;
	fVar6 = func_93(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_94(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_51(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_52(int iParam0, bool bParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f /*3*/ };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f /*3*/ };
				*uParam3 = 0;
			}
			break;
		case 23:
			if (bParam1)
			{
				*uParam2 = { -1143.0f, -545.4f, 86.6f /*3*/ };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1067.019f, -604.0603f, 78.0298f /*3*/ };
				*uParam3 = 0;
			}
			break;
		case 28:
			if (bParam1)
			{
				*uParam2 = { -1280.0f, 477.1f, 93.7f /*3*/ };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1333.328f, 374.2152f, 94.938f /*3*/ };
				*uParam3 = 0;
			}
			break;
		case 69:
			if (bParam1)
			{
				*uParam2 = { 1529.7f, 477.9f, 90.2f /*3*/ };
				*uParam3 = 1;
			}
			else
			{
				*uParam2 = { 1529.595f, 405.6096f, 89.3616f /*3*/ };
				*uParam3 = 1;
			}
			break;
		case 76:
			if (bParam1)
			{
				*uParam2 = { -190.6f, 589.1f, 113.2f /*3*/ };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -136.938f, 659.54f, 112.672f /*3*/ };
				*uParam3 = 0;
			}
			break;
		case 78:
			if (bParam1)
			{
				*uParam2 = { 2884.136f, 1211.772f, 44.32313f /*3*/ };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2978.219f, 1344.3f, 42.941f /*3*/ };
				*uParam3 = 0;
			}
			break;
		case 105:
			if (bParam1)
			{
				*uParam2 = { 1196.2f, -1281.2f, 76.6f /*3*/ };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 1307.31f, -1382.5f, 75.3375f /*3*/ };
				*uParam3 = 0;
			}
			break;
	}
}

void func_53(char* sParam0)
{
	AUDIO::START_AUDIO_SCENE(sParam0);
}

int func_54(int iParam0)
{
	if (!func_74(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
	{
		return 0;
	}
	func_55(iParam0, 16);
	return VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iParam0 /*373*/].f_1);
}

void func_55(int iParam0, int iParam1)
{
	if (!func_74(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0 /*5*/] |= iParam1;
}

Vector3 func_56(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_57(Vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= (1 << 19);
	}
	if (bParam8)
	{
		iVar0 |= (1 << 17);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

bool func_58(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_59(Vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;

	iVar0 = (1 << 14);
	if (bParam4)
	{
		iVar0 |= (1 << 19);
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

char* func_60(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = func_98(func_97(func_95(iParam0), func_96(), 1, 63));
	sVar2 = func_98(func_97(sVar0, sVar1, 1, 63));
	return sVar2;
}

int func_61(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			switch (iParam1)
			{
				case 105:
					return 390;
				case 5:
					return 750;
				case 78:
					return 1050;
				case 28:
					return 420;
				case 76:
					return 460;
				case 69:
					return 630;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 23:
					return 390;
				case 5:
					return 480;
				case 78:
					return 840;
				case 28:
					return 750;
				case 76:
					return 790;
				case 69:
					return 590;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 23:
					return 750;
				case 105:
					return 480;
				case 78:
					return 510;
				case 28:
					return 1250;
				case 76:
					return 1000;
				case 69:
					return 320;
				default:
					break;
			}
			break;
		case 78:
			switch (iParam1)
			{
				case 23:
					return 1050;
				case 105:
					return 840;
				case 5:
					return 510;
				case 28:
					return 880;
				case 76:
					return 670;
				case 69:
					return 440;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 23:
					return 420;
				case 105:
					return 750;
				case 5:
					return 1250;
				case 78:
					return 880;
				case 76:
					return 360;
				case 69:
					return 920;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 23:
					return 460;
				case 105:
					return 790;
				case 5:
					return 1000;
				case 78:
					return 670;
				case 28:
					return 360;
				case 69:
					return 220;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 23:
					return 630;
				case 105:
					return 590;
				case 5:
					return 320;
				case 78:
					return 440;
				case 28:
					return 920;
				case 76:
					return 220;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_62(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_99(iParam0);
	if (bParam3)
	{
		func_100(iParam0, sParam1, iParam2);
	}
}

int func_63(int iParam0, int iParam1)
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

void func_64(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	func_101(iParam1, bParam2);
	func_102(iParam1, iParam4);
	func_103(iParam1, iParam4);
	TELEMETRY::_TELEMETRY_SHOP_PURCHASE(func_104(iParam0), func_105(iParam1), bParam2, iParam3, iParam4);
}

float func_65(int iParam0, Vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0.0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_66(bool bParam0, Vector3 vParam1, var uParam4)
{
	Vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;

	fVar5 = 40.0f;
	if (!func_67(vParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(bParam0) && !ENTITY::IS_ENTITY_DEAD(bParam0))
		{
			iVar3 = VEHICLE::_0x1180A2974D251B7B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
			iVar4 = VEHICLE::_GET_CURRENT_TRACK_FOR_TRAIN(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(bParam0));
			if (iVar3 >= 0)
			{
				vVar0 = { VEHICLE::_GET_STATION_COORS_FROM_TRAIN_STATION_DATA(iVar4, iVar3) /*3*/ };
				if (!func_67(vVar0))
				{
					*uParam4 = { func_106(vParam1, vVar0) /*3*/ };
					fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, true);
				}
			}
		}
	}
	if (fVar5 > 100.0f)
	{
		fVar5 = 100.0f;
	}
	return fVar5;
}

bool func_67(Vector3 vParam0)
{
	if ((vParam0.x == 0.0f && vParam0.y == 0.0f) && vParam0.z == 0.0f)
	{
		return true;
	}
	return false;
}

void func_68(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 5:
			if (!bParam3)
			{
				*uParam1 = { 2755.556f, -1418.491f, 45.2074f /*3*/ };
			}
			else
			{
				*uParam1 = { 2756.556f, -1418.491f, 45.2074f /*3*/ };
			}
			*uParam2 = 145.0f;
			break;
		case 23:
			if (!bParam3)
			{
				*uParam1 = { -1101.923f, -574.2673f, 81.27955f /*3*/ };
			}
			else
			{
				*uParam1 = { -1102.923f, -574.2673f, 81.27955f /*3*/ };
			}
			*uParam2 = 0.85f;
			break;
		case 28:
			if (!bParam3)
			{
				*uParam1 = { -1314.075f, 387.0378f, 94.41888f /*3*/ };
			}
			else
			{
				*uParam1 = { -1315.075f, 387.0378f, 94.41888f /*3*/ };
			}
			*uParam2 = 72.5f;
			break;
		case 69:
			*uParam1 = { 1521.333f, 419.062f, 88.96367f /*3*/ };
			if (!bParam3)
			{
				*uParam1 = { 1521.333f, 419.062f, 88.96367f /*3*/ };
			}
			else
			{
				*uParam1 = { 1522.333f, 419.062f, 88.96367f /*3*/ };
			}
			*uParam2 = 4.0f;
			break;
		case 76:
			if (!bParam3)
			{
				*uParam1 = { -168.7946f, 646.7418f, 112.5389f /*3*/ };
			}
			else
			{
				*uParam1 = { -169.7946f, 646.7418f, 112.5389f /*3*/ };
			}
			*uParam2 = -122.0f;
			break;
		case 78:
			if (!bParam3)
			{
				*uParam1 = { 2920.64f, 1273.347f, 43.50124f /*3*/ };
			}
			else
			{
				*uParam1 = { 2921.64f, 1273.347f, 43.50124f /*3*/ };
			}
			*uParam2 = 2.0f;
			break;
		case 105:
			if (!bParam3)
			{
				*uParam1 = { 1256.509f, -1317.039f, 75.2567f /*3*/ };
			}
			else
			{
				*uParam1 = { 1257.509f, -1317.039f, 75.2567f /*3*/ };
			}
			*uParam2 = 2.0f;
			break;
	}
}

void func_69(int iParam0, Vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_107(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (func_108(iParam0))
	{
		if (func_109(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_UNHITCH_HORSE(iParam0);
		}
	}
	if (func_110(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 -= iParam5 & 4;
				func_69(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 -= iParam5 & 4;
				func_69(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_110(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (func_110(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iParam0, false);
		}
	}
	else if (func_110(iParam5, 129))
	{
		if (func_110(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, func_110(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_110(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (func_108(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_UNHITCH_HORSE(iVar6);
			if (!func_110(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !func_110(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.0f, 1.0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0.0f, 1.0f);
		}
	}
}

void func_70(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_71(var uParam0)
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
}

void func_72(var uParam0, int iParam1)
{
	*uParam0 -= *uParam0 & iParam1;
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 |= iParam1;
}

bool func_74(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

struct<4> /*32*/ func_75()
{
	struct<4> /*32*/ sVar0;

	return sVar0;
}

struct<4> /*32*/ func_76(bool bParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> /*32*/ sVar0;

	if (!func_77(bParam0, 0))
	{
		return sVar0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_78(bParam6), &uParam1, bParam0, iParam5, &sVar0);
	return sVar0;
}

bool func_77(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_78(bool bParam0)
{
	if (func_83() == -1)
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

struct<5> /*40*/ func_79(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> /*40*/ sVar0;
	struct<10> /*80*/ sVar5;
	struct<10> /*80*/ sVar27;

	sVar0 = { func_40(bParam1) /*4*/ };
	sVar0.f_4 = joaat("SLOTID_SATCHEL");
	switch (func_111(bParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0 = { func_76(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
		case joaat("WEAPON"):
			sVar0 = { func_112(bParam1) /*4*/ };
			if (bParam2 && func_113(bParam0, 1))
			{
				sVar5.f_9 = joaat("SLOTID_NONE");
				if (!func_114(bParam0, &sVar0, joaat("SLOTID_WEAPON_0"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_0");
				}
				else if (!func_114(bParam0, &sVar0, joaat("SLOTID_WEAPON_1"), 0))
				{
					sVar0.f_4 = joaat("SLOTID_WEAPON_1");
				}
				else if (func_115(bParam0, &sVar5, joaat("SLOTID_WEAPON_0")))
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
			sVar0 = { func_116(bParam1) /*4*/ };
			switch (func_117(bParam0))
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
			if (func_118(bParam0, joaat("CI_CATEGORY_CAMP")))
			{
				sVar0 = { func_76(joaat("KIT_CAMP"), sVar0, joaat("SLOTID_SATCHEL"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("KIT_CAMP"));
			}
			else if (func_118(bParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				sVar0 = { func_76(joaat("WARDROBE"), sVar0, joaat("SLOTID_WARDROBE"), bParam1) /*4*/ };
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_UPGRADE")))
			{
				sVar0.f_4 = joaat("SLOTID_UPGRADE");
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_SATCHEL")))
			{
				sVar0.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_WARDROBE")))
			{
				sVar0.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, joaat("SLOTID_CURRENCY")))
			{
				sVar27.f_9 = joaat("SLOTID_NONE");
				if (!func_119(sVar0, &sVar27, bParam1, 0))
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
				sVar0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, joaat("CHARACTER"));
				if (sVar0.f_4 == 0)
				{
				}
			}
			break;
	}
	return sVar0;
}

bool func_80(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (func_120(bParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_121(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_78(bParam4), bParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_81(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> /*96*/ sVar0;
	int iVar14;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(uParam1))
	{
		return false;
	}
	if (func_120(bParam0))
	{
		return false;
	}
	sVar0.f_9 = joaat("SLOTID_NONE");
	if (!func_119(*uParam1, &sVar0, bParam6, 0))
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
	if (!func_121(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_78(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_82(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_83()
{
	return Global_1572887.f_12;
}

bool func_84(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_85(int iParam0)
{
	Global_1327479.f_3 = iParam0;
}

int func_86()
{
	return Global_1310750.f_16037;
}

bool func_87(int iParam0, int iParam1)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/] & iParam1 != 0;
}

bool func_88(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	if (func_122(64) && func_123(iParam0))
	{
		return true;
	}
	return Global_1310750[iParam0 /*111*/].f_46;
}

bool func_89(int iParam0)
{
	if (!func_84(iParam0))
	{
		return false;
	}
	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_90(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_84(Global_1310750.f_13321[iParam0 /*9*/]))
	{
		return;
	}
	iVar0 = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[iVar0 /*111*/].f_48 = 0;
	func_124(iParam0);
	Global_1310750.f_16037--;
}

int func_91(int iParam0)
{
	iParam0 = func_82(iParam0);
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

int func_92(int iParam0)
{
	iParam0 = func_82(iParam0);
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

float func_93(int iParam0)
{
	iParam0 = func_82(iParam0);
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

float func_94(float fParam0, float fParam1, float fParam2)
{
	return (((1.0f - fParam2) * fParam0) + (fParam2 * fParam1));
}

char* func_95(int iParam0)
{
	if (func_125((1 << 19)))
	{
		return "0600_";
	}
	if (iParam0 == -1)
	{
		if (func_126(23, 2))
		{
			return "0000_";
		}
		else if (func_126(2, 5))
		{
			return "0300_";
		}
		else if (func_126(5, 8))
		{
			return "0600_";
		}
		else if (func_126(8, 11))
		{
			return "0900_";
		}
		else if (func_126(11, 14))
		{
			return "1200_";
		}
		else if (func_126(14, 17))
		{
			return "1500_";
		}
		else if (func_126(17, 20))
		{
			return "1800_";
		}
		else if (func_126(20, 23))
		{
			return "2100_";
		}
		else
		{
			return "1200_";
		}
	}
	switch (iParam0)
	{
		case 0:
			if (func_127())
			{
				return "2100_";
			}
			else
			{
				return "0000_";
			}
			break;
		case 6:
			if (func_127())
			{
				return "0300_";
			}
			else
			{
				return "0600_";
			}
			break;
		case 12:
			if (func_127())
			{
				return "0900_";
			}
			else
			{
				return "1200_";
			}
			break;
		case 18:
			if (func_127())
			{
				return "1500_";
			}
			else
			{
				return "1800_";
			}
			break;
	}
	return "1200_";
}

char* func_96()
{
	int iVar0;

	iVar0 = func_128();
	if (func_125((1 << 19)))
	{
		return "01Clear";
	}
	switch (iVar0)
	{
		case joaat("SANDSTORM"):
		case joaat("OVERCASTDARK"):
		case joaat("BLIZZARD"):
		case joaat("WHITEOUT"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
		case joaat("GROUNDBLIZZARD"):
			return "04Storm";
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("FOG"):
		case joaat("SHOWER"):
		case joaat("SNOW"):
		case joaat("SLEET"):
		case joaat("SNOWLIGHT"):
			return "03Clouds";
		case joaat("HIGHPRESSURE"):
		case joaat("CLOUDS"):
		case joaat("MISTY"):
		case joaat("SUNNY"):
		case joaat("SNOWCLEARING"):
			return "01Clear";
		default:
			break;
	}
	return "01Clear";
	return "01Clear";
}

struct<8> /*64*/ func_97(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	char cVar10[64];
	struct<8> /*64*/ sVar18;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (iVar0 >= iParam3)
	{
		strcpy_s(&cVar2, 64, HUD::_0x806862E5D266CF38(sParam0, (iVar0 - iParam3), iVar0));
	}
	else
	{
		strcpy_s(&cVar2, 64, sParam0);
	}
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar2);
	if (iVar1 >= iParam3)
	{
		strcpy_s(&cVar10, 64, HUD::_0x806862E5D266CF38(sParam1, (iVar1 - iParam3), iVar1));
	}
	else
	{
		strcpy_s(&cVar10, 64, sParam1);
	}
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar10);
	if (bParam2)
	{
		if ((iVar0 + iVar1) >= iParam3)
		{
			strcpy_s(&cVar10, 64, HUD::_0x806862E5D266CF38(&cVar10, iVar0, iVar1));
		}
	}
	else if ((iVar0 + iVar1) >= iParam3)
	{
		strcpy_s(&cVar2, 64, HUD::_0x806862E5D266CF38(&cVar2, iVar1, iVar0));
	}
	sVar18 = { cVar2 /*8*/ };
	strcat_s(&sVar18, 64, &cVar10);
	return sVar18;
}

char* func_98(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_99(int iParam0)
{
	struct<2> /*16*/ sVar0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_129(1) < iParam0)
	{
		iParam0 = func_129(1);
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	sVar0 = { func_130(joaat("CAREER_CASH")) /*2*/ };
	STATS::_STAT_ID_DECREMENT_INT(&sVar0, iParam0);
}

void func_100(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_131(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("ITEMTYPE_CASH"), 1, joaat("COLOR_RED"), 0, 0, 0, 1);
}

int func_101(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_83() == 0)
	{
		return 1;
	}
	if (!func_77(bParam1, 0))
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0 /*45*/] = bParam1;
	return 1;
}

int func_102(int iParam0, int iParam1)
{
	int iVar0;

	if (func_83() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	func_133(func_130(joaat("LIFETIME_MONEY_SPENT_IN_SHOPS")), iParam1);
	Global_20710[iVar0 /*45*/].f_43 += iParam1;
	return 1;
}

int func_103(int iParam0, int iParam1)
{
	int iVar0;

	if (func_83() == 0)
	{
		return 1;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_132(iParam0);
	if (iVar0 >= 25 || iVar0 <= -1)
	{
		return 0;
	}
	Global_20710[iVar0 /*45*/].f_44 += iParam1;
	return 1;
}

int func_104(int iParam0)
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

int func_105(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return joaat("SHOP_BLK_GENERAL_STORE");
		case 8:
			return joaat("SHOP_BLK_GUNSMITH");
		case 9:
			return joaat("SHOP_BLK_BARBER");
		case 17:
			return joaat("SHOP_BLK_TAILOR");
		case 13:
			return joaat("SHOP_BLK_HORSE_SHOP");
		case 14:
			return joaat("SHOP_BLK_POST_OFFICE");
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
		case 108:
			return joaat("SHOP_BLK_HORSE_FENCE_MP");
		case 12:
			return joaat("SHOP_BLK_PHOTO_STUDIO");
		case 16:
			return joaat("SHOP_BLK_NEWSPAPER_BOY");
		case 106:
			return joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN");
		case 107:
			return joaat("SHOP_BLK_COACH");
		case 6:
			return joaat("SHOP_BLK_BANK");
		case 10:
			return joaat("SHOP_BLK_BUTCHER");
		case 11:
			return joaat("SHOP_BLK_BARTENDER");
		case 19:
			return joaat("SHOP_EMR_GENERAL_STORE");
		case 20:
			return joaat("SHOP_EMR_POST_OFFICE");
		case 21:
			return joaat("SHOP_EMR_TRAIN_STATION");
		case 18:
			return joaat("SHOP_EMR_FENCE");
		case 105:
			return joaat("SHOP_EMR_HORSE_FENCE_MP");
		case 22:
			return joaat("SHOP_LAG_BAIT_STORE");
		case 118:
			return joaat("SHOP_LAG_HORSE_FENCE_MP");
		case 39:
			return joaat("SHOP_SDN_DOCTOR");
		case 42:
			return joaat("SHOP_SDN_GENERAL_STORE");
		case 41:
			return joaat("SHOP_SDN_FENCE");
		case 43:
			return joaat("SHOP_SDN_GUNSMITH");
		case 36:
			return joaat("SHOP_SDN_BANK");
		case 37:
			return joaat("SHOP_SDN_BARBER");
		case 38:
			return joaat("SHOP_SDN_BUTCHER");
		case 40:
			return joaat("SHOP_SDN_EXOTIC");
		case 44:
			return joaat("SHOP_SDN_HORSE_SHOP");
		case 45:
			return joaat("SHOP_SDN_POST_OFFICE");
		case 46:
			return joaat("SHOP_SDN_TRAIN_STATION");
		case 47:
			return joaat("SHOP_SDN_TAILOR");
		case 55:
			return joaat("SHOP_SDN_TRAPPER");
		case 111:
			return joaat("SHOP_SDN_HORSE_FENCE_MP");
		case 48:
			return joaat("SHOP_SDN_MARKET");
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
		case 50:
			return -1673339528;
		case 53:
			return joaat("SHOP_SDN_BARTENDER_SLUM");
		case 54:
			return joaat("SHOP_SDN_PHOTO_STUDIO");
		case 51:
			return joaat("SHOP_SDN_NEWSPAPER_BOY");
		case 109:
			return joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN");
		case 110:
			return joaat("SHOP_SDN_COACH");
		case 52:
			return joaat("SHOP_SDN_BARTENDER");
		case 23:
			return joaat("SHOP_RGG_POST_OFFICE");
		case 24:
			return joaat("SHOP_RGG_TRAIN_STATION");
		case 28:
			return joaat("SHOP_RHO_GENERAL_STORE");
		case 27:
			return joaat("SHOP_RHO_FENCE");
		case 29:
			return joaat("SHOP_RHO_GUNSMITH");
		case 30:
			return joaat("SHOP_RHO_POST_OFFICE");
		case 26:
			return joaat("SHOP_RHO_BUTCHER");
		case 31:
			return joaat("SHOP_RHO_TRAIN_STATION");
		case 113:
			return joaat("SHOP_RHO_HORSE_FENCE_MP");
		case 32:
			return joaat("SHOP_RHO_NEWSPAPER_BOY");
		case 112:
			return joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN");
		case 25:
			return joaat("SHOP_RHO_BANK");
		case 33:
			return joaat("SHOP_RHO_BARTENDER");
		case 60:
			return joaat("SHOP_STR_BUTCHER");
		case 61:
			return joaat("SHOP_STR_GENERAL_STORE");
		case 62:
			return joaat("SHOP_STR_WELCOME_CENTER");
		case 63:
			return joaat("SHOP_STR_HORSE_SHOP");
		case 65:
			return joaat("SHOP_STR_POST_OFFICE");
		case 115:
			return joaat("SHOP_STR_HORSE_FENCE_MP");
		case 64:
			return joaat("SHOP_STR_NEWSPAPER_BOY");
		case 114:
			return joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN");
		case 66:
			return joaat("SHOP_STR_BARTENDER");
		case 73:
			return joaat("SHOP_VAL_DOCTOR");
		case 74:
			return joaat("SHOP_VAL_GENERAL_STORE");
		case 75:
			return joaat("SHOP_VAL_GUNSMITH");
		case 69:
			return joaat("SHOP_VAL_BARBER");
		case 77:
			return joaat("SHOP_VAL_POST_OFFICE");
		case 76:
			return joaat("SHOP_VAL_HORSE_SHOP");
		case 72:
			return joaat("SHOP_VAL_BUTCHER");
		case 78:
			return joaat("SHOP_VAL_TRAIN_STATION");
		case 104:
			return joaat("SHOP_VAL_HORSE_FENCE_MP");
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
		case 81:
			return joaat("SHOP_VAL_BARTENDER_SLUM");
		case 80:
			return joaat("SHOP_VAL_NEWSPAPER_BOY");
		case 79:
			return joaat("SHOP_VAL_HOTEL");
		case 102:
			return joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN");
		case 103:
			return joaat("SHOP_VAL_COACH");
		case 68:
			return joaat("SHOP_VAL_BANK");
		case 70:
			return joaat("SHOP_VAL_BARTENDER");
		case 35:
			return joaat("SHOP_SCM_HORSE_SHOP");
		case 86:
			return joaat("SHOP_VAN_POST_OFFICE");
		case 85:
			return joaat("SHOP_VAN_TRAIN_STATION");
		case 82:
			return joaat("SHOP_VAN_FENCE");
		case 117:
			return joaat("SHOP_VAN_HORSE_FENCE_MP");
		case 84:
			return joaat("SHOP_VAN_HORSE_SHOP");
		case 83:
			return joaat("SHOP_VAN_BARTENDER");
		case 116:
			return joaat("SHOP_VAN_COACH");
		case 1:
			return joaat("SHOP_ASB_NEWSPAPER_BOY");
		case 120:
			return joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN");
		case 0:
			return joaat("SHOP_ASB_GUNSMITH");
		case 2:
			return joaat("SHOP_ASB_POST_OFFICE");
		case 3:
			return joaat("SHOP_ASB_TRAIN_STATION");
		case 121:
			return joaat("SHOP_ASB_HORSE_FENCE_MP");
		case 89:
			return joaat("SHOP_WAL_POST_OFFICE");
		case 87:
			return joaat("SHOP_WAL_GENERAL_STORE");
		case 88:
			return joaat("SHOP_WAL_TRAIN_STATION");
		case 101:
			return joaat("SHOP_DYNAMIC");
		case 126:
			return joaat("SHOP_WILDERNESS_SUPPLIES");
		case 127:
			return joaat("SHOP_ANYWHERE_HANDHELD");
		case 124:
			return joaat("SHOP_MAP_HORSE_FENCE_MP");
		case 149:
			return joaat("SHOP_WEAPON_MOD_STORE");
		case 150:
			return joaat("SHOP_CLOTHING");
		case 151:
			return joaat("SHOP_CAMP_SHAVING");
		case 152:
			return joaat("SHOP_WARDROBE");
		case 128:
			return joaat("SHOP_BVH_DOCTOR");
		case 129:
			return joaat("SHOP_BVH_GENERAL_STORE");
		case 130:
			return joaat("SHOP_BVH_GUNSMITH");
		case 131:
			return joaat("SHOP_BVH_HORSE_TRAINER");
		case 59:
			return joaat("SHOP_BVH_PEARSON");
		case 132:
			return joaat("SHOP_CLM_DOCTOR");
		case 133:
			return joaat("SHOP_CLM_GENERAL_STORE");
		case 134:
			return joaat("SHOP_CLM_GUNSMITH");
		case 135:
			return joaat("SHOP_CLM_HORSE_TRAINER");
		case 57:
			return joaat("SHOP_CLM_PEARSON");
		case 137:
			return joaat("SHOP_HSO_DOCTOR");
		case 138:
			return joaat("SHOP_HSO_GENERAL_STORE");
		case 139:
			return joaat("SHOP_HSO_GUNSMITH");
		case 140:
			return joaat("SHOP_HSO_HORSE_TRAINER");
		case 56:
			return joaat("SHOP_HSO_PEARSON");
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
		case 145:
			return joaat("SHOP_SHB_DOCTOR");
		case 146:
			return joaat("SHOP_SHB_GENERAL_STORE");
		case 147:
			return joaat("SHOP_SHB_GUNSMITH");
		case 148:
			return joaat("SHOP_SHB_HORSE_TRAINER");
		case 58:
			return joaat("SHOP_SHB_PEARSON");
		case 136:
			return joaat("SHOP_CLM_HORSE_FENCE");
		case 119:
			return joaat("SHOP_CKT_HORSE_FENCE_MP");
		case 122:
			return joaat("SHOP_BUT_HORSE_FENCE_MP");
		case 95:
			return joaat("SHOP_AMD_GENERAL_STORE");
		case 97:
			return joaat("SHOP_AMD_BARTENDER");
		case 96:
			return joaat("SHOP_AMD_POST_OFFICE");
		case 90:
			return joaat("SHOP_TBL_GENERAL_STORE");
		case 93:
			return joaat("SHOP_TBL_BARTENDER");
		case 91:
			return joaat("SHOP_TBL_GUNSMITH");
		case 92:
			return joaat("SHOP_TBL_BUTCHER");
		case 94:
			return joaat("SHOP_TBL_HORSE_SHOP");
		case 98:
			return joaat("SHOP_RYC_FENCE");
		case 125:
			return joaat("SHOP_THL_FENCE");
		case 123:
			return joaat("SHOP_BEN_HORSE_FENCE_MP");
		case 99:
			return joaat("SHOP_BEN_POST_OFFICE");
		case 100:
			return joaat("SHOP_BEN_TRAIN_STATION");
		case 4:
			return joaat("SHOP_BGV_TRAPPER_1");
		case 5:
			return joaat("SHOP_BGV_TRAPPER_2");
		case 34:
			return joaat("SHOP_ROA_TRAPPER");
		case 67:
			return joaat("SHOP_TAL_TRAPPER");
		default:
			break;
	}
	return 0;
}

Vector3 func_106(Vector3 vParam0, Vector3 vParam3)
{
	Vector3 vVar0;

	vVar0.x = ((vParam0.x + vParam3.x) * 0.5f);
	vVar0.f_1 = ((vParam0.y + vParam3.y) * 0.5f);
	vVar0.f_2 = ((vParam0.z + vParam3.z) * 0.5f);
	return vVar0;
}

int func_107(var uParam0)
{
	return uParam0;
}

bool func_108(int iParam0)
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

bool func_109(int iParam0)
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

bool func_110(int iParam0, int iParam1)
{
	return iParam0 & iParam1 != 0;
}

int func_111(bool bParam0)
{
	Vector3 vVar0;

	if (!func_77(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> /*32*/ func_112(bool bParam0)
{
	int iVar0;

	iVar0 = func_78(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
		{
			Global_1223200 = { func_76(joaat("CARRIED_WEAPONS"), func_40(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), bParam0) /*4*/ };
		}
		return Global_1223200;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
		{
			Global_1223208 = { func_76(joaat("CARRIED_WEAPONS"), func_40(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0) /*4*/ };
		}
		return Global_1223208;
	}
	return func_76(joaat("CARRIED_WEAPONS"), func_40(bParam0), joaat("SLOTID_CARRIED_WEAPONS"), 0);
}

bool func_113(bool bParam0, bool bParam1)
{
	if (func_117(bParam0) == joaat("CI_CATEGORY_WEAPON_UNIQUE"))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_134(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_114(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	return func_41(bParam0, *uParam1, iParam2, iParam3) > 0;
}

bool func_115(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;

	if (func_135(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0.0f;
	}
	return false;
}

struct<4> /*32*/ func_116(bool bParam0)
{
	int iVar0;

	iVar0 = func_78(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
		{
			Global_1223204 = { func_76(joaat("EMOTE_ITEM"), func_40(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0) /*4*/ };
		}
		return Global_1223204;
	}
	return func_76(joaat("EMOTE_ITEM"), func_40(bParam0), joaat("SLOTID_EMOTE_ITEM"), 0);
}

int func_117(bool bParam0)
{
	struct<2> /*16*/ sVar0;

	if (!func_77(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &sVar0))
	{
		return 0;
	}
	return sVar0.f_1;
}

bool func_118(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_117(bParam0);
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_119(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_78(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

bool func_120(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_121(bool bParam0)
{
	if (func_83() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_78(bParam0));
}

bool func_122(int iParam0)
{
	return Global_1310750.f_16035 & iParam0 != 0;
}

bool func_123(int iParam0)
{
	return func_87(iParam0, Global_1310750.f_16072 | 64);
}

void func_124(int iParam0)
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

bool func_125(int iParam0)
{
	return Global_1392040 & iParam0 != 0;
}

int func_126(int iParam0, int iParam1)
{
	return func_136(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

bool func_127()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, (1 << 16)), 0))
	{
		return true;
	}
	return false;
}

int func_128()
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

int func_129(int iParam0)
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

struct<2> /*16*/ func_130(int iParam0)
{
	struct<2> /*16*/ sVar0;

	sVar0.f_0 = iParam0;
	return sVar0;
}

int func_131(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
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
	func_137(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_132(int iParam0)
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

void func_133(var uParam0, int iParam1, int iParam2)
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_134(int iParam0)
{
	if (!func_138(iParam0))
	{
		return false;
	}
	return func_139(iParam0);
}

bool func_135(bool bParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_78(0);
	*uParam1 = { func_76(bParam0, func_112(0), iParam3, 0) /*4*/ };
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

int func_136(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_137(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXT"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTUREDICT"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FEEDTEXTURENAME"), iParam2);
}

bool func_138(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_139(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_40.f_7857[iVar1], iVar2);
}

